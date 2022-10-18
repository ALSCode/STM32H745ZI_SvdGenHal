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

	void on(auto cnt)
	{
		leds[cnt]->on();
	}

	void off(auto cnt)
	{
		leds[cnt]->off();
	}

private:
	std::array<std::unique_ptr<LedBase>, sizeof...(Leds)> leds;
};

int main()
{
	ClockInit();

	LedMux<
		Led<GPIOB, 0>,
		Led<GPIOB, 14>,
		Led<GPIOE, 1>>
		leds;

	Button<GPIOC, 13> button;

	while (1) {

		if (button.read()) {
			leds.on(0u);
			leds.on(1u);
			leds.off(2u);
		} else {
			leds.off(0u);
			leds.off(1u);
			leds.on(2u);
		}
	}
}
