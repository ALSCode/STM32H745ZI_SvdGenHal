/*******************************************************************************
* Filename      : otg1hspwrclkfieldvalues.hpp
*
* Details       : Enumerations related with OTG1_HS_PWRCLK peripheral. This
*                 header file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(OTG1HSPWRCLKENUMS_HPP)
#define OTG1HSPWRCLKENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG1_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG1_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG1_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG1_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG1_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG1_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG1_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG1_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG1_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(OTG1HSPWRCLKENUMS_HPP)
