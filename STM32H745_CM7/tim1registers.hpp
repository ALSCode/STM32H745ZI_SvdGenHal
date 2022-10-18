/*******************************************************************************
* Filename      : tim1registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(TIM1REGISTERS_HPP)
#define TIM1REGISTERS_HPP

#include "tim1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM1
{
  struct TIM1CR1Base {} ;

  struct CR1 : public RegisterBase<0x40010000, 32, ReadWriteMode>
  {
    using CEN = TIM1_CR1_CEN_Values<TIM1::CR1, 0, 1, ReadWriteMode, TIM1CR1Base> ;
    using UDIS = TIM1_CR1_UDIS_Values<TIM1::CR1, 1, 1, ReadWriteMode, TIM1CR1Base> ;
    using URS = TIM1_CR1_URS_Values<TIM1::CR1, 2, 1, ReadWriteMode, TIM1CR1Base> ;
    using OPM = TIM1_CR1_OPM_Values<TIM1::CR1, 3, 1, ReadWriteMode, TIM1CR1Base> ;
    using DIR = TIM1_CR1_DIR_Values<TIM1::CR1, 4, 1, ReadWriteMode, TIM1CR1Base> ;
    using CMS = TIM1_CR1_CMS_Values<TIM1::CR1, 5, 2, ReadWriteMode, TIM1CR1Base> ;
    using ARPE = TIM1_CR1_ARPE_Values<TIM1::CR1, 7, 1, ReadWriteMode, TIM1CR1Base> ;
    using CKD = TIM1_CR1_CKD_Values<TIM1::CR1, 8, 2, ReadWriteMode, TIM1CR1Base> ;
    using UIFREMAP = TIM1_CR1_UIFREMAP_Values<TIM1::CR1, 11, 1, ReadWriteMode, TIM1CR1Base> ;
    using FieldValues = TIM1_CR1_UIFREMAP_Values<TIM1::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40010000, 32, ReadWriteMode, TIM1CR1Base, T...> ;

  struct TIM1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40010004, 32, ReadWriteMode>
  {
    using MMS2 = TIM1_CR2_MMS2_Values<TIM1::CR2, 20, 4, ReadWriteMode, TIM1CR2Base> ;
    using OIS6 = TIM1_CR2_OIS6_Values<TIM1::CR2, 18, 1, ReadWriteMode, TIM1CR2Base> ;
    using OIS5 = TIM1_CR2_OIS5_Values<TIM1::CR2, 16, 1, ReadWriteMode, TIM1CR2Base> ;
    using OIS4 = TIM1_CR2_OIS4_Values<TIM1::CR2, 14, 1, ReadWriteMode, TIM1CR2Base> ;
    using OIS3N = TIM1_CR2_OIS3N_Values<TIM1::CR2, 13, 1, ReadWriteMode, TIM1CR2Base> ;
    using OIS3 = TIM1_CR2_OIS3_Values<TIM1::CR2, 12, 1, ReadWriteMode, TIM1CR2Base> ;
    using OIS2N = TIM1_CR2_OIS2N_Values<TIM1::CR2, 11, 1, ReadWriteMode, TIM1CR2Base> ;
    using OIS2 = TIM1_CR2_OIS2_Values<TIM1::CR2, 10, 1, ReadWriteMode, TIM1CR2Base> ;
    using OIS1N = TIM1_CR2_OIS1N_Values<TIM1::CR2, 9, 1, ReadWriteMode, TIM1CR2Base> ;
    using OIS1 = TIM1_CR2_OIS1_Values<TIM1::CR2, 8, 1, ReadWriteMode, TIM1CR2Base> ;
    using TI1S = TIM1_CR2_TI1S_Values<TIM1::CR2, 7, 1, ReadWriteMode, TIM1CR2Base> ;
    using MMS = TIM1_CR2_MMS_Values<TIM1::CR2, 4, 3, ReadWriteMode, TIM1CR2Base> ;
    using CCDS = TIM1_CR2_CCDS_Values<TIM1::CR2, 3, 1, ReadWriteMode, TIM1CR2Base> ;
    using CCUS = TIM1_CR2_CCUS_Values<TIM1::CR2, 2, 1, ReadWriteMode, TIM1CR2Base> ;
    using CCPC = TIM1_CR2_CCPC_Values<TIM1::CR2, 0, 1, ReadWriteMode, TIM1CR2Base> ;
    using FieldValues = TIM1_CR2_CCPC_Values<TIM1::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40010004, 32, ReadWriteMode, TIM1CR2Base, T...> ;

  struct TIM1SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40010008, 32, ReadWriteMode>
  {
    using SMS = TIM1_SMCR_SMS_Values<TIM1::SMCR, 0, 3, ReadWriteMode, TIM1SMCRBase> ;
    using TS = TIM1_SMCR_TS_Values<TIM1::SMCR, 4, 3, ReadWriteMode, TIM1SMCRBase> ;
    using MSM = TIM1_SMCR_MSM_Values<TIM1::SMCR, 7, 1, ReadWriteMode, TIM1SMCRBase> ;
    using ETF = TIM1_SMCR_ETF_Values<TIM1::SMCR, 8, 4, ReadWriteMode, TIM1SMCRBase> ;
    using ETPS = TIM1_SMCR_ETPS_Values<TIM1::SMCR, 12, 2, ReadWriteMode, TIM1SMCRBase> ;
    using ECE = TIM1_SMCR_ECE_Values<TIM1::SMCR, 14, 1, ReadWriteMode, TIM1SMCRBase> ;
    using ETP = TIM1_SMCR_ETP_Values<TIM1::SMCR, 15, 1, ReadWriteMode, TIM1SMCRBase> ;
    using SMS_3 = TIM1_SMCR_SMS_3_Values<TIM1::SMCR, 16, 1, ReadWriteMode, TIM1SMCRBase> ;
    using TS_4_3 = TIM1_SMCR_TS_4_3_Values<TIM1::SMCR, 20, 2, ReadWriteMode, TIM1SMCRBase> ;
    using FieldValues = TIM1_SMCR_TS_4_3_Values<TIM1::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40010008, 32, ReadWriteMode, TIM1SMCRBase, T...> ;

  struct TIM1DIERBase {} ;

  struct DIER : public RegisterBase<0x4001000C, 32, ReadWriteMode>
  {
    using TDE = TIM1_DIER_TDE_Values<TIM1::DIER, 14, 1, ReadWriteMode, TIM1DIERBase> ;
    using COMDE = TIM1_DIER_COMDE_Values<TIM1::DIER, 13, 1, ReadWriteMode, TIM1DIERBase> ;
    using CC4DE = TIM1_DIER_CC4DE_Values<TIM1::DIER, 12, 1, ReadWriteMode, TIM1DIERBase> ;
    using CC3DE = TIM1_DIER_CC3DE_Values<TIM1::DIER, 11, 1, ReadWriteMode, TIM1DIERBase> ;
    using CC2DE = TIM1_DIER_CC2DE_Values<TIM1::DIER, 10, 1, ReadWriteMode, TIM1DIERBase> ;
    using CC1DE = TIM1_DIER_CC1DE_Values<TIM1::DIER, 9, 1, ReadWriteMode, TIM1DIERBase> ;
    using UDE = TIM1_DIER_UDE_Values<TIM1::DIER, 8, 1, ReadWriteMode, TIM1DIERBase> ;
    using TIE = TIM1_DIER_TIE_Values<TIM1::DIER, 6, 1, ReadWriteMode, TIM1DIERBase> ;
    using CC4IE = TIM1_DIER_CC4IE_Values<TIM1::DIER, 4, 1, ReadWriteMode, TIM1DIERBase> ;
    using CC3IE = TIM1_DIER_CC3IE_Values<TIM1::DIER, 3, 1, ReadWriteMode, TIM1DIERBase> ;
    using CC2IE = TIM1_DIER_CC2IE_Values<TIM1::DIER, 2, 1, ReadWriteMode, TIM1DIERBase> ;
    using CC1IE = TIM1_DIER_CC1IE_Values<TIM1::DIER, 1, 1, ReadWriteMode, TIM1DIERBase> ;
    using UIE = TIM1_DIER_UIE_Values<TIM1::DIER, 0, 1, ReadWriteMode, TIM1DIERBase> ;
    using BIE = TIM1_DIER_BIE_Values<TIM1::DIER, 7, 1, ReadWriteMode, TIM1DIERBase> ;
    using COMIE = TIM1_DIER_COMIE_Values<TIM1::DIER, 5, 1, ReadWriteMode, TIM1DIERBase> ;
    using FieldValues = TIM1_DIER_COMIE_Values<TIM1::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001000C, 32, ReadWriteMode, TIM1DIERBase, T...> ;

  struct TIM1SRBase {} ;

  struct SR : public RegisterBase<0x40010010, 32, ReadWriteMode>
  {
    using CC6IF = TIM1_SR_CC6IF_Values<TIM1::SR, 17, 1, ReadWriteMode, TIM1SRBase> ;
    using CC5IF = TIM1_SR_CC5IF_Values<TIM1::SR, 16, 1, ReadWriteMode, TIM1SRBase> ;
    using SBIF = TIM1_SR_SBIF_Values<TIM1::SR, 13, 1, ReadWriteMode, TIM1SRBase> ;
    using CC4OF = TIM1_SR_CC4OF_Values<TIM1::SR, 12, 1, ReadWriteMode, TIM1SRBase> ;
    using CC3OF = TIM1_SR_CC3OF_Values<TIM1::SR, 11, 1, ReadWriteMode, TIM1SRBase> ;
    using CC2OF = TIM1_SR_CC2OF_Values<TIM1::SR, 10, 1, ReadWriteMode, TIM1SRBase> ;
    using CC1OF = TIM1_SR_CC1OF_Values<TIM1::SR, 9, 1, ReadWriteMode, TIM1SRBase> ;
    using B2IF = TIM1_SR_B2IF_Values<TIM1::SR, 8, 1, ReadWriteMode, TIM1SRBase> ;
    using BIF = TIM1_SR_BIF_Values<TIM1::SR, 7, 1, ReadWriteMode, TIM1SRBase> ;
    using TIF = TIM1_SR_TIF_Values<TIM1::SR, 6, 1, ReadWriteMode, TIM1SRBase> ;
    using COMIF = TIM1_SR_COMIF_Values<TIM1::SR, 5, 1, ReadWriteMode, TIM1SRBase> ;
    using CC4IF = TIM1_SR_CC4IF_Values<TIM1::SR, 4, 1, ReadWriteMode, TIM1SRBase> ;
    using CC3IF = TIM1_SR_CC3IF_Values<TIM1::SR, 3, 1, ReadWriteMode, TIM1SRBase> ;
    using CC2IF = TIM1_SR_CC2IF_Values<TIM1::SR, 2, 1, ReadWriteMode, TIM1SRBase> ;
    using CC1IF = TIM1_SR_CC1IF_Values<TIM1::SR, 1, 1, ReadWriteMode, TIM1SRBase> ;
    using UIF = TIM1_SR_UIF_Values<TIM1::SR, 0, 1, ReadWriteMode, TIM1SRBase> ;
    using FieldValues = TIM1_SR_UIF_Values<TIM1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40010010, 32, ReadWriteMode, TIM1SRBase, T...> ;

  struct TIM1EGRBase {} ;

  struct EGR : public RegisterBase<0x40010014, 32, WriteMode>
  {
    using UG = TIM1_EGR_UG_Values<TIM1::EGR, 0, 1, WriteMode, TIM1EGRBase> ;
    using CC1G = TIM1_EGR_CC1G_Values<TIM1::EGR, 1, 1, WriteMode, TIM1EGRBase> ;
    using CC2G = TIM1_EGR_CC2G_Values<TIM1::EGR, 2, 1, WriteMode, TIM1EGRBase> ;
    using CC3G = TIM1_EGR_CC3G_Values<TIM1::EGR, 3, 1, WriteMode, TIM1EGRBase> ;
    using CC4G = TIM1_EGR_CC4G_Values<TIM1::EGR, 4, 1, WriteMode, TIM1EGRBase> ;
    using COMG = TIM1_EGR_COMG_Values<TIM1::EGR, 5, 1, WriteMode, TIM1EGRBase> ;
    using TG = TIM1_EGR_TG_Values<TIM1::EGR, 6, 1, WriteMode, TIM1EGRBase> ;
    using BG = TIM1_EGR_BG_Values<TIM1::EGR, 7, 1, WriteMode, TIM1EGRBase> ;
    using B2G = TIM1_EGR_B2G_Values<TIM1::EGR, 8, 1, WriteMode, TIM1EGRBase> ;
    using FieldValues = TIM1_EGR_B2G_Values<TIM1::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40010014, 32, WriteMode, TIM1EGRBase, T...> ;

  struct TIM1CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40010018, 32, ReadWriteMode>
  {
    using CC1S = TIM1_CCMR1_Output_CC1S_Values<TIM1::CCMR1_Output, 0, 2, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC1FE = TIM1_CCMR1_Output_OC1FE_Values<TIM1::CCMR1_Output, 2, 1, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC1PE = TIM1_CCMR1_Output_OC1PE_Values<TIM1::CCMR1_Output, 3, 1, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC1M = TIM1_CCMR1_Output_OC1M_Values<TIM1::CCMR1_Output, 4, 3, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC1CE = TIM1_CCMR1_Output_OC1CE_Values<TIM1::CCMR1_Output, 7, 1, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using CC2S = TIM1_CCMR1_Output_CC2S_Values<TIM1::CCMR1_Output, 8, 2, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC2FE = TIM1_CCMR1_Output_OC2FE_Values<TIM1::CCMR1_Output, 10, 1, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC2PE = TIM1_CCMR1_Output_OC2PE_Values<TIM1::CCMR1_Output, 11, 1, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC2M = TIM1_CCMR1_Output_OC2M_Values<TIM1::CCMR1_Output, 12, 3, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC2CE = TIM1_CCMR1_Output_OC2CE_Values<TIM1::CCMR1_Output, 15, 1, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC1M_3 = TIM1_CCMR1_Output_OC1M_3_Values<TIM1::CCMR1_Output, 16, 1, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using OC2M_3 = TIM1_CCMR1_Output_OC2M_3_Values<TIM1::CCMR1_Output, 24, 1, ReadWriteMode, TIM1CCMR1_OutputBase> ;
    using FieldValues = TIM1_CCMR1_Output_OC2M_3_Values<TIM1::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40010018, 32, ReadWriteMode, TIM1CCMR1_OutputBase, T...> ;

  struct TIM1CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40010018, 32, ReadWriteMode>
  {
    using IC2F = TIM1_CCMR1_Input_IC2F_Values<TIM1::CCMR1_Input, 12, 4, ReadWriteMode, TIM1CCMR1_InputBase> ;
    using IC2PCS = TIM1_CCMR1_Input_IC2PCS_Values<TIM1::CCMR1_Input, 10, 2, ReadWriteMode, TIM1CCMR1_InputBase> ;
    using CC2S = TIM1_CCMR1_Input_CC2S_Values<TIM1::CCMR1_Input, 8, 2, ReadWriteMode, TIM1CCMR1_InputBase> ;
    using IC1F = TIM1_CCMR1_Input_IC1F_Values<TIM1::CCMR1_Input, 4, 4, ReadWriteMode, TIM1CCMR1_InputBase> ;
    using ICPCS = TIM1_CCMR1_Input_ICPCS_Values<TIM1::CCMR1_Input, 2, 2, ReadWriteMode, TIM1CCMR1_InputBase> ;
    using CC1S = TIM1_CCMR1_Input_CC1S_Values<TIM1::CCMR1_Input, 0, 2, ReadWriteMode, TIM1CCMR1_InputBase> ;
    using FieldValues = TIM1_CCMR1_Input_CC1S_Values<TIM1::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40010018, 32, ReadWriteMode, TIM1CCMR1_InputBase, T...> ;

  struct TIM1CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4001001C, 32, ReadWriteMode>
  {
    using CC3S = TIM1_CCMR2_Output_CC3S_Values<TIM1::CCMR2_Output, 0, 2, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC3FE = TIM1_CCMR2_Output_OC3FE_Values<TIM1::CCMR2_Output, 2, 1, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC3PE = TIM1_CCMR2_Output_OC3PE_Values<TIM1::CCMR2_Output, 3, 1, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC3M = TIM1_CCMR2_Output_OC3M_Values<TIM1::CCMR2_Output, 4, 3, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC3CE = TIM1_CCMR2_Output_OC3CE_Values<TIM1::CCMR2_Output, 7, 1, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using CC4S = TIM1_CCMR2_Output_CC4S_Values<TIM1::CCMR2_Output, 8, 2, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC4FE = TIM1_CCMR2_Output_OC4FE_Values<TIM1::CCMR2_Output, 10, 1, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC4PE = TIM1_CCMR2_Output_OC4PE_Values<TIM1::CCMR2_Output, 11, 1, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC4M = TIM1_CCMR2_Output_OC4M_Values<TIM1::CCMR2_Output, 12, 3, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC4CE = TIM1_CCMR2_Output_OC4CE_Values<TIM1::CCMR2_Output, 15, 1, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC3M_3 = TIM1_CCMR2_Output_OC3M_3_Values<TIM1::CCMR2_Output, 16, 1, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using OC4M_4 = TIM1_CCMR2_Output_OC4M_4_Values<TIM1::CCMR2_Output, 24, 1, ReadWriteMode, TIM1CCMR2_OutputBase> ;
    using FieldValues = TIM1_CCMR2_Output_OC4M_4_Values<TIM1::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4001001C, 32, ReadWriteMode, TIM1CCMR2_OutputBase, T...> ;

  struct TIM1CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4001001C, 32, ReadWriteMode>
  {
    using IC4F = TIM1_CCMR2_Input_IC4F_Values<TIM1::CCMR2_Input, 12, 4, ReadWriteMode, TIM1CCMR2_InputBase> ;
    using IC4PSC = TIM1_CCMR2_Input_IC4PSC_Values<TIM1::CCMR2_Input, 10, 2, ReadWriteMode, TIM1CCMR2_InputBase> ;
    using CC4S = TIM1_CCMR2_Input_CC4S_Values<TIM1::CCMR2_Input, 8, 2, ReadWriteMode, TIM1CCMR2_InputBase> ;
    using IC3F = TIM1_CCMR2_Input_IC3F_Values<TIM1::CCMR2_Input, 4, 4, ReadWriteMode, TIM1CCMR2_InputBase> ;
    using IC3PSC = TIM1_CCMR2_Input_IC3PSC_Values<TIM1::CCMR2_Input, 2, 2, ReadWriteMode, TIM1CCMR2_InputBase> ;
    using CC3S = TIM1_CCMR2_Input_CC3S_Values<TIM1::CCMR2_Input, 0, 2, ReadWriteMode, TIM1CCMR2_InputBase> ;
    using FieldValues = TIM1_CCMR2_Input_CC3S_Values<TIM1::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4001001C, 32, ReadWriteMode, TIM1CCMR2_InputBase, T...> ;

  struct TIM1CCERBase {} ;

  struct CCER : public RegisterBase<0x40010020, 32, ReadWriteMode>
  {
    using CC1E = TIM1_CCER_CC1E_Values<TIM1::CCER, 0, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC1P = TIM1_CCER_CC1P_Values<TIM1::CCER, 1, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC1NE = TIM1_CCER_CC1NE_Values<TIM1::CCER, 2, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC1NP = TIM1_CCER_CC1NP_Values<TIM1::CCER, 3, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC2E = TIM1_CCER_CC2E_Values<TIM1::CCER, 4, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC2P = TIM1_CCER_CC2P_Values<TIM1::CCER, 5, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC2NE = TIM1_CCER_CC2NE_Values<TIM1::CCER, 6, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC2NP = TIM1_CCER_CC2NP_Values<TIM1::CCER, 7, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC3E = TIM1_CCER_CC3E_Values<TIM1::CCER, 8, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC3P = TIM1_CCER_CC3P_Values<TIM1::CCER, 9, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC3NE = TIM1_CCER_CC3NE_Values<TIM1::CCER, 10, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC3NP = TIM1_CCER_CC3NP_Values<TIM1::CCER, 11, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC4E = TIM1_CCER_CC4E_Values<TIM1::CCER, 12, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC4P = TIM1_CCER_CC4P_Values<TIM1::CCER, 13, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC4NP = TIM1_CCER_CC4NP_Values<TIM1::CCER, 15, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC5E = TIM1_CCER_CC5E_Values<TIM1::CCER, 16, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC5P = TIM1_CCER_CC5P_Values<TIM1::CCER, 17, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC6E = TIM1_CCER_CC6E_Values<TIM1::CCER, 20, 1, ReadWriteMode, TIM1CCERBase> ;
    using CC6P = TIM1_CCER_CC6P_Values<TIM1::CCER, 21, 1, ReadWriteMode, TIM1CCERBase> ;
    using FieldValues = TIM1_CCER_CC6P_Values<TIM1::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40010020, 32, ReadWriteMode, TIM1CCERBase, T...> ;

  struct TIM1CNTBase {} ;

  struct CNT : public RegisterBase<0x40010024, 32, ReadWriteMode>
  {
    using CNTField = TIM1_CNT_CNT_Values<TIM1::CNT, 0, 16, ReadWriteMode, TIM1CNTBase> ;
    using UIFCPY = TIM1_CNT_UIFCPY_Values<TIM1::CNT, 31, 1, ReadMode, TIM1CNTBase> ;
    using FieldValues = TIM1_CNT_UIFCPY_Values<TIM1::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40010024, 32, ReadWriteMode, TIM1CNTBase, T...> ;

  struct TIM1PSCBase {} ;

  struct PSC : public RegisterBase<0x40010028, 32, ReadWriteMode>
  {
    using PSCField = TIM1_PSC_PSC_Values<TIM1::PSC, 0, 16, ReadWriteMode, TIM1PSCBase> ;
    using FieldValues = TIM1_PSC_PSC_Values<TIM1::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40010028, 32, ReadWriteMode, TIM1PSCBase, T...> ;

  struct TIM1ARRBase {} ;

  struct ARR : public RegisterBase<0x4001002C, 32, ReadWriteMode>
  {
    using ARRField = TIM1_ARR_ARR_Values<TIM1::ARR, 0, 16, ReadWriteMode, TIM1ARRBase> ;
    using FieldValues = TIM1_ARR_ARR_Values<TIM1::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001002C, 32, ReadWriteMode, TIM1ARRBase, T...> ;

  struct TIM1CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40010034, 32, ReadWriteMode>
  {
    using CCR1Field = TIM1_CCR1_CCR1_Values<TIM1::CCR1, 0, 16, ReadWriteMode, TIM1CCR1Base> ;
    using FieldValues = TIM1_CCR1_CCR1_Values<TIM1::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40010034, 32, ReadWriteMode, TIM1CCR1Base, T...> ;

  struct TIM1CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40010038, 32, ReadWriteMode>
  {
    using CCR2Field = TIM1_CCR2_CCR2_Values<TIM1::CCR2, 0, 16, ReadWriteMode, TIM1CCR2Base> ;
    using FieldValues = TIM1_CCR2_CCR2_Values<TIM1::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40010038, 32, ReadWriteMode, TIM1CCR2Base, T...> ;

  struct TIM1CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4001003C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM1_CCR3_CCR3_Values<TIM1::CCR3, 0, 16, ReadWriteMode, TIM1CCR3Base> ;
    using FieldValues = TIM1_CCR3_CCR3_Values<TIM1::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4001003C, 32, ReadWriteMode, TIM1CCR3Base, T...> ;

  struct TIM1CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40010040, 32, ReadWriteMode>
  {
    using CCR4Field = TIM1_CCR4_CCR4_Values<TIM1::CCR4, 0, 16, ReadWriteMode, TIM1CCR4Base> ;
    using FieldValues = TIM1_CCR4_CCR4_Values<TIM1::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40010040, 32, ReadWriteMode, TIM1CCR4Base, T...> ;

  struct TIM1DCRBase {} ;

  struct DCR : public RegisterBase<0x40010048, 32, ReadWriteMode>
  {
    using DBL = TIM1_DCR_DBL_Values<TIM1::DCR, 8, 5, ReadWriteMode, TIM1DCRBase> ;
    using DBA = TIM1_DCR_DBA_Values<TIM1::DCR, 0, 5, ReadWriteMode, TIM1DCRBase> ;
    using FieldValues = TIM1_DCR_DBA_Values<TIM1::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40010048, 32, ReadWriteMode, TIM1DCRBase, T...> ;

  struct TIM1DMARBase {} ;

  struct DMAR : public RegisterBase<0x4001004C, 32, ReadWriteMode>
  {
    using DMAB = TIM1_DMAR_DMAB_Values<TIM1::DMAR, 0, 16, ReadWriteMode, TIM1DMARBase> ;
    using FieldValues = TIM1_DMAR_DMAB_Values<TIM1::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4001004C, 32, ReadWriteMode, TIM1DMARBase, T...> ;

  struct TIM1RCRBase {} ;

  struct RCR : public RegisterBase<0x40010030, 32, ReadWriteMode>
  {
    using REP = TIM1_RCR_REP_Values<TIM1::RCR, 0, 8, ReadWriteMode, TIM1RCRBase> ;
    using FieldValues = TIM1_RCR_REP_Values<TIM1::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40010030, 32, ReadWriteMode, TIM1RCRBase, T...> ;

  struct TIM1BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40010044, 32, ReadWriteMode>
  {
    using DTG = TIM1_BDTR_DTG_Values<TIM1::BDTR, 0, 8, ReadWriteMode, TIM1BDTRBase> ;
    using LOCK = TIM1_BDTR_LOCK_Values<TIM1::BDTR, 8, 2, ReadWriteMode, TIM1BDTRBase> ;
    using OSSI = TIM1_BDTR_OSSI_Values<TIM1::BDTR, 10, 1, ReadWriteMode, TIM1BDTRBase> ;
    using OSSR = TIM1_BDTR_OSSR_Values<TIM1::BDTR, 11, 1, ReadWriteMode, TIM1BDTRBase> ;
    using BKE = TIM1_BDTR_BKE_Values<TIM1::BDTR, 12, 1, ReadWriteMode, TIM1BDTRBase> ;
    using BKP = TIM1_BDTR_BKP_Values<TIM1::BDTR, 13, 1, ReadWriteMode, TIM1BDTRBase> ;
    using AOE = TIM1_BDTR_AOE_Values<TIM1::BDTR, 14, 1, ReadWriteMode, TIM1BDTRBase> ;
    using MOE = TIM1_BDTR_MOE_Values<TIM1::BDTR, 15, 1, ReadWriteMode, TIM1BDTRBase> ;
    using BKF = TIM1_BDTR_BKF_Values<TIM1::BDTR, 16, 4, ReadWriteMode, TIM1BDTRBase> ;
    using BK2F = TIM1_BDTR_BK2F_Values<TIM1::BDTR, 20, 4, ReadWriteMode, TIM1BDTRBase> ;
    using BK2E = TIM1_BDTR_BK2E_Values<TIM1::BDTR, 24, 1, ReadWriteMode, TIM1BDTRBase> ;
    using BK2P = TIM1_BDTR_BK2P_Values<TIM1::BDTR, 25, 1, ReadWriteMode, TIM1BDTRBase> ;
    using FieldValues = TIM1_BDTR_BK2P_Values<TIM1::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40010044, 32, ReadWriteMode, TIM1BDTRBase, T...> ;

  struct TIM1CCMR3_OutputBase {} ;

  struct CCMR3_Output : public RegisterBase<0x40010054, 32, ReadWriteMode>
  {
    using OC5FE = TIM1_CCMR3_Output_OC5FE_Values<TIM1::CCMR3_Output, 2, 1, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC5PE = TIM1_CCMR3_Output_OC5PE_Values<TIM1::CCMR3_Output, 3, 1, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC5M = TIM1_CCMR3_Output_OC5M_Values<TIM1::CCMR3_Output, 4, 3, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC5CE = TIM1_CCMR3_Output_OC5CE_Values<TIM1::CCMR3_Output, 7, 1, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC6FE = TIM1_CCMR3_Output_OC6FE_Values<TIM1::CCMR3_Output, 10, 1, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC6PE = TIM1_CCMR3_Output_OC6PE_Values<TIM1::CCMR3_Output, 11, 1, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC6M = TIM1_CCMR3_Output_OC6M_Values<TIM1::CCMR3_Output, 12, 3, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC6CE = TIM1_CCMR3_Output_OC6CE_Values<TIM1::CCMR3_Output, 15, 1, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC5M3 = TIM1_CCMR3_Output_OC5M3_Values<TIM1::CCMR3_Output, 16, 1, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using OC6M3 = TIM1_CCMR3_Output_OC6M3_Values<TIM1::CCMR3_Output, 24, 1, ReadWriteMode, TIM1CCMR3_OutputBase> ;
    using FieldValues = TIM1_CCMR3_Output_OC6M3_Values<TIM1::CCMR3_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR3_OutputPack  = Register<0x40010054, 32, ReadWriteMode, TIM1CCMR3_OutputBase, T...> ;

  struct TIM1CCR5Base {} ;

  struct CCR5 : public RegisterBase<0x40010058, 32, ReadWriteMode>
  {
    using CCR5Field = TIM1_CCR5_CCR5_Values<TIM1::CCR5, 0, 16, ReadWriteMode, TIM1CCR5Base> ;
    using GC5C1 = TIM1_CCR5_GC5C1_Values<TIM1::CCR5, 29, 1, ReadWriteMode, TIM1CCR5Base> ;
    using GC5C2 = TIM1_CCR5_GC5C2_Values<TIM1::CCR5, 30, 1, ReadWriteMode, TIM1CCR5Base> ;
    using GC5C3 = TIM1_CCR5_GC5C3_Values<TIM1::CCR5, 31, 1, ReadWriteMode, TIM1CCR5Base> ;
    using FieldValues = TIM1_CCR5_GC5C3_Values<TIM1::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x40010058, 32, ReadWriteMode, TIM1CCR5Base, T...> ;

  struct TIM1CRR6Base {} ;

  struct CRR6 : public RegisterBase<0x4001005C, 32, ReadWriteMode>
  {
    using CCR6 = TIM1_CRR6_CCR6_Values<TIM1::CRR6, 0, 16, ReadWriteMode, TIM1CRR6Base> ;
    using FieldValues = TIM1_CRR6_CCR6_Values<TIM1::CRR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRR6Pack  = Register<0x4001005C, 32, ReadWriteMode, TIM1CRR6Base, T...> ;

  struct TIM1AF1Base {} ;

  struct AF1 : public RegisterBase<0x40010060, 32, ReadWriteMode>
  {
    using BKINE = TIM1_AF1_BKINE_Values<TIM1::AF1, 0, 1, ReadWriteMode, TIM1AF1Base> ;
    using BKCMP1E = TIM1_AF1_BKCMP1E_Values<TIM1::AF1, 1, 1, ReadWriteMode, TIM1AF1Base> ;
    using BKCMP2E = TIM1_AF1_BKCMP2E_Values<TIM1::AF1, 2, 1, ReadWriteMode, TIM1AF1Base> ;
    using BKDF1BK0E = TIM1_AF1_BKDF1BK0E_Values<TIM1::AF1, 8, 1, ReadWriteMode, TIM1AF1Base> ;
    using BKINP = TIM1_AF1_BKINP_Values<TIM1::AF1, 9, 1, ReadWriteMode, TIM1AF1Base> ;
    using BKCMP1P = TIM1_AF1_BKCMP1P_Values<TIM1::AF1, 10, 1, ReadWriteMode, TIM1AF1Base> ;
    using BKCMP2P = TIM1_AF1_BKCMP2P_Values<TIM1::AF1, 11, 1, ReadWriteMode, TIM1AF1Base> ;
    using ETRSEL = TIM1_AF1_ETRSEL_Values<TIM1::AF1, 14, 4, ReadWriteMode, TIM1AF1Base> ;
    using FieldValues = TIM1_AF1_ETRSEL_Values<TIM1::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40010060, 32, ReadWriteMode, TIM1AF1Base, T...> ;

  struct TIM1AF2Base {} ;

  struct AF2 : public RegisterBase<0x40010064, 32, ReadWriteMode>
  {
    using BK2INE = TIM1_AF2_BK2INE_Values<TIM1::AF2, 0, 1, ReadWriteMode, TIM1AF2Base> ;
    using BK2CMP1E = TIM1_AF2_BK2CMP1E_Values<TIM1::AF2, 1, 1, ReadWriteMode, TIM1AF2Base> ;
    using BK2CMP2E = TIM1_AF2_BK2CMP2E_Values<TIM1::AF2, 2, 1, ReadWriteMode, TIM1AF2Base> ;
    using BK2DF1BK1E = TIM1_AF2_BK2DF1BK1E_Values<TIM1::AF2, 8, 1, ReadWriteMode, TIM1AF2Base> ;
    using BK2INP = TIM1_AF2_BK2INP_Values<TIM1::AF2, 9, 1, ReadWriteMode, TIM1AF2Base> ;
    using BK2CMP1P = TIM1_AF2_BK2CMP1P_Values<TIM1::AF2, 10, 1, ReadWriteMode, TIM1AF2Base> ;
    using BK2CMP2P = TIM1_AF2_BK2CMP2P_Values<TIM1::AF2, 11, 1, ReadWriteMode, TIM1AF2Base> ;
    using FieldValues = TIM1_AF2_BK2CMP2P_Values<TIM1::AF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF2Pack  = Register<0x40010064, 32, ReadWriteMode, TIM1AF2Base, T...> ;

  struct TIM1TISELBase {} ;

  struct TISEL : public RegisterBase<0x40010068, 32, ReadWriteMode>
  {
    using TI1SEL = TIM1_TISEL_TI1SEL_Values<TIM1::TISEL, 0, 4, ReadWriteMode, TIM1TISELBase> ;
    using TI2SEL = TIM1_TISEL_TI2SEL_Values<TIM1::TISEL, 8, 4, ReadWriteMode, TIM1TISELBase> ;
    using TI3SEL = TIM1_TISEL_TI3SEL_Values<TIM1::TISEL, 16, 4, ReadWriteMode, TIM1TISELBase> ;
    using TI4SEL = TIM1_TISEL_TI4SEL_Values<TIM1::TISEL, 24, 4, ReadWriteMode, TIM1TISELBase> ;
    using FieldValues = TIM1_TISEL_TI4SEL_Values<TIM1::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x40010068, 32, ReadWriteMode, TIM1TISELBase, T...> ;

} ;

#endif //#if !defined(TIM1REGISTERS_HPP)
