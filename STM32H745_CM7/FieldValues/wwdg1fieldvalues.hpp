/*******************************************************************************
* Filename      : wwdg1fieldvalues.hpp
*
* Details       : Enumerations related with WWDG1 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(WWDG1ENUMS_HPP)
#define WWDG1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG1_CR_T_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG1_CR_WDGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG1_CR_WDGA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG1_CR_WDGA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG1_CFR_W_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG1_CFR_WDGTB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG1_CFR_WDGTB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG1_CFR_WDGTB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<WWDG1_CFR_WDGTB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<WWDG1_CFR_WDGTB_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG1_CFR_EWI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG1_CFR_EWI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG1_CFR_EWI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG1_SR_EWIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG1_SR_EWIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG1_SR_EWIF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(WWDG1ENUMS_HPP)
