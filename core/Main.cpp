#include "Main.h"
#include "Mapped.hpp"

#include "gpiobregisters.hpp" // For Gpiob
#include "gpiocregisters.hpp" // For Gpioc

#include "tt_variant.hpp"
#include "button.hpp"
#include "led_mux.hpp"

#include <cassert>
#include <variant>

class MockCriticalSection {};

enum Access : uint8_t {
	R,
	W,
	RW
};

template<Access A, uint32_t S, uint32_t P>
struct FieldTraits {
	static constexpr Access access{A};
	static constexpr uint32_t pos{P};
	static constexpr uint32_t size{S};
	static constexpr uint32_t mask{((1U << S) - 1U)};
};

// Moder Field Traits
using TraitsModer0 = FieldTraits<RW, 2u, 0u>;
using TraitsModer1 = FieldTraits<RW, 2u, 2u>;
using TraitsModer14 = FieldTraits<RW, 2u, 28u>;

// Odr Field Traits
using TraitsOdr0 = FieldTraits<RW, 1u, 0u>;
using TraitsOdr1 = FieldTraits<RW, 1u, 1u>;
using TraitsOdr14 = FieldTraits<RW, 1u, 14u>;

template<typename R, typename T, typename CriticalSection = MockCriticalSection>
struct Field {

	template<uint32_t V>
	static void set()
	{
		static_assert(V <= T::mask, "Value is greater than field!");

		CriticalSection s;
		R::reg |= (V << T::pos);
	}

	template<uint32_t V>
	static void write()
	{
		static_assert(V <= T::mask, "Value is greater than field!");

		CriticalSection s;
		uint32_t current = R::reg;
		current &= ~(T::mask << T::pos);
		current |= (V << T::pos);
		R::reg = current;
	}
};

// Moder Fields
using ModerField0 = Field<ModerB, TraitsModer0>;
using ModerField1 = Field<ModerE, TraitsModer1>;
using ModerField14 = Field<ModerB, TraitsModer14>;
// Odr Fields
using OdrField0 = Field<OdrB, TraitsOdr0>;
using OdrField1 = Field<OdrE, TraitsOdr1>;
using OdrField14 = Field<OdrB, TraitsOdr14>;

static_assert(sizeof(ModerField0) == 1, "");

template<typename M, typename O>
struct NewLed {

	void init()
	{
		M::template write<1u>();
	}

	void on()
	{
		O::template write<1u>();
	}

	void off()
	{
		O::template write<0u>();
	}
};

using GreenLed = NewLed<ModerField0, OdrField0>;
using RedLed = NewLed<ModerField14, OdrField14>;
using OrangeLed = NewLed<ModerField1, OdrField1>;

static_assert(sizeof(GreenLed) == 1, "");

// template<typename... Leds>
// class LedMuxNew {
// public:
// 	LedMuxNew()
// 	{
// 		init(leds, std::index_sequence_for<Leds...>{});
// 	}

// 	void on(size_t color)
// 	{
// 		onImpl(leds, color);
// 	}

// 	void off(size_t color)
// 	{
// 		offImpl(leds, color);
// 	}

// private:
// 	template<class Tuple, std::size_t... Is>
// 	void init(Tuple &t, std::index_sequence<Is...>)
// 	{
// 		(std::get<Is>(t).init(), ...);
// 	}

// 	template<class Tuple, size_t N = 0>
// 	void onImpl(Tuple &tup, size_t idx)
// 	{
// 		if (N == idx) {
// 			return std::get<N>(tup).on();
// 		}

// 		if constexpr (N + 1 < std::tuple_size_v<Tuple>) {
// 			return onImpl<Tuple, N + 1>(tup, idx);
// 		}
// 	}

// 	template<class Tuple, size_t N = 0>
// 	void offImpl(Tuple &tup, size_t idx)
// 	{
// 		if (N == idx) {
// 			std::get<N>(tup).off();
// 			return;
// 		}

// 		if constexpr (N + 1 < std::tuple_size_v<Tuple>) {
// 			return offImpl<Tuple, N + 1>(tup, idx);
// 		}
// 	}

// 	std::tuple<Leds...> leds;
// };


template<typename... Leds>
class LedMuxNew {
public:
	using var_t = Variant<Leds...>;
	// using var_t = std::variant<Leds...>;

	LedMuxNew():
		leds{var_t{Leds{}}...}
	{
		(Leds{}.init(), ...);
	}

	constexpr void on(size_t color)
	{
		// std::visit([](auto &led) { led.on(); }, leds[color]);
		leds[color].visit([](auto &led) { led.on(); });
	}

	constexpr void off(size_t color)
	{
		// std::visit([](auto &led) { led.off(); }, leds[color]);
		leds[color].visit([](auto &led) { led.off(); });
	}

private:
	var_t leds[sizeof...(Leds)];
};

int main()
{
	ClockInit();

	// LedMux<Led<GPIOB, 0>, Led<GPIOB, 14>> leds;
	LedMuxNew<GreenLed, RedLed, OrangeLed> leds;
	
	Button<GPIOC, 13> button;

	while (1) {

		if (button.read()) {
			leds.on(Green);
			leds.on(Red);
			leds.off(Orange);
		} else {
			leds.off(Green);
			leds.off(Red);
			leds.on(Orange);
		}
	}
}
