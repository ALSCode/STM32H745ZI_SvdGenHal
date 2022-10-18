/*******************************************************************************
* Filename      : adc1registers.hpp
*
* Details       : Analog to Digital Converter. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(ADC1REGISTERS_HPP)
#define ADC1REGISTERS_HPP

#include "adc1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC1
{
  struct ADC1ISRBase {} ;

  struct ISR : public RegisterBase<0x40022000, 32, ReadWriteMode>
  {
    using JQOVF = ADC1_ISR_JQOVF_Values<ADC1::ISR, 10, 1, ReadWriteMode, ADC1ISRBase> ;
    using AWD3 = ADC1_ISR_AWD3_Values<ADC1::ISR, 9, 1, ReadWriteMode, ADC1ISRBase> ;
    using AWD2 = ADC1_ISR_AWD2_Values<ADC1::ISR, 8, 1, ReadWriteMode, ADC1ISRBase> ;
    using AWD1 = ADC1_ISR_AWD1_Values<ADC1::ISR, 7, 1, ReadWriteMode, ADC1ISRBase> ;
    using JEOS = ADC1_ISR_JEOS_Values<ADC1::ISR, 6, 1, ReadWriteMode, ADC1ISRBase> ;
    using JEOC = ADC1_ISR_JEOC_Values<ADC1::ISR, 5, 1, ReadWriteMode, ADC1ISRBase> ;
    using OVR = ADC1_ISR_OVR_Values<ADC1::ISR, 4, 1, ReadWriteMode, ADC1ISRBase> ;
    using EOS = ADC1_ISR_EOS_Values<ADC1::ISR, 3, 1, ReadWriteMode, ADC1ISRBase> ;
    using EOC = ADC1_ISR_EOC_Values<ADC1::ISR, 2, 1, ReadWriteMode, ADC1ISRBase> ;
    using EOSMP = ADC1_ISR_EOSMP_Values<ADC1::ISR, 1, 1, ReadWriteMode, ADC1ISRBase> ;
    using ADRDY = ADC1_ISR_ADRDY_Values<ADC1::ISR, 0, 1, ReadWriteMode, ADC1ISRBase> ;
    using FieldValues = ADC1_ISR_ADRDY_Values<ADC1::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40022000, 32, ReadWriteMode, ADC1ISRBase, T...> ;

  struct ADC1IERBase {} ;

  struct IER : public RegisterBase<0x40022004, 32, ReadWriteMode>
  {
    using JQOVFIE = ADC1_IER_JQOVFIE_Values<ADC1::IER, 10, 1, ReadWriteMode, ADC1IERBase> ;
    using AWD3IE = ADC1_IER_AWD3IE_Values<ADC1::IER, 9, 1, ReadWriteMode, ADC1IERBase> ;
    using AWD2IE = ADC1_IER_AWD2IE_Values<ADC1::IER, 8, 1, ReadWriteMode, ADC1IERBase> ;
    using AWD1IE = ADC1_IER_AWD1IE_Values<ADC1::IER, 7, 1, ReadWriteMode, ADC1IERBase> ;
    using JEOSIE = ADC1_IER_JEOSIE_Values<ADC1::IER, 6, 1, ReadWriteMode, ADC1IERBase> ;
    using JEOCIE = ADC1_IER_JEOCIE_Values<ADC1::IER, 5, 1, ReadWriteMode, ADC1IERBase> ;
    using OVRIE = ADC1_IER_OVRIE_Values<ADC1::IER, 4, 1, ReadWriteMode, ADC1IERBase> ;
    using EOSIE = ADC1_IER_EOSIE_Values<ADC1::IER, 3, 1, ReadWriteMode, ADC1IERBase> ;
    using EOCIE = ADC1_IER_EOCIE_Values<ADC1::IER, 2, 1, ReadWriteMode, ADC1IERBase> ;
    using EOSMPIE = ADC1_IER_EOSMPIE_Values<ADC1::IER, 1, 1, ReadWriteMode, ADC1IERBase> ;
    using ADRDYIE = ADC1_IER_ADRDYIE_Values<ADC1::IER, 0, 1, ReadWriteMode, ADC1IERBase> ;
    using FieldValues = ADC1_IER_ADRDYIE_Values<ADC1::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40022004, 32, ReadWriteMode, ADC1IERBase, T...> ;

  struct ADC1CRBase {} ;

  struct CR : public RegisterBase<0x40022008, 32, ReadWriteMode>
  {
    using ADCAL = ADC1_CR_ADCAL_Values<ADC1::CR, 31, 1, ReadWriteMode, ADC1CRBase> ;
    using ADCALDIF = ADC1_CR_ADCALDIF_Values<ADC1::CR, 30, 1, ReadWriteMode, ADC1CRBase> ;
    using DEEPPWD = ADC1_CR_DEEPPWD_Values<ADC1::CR, 29, 1, ReadWriteMode, ADC1CRBase> ;
    using ADVREGEN = ADC1_CR_ADVREGEN_Values<ADC1::CR, 28, 1, ReadWriteMode, ADC1CRBase> ;
    using LINCALRDYW6 = ADC1_CR_LINCALRDYW6_Values<ADC1::CR, 27, 1, ReadWriteMode, ADC1CRBase> ;
    using LINCALRDYW5 = ADC1_CR_LINCALRDYW5_Values<ADC1::CR, 26, 1, ReadWriteMode, ADC1CRBase> ;
    using LINCALRDYW4 = ADC1_CR_LINCALRDYW4_Values<ADC1::CR, 25, 1, ReadWriteMode, ADC1CRBase> ;
    using LINCALRDYW3 = ADC1_CR_LINCALRDYW3_Values<ADC1::CR, 24, 1, ReadWriteMode, ADC1CRBase> ;
    using LINCALRDYW2 = ADC1_CR_LINCALRDYW2_Values<ADC1::CR, 23, 1, ReadWriteMode, ADC1CRBase> ;
    using LINCALRDYW1 = ADC1_CR_LINCALRDYW1_Values<ADC1::CR, 22, 1, ReadWriteMode, ADC1CRBase> ;
    using ADCALLIN = ADC1_CR_ADCALLIN_Values<ADC1::CR, 16, 1, ReadWriteMode, ADC1CRBase> ;
    using BOOST = ADC1_CR_BOOST_Values<ADC1::CR, 8, 2, ReadWriteMode, ADC1CRBase> ;
    using JADSTP = ADC1_CR_JADSTP_Values<ADC1::CR, 5, 1, ReadWriteMode, ADC1CRBase> ;
    using ADSTP = ADC1_CR_ADSTP_Values<ADC1::CR, 4, 1, ReadWriteMode, ADC1CRBase> ;
    using JADSTART = ADC1_CR_JADSTART_Values<ADC1::CR, 3, 1, ReadWriteMode, ADC1CRBase> ;
    using ADSTART = ADC1_CR_ADSTART_Values<ADC1::CR, 2, 1, ReadWriteMode, ADC1CRBase> ;
    using ADDIS = ADC1_CR_ADDIS_Values<ADC1::CR, 1, 1, ReadWriteMode, ADC1CRBase> ;
    using ADEN = ADC1_CR_ADEN_Values<ADC1::CR, 0, 1, ReadWriteMode, ADC1CRBase> ;
    using FieldValues = ADC1_CR_ADEN_Values<ADC1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40022008, 32, ReadWriteMode, ADC1CRBase, T...> ;

  struct ADC1CFGRBase {} ;

  struct CFGR : public RegisterBase<0x4002200C, 32, ReadWriteMode>
  {
    using JQDIS = ADC1_CFGR_JQDIS_Values<ADC1::CFGR, 31, 1, ReadWriteMode, ADC1CFGRBase> ;
    using AWDCH1CH = ADC1_CFGR_AWDCH1CH_Values<ADC1::CFGR, 26, 5, ReadWriteMode, ADC1CFGRBase> ;
    using JAUTO = ADC1_CFGR_JAUTO_Values<ADC1::CFGR, 25, 1, ReadWriteMode, ADC1CFGRBase> ;
    using JAWD1EN = ADC1_CFGR_JAWD1EN_Values<ADC1::CFGR, 24, 1, ReadWriteMode, ADC1CFGRBase> ;
    using AWD1EN = ADC1_CFGR_AWD1EN_Values<ADC1::CFGR, 23, 1, ReadWriteMode, ADC1CFGRBase> ;
    using AWD1SGL = ADC1_CFGR_AWD1SGL_Values<ADC1::CFGR, 22, 1, ReadWriteMode, ADC1CFGRBase> ;
    using JQM = ADC1_CFGR_JQM_Values<ADC1::CFGR, 21, 1, ReadWriteMode, ADC1CFGRBase> ;
    using JDISCEN = ADC1_CFGR_JDISCEN_Values<ADC1::CFGR, 20, 1, ReadWriteMode, ADC1CFGRBase> ;
    using DISCNUM = ADC1_CFGR_DISCNUM_Values<ADC1::CFGR, 17, 3, ReadWriteMode, ADC1CFGRBase> ;
    using DISCEN = ADC1_CFGR_DISCEN_Values<ADC1::CFGR, 16, 1, ReadWriteMode, ADC1CFGRBase> ;
    using AUTDLY = ADC1_CFGR_AUTDLY_Values<ADC1::CFGR, 14, 1, ReadWriteMode, ADC1CFGRBase> ;
    using CONT = ADC1_CFGR_CONT_Values<ADC1::CFGR, 13, 1, ReadWriteMode, ADC1CFGRBase> ;
    using OVRMOD = ADC1_CFGR_OVRMOD_Values<ADC1::CFGR, 12, 1, ReadWriteMode, ADC1CFGRBase> ;
    using EXTEN = ADC1_CFGR_EXTEN_Values<ADC1::CFGR, 10, 2, ReadWriteMode, ADC1CFGRBase> ;
    using EXTSEL = ADC1_CFGR_EXTSEL_Values<ADC1::CFGR, 5, 5, ReadWriteMode, ADC1CFGRBase> ;
    using RES = ADC1_CFGR_RES_Values<ADC1::CFGR, 2, 3, ReadWriteMode, ADC1CFGRBase> ;
    using DMNGT = ADC1_CFGR_DMNGT_Values<ADC1::CFGR, 0, 2, ReadWriteMode, ADC1CFGRBase> ;
    using FieldValues = ADC1_CFGR_DMNGT_Values<ADC1::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x4002200C, 32, ReadWriteMode, ADC1CFGRBase, T...> ;

  struct ADC1CFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x40022010, 32, ReadWriteMode>
  {
    using ROVSE = ADC1_CFGR2_ROVSE_Values<ADC1::CFGR2, 0, 1, ReadWriteMode, ADC1CFGR2Base> ;
    using JOVSE = ADC1_CFGR2_JOVSE_Values<ADC1::CFGR2, 1, 1, ReadWriteMode, ADC1CFGR2Base> ;
    using OVSS = ADC1_CFGR2_OVSS_Values<ADC1::CFGR2, 5, 4, ReadWriteMode, ADC1CFGR2Base> ;
    using TROVS = ADC1_CFGR2_TROVS_Values<ADC1::CFGR2, 9, 1, ReadWriteMode, ADC1CFGR2Base> ;
    using ROVSM = ADC1_CFGR2_ROVSM_Values<ADC1::CFGR2, 10, 1, ReadWriteMode, ADC1CFGR2Base> ;
    using RSHIFT1 = ADC1_CFGR2_RSHIFT1_Values<ADC1::CFGR2, 11, 1, ReadWriteMode, ADC1CFGR2Base> ;
    using RSHIFT2 = ADC1_CFGR2_RSHIFT2_Values<ADC1::CFGR2, 12, 1, ReadWriteMode, ADC1CFGR2Base> ;
    using RSHIFT3 = ADC1_CFGR2_RSHIFT3_Values<ADC1::CFGR2, 13, 1, ReadWriteMode, ADC1CFGR2Base> ;
    using RSHIFT4 = ADC1_CFGR2_RSHIFT4_Values<ADC1::CFGR2, 14, 1, ReadWriteMode, ADC1CFGR2Base> ;
    using OSR = ADC1_CFGR2_OSR_Values<ADC1::CFGR2, 16, 10, ReadWriteMode, ADC1CFGR2Base> ;
    using LSHIFT = ADC1_CFGR2_LSHIFT_Values<ADC1::CFGR2, 28, 4, ReadWriteMode, ADC1CFGR2Base> ;
    using FieldValues = ADC1_CFGR2_LSHIFT_Values<ADC1::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x40022010, 32, ReadWriteMode, ADC1CFGR2Base, T...> ;

  struct ADC1SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x40022014, 32, ReadWriteMode>
  {
    using SMP9 = ADC1_SMPR1_SMP9_Values<ADC1::SMPR1, 27, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using SMP8 = ADC1_SMPR1_SMP8_Values<ADC1::SMPR1, 24, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using SMP7 = ADC1_SMPR1_SMP7_Values<ADC1::SMPR1, 21, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using SMP6 = ADC1_SMPR1_SMP6_Values<ADC1::SMPR1, 18, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using SMP5 = ADC1_SMPR1_SMP5_Values<ADC1::SMPR1, 15, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using SMP4 = ADC1_SMPR1_SMP4_Values<ADC1::SMPR1, 12, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using SMP3 = ADC1_SMPR1_SMP3_Values<ADC1::SMPR1, 9, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using SMP2 = ADC1_SMPR1_SMP2_Values<ADC1::SMPR1, 6, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using SMP1 = ADC1_SMPR1_SMP1_Values<ADC1::SMPR1, 3, 3, ReadWriteMode, ADC1SMPR1Base> ;
    using FieldValues = ADC1_SMPR1_SMP1_Values<ADC1::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x40022014, 32, ReadWriteMode, ADC1SMPR1Base, T...> ;

  struct ADC1SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x40022018, 32, ReadWriteMode>
  {
    using SMP19 = ADC1_SMPR2_SMP19_Values<ADC1::SMPR2, 27, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP18 = ADC1_SMPR2_SMP18_Values<ADC1::SMPR2, 24, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP17 = ADC1_SMPR2_SMP17_Values<ADC1::SMPR2, 21, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP16 = ADC1_SMPR2_SMP16_Values<ADC1::SMPR2, 18, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP15 = ADC1_SMPR2_SMP15_Values<ADC1::SMPR2, 15, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP14 = ADC1_SMPR2_SMP14_Values<ADC1::SMPR2, 12, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP13 = ADC1_SMPR2_SMP13_Values<ADC1::SMPR2, 9, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP12 = ADC1_SMPR2_SMP12_Values<ADC1::SMPR2, 6, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP11 = ADC1_SMPR2_SMP11_Values<ADC1::SMPR2, 3, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using SMP10 = ADC1_SMPR2_SMP10_Values<ADC1::SMPR2, 0, 3, ReadWriteMode, ADC1SMPR2Base> ;
    using FieldValues = ADC1_SMPR2_SMP10_Values<ADC1::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x40022018, 32, ReadWriteMode, ADC1SMPR2Base, T...> ;

  struct ADC1LTR1Base {} ;

  struct LTR1 : public RegisterBase<0x40022020, 32, ReadWriteMode>
  {
    using LTR1Field = ADC1_LTR1_LTR1_Values<ADC1::LTR1, 0, 26, ReadWriteMode, ADC1LTR1Base> ;
    using FieldValues = ADC1_LTR1_LTR1_Values<ADC1::LTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LTR1Pack  = Register<0x40022020, 32, ReadWriteMode, ADC1LTR1Base, T...> ;

  struct ADC1LHTR1Base {} ;

  struct LHTR1 : public RegisterBase<0x40022024, 32, ReadWriteMode>
  {
    using LHTR1Field = ADC1_LHTR1_LHTR1_Values<ADC1::LHTR1, 0, 26, ReadWriteMode, ADC1LHTR1Base> ;
    using FieldValues = ADC1_LHTR1_LHTR1_Values<ADC1::LHTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LHTR1Pack  = Register<0x40022024, 32, ReadWriteMode, ADC1LHTR1Base, T...> ;

  struct ADC1SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x40022030, 32, ReadWriteMode>
  {
    using SQ4 = ADC1_SQR1_SQ4_Values<ADC1::SQR1, 24, 5, ReadWriteMode, ADC1SQR1Base> ;
    using SQ3 = ADC1_SQR1_SQ3_Values<ADC1::SQR1, 18, 5, ReadWriteMode, ADC1SQR1Base> ;
    using SQ2 = ADC1_SQR1_SQ2_Values<ADC1::SQR1, 12, 5, ReadWriteMode, ADC1SQR1Base> ;
    using SQ1 = ADC1_SQR1_SQ1_Values<ADC1::SQR1, 6, 5, ReadWriteMode, ADC1SQR1Base> ;
    using L3 = ADC1_SQR1_L3_Values<ADC1::SQR1, 0, 4, ReadWriteMode, ADC1SQR1Base> ;
    using FieldValues = ADC1_SQR1_L3_Values<ADC1::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x40022030, 32, ReadWriteMode, ADC1SQR1Base, T...> ;

  struct ADC1SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x40022034, 32, ReadWriteMode>
  {
    using SQ9 = ADC1_SQR2_SQ9_Values<ADC1::SQR2, 24, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ8 = ADC1_SQR2_SQ8_Values<ADC1::SQR2, 18, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ7 = ADC1_SQR2_SQ7_Values<ADC1::SQR2, 12, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ6 = ADC1_SQR2_SQ6_Values<ADC1::SQR2, 6, 5, ReadWriteMode, ADC1SQR2Base> ;
    using SQ5 = ADC1_SQR2_SQ5_Values<ADC1::SQR2, 0, 5, ReadWriteMode, ADC1SQR2Base> ;
    using FieldValues = ADC1_SQR2_SQ5_Values<ADC1::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x40022034, 32, ReadWriteMode, ADC1SQR2Base, T...> ;

  struct ADC1SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x40022038, 32, ReadWriteMode>
  {
    using SQ14 = ADC1_SQR3_SQ14_Values<ADC1::SQR3, 24, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ13 = ADC1_SQR3_SQ13_Values<ADC1::SQR3, 18, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ12 = ADC1_SQR3_SQ12_Values<ADC1::SQR3, 12, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ11 = ADC1_SQR3_SQ11_Values<ADC1::SQR3, 6, 5, ReadWriteMode, ADC1SQR3Base> ;
    using SQ10 = ADC1_SQR3_SQ10_Values<ADC1::SQR3, 0, 5, ReadWriteMode, ADC1SQR3Base> ;
    using FieldValues = ADC1_SQR3_SQ10_Values<ADC1::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x40022038, 32, ReadWriteMode, ADC1SQR3Base, T...> ;

  struct ADC1SQR4Base {} ;

  struct SQR4 : public RegisterBase<0x4002203C, 32, ReadWriteMode>
  {
    using SQ16 = ADC1_SQR4_SQ16_Values<ADC1::SQR4, 6, 5, ReadWriteMode, ADC1SQR4Base> ;
    using SQ15 = ADC1_SQR4_SQ15_Values<ADC1::SQR4, 0, 5, ReadWriteMode, ADC1SQR4Base> ;
    using FieldValues = ADC1_SQR4_SQ15_Values<ADC1::SQR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR4Pack  = Register<0x4002203C, 32, ReadWriteMode, ADC1SQR4Base, T...> ;

  struct ADC1DRBase {} ;

  struct DR : public RegisterBase<0x40022040, 32, ReadMode>
  {
    using RDATA = ADC1_DR_RDATA_Values<ADC1::DR, 0, 16, ReadMode, ADC1DRBase> ;
    using FieldValues = ADC1_DR_RDATA_Values<ADC1::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40022040, 32, ReadMode, ADC1DRBase, T...> ;

  struct ADC1JSQRBase {} ;

  struct JSQR : public RegisterBase<0x4002204C, 32, ReadWriteMode>
  {
    using JSQ4 = ADC1_JSQR_JSQ4_Values<ADC1::JSQR, 27, 5, ReadWriteMode, ADC1JSQRBase> ;
    using JSQ3 = ADC1_JSQR_JSQ3_Values<ADC1::JSQR, 21, 5, ReadWriteMode, ADC1JSQRBase> ;
    using JSQ2 = ADC1_JSQR_JSQ2_Values<ADC1::JSQR, 15, 5, ReadWriteMode, ADC1JSQRBase> ;
    using JSQ1 = ADC1_JSQR_JSQ1_Values<ADC1::JSQR, 9, 5, ReadWriteMode, ADC1JSQRBase> ;
    using JEXTEN = ADC1_JSQR_JEXTEN_Values<ADC1::JSQR, 7, 2, ReadWriteMode, ADC1JSQRBase> ;
    using JEXTSEL = ADC1_JSQR_JEXTSEL_Values<ADC1::JSQR, 2, 5, ReadWriteMode, ADC1JSQRBase> ;
    using JL = ADC1_JSQR_JL_Values<ADC1::JSQR, 0, 2, ReadWriteMode, ADC1JSQRBase> ;
    using FieldValues = ADC1_JSQR_JL_Values<ADC1::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x4002204C, 32, ReadWriteMode, ADC1JSQRBase, T...> ;

  struct ADC1OFR1Base {} ;

  struct OFR1 : public RegisterBase<0x40022060, 32, ReadWriteMode>
  {
    using SSATE = ADC1_OFR1_SSATE_Values<ADC1::OFR1, 31, 1, ReadWriteMode, ADC1OFR1Base> ;
    using OFFSET1_CH = ADC1_OFR1_OFFSET1_CH_Values<ADC1::OFR1, 26, 5, ReadWriteMode, ADC1OFR1Base> ;
    using OFFSET1 = ADC1_OFR1_OFFSET1_Values<ADC1::OFR1, 0, 26, ReadWriteMode, ADC1OFR1Base> ;
    using FieldValues = ADC1_OFR1_OFFSET1_Values<ADC1::OFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR1Pack  = Register<0x40022060, 32, ReadWriteMode, ADC1OFR1Base, T...> ;

  struct ADC1OFR2Base {} ;

  struct OFR2 : public RegisterBase<0x40022064, 32, ReadWriteMode>
  {
    using SSATE = ADC1_OFR2_SSATE_Values<ADC1::OFR2, 31, 1, ReadWriteMode, ADC1OFR2Base> ;
    using OFFSET1_CH = ADC1_OFR2_OFFSET1_CH_Values<ADC1::OFR2, 26, 5, ReadWriteMode, ADC1OFR2Base> ;
    using OFFSET1 = ADC1_OFR2_OFFSET1_Values<ADC1::OFR2, 0, 26, ReadWriteMode, ADC1OFR2Base> ;
    using FieldValues = ADC1_OFR2_OFFSET1_Values<ADC1::OFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR2Pack  = Register<0x40022064, 32, ReadWriteMode, ADC1OFR2Base, T...> ;

  struct ADC1OFR3Base {} ;

  struct OFR3 : public RegisterBase<0x40022068, 32, ReadWriteMode>
  {
    using SSATE = ADC1_OFR3_SSATE_Values<ADC1::OFR3, 31, 1, ReadWriteMode, ADC1OFR3Base> ;
    using OFFSET1_CH = ADC1_OFR3_OFFSET1_CH_Values<ADC1::OFR3, 26, 5, ReadWriteMode, ADC1OFR3Base> ;
    using OFFSET1 = ADC1_OFR3_OFFSET1_Values<ADC1::OFR3, 0, 26, ReadWriteMode, ADC1OFR3Base> ;
    using FieldValues = ADC1_OFR3_OFFSET1_Values<ADC1::OFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR3Pack  = Register<0x40022068, 32, ReadWriteMode, ADC1OFR3Base, T...> ;

  struct ADC1OFR4Base {} ;

  struct OFR4 : public RegisterBase<0x4002206C, 32, ReadWriteMode>
  {
    using SSATE = ADC1_OFR4_SSATE_Values<ADC1::OFR4, 31, 1, ReadWriteMode, ADC1OFR4Base> ;
    using OFFSET1_CH = ADC1_OFR4_OFFSET1_CH_Values<ADC1::OFR4, 26, 5, ReadWriteMode, ADC1OFR4Base> ;
    using OFFSET1 = ADC1_OFR4_OFFSET1_Values<ADC1::OFR4, 0, 26, ReadWriteMode, ADC1OFR4Base> ;
    using FieldValues = ADC1_OFR4_OFFSET1_Values<ADC1::OFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR4Pack  = Register<0x4002206C, 32, ReadWriteMode, ADC1OFR4Base, T...> ;

  struct ADC1JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x40022080, 32, ReadMode>
  {
    using JDATA1 = ADC1_JDR1_JDATA1_Values<ADC1::JDR1, 0, 32, ReadMode, ADC1JDR1Base> ;
    using FieldValues = ADC1_JDR1_JDATA1_Values<ADC1::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x40022080, 32, ReadMode, ADC1JDR1Base, T...> ;

  struct ADC1JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x40022084, 32, ReadMode>
  {
    using JDATA2 = ADC1_JDR2_JDATA2_Values<ADC1::JDR2, 0, 32, ReadMode, ADC1JDR2Base> ;
    using FieldValues = ADC1_JDR2_JDATA2_Values<ADC1::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x40022084, 32, ReadMode, ADC1JDR2Base, T...> ;

  struct ADC1JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x40022088, 32, ReadMode>
  {
    using JDATA3 = ADC1_JDR3_JDATA3_Values<ADC1::JDR3, 0, 32, ReadMode, ADC1JDR3Base> ;
    using FieldValues = ADC1_JDR3_JDATA3_Values<ADC1::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x40022088, 32, ReadMode, ADC1JDR3Base, T...> ;

  struct ADC1JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x4002208C, 32, ReadMode>
  {
    using JDATA4 = ADC1_JDR4_JDATA4_Values<ADC1::JDR4, 0, 32, ReadMode, ADC1JDR4Base> ;
    using FieldValues = ADC1_JDR4_JDATA4_Values<ADC1::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x4002208C, 32, ReadMode, ADC1JDR4Base, T...> ;

  struct ADC1AWD2CRBase {} ;

  struct AWD2CR : public RegisterBase<0x400220A0, 32, ReadWriteMode>
  {
    using AWD2CH = ADC1_AWD2CR_AWD2CH_Values<ADC1::AWD2CR, 0, 20, ReadWriteMode, ADC1AWD2CRBase> ;
    using FieldValues = ADC1_AWD2CR_AWD2CH_Values<ADC1::AWD2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD2CRPack  = Register<0x400220A0, 32, ReadWriteMode, ADC1AWD2CRBase, T...> ;

  struct ADC1AWD3CRBase {} ;

  struct AWD3CR : public RegisterBase<0x400220A4, 32, ReadWriteMode>
  {
    using AWD3CH = ADC1_AWD3CR_AWD3CH_Values<ADC1::AWD3CR, 1, 20, ReadWriteMode, ADC1AWD3CRBase> ;
    using FieldValues = ADC1_AWD3CR_AWD3CH_Values<ADC1::AWD3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD3CRPack  = Register<0x400220A4, 32, ReadWriteMode, ADC1AWD3CRBase, T...> ;

  struct ADC1DIFSELBase {} ;

  struct DIFSEL : public RegisterBase<0x400220C0, 32, ReadWriteMode>
  {
    using DIFSELField = ADC1_DIFSEL_DIFSEL_Values<ADC1::DIFSEL, 0, 20, ReadWriteMode, ADC1DIFSELBase> ;
    using FieldValues = ADC1_DIFSEL_DIFSEL_Values<ADC1::DIFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIFSELPack  = Register<0x400220C0, 32, ReadWriteMode, ADC1DIFSELBase, T...> ;

  struct ADC1CALFACTBase {} ;

  struct CALFACT : public RegisterBase<0x400220C4, 32, ReadWriteMode>
  {
    using CALFACT_D = ADC1_CALFACT_CALFACT_D_Values<ADC1::CALFACT, 16, 11, ReadWriteMode, ADC1CALFACTBase> ;
    using CALFACT_S = ADC1_CALFACT_CALFACT_S_Values<ADC1::CALFACT, 0, 11, ReadWriteMode, ADC1CALFACTBase> ;
    using FieldValues = ADC1_CALFACT_CALFACT_S_Values<ADC1::CALFACT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALFACTPack  = Register<0x400220C4, 32, ReadWriteMode, ADC1CALFACTBase, T...> ;

  struct ADC1PCSELBase {} ;

  struct PCSEL : public RegisterBase<0x4002201C, 32, ReadWriteMode>
  {
    using PCSELField = ADC1_PCSEL_PCSEL_Values<ADC1::PCSEL, 0, 20, ReadWriteMode, ADC1PCSELBase> ;
    using FieldValues = ADC1_PCSEL_PCSEL_Values<ADC1::PCSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCSELPack  = Register<0x4002201C, 32, ReadWriteMode, ADC1PCSELBase, T...> ;

  struct ADC1LTR2Base {} ;

  struct LTR2 : public RegisterBase<0x400220B0, 32, ReadWriteMode>
  {
    using LTR2Field = ADC1_LTR2_LTR2_Values<ADC1::LTR2, 0, 26, ReadWriteMode, ADC1LTR2Base> ;
    using FieldValues = ADC1_LTR2_LTR2_Values<ADC1::LTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LTR2Pack  = Register<0x400220B0, 32, ReadWriteMode, ADC1LTR2Base, T...> ;

  struct ADC1HTR2Base {} ;

  struct HTR2 : public RegisterBase<0x400220B4, 32, ReadWriteMode>
  {
    using HTR2Field = ADC1_HTR2_HTR2_Values<ADC1::HTR2, 0, 26, ReadWriteMode, ADC1HTR2Base> ;
    using FieldValues = ADC1_HTR2_HTR2_Values<ADC1::HTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HTR2Pack  = Register<0x400220B4, 32, ReadWriteMode, ADC1HTR2Base, T...> ;

  struct ADC1LTR3Base {} ;

  struct LTR3 : public RegisterBase<0x400220B8, 32, ReadWriteMode>
  {
    using LTR3Field = ADC1_LTR3_LTR3_Values<ADC1::LTR3, 0, 26, ReadWriteMode, ADC1LTR3Base> ;
    using FieldValues = ADC1_LTR3_LTR3_Values<ADC1::LTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LTR3Pack  = Register<0x400220B8, 32, ReadWriteMode, ADC1LTR3Base, T...> ;

  struct ADC1HTR3Base {} ;

  struct HTR3 : public RegisterBase<0x400220BC, 32, ReadWriteMode>
  {
    using HTR3Field = ADC1_HTR3_HTR3_Values<ADC1::HTR3, 0, 26, ReadWriteMode, ADC1HTR3Base> ;
    using FieldValues = ADC1_HTR3_HTR3_Values<ADC1::HTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HTR3Pack  = Register<0x400220BC, 32, ReadWriteMode, ADC1HTR3Base, T...> ;

  struct ADC1CALFACT2Base {} ;

  struct CALFACT2 : public RegisterBase<0x400220C8, 32, ReadWriteMode>
  {
    using LINCALFACT = ADC1_CALFACT2_LINCALFACT_Values<ADC1::CALFACT2, 0, 30, ReadWriteMode, ADC1CALFACT2Base> ;
    using FieldValues = ADC1_CALFACT2_LINCALFACT_Values<ADC1::CALFACT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALFACT2Pack  = Register<0x400220C8, 32, ReadWriteMode, ADC1CALFACT2Base, T...> ;

} ;

#endif //#if !defined(ADC1REGISTERS_HPP)
