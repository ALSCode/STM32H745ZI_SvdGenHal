/*******************************************************************************
* Filename      : lptim4fieldvalues.hpp
*
* Details       : Enumerations related with LPTIM4 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(LPTIM4ENUMS_HPP)
#define LPTIM4ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ISR_DOWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ISR_DOWN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ISR_DOWN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ISR_UP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ISR_UP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ISR_UP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ISR_ARROK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ISR_ARROK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ISR_ARROK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ISR_CMPOK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ISR_CMPOK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ISR_CMPOK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ISR_EXTTRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ISR_EXTTRIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ISR_EXTTRIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ISR_ARRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ISR_ARRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ISR_ARRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ISR_CMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ISR_CMPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ISR_CMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ICR_DOWNCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ICR_DOWNCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ICR_DOWNCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ICR_UPCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ICR_UPCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ICR_UPCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ICR_ARROKCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ICR_ARROKCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ICR_ARROKCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ICR_CMPOKCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ICR_CMPOKCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ICR_CMPOKCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ICR_EXTTRIGCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ICR_EXTTRIGCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ICR_EXTTRIGCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ICR_ARRMCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ICR_ARRMCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ICR_ARRMCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ICR_CMPMCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_ICR_CMPMCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_ICR_CMPMCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_IER_DOWNIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_IER_DOWNIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_IER_DOWNIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_IER_UPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_IER_UPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_IER_UPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_IER_ARROKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_IER_ARROKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_IER_ARROKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_IER_CMPOKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_IER_CMPOKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_IER_CMPOKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_IER_EXTTRIGIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_IER_EXTTRIGIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_IER_EXTTRIGIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_IER_ARRMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_IER_ARRMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_IER_ARRMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_IER_CMPMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_IER_CMPMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_IER_CMPMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_ENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_ENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_ENC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_COUNTMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_COUNTMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_COUNTMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_PRELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_PRELOAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_PRELOAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_WAVPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_WAVPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_WAVPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_WAVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_WAVE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_WAVE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_TIMOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_TIMOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_TIMOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_TRIGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_TRIGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_TRIGEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM4_CFGR_TRIGEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM4_CFGR_TRIGEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_TRIGSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_TRIGSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_TRIGSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM4_CFGR_TRIGSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM4_CFGR_TRIGSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPTIM4_CFGR_TRIGSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPTIM4_CFGR_TRIGSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPTIM4_CFGR_TRIGSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPTIM4_CFGR_TRIGSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_PRESC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_PRESC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_PRESC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM4_CFGR_PRESC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM4_CFGR_PRESC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPTIM4_CFGR_PRESC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPTIM4_CFGR_PRESC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPTIM4_CFGR_PRESC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPTIM4_CFGR_PRESC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_TRGFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_TRGFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_TRGFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM4_CFGR_TRGFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM4_CFGR_TRGFLT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_CKFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_CKFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_CKFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM4_CFGR_CKFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM4_CFGR_CKFLT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_CKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_CKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_CKPOL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM4_CFGR_CKPOL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM4_CFGR_CKPOL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR_CKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR_CKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR_CKSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CR_ENABLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CR_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CR_SNGSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CR_SNGSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CR_SNGSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CR_CNTSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CR_CNTSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CR_CNTSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CR_COUNTRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CR_COUNTRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CR_COUNTRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CR_RSTARE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CR_RSTARE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CR_RSTARE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CMP_CMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_ARR_ARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIM4_CFGR2_IN1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIM4_CFGR2_IN1SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIM4_CFGR2_IN1SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIM4_CFGR2_IN1SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIM4_CFGR2_IN1SEL_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(LPTIM4ENUMS_HPP)
