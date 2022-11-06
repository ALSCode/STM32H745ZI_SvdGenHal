#include "Main.h"

#include "gpiobregisters.hpp" // For Gpiob
#include "gpiocregisters.hpp" // For Gpioc

#include "button.hpp"
#include "led_mux.hpp"

#include <cassert>

volatile uint32_t moder_e [[gnu::section(".moder_e")]];
volatile uint32_t odr_e [[gnu::section(".odr_e")]];

enum Access : uint8_t {
	R,
	W,
	RW,
};

enum FieldShift : uint8_t {
	SizePos = 8,
	MaskPos = 16,
	AccessPos = 24,
	Mask = 255,
};

enum Moder : uint32_t {
	moder1 = (RW << AccessPos) | ((1U << 2) - 1U) << MaskPos | (2u << SizePos) | 2u,
	// other pins
};

enum Odr : uint32_t {
	odr1 = (RW << AccessPos) | (1U << MaskPos) | (1u << SizePos) | 1u,
	// other pins
};

class MockCriticalSection {
};

template<volatile uint32_t &R, typename Name, typename CriticalSection = MockCriticalSection>
struct Reg {
public:
	[[nodiscard]] Reg &operator[](Name aField)
	{
		field = aField;
		return *this;
	}

	Reg &operator=(uint32_t value)
	{
		[[maybe_unused]] CriticalSection cs;

		auto access = static_cast<Access>((field >> AccessPos) & Mask);

		if (access == W || access == RW) {
			uint32_t mask = (field >> MaskPos) & Mask;
			uint32_t pos = field & Mask;
			uint32_t current = reg;

			current &= ~(mask << pos);
			current |= (value << pos);
			reg = current;
		}
		return *this;
	}

private:
	volatile uint32_t &reg{R};
	Name field;
};

struct Port {
	Reg<moder_e, Moder> moder;
	Reg<odr_e, Odr> odr;
};

int main()
{
	ClockInit();

	Port orange;
	orange.moder[moder1] = 1u; // 01: General purpose output mode

	LedMux<Led<GPIOB, 0>, Led<GPIOB, 14>> leds;
	Button<GPIOC, 13> button;

	while (1) {

		if (button.read()) {
			leds.on(Red);
			leds.on(Green);

			orange.odr[odr1] = 0u;

		} else {
			leds.off(Red);
			leds.off(Green);

			orange.odr[odr1] = 1u;
		}
	}
}
