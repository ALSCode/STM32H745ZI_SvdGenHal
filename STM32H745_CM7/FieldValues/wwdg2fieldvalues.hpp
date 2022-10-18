/*******************************************************************************
* Filename      : wwdg2fieldvalues.hpp
*
* Details       : Enumerations related with WWDG2 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(WWDG2ENUMS_HPP)
#define WWDG2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG2_CR_T_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG2_CR_WDGA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG2_CR_WDGA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG2_CR_WDGA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG2_CFR_W_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG2_CFR_WDGTB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG2_CFR_WDGTB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG2_CFR_WDGTB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<WWDG2_CFR_WDGTB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<WWDG2_CFR_WDGTB_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG2_CFR_EWI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG2_CFR_EWI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG2_CFR_EWI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct WWDG2_SR_EWIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<WWDG2_SR_EWIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<WWDG2_SR_EWIF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(WWDG2ENUMS_HPP)
