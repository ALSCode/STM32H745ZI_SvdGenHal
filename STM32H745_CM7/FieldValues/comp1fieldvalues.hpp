/*******************************************************************************
* Filename      : comp1fieldvalues.hpp
*
* Details       : Enumerations related with COMP1 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(COMP1ENUMS_HPP)
#define COMP1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_SR_C1VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_SR_C1VAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_SR_C1VAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_SR_C2VAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_SR_C2VAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_SR_C2VAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_SR_C1IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_SR_C1IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_SR_C1IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_SR_C2IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_SR_C2IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_SR_C2IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_ICFR_CC1IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_ICFR_CC1IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_ICFR_CC1IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_ICFR_CC2IF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_ICFR_CC2IF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_ICFR_CC2IF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_OR_AFOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_OR_OR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_POLARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_POLARITY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_POLARITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_ITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_ITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_ITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP1_CFGR1_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP1_CFGR1_HYST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_PWRMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_PWRMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_PWRMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP1_CFGR1_PWRMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP1_CFGR1_PWRMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP1_CFGR1_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP1_CFGR1_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP1_CFGR1_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP1_CFGR1_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP1_CFGR1_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP1_CFGR1_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_BLANKING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP1_CFGR1_BLANKING_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR1_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR1_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR1_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_POLARITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_POLARITY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_POLARITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_WINMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_WINMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_WINMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_ITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_ITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_ITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP1_CFGR2_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP1_CFGR2_HYST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_PWRMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_PWRMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_PWRMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP1_CFGR2_PWRMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP1_CFGR2_PWRMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP1_CFGR2_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP1_CFGR2_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP1_CFGR2_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP1_CFGR2_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP1_CFGR2_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP1_CFGR2_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_BLANKING_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 7U> ;
  using Value8 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 8U> ;
  using Value9 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 9U> ;
  using Value10 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 10U> ;
  using Value11 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 11U> ;
  using Value12 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 12U> ;
  using Value13 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 13U> ;
  using Value14 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 14U> ;
  using Value15 = FieldValue<COMP1_CFGR2_BLANKING_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP1_CFGR2_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP1_CFGR2_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP1_CFGR2_LOCK_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(COMP1ENUMS_HPP)
