/*******************************************************************************
* Filename      : tim13registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(TIM13REGISTERS_HPP)
#define TIM13REGISTERS_HPP

#include "tim13fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM13
{
  struct TIM13CR1Base {} ;

  struct CR1 : public RegisterBase<0x40001C00, 32, ReadWriteMode>
  {
    using UIFREMAP = TIM13_CR1_UIFREMAP_Values<TIM13::CR1, 11, 1, ReadWriteMode, TIM13CR1Base> ;
    using CKD = TIM13_CR1_CKD_Values<TIM13::CR1, 8, 2, ReadWriteMode, TIM13CR1Base> ;
    using ARPE = TIM13_CR1_ARPE_Values<TIM13::CR1, 7, 1, ReadWriteMode, TIM13CR1Base> ;
    using CMS = TIM13_CR1_CMS_Values<TIM13::CR1, 5, 2, ReadWriteMode, TIM13CR1Base> ;
    using DIR = TIM13_CR1_DIR_Values<TIM13::CR1, 4, 1, ReadWriteMode, TIM13CR1Base> ;
    using OPM = TIM13_CR1_OPM_Values<TIM13::CR1, 3, 1, ReadWriteMode, TIM13CR1Base> ;
    using URS = TIM13_CR1_URS_Values<TIM13::CR1, 2, 1, ReadWriteMode, TIM13CR1Base> ;
    using UDIS = TIM13_CR1_UDIS_Values<TIM13::CR1, 1, 1, ReadWriteMode, TIM13CR1Base> ;
    using CEN = TIM13_CR1_CEN_Values<TIM13::CR1, 0, 1, ReadWriteMode, TIM13CR1Base> ;
    using FieldValues = TIM13_CR1_CEN_Values<TIM13::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40001C00, 32, ReadWriteMode, TIM13CR1Base, T...> ;

  struct TIM13CR2Base {} ;

  struct CR2 : public RegisterBase<0x40001C04, 32, ReadWriteMode>
  {
    using TI1S = TIM13_CR2_TI1S_Values<TIM13::CR2, 7, 1, ReadWriteMode, TIM13CR2Base> ;
    using MMS = TIM13_CR2_MMS_Values<TIM13::CR2, 4, 3, ReadWriteMode, TIM13CR2Base> ;
    using CCDS = TIM13_CR2_CCDS_Values<TIM13::CR2, 3, 1, ReadWriteMode, TIM13CR2Base> ;
    using FieldValues = TIM13_CR2_CCDS_Values<TIM13::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40001C04, 32, ReadWriteMode, TIM13CR2Base, T...> ;

  struct TIM13SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40001C08, 32, ReadWriteMode>
  {
    using TS_4_3 = TIM13_SMCR_TS_4_3_Values<TIM13::SMCR, 20, 2, ReadWriteMode, TIM13SMCRBase> ;
    using SMS_3 = TIM13_SMCR_SMS_3_Values<TIM13::SMCR, 16, 1, ReadWriteMode, TIM13SMCRBase> ;
    using ETP = TIM13_SMCR_ETP_Values<TIM13::SMCR, 15, 1, ReadWriteMode, TIM13SMCRBase> ;
    using ECE = TIM13_SMCR_ECE_Values<TIM13::SMCR, 14, 1, ReadWriteMode, TIM13SMCRBase> ;
    using ETPS = TIM13_SMCR_ETPS_Values<TIM13::SMCR, 12, 2, ReadWriteMode, TIM13SMCRBase> ;
    using ETF = TIM13_SMCR_ETF_Values<TIM13::SMCR, 8, 4, ReadWriteMode, TIM13SMCRBase> ;
    using MSM = TIM13_SMCR_MSM_Values<TIM13::SMCR, 7, 1, ReadWriteMode, TIM13SMCRBase> ;
    using TS = TIM13_SMCR_TS_Values<TIM13::SMCR, 4, 3, ReadWriteMode, TIM13SMCRBase> ;
    using SMS = TIM13_SMCR_SMS_Values<TIM13::SMCR, 0, 3, ReadWriteMode, TIM13SMCRBase> ;
    using FieldValues = TIM13_SMCR_SMS_Values<TIM13::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40001C08, 32, ReadWriteMode, TIM13SMCRBase, T...> ;

  struct TIM13DIERBase {} ;

  struct DIER : public RegisterBase<0x40001C0C, 32, ReadWriteMode>
  {
    using TDE = TIM13_DIER_TDE_Values<TIM13::DIER, 14, 1, ReadWriteMode, TIM13DIERBase> ;
    using CC4DE = TIM13_DIER_CC4DE_Values<TIM13::DIER, 12, 1, ReadWriteMode, TIM13DIERBase> ;
    using CC3DE = TIM13_DIER_CC3DE_Values<TIM13::DIER, 11, 1, ReadWriteMode, TIM13DIERBase> ;
    using CC2DE = TIM13_DIER_CC2DE_Values<TIM13::DIER, 10, 1, ReadWriteMode, TIM13DIERBase> ;
    using CC1DE = TIM13_DIER_CC1DE_Values<TIM13::DIER, 9, 1, ReadWriteMode, TIM13DIERBase> ;
    using UDE = TIM13_DIER_UDE_Values<TIM13::DIER, 8, 1, ReadWriteMode, TIM13DIERBase> ;
    using TIE = TIM13_DIER_TIE_Values<TIM13::DIER, 6, 1, ReadWriteMode, TIM13DIERBase> ;
    using CC4IE = TIM13_DIER_CC4IE_Values<TIM13::DIER, 4, 1, ReadWriteMode, TIM13DIERBase> ;
    using CC3IE = TIM13_DIER_CC3IE_Values<TIM13::DIER, 3, 1, ReadWriteMode, TIM13DIERBase> ;
    using CC2IE = TIM13_DIER_CC2IE_Values<TIM13::DIER, 2, 1, ReadWriteMode, TIM13DIERBase> ;
    using CC1IE = TIM13_DIER_CC1IE_Values<TIM13::DIER, 1, 1, ReadWriteMode, TIM13DIERBase> ;
    using UIE = TIM13_DIER_UIE_Values<TIM13::DIER, 0, 1, ReadWriteMode, TIM13DIERBase> ;
    using FieldValues = TIM13_DIER_UIE_Values<TIM13::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x40001C0C, 32, ReadWriteMode, TIM13DIERBase, T...> ;

  struct TIM13SRBase {} ;

  struct SR : public RegisterBase<0x40001C10, 32, ReadWriteMode>
  {
    using CC4OF = TIM13_SR_CC4OF_Values<TIM13::SR, 12, 1, ReadWriteMode, TIM13SRBase> ;
    using CC3OF = TIM13_SR_CC3OF_Values<TIM13::SR, 11, 1, ReadWriteMode, TIM13SRBase> ;
    using CC2OF = TIM13_SR_CC2OF_Values<TIM13::SR, 10, 1, ReadWriteMode, TIM13SRBase> ;
    using CC1OF = TIM13_SR_CC1OF_Values<TIM13::SR, 9, 1, ReadWriteMode, TIM13SRBase> ;
    using TIF = TIM13_SR_TIF_Values<TIM13::SR, 6, 1, ReadWriteMode, TIM13SRBase> ;
    using CC4IF = TIM13_SR_CC4IF_Values<TIM13::SR, 4, 1, ReadWriteMode, TIM13SRBase> ;
    using CC3IF = TIM13_SR_CC3IF_Values<TIM13::SR, 3, 1, ReadWriteMode, TIM13SRBase> ;
    using CC2IF = TIM13_SR_CC2IF_Values<TIM13::SR, 2, 1, ReadWriteMode, TIM13SRBase> ;
    using CC1IF = TIM13_SR_CC1IF_Values<TIM13::SR, 1, 1, ReadWriteMode, TIM13SRBase> ;
    using UIF = TIM13_SR_UIF_Values<TIM13::SR, 0, 1, ReadWriteMode, TIM13SRBase> ;
    using FieldValues = TIM13_SR_UIF_Values<TIM13::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40001C10, 32, ReadWriteMode, TIM13SRBase, T...> ;

  struct TIM13EGRBase {} ;

  struct EGR : public RegisterBase<0x40001C14, 32, WriteMode>
  {
    using TG = TIM13_EGR_TG_Values<TIM13::EGR, 6, 1, WriteMode, TIM13EGRBase> ;
    using CC4G = TIM13_EGR_CC4G_Values<TIM13::EGR, 4, 1, WriteMode, TIM13EGRBase> ;
    using CC3G = TIM13_EGR_CC3G_Values<TIM13::EGR, 3, 1, WriteMode, TIM13EGRBase> ;
    using CC2G = TIM13_EGR_CC2G_Values<TIM13::EGR, 2, 1, WriteMode, TIM13EGRBase> ;
    using CC1G = TIM13_EGR_CC1G_Values<TIM13::EGR, 1, 1, WriteMode, TIM13EGRBase> ;
    using UG = TIM13_EGR_UG_Values<TIM13::EGR, 0, 1, WriteMode, TIM13EGRBase> ;
    using FieldValues = TIM13_EGR_UG_Values<TIM13::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40001C14, 32, WriteMode, TIM13EGRBase, T...> ;

  struct TIM13CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40001C18, 32, ReadWriteMode>
  {
    using CC1S = TIM13_CCMR1_Output_CC1S_Values<TIM13::CCMR1_Output, 0, 2, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC1FE = TIM13_CCMR1_Output_OC1FE_Values<TIM13::CCMR1_Output, 2, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC1PE = TIM13_CCMR1_Output_OC1PE_Values<TIM13::CCMR1_Output, 3, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC1M = TIM13_CCMR1_Output_OC1M_Values<TIM13::CCMR1_Output, 4, 3, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC1CE = TIM13_CCMR1_Output_OC1CE_Values<TIM13::CCMR1_Output, 7, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using CC2S = TIM13_CCMR1_Output_CC2S_Values<TIM13::CCMR1_Output, 8, 2, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC2FE = TIM13_CCMR1_Output_OC2FE_Values<TIM13::CCMR1_Output, 10, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC2PE = TIM13_CCMR1_Output_OC2PE_Values<TIM13::CCMR1_Output, 11, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC2M = TIM13_CCMR1_Output_OC2M_Values<TIM13::CCMR1_Output, 12, 3, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC2CE = TIM13_CCMR1_Output_OC2CE_Values<TIM13::CCMR1_Output, 15, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC1M_3 = TIM13_CCMR1_Output_OC1M_3_Values<TIM13::CCMR1_Output, 16, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using OC2M_3 = TIM13_CCMR1_Output_OC2M_3_Values<TIM13::CCMR1_Output, 24, 1, ReadWriteMode, TIM13CCMR1_OutputBase> ;
    using FieldValues = TIM13_CCMR1_Output_OC2M_3_Values<TIM13::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40001C18, 32, ReadWriteMode, TIM13CCMR1_OutputBase, T...> ;

  struct TIM13CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40001C18, 32, ReadWriteMode>
  {
    using IC2F = TIM13_CCMR1_Input_IC2F_Values<TIM13::CCMR1_Input, 12, 4, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using IC2PCS = TIM13_CCMR1_Input_IC2PCS_Values<TIM13::CCMR1_Input, 10, 2, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using CC2S = TIM13_CCMR1_Input_CC2S_Values<TIM13::CCMR1_Input, 8, 2, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using IC1F = TIM13_CCMR1_Input_IC1F_Values<TIM13::CCMR1_Input, 4, 4, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using ICPCS = TIM13_CCMR1_Input_ICPCS_Values<TIM13::CCMR1_Input, 2, 2, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using CC1S = TIM13_CCMR1_Input_CC1S_Values<TIM13::CCMR1_Input, 0, 2, ReadWriteMode, TIM13CCMR1_InputBase> ;
    using FieldValues = TIM13_CCMR1_Input_CC1S_Values<TIM13::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40001C18, 32, ReadWriteMode, TIM13CCMR1_InputBase, T...> ;

  struct TIM13CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x40001C1C, 32, ReadWriteMode>
  {
    using OC4M_3 = TIM13_CCMR2_Output_OC4M_3_Values<TIM13::CCMR2_Output, 24, 1, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC3M_3 = TIM13_CCMR2_Output_OC3M_3_Values<TIM13::CCMR2_Output, 16, 1, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC4CE = TIM13_CCMR2_Output_OC4CE_Values<TIM13::CCMR2_Output, 15, 1, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC4M = TIM13_CCMR2_Output_OC4M_Values<TIM13::CCMR2_Output, 12, 3, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC4PE = TIM13_CCMR2_Output_OC4PE_Values<TIM13::CCMR2_Output, 11, 1, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC4FE = TIM13_CCMR2_Output_OC4FE_Values<TIM13::CCMR2_Output, 10, 1, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using CC4S = TIM13_CCMR2_Output_CC4S_Values<TIM13::CCMR2_Output, 8, 2, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC3CE = TIM13_CCMR2_Output_OC3CE_Values<TIM13::CCMR2_Output, 7, 1, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC3M = TIM13_CCMR2_Output_OC3M_Values<TIM13::CCMR2_Output, 4, 3, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC3PE = TIM13_CCMR2_Output_OC3PE_Values<TIM13::CCMR2_Output, 3, 1, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using OC3FE = TIM13_CCMR2_Output_OC3FE_Values<TIM13::CCMR2_Output, 2, 1, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using CC3S = TIM13_CCMR2_Output_CC3S_Values<TIM13::CCMR2_Output, 0, 2, ReadWriteMode, TIM13CCMR2_OutputBase> ;
    using FieldValues = TIM13_CCMR2_Output_CC3S_Values<TIM13::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x40001C1C, 32, ReadWriteMode, TIM13CCMR2_OutputBase, T...> ;

  struct TIM13CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x40001C1C, 32, ReadWriteMode>
  {
    using IC4F = TIM13_CCMR2_Input_IC4F_Values<TIM13::CCMR2_Input, 12, 4, ReadWriteMode, TIM13CCMR2_InputBase> ;
    using IC4PSC = TIM13_CCMR2_Input_IC4PSC_Values<TIM13::CCMR2_Input, 10, 2, ReadWriteMode, TIM13CCMR2_InputBase> ;
    using CC4S = TIM13_CCMR2_Input_CC4S_Values<TIM13::CCMR2_Input, 8, 2, ReadWriteMode, TIM13CCMR2_InputBase> ;
    using IC3F = TIM13_CCMR2_Input_IC3F_Values<TIM13::CCMR2_Input, 4, 4, ReadWriteMode, TIM13CCMR2_InputBase> ;
    using IC3PSC = TIM13_CCMR2_Input_IC3PSC_Values<TIM13::CCMR2_Input, 2, 2, ReadWriteMode, TIM13CCMR2_InputBase> ;
    using CC3S = TIM13_CCMR2_Input_CC3S_Values<TIM13::CCMR2_Input, 0, 2, ReadWriteMode, TIM13CCMR2_InputBase> ;
    using FieldValues = TIM13_CCMR2_Input_CC3S_Values<TIM13::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x40001C1C, 32, ReadWriteMode, TIM13CCMR2_InputBase, T...> ;

  struct TIM13CCERBase {} ;

  struct CCER : public RegisterBase<0x40001C20, 32, ReadWriteMode>
  {
    using CC4NP = TIM13_CCER_CC4NP_Values<TIM13::CCER, 15, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC4P = TIM13_CCER_CC4P_Values<TIM13::CCER, 13, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC4E = TIM13_CCER_CC4E_Values<TIM13::CCER, 12, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC3NP = TIM13_CCER_CC3NP_Values<TIM13::CCER, 11, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC3P = TIM13_CCER_CC3P_Values<TIM13::CCER, 9, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC3E = TIM13_CCER_CC3E_Values<TIM13::CCER, 8, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC2NP = TIM13_CCER_CC2NP_Values<TIM13::CCER, 7, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC2P = TIM13_CCER_CC2P_Values<TIM13::CCER, 5, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC2E = TIM13_CCER_CC2E_Values<TIM13::CCER, 4, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC1NP = TIM13_CCER_CC1NP_Values<TIM13::CCER, 3, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC1P = TIM13_CCER_CC1P_Values<TIM13::CCER, 1, 1, ReadWriteMode, TIM13CCERBase> ;
    using CC1E = TIM13_CCER_CC1E_Values<TIM13::CCER, 0, 1, ReadWriteMode, TIM13CCERBase> ;
    using FieldValues = TIM13_CCER_CC1E_Values<TIM13::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40001C20, 32, ReadWriteMode, TIM13CCERBase, T...> ;

  struct TIM13CNTBase {} ;

  struct CNT : public RegisterBase<0x40001C24, 32, ReadWriteMode>
  {
    using CNT_L = TIM13_CNT_CNT_L_Values<TIM13::CNT, 0, 16, ReadWriteMode, TIM13CNTBase> ;
    using CNT_H = TIM13_CNT_CNT_H_Values<TIM13::CNT, 16, 16, ReadWriteMode, TIM13CNTBase> ;
    using FieldValues = TIM13_CNT_CNT_H_Values<TIM13::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40001C24, 32, ReadWriteMode, TIM13CNTBase, T...> ;

  struct TIM13PSCBase {} ;

  struct PSC : public RegisterBase<0x40001C28, 32, ReadWriteMode>
  {
    using PSCField = TIM13_PSC_PSC_Values<TIM13::PSC, 0, 16, ReadWriteMode, TIM13PSCBase> ;
    using FieldValues = TIM13_PSC_PSC_Values<TIM13::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40001C28, 32, ReadWriteMode, TIM13PSCBase, T...> ;

  struct TIM13ARRBase {} ;

  struct ARR : public RegisterBase<0x40001C2C, 32, ReadWriteMode>
  {
    using ARR_H = TIM13_ARR_ARR_H_Values<TIM13::ARR, 16, 16, ReadWriteMode, TIM13ARRBase> ;
    using ARR_L = TIM13_ARR_ARR_L_Values<TIM13::ARR, 0, 16, ReadWriteMode, TIM13ARRBase> ;
    using FieldValues = TIM13_ARR_ARR_L_Values<TIM13::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40001C2C, 32, ReadWriteMode, TIM13ARRBase, T...> ;

  struct TIM13CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40001C34, 32, ReadWriteMode>
  {
    using CCR1_H = TIM13_CCR1_CCR1_H_Values<TIM13::CCR1, 16, 16, ReadWriteMode, TIM13CCR1Base> ;
    using CCR1_L = TIM13_CCR1_CCR1_L_Values<TIM13::CCR1, 0, 16, ReadWriteMode, TIM13CCR1Base> ;
    using FieldValues = TIM13_CCR1_CCR1_L_Values<TIM13::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40001C34, 32, ReadWriteMode, TIM13CCR1Base, T...> ;

  struct TIM13CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40001C38, 32, ReadWriteMode>
  {
    using CCR2_H = TIM13_CCR2_CCR2_H_Values<TIM13::CCR2, 16, 16, ReadWriteMode, TIM13CCR2Base> ;
    using CCR2_L = TIM13_CCR2_CCR2_L_Values<TIM13::CCR2, 0, 16, ReadWriteMode, TIM13CCR2Base> ;
    using FieldValues = TIM13_CCR2_CCR2_L_Values<TIM13::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40001C38, 32, ReadWriteMode, TIM13CCR2Base, T...> ;

  struct TIM13CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x40001C3C, 32, ReadWriteMode>
  {
    using CCR3_H = TIM13_CCR3_CCR3_H_Values<TIM13::CCR3, 16, 16, ReadWriteMode, TIM13CCR3Base> ;
    using CCR3_L = TIM13_CCR3_CCR3_L_Values<TIM13::CCR3, 0, 16, ReadWriteMode, TIM13CCR3Base> ;
    using FieldValues = TIM13_CCR3_CCR3_L_Values<TIM13::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x40001C3C, 32, ReadWriteMode, TIM13CCR3Base, T...> ;

  struct TIM13CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40001C40, 32, ReadWriteMode>
  {
    using CCR4_H = TIM13_CCR4_CCR4_H_Values<TIM13::CCR4, 16, 16, ReadWriteMode, TIM13CCR4Base> ;
    using CCR4_L = TIM13_CCR4_CCR4_L_Values<TIM13::CCR4, 0, 16, ReadWriteMode, TIM13CCR4Base> ;
    using FieldValues = TIM13_CCR4_CCR4_L_Values<TIM13::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40001C40, 32, ReadWriteMode, TIM13CCR4Base, T...> ;

  struct TIM13DCRBase {} ;

  struct DCR : public RegisterBase<0x40001C48, 32, ReadWriteMode>
  {
    using DBL = TIM13_DCR_DBL_Values<TIM13::DCR, 8, 5, ReadWriteMode, TIM13DCRBase> ;
    using DBA = TIM13_DCR_DBA_Values<TIM13::DCR, 0, 5, ReadWriteMode, TIM13DCRBase> ;
    using FieldValues = TIM13_DCR_DBA_Values<TIM13::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40001C48, 32, ReadWriteMode, TIM13DCRBase, T...> ;

  struct TIM13DMARBase {} ;

  struct DMAR : public RegisterBase<0x40001C4C, 32, ReadWriteMode>
  {
    using DMAB = TIM13_DMAR_DMAB_Values<TIM13::DMAR, 0, 16, ReadWriteMode, TIM13DMARBase> ;
    using FieldValues = TIM13_DMAR_DMAB_Values<TIM13::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x40001C4C, 32, ReadWriteMode, TIM13DMARBase, T...> ;

  struct TIM13AF1Base {} ;

  struct AF1 : public RegisterBase<0x40001C60, 32, ReadWriteMode>
  {
    using ETRSEL = TIM13_AF1_ETRSEL_Values<TIM13::AF1, 14, 4, ReadWriteMode, TIM13AF1Base> ;
    using FieldValues = TIM13_AF1_ETRSEL_Values<TIM13::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40001C60, 32, ReadWriteMode, TIM13AF1Base, T...> ;

  struct TIM13TISELBase {} ;

  struct TISEL : public RegisterBase<0x40001C68, 32, ReadWriteMode>
  {
    using TI1SEL = TIM13_TISEL_TI1SEL_Values<TIM13::TISEL, 0, 4, ReadWriteMode, TIM13TISELBase> ;
    using TI2SEL = TIM13_TISEL_TI2SEL_Values<TIM13::TISEL, 8, 4, ReadWriteMode, TIM13TISELBase> ;
    using TI3SEL = TIM13_TISEL_TI3SEL_Values<TIM13::TISEL, 16, 4, ReadWriteMode, TIM13TISELBase> ;
    using TI4SEL = TIM13_TISEL_TI4SEL_Values<TIM13::TISEL, 24, 4, ReadWriteMode, TIM13TISELBase> ;
    using FieldValues = TIM13_TISEL_TI4SEL_Values<TIM13::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x40001C68, 32, ReadWriteMode, TIM13TISELBase, T...> ;

} ;

#endif //#if !defined(TIM13REGISTERS_HPP)
