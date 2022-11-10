#ifndef CORE_MAPPED_H_
#define CORE_MAPPED_H_

#include <cstdint>

struct ModerE{
    static volatile uint32_t reg;
};
inline volatile uint32_t ModerE::reg [[gnu::section(".moder_e")]];

struct ModerB{
    static volatile uint32_t reg;
};
inline volatile uint32_t ModerB::reg [[gnu::section(".moder_b")]];

struct ModerC{
    static volatile uint32_t reg;
};
inline volatile uint32_t ModerC::reg [[gnu::section(".moder_c")]];

struct OdrE{
    static volatile uint32_t reg;
};
inline volatile uint32_t OdrE::reg [[gnu::section(".odr_e")]];

struct OdrB{
    static volatile uint32_t reg;
};
inline volatile uint32_t OdrB::reg [[gnu::section(".odr_b")]];

struct OdrC{
    static volatile uint32_t reg;
};
inline volatile uint32_t OdrC::reg [[gnu::section(".odr_c")]];

#endif /* CORE_MAPPED_H_ */