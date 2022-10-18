/*******************************************************************************
* Filename      : lptim3registers.hpp
*
* Details       : Low power timer. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(LPTIM3REGISTERS_HPP)
#define LPTIM3REGISTERS_HPP

#include "lptim3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPTIM3
{
  struct LPTIM3ISRBase {} ;

  struct ISR : public RegisterBase<0x58002800, 32, ReadMode>
  {
    using DOWN = LPTIM3_ISR_DOWN_Values<LPTIM3::ISR, 6, 1, ReadMode, LPTIM3ISRBase> ;
    using UP = LPTIM3_ISR_UP_Values<LPTIM3::ISR, 5, 1, ReadMode, LPTIM3ISRBase> ;
    using ARROK = LPTIM3_ISR_ARROK_Values<LPTIM3::ISR, 4, 1, ReadMode, LPTIM3ISRBase> ;
    using CMPOK = LPTIM3_ISR_CMPOK_Values<LPTIM3::ISR, 3, 1, ReadMode, LPTIM3ISRBase> ;
    using EXTTRIG = LPTIM3_ISR_EXTTRIG_Values<LPTIM3::ISR, 2, 1, ReadMode, LPTIM3ISRBase> ;
    using ARRM = LPTIM3_ISR_ARRM_Values<LPTIM3::ISR, 1, 1, ReadMode, LPTIM3ISRBase> ;
    using CMPM = LPTIM3_ISR_CMPM_Values<LPTIM3::ISR, 0, 1, ReadMode, LPTIM3ISRBase> ;
    using FieldValues = LPTIM3_ISR_CMPM_Values<LPTIM3::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x58002800, 32, ReadMode, LPTIM3ISRBase, T...> ;

  struct LPTIM3ICRBase {} ;

  struct ICR : public RegisterBase<0x58002804, 32, WriteMode>
  {
    using DOWNCF = LPTIM3_ICR_DOWNCF_Values<LPTIM3::ICR, 6, 1, WriteMode, LPTIM3ICRBase> ;
    using UPCF = LPTIM3_ICR_UPCF_Values<LPTIM3::ICR, 5, 1, WriteMode, LPTIM3ICRBase> ;
    using ARROKCF = LPTIM3_ICR_ARROKCF_Values<LPTIM3::ICR, 4, 1, WriteMode, LPTIM3ICRBase> ;
    using CMPOKCF = LPTIM3_ICR_CMPOKCF_Values<LPTIM3::ICR, 3, 1, WriteMode, LPTIM3ICRBase> ;
    using EXTTRIGCF = LPTIM3_ICR_EXTTRIGCF_Values<LPTIM3::ICR, 2, 1, WriteMode, LPTIM3ICRBase> ;
    using ARRMCF = LPTIM3_ICR_ARRMCF_Values<LPTIM3::ICR, 1, 1, WriteMode, LPTIM3ICRBase> ;
    using CMPMCF = LPTIM3_ICR_CMPMCF_Values<LPTIM3::ICR, 0, 1, WriteMode, LPTIM3ICRBase> ;
    using FieldValues = LPTIM3_ICR_CMPMCF_Values<LPTIM3::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x58002804, 32, WriteMode, LPTIM3ICRBase, T...> ;

  struct LPTIM3IERBase {} ;

  struct IER : public RegisterBase<0x58002808, 32, ReadWriteMode>
  {
    using DOWNIE = LPTIM3_IER_DOWNIE_Values<LPTIM3::IER, 6, 1, ReadWriteMode, LPTIM3IERBase> ;
    using UPIE = LPTIM3_IER_UPIE_Values<LPTIM3::IER, 5, 1, ReadWriteMode, LPTIM3IERBase> ;
    using ARROKIE = LPTIM3_IER_ARROKIE_Values<LPTIM3::IER, 4, 1, ReadWriteMode, LPTIM3IERBase> ;
    using CMPOKIE = LPTIM3_IER_CMPOKIE_Values<LPTIM3::IER, 3, 1, ReadWriteMode, LPTIM3IERBase> ;
    using EXTTRIGIE = LPTIM3_IER_EXTTRIGIE_Values<LPTIM3::IER, 2, 1, ReadWriteMode, LPTIM3IERBase> ;
    using ARRMIE = LPTIM3_IER_ARRMIE_Values<LPTIM3::IER, 1, 1, ReadWriteMode, LPTIM3IERBase> ;
    using CMPMIE = LPTIM3_IER_CMPMIE_Values<LPTIM3::IER, 0, 1, ReadWriteMode, LPTIM3IERBase> ;
    using FieldValues = LPTIM3_IER_CMPMIE_Values<LPTIM3::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x58002808, 32, ReadWriteMode, LPTIM3IERBase, T...> ;

  struct LPTIM3CFGRBase {} ;

  struct CFGR : public RegisterBase<0x5800280C, 32, ReadWriteMode>
  {
    using ENC = LPTIM3_CFGR_ENC_Values<LPTIM3::CFGR, 24, 1, ReadWriteMode, LPTIM3CFGRBase> ;
    using COUNTMODE = LPTIM3_CFGR_COUNTMODE_Values<LPTIM3::CFGR, 23, 1, ReadWriteMode, LPTIM3CFGRBase> ;
    using PRELOAD = LPTIM3_CFGR_PRELOAD_Values<LPTIM3::CFGR, 22, 1, ReadWriteMode, LPTIM3CFGRBase> ;
    using WAVPOL = LPTIM3_CFGR_WAVPOL_Values<LPTIM3::CFGR, 21, 1, ReadWriteMode, LPTIM3CFGRBase> ;
    using WAVE = LPTIM3_CFGR_WAVE_Values<LPTIM3::CFGR, 20, 1, ReadWriteMode, LPTIM3CFGRBase> ;
    using TIMOUT = LPTIM3_CFGR_TIMOUT_Values<LPTIM3::CFGR, 19, 1, ReadWriteMode, LPTIM3CFGRBase> ;
    using TRIGEN = LPTIM3_CFGR_TRIGEN_Values<LPTIM3::CFGR, 17, 2, ReadWriteMode, LPTIM3CFGRBase> ;
    using TRIGSEL = LPTIM3_CFGR_TRIGSEL_Values<LPTIM3::CFGR, 13, 3, ReadWriteMode, LPTIM3CFGRBase> ;
    using PRESC = LPTIM3_CFGR_PRESC_Values<LPTIM3::CFGR, 9, 3, ReadWriteMode, LPTIM3CFGRBase> ;
    using TRGFLT = LPTIM3_CFGR_TRGFLT_Values<LPTIM3::CFGR, 6, 2, ReadWriteMode, LPTIM3CFGRBase> ;
    using CKFLT = LPTIM3_CFGR_CKFLT_Values<LPTIM3::CFGR, 3, 2, ReadWriteMode, LPTIM3CFGRBase> ;
    using CKPOL = LPTIM3_CFGR_CKPOL_Values<LPTIM3::CFGR, 1, 2, ReadWriteMode, LPTIM3CFGRBase> ;
    using CKSEL = LPTIM3_CFGR_CKSEL_Values<LPTIM3::CFGR, 0, 1, ReadWriteMode, LPTIM3CFGRBase> ;
    using FieldValues = LPTIM3_CFGR_CKSEL_Values<LPTIM3::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x5800280C, 32, ReadWriteMode, LPTIM3CFGRBase, T...> ;

  struct LPTIM3CRBase {} ;

  struct CR : public RegisterBase<0x58002810, 32, ReadWriteMode>
  {
    using ENABLE = LPTIM3_CR_ENABLE_Values<LPTIM3::CR, 0, 1, ReadWriteMode, LPTIM3CRBase> ;
    using SNGSTRT = LPTIM3_CR_SNGSTRT_Values<LPTIM3::CR, 1, 1, ReadWriteMode, LPTIM3CRBase> ;
    using CNTSTRT = LPTIM3_CR_CNTSTRT_Values<LPTIM3::CR, 2, 1, ReadWriteMode, LPTIM3CRBase> ;
    using COUNTRST = LPTIM3_CR_COUNTRST_Values<LPTIM3::CR, 3, 1, ReadWriteMode, LPTIM3CRBase> ;
    using RSTARE = LPTIM3_CR_RSTARE_Values<LPTIM3::CR, 4, 1, ReadWriteMode, LPTIM3CRBase> ;
    using FieldValues = LPTIM3_CR_RSTARE_Values<LPTIM3::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58002810, 32, ReadWriteMode, LPTIM3CRBase, T...> ;

  struct LPTIM3CMPBase {} ;

  struct CMP : public RegisterBase<0x58002814, 32, ReadWriteMode>
  {
    using CMPField = LPTIM3_CMP_CMP_Values<LPTIM3::CMP, 0, 16, ReadWriteMode, LPTIM3CMPBase> ;
    using FieldValues = LPTIM3_CMP_CMP_Values<LPTIM3::CMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMPPack  = Register<0x58002814, 32, ReadWriteMode, LPTIM3CMPBase, T...> ;

  struct LPTIM3ARRBase {} ;

  struct ARR : public RegisterBase<0x58002818, 32, ReadWriteMode>
  {
    using ARRField = LPTIM3_ARR_ARR_Values<LPTIM3::ARR, 0, 16, ReadWriteMode, LPTIM3ARRBase> ;
    using FieldValues = LPTIM3_ARR_ARR_Values<LPTIM3::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x58002818, 32, ReadWriteMode, LPTIM3ARRBase, T...> ;

  struct LPTIM3CNTBase {} ;

  struct CNT : public RegisterBase<0x5800281C, 32, ReadMode>
  {
    using CNTField = LPTIM3_CNT_CNT_Values<LPTIM3::CNT, 0, 16, ReadMode, LPTIM3CNTBase> ;
    using FieldValues = LPTIM3_CNT_CNT_Values<LPTIM3::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x5800281C, 32, ReadMode, LPTIM3CNTBase, T...> ;

  struct LPTIM3CFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x58002824, 32, ReadWriteMode>
  {
    using IN1SEL = LPTIM3_CFGR2_IN1SEL_Values<LPTIM3::CFGR2, 0, 2, ReadWriteMode, LPTIM3CFGR2Base> ;
    using FieldValues = LPTIM3_CFGR2_IN1SEL_Values<LPTIM3::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x58002824, 32, ReadWriteMode, LPTIM3CFGR2Base, T...> ;

} ;

#endif //#if !defined(LPTIM3REGISTERS_HPP)
