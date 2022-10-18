/*******************************************************************************
* Filename      : delayblockquadspiregisters.hpp
*
* Details       : DELAY_Block_SDMMC1. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DELAYBLOCKQUADSPIREGISTERS_HPP)
#define DELAYBLOCKQUADSPIREGISTERS_HPP

#include "delayblockquadspifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DELAY_Block_QUADSPI
{
  struct DELAY_Block_QUADSPICRBase {} ;

  struct CR : public RegisterBase<0x52006000, 32, ReadWriteMode>
  {
    using DEN = DELAY_Block_QUADSPI_CR_DEN_Values<DELAY_Block_QUADSPI::CR, 0, 1, ReadWriteMode, DELAY_Block_QUADSPICRBase> ;
    using SEN = DELAY_Block_QUADSPI_CR_SEN_Values<DELAY_Block_QUADSPI::CR, 1, 1, ReadWriteMode, DELAY_Block_QUADSPICRBase> ;
    using FieldValues = DELAY_Block_QUADSPI_CR_SEN_Values<DELAY_Block_QUADSPI::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x52006000, 32, ReadWriteMode, DELAY_Block_QUADSPICRBase, T...> ;

  struct DELAY_Block_QUADSPICFGRBase {} ;

  struct CFGR : public RegisterBase<0x52006004, 32, ReadWriteMode>
  {
    using SEL = DELAY_Block_QUADSPI_CFGR_SEL_Values<DELAY_Block_QUADSPI::CFGR, 0, 4, ReadWriteMode, DELAY_Block_QUADSPICFGRBase> ;
    using UNIT = DELAY_Block_QUADSPI_CFGR_UNIT_Values<DELAY_Block_QUADSPI::CFGR, 8, 7, ReadWriteMode, DELAY_Block_QUADSPICFGRBase> ;
    using LNG = DELAY_Block_QUADSPI_CFGR_LNG_Values<DELAY_Block_QUADSPI::CFGR, 16, 12, ReadWriteMode, DELAY_Block_QUADSPICFGRBase> ;
    using LNGF = DELAY_Block_QUADSPI_CFGR_LNGF_Values<DELAY_Block_QUADSPI::CFGR, 31, 1, ReadWriteMode, DELAY_Block_QUADSPICFGRBase> ;
    using FieldValues = DELAY_Block_QUADSPI_CFGR_LNGF_Values<DELAY_Block_QUADSPI::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x52006004, 32, ReadWriteMode, DELAY_Block_QUADSPICFGRBase, T...> ;

} ;

#endif //#if !defined(DELAYBLOCKQUADSPIREGISTERS_HPP)
