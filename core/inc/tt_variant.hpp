#ifndef CORE_TT_VARIANT_H_
#define CORE_TT_VARIANT_H_

#include <cstring>
#include <memory>
#include <concepts>
#include <utility>
#include <variant>

/*----------------------------------------------------------------------------*/
// Kris Jusiak: The Nth Element: A Case Study https://youtu.be/LfOh0DwTP00

// Get type by index
template <std::size_t n,
          typename T0 = void,
          typename T1 = void,
          typename T2 = void,
          typename T3 = void,
          typename T4 = void,
          typename T5 = void,
          typename T6 = void,
          typename T7 = void,
          typename T8 = void,
          typename T9 = void,
          typename ... Ts>
constexpr auto get_type_impl() {
  /**/ if constexpr ( n == 0 ) return std::type_identity<T0>{};
  else if constexpr ( n == 1 ) return std::type_identity<T1>{};
  else if constexpr ( n == 2 ) return std::type_identity<T2>{};
  else if constexpr ( n == 3 ) return std::type_identity<T3>{};
  else if constexpr ( n == 4 ) return std::type_identity<T4>{};
  else if constexpr ( n == 5 ) return std::type_identity<T5>{};
  else if constexpr ( n == 6 ) return std::type_identity<T6>{};
  else if constexpr ( n == 7 ) return std::type_identity<T7>{};
  else if constexpr ( n == 8 ) return std::type_identity<T8>{};
  else if constexpr ( n == 9 ) return std::type_identity<T9>{};
  else                         return get_type_impl<n - 10, Ts...>();
}

template <std::size_t n, typename ...Ts>
  requires (n < sizeof ...(Ts))
using get_type_t = typename decltype(get_type_impl<n, Ts...>())::type;


// Get index by type
template <typename T, typename ...Ts>
constexpr std::size_t find_type_idx_impl() {
  std::size_t i = 0;
  for (bool x : { std::same_as<T, Ts> ...}) {
    if (x) break;
    ++i;
  }
  return i;
}

template <typename T, typename ...Ts>
  requires ( find_type_idx_impl<T, Ts...>() < sizeof...(Ts))
static constexpr std::size_t find_type_idx_v = find_type_idx_impl<T, Ts...>();

template <typename T, typename ...Ts>
concept one_of = requires {
  { find_type_idx_v<T, Ts...> };
};
/*----------------------------------------------------------------------------*/
// Switcher
// Michał Dominiak “Variadic expansion in examples" https://youtu.be/Os5YLB5D2BU
// thx Sean Baxter

template <std::size_t V>
struct c_idx {
    static constexpr auto value = V;
};

template <auto V>
static constexpr c_idx<V> c_idx_v;

template <std::size_t size, typename Op>
struct switcher {
    Op op;

    using res_t = decltype(op(c_idx_v<0>));

    constexpr switcher(c_idx<size>, Op op) : op(op) {}

    template <std::size_t start>
    static constexpr res_t impl(Op _op, std::size_t i) {
#define TOOLS_SWITCH_CASE(x) \
    case start + x:          \
        if constexpr (size > start + x) return _op(c_idx_v<start + x>);
#define TOOLS_SWITCH_CASE10(x)      \
    TOOLS_SWITCH_CASE(10 * (x) + 0) \
    TOOLS_SWITCH_CASE(10 * (x) + 1) \
    TOOLS_SWITCH_CASE(10 * (x) + 2) \
    TOOLS_SWITCH_CASE(10 * (x) + 3) \
    TOOLS_SWITCH_CASE(10 * (x) + 4) \
    TOOLS_SWITCH_CASE(10 * (x) + 5) \
    TOOLS_SWITCH_CASE(10 * (x) + 6) \
    TOOLS_SWITCH_CASE(10 * (x) + 7) \
    TOOLS_SWITCH_CASE(10 * (x) + 8) \
    TOOLS_SWITCH_CASE(10 * (x) + 9)
#define TOOLS_SWITCH_CASE100(x)       \
    TOOLS_SWITCH_CASE10(10 * (x) + 0) \
    TOOLS_SWITCH_CASE10(10 * (x) + 1) \
    TOOLS_SWITCH_CASE10(10 * (x) + 2) \
    TOOLS_SWITCH_CASE10(10 * (x) + 3) \
    TOOLS_SWITCH_CASE10(10 * (x) + 4) \
    TOOLS_SWITCH_CASE10(10 * (x) + 5) \
    TOOLS_SWITCH_CASE10(10 * (x) + 6) \
    TOOLS_SWITCH_CASE10(10 * (x) + 7) \
    TOOLS_SWITCH_CASE10(10 * (x) + 8) \
    TOOLS_SWITCH_CASE10(10 * (x) + 9)

        switch (i) {
            TOOLS_SWITCH_CASE100(0)
            TOOLS_SWITCH_CASE100(1)
            TOOLS_SWITCH_CASE100(2)
            TOOLS_SWITCH_CASE100(3)
            TOOLS_SWITCH_CASE100(4)
            default:
                if constexpr (size >= start + 500)
                    return impl<start + 500>(_op, i);
                else
                    __builtin_unreachable();
        }

#undef TOOLS_SWITCH_CASE100
#undef TOOLS_SWITCH_CASE10
#undef TOOLS_SWITCH_CASE
    }

    constexpr res_t operator()(std::size_t i) const { return impl<0>(op, i); }
};
/*----------------------------------------------------------------------------*/
// Thx https://denisyaroshevskiy.github.io/presentations/

template <typename T = void, typename... Ts>
struct variadic_union {
    union {
        T head;
        variadic_union<Ts...> tail;
    };

    constexpr variadic_union() = default;

    constexpr variadic_union(std::in_place_index_t<0u>, auto&&... args)
        : head(std::forward<decltype(args)>(args)...) {}

    template <std::size_t i>
    constexpr variadic_union(std::in_place_index_t<i> /*idx*/, auto&&... args)
        : tail(std::in_place_index<i - 1>,
               std::forward<decltype(args)>(args)...) {}
};

template <typename T>
struct variadic_union<T> {
    union {
        T head;
    };

    constexpr variadic_union() = default;
    constexpr variadic_union(std::in_place_index_t<0u>, auto&&... args)
        : head(std::forward<decltype(args)>(args)...) {}
};

template <std::size_t i, typename Self>
constexpr auto&& get(Self&& self) {
    if constexpr (i == 0)
        return std::forward<decltype(self)>(self).head;
    else
        return get<i - 1>(std::forward<decltype(self)>(self).tail);
}

template <std::size_t i, typename... Ts>
constexpr void construct_at(variadic_union<Ts...>& self, auto&&... args)
    requires requires { get<i>(self); }
{
    std::construct_at(&self, std::in_place_index<i>,
                      std::forward<decltype(args)>(args)...);
}

template <std::size_t i, typename... Ts>
constexpr void destroy_at(variadic_union<Ts...>& self)
    requires requires { get<i>(self); }
{
    std::destroy_at(&get<i>(self));
}

/*----------------------------------------------------------------------------*/

template <typename... Types>
class Variant {
   public:
    template <one_of<Types...> T>
    constexpr explicit Variant(T x) {
        construct_at<find_type_idx_v<T, Types...>>(storage, x);
        current = find_type_idx_v<T, Types...>;
    }

    template <typename Vis>
    constexpr void visit(Vis&& vis) {
        switcher switcher{c_idx_v<sizeof...(Types)>,
                          [&]<std::size_t case_>(c_idx<case_>) {
                              std::forward<Vis>(vis)(get<case_>(storage));
                          }};

        switcher(current);
    }

   private:
    size_t current{0};
    variadic_union<Types...> storage;
};
#endif /* CORE_TT_VARIANT_H_ */