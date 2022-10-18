/*******************************************************************************
* Filename      : dbgmcufieldvalues.hpp
*
* Details       : Enumerations related with DBGMCU peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DBGMCUENUMS_HPP)
#define DBGMCUENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_IDC_DEV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_IDC_REV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBGSLPD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBGSLPD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBGSLPD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBGSTPD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBGSTPD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBGSTPD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBGSTBD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBGSTBD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBGSTBD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBGSLPD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBGSLPD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBGSLPD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBGSTPD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBGSTPD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBGSTPD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBGSTBD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBGSTBD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBGSTBD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBGSTPD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBGSTPD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBGSTPD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBGSTBD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBGSTBD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBGSTBD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_TRACECLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_TRACECLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_TRACECLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_D1DBGCKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_D1DBGCKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_D1DBGCKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_D3DBGCKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_D3DBGCKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_D3DBGCKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_TRGOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_TRGOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_TRGOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB3FZ1_WWDG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB3FZ1_WWDG1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB3FZ1_WWDG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB3FZ2_WWDG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB3FZ2_WWDG1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB3FZ2_WWDG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_TIM14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_TIM14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_LPTIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_LPTIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_LPTIM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_WWDG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_WWDG2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_WWDG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_I2C1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_I2C1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_I2C1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_I2C2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_I2C2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_I2C2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ1_DBG_I2C3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ1_DBG_I2C3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ1_DBG_I2C3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_TIM14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_TIM14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_LPTIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_LPTIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_LPTIM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_WWDG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_WWDG2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_WWDG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_I2C1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_I2C1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_I2C1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_I2C2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_I2C2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_I2C2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1LFZ2_DBG_I2C3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1LFZ2_DBG_I2C3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1LFZ2_DBG_I2C3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ1_DBG_TIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ1_DBG_TIM8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ1_DBG_TIM15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ1_DBG_TIM16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ1_DBG_TIM17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ1_DBG_TIM17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ1_DBG_HRTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ1_DBG_HRTIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ1_DBG_HRTIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ2_DBG_TIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ2_DBG_TIM8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ2_DBG_TIM15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ2_DBG_TIM16_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM16_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM16_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ2_DBG_TIM17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ2_DBG_TIM17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZ2_DBG_HRTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZ2_DBG_HRTIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZ2_DBG_HRTIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ1_DBG_I2C4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ1_DBG_I2C4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ1_DBG_I2C4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ1_DBG_LPTIM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ1_DBG_LPTIM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ1_DBG_LPTIM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ1_DBG_LPTIM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ1_DBG_LPTIM3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ1_DBG_LPTIM3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ1_DBG_LPTIM4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ1_DBG_LPTIM4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ1_DBG_LPTIM4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ1_DBG_LPTIM5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ1_DBG_LPTIM5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ1_DBG_LPTIM5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ1_DBG_RTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ1_DBG_RTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ1_DBG_RTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ1_DBG_WDGLSD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ1_DBG_WDGLSD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ1_DBG_WDGLSD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ1_DBG_WDGLSD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ1_DBG_WDGLSD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ1_DBG_WDGLSD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ2_DBG_I2C4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ2_DBG_I2C4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ2_DBG_I2C4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ2_DBG_LPTIM2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ2_DBG_LPTIM2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ2_DBG_LPTIM2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ2_DBG_LPTIM3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ2_DBG_LPTIM3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ2_DBG_LPTIM3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ2_DBG_LPTIM4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ2_DBG_LPTIM4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ2_DBG_LPTIM4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ2_DBG_LPTIM5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ2_DBG_LPTIM5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ2_DBG_LPTIM5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ2_DBG_RTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ2_DBG_RTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ2_DBG_RTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ2_DBG_WDGLSD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ2_DBG_WDGLSD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ2_DBG_WDGLSD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB4FZ2_DBG_WDGLSD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB4FZ2_DBG_WDGLSD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB4FZ2_DBG_WDGLSD2_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DBGMCUENUMS_HPP)
