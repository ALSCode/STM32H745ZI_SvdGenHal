/*******************************************************************************
* Filename      : tim14registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(TIM14REGISTERS_HPP)
#define TIM14REGISTERS_HPP

#include "tim14fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM14
{
  struct TIM14CR1Base {} ;

  struct CR1 : public RegisterBase<0x40002000, 32, ReadWriteMode>
  {
    using UIFREMAP = TIM14_CR1_UIFREMAP_Values<TIM14::CR1, 11, 1, ReadWriteMode, TIM14CR1Base> ;
    using CKD = TIM14_CR1_CKD_Values<TIM14::CR1, 8, 2, ReadWriteMode, TIM14CR1Base> ;
    using ARPE = TIM14_CR1_ARPE_Values<TIM14::CR1, 7, 1, ReadWriteMode, TIM14CR1Base> ;
    using CMS = TIM14_CR1_CMS_Values<TIM14::CR1, 5, 2, ReadWriteMode, TIM14CR1Base> ;
    using DIR = TIM14_CR1_DIR_Values<TIM14::CR1, 4, 1, ReadWriteMode, TIM14CR1Base> ;
    using OPM = TIM14_CR1_OPM_Values<TIM14::CR1, 3, 1, ReadWriteMode, TIM14CR1Base> ;
    using URS = TIM14_CR1_URS_Values<TIM14::CR1, 2, 1, ReadWriteMode, TIM14CR1Base> ;
    using UDIS = TIM14_CR1_UDIS_Values<TIM14::CR1, 1, 1, ReadWriteMode, TIM14CR1Base> ;
    using CEN = TIM14_CR1_CEN_Values<TIM14::CR1, 0, 1, ReadWriteMode, TIM14CR1Base> ;
    using FieldValues = TIM14_CR1_CEN_Values<TIM14::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40002000, 32, ReadWriteMode, TIM14CR1Base, T...> ;

  struct TIM14CR2Base {} ;

  struct CR2 : public RegisterBase<0x40002004, 32, ReadWriteMode>
  {
    using TI1S = TIM14_CR2_TI1S_Values<TIM14::CR2, 7, 1, ReadWriteMode, TIM14CR2Base> ;
    using MMS = TIM14_CR2_MMS_Values<TIM14::CR2, 4, 3, ReadWriteMode, TIM14CR2Base> ;
    using CCDS = TIM14_CR2_CCDS_Values<TIM14::CR2, 3, 1, ReadWriteMode, TIM14CR2Base> ;
    using FieldValues = TIM14_CR2_CCDS_Values<TIM14::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40002004, 32, ReadWriteMode, TIM14CR2Base, T...> ;

  struct TIM14SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40002008, 32, ReadWriteMode>
  {
    using TS_4_3 = TIM14_SMCR_TS_4_3_Values<TIM14::SMCR, 20, 2, ReadWriteMode, TIM14SMCRBase> ;
    using SMS_3 = TIM14_SMCR_SMS_3_Values<TIM14::SMCR, 16, 1, ReadWriteMode, TIM14SMCRBase> ;
    using ETP = TIM14_SMCR_ETP_Values<TIM14::SMCR, 15, 1, ReadWriteMode, TIM14SMCRBase> ;
    using ECE = TIM14_SMCR_ECE_Values<TIM14::SMCR, 14, 1, ReadWriteMode, TIM14SMCRBase> ;
    using ETPS = TIM14_SMCR_ETPS_Values<TIM14::SMCR, 12, 2, ReadWriteMode, TIM14SMCRBase> ;
    using ETF = TIM14_SMCR_ETF_Values<TIM14::SMCR, 8, 4, ReadWriteMode, TIM14SMCRBase> ;
    using MSM = TIM14_SMCR_MSM_Values<TIM14::SMCR, 7, 1, ReadWriteMode, TIM14SMCRBase> ;
    using TS = TIM14_SMCR_TS_Values<TIM14::SMCR, 4, 3, ReadWriteMode, TIM14SMCRBase> ;
    using SMS = TIM14_SMCR_SMS_Values<TIM14::SMCR, 0, 3, ReadWriteMode, TIM14SMCRBase> ;
    using FieldValues = TIM14_SMCR_SMS_Values<TIM14::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40002008, 32, ReadWriteMode, TIM14SMCRBase, T...> ;

  struct TIM14DIERBase {} ;

  struct DIER : public RegisterBase<0x4000200C, 32, ReadWriteMode>
  {
    using TDE = TIM14_DIER_TDE_Values<TIM14::DIER, 14, 1, ReadWriteMode, TIM14DIERBase> ;
    using CC4DE = TIM14_DIER_CC4DE_Values<TIM14::DIER, 12, 1, ReadWriteMode, TIM14DIERBase> ;
    using CC3DE = TIM14_DIER_CC3DE_Values<TIM14::DIER, 11, 1, ReadWriteMode, TIM14DIERBase> ;
    using CC2DE = TIM14_DIER_CC2DE_Values<TIM14::DIER, 10, 1, ReadWriteMode, TIM14DIERBase> ;
    using CC1DE = TIM14_DIER_CC1DE_Values<TIM14::DIER, 9, 1, ReadWriteMode, TIM14DIERBase> ;
    using UDE = TIM14_DIER_UDE_Values<TIM14::DIER, 8, 1, ReadWriteMode, TIM14DIERBase> ;
    using TIE = TIM14_DIER_TIE_Values<TIM14::DIER, 6, 1, ReadWriteMode, TIM14DIERBase> ;
    using CC4IE = TIM14_DIER_CC4IE_Values<TIM14::DIER, 4, 1, ReadWriteMode, TIM14DIERBase> ;
    using CC3IE = TIM14_DIER_CC3IE_Values<TIM14::DIER, 3, 1, ReadWriteMode, TIM14DIERBase> ;
    using CC2IE = TIM14_DIER_CC2IE_Values<TIM14::DIER, 2, 1, ReadWriteMode, TIM14DIERBase> ;
    using CC1IE = TIM14_DIER_CC1IE_Values<TIM14::DIER, 1, 1, ReadWriteMode, TIM14DIERBase> ;
    using UIE = TIM14_DIER_UIE_Values<TIM14::DIER, 0, 1, ReadWriteMode, TIM14DIERBase> ;
    using FieldValues = TIM14_DIER_UIE_Values<TIM14::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000200C, 32, ReadWriteMode, TIM14DIERBase, T...> ;

  struct TIM14SRBase {} ;

  struct SR : public RegisterBase<0x40002010, 32, ReadWriteMode>
  {
    using CC4OF = TIM14_SR_CC4OF_Values<TIM14::SR, 12, 1, ReadWriteMode, TIM14SRBase> ;
    using CC3OF = TIM14_SR_CC3OF_Values<TIM14::SR, 11, 1, ReadWriteMode, TIM14SRBase> ;
    using CC2OF = TIM14_SR_CC2OF_Values<TIM14::SR, 10, 1, ReadWriteMode, TIM14SRBase> ;
    using CC1OF = TIM14_SR_CC1OF_Values<TIM14::SR, 9, 1, ReadWriteMode, TIM14SRBase> ;
    using TIF = TIM14_SR_TIF_Values<TIM14::SR, 6, 1, ReadWriteMode, TIM14SRBase> ;
    using CC4IF = TIM14_SR_CC4IF_Values<TIM14::SR, 4, 1, ReadWriteMode, TIM14SRBase> ;
    using CC3IF = TIM14_SR_CC3IF_Values<TIM14::SR, 3, 1, ReadWriteMode, TIM14SRBase> ;
    using CC2IF = TIM14_SR_CC2IF_Values<TIM14::SR, 2, 1, ReadWriteMode, TIM14SRBase> ;
    using CC1IF = TIM14_SR_CC1IF_Values<TIM14::SR, 1, 1, ReadWriteMode, TIM14SRBase> ;
    using UIF = TIM14_SR_UIF_Values<TIM14::SR, 0, 1, ReadWriteMode, TIM14SRBase> ;
    using FieldValues = TIM14_SR_UIF_Values<TIM14::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40002010, 32, ReadWriteMode, TIM14SRBase, T...> ;

  struct TIM14EGRBase {} ;

  struct EGR : public RegisterBase<0x40002014, 32, WriteMode>
  {
    using TG = TIM14_EGR_TG_Values<TIM14::EGR, 6, 1, WriteMode, TIM14EGRBase> ;
    using CC4G = TIM14_EGR_CC4G_Values<TIM14::EGR, 4, 1, WriteMode, TIM14EGRBase> ;
    using CC3G = TIM14_EGR_CC3G_Values<TIM14::EGR, 3, 1, WriteMode, TIM14EGRBase> ;
    using CC2G = TIM14_EGR_CC2G_Values<TIM14::EGR, 2, 1, WriteMode, TIM14EGRBase> ;
    using CC1G = TIM14_EGR_CC1G_Values<TIM14::EGR, 1, 1, WriteMode, TIM14EGRBase> ;
    using UG = TIM14_EGR_UG_Values<TIM14::EGR, 0, 1, WriteMode, TIM14EGRBase> ;
    using FieldValues = TIM14_EGR_UG_Values<TIM14::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40002014, 32, WriteMode, TIM14EGRBase, T...> ;

  struct TIM14CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40002018, 32, ReadWriteMode>
  {
    using CC1S = TIM14_CCMR1_Output_CC1S_Values<TIM14::CCMR1_Output, 0, 2, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC1FE = TIM14_CCMR1_Output_OC1FE_Values<TIM14::CCMR1_Output, 2, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC1PE = TIM14_CCMR1_Output_OC1PE_Values<TIM14::CCMR1_Output, 3, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC1M = TIM14_CCMR1_Output_OC1M_Values<TIM14::CCMR1_Output, 4, 3, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC1CE = TIM14_CCMR1_Output_OC1CE_Values<TIM14::CCMR1_Output, 7, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using CC2S = TIM14_CCMR1_Output_CC2S_Values<TIM14::CCMR1_Output, 8, 2, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC2FE = TIM14_CCMR1_Output_OC2FE_Values<TIM14::CCMR1_Output, 10, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC2PE = TIM14_CCMR1_Output_OC2PE_Values<TIM14::CCMR1_Output, 11, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC2M = TIM14_CCMR1_Output_OC2M_Values<TIM14::CCMR1_Output, 12, 3, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC2CE = TIM14_CCMR1_Output_OC2CE_Values<TIM14::CCMR1_Output, 15, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC1M_3 = TIM14_CCMR1_Output_OC1M_3_Values<TIM14::CCMR1_Output, 16, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using OC2M_3 = TIM14_CCMR1_Output_OC2M_3_Values<TIM14::CCMR1_Output, 24, 1, ReadWriteMode, TIM14CCMR1_OutputBase> ;
    using FieldValues = TIM14_CCMR1_Output_OC2M_3_Values<TIM14::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40002018, 32, ReadWriteMode, TIM14CCMR1_OutputBase, T...> ;

  struct TIM14CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40002018, 32, ReadWriteMode>
  {
    using IC2F = TIM14_CCMR1_Input_IC2F_Values<TIM14::CCMR1_Input, 12, 4, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using IC2PCS = TIM14_CCMR1_Input_IC2PCS_Values<TIM14::CCMR1_Input, 10, 2, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using CC2S = TIM14_CCMR1_Input_CC2S_Values<TIM14::CCMR1_Input, 8, 2, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using IC1F = TIM14_CCMR1_Input_IC1F_Values<TIM14::CCMR1_Input, 4, 4, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using ICPCS = TIM14_CCMR1_Input_ICPCS_Values<TIM14::CCMR1_Input, 2, 2, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using CC1S = TIM14_CCMR1_Input_CC1S_Values<TIM14::CCMR1_Input, 0, 2, ReadWriteMode, TIM14CCMR1_InputBase> ;
    using FieldValues = TIM14_CCMR1_Input_CC1S_Values<TIM14::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40002018, 32, ReadWriteMode, TIM14CCMR1_InputBase, T...> ;

  struct TIM14CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000201C, 32, ReadWriteMode>
  {
    using OC4M_3 = TIM14_CCMR2_Output_OC4M_3_Values<TIM14::CCMR2_Output, 24, 1, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC3M_3 = TIM14_CCMR2_Output_OC3M_3_Values<TIM14::CCMR2_Output, 16, 1, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC4CE = TIM14_CCMR2_Output_OC4CE_Values<TIM14::CCMR2_Output, 15, 1, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC4M = TIM14_CCMR2_Output_OC4M_Values<TIM14::CCMR2_Output, 12, 3, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC4PE = TIM14_CCMR2_Output_OC4PE_Values<TIM14::CCMR2_Output, 11, 1, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC4FE = TIM14_CCMR2_Output_OC4FE_Values<TIM14::CCMR2_Output, 10, 1, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using CC4S = TIM14_CCMR2_Output_CC4S_Values<TIM14::CCMR2_Output, 8, 2, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC3CE = TIM14_CCMR2_Output_OC3CE_Values<TIM14::CCMR2_Output, 7, 1, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC3M = TIM14_CCMR2_Output_OC3M_Values<TIM14::CCMR2_Output, 4, 3, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC3PE = TIM14_CCMR2_Output_OC3PE_Values<TIM14::CCMR2_Output, 3, 1, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using OC3FE = TIM14_CCMR2_Output_OC3FE_Values<TIM14::CCMR2_Output, 2, 1, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using CC3S = TIM14_CCMR2_Output_CC3S_Values<TIM14::CCMR2_Output, 0, 2, ReadWriteMode, TIM14CCMR2_OutputBase> ;
    using FieldValues = TIM14_CCMR2_Output_CC3S_Values<TIM14::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000201C, 32, ReadWriteMode, TIM14CCMR2_OutputBase, T...> ;

  struct TIM14CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000201C, 32, ReadWriteMode>
  {
    using IC4F = TIM14_CCMR2_Input_IC4F_Values<TIM14::CCMR2_Input, 12, 4, ReadWriteMode, TIM14CCMR2_InputBase> ;
    using IC4PSC = TIM14_CCMR2_Input_IC4PSC_Values<TIM14::CCMR2_Input, 10, 2, ReadWriteMode, TIM14CCMR2_InputBase> ;
    using CC4S = TIM14_CCMR2_Input_CC4S_Values<TIM14::CCMR2_Input, 8, 2, ReadWriteMode, TIM14CCMR2_InputBase> ;
    using IC3F = TIM14_CCMR2_Input_IC3F_Values<TIM14::CCMR2_Input, 4, 4, ReadWriteMode, TIM14CCMR2_InputBase> ;
    using IC3PSC = TIM14_CCMR2_Input_IC3PSC_Values<TIM14::CCMR2_Input, 2, 2, ReadWriteMode, TIM14CCMR2_InputBase> ;
    using CC3S = TIM14_CCMR2_Input_CC3S_Values<TIM14::CCMR2_Input, 0, 2, ReadWriteMode, TIM14CCMR2_InputBase> ;
    using FieldValues = TIM14_CCMR2_Input_CC3S_Values<TIM14::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000201C, 32, ReadWriteMode, TIM14CCMR2_InputBase, T...> ;

  struct TIM14CCERBase {} ;

  struct CCER : public RegisterBase<0x40002020, 32, ReadWriteMode>
  {
    using CC4NP = TIM14_CCER_CC4NP_Values<TIM14::CCER, 15, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC4P = TIM14_CCER_CC4P_Values<TIM14::CCER, 13, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC4E = TIM14_CCER_CC4E_Values<TIM14::CCER, 12, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC3NP = TIM14_CCER_CC3NP_Values<TIM14::CCER, 11, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC3P = TIM14_CCER_CC3P_Values<TIM14::CCER, 9, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC3E = TIM14_CCER_CC3E_Values<TIM14::CCER, 8, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC2NP = TIM14_CCER_CC2NP_Values<TIM14::CCER, 7, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC2P = TIM14_CCER_CC2P_Values<TIM14::CCER, 5, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC2E = TIM14_CCER_CC2E_Values<TIM14::CCER, 4, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC1NP = TIM14_CCER_CC1NP_Values<TIM14::CCER, 3, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC1P = TIM14_CCER_CC1P_Values<TIM14::CCER, 1, 1, ReadWriteMode, TIM14CCERBase> ;
    using CC1E = TIM14_CCER_CC1E_Values<TIM14::CCER, 0, 1, ReadWriteMode, TIM14CCERBase> ;
    using FieldValues = TIM14_CCER_CC1E_Values<TIM14::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40002020, 32, ReadWriteMode, TIM14CCERBase, T...> ;

  struct TIM14CNTBase {} ;

  struct CNT : public RegisterBase<0x40002024, 32, ReadWriteMode>
  {
    using CNT_L = TIM14_CNT_CNT_L_Values<TIM14::CNT, 0, 16, ReadWriteMode, TIM14CNTBase> ;
    using CNT_H = TIM14_CNT_CNT_H_Values<TIM14::CNT, 16, 16, ReadWriteMode, TIM14CNTBase> ;
    using FieldValues = TIM14_CNT_CNT_H_Values<TIM14::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40002024, 32, ReadWriteMode, TIM14CNTBase, T...> ;

  struct TIM14PSCBase {} ;

  struct PSC : public RegisterBase<0x40002028, 32, ReadWriteMode>
  {
    using PSCField = TIM14_PSC_PSC_Values<TIM14::PSC, 0, 16, ReadWriteMode, TIM14PSCBase> ;
    using FieldValues = TIM14_PSC_PSC_Values<TIM14::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40002028, 32, ReadWriteMode, TIM14PSCBase, T...> ;

  struct TIM14ARRBase {} ;

  struct ARR : public RegisterBase<0x4000202C, 32, ReadWriteMode>
  {
    using ARR_H = TIM14_ARR_ARR_H_Values<TIM14::ARR, 16, 16, ReadWriteMode, TIM14ARRBase> ;
    using ARR_L = TIM14_ARR_ARR_L_Values<TIM14::ARR, 0, 16, ReadWriteMode, TIM14ARRBase> ;
    using FieldValues = TIM14_ARR_ARR_L_Values<TIM14::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000202C, 32, ReadWriteMode, TIM14ARRBase, T...> ;

  struct TIM14CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40002034, 32, ReadWriteMode>
  {
    using CCR1_H = TIM14_CCR1_CCR1_H_Values<TIM14::CCR1, 16, 16, ReadWriteMode, TIM14CCR1Base> ;
    using CCR1_L = TIM14_CCR1_CCR1_L_Values<TIM14::CCR1, 0, 16, ReadWriteMode, TIM14CCR1Base> ;
    using FieldValues = TIM14_CCR1_CCR1_L_Values<TIM14::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40002034, 32, ReadWriteMode, TIM14CCR1Base, T...> ;

  struct TIM14CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40002038, 32, ReadWriteMode>
  {
    using CCR2_H = TIM14_CCR2_CCR2_H_Values<TIM14::CCR2, 16, 16, ReadWriteMode, TIM14CCR2Base> ;
    using CCR2_L = TIM14_CCR2_CCR2_L_Values<TIM14::CCR2, 0, 16, ReadWriteMode, TIM14CCR2Base> ;
    using FieldValues = TIM14_CCR2_CCR2_L_Values<TIM14::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40002038, 32, ReadWriteMode, TIM14CCR2Base, T...> ;

  struct TIM14CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000203C, 32, ReadWriteMode>
  {
    using CCR3_H = TIM14_CCR3_CCR3_H_Values<TIM14::CCR3, 16, 16, ReadWriteMode, TIM14CCR3Base> ;
    using CCR3_L = TIM14_CCR3_CCR3_L_Values<TIM14::CCR3, 0, 16, ReadWriteMode, TIM14CCR3Base> ;
    using FieldValues = TIM14_CCR3_CCR3_L_Values<TIM14::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000203C, 32, ReadWriteMode, TIM14CCR3Base, T...> ;

  struct TIM14CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40002040, 32, ReadWriteMode>
  {
    using CCR4_H = TIM14_CCR4_CCR4_H_Values<TIM14::CCR4, 16, 16, ReadWriteMode, TIM14CCR4Base> ;
    using CCR4_L = TIM14_CCR4_CCR4_L_Values<TIM14::CCR4, 0, 16, ReadWriteMode, TIM14CCR4Base> ;
    using FieldValues = TIM14_CCR4_CCR4_L_Values<TIM14::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40002040, 32, ReadWriteMode, TIM14CCR4Base, T...> ;

  struct TIM14DCRBase {} ;

  struct DCR : public RegisterBase<0x40002048, 32, ReadWriteMode>
  {
    using DBL = TIM14_DCR_DBL_Values<TIM14::DCR, 8, 5, ReadWriteMode, TIM14DCRBase> ;
    using DBA = TIM14_DCR_DBA_Values<TIM14::DCR, 0, 5, ReadWriteMode, TIM14DCRBase> ;
    using FieldValues = TIM14_DCR_DBA_Values<TIM14::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40002048, 32, ReadWriteMode, TIM14DCRBase, T...> ;

  struct TIM14DMARBase {} ;

  struct DMAR : public RegisterBase<0x4000204C, 32, ReadWriteMode>
  {
    using DMAB = TIM14_DMAR_DMAB_Values<TIM14::DMAR, 0, 16, ReadWriteMode, TIM14DMARBase> ;
    using FieldValues = TIM14_DMAR_DMAB_Values<TIM14::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4000204C, 32, ReadWriteMode, TIM14DMARBase, T...> ;

  struct TIM14AF1Base {} ;

  struct AF1 : public RegisterBase<0x40002060, 32, ReadWriteMode>
  {
    using ETRSEL = TIM14_AF1_ETRSEL_Values<TIM14::AF1, 14, 4, ReadWriteMode, TIM14AF1Base> ;
    using FieldValues = TIM14_AF1_ETRSEL_Values<TIM14::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40002060, 32, ReadWriteMode, TIM14AF1Base, T...> ;

  struct TIM14TISELBase {} ;

  struct TISEL : public RegisterBase<0x40002068, 32, ReadWriteMode>
  {
    using TI1SEL = TIM14_TISEL_TI1SEL_Values<TIM14::TISEL, 0, 4, ReadWriteMode, TIM14TISELBase> ;
    using TI2SEL = TIM14_TISEL_TI2SEL_Values<TIM14::TISEL, 8, 4, ReadWriteMode, TIM14TISELBase> ;
    using TI3SEL = TIM14_TISEL_TI3SEL_Values<TIM14::TISEL, 16, 4, ReadWriteMode, TIM14TISELBase> ;
    using TI4SEL = TIM14_TISEL_TI4SEL_Values<TIM14::TISEL, 24, 4, ReadWriteMode, TIM14TISELBase> ;
    using FieldValues = TIM14_TISEL_TI4SEL_Values<TIM14::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x40002068, 32, ReadWriteMode, TIM14TISELBase, T...> ;

} ;

#endif //#if !defined(TIM14REGISTERS_HPP)
