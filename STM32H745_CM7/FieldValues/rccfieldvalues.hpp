/*******************************************************************************
* Filename      : rccfieldvalues.hpp
*
* Details       : Enumerations related with RCC peripheral. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(RCCENUMS_HPP)
#define RCCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSIKERON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIKERON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIKERON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSIDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CR_HSIDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CR_HSIDIV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSIDIVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSIDIVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSIDIVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_CSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_CSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_CSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_CSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_CSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_CSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_CSIKERON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_CSIKERON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_CSIKERON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_RC48ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_RC48ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_RC48ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_RC48RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_RC48RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_RC48RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_D1CKRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_D1CKRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_D1CKRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_D2CKRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_D2CKRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_D2CKRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSEON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSEON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSERDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSEBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSEBYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSEBYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_HSECSSON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_HSECSSON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_HSECSSON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLL1ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLL1ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLL1ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLL1RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLL1RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLL1RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLL2ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLL2ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLL2ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLL2RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLL2RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLL2RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLL3ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLL3ON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLL3ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CR_PLL3RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CR_PLL3RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CR_PLL3RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_ICSCR_HSICAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_ICSCR_HSITRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_ICSCR_CSICAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_ICSCR_CSITRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 15U> ;
  using Value16 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 16U> ;
  using Value17 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 17U> ;
  using Value18 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 18U> ;
  using Value19 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 19U> ;
  using Value20 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 20U> ;
  using Value21 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 21U> ;
  using Value22 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 22U> ;
  using Value23 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 23U> ;
  using Value24 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 24U> ;
  using Value25 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 25U> ;
  using Value26 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 26U> ;
  using Value27 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 27U> ;
  using Value28 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 28U> ;
  using Value29 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 29U> ;
  using Value30 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 30U> ;
  using Value31 = FieldValue<RCC_ICSCR_CSITRIM_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CRRCR_RC48CAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SW_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_SW_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_SW_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_SW_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_SW_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_SW_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_SW_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_SWS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_SWS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_STOPWUCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_STOPWUCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_STOPWUCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_STOPKERWUCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_STOPKERWUCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_STOPKERWUCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_RTCPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_HRTIMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_HRTIMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_HRTIMSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_TIMPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_TIMPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_TIMPRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO1PRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CFGR_MCO1PRE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO1SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO1SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO1SEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCO1SEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCO1SEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCO1SEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCO1SEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO2PRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_CFGR_MCO2PRE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CFGR_MCO2SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CFGR_MCO2SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CFGR_MCO2SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_CFGR_MCO2SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_CFGR_MCO2SEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_CFGR_MCO2SEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_CFGR_MCO2SEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_CFGR_MCO2SEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_CFGR_MCO2SEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D1CFGR_HPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_D1CFGR_HPRE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D1CFGR_D1PPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D1CFGR_D1PPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D1CFGR_D1PPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D1CFGR_D1PPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D1CFGR_D1PPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D1CFGR_D1PPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D1CFGR_D1PPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D1CFGR_D1PPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D1CFGR_D1PPRE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D1CFGR_D1CPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<RCC_D1CFGR_D1CPRE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CFGR_D2PPRE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CFGR_D2PPRE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CFGR_D2PPRE1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CFGR_D2PPRE1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CFGR_D2PPRE1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CFGR_D2PPRE1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CFGR_D2PPRE1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CFGR_D2PPRE1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CFGR_D2PPRE1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CFGR_D2PPRE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CFGR_D2PPRE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CFGR_D2PPRE2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CFGR_D2PPRE2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CFGR_D2PPRE2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CFGR_D2PPRE2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CFGR_D2PPRE2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CFGR_D2PPRE2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CFGR_D2PPRE2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CFGR_D3PPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CFGR_D3PPRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CFGR_D3PPRE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CFGR_D3PPRE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CFGR_D3PPRE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D3CFGR_D3PPRE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D3CFGR_D3PPRE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D3CFGR_D3PPRE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D3CFGR_D3PPRE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCKSELR_PLLSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCKSELR_PLLSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCKSELR_PLLSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCKSELR_PLLSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCKSELR_PLLSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCKSELR_DIVM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCKSELR_DIVM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCKSELR_DIVM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL1FRACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL1FRACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL1FRACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL1VCOSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL1VCOSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL1VCOSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL1RGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL1RGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL1RGE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCFGR_PLL1RGE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCFGR_PLL1RGE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL2FRACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL2FRACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL2FRACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL2VCOSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL2VCOSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL2VCOSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL2RGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL2RGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL2RGE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCFGR_PLL2RGE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCFGR_PLL2RGE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL3FRACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL3FRACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL3FRACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL3VCOSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL3VCOSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL3VCOSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_PLL3RGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_PLL3RGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_PLL3RGE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_PLLCFGR_PLL3RGE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_PLLCFGR_PLL3RGE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVP1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVP1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVP1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVQ1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVQ1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVQ1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVR1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVR1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVR1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVP2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVP2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVP2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVQ2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVQ2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVQ2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVR2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVR2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVR2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVP3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVP3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVP3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVQ3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVQ3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVQ3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLLCFGR_DIVR3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_PLLCFGR_DIVR3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_PLLCFGR_DIVR3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL1DIVR_DIVN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL1DIVR_DIVP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL1DIVR_DIVQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL1DIVR_DIVR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL1FRACR_FRACN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL2DIVR_DIVN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL2DIVR_DIVP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL2DIVR_DIVQ1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL2DIVR_DIVR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL2FRACR_FRACN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL3DIVR_DIVN3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL3DIVR_DIVP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL3DIVR_DIVQ3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL3DIVR_DIVR3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_PLL3FRACR_FRACN3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D1CCIPR_FMCSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D1CCIPR_FMCSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D1CCIPR_FMCSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D1CCIPR_FMCSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D1CCIPR_FMCSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D1CCIPR_QSPISRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D1CCIPR_QSPISRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D1CCIPR_QSPISRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D1CCIPR_QSPISRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D1CCIPR_QSPISRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D1CCIPR_SDMMCSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D1CCIPR_SDMMCSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D1CCIPR_SDMMCSRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D1CCIPR_CKPERSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D1CCIPR_CKPERSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D1CCIPR_CKPERSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D1CCIPR_CKPERSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D1CCIPR_CKPERSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP1R_SAI1SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP1R_SAI1SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP1R_SAI1SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP1R_SAI1SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP1R_SAI1SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CCIP1R_SAI1SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CCIP1R_SAI1SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CCIP1R_SAI1SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CCIP1R_SAI1SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP1R_SAI23SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP1R_SAI23SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP1R_SAI23SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP1R_SAI23SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP1R_SAI23SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CCIP1R_SAI23SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CCIP1R_SAI23SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CCIP1R_SAI23SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CCIP1R_SAI23SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP1R_SPI123SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP1R_SPI123SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP1R_SPI123SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP1R_SPI123SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP1R_SPI123SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CCIP1R_SPI123SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CCIP1R_SPI123SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CCIP1R_SPI123SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CCIP1R_SPI123SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP1R_SPI45SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP1R_SPI45SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP1R_SPI45SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP1R_SPI45SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP1R_SPI45SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CCIP1R_SPI45SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CCIP1R_SPI45SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CCIP1R_SPI45SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CCIP1R_SPI45SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP1R_SPDIFSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP1R_SPDIFSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP1R_SPDIFSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP1R_SPDIFSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP1R_SPDIFSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP1R_DFSDM1SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP1R_DFSDM1SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP1R_DFSDM1SRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP1R_FDCANSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP1R_FDCANSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP1R_FDCANSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP1R_FDCANSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP1R_FDCANSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP1R_SWPSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP1R_SWPSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP1R_SWPSRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP2R_USART234578SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP2R_USART234578SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP2R_USART234578SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP2R_USART234578SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP2R_USART234578SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CCIP2R_USART234578SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CCIP2R_USART234578SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CCIP2R_USART234578SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CCIP2R_USART234578SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP2R_USART16SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP2R_USART16SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP2R_USART16SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP2R_USART16SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP2R_USART16SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CCIP2R_USART16SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CCIP2R_USART16SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CCIP2R_USART16SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CCIP2R_USART16SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP2R_RNGSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP2R_RNGSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP2R_RNGSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP2R_RNGSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP2R_RNGSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP2R_I2C123SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP2R_I2C123SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP2R_I2C123SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP2R_I2C123SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP2R_I2C123SRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP2R_USBSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP2R_USBSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP2R_USBSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP2R_USBSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP2R_USBSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP2R_CECSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP2R_CECSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP2R_CECSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP2R_CECSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP2R_CECSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D2CCIP2R_LPTIM1SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D2CCIP2R_LPTIM1SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D2CCIP2R_LPTIM1SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D2CCIP2R_LPTIM1SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D2CCIP2R_LPTIM1SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D2CCIP2R_LPTIM1SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D2CCIP2R_LPTIM1SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D2CCIP2R_LPTIM1SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D2CCIP2R_LPTIM1SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CCIPR_LPUART1SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CCIPR_LPUART1SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CCIPR_LPUART1SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CCIPR_LPUART1SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CCIPR_LPUART1SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D3CCIPR_LPUART1SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D3CCIPR_LPUART1SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D3CCIPR_LPUART1SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D3CCIPR_LPUART1SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CCIPR_I2C4SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CCIPR_I2C4SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CCIPR_I2C4SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CCIPR_I2C4SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CCIPR_I2C4SRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CCIPR_LPTIM2SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CCIPR_LPTIM2SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CCIPR_LPTIM2SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CCIPR_LPTIM2SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CCIPR_LPTIM2SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D3CCIPR_LPTIM2SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D3CCIPR_LPTIM2SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D3CCIPR_LPTIM2SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D3CCIPR_LPTIM2SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CCIPR_LPTIM345SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CCIPR_LPTIM345SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CCIPR_LPTIM345SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CCIPR_LPTIM345SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CCIPR_LPTIM345SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D3CCIPR_LPTIM345SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D3CCIPR_LPTIM345SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D3CCIPR_LPTIM345SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D3CCIPR_LPTIM345SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CCIPR_ADCSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CCIPR_ADCSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CCIPR_ADCSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CCIPR_ADCSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CCIPR_ADCSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CCIPR_SAI4ASRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CCIPR_SAI4ASRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CCIPR_SAI4ASRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CCIPR_SAI4ASRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CCIPR_SAI4ASRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D3CCIPR_SAI4ASRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D3CCIPR_SAI4ASRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D3CCIPR_SAI4ASRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D3CCIPR_SAI4ASRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CCIPR_SAI4BSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CCIPR_SAI4BSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CCIPR_SAI4BSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CCIPR_SAI4BSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CCIPR_SAI4BSRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D3CCIPR_SAI4BSRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D3CCIPR_SAI4BSRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D3CCIPR_SAI4BSRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D3CCIPR_SAI4BSRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3CCIPR_SPI6SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3CCIPR_SPI6SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3CCIPR_SPI6SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_D3CCIPR_SPI6SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_D3CCIPR_SPI6SRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<RCC_D3CCIPR_SPI6SRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<RCC_D3CCIPR_SPI6SRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<RCC_D3CCIPR_SPI6SRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<RCC_D3CCIPR_SPI6SRC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_LSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_LSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_LSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_LSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_LSERDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_LSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_HSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_HSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_HSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_HSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_HSERDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_HSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_CSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_CSIRDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_CSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_RC48RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_RC48RDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_RC48RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_PLL1RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_PLL1RDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_PLL1RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_PLL2RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_PLL2RDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_PLL2RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_PLL3RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_PLL3RDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_PLL3RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIER_LSECSSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIER_LSECSSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIER_LSECSSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_LSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_LSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_LSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_LSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_LSERDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_LSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_HSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_HSIRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_HSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_HSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_HSERDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_HSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_CSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_CSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_CSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_RC48RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_RC48RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_RC48RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_PLL1RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_PLL1RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_PLL1RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_PLL2RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_PLL2RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_PLL2RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_PLL3RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_PLL3RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_PLL3RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_LSECSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_LSECSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_LSECSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CIFR_HSECSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CIFR_HSECSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CIFR_HSECSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_LSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_LSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_LSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_LSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_LSERDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_LSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_HSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_HSIRDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_HSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_HSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_HSERDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_HSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_HSE_ready_Interrupt_Clear_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_HSE_ready_Interrupt_Clear_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_HSE_ready_Interrupt_Clear_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_RC48RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_RC48RDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_RC48RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_PLL1RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_PLL1RDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_PLL1RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_PLL2RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_PLL2RDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_PLL2RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_PLL3RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_PLL3RDYC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_PLL3RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_LSECSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_LSECSSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_LSECSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CICR_HSECSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CICR_HSECSSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CICR_HSECSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSEON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSEON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSERDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSEBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSEBYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSEBYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSEDRV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSEDRV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSEDRV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_BDCR_LSEDRV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_BDCR_LSEDRV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSECSSON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSECSSON_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSECSSON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_LSECSSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_LSECSSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_LSECSSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_RTCSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_RTCSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_RTCSRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_BDCR_RTCSRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_BDCR_RTCSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_RTCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_RTCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_RTCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_BDCR_VSWRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_BDCR_VSWRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_BDCR_VSWRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_LSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LSION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_CSR_LSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_CSR_LSIRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_CSR_LSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_MDMARST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_MDMARST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_MDMARST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_DMA2DRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_DMA2DRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_DMA2DRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_JPGDECRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_JPGDECRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_JPGDECRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_FMCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_FMCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_FMCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_QSPIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_QSPIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_QSPIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_SDMMC1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_SDMMC1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_SDMMC1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3RSTR_CPURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3RSTR_CPURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3RSTR_CPURST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_DMA1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_DMA1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_DMA1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_DMA2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_DMA2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_DMA2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_ADC12RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_ADC12RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_ADC12RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_ETH1MACRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_ETH1MACRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_ETH1MACRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_USB1OTGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_USB1OTGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_USB1OTGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1RSTR_USB2OTGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1RSTR_USB2OTGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1RSTR_USB2OTGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_CAMITFRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_CAMITFRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_CAMITFRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_CRYPTRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_CRYPTRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_CRYPTRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_HASHRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_HASHRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_HASHRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_RNGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_RNGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_RNGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2RSTR_SDMMC2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2RSTR_SDMMC2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2RSTR_SDMMC2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOARST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOARST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOARST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOBRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIODRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIODRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIODRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOERST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOERST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOERST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOFRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOFRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOFRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOHRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOHRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOHRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOJRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOJRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOJRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_GPIOKRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_GPIOKRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_GPIOKRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_CRCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_CRCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_CRCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_BDMARST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_BDMARST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_BDMARST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_ADC3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_ADC3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_ADC3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4RSTR_HSEMRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4RSTR_HSEMRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4RSTR_HSEMRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB3RSTR_LTDCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB3RSTR_LTDCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB3RSTR_LTDCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM5RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM6RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM6RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM6RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM7RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM7RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM7RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM12RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM12RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM12RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM13RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM13RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM13RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_TIM14RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_TIM14RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_TIM14RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_LPTIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_LPTIM1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_LPTIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_SPI2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_SPI2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_SPI2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_SPI3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_SPI3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_SPI3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_SPDIFRXRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_SPDIFRXRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_SPDIFRXRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_USART2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_USART2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_USART2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_USART3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_USART3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_USART3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_UART4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_UART4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_UART4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_UART5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_UART5RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_UART5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_I2C1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_I2C1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_I2C1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_I2C2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_I2C2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_I2C2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_I2C3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_I2C3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_I2C3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_HDMICECRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_HDMICECRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_HDMICECRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_DAC12RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_DAC12RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_DAC12RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_USART7RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_USART7RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_USART7RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LRSTR_USART8RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LRSTR_USART8RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LRSTR_USART8RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HRSTR_CRSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HRSTR_CRSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HRSTR_CRSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HRSTR_SWPRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HRSTR_SWPRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HRSTR_SWPRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HRSTR_OPAMPRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HRSTR_OPAMPRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HRSTR_OPAMPRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HRSTR_MDIOSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HRSTR_MDIOSRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HRSTR_MDIOSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HRSTR_FDCANRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HRSTR_FDCANRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HRSTR_FDCANRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM8RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM8RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM8RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_USART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_USART1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_USART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_USART6RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_USART6RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_USART6RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SPI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SPI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SPI4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SPI4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SPI4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM15RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM15RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM15RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM16RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM16RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM16RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_TIM17RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_TIM17RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_TIM17RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SPI5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SPI5RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SPI5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SAI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SAI1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SAI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SAI2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SAI2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SAI2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_SAI3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_SAI3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_SAI3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_DFSDM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_DFSDM1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_DFSDM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2RSTR_HRTIMRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2RSTR_HRTIMRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2RSTR_HRTIMRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_SYSCFGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_SYSCFGRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_SYSCFGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_LPUART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_LPUART1RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_LPUART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_SPI6RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_SPI6RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_SPI6RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_I2C4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_I2C4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_I2C4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_LPTIM2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_LPTIM2RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_LPTIM2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_LPTIM3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_LPTIM3RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_LPTIM3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_LPTIM4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_LPTIM4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_LPTIM4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_LPTIM5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_LPTIM5RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_LPTIM5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_COMP12RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_COMP12RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_COMP12RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_VREFRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_VREFRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_VREFRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4RSTR_SAI4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4RSTR_SAI4RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4RSTR_SAI4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_GCR_WW1RSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_GCR_WW1RSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_GCR_WW1RSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_BDMAAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_BDMAAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_BDMAAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_LPUART1AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_LPUART1AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_LPUART1AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_SPI6AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_SPI6AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_SPI6AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_I2C4AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_I2C4AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_I2C4AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_LPTIM2AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_LPTIM2AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_LPTIM2AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_LPTIM3AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_LPTIM3AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_LPTIM3AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_LPTIM4AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_LPTIM4AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_LPTIM4AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_LPTIM5AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_LPTIM5AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_LPTIM5AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_COMP12AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_COMP12AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_COMP12AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_VREFAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_VREFAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_VREFAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_RTCAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_RTCAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_RTCAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_CRCAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_CRCAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_CRCAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_SAI4AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_SAI4AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_SAI4AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_ADC3AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_ADC3AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_ADC3AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_BKPSRAMAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_BKPSRAMAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_BKPSRAMAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_D3AMR_SRAM4AMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_D3AMR_SRAM4AMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_D3AMR_SRAM4AMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_RMVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_RMVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_RMVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_CPURSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_CPURSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_CPURSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_D1RSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_D1RSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_D1RSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_D2RSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_D2RSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_D2RSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_BORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_BORRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_BORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_PINRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_PINRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_PINRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_PORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_PORRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_PORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_SFTRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_SFTRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_SFTRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_IWDG1RSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_IWDG1RSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_IWDG1RSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_WWDG1RSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_WWDG1RSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_WWDG1RSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RSR_LPWRRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RSR_LPWRRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RSR_LPWRRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_RMVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_RMVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_RMVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_CPURSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_CPURSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_CPURSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_D1RSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_D1RSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_D1RSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_D2RSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_D2RSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_D2RSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_BORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_BORRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_BORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_PINRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_PINRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_PINRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_PORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_PORRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_PORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_SFTRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_SFTRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_SFTRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_IWDG1RSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_IWDG1RSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_IWDG1RSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_WWDG1RSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_WWDG1RSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_WWDG1RSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_RSR_LPWRRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_RSR_LPWRRSTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_RSR_LPWRRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3ENR_MDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3ENR_MDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3ENR_MDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3ENR_DMA2DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3ENR_DMA2DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3ENR_DMA2DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3ENR_JPGDECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3ENR_JPGDECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3ENR_JPGDECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3ENR_FMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3ENR_FMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3ENR_FMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3ENR_QSPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3ENR_QSPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3ENR_QSPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3ENR_SDMMC1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3ENR_SDMMC1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3ENR_SDMMC1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3ENR_MDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3ENR_MDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3ENR_MDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3ENR_DMA2DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3ENR_DMA2DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3ENR_DMA2DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3ENR_JPGDECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3ENR_JPGDECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3ENR_JPGDECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3ENR_FMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3ENR_FMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3ENR_FMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3ENR_QSPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3ENR_QSPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3ENR_QSPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3ENR_SDMMC1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3ENR_SDMMC1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3ENR_SDMMC1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_DMA1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_DMA1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_DMA1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_DMA2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_DMA2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_DMA2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_ADC12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_ADC12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_ADC12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_ETH1MACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_ETH1MACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_ETH1MACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_ETH1TXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_ETH1TXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_ETH1TXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_ETH1RXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_ETH1RXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_ETH1RXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_USB1OTGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_USB1OTGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_USB1OTGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_USB1ULPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_USB1ULPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_USB1ULPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_USB2OTGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_USB2OTGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_USB2OTGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1ENR_USB2ULPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1ENR_USB2ULPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1ENR_USB2ULPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_DMA1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_DMA1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_DMA1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_DMA2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_DMA2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_DMA2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_ADC12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_ADC12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_ADC12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_ETH1MACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_ETH1MACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_ETH1MACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_ETH1TXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_ETH1TXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_ETH1TXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_ETH1RXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_ETH1RXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_ETH1RXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_USB1OTGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_USB1OTGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_USB1OTGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_USB1ULPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_USB1ULPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_USB1ULPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_USB2OTGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_USB2OTGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_USB2OTGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1ENR_USB2ULPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1ENR_USB2ULPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1ENR_USB2ULPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2ENR_CAMITFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2ENR_CAMITFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2ENR_CAMITFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2ENR_CRYPTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2ENR_CRYPTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2ENR_CRYPTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2ENR_HASHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2ENR_HASHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2ENR_HASHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2ENR_RNGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2ENR_RNGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2ENR_RNGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2ENR_SDMMC2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2ENR_SDMMC2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2ENR_SDMMC2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2ENR_SRAM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2ENR_SRAM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2ENR_SRAM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2ENR_SRAM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2ENR_SRAM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2ENR_SRAM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2ENR_SRAM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2ENR_SRAM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2ENR_SRAM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_CAMITFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_CAMITFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_CAMITFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_CRYPTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_CRYPTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_CRYPTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_HASHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_HASHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_HASHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_RNGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_RNGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_RNGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_SDMMC2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_SDMMC2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_SDMMC2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_SRAM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_SRAM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_SRAM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_SRAM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_SRAM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_SRAM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2ENR_SRAM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2ENR_SRAM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2ENR_SRAM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIODEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIODEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIODEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOEEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOEEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOEEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOJEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOJEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOJEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_GPIOKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_GPIOKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_GPIOKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_BDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_BDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_BDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_ADC3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_ADC3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_ADC3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_HSEMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_HSEMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_HSEMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4ENR_BKPRAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4ENR_BKPRAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4ENR_BKPRAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIODEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIODEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIODEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOEEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOEEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOEEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOJEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOJEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOJEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_GPIOKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_GPIOKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_GPIOKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_BDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_BDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_BDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_ADC3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_ADC3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_ADC3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_HSEMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_HSEMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_HSEMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4ENR_BKPRAMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4ENR_BKPRAMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4ENR_BKPRAMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB3ENR_LTDCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB3ENR_LTDCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB3ENR_LTDCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB3ENR_WWDG1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB3ENR_WWDG1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB3ENR_WWDG1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB3ENR_LTDCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB3ENR_LTDCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB3ENR_LTDCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB3ENR_WWDG1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB3ENR_WWDG1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB3ENR_WWDG1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM7EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM13EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM13EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM13EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_TIM14EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_TIM14EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_TIM14EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_LPTIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_LPTIM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_LPTIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_SPI2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_SPI2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_SPI2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_SPI3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_SPI3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_SPI3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_SPDIFRXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_SPDIFRXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_SPDIFRXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_USART2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_USART2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_USART2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_USART3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_USART3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_USART3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_UART4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_UART4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_UART4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_UART5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_UART5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_UART5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_I2C1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_I2C1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_I2C1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_I2C2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_I2C2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_I2C2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_I2C3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_I2C3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_I2C3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_HDMICECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_HDMICECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_HDMICECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_DAC12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_DAC12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_DAC12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_USART7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_USART7EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_USART7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LENR_USART8EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LENR_USART8EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LENR_USART8EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM7EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM13EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM13EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM13EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_TIM14EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_TIM14EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_TIM14EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_LPTIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_LPTIM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_LPTIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_SPI2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_SPI2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_SPI2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_SPI3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_SPI3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_SPI3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_SPDIFRXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_SPDIFRXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_SPDIFRXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_USART2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_USART2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_USART2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_USART3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_USART3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_USART3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_UART4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_UART4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_UART4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_UART5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_UART5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_UART5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_I2C1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_I2C1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_I2C1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_I2C2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_I2C2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_I2C2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_I2C3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_I2C3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_I2C3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_HDMICECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_HDMICECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_HDMICECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_DAC12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_DAC12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_DAC12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_USART7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_USART7EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_USART7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LENR_USART8EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LENR_USART8EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LENR_USART8EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HENR_CRSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HENR_CRSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HENR_CRSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HENR_SWPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HENR_SWPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HENR_SWPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HENR_OPAMPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HENR_OPAMPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HENR_OPAMPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HENR_MDIOSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HENR_MDIOSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HENR_MDIOSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HENR_FDCANEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HENR_FDCANEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HENR_FDCANEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HENR_CRSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HENR_CRSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HENR_CRSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HENR_SWPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HENR_SWPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HENR_SWPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HENR_OPAMPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HENR_OPAMPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HENR_OPAMPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HENR_MDIOSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HENR_MDIOSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HENR_MDIOSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HENR_FDCANEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HENR_FDCANEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HENR_FDCANEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_TIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_TIM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_TIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_TIM8EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_TIM8EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_TIM8EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_USART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_USART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_USART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_USART6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_USART6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_USART6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_SPI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_SPI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_SPI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_SPI4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_SPI4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_SPI4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_TIM16EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_TIM16EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_TIM16EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_TIM15EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_TIM15EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_TIM15EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_TIM17EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_TIM17EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_TIM17EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_SPI5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_SPI5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_SPI5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_SAI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_SAI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_SAI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_SAI2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_SAI2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_SAI2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_SAI3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_SAI3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_SAI3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_DFSDM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_DFSDM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_DFSDM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2ENR_HRTIMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2ENR_HRTIMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2ENR_HRTIMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM8EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM8EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM8EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_USART6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_USART6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_USART6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SPI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SPI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SPI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SPI4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SPI4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SPI4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM16EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM16EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM16EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM15EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM15EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM15EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_TIM17EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_TIM17EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_TIM17EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SPI5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SPI5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SPI5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SAI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SAI1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SAI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SAI2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SAI2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SAI2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_SAI3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_SAI3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_SAI3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_DFSDM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_DFSDM1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_DFSDM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2ENR_HRTIMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2ENR_HRTIMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2ENR_HRTIMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_SYSCFGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_SYSCFGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_SYSCFGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_LPUART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_LPUART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_LPUART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_SPI6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_SPI6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_SPI6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_I2C4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_I2C4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_I2C4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_LPTIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_LPTIM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_LPTIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_LPTIM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_LPTIM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_LPTIM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_LPTIM4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_LPTIM4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_LPTIM4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_LPTIM5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_LPTIM5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_LPTIM5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_COMP12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_COMP12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_COMP12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_VREFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_VREFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_VREFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_RTCAPBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_RTCAPBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_RTCAPBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4ENR_SAI4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4ENR_SAI4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4ENR_SAI4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_SYSCFGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_SYSCFGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_SYSCFGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_LPUART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_LPUART1EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_LPUART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_SPI6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_SPI6EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_SPI6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_I2C4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_I2C4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_I2C4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_LPTIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_LPTIM2EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_LPTIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_LPTIM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_LPTIM3EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_LPTIM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_LPTIM4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_LPTIM4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_LPTIM4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_LPTIM5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_LPTIM5EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_LPTIM5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_COMP12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_COMP12EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_COMP12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_VREFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_VREFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_VREFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_RTCAPBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_RTCAPBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_RTCAPBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4ENR_SAI4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4ENR_SAI4EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4ENR_SAI4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_MDMALPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_MDMALPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_MDMALPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_DMA2DLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_DMA2DLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_DMA2DLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_JPGDECLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_JPGDECLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_JPGDECLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_FLITFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_FLITFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_FLITFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_FMCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_FMCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_FMCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_QSPILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_QSPILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_QSPILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_SDMMC1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_SDMMC1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_SDMMC1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_D1DTCM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_D1DTCM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_D1DTCM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_DTCM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_DTCM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_DTCM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_ITCMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_ITCMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_ITCMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB3LPENR_AXISRAMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB3LPENR_AXISRAMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB3LPENR_AXISRAMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_MDMALPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_MDMALPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_MDMALPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_DMA2DLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_DMA2DLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_DMA2DLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_JPGDECLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_JPGDECLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_JPGDECLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_FLITFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_FLITFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_FLITFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_FMCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_FMCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_FMCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_QSPILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_QSPILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_QSPILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_SDMMC1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_SDMMC1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_SDMMC1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_D1DTCM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_D1DTCM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_D1DTCM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_DTCM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_DTCM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_DTCM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_ITCMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_ITCMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_ITCMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB3LPENR_AXISRAMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB3LPENR_AXISRAMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB3LPENR_AXISRAMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_DMA1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_DMA1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_DMA1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_DMA2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_DMA2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_DMA2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_ADC12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_ADC12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_ADC12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_ETH1MACLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_ETH1MACLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_ETH1MACLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_ETH1TXLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_ETH1TXLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_ETH1TXLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_ETH1RXLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_ETH1RXLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_ETH1RXLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_USB1OTGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_USB1OTGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_USB1OTGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_USB1ULPILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_USB1ULPILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_USB1ULPILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_USB2OTGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_USB2OTGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_USB2OTGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB1LPENR_USB2ULPILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB1LPENR_USB2ULPILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB1LPENR_USB2ULPILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_DMA1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_DMA1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_DMA1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_DMA2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_DMA2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_DMA2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_ADC12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_ADC12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_ADC12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_ETH1MACLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_ETH1MACLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_ETH1MACLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_ETH1TXLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_ETH1TXLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_ETH1TXLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_ETH1RXLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_ETH1RXLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_ETH1RXLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_USB1OTGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_USB1OTGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_USB1OTGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_USB1ULPILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_USB1ULPILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_USB1ULPILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_USB2OTGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_USB2OTGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_USB2OTGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB1LPENR_USB2ULPILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB1LPENR_USB2ULPILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB1LPENR_USB2ULPILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2LPENR_CAMITFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2LPENR_CAMITFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2LPENR_CAMITFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2LPENR_CRYPTLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2LPENR_CRYPTLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2LPENR_CRYPTLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2LPENR_HASHLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2LPENR_HASHLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2LPENR_HASHLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2LPENR_SDMMC2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2LPENR_SDMMC2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2LPENR_SDMMC2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2LPENR_RNGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2LPENR_RNGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2LPENR_RNGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2LPENR_SRAM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2LPENR_SRAM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2LPENR_SRAM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2LPENR_SRAM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2LPENR_SRAM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2LPENR_SRAM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB2LPENR_SRAM3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB2LPENR_SRAM3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB2LPENR_SRAM3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_CAMITFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_CAMITFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_CAMITFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_CRYPTLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_CRYPTLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_CRYPTLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_HASHLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_HASHLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_HASHLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_SDMMC2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_SDMMC2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_SDMMC2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_RNGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_RNGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_RNGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_SRAM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_SRAM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_SRAM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_SRAM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_SRAM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_SRAM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB2LPENR_SRAM3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB2LPENR_SRAM3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB2LPENR_SRAM3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOALPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOALPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOALPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOBLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOBLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOBLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIODLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIODLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIODLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOELPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOELPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOELPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOHLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOHLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOHLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOJLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOJLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOJLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_GPIOKLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_GPIOKLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_GPIOKLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_CRCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_CRCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_CRCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_BDMALPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_BDMALPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_BDMALPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_ADC3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_ADC3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_ADC3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_BKPRAMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_BKPRAMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_BKPRAMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_AHB4LPENR_SRAM4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_AHB4LPENR_SRAM4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_AHB4LPENR_SRAM4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOALPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOALPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOALPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOBLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOBLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOBLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIODLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIODLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIODLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOELPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOELPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOELPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOHLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOHLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOHLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOILPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOILPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOILPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOJLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOJLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOJLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_GPIOKLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_GPIOKLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_GPIOKLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_CRCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_CRCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_CRCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_BDMALPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_BDMALPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_BDMALPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_ADC3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_ADC3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_ADC3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_BKPRAMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_BKPRAMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_BKPRAMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_AHB4LPENR_SRAM4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_AHB4LPENR_SRAM4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_AHB4LPENR_SRAM4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB3LPENR_LTDCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB3LPENR_LTDCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB3LPENR_LTDCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB3LPENR_WWDG1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB3LPENR_WWDG1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB3LPENR_WWDG1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB3LPENR_LTDCLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB3LPENR_LTDCLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB3LPENR_LTDCLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB3LPENR_WWDG1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB3LPENR_WWDG1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB3LPENR_WWDG1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM6LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM6LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM6LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM7LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM7LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM7LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM13LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM13LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM13LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_TIM14LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_TIM14LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_TIM14LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_LPTIM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_LPTIM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_LPTIM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_SPI2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_SPI2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_SPI2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_SPI3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_SPI3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_SPI3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_SPDIFRXLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_SPDIFRXLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_SPDIFRXLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_USART2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_USART2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_USART2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_USART3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_USART3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_USART3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_UART4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_UART4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_UART4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_UART5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_UART5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_UART5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_I2C1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_I2C1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_I2C1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_I2C2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_I2C2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_I2C2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_I2C3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_I2C3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_I2C3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_HDMICECLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_HDMICECLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_HDMICECLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_DAC12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_DAC12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_DAC12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_USART7LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_USART7LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_USART7LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1LLPENR_USART8LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1LLPENR_USART8LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1LLPENR_USART8LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM6LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM6LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM6LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM7LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM7LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM7LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM13LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM13LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM13LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_TIM14LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_TIM14LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_TIM14LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_LPTIM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_LPTIM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_LPTIM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_SPI2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_SPI2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_SPI2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_SPI3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_SPI3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_SPI3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_SPDIFRXLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_SPDIFRXLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_SPDIFRXLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_USART2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_USART2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_USART2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_USART3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_USART3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_USART3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_UART4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_UART4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_UART4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_UART5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_UART5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_UART5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_I2C1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_I2C1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_I2C1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_I2C2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_I2C2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_I2C2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_I2C3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_I2C3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_I2C3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_HDMICECLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_HDMICECLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_HDMICECLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_DAC12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_DAC12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_DAC12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_USART7LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_USART7LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_USART7LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1LLPENR_USART8LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1LLPENR_USART8LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1LLPENR_USART8LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HLPENR_CRSLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HLPENR_CRSLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HLPENR_CRSLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HLPENR_SWPLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HLPENR_SWPLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HLPENR_SWPLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HLPENR_OPAMPLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HLPENR_OPAMPLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HLPENR_OPAMPLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HLPENR_MDIOSLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HLPENR_MDIOSLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HLPENR_MDIOSLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB1HLPENR_FDCANLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB1HLPENR_FDCANLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB1HLPENR_FDCANLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HLPENR_CRSLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HLPENR_CRSLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HLPENR_CRSLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HLPENR_SWPLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HLPENR_SWPLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HLPENR_SWPLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HLPENR_OPAMPLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HLPENR_OPAMPLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HLPENR_OPAMPLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HLPENR_MDIOSLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HLPENR_MDIOSLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HLPENR_MDIOSLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB1HLPENR_FDCANLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB1HLPENR_FDCANLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB1HLPENR_FDCANLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM8LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM8LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM8LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_USART1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_USART1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_USART1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_USART6LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_USART6LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_USART6LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SPI1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SPI1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SPI1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SPI4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SPI4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SPI4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM15LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM15LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM15LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM16LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM16LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM16LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_TIM17LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_TIM17LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_TIM17LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SPI5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SPI5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SPI5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SAI1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SAI1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SAI1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SAI2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SAI2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SAI2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_SAI3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_SAI3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_SAI3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_DFSDM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_DFSDM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_DFSDM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB2LPENR_HRTIMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB2LPENR_HRTIMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB2LPENR_HRTIMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_TIM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_TIM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_TIM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_TIM8LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_TIM8LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_TIM8LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_USART1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_USART1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_USART1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_USART6LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_USART6LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_USART6LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_SPI1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_SPI1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_SPI1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_SPI4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_SPI4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_SPI4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_TIM15LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_TIM15LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_TIM15LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_TIM16LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_TIM16LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_TIM16LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_TIM17LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_TIM17LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_TIM17LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_SPI5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_SPI5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_SPI5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_SAI1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_SAI1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_SAI1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_SAI2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_SAI2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_SAI2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_SAI3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_SAI3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_SAI3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_DFSDM1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_DFSDM1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_DFSDM1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB2LPENR_HRTIMLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB2LPENR_HRTIMLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB2LPENR_HRTIMLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_SYSCFGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_SYSCFGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_SYSCFGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_LPUART1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_LPUART1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_LPUART1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_SPI6LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_SPI6LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_SPI6LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_I2C4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_I2C4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_I2C4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_LPTIM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_LPTIM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_LPTIM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_LPTIM3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_LPTIM3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_LPTIM3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_LPTIM4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_LPTIM4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_LPTIM4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_LPTIM5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_LPTIM5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_LPTIM5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_COMP12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_COMP12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_COMP12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_VREFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_VREFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_VREFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_RTCAPBLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_RTCAPBLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_RTCAPBLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_C1_APB4LPENR_SAI4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_C1_APB4LPENR_SAI4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_C1_APB4LPENR_SAI4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_SYSCFGLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_SYSCFGLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_SYSCFGLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_LPUART1LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_LPUART1LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_LPUART1LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_SPI6LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_SPI6LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_SPI6LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_I2C4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_I2C4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_I2C4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_LPTIM2LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_LPTIM2LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_LPTIM2LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_LPTIM3LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_LPTIM3LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_LPTIM3LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_LPTIM4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_LPTIM4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_LPTIM4LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_LPTIM5LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_LPTIM5LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_LPTIM5LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_COMP12LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_COMP12LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_COMP12LPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_VREFLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_VREFLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_VREFLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_RTCAPBLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_RTCAPBLPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_RTCAPBLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_APB4LPENR_SAI4LPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_APB4LPENR_SAI4LPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_APB4LPENR_SAI4LPEN_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(RCCENUMS_HPP)
