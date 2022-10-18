/*******************************************************************************
* Filename      : delayblocksdmmc1registers.hpp
*
* Details       : DELAY_Block_SDMMC1. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DELAYBLOCKSDMMC1REGISTERS_HPP)
#define DELAYBLOCKSDMMC1REGISTERS_HPP

#include "delayblocksdmmc1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DELAY_Block_SDMMC1
{
  struct DELAY_Block_SDMMC1CRBase {} ;

  struct CR : public RegisterBase<0x52008000, 32, ReadWriteMode>
  {
    using DEN = DELAY_Block_SDMMC1_CR_DEN_Values<DELAY_Block_SDMMC1::CR, 0, 1, ReadWriteMode, DELAY_Block_SDMMC1CRBase> ;
    using SEN = DELAY_Block_SDMMC1_CR_SEN_Values<DELAY_Block_SDMMC1::CR, 1, 1, ReadWriteMode, DELAY_Block_SDMMC1CRBase> ;
    using FieldValues = DELAY_Block_SDMMC1_CR_SEN_Values<DELAY_Block_SDMMC1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x52008000, 32, ReadWriteMode, DELAY_Block_SDMMC1CRBase, T...> ;

  struct DELAY_Block_SDMMC1CFGRBase {} ;

  struct CFGR : public RegisterBase<0x52008004, 32, ReadWriteMode>
  {
    using SEL = DELAY_Block_SDMMC1_CFGR_SEL_Values<DELAY_Block_SDMMC1::CFGR, 0, 4, ReadWriteMode, DELAY_Block_SDMMC1CFGRBase> ;
    using UNIT = DELAY_Block_SDMMC1_CFGR_UNIT_Values<DELAY_Block_SDMMC1::CFGR, 8, 7, ReadWriteMode, DELAY_Block_SDMMC1CFGRBase> ;
    using LNG = DELAY_Block_SDMMC1_CFGR_LNG_Values<DELAY_Block_SDMMC1::CFGR, 16, 12, ReadWriteMode, DELAY_Block_SDMMC1CFGRBase> ;
    using LNGF = DELAY_Block_SDMMC1_CFGR_LNGF_Values<DELAY_Block_SDMMC1::CFGR, 31, 1, ReadWriteMode, DELAY_Block_SDMMC1CFGRBase> ;
    using FieldValues = DELAY_Block_SDMMC1_CFGR_LNGF_Values<DELAY_Block_SDMMC1::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x52008004, 32, ReadWriteMode, DELAY_Block_SDMMC1CFGRBase, T...> ;

} ;

#endif //#if !defined(DELAYBLOCKSDMMC1REGISTERS_HPP)
