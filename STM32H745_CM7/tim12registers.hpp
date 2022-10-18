/*******************************************************************************
* Filename      : tim12registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(TIM12REGISTERS_HPP)
#define TIM12REGISTERS_HPP

#include "tim12fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM12
{
  struct TIM12CR1Base {} ;

  struct CR1 : public RegisterBase<0x40001800, 32, ReadWriteMode>
  {
    using UIFREMAP = TIM12_CR1_UIFREMAP_Values<TIM12::CR1, 11, 1, ReadWriteMode, TIM12CR1Base> ;
    using CKD = TIM12_CR1_CKD_Values<TIM12::CR1, 8, 2, ReadWriteMode, TIM12CR1Base> ;
    using ARPE = TIM12_CR1_ARPE_Values<TIM12::CR1, 7, 1, ReadWriteMode, TIM12CR1Base> ;
    using CMS = TIM12_CR1_CMS_Values<TIM12::CR1, 5, 2, ReadWriteMode, TIM12CR1Base> ;
    using DIR = TIM12_CR1_DIR_Values<TIM12::CR1, 4, 1, ReadWriteMode, TIM12CR1Base> ;
    using OPM = TIM12_CR1_OPM_Values<TIM12::CR1, 3, 1, ReadWriteMode, TIM12CR1Base> ;
    using URS = TIM12_CR1_URS_Values<TIM12::CR1, 2, 1, ReadWriteMode, TIM12CR1Base> ;
    using UDIS = TIM12_CR1_UDIS_Values<TIM12::CR1, 1, 1, ReadWriteMode, TIM12CR1Base> ;
    using CEN = TIM12_CR1_CEN_Values<TIM12::CR1, 0, 1, ReadWriteMode, TIM12CR1Base> ;
    using FieldValues = TIM12_CR1_CEN_Values<TIM12::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40001800, 32, ReadWriteMode, TIM12CR1Base, T...> ;

  struct TIM12CR2Base {} ;

  struct CR2 : public RegisterBase<0x40001804, 32, ReadWriteMode>
  {
    using TI1S = TIM12_CR2_TI1S_Values<TIM12::CR2, 7, 1, ReadWriteMode, TIM12CR2Base> ;
    using MMS = TIM12_CR2_MMS_Values<TIM12::CR2, 4, 3, ReadWriteMode, TIM12CR2Base> ;
    using CCDS = TIM12_CR2_CCDS_Values<TIM12::CR2, 3, 1, ReadWriteMode, TIM12CR2Base> ;
    using FieldValues = TIM12_CR2_CCDS_Values<TIM12::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40001804, 32, ReadWriteMode, TIM12CR2Base, T...> ;

  struct TIM12SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40001808, 32, ReadWriteMode>
  {
    using TS_4_3 = TIM12_SMCR_TS_4_3_Values<TIM12::SMCR, 20, 2, ReadWriteMode, TIM12SMCRBase> ;
    using SMS_3 = TIM12_SMCR_SMS_3_Values<TIM12::SMCR, 16, 1, ReadWriteMode, TIM12SMCRBase> ;
    using ETP = TIM12_SMCR_ETP_Values<TIM12::SMCR, 15, 1, ReadWriteMode, TIM12SMCRBase> ;
    using ECE = TIM12_SMCR_ECE_Values<TIM12::SMCR, 14, 1, ReadWriteMode, TIM12SMCRBase> ;
    using ETPS = TIM12_SMCR_ETPS_Values<TIM12::SMCR, 12, 2, ReadWriteMode, TIM12SMCRBase> ;
    using ETF = TIM12_SMCR_ETF_Values<TIM12::SMCR, 8, 4, ReadWriteMode, TIM12SMCRBase> ;
    using MSM = TIM12_SMCR_MSM_Values<TIM12::SMCR, 7, 1, ReadWriteMode, TIM12SMCRBase> ;
    using TS = TIM12_SMCR_TS_Values<TIM12::SMCR, 4, 3, ReadWriteMode, TIM12SMCRBase> ;
    using SMS = TIM12_SMCR_SMS_Values<TIM12::SMCR, 0, 3, ReadWriteMode, TIM12SMCRBase> ;
    using FieldValues = TIM12_SMCR_SMS_Values<TIM12::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40001808, 32, ReadWriteMode, TIM12SMCRBase, T...> ;

  struct TIM12DIERBase {} ;

  struct DIER : public RegisterBase<0x4000180C, 32, ReadWriteMode>
  {
    using TDE = TIM12_DIER_TDE_Values<TIM12::DIER, 14, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC4DE = TIM12_DIER_CC4DE_Values<TIM12::DIER, 12, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC3DE = TIM12_DIER_CC3DE_Values<TIM12::DIER, 11, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC2DE = TIM12_DIER_CC2DE_Values<TIM12::DIER, 10, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC1DE = TIM12_DIER_CC1DE_Values<TIM12::DIER, 9, 1, ReadWriteMode, TIM12DIERBase> ;
    using UDE = TIM12_DIER_UDE_Values<TIM12::DIER, 8, 1, ReadWriteMode, TIM12DIERBase> ;
    using TIE = TIM12_DIER_TIE_Values<TIM12::DIER, 6, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC4IE = TIM12_DIER_CC4IE_Values<TIM12::DIER, 4, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC3IE = TIM12_DIER_CC3IE_Values<TIM12::DIER, 3, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC2IE = TIM12_DIER_CC2IE_Values<TIM12::DIER, 2, 1, ReadWriteMode, TIM12DIERBase> ;
    using CC1IE = TIM12_DIER_CC1IE_Values<TIM12::DIER, 1, 1, ReadWriteMode, TIM12DIERBase> ;
    using UIE = TIM12_DIER_UIE_Values<TIM12::DIER, 0, 1, ReadWriteMode, TIM12DIERBase> ;
    using FieldValues = TIM12_DIER_UIE_Values<TIM12::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000180C, 32, ReadWriteMode, TIM12DIERBase, T...> ;

  struct TIM12SRBase {} ;

  struct SR : public RegisterBase<0x40001810, 32, ReadWriteMode>
  {
    using CC4OF = TIM12_SR_CC4OF_Values<TIM12::SR, 12, 1, ReadWriteMode, TIM12SRBase> ;
    using CC3OF = TIM12_SR_CC3OF_Values<TIM12::SR, 11, 1, ReadWriteMode, TIM12SRBase> ;
    using CC2OF = TIM12_SR_CC2OF_Values<TIM12::SR, 10, 1, ReadWriteMode, TIM12SRBase> ;
    using CC1OF = TIM12_SR_CC1OF_Values<TIM12::SR, 9, 1, ReadWriteMode, TIM12SRBase> ;
    using TIF = TIM12_SR_TIF_Values<TIM12::SR, 6, 1, ReadWriteMode, TIM12SRBase> ;
    using CC4IF = TIM12_SR_CC4IF_Values<TIM12::SR, 4, 1, ReadWriteMode, TIM12SRBase> ;
    using CC3IF = TIM12_SR_CC3IF_Values<TIM12::SR, 3, 1, ReadWriteMode, TIM12SRBase> ;
    using CC2IF = TIM12_SR_CC2IF_Values<TIM12::SR, 2, 1, ReadWriteMode, TIM12SRBase> ;
    using CC1IF = TIM12_SR_CC1IF_Values<TIM12::SR, 1, 1, ReadWriteMode, TIM12SRBase> ;
    using UIF = TIM12_SR_UIF_Values<TIM12::SR, 0, 1, ReadWriteMode, TIM12SRBase> ;
    using FieldValues = TIM12_SR_UIF_Values<TIM12::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40001810, 32, ReadWriteMode, TIM12SRBase, T...> ;

  struct TIM12EGRBase {} ;

  struct EGR : public RegisterBase<0x40001814, 32, WriteMode>
  {
    using TG = TIM12_EGR_TG_Values<TIM12::EGR, 6, 1, WriteMode, TIM12EGRBase> ;
    using CC4G = TIM12_EGR_CC4G_Values<TIM12::EGR, 4, 1, WriteMode, TIM12EGRBase> ;
    using CC3G = TIM12_EGR_CC3G_Values<TIM12::EGR, 3, 1, WriteMode, TIM12EGRBase> ;
    using CC2G = TIM12_EGR_CC2G_Values<TIM12::EGR, 2, 1, WriteMode, TIM12EGRBase> ;
    using CC1G = TIM12_EGR_CC1G_Values<TIM12::EGR, 1, 1, WriteMode, TIM12EGRBase> ;
    using UG = TIM12_EGR_UG_Values<TIM12::EGR, 0, 1, WriteMode, TIM12EGRBase> ;
    using FieldValues = TIM12_EGR_UG_Values<TIM12::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40001814, 32, WriteMode, TIM12EGRBase, T...> ;

  struct TIM12CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40001818, 32, ReadWriteMode>
  {
    using CC1S = TIM12_CCMR1_Output_CC1S_Values<TIM12::CCMR1_Output, 0, 2, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC1FE = TIM12_CCMR1_Output_OC1FE_Values<TIM12::CCMR1_Output, 2, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC1PE = TIM12_CCMR1_Output_OC1PE_Values<TIM12::CCMR1_Output, 3, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC1M = TIM12_CCMR1_Output_OC1M_Values<TIM12::CCMR1_Output, 4, 3, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC1CE = TIM12_CCMR1_Output_OC1CE_Values<TIM12::CCMR1_Output, 7, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using CC2S = TIM12_CCMR1_Output_CC2S_Values<TIM12::CCMR1_Output, 8, 2, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC2FE = TIM12_CCMR1_Output_OC2FE_Values<TIM12::CCMR1_Output, 10, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC2PE = TIM12_CCMR1_Output_OC2PE_Values<TIM12::CCMR1_Output, 11, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC2M = TIM12_CCMR1_Output_OC2M_Values<TIM12::CCMR1_Output, 12, 3, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC2CE = TIM12_CCMR1_Output_OC2CE_Values<TIM12::CCMR1_Output, 15, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC1M_3 = TIM12_CCMR1_Output_OC1M_3_Values<TIM12::CCMR1_Output, 16, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using OC2M_3 = TIM12_CCMR1_Output_OC2M_3_Values<TIM12::CCMR1_Output, 24, 1, ReadWriteMode, TIM12CCMR1_OutputBase> ;
    using FieldValues = TIM12_CCMR1_Output_OC2M_3_Values<TIM12::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40001818, 32, ReadWriteMode, TIM12CCMR1_OutputBase, T...> ;

  struct TIM12CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40001818, 32, ReadWriteMode>
  {
    using IC2F = TIM12_CCMR1_Input_IC2F_Values<TIM12::CCMR1_Input, 12, 4, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using IC2PCS = TIM12_CCMR1_Input_IC2PCS_Values<TIM12::CCMR1_Input, 10, 2, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using CC2S = TIM12_CCMR1_Input_CC2S_Values<TIM12::CCMR1_Input, 8, 2, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using IC1F = TIM12_CCMR1_Input_IC1F_Values<TIM12::CCMR1_Input, 4, 4, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using ICPCS = TIM12_CCMR1_Input_ICPCS_Values<TIM12::CCMR1_Input, 2, 2, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using CC1S = TIM12_CCMR1_Input_CC1S_Values<TIM12::CCMR1_Input, 0, 2, ReadWriteMode, TIM12CCMR1_InputBase> ;
    using FieldValues = TIM12_CCMR1_Input_CC1S_Values<TIM12::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40001818, 32, ReadWriteMode, TIM12CCMR1_InputBase, T...> ;

  struct TIM12CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000181C, 32, ReadWriteMode>
  {
    using OC4M_3 = TIM12_CCMR2_Output_OC4M_3_Values<TIM12::CCMR2_Output, 24, 1, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC3M_3 = TIM12_CCMR2_Output_OC3M_3_Values<TIM12::CCMR2_Output, 16, 1, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC4CE = TIM12_CCMR2_Output_OC4CE_Values<TIM12::CCMR2_Output, 15, 1, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC4M = TIM12_CCMR2_Output_OC4M_Values<TIM12::CCMR2_Output, 12, 3, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC4PE = TIM12_CCMR2_Output_OC4PE_Values<TIM12::CCMR2_Output, 11, 1, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC4FE = TIM12_CCMR2_Output_OC4FE_Values<TIM12::CCMR2_Output, 10, 1, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using CC4S = TIM12_CCMR2_Output_CC4S_Values<TIM12::CCMR2_Output, 8, 2, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC3CE = TIM12_CCMR2_Output_OC3CE_Values<TIM12::CCMR2_Output, 7, 1, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC3M = TIM12_CCMR2_Output_OC3M_Values<TIM12::CCMR2_Output, 4, 3, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC3PE = TIM12_CCMR2_Output_OC3PE_Values<TIM12::CCMR2_Output, 3, 1, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using OC3FE = TIM12_CCMR2_Output_OC3FE_Values<TIM12::CCMR2_Output, 2, 1, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using CC3S = TIM12_CCMR2_Output_CC3S_Values<TIM12::CCMR2_Output, 0, 2, ReadWriteMode, TIM12CCMR2_OutputBase> ;
    using FieldValues = TIM12_CCMR2_Output_CC3S_Values<TIM12::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000181C, 32, ReadWriteMode, TIM12CCMR2_OutputBase, T...> ;

  struct TIM12CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000181C, 32, ReadWriteMode>
  {
    using IC4F = TIM12_CCMR2_Input_IC4F_Values<TIM12::CCMR2_Input, 12, 4, ReadWriteMode, TIM12CCMR2_InputBase> ;
    using IC4PSC = TIM12_CCMR2_Input_IC4PSC_Values<TIM12::CCMR2_Input, 10, 2, ReadWriteMode, TIM12CCMR2_InputBase> ;
    using CC4S = TIM12_CCMR2_Input_CC4S_Values<TIM12::CCMR2_Input, 8, 2, ReadWriteMode, TIM12CCMR2_InputBase> ;
    using IC3F = TIM12_CCMR2_Input_IC3F_Values<TIM12::CCMR2_Input, 4, 4, ReadWriteMode, TIM12CCMR2_InputBase> ;
    using IC3PSC = TIM12_CCMR2_Input_IC3PSC_Values<TIM12::CCMR2_Input, 2, 2, ReadWriteMode, TIM12CCMR2_InputBase> ;
    using CC3S = TIM12_CCMR2_Input_CC3S_Values<TIM12::CCMR2_Input, 0, 2, ReadWriteMode, TIM12CCMR2_InputBase> ;
    using FieldValues = TIM12_CCMR2_Input_CC3S_Values<TIM12::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000181C, 32, ReadWriteMode, TIM12CCMR2_InputBase, T...> ;

  struct TIM12CCERBase {} ;

  struct CCER : public RegisterBase<0x40001820, 32, ReadWriteMode>
  {
    using CC4NP = TIM12_CCER_CC4NP_Values<TIM12::CCER, 15, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC4P = TIM12_CCER_CC4P_Values<TIM12::CCER, 13, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC4E = TIM12_CCER_CC4E_Values<TIM12::CCER, 12, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC3NP = TIM12_CCER_CC3NP_Values<TIM12::CCER, 11, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC3P = TIM12_CCER_CC3P_Values<TIM12::CCER, 9, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC3E = TIM12_CCER_CC3E_Values<TIM12::CCER, 8, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC2NP = TIM12_CCER_CC2NP_Values<TIM12::CCER, 7, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC2P = TIM12_CCER_CC2P_Values<TIM12::CCER, 5, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC2E = TIM12_CCER_CC2E_Values<TIM12::CCER, 4, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC1NP = TIM12_CCER_CC1NP_Values<TIM12::CCER, 3, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC1P = TIM12_CCER_CC1P_Values<TIM12::CCER, 1, 1, ReadWriteMode, TIM12CCERBase> ;
    using CC1E = TIM12_CCER_CC1E_Values<TIM12::CCER, 0, 1, ReadWriteMode, TIM12CCERBase> ;
    using FieldValues = TIM12_CCER_CC1E_Values<TIM12::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40001820, 32, ReadWriteMode, TIM12CCERBase, T...> ;

  struct TIM12CNTBase {} ;

  struct CNT : public RegisterBase<0x40001824, 32, ReadWriteMode>
  {
    using CNT_L = TIM12_CNT_CNT_L_Values<TIM12::CNT, 0, 16, ReadWriteMode, TIM12CNTBase> ;
    using CNT_H = TIM12_CNT_CNT_H_Values<TIM12::CNT, 16, 16, ReadWriteMode, TIM12CNTBase> ;
    using FieldValues = TIM12_CNT_CNT_H_Values<TIM12::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40001824, 32, ReadWriteMode, TIM12CNTBase, T...> ;

  struct TIM12PSCBase {} ;

  struct PSC : public RegisterBase<0x40001828, 32, ReadWriteMode>
  {
    using PSCField = TIM12_PSC_PSC_Values<TIM12::PSC, 0, 16, ReadWriteMode, TIM12PSCBase> ;
    using FieldValues = TIM12_PSC_PSC_Values<TIM12::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40001828, 32, ReadWriteMode, TIM12PSCBase, T...> ;

  struct TIM12ARRBase {} ;

  struct ARR : public RegisterBase<0x4000182C, 32, ReadWriteMode>
  {
    using ARR_H = TIM12_ARR_ARR_H_Values<TIM12::ARR, 16, 16, ReadWriteMode, TIM12ARRBase> ;
    using ARR_L = TIM12_ARR_ARR_L_Values<TIM12::ARR, 0, 16, ReadWriteMode, TIM12ARRBase> ;
    using FieldValues = TIM12_ARR_ARR_L_Values<TIM12::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000182C, 32, ReadWriteMode, TIM12ARRBase, T...> ;

  struct TIM12CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40001834, 32, ReadWriteMode>
  {
    using CCR1_H = TIM12_CCR1_CCR1_H_Values<TIM12::CCR1, 16, 16, ReadWriteMode, TIM12CCR1Base> ;
    using CCR1_L = TIM12_CCR1_CCR1_L_Values<TIM12::CCR1, 0, 16, ReadWriteMode, TIM12CCR1Base> ;
    using FieldValues = TIM12_CCR1_CCR1_L_Values<TIM12::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40001834, 32, ReadWriteMode, TIM12CCR1Base, T...> ;

  struct TIM12CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40001838, 32, ReadWriteMode>
  {
    using CCR2_H = TIM12_CCR2_CCR2_H_Values<TIM12::CCR2, 16, 16, ReadWriteMode, TIM12CCR2Base> ;
    using CCR2_L = TIM12_CCR2_CCR2_L_Values<TIM12::CCR2, 0, 16, ReadWriteMode, TIM12CCR2Base> ;
    using FieldValues = TIM12_CCR2_CCR2_L_Values<TIM12::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40001838, 32, ReadWriteMode, TIM12CCR2Base, T...> ;

  struct TIM12CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000183C, 32, ReadWriteMode>
  {
    using CCR3_H = TIM12_CCR3_CCR3_H_Values<TIM12::CCR3, 16, 16, ReadWriteMode, TIM12CCR3Base> ;
    using CCR3_L = TIM12_CCR3_CCR3_L_Values<TIM12::CCR3, 0, 16, ReadWriteMode, TIM12CCR3Base> ;
    using FieldValues = TIM12_CCR3_CCR3_L_Values<TIM12::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000183C, 32, ReadWriteMode, TIM12CCR3Base, T...> ;

  struct TIM12CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40001840, 32, ReadWriteMode>
  {
    using CCR4_H = TIM12_CCR4_CCR4_H_Values<TIM12::CCR4, 16, 16, ReadWriteMode, TIM12CCR4Base> ;
    using CCR4_L = TIM12_CCR4_CCR4_L_Values<TIM12::CCR4, 0, 16, ReadWriteMode, TIM12CCR4Base> ;
    using FieldValues = TIM12_CCR4_CCR4_L_Values<TIM12::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40001840, 32, ReadWriteMode, TIM12CCR4Base, T...> ;

  struct TIM12DCRBase {} ;

  struct DCR : public RegisterBase<0x40001848, 32, ReadWriteMode>
  {
    using DBL = TIM12_DCR_DBL_Values<TIM12::DCR, 8, 5, ReadWriteMode, TIM12DCRBase> ;
    using DBA = TIM12_DCR_DBA_Values<TIM12::DCR, 0, 5, ReadWriteMode, TIM12DCRBase> ;
    using FieldValues = TIM12_DCR_DBA_Values<TIM12::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40001848, 32, ReadWriteMode, TIM12DCRBase, T...> ;

  struct TIM12DMARBase {} ;

  struct DMAR : public RegisterBase<0x4000184C, 32, ReadWriteMode>
  {
    using DMAB = TIM12_DMAR_DMAB_Values<TIM12::DMAR, 0, 16, ReadWriteMode, TIM12DMARBase> ;
    using FieldValues = TIM12_DMAR_DMAB_Values<TIM12::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4000184C, 32, ReadWriteMode, TIM12DMARBase, T...> ;

  struct TIM12AF1Base {} ;

  struct AF1 : public RegisterBase<0x40001860, 32, ReadWriteMode>
  {
    using ETRSEL = TIM12_AF1_ETRSEL_Values<TIM12::AF1, 14, 4, ReadWriteMode, TIM12AF1Base> ;
    using FieldValues = TIM12_AF1_ETRSEL_Values<TIM12::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40001860, 32, ReadWriteMode, TIM12AF1Base, T...> ;

  struct TIM12TISELBase {} ;

  struct TISEL : public RegisterBase<0x40001868, 32, ReadWriteMode>
  {
    using TI1SEL = TIM12_TISEL_TI1SEL_Values<TIM12::TISEL, 0, 4, ReadWriteMode, TIM12TISELBase> ;
    using TI2SEL = TIM12_TISEL_TI2SEL_Values<TIM12::TISEL, 8, 4, ReadWriteMode, TIM12TISELBase> ;
    using TI3SEL = TIM12_TISEL_TI3SEL_Values<TIM12::TISEL, 16, 4, ReadWriteMode, TIM12TISELBase> ;
    using TI4SEL = TIM12_TISEL_TI4SEL_Values<TIM12::TISEL, 24, 4, ReadWriteMode, TIM12TISELBase> ;
    using FieldValues = TIM12_TISEL_TI4SEL_Values<TIM12::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x40001868, 32, ReadWriteMode, TIM12TISELBase, T...> ;

} ;

#endif //#if !defined(TIM12REGISTERS_HPP)
