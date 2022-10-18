/*******************************************************************************
* Filename      : lptim4registers.hpp
*
* Details       : Low power timer. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(LPTIM4REGISTERS_HPP)
#define LPTIM4REGISTERS_HPP

#include "lptim4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPTIM4
{
  struct LPTIM4ISRBase {} ;

  struct ISR : public RegisterBase<0x58002C00, 32, ReadMode>
  {
    using DOWN = LPTIM4_ISR_DOWN_Values<LPTIM4::ISR, 6, 1, ReadMode, LPTIM4ISRBase> ;
    using UP = LPTIM4_ISR_UP_Values<LPTIM4::ISR, 5, 1, ReadMode, LPTIM4ISRBase> ;
    using ARROK = LPTIM4_ISR_ARROK_Values<LPTIM4::ISR, 4, 1, ReadMode, LPTIM4ISRBase> ;
    using CMPOK = LPTIM4_ISR_CMPOK_Values<LPTIM4::ISR, 3, 1, ReadMode, LPTIM4ISRBase> ;
    using EXTTRIG = LPTIM4_ISR_EXTTRIG_Values<LPTIM4::ISR, 2, 1, ReadMode, LPTIM4ISRBase> ;
    using ARRM = LPTIM4_ISR_ARRM_Values<LPTIM4::ISR, 1, 1, ReadMode, LPTIM4ISRBase> ;
    using CMPM = LPTIM4_ISR_CMPM_Values<LPTIM4::ISR, 0, 1, ReadMode, LPTIM4ISRBase> ;
    using FieldValues = LPTIM4_ISR_CMPM_Values<LPTIM4::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x58002C00, 32, ReadMode, LPTIM4ISRBase, T...> ;

  struct LPTIM4ICRBase {} ;

  struct ICR : public RegisterBase<0x58002C04, 32, WriteMode>
  {
    using DOWNCF = LPTIM4_ICR_DOWNCF_Values<LPTIM4::ICR, 6, 1, WriteMode, LPTIM4ICRBase> ;
    using UPCF = LPTIM4_ICR_UPCF_Values<LPTIM4::ICR, 5, 1, WriteMode, LPTIM4ICRBase> ;
    using ARROKCF = LPTIM4_ICR_ARROKCF_Values<LPTIM4::ICR, 4, 1, WriteMode, LPTIM4ICRBase> ;
    using CMPOKCF = LPTIM4_ICR_CMPOKCF_Values<LPTIM4::ICR, 3, 1, WriteMode, LPTIM4ICRBase> ;
    using EXTTRIGCF = LPTIM4_ICR_EXTTRIGCF_Values<LPTIM4::ICR, 2, 1, WriteMode, LPTIM4ICRBase> ;
    using ARRMCF = LPTIM4_ICR_ARRMCF_Values<LPTIM4::ICR, 1, 1, WriteMode, LPTIM4ICRBase> ;
    using CMPMCF = LPTIM4_ICR_CMPMCF_Values<LPTIM4::ICR, 0, 1, WriteMode, LPTIM4ICRBase> ;
    using FieldValues = LPTIM4_ICR_CMPMCF_Values<LPTIM4::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x58002C04, 32, WriteMode, LPTIM4ICRBase, T...> ;

  struct LPTIM4IERBase {} ;

  struct IER : public RegisterBase<0x58002C08, 32, ReadWriteMode>
  {
    using DOWNIE = LPTIM4_IER_DOWNIE_Values<LPTIM4::IER, 6, 1, ReadWriteMode, LPTIM4IERBase> ;
    using UPIE = LPTIM4_IER_UPIE_Values<LPTIM4::IER, 5, 1, ReadWriteMode, LPTIM4IERBase> ;
    using ARROKIE = LPTIM4_IER_ARROKIE_Values<LPTIM4::IER, 4, 1, ReadWriteMode, LPTIM4IERBase> ;
    using CMPOKIE = LPTIM4_IER_CMPOKIE_Values<LPTIM4::IER, 3, 1, ReadWriteMode, LPTIM4IERBase> ;
    using EXTTRIGIE = LPTIM4_IER_EXTTRIGIE_Values<LPTIM4::IER, 2, 1, ReadWriteMode, LPTIM4IERBase> ;
    using ARRMIE = LPTIM4_IER_ARRMIE_Values<LPTIM4::IER, 1, 1, ReadWriteMode, LPTIM4IERBase> ;
    using CMPMIE = LPTIM4_IER_CMPMIE_Values<LPTIM4::IER, 0, 1, ReadWriteMode, LPTIM4IERBase> ;
    using FieldValues = LPTIM4_IER_CMPMIE_Values<LPTIM4::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x58002C08, 32, ReadWriteMode, LPTIM4IERBase, T...> ;

  struct LPTIM4CFGRBase {} ;

  struct CFGR : public RegisterBase<0x58002C0C, 32, ReadWriteMode>
  {
    using ENC = LPTIM4_CFGR_ENC_Values<LPTIM4::CFGR, 24, 1, ReadWriteMode, LPTIM4CFGRBase> ;
    using COUNTMODE = LPTIM4_CFGR_COUNTMODE_Values<LPTIM4::CFGR, 23, 1, ReadWriteMode, LPTIM4CFGRBase> ;
    using PRELOAD = LPTIM4_CFGR_PRELOAD_Values<LPTIM4::CFGR, 22, 1, ReadWriteMode, LPTIM4CFGRBase> ;
    using WAVPOL = LPTIM4_CFGR_WAVPOL_Values<LPTIM4::CFGR, 21, 1, ReadWriteMode, LPTIM4CFGRBase> ;
    using WAVE = LPTIM4_CFGR_WAVE_Values<LPTIM4::CFGR, 20, 1, ReadWriteMode, LPTIM4CFGRBase> ;
    using TIMOUT = LPTIM4_CFGR_TIMOUT_Values<LPTIM4::CFGR, 19, 1, ReadWriteMode, LPTIM4CFGRBase> ;
    using TRIGEN = LPTIM4_CFGR_TRIGEN_Values<LPTIM4::CFGR, 17, 2, ReadWriteMode, LPTIM4CFGRBase> ;
    using TRIGSEL = LPTIM4_CFGR_TRIGSEL_Values<LPTIM4::CFGR, 13, 3, ReadWriteMode, LPTIM4CFGRBase> ;
    using PRESC = LPTIM4_CFGR_PRESC_Values<LPTIM4::CFGR, 9, 3, ReadWriteMode, LPTIM4CFGRBase> ;
    using TRGFLT = LPTIM4_CFGR_TRGFLT_Values<LPTIM4::CFGR, 6, 2, ReadWriteMode, LPTIM4CFGRBase> ;
    using CKFLT = LPTIM4_CFGR_CKFLT_Values<LPTIM4::CFGR, 3, 2, ReadWriteMode, LPTIM4CFGRBase> ;
    using CKPOL = LPTIM4_CFGR_CKPOL_Values<LPTIM4::CFGR, 1, 2, ReadWriteMode, LPTIM4CFGRBase> ;
    using CKSEL = LPTIM4_CFGR_CKSEL_Values<LPTIM4::CFGR, 0, 1, ReadWriteMode, LPTIM4CFGRBase> ;
    using FieldValues = LPTIM4_CFGR_CKSEL_Values<LPTIM4::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x58002C0C, 32, ReadWriteMode, LPTIM4CFGRBase, T...> ;

  struct LPTIM4CRBase {} ;

  struct CR : public RegisterBase<0x58002C10, 32, ReadWriteMode>
  {
    using ENABLE = LPTIM4_CR_ENABLE_Values<LPTIM4::CR, 0, 1, ReadWriteMode, LPTIM4CRBase> ;
    using SNGSTRT = LPTIM4_CR_SNGSTRT_Values<LPTIM4::CR, 1, 1, ReadWriteMode, LPTIM4CRBase> ;
    using CNTSTRT = LPTIM4_CR_CNTSTRT_Values<LPTIM4::CR, 2, 1, ReadWriteMode, LPTIM4CRBase> ;
    using COUNTRST = LPTIM4_CR_COUNTRST_Values<LPTIM4::CR, 3, 1, ReadWriteMode, LPTIM4CRBase> ;
    using RSTARE = LPTIM4_CR_RSTARE_Values<LPTIM4::CR, 4, 1, ReadWriteMode, LPTIM4CRBase> ;
    using FieldValues = LPTIM4_CR_RSTARE_Values<LPTIM4::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58002C10, 32, ReadWriteMode, LPTIM4CRBase, T...> ;

  struct LPTIM4CMPBase {} ;

  struct CMP : public RegisterBase<0x58002C14, 32, ReadWriteMode>
  {
    using CMPField = LPTIM4_CMP_CMP_Values<LPTIM4::CMP, 0, 16, ReadWriteMode, LPTIM4CMPBase> ;
    using FieldValues = LPTIM4_CMP_CMP_Values<LPTIM4::CMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMPPack  = Register<0x58002C14, 32, ReadWriteMode, LPTIM4CMPBase, T...> ;

  struct LPTIM4ARRBase {} ;

  struct ARR : public RegisterBase<0x58002C18, 32, ReadWriteMode>
  {
    using ARRField = LPTIM4_ARR_ARR_Values<LPTIM4::ARR, 0, 16, ReadWriteMode, LPTIM4ARRBase> ;
    using FieldValues = LPTIM4_ARR_ARR_Values<LPTIM4::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x58002C18, 32, ReadWriteMode, LPTIM4ARRBase, T...> ;

  struct LPTIM4CNTBase {} ;

  struct CNT : public RegisterBase<0x58002C1C, 32, ReadMode>
  {
    using CNTField = LPTIM4_CNT_CNT_Values<LPTIM4::CNT, 0, 16, ReadMode, LPTIM4CNTBase> ;
    using FieldValues = LPTIM4_CNT_CNT_Values<LPTIM4::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x58002C1C, 32, ReadMode, LPTIM4CNTBase, T...> ;

  struct LPTIM4CFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x58002C24, 32, ReadWriteMode>
  {
    using IN1SEL = LPTIM4_CFGR2_IN1SEL_Values<LPTIM4::CFGR2, 0, 2, ReadWriteMode, LPTIM4CFGR2Base> ;
    using FieldValues = LPTIM4_CFGR2_IN1SEL_Values<LPTIM4::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x58002C24, 32, ReadWriteMode, LPTIM4CFGR2Base, T...> ;

} ;

#endif //#if !defined(LPTIM4REGISTERS_HPP)
