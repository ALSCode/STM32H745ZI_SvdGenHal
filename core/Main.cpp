#include "Main.h"

#include "dbgmcuregisters.hpp"
#include "fpucpacrregisters.hpp"
#include "scbregisters.hpp"
#include "flashregisters.hpp"
#include "fmcregisters.hpp"
#include "extiregisters.hpp"
#include "rccregisters.hpp" // For RCC
#include "gpiocregisters.hpp" // For Gpioc
#include "gpiobregisters.hpp" // For Gpiob
#include "gpioeregisters.hpp" // For Gpioe

#include "led.hpp"
#include "button.hpp"

#include <array>
#include <memory>
#include <atomic>
#include <cassert>

void SystemInit()
{
	// Enable FPU unit
	FPU_CPACR::CPACR::Set((3UL << (10 * 2)) | (3UL << (11 * 2))); // set CP10 and CP11 Full Access

	// SEVONPEND enabled so that an interrupt coming from the CPU(n) interrupt signal is
	// detectable by the CPU after a WFI/WFE instruction.
	SCB::SCR::Set(1UL << 4);

	if (7UL > Flash::ACR::LATENCY::Get()) {
		Flash::ACR::LATENCY::Write(7UL);
	}

	RCC::CR::HSION::Value1::Set();

	RCC::CFGR::Write(0); // Reset CFGR register

	// Reset HSEON, HSECSSON, CSION, RC48ON, CSIKERON, PLL1ON, PLL2ON and PLL3ON bits
	RCC::CR::Write(RCC::CR::Get() & 0xEAF6ED7FU);

	// Decreasing the number of wait states because of lower CPU frequency
	if (7UL < Flash::ACR::LATENCY::Get()) {
		Flash::ACR::LATENCY::Write(7UL);
	}

	RCC::D1CFGR::Write(0);
	RCC::D2CFGR::Write(0);
	RCC::D3CFGR::Write(0);
	RCC::PLLCKSELR::Write(0x02020200);
	RCC::PLLCFGR::Write(0x01FF0000);
	RCC::PLL1DIVR::Write(0x01010280);
	RCC::PLL1FRACR::Write(0);
	RCC::PLL2DIVR::Write(0x01010280);
	RCC::PLL2FRACR::Write(0);
	RCC::PLL3DIVR::Write(0x01010280);
	RCC::PLL3FRACR::Write(0);

	RCC::CR::Write(RCC::CR::Get() & 0xFFFBFFFFU); // Reset HSEBYP bit
	RCC::CIER::Write(0);

	/* Enable CortexM7 HSEM EXTI line (line 78)*/
	EXTI::CPUEMR3Pack<EXTI::CPUEMR3::MR78::Value1>::Set();

	if ((DBGMCU::IDC::Get() & 0xFFFF0000U) < 0x20000000U) {
		/* if stm32h7 revY*/
		/* Change  the switch matrix read issuing capability to 1 for the AXI SRAM target (Target 7) */
		*reinterpret_cast<volatile uint32_t *>(0x51008108) = 0x000000001U;
	}

	/*
	 * Disable the FMC bank1 (enabled after reset).
	 * This, prevents CPU speculation access on this bank which blocks the use of FMC during
	 * 24us. During this time the others FMC master (such as LTDC) cannot use it!
	 */
	FMC::BCR1::Write(0x000030D2);

	// Vector Table Relocation in Internal FLASH
	SCB::VTOR::Write(0x08000000UL);
}

void ClockInit()
{
	RCC::CR::HSEON::Value1::Set();
	RCC::CFGR::SW::Value2::Set();

	RCC::AHB4ENRPack<RCC::AHB4ENR::GPIOAEN::Value1,
		RCC::AHB4ENR::GPIOBEN::Value1,
		RCC::AHB4ENR::GPIOCEN::Value1,
		RCC::AHB4ENR::GPIOEEN::Value1>::Set();
}

template<typename... Leds>
class LedMux {
public:
	LedMux():
		leds{std::make_unique<Leds>()...}
	{
	}

	void on(size_t color)
	{
		leds[color]->on();
	}

	void off(size_t color)
	{
		leds[color]->off();
	}

private:
	std::array<std::unique_ptr<LedBase>, sizeof...(Leds)> leds;
};

class MockCriticalSection {
};

struct Shifter {
	static std::atomic<size_t> value;
};
inline std::atomic<size_t> Shifter::value{std::numeric_limits<size_t>::max()};

template<uint32_t FieldSize, typename CriticalSection = MockCriticalSection>
struct Reg {
public:
	Reg &operator[](size_t pos)
	{
		Shifter::value.store(pos);
		return *this;
	}
	Reg &operator=(uint32_t value)
	{
		size_t pos = Shifter::value.exchange(std::numeric_limits<size_t>::max());

		if (pos != std::numeric_limits<size_t>::max()) {

			CriticalSection cs;
			uint32_t current = reg;
			current &= ~(((1u << FieldSize) - 1u) << pos * FieldSize);
			current |= (value << (pos * FieldSize));
			reg = current;
		}

		return *this;
	}

private:
	volatile uint32_t reg;
};

static_assert(sizeof(Reg<1>) == 4, "");

struct Port {
	Reg<2> moder;
	Reg<1> otyper;
	Reg<2> ospeedr;
	Reg<2> pupdr;
	Reg<1> idr;
	Reg<1> odr;
	Reg<1> bsrr;
	Reg<1> lckr;
	Reg<4> afrl;
	Reg<4> afrh;
} orange [[gnu::section(".Gpioe")]];

static_assert(sizeof(Port) == 40, "");

int main()
{
	ClockInit();

	orange.moder[1] = 1u; // 01: General purpose output mode
	orange.ospeedr[1] = 0u; // 00: Low speed

	LedMux<
		Led<GPIOB, 0>,
		Led<GPIOB, 14>>
		leds;

	Button<GPIOC, 13> button;

	enum : size_t {
		Green,
		Red,
		Orange
	};

	while (1) {

		if (button.read()) {
			leds.on(Red);
			orange.bsrr[17] = 1u;
			leds.on(Green);
		} else {
			leds.off(Red);
			orange.bsrr[1] = 1u;
			leds.off(Green);
		}
	}
}
