/*******************************************************************************
* Filename      : lptim5registers.hpp
*
* Details       : Low power timer. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(LPTIM5REGISTERS_HPP)
#define LPTIM5REGISTERS_HPP

#include "lptim5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPTIM5
{
  struct LPTIM5ISRBase {} ;

  struct ISR : public RegisterBase<0x58003000, 32, ReadMode>
  {
    using DOWN = LPTIM5_ISR_DOWN_Values<LPTIM5::ISR, 6, 1, ReadMode, LPTIM5ISRBase> ;
    using UP = LPTIM5_ISR_UP_Values<LPTIM5::ISR, 5, 1, ReadMode, LPTIM5ISRBase> ;
    using ARROK = LPTIM5_ISR_ARROK_Values<LPTIM5::ISR, 4, 1, ReadMode, LPTIM5ISRBase> ;
    using CMPOK = LPTIM5_ISR_CMPOK_Values<LPTIM5::ISR, 3, 1, ReadMode, LPTIM5ISRBase> ;
    using EXTTRIG = LPTIM5_ISR_EXTTRIG_Values<LPTIM5::ISR, 2, 1, ReadMode, LPTIM5ISRBase> ;
    using ARRM = LPTIM5_ISR_ARRM_Values<LPTIM5::ISR, 1, 1, ReadMode, LPTIM5ISRBase> ;
    using CMPM = LPTIM5_ISR_CMPM_Values<LPTIM5::ISR, 0, 1, ReadMode, LPTIM5ISRBase> ;
    using FieldValues = LPTIM5_ISR_CMPM_Values<LPTIM5::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x58003000, 32, ReadMode, LPTIM5ISRBase, T...> ;

  struct LPTIM5ICRBase {} ;

  struct ICR : public RegisterBase<0x58003004, 32, WriteMode>
  {
    using DOWNCF = LPTIM5_ICR_DOWNCF_Values<LPTIM5::ICR, 6, 1, WriteMode, LPTIM5ICRBase> ;
    using UPCF = LPTIM5_ICR_UPCF_Values<LPTIM5::ICR, 5, 1, WriteMode, LPTIM5ICRBase> ;
    using ARROKCF = LPTIM5_ICR_ARROKCF_Values<LPTIM5::ICR, 4, 1, WriteMode, LPTIM5ICRBase> ;
    using CMPOKCF = LPTIM5_ICR_CMPOKCF_Values<LPTIM5::ICR, 3, 1, WriteMode, LPTIM5ICRBase> ;
    using EXTTRIGCF = LPTIM5_ICR_EXTTRIGCF_Values<LPTIM5::ICR, 2, 1, WriteMode, LPTIM5ICRBase> ;
    using ARRMCF = LPTIM5_ICR_ARRMCF_Values<LPTIM5::ICR, 1, 1, WriteMode, LPTIM5ICRBase> ;
    using CMPMCF = LPTIM5_ICR_CMPMCF_Values<LPTIM5::ICR, 0, 1, WriteMode, LPTIM5ICRBase> ;
    using FieldValues = LPTIM5_ICR_CMPMCF_Values<LPTIM5::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x58003004, 32, WriteMode, LPTIM5ICRBase, T...> ;

  struct LPTIM5IERBase {} ;

  struct IER : public RegisterBase<0x58003008, 32, ReadWriteMode>
  {
    using DOWNIE = LPTIM5_IER_DOWNIE_Values<LPTIM5::IER, 6, 1, ReadWriteMode, LPTIM5IERBase> ;
    using UPIE = LPTIM5_IER_UPIE_Values<LPTIM5::IER, 5, 1, ReadWriteMode, LPTIM5IERBase> ;
    using ARROKIE = LPTIM5_IER_ARROKIE_Values<LPTIM5::IER, 4, 1, ReadWriteMode, LPTIM5IERBase> ;
    using CMPOKIE = LPTIM5_IER_CMPOKIE_Values<LPTIM5::IER, 3, 1, ReadWriteMode, LPTIM5IERBase> ;
    using EXTTRIGIE = LPTIM5_IER_EXTTRIGIE_Values<LPTIM5::IER, 2, 1, ReadWriteMode, LPTIM5IERBase> ;
    using ARRMIE = LPTIM5_IER_ARRMIE_Values<LPTIM5::IER, 1, 1, ReadWriteMode, LPTIM5IERBase> ;
    using CMPMIE = LPTIM5_IER_CMPMIE_Values<LPTIM5::IER, 0, 1, ReadWriteMode, LPTIM5IERBase> ;
    using FieldValues = LPTIM5_IER_CMPMIE_Values<LPTIM5::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x58003008, 32, ReadWriteMode, LPTIM5IERBase, T...> ;

  struct LPTIM5CFGRBase {} ;

  struct CFGR : public RegisterBase<0x5800300C, 32, ReadWriteMode>
  {
    using ENC = LPTIM5_CFGR_ENC_Values<LPTIM5::CFGR, 24, 1, ReadWriteMode, LPTIM5CFGRBase> ;
    using COUNTMODE = LPTIM5_CFGR_COUNTMODE_Values<LPTIM5::CFGR, 23, 1, ReadWriteMode, LPTIM5CFGRBase> ;
    using PRELOAD = LPTIM5_CFGR_PRELOAD_Values<LPTIM5::CFGR, 22, 1, ReadWriteMode, LPTIM5CFGRBase> ;
    using WAVPOL = LPTIM5_CFGR_WAVPOL_Values<LPTIM5::CFGR, 21, 1, ReadWriteMode, LPTIM5CFGRBase> ;
    using WAVE = LPTIM5_CFGR_WAVE_Values<LPTIM5::CFGR, 20, 1, ReadWriteMode, LPTIM5CFGRBase> ;
    using TIMOUT = LPTIM5_CFGR_TIMOUT_Values<LPTIM5::CFGR, 19, 1, ReadWriteMode, LPTIM5CFGRBase> ;
    using TRIGEN = LPTIM5_CFGR_TRIGEN_Values<LPTIM5::CFGR, 17, 2, ReadWriteMode, LPTIM5CFGRBase> ;
    using TRIGSEL = LPTIM5_CFGR_TRIGSEL_Values<LPTIM5::CFGR, 13, 3, ReadWriteMode, LPTIM5CFGRBase> ;
    using PRESC = LPTIM5_CFGR_PRESC_Values<LPTIM5::CFGR, 9, 3, ReadWriteMode, LPTIM5CFGRBase> ;
    using TRGFLT = LPTIM5_CFGR_TRGFLT_Values<LPTIM5::CFGR, 6, 2, ReadWriteMode, LPTIM5CFGRBase> ;
    using CKFLT = LPTIM5_CFGR_CKFLT_Values<LPTIM5::CFGR, 3, 2, ReadWriteMode, LPTIM5CFGRBase> ;
    using CKPOL = LPTIM5_CFGR_CKPOL_Values<LPTIM5::CFGR, 1, 2, ReadWriteMode, LPTIM5CFGRBase> ;
    using CKSEL = LPTIM5_CFGR_CKSEL_Values<LPTIM5::CFGR, 0, 1, ReadWriteMode, LPTIM5CFGRBase> ;
    using FieldValues = LPTIM5_CFGR_CKSEL_Values<LPTIM5::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x5800300C, 32, ReadWriteMode, LPTIM5CFGRBase, T...> ;

  struct LPTIM5CRBase {} ;

  struct CR : public RegisterBase<0x58003010, 32, ReadWriteMode>
  {
    using ENABLE = LPTIM5_CR_ENABLE_Values<LPTIM5::CR, 0, 1, ReadWriteMode, LPTIM5CRBase> ;
    using SNGSTRT = LPTIM5_CR_SNGSTRT_Values<LPTIM5::CR, 1, 1, ReadWriteMode, LPTIM5CRBase> ;
    using CNTSTRT = LPTIM5_CR_CNTSTRT_Values<LPTIM5::CR, 2, 1, ReadWriteMode, LPTIM5CRBase> ;
    using COUNTRST = LPTIM5_CR_COUNTRST_Values<LPTIM5::CR, 3, 1, ReadWriteMode, LPTIM5CRBase> ;
    using RSTARE = LPTIM5_CR_RSTARE_Values<LPTIM5::CR, 4, 1, ReadWriteMode, LPTIM5CRBase> ;
    using FieldValues = LPTIM5_CR_RSTARE_Values<LPTIM5::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58003010, 32, ReadWriteMode, LPTIM5CRBase, T...> ;

  struct LPTIM5CMPBase {} ;

  struct CMP : public RegisterBase<0x58003014, 32, ReadWriteMode>
  {
    using CMPField = LPTIM5_CMP_CMP_Values<LPTIM5::CMP, 0, 16, ReadWriteMode, LPTIM5CMPBase> ;
    using FieldValues = LPTIM5_CMP_CMP_Values<LPTIM5::CMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMPPack  = Register<0x58003014, 32, ReadWriteMode, LPTIM5CMPBase, T...> ;

  struct LPTIM5ARRBase {} ;

  struct ARR : public RegisterBase<0x58003018, 32, ReadWriteMode>
  {
    using ARRField = LPTIM5_ARR_ARR_Values<LPTIM5::ARR, 0, 16, ReadWriteMode, LPTIM5ARRBase> ;
    using FieldValues = LPTIM5_ARR_ARR_Values<LPTIM5::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x58003018, 32, ReadWriteMode, LPTIM5ARRBase, T...> ;

  struct LPTIM5CNTBase {} ;

  struct CNT : public RegisterBase<0x5800301C, 32, ReadMode>
  {
    using CNTField = LPTIM5_CNT_CNT_Values<LPTIM5::CNT, 0, 16, ReadMode, LPTIM5CNTBase> ;
    using FieldValues = LPTIM5_CNT_CNT_Values<LPTIM5::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x5800301C, 32, ReadMode, LPTIM5CNTBase, T...> ;

  struct LPTIM5CFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x58003024, 32, ReadWriteMode>
  {
    using IN1SEL = LPTIM5_CFGR2_IN1SEL_Values<LPTIM5::CFGR2, 0, 2, ReadWriteMode, LPTIM5CFGR2Base> ;
    using FieldValues = LPTIM5_CFGR2_IN1SEL_Values<LPTIM5::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x58003024, 32, ReadWriteMode, LPTIM5CFGR2Base, T...> ;

} ;

#endif //#if !defined(LPTIM5REGISTERS_HPP)
