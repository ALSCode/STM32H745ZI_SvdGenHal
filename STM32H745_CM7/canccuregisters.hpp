/*******************************************************************************
* Filename      : canccuregisters.hpp
*
* Details       : CCU registers. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(CANCCUREGISTERS_HPP)
#define CANCCUREGISTERS_HPP

#include "canccufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CAN_CCU
{
  struct CAN_CCUCRELBase {} ;

  struct CREL : public RegisterBase<0x4000A800, 32, ReadWriteMode>
  {
    using DAY = CAN_CCU_CREL_DAY_Values<CAN_CCU::CREL, 0, 8, ReadWriteMode, CAN_CCUCRELBase> ;
    using MON = CAN_CCU_CREL_MON_Values<CAN_CCU::CREL, 8, 8, ReadWriteMode, CAN_CCUCRELBase> ;
    using YEAR = CAN_CCU_CREL_YEAR_Values<CAN_CCU::CREL, 16, 4, ReadWriteMode, CAN_CCUCRELBase> ;
    using SUBSTEP = CAN_CCU_CREL_SUBSTEP_Values<CAN_CCU::CREL, 20, 4, ReadWriteMode, CAN_CCUCRELBase> ;
    using STEP = CAN_CCU_CREL_STEP_Values<CAN_CCU::CREL, 24, 4, ReadWriteMode, CAN_CCUCRELBase> ;
    using REL = CAN_CCU_CREL_REL_Values<CAN_CCU::CREL, 28, 4, ReadWriteMode, CAN_CCUCRELBase> ;
    using FieldValues = CAN_CCU_CREL_REL_Values<CAN_CCU::CREL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRELPack  = Register<0x4000A800, 32, ReadWriteMode, CAN_CCUCRELBase, T...> ;

  struct CAN_CCUCCFGBase {} ;

  struct CCFG : public RegisterBase<0x4000A804, 32, ReadWriteMode>
  {
    using TQBT = CAN_CCU_CCFG_TQBT_Values<CAN_CCU::CCFG, 0, 5, ReadWriteMode, CAN_CCUCCFGBase> ;
    using BCC = CAN_CCU_CCFG_BCC_Values<CAN_CCU::CCFG, 6, 1, ReadWriteMode, CAN_CCUCCFGBase> ;
    using CFL = CAN_CCU_CCFG_CFL_Values<CAN_CCU::CCFG, 7, 1, ReadWriteMode, CAN_CCUCCFGBase> ;
    using OCPM = CAN_CCU_CCFG_OCPM_Values<CAN_CCU::CCFG, 8, 8, ReadWriteMode, CAN_CCUCCFGBase> ;
    using CDIV = CAN_CCU_CCFG_CDIV_Values<CAN_CCU::CCFG, 16, 4, ReadWriteMode, CAN_CCUCCFGBase> ;
    using SWR = CAN_CCU_CCFG_SWR_Values<CAN_CCU::CCFG, 31, 1, ReadWriteMode, CAN_CCUCCFGBase> ;
    using FieldValues = CAN_CCU_CCFG_SWR_Values<CAN_CCU::CCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCFGPack  = Register<0x4000A804, 32, ReadWriteMode, CAN_CCUCCFGBase, T...> ;

  struct CAN_CCUCSTATBase {} ;

  struct CSTAT : public RegisterBase<0x4000A808, 32, ReadWriteMode>
  {
    using OCPC = CAN_CCU_CSTAT_OCPC_Values<CAN_CCU::CSTAT, 0, 18, ReadWriteMode, CAN_CCUCSTATBase> ;
    using TQC = CAN_CCU_CSTAT_TQC_Values<CAN_CCU::CSTAT, 18, 11, ReadWriteMode, CAN_CCUCSTATBase> ;
    using CALS = CAN_CCU_CSTAT_CALS_Values<CAN_CCU::CSTAT, 30, 2, ReadWriteMode, CAN_CCUCSTATBase> ;
    using FieldValues = CAN_CCU_CSTAT_CALS_Values<CAN_CCU::CSTAT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSTATPack  = Register<0x4000A808, 32, ReadWriteMode, CAN_CCUCSTATBase, T...> ;

  struct CAN_CCUCWDBase {} ;

  struct CWD : public RegisterBase<0x4000A80C, 32, ReadWriteMode>
  {
    using WDC = CAN_CCU_CWD_WDC_Values<CAN_CCU::CWD, 0, 16, ReadWriteMode, CAN_CCUCWDBase> ;
    using WDV = CAN_CCU_CWD_WDV_Values<CAN_CCU::CWD, 16, 16, ReadWriteMode, CAN_CCUCWDBase> ;
    using FieldValues = CAN_CCU_CWD_WDV_Values<CAN_CCU::CWD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CWDPack  = Register<0x4000A80C, 32, ReadWriteMode, CAN_CCUCWDBase, T...> ;

  struct CAN_CCUIRBase {} ;

  struct IR : public RegisterBase<0x4000A810, 32, ReadWriteMode>
  {
    using CWE = CAN_CCU_IR_CWE_Values<CAN_CCU::IR, 0, 1, ReadWriteMode, CAN_CCUIRBase> ;
    using CSC = CAN_CCU_IR_CSC_Values<CAN_CCU::IR, 1, 1, ReadWriteMode, CAN_CCUIRBase> ;
    using FieldValues = CAN_CCU_IR_CSC_Values<CAN_CCU::IR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IRPack  = Register<0x4000A810, 32, ReadWriteMode, CAN_CCUIRBase, T...> ;

  struct CAN_CCUIEBase {} ;

  struct IE : public RegisterBase<0x4000A814, 32, ReadWriteMode>
  {
    using CWEE = CAN_CCU_IE_CWEE_Values<CAN_CCU::IE, 0, 1, ReadWriteMode, CAN_CCUIEBase> ;
    using CSCE = CAN_CCU_IE_CSCE_Values<CAN_CCU::IE, 1, 1, ReadWriteMode, CAN_CCUIEBase> ;
    using FieldValues = CAN_CCU_IE_CSCE_Values<CAN_CCU::IE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IEPack  = Register<0x4000A814, 32, ReadWriteMode, CAN_CCUIEBase, T...> ;

} ;

#endif //#if !defined(CANCCUREGISTERS_HPP)
