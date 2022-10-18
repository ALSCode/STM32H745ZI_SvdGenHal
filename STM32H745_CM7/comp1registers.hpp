/*******************************************************************************
* Filename      : comp1registers.hpp
*
* Details       : COMP1. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(COMP1REGISTERS_HPP)
#define COMP1REGISTERS_HPP

#include "comp1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct COMP1
{
  struct COMP1SRBase {} ;

  struct SR : public RegisterBase<0x58003800, 32, ReadMode>
  {
    using C1VAL = COMP1_SR_C1VAL_Values<COMP1::SR, 0, 1, ReadMode, COMP1SRBase> ;
    using C2VAL = COMP1_SR_C2VAL_Values<COMP1::SR, 1, 1, ReadMode, COMP1SRBase> ;
    using C1IF = COMP1_SR_C1IF_Values<COMP1::SR, 16, 1, ReadMode, COMP1SRBase> ;
    using C2IF = COMP1_SR_C2IF_Values<COMP1::SR, 17, 1, ReadMode, COMP1SRBase> ;
    using FieldValues = COMP1_SR_C2IF_Values<COMP1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x58003800, 32, ReadMode, COMP1SRBase, T...> ;

  struct COMP1ICFRBase {} ;

  struct ICFR : public RegisterBase<0x58003804, 32, WriteMode>
  {
    using CC1IF = COMP1_ICFR_CC1IF_Values<COMP1::ICFR, 16, 1, WriteMode, COMP1ICFRBase> ;
    using CC2IF = COMP1_ICFR_CC2IF_Values<COMP1::ICFR, 17, 1, WriteMode, COMP1ICFRBase> ;
    using FieldValues = COMP1_ICFR_CC2IF_Values<COMP1::ICFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICFRPack  = Register<0x58003804, 32, WriteMode, COMP1ICFRBase, T...> ;

  struct COMP1ORBase {} ;

  struct OR : public RegisterBase<0x58003808, 32, ReadWriteMode>
  {
    using AFOP = COMP1_OR_AFOP_Values<COMP1::OR, 0, 11, ReadWriteMode, COMP1ORBase> ;
    using ORField = COMP1_OR_OR_Values<COMP1::OR, 11, 21, ReadWriteMode, COMP1ORBase> ;
    using FieldValues = COMP1_OR_OR_Values<COMP1::OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x58003808, 32, ReadWriteMode, COMP1ORBase, T...> ;

  struct COMP1CFGR1Base {} ;

  struct CFGR1 : public RegisterBase<0x5800380C, 32, ReadWriteMode>
  {
    using EN = COMP1_CFGR1_EN_Values<COMP1::CFGR1, 0, 1, ReadWriteMode, COMP1CFGR1Base> ;
    using BRGEN = COMP1_CFGR1_BRGEN_Values<COMP1::CFGR1, 1, 1, ReadWriteMode, COMP1CFGR1Base> ;
    using SCALEN = COMP1_CFGR1_SCALEN_Values<COMP1::CFGR1, 2, 1, ReadWriteMode, COMP1CFGR1Base> ;
    using POLARITY = COMP1_CFGR1_POLARITY_Values<COMP1::CFGR1, 3, 1, ReadWriteMode, COMP1CFGR1Base> ;
    using ITEN = COMP1_CFGR1_ITEN_Values<COMP1::CFGR1, 6, 1, ReadWriteMode, COMP1CFGR1Base> ;
    using HYST = COMP1_CFGR1_HYST_Values<COMP1::CFGR1, 8, 2, ReadWriteMode, COMP1CFGR1Base> ;
    using PWRMODE = COMP1_CFGR1_PWRMODE_Values<COMP1::CFGR1, 12, 2, ReadWriteMode, COMP1CFGR1Base> ;
    using INMSEL = COMP1_CFGR1_INMSEL_Values<COMP1::CFGR1, 16, 3, ReadWriteMode, COMP1CFGR1Base> ;
    using INPSEL = COMP1_CFGR1_INPSEL_Values<COMP1::CFGR1, 20, 1, ReadWriteMode, COMP1CFGR1Base> ;
    using BLANKING = COMP1_CFGR1_BLANKING_Values<COMP1::CFGR1, 24, 4, ReadWriteMode, COMP1CFGR1Base> ;
    using LOCK = COMP1_CFGR1_LOCK_Values<COMP1::CFGR1, 31, 1, ReadWriteMode, COMP1CFGR1Base> ;
    using FieldValues = COMP1_CFGR1_LOCK_Values<COMP1::CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR1Pack  = Register<0x5800380C, 32, ReadWriteMode, COMP1CFGR1Base, T...> ;

  struct COMP1CFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x58003810, 32, ReadWriteMode>
  {
    using EN = COMP1_CFGR2_EN_Values<COMP1::CFGR2, 0, 1, ReadWriteMode, COMP1CFGR2Base> ;
    using BRGEN = COMP1_CFGR2_BRGEN_Values<COMP1::CFGR2, 1, 1, ReadWriteMode, COMP1CFGR2Base> ;
    using SCALEN = COMP1_CFGR2_SCALEN_Values<COMP1::CFGR2, 2, 1, ReadWriteMode, COMP1CFGR2Base> ;
    using POLARITY = COMP1_CFGR2_POLARITY_Values<COMP1::CFGR2, 3, 1, ReadWriteMode, COMP1CFGR2Base> ;
    using WINMODE = COMP1_CFGR2_WINMODE_Values<COMP1::CFGR2, 4, 1, ReadWriteMode, COMP1CFGR2Base> ;
    using ITEN = COMP1_CFGR2_ITEN_Values<COMP1::CFGR2, 6, 1, ReadWriteMode, COMP1CFGR2Base> ;
    using HYST = COMP1_CFGR2_HYST_Values<COMP1::CFGR2, 8, 2, ReadWriteMode, COMP1CFGR2Base> ;
    using PWRMODE = COMP1_CFGR2_PWRMODE_Values<COMP1::CFGR2, 12, 2, ReadWriteMode, COMP1CFGR2Base> ;
    using INMSEL = COMP1_CFGR2_INMSEL_Values<COMP1::CFGR2, 16, 3, ReadWriteMode, COMP1CFGR2Base> ;
    using INPSEL = COMP1_CFGR2_INPSEL_Values<COMP1::CFGR2, 20, 1, ReadWriteMode, COMP1CFGR2Base> ;
    using BLANKING = COMP1_CFGR2_BLANKING_Values<COMP1::CFGR2, 24, 4, ReadWriteMode, COMP1CFGR2Base> ;
    using LOCK = COMP1_CFGR2_LOCK_Values<COMP1::CFGR2, 31, 1, ReadWriteMode, COMP1CFGR2Base> ;
    using FieldValues = COMP1_CFGR2_LOCK_Values<COMP1::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x58003810, 32, ReadWriteMode, COMP1CFGR2Base, T...> ;

} ;

#endif //#if !defined(COMP1REGISTERS_HPP)
