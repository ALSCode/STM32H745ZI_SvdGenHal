/*******************************************************************************
* Filename      : delayblocksdmmc2fieldvalues.hpp
*
* Details       : Enumerations related with DELAY_Block_SDMMC2 peripheral. This
*                 header file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DELAYBLOCKSDMMC2ENUMS_HPP)
#define DELAYBLOCKSDMMC2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DELAY_Block_SDMMC2_CR_DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DELAY_Block_SDMMC2_CR_DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DELAY_Block_SDMMC2_CR_DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DELAY_Block_SDMMC2_CR_SEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DELAY_Block_SDMMC2_CR_SEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DELAY_Block_SDMMC2_CR_SEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DELAY_Block_SDMMC2_CFGR_SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DELAY_Block_SDMMC2_CFGR_SEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DELAY_Block_SDMMC2_CFGR_UNIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DELAY_Block_SDMMC2_CFGR_LNG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DELAY_Block_SDMMC2_CFGR_LNGF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DELAY_Block_SDMMC2_CFGR_LNGF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DELAY_Block_SDMMC2_CFGR_LNGF_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DELAYBLOCKSDMMC2ENUMS_HPP)
