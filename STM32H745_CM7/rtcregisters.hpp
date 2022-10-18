/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : RTC. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(RTCREGISTERS_HPP)
#define RTCREGISTERS_HPP

#include "rtcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC
{
  struct RTCRTC_TRBase {} ;

  struct RTC_TR : public RegisterBase<0x58004000, 32, ReadWriteMode>
  {
    using SU = RTC_RTC_TR_SU_Values<RTC::RTC_TR, 0, 4, ReadWriteMode, RTCRTC_TRBase> ;
    using ST = RTC_RTC_TR_ST_Values<RTC::RTC_TR, 4, 3, ReadWriteMode, RTCRTC_TRBase> ;
    using MNU = RTC_RTC_TR_MNU_Values<RTC::RTC_TR, 8, 4, ReadWriteMode, RTCRTC_TRBase> ;
    using MNT = RTC_RTC_TR_MNT_Values<RTC::RTC_TR, 12, 3, ReadWriteMode, RTCRTC_TRBase> ;
    using HU = RTC_RTC_TR_HU_Values<RTC::RTC_TR, 16, 4, ReadWriteMode, RTCRTC_TRBase> ;
    using HT = RTC_RTC_TR_HT_Values<RTC::RTC_TR, 20, 2, ReadWriteMode, RTCRTC_TRBase> ;
    using PM = RTC_RTC_TR_PM_Values<RTC::RTC_TR, 22, 1, ReadWriteMode, RTCRTC_TRBase> ;
    using FieldValues = RTC_RTC_TR_PM_Values<RTC::RTC_TR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TRPack  = Register<0x58004000, 32, ReadWriteMode, RTCRTC_TRBase, T...> ;

  struct RTCRTC_DRBase {} ;

  struct RTC_DR : public RegisterBase<0x58004004, 32, ReadWriteMode>
  {
    using DU = RTC_RTC_DR_DU_Values<RTC::RTC_DR, 0, 4, ReadWriteMode, RTCRTC_DRBase> ;
    using DT = RTC_RTC_DR_DT_Values<RTC::RTC_DR, 4, 2, ReadWriteMode, RTCRTC_DRBase> ;
    using MU = RTC_RTC_DR_MU_Values<RTC::RTC_DR, 8, 4, ReadWriteMode, RTCRTC_DRBase> ;
    using MT = RTC_RTC_DR_MT_Values<RTC::RTC_DR, 12, 1, ReadWriteMode, RTCRTC_DRBase> ;
    using WDU = RTC_RTC_DR_WDU_Values<RTC::RTC_DR, 13, 3, ReadWriteMode, RTCRTC_DRBase> ;
    using YU = RTC_RTC_DR_YU_Values<RTC::RTC_DR, 16, 4, ReadWriteMode, RTCRTC_DRBase> ;
    using YT = RTC_RTC_DR_YT_Values<RTC::RTC_DR, 20, 4, ReadWriteMode, RTCRTC_DRBase> ;
    using FieldValues = RTC_RTC_DR_YT_Values<RTC::RTC_DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_DRPack  = Register<0x58004004, 32, ReadWriteMode, RTCRTC_DRBase, T...> ;

  struct RTCRTC_CRBase {} ;

  struct RTC_CR : public RegisterBase<0x58004008, 32, ReadWriteMode>
  {
    using WUCKSEL = RTC_RTC_CR_WUCKSEL_Values<RTC::RTC_CR, 0, 3, ReadWriteMode, RTCRTC_CRBase> ;
    using TSEDGE = RTC_RTC_CR_TSEDGE_Values<RTC::RTC_CR, 3, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using REFCKON = RTC_RTC_CR_REFCKON_Values<RTC::RTC_CR, 4, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using BYPSHAD = RTC_RTC_CR_BYPSHAD_Values<RTC::RTC_CR, 5, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using FMT = RTC_RTC_CR_FMT_Values<RTC::RTC_CR, 6, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using ALRAE = RTC_RTC_CR_ALRAE_Values<RTC::RTC_CR, 8, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using ALRBE = RTC_RTC_CR_ALRBE_Values<RTC::RTC_CR, 9, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using WUTE = RTC_RTC_CR_WUTE_Values<RTC::RTC_CR, 10, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using TSE = RTC_RTC_CR_TSE_Values<RTC::RTC_CR, 11, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using ALRAIE = RTC_RTC_CR_ALRAIE_Values<RTC::RTC_CR, 12, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using ALRBIE = RTC_RTC_CR_ALRBIE_Values<RTC::RTC_CR, 13, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using WUTIE = RTC_RTC_CR_WUTIE_Values<RTC::RTC_CR, 14, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using TSIE = RTC_RTC_CR_TSIE_Values<RTC::RTC_CR, 15, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using ADD1H = RTC_RTC_CR_ADD1H_Values<RTC::RTC_CR, 16, 1, WriteMode, RTCRTC_CRBase> ;
    using SUB1H = RTC_RTC_CR_SUB1H_Values<RTC::RTC_CR, 17, 1, WriteMode, RTCRTC_CRBase> ;
    using BKP = RTC_RTC_CR_BKP_Values<RTC::RTC_CR, 18, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using COSEL = RTC_RTC_CR_COSEL_Values<RTC::RTC_CR, 19, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using POL = RTC_RTC_CR_POL_Values<RTC::RTC_CR, 20, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using OSEL = RTC_RTC_CR_OSEL_Values<RTC::RTC_CR, 21, 2, ReadWriteMode, RTCRTC_CRBase> ;
    using COE = RTC_RTC_CR_COE_Values<RTC::RTC_CR, 23, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using ITSE = RTC_RTC_CR_ITSE_Values<RTC::RTC_CR, 24, 1, ReadWriteMode, RTCRTC_CRBase> ;
    using FieldValues = RTC_RTC_CR_ITSE_Values<RTC::RTC_CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_CRPack  = Register<0x58004008, 32, ReadWriteMode, RTCRTC_CRBase, T...> ;

  struct RTCRTC_ISRBase {} ;

  struct RTC_ISR : public RegisterBase<0x5800400C, 32, ReadWriteMode>
  {
    using ALRAWF = RTC_RTC_ISR_ALRAWF_Values<RTC::RTC_ISR, 0, 1, ReadMode, RTCRTC_ISRBase> ;
    using ALRBWF = RTC_RTC_ISR_ALRBWF_Values<RTC::RTC_ISR, 1, 1, ReadMode, RTCRTC_ISRBase> ;
    using WUTWF = RTC_RTC_ISR_WUTWF_Values<RTC::RTC_ISR, 2, 1, ReadMode, RTCRTC_ISRBase> ;
    using SHPF = RTC_RTC_ISR_SHPF_Values<RTC::RTC_ISR, 3, 1, ReadMode, RTCRTC_ISRBase> ;
    using INITS = RTC_RTC_ISR_INITS_Values<RTC::RTC_ISR, 4, 1, ReadMode, RTCRTC_ISRBase> ;
    using RSF = RTC_RTC_ISR_RSF_Values<RTC::RTC_ISR, 5, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using INITF = RTC_RTC_ISR_INITF_Values<RTC::RTC_ISR, 6, 1, ReadMode, RTCRTC_ISRBase> ;
    using INIT = RTC_RTC_ISR_INIT_Values<RTC::RTC_ISR, 7, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using ALRAF = RTC_RTC_ISR_ALRAF_Values<RTC::RTC_ISR, 8, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using ALRBF = RTC_RTC_ISR_ALRBF_Values<RTC::RTC_ISR, 9, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using WUTF = RTC_RTC_ISR_WUTF_Values<RTC::RTC_ISR, 10, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using TSF = RTC_RTC_ISR_TSF_Values<RTC::RTC_ISR, 11, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using TSOVF = RTC_RTC_ISR_TSOVF_Values<RTC::RTC_ISR, 12, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using TAMP1F = RTC_RTC_ISR_TAMP1F_Values<RTC::RTC_ISR, 13, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using TAMP2F = RTC_RTC_ISR_TAMP2F_Values<RTC::RTC_ISR, 14, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using TAMP3F = RTC_RTC_ISR_TAMP3F_Values<RTC::RTC_ISR, 15, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using RECALPF = RTC_RTC_ISR_RECALPF_Values<RTC::RTC_ISR, 16, 1, ReadMode, RTCRTC_ISRBase> ;
    using ITSF = RTC_RTC_ISR_ITSF_Values<RTC::RTC_ISR, 17, 1, ReadWriteMode, RTCRTC_ISRBase> ;
    using FieldValues = RTC_RTC_ISR_ITSF_Values<RTC::RTC_ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ISRPack  = Register<0x5800400C, 32, ReadWriteMode, RTCRTC_ISRBase, T...> ;

  struct RTCRTC_PRERBase {} ;

  struct RTC_PRER : public RegisterBase<0x58004010, 32, ReadWriteMode>
  {
    using PREDIV_S = RTC_RTC_PRER_PREDIV_S_Values<RTC::RTC_PRER, 0, 15, ReadWriteMode, RTCRTC_PRERBase> ;
    using PREDIV_A = RTC_RTC_PRER_PREDIV_A_Values<RTC::RTC_PRER, 16, 7, ReadWriteMode, RTCRTC_PRERBase> ;
    using FieldValues = RTC_RTC_PRER_PREDIV_A_Values<RTC::RTC_PRER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_PRERPack  = Register<0x58004010, 32, ReadWriteMode, RTCRTC_PRERBase, T...> ;

  struct RTCRTC_WUTRBase {} ;

  struct RTC_WUTR : public RegisterBase<0x58004014, 32, ReadWriteMode>
  {
    using WUT = RTC_RTC_WUTR_WUT_Values<RTC::RTC_WUTR, 0, 16, ReadWriteMode, RTCRTC_WUTRBase> ;
    using FieldValues = RTC_RTC_WUTR_WUT_Values<RTC::RTC_WUTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_WUTRPack  = Register<0x58004014, 32, ReadWriteMode, RTCRTC_WUTRBase, T...> ;

  struct RTCRTC_ALRMARBase {} ;

  struct RTC_ALRMAR : public RegisterBase<0x5800401C, 32, ReadWriteMode>
  {
    using SU = RTC_RTC_ALRMAR_SU_Values<RTC::RTC_ALRMAR, 0, 4, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using ST = RTC_RTC_ALRMAR_ST_Values<RTC::RTC_ALRMAR, 4, 3, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using MSK1 = RTC_RTC_ALRMAR_MSK1_Values<RTC::RTC_ALRMAR, 7, 1, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using MNU = RTC_RTC_ALRMAR_MNU_Values<RTC::RTC_ALRMAR, 8, 4, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using MNT = RTC_RTC_ALRMAR_MNT_Values<RTC::RTC_ALRMAR, 12, 3, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using MSK2 = RTC_RTC_ALRMAR_MSK2_Values<RTC::RTC_ALRMAR, 15, 1, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using HU = RTC_RTC_ALRMAR_HU_Values<RTC::RTC_ALRMAR, 16, 4, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using HT = RTC_RTC_ALRMAR_HT_Values<RTC::RTC_ALRMAR, 20, 2, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using PM = RTC_RTC_ALRMAR_PM_Values<RTC::RTC_ALRMAR, 22, 1, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using MSK3 = RTC_RTC_ALRMAR_MSK3_Values<RTC::RTC_ALRMAR, 23, 1, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using DU = RTC_RTC_ALRMAR_DU_Values<RTC::RTC_ALRMAR, 24, 4, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using DT = RTC_RTC_ALRMAR_DT_Values<RTC::RTC_ALRMAR, 28, 2, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using WDSEL = RTC_RTC_ALRMAR_WDSEL_Values<RTC::RTC_ALRMAR, 30, 1, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using MSK4 = RTC_RTC_ALRMAR_MSK4_Values<RTC::RTC_ALRMAR, 31, 1, ReadWriteMode, RTCRTC_ALRMARBase> ;
    using FieldValues = RTC_RTC_ALRMAR_MSK4_Values<RTC::RTC_ALRMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALRMARPack  = Register<0x5800401C, 32, ReadWriteMode, RTCRTC_ALRMARBase, T...> ;

  struct RTCRTC_ALRMBRBase {} ;

  struct RTC_ALRMBR : public RegisterBase<0x58004020, 32, ReadWriteMode>
  {
    using SU = RTC_RTC_ALRMBR_SU_Values<RTC::RTC_ALRMBR, 0, 4, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using ST = RTC_RTC_ALRMBR_ST_Values<RTC::RTC_ALRMBR, 4, 3, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using MSK1 = RTC_RTC_ALRMBR_MSK1_Values<RTC::RTC_ALRMBR, 7, 1, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using MNU = RTC_RTC_ALRMBR_MNU_Values<RTC::RTC_ALRMBR, 8, 4, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using MNT = RTC_RTC_ALRMBR_MNT_Values<RTC::RTC_ALRMBR, 12, 3, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using MSK2 = RTC_RTC_ALRMBR_MSK2_Values<RTC::RTC_ALRMBR, 15, 1, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using HU = RTC_RTC_ALRMBR_HU_Values<RTC::RTC_ALRMBR, 16, 4, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using HT = RTC_RTC_ALRMBR_HT_Values<RTC::RTC_ALRMBR, 20, 2, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using PM = RTC_RTC_ALRMBR_PM_Values<RTC::RTC_ALRMBR, 22, 1, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using MSK3 = RTC_RTC_ALRMBR_MSK3_Values<RTC::RTC_ALRMBR, 23, 1, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using DU = RTC_RTC_ALRMBR_DU_Values<RTC::RTC_ALRMBR, 24, 4, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using DT = RTC_RTC_ALRMBR_DT_Values<RTC::RTC_ALRMBR, 28, 2, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using WDSEL = RTC_RTC_ALRMBR_WDSEL_Values<RTC::RTC_ALRMBR, 30, 1, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using MSK4 = RTC_RTC_ALRMBR_MSK4_Values<RTC::RTC_ALRMBR, 31, 1, ReadWriteMode, RTCRTC_ALRMBRBase> ;
    using FieldValues = RTC_RTC_ALRMBR_MSK4_Values<RTC::RTC_ALRMBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALRMBRPack  = Register<0x58004020, 32, ReadWriteMode, RTCRTC_ALRMBRBase, T...> ;

  struct RTCRTC_WPRBase {} ;

  struct RTC_WPR : public RegisterBase<0x58004024, 32, WriteMode>
  {
    using KEY = RTC_RTC_WPR_KEY_Values<RTC::RTC_WPR, 0, 8, WriteMode, RTCRTC_WPRBase> ;
    using FieldValues = RTC_RTC_WPR_KEY_Values<RTC::RTC_WPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_WPRPack  = Register<0x58004024, 32, WriteMode, RTCRTC_WPRBase, T...> ;

  struct RTCRTC_SSRBase {} ;

  struct RTC_SSR : public RegisterBase<0x58004028, 32, ReadMode>
  {
    using SS = RTC_RTC_SSR_SS_Values<RTC::RTC_SSR, 0, 16, ReadMode, RTCRTC_SSRBase> ;
    using FieldValues = RTC_RTC_SSR_SS_Values<RTC::RTC_SSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_SSRPack  = Register<0x58004028, 32, ReadMode, RTCRTC_SSRBase, T...> ;

  struct RTCRTC_SHIFTRBase {} ;

  struct RTC_SHIFTR : public RegisterBase<0x5800402C, 32, WriteMode>
  {
    using SUBFS = RTC_RTC_SHIFTR_SUBFS_Values<RTC::RTC_SHIFTR, 0, 15, WriteMode, RTCRTC_SHIFTRBase> ;
    using ADD1S = RTC_RTC_SHIFTR_ADD1S_Values<RTC::RTC_SHIFTR, 31, 1, WriteMode, RTCRTC_SHIFTRBase> ;
    using FieldValues = RTC_RTC_SHIFTR_ADD1S_Values<RTC::RTC_SHIFTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_SHIFTRPack  = Register<0x5800402C, 32, WriteMode, RTCRTC_SHIFTRBase, T...> ;

  struct RTCRTC_TSTRBase {} ;

  struct RTC_TSTR : public RegisterBase<0x58004030, 32, ReadMode>
  {
    using SU = RTC_RTC_TSTR_SU_Values<RTC::RTC_TSTR, 0, 4, ReadMode, RTCRTC_TSTRBase> ;
    using ST = RTC_RTC_TSTR_ST_Values<RTC::RTC_TSTR, 4, 3, ReadMode, RTCRTC_TSTRBase> ;
    using MNU = RTC_RTC_TSTR_MNU_Values<RTC::RTC_TSTR, 8, 4, ReadMode, RTCRTC_TSTRBase> ;
    using MNT = RTC_RTC_TSTR_MNT_Values<RTC::RTC_TSTR, 12, 3, ReadMode, RTCRTC_TSTRBase> ;
    using HU = RTC_RTC_TSTR_HU_Values<RTC::RTC_TSTR, 16, 4, ReadMode, RTCRTC_TSTRBase> ;
    using HT = RTC_RTC_TSTR_HT_Values<RTC::RTC_TSTR, 20, 2, ReadMode, RTCRTC_TSTRBase> ;
    using PM = RTC_RTC_TSTR_PM_Values<RTC::RTC_TSTR, 22, 1, ReadMode, RTCRTC_TSTRBase> ;
    using FieldValues = RTC_RTC_TSTR_PM_Values<RTC::RTC_TSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSTRPack  = Register<0x58004030, 32, ReadMode, RTCRTC_TSTRBase, T...> ;

  struct RTCRTC_TSDRBase {} ;

  struct RTC_TSDR : public RegisterBase<0x58004034, 32, ReadMode>
  {
    using DU = RTC_RTC_TSDR_DU_Values<RTC::RTC_TSDR, 0, 4, ReadMode, RTCRTC_TSDRBase> ;
    using DT = RTC_RTC_TSDR_DT_Values<RTC::RTC_TSDR, 4, 2, ReadMode, RTCRTC_TSDRBase> ;
    using MU = RTC_RTC_TSDR_MU_Values<RTC::RTC_TSDR, 8, 4, ReadMode, RTCRTC_TSDRBase> ;
    using MT = RTC_RTC_TSDR_MT_Values<RTC::RTC_TSDR, 12, 1, ReadMode, RTCRTC_TSDRBase> ;
    using WDU = RTC_RTC_TSDR_WDU_Values<RTC::RTC_TSDR, 13, 3, ReadMode, RTCRTC_TSDRBase> ;
    using FieldValues = RTC_RTC_TSDR_WDU_Values<RTC::RTC_TSDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSDRPack  = Register<0x58004034, 32, ReadMode, RTCRTC_TSDRBase, T...> ;

  struct RTCRTC_TSSSRBase {} ;

  struct RTC_TSSSR : public RegisterBase<0x58004038, 32, ReadMode>
  {
    using SS = RTC_RTC_TSSSR_SS_Values<RTC::RTC_TSSSR, 0, 16, ReadMode, RTCRTC_TSSSRBase> ;
    using FieldValues = RTC_RTC_TSSSR_SS_Values<RTC::RTC_TSSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TSSSRPack  = Register<0x58004038, 32, ReadMode, RTCRTC_TSSSRBase, T...> ;

  struct RTCRTC_CALRBase {} ;

  struct RTC_CALR : public RegisterBase<0x5800403C, 32, ReadWriteMode>
  {
    using CALM = RTC_RTC_CALR_CALM_Values<RTC::RTC_CALR, 0, 9, ReadWriteMode, RTCRTC_CALRBase> ;
    using CALW16 = RTC_RTC_CALR_CALW16_Values<RTC::RTC_CALR, 13, 1, ReadWriteMode, RTCRTC_CALRBase> ;
    using CALW8 = RTC_RTC_CALR_CALW8_Values<RTC::RTC_CALR, 14, 1, ReadWriteMode, RTCRTC_CALRBase> ;
    using CALP = RTC_RTC_CALR_CALP_Values<RTC::RTC_CALR, 15, 1, ReadWriteMode, RTCRTC_CALRBase> ;
    using FieldValues = RTC_RTC_CALR_CALP_Values<RTC::RTC_CALR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_CALRPack  = Register<0x5800403C, 32, ReadWriteMode, RTCRTC_CALRBase, T...> ;

  struct RTCRTC_TAMPCRBase {} ;

  struct RTC_TAMPCR : public RegisterBase<0x58004040, 32, ReadWriteMode>
  {
    using TAMP1E = RTC_RTC_TAMPCR_TAMP1E_Values<RTC::RTC_TAMPCR, 0, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP1TRG = RTC_RTC_TAMPCR_TAMP1TRG_Values<RTC::RTC_TAMPCR, 1, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMPIE = RTC_RTC_TAMPCR_TAMPIE_Values<RTC::RTC_TAMPCR, 2, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP2E = RTC_RTC_TAMPCR_TAMP2E_Values<RTC::RTC_TAMPCR, 3, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP2TRG = RTC_RTC_TAMPCR_TAMP2TRG_Values<RTC::RTC_TAMPCR, 4, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP3E = RTC_RTC_TAMPCR_TAMP3E_Values<RTC::RTC_TAMPCR, 5, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP3TRG = RTC_RTC_TAMPCR_TAMP3TRG_Values<RTC::RTC_TAMPCR, 6, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMPTS = RTC_RTC_TAMPCR_TAMPTS_Values<RTC::RTC_TAMPCR, 7, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMPFREQ = RTC_RTC_TAMPCR_TAMPFREQ_Values<RTC::RTC_TAMPCR, 8, 3, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMPFLT = RTC_RTC_TAMPCR_TAMPFLT_Values<RTC::RTC_TAMPCR, 11, 2, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMPPRCH = RTC_RTC_TAMPCR_TAMPPRCH_Values<RTC::RTC_TAMPCR, 13, 2, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMPPUDIS = RTC_RTC_TAMPCR_TAMPPUDIS_Values<RTC::RTC_TAMPCR, 15, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP1IE = RTC_RTC_TAMPCR_TAMP1IE_Values<RTC::RTC_TAMPCR, 16, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP1NOERASE = RTC_RTC_TAMPCR_TAMP1NOERASE_Values<RTC::RTC_TAMPCR, 17, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP1MF = RTC_RTC_TAMPCR_TAMP1MF_Values<RTC::RTC_TAMPCR, 18, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP2IE = RTC_RTC_TAMPCR_TAMP2IE_Values<RTC::RTC_TAMPCR, 19, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP2NOERASE = RTC_RTC_TAMPCR_TAMP2NOERASE_Values<RTC::RTC_TAMPCR, 20, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP2MF = RTC_RTC_TAMPCR_TAMP2MF_Values<RTC::RTC_TAMPCR, 21, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP3IE = RTC_RTC_TAMPCR_TAMP3IE_Values<RTC::RTC_TAMPCR, 22, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP3NOERASE = RTC_RTC_TAMPCR_TAMP3NOERASE_Values<RTC::RTC_TAMPCR, 23, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using TAMP3MF = RTC_RTC_TAMPCR_TAMP3MF_Values<RTC::RTC_TAMPCR, 24, 1, ReadWriteMode, RTCRTC_TAMPCRBase> ;
    using FieldValues = RTC_RTC_TAMPCR_TAMP3MF_Values<RTC::RTC_TAMPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_TAMPCRPack  = Register<0x58004040, 32, ReadWriteMode, RTCRTC_TAMPCRBase, T...> ;

  struct RTCRTC_ALRMASSRBase {} ;

  struct RTC_ALRMASSR : public RegisterBase<0x58004044, 32, ReadWriteMode>
  {
    using SS = RTC_RTC_ALRMASSR_SS_Values<RTC::RTC_ALRMASSR, 0, 15, ReadWriteMode, RTCRTC_ALRMASSRBase> ;
    using MASKSS = RTC_RTC_ALRMASSR_MASKSS_Values<RTC::RTC_ALRMASSR, 24, 4, ReadWriteMode, RTCRTC_ALRMASSRBase> ;
    using FieldValues = RTC_RTC_ALRMASSR_MASKSS_Values<RTC::RTC_ALRMASSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALRMASSRPack  = Register<0x58004044, 32, ReadWriteMode, RTCRTC_ALRMASSRBase, T...> ;

  struct RTCRTC_ALRMBSSRBase {} ;

  struct RTC_ALRMBSSR : public RegisterBase<0x58004048, 32, ReadWriteMode>
  {
    using SS = RTC_RTC_ALRMBSSR_SS_Values<RTC::RTC_ALRMBSSR, 0, 15, ReadWriteMode, RTCRTC_ALRMBSSRBase> ;
    using MASKSS = RTC_RTC_ALRMBSSR_MASKSS_Values<RTC::RTC_ALRMBSSR, 24, 4, ReadWriteMode, RTCRTC_ALRMBSSRBase> ;
    using FieldValues = RTC_RTC_ALRMBSSR_MASKSS_Values<RTC::RTC_ALRMBSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ALRMBSSRPack  = Register<0x58004048, 32, ReadWriteMode, RTCRTC_ALRMBSSRBase, T...> ;

  struct RTCRTC_BKP0RBase {} ;

  struct RTC_BKP0R : public RegisterBase<0x58004050, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP0R_BKP_Values<RTC::RTC_BKP0R, 0, 32, ReadWriteMode, RTCRTC_BKP0RBase> ;
    using FieldValues = RTC_RTC_BKP0R_BKP_Values<RTC::RTC_BKP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP0RPack  = Register<0x58004050, 32, ReadWriteMode, RTCRTC_BKP0RBase, T...> ;

  struct RTCRTC_BKP1RBase {} ;

  struct RTC_BKP1R : public RegisterBase<0x58004054, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP1R_BKP_Values<RTC::RTC_BKP1R, 0, 32, ReadWriteMode, RTCRTC_BKP1RBase> ;
    using FieldValues = RTC_RTC_BKP1R_BKP_Values<RTC::RTC_BKP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP1RPack  = Register<0x58004054, 32, ReadWriteMode, RTCRTC_BKP1RBase, T...> ;

  struct RTCRTC_BKP2RBase {} ;

  struct RTC_BKP2R : public RegisterBase<0x58004058, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP2R_BKP_Values<RTC::RTC_BKP2R, 0, 32, ReadWriteMode, RTCRTC_BKP2RBase> ;
    using FieldValues = RTC_RTC_BKP2R_BKP_Values<RTC::RTC_BKP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP2RPack  = Register<0x58004058, 32, ReadWriteMode, RTCRTC_BKP2RBase, T...> ;

  struct RTCRTC_BKP3RBase {} ;

  struct RTC_BKP3R : public RegisterBase<0x5800405C, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP3R_BKP_Values<RTC::RTC_BKP3R, 0, 32, ReadWriteMode, RTCRTC_BKP3RBase> ;
    using FieldValues = RTC_RTC_BKP3R_BKP_Values<RTC::RTC_BKP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP3RPack  = Register<0x5800405C, 32, ReadWriteMode, RTCRTC_BKP3RBase, T...> ;

  struct RTCRTC_BKP4RBase {} ;

  struct RTC_BKP4R : public RegisterBase<0x58004060, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP4R_BKP_Values<RTC::RTC_BKP4R, 0, 32, ReadWriteMode, RTCRTC_BKP4RBase> ;
    using FieldValues = RTC_RTC_BKP4R_BKP_Values<RTC::RTC_BKP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP4RPack  = Register<0x58004060, 32, ReadWriteMode, RTCRTC_BKP4RBase, T...> ;

  struct RTCRTC_BKP5RBase {} ;

  struct RTC_BKP5R : public RegisterBase<0x58004064, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP5R_BKP_Values<RTC::RTC_BKP5R, 0, 32, ReadWriteMode, RTCRTC_BKP5RBase> ;
    using FieldValues = RTC_RTC_BKP5R_BKP_Values<RTC::RTC_BKP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP5RPack  = Register<0x58004064, 32, ReadWriteMode, RTCRTC_BKP5RBase, T...> ;

  struct RTCRTC_BKP6RBase {} ;

  struct RTC_BKP6R : public RegisterBase<0x58004068, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP6R_BKP_Values<RTC::RTC_BKP6R, 0, 32, ReadWriteMode, RTCRTC_BKP6RBase> ;
    using FieldValues = RTC_RTC_BKP6R_BKP_Values<RTC::RTC_BKP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP6RPack  = Register<0x58004068, 32, ReadWriteMode, RTCRTC_BKP6RBase, T...> ;

  struct RTCRTC_BKP7RBase {} ;

  struct RTC_BKP7R : public RegisterBase<0x5800406C, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP7R_BKP_Values<RTC::RTC_BKP7R, 0, 32, ReadWriteMode, RTCRTC_BKP7RBase> ;
    using FieldValues = RTC_RTC_BKP7R_BKP_Values<RTC::RTC_BKP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP7RPack  = Register<0x5800406C, 32, ReadWriteMode, RTCRTC_BKP7RBase, T...> ;

  struct RTCRTC_BKP8RBase {} ;

  struct RTC_BKP8R : public RegisterBase<0x58004070, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP8R_BKP_Values<RTC::RTC_BKP8R, 0, 32, ReadWriteMode, RTCRTC_BKP8RBase> ;
    using FieldValues = RTC_RTC_BKP8R_BKP_Values<RTC::RTC_BKP8R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP8RPack  = Register<0x58004070, 32, ReadWriteMode, RTCRTC_BKP8RBase, T...> ;

  struct RTCRTC_BKP9RBase {} ;

  struct RTC_BKP9R : public RegisterBase<0x58004074, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP9R_BKP_Values<RTC::RTC_BKP9R, 0, 32, ReadWriteMode, RTCRTC_BKP9RBase> ;
    using FieldValues = RTC_RTC_BKP9R_BKP_Values<RTC::RTC_BKP9R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP9RPack  = Register<0x58004074, 32, ReadWriteMode, RTCRTC_BKP9RBase, T...> ;

  struct RTCRTC_BKP10RBase {} ;

  struct RTC_BKP10R : public RegisterBase<0x58004078, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP10R_BKP_Values<RTC::RTC_BKP10R, 0, 32, ReadWriteMode, RTCRTC_BKP10RBase> ;
    using FieldValues = RTC_RTC_BKP10R_BKP_Values<RTC::RTC_BKP10R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP10RPack  = Register<0x58004078, 32, ReadWriteMode, RTCRTC_BKP10RBase, T...> ;

  struct RTCRTC_BKP11RBase {} ;

  struct RTC_BKP11R : public RegisterBase<0x5800407C, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP11R_BKP_Values<RTC::RTC_BKP11R, 0, 32, ReadWriteMode, RTCRTC_BKP11RBase> ;
    using FieldValues = RTC_RTC_BKP11R_BKP_Values<RTC::RTC_BKP11R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP11RPack  = Register<0x5800407C, 32, ReadWriteMode, RTCRTC_BKP11RBase, T...> ;

  struct RTCRTC_BKP12RBase {} ;

  struct RTC_BKP12R : public RegisterBase<0x58004080, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP12R_BKP_Values<RTC::RTC_BKP12R, 0, 32, ReadWriteMode, RTCRTC_BKP12RBase> ;
    using FieldValues = RTC_RTC_BKP12R_BKP_Values<RTC::RTC_BKP12R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP12RPack  = Register<0x58004080, 32, ReadWriteMode, RTCRTC_BKP12RBase, T...> ;

  struct RTCRTC_BKP13RBase {} ;

  struct RTC_BKP13R : public RegisterBase<0x58004084, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP13R_BKP_Values<RTC::RTC_BKP13R, 0, 32, ReadWriteMode, RTCRTC_BKP13RBase> ;
    using FieldValues = RTC_RTC_BKP13R_BKP_Values<RTC::RTC_BKP13R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP13RPack  = Register<0x58004084, 32, ReadWriteMode, RTCRTC_BKP13RBase, T...> ;

  struct RTCRTC_BKP14RBase {} ;

  struct RTC_BKP14R : public RegisterBase<0x58004088, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP14R_BKP_Values<RTC::RTC_BKP14R, 0, 32, ReadWriteMode, RTCRTC_BKP14RBase> ;
    using FieldValues = RTC_RTC_BKP14R_BKP_Values<RTC::RTC_BKP14R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP14RPack  = Register<0x58004088, 32, ReadWriteMode, RTCRTC_BKP14RBase, T...> ;

  struct RTCRTC_BKP15RBase {} ;

  struct RTC_BKP15R : public RegisterBase<0x5800408C, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP15R_BKP_Values<RTC::RTC_BKP15R, 0, 32, ReadWriteMode, RTCRTC_BKP15RBase> ;
    using FieldValues = RTC_RTC_BKP15R_BKP_Values<RTC::RTC_BKP15R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP15RPack  = Register<0x5800408C, 32, ReadWriteMode, RTCRTC_BKP15RBase, T...> ;

  struct RTCRTC_ORBase {} ;

  struct RTC_OR : public RegisterBase<0x5800404C, 32, ReadWriteMode>
  {
    using RTC_ALARM_TYPE = RTC_RTC_OR_RTC_ALARM_TYPE_Values<RTC::RTC_OR, 0, 1, ReadWriteMode, RTCRTC_ORBase> ;
    using RTC_OUT_RMP = RTC_RTC_OR_RTC_OUT_RMP_Values<RTC::RTC_OR, 1, 1, ReadWriteMode, RTCRTC_ORBase> ;
    using FieldValues = RTC_RTC_OR_RTC_OUT_RMP_Values<RTC::RTC_OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_ORPack  = Register<0x5800404C, 32, ReadWriteMode, RTCRTC_ORBase, T...> ;

  struct RTCRTC_BKP16RBase {} ;

  struct RTC_BKP16R : public RegisterBase<0x58004090, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP16R_BKP_Values<RTC::RTC_BKP16R, 0, 32, ReadWriteMode, RTCRTC_BKP16RBase> ;
    using FieldValues = RTC_RTC_BKP16R_BKP_Values<RTC::RTC_BKP16R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP16RPack  = Register<0x58004090, 32, ReadWriteMode, RTCRTC_BKP16RBase, T...> ;

  struct RTCRTC_BKP17RBase {} ;

  struct RTC_BKP17R : public RegisterBase<0x58004094, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP17R_BKP_Values<RTC::RTC_BKP17R, 0, 32, ReadWriteMode, RTCRTC_BKP17RBase> ;
    using FieldValues = RTC_RTC_BKP17R_BKP_Values<RTC::RTC_BKP17R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP17RPack  = Register<0x58004094, 32, ReadWriteMode, RTCRTC_BKP17RBase, T...> ;

  struct RTCRTC_BKP18RBase {} ;

  struct RTC_BKP18R : public RegisterBase<0x58004098, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP18R_BKP_Values<RTC::RTC_BKP18R, 0, 32, ReadWriteMode, RTCRTC_BKP18RBase> ;
    using FieldValues = RTC_RTC_BKP18R_BKP_Values<RTC::RTC_BKP18R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP18RPack  = Register<0x58004098, 32, ReadWriteMode, RTCRTC_BKP18RBase, T...> ;

  struct RTCRTC_BKP19RBase {} ;

  struct RTC_BKP19R : public RegisterBase<0x5800409C, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP19R_BKP_Values<RTC::RTC_BKP19R, 0, 32, ReadWriteMode, RTCRTC_BKP19RBase> ;
    using FieldValues = RTC_RTC_BKP19R_BKP_Values<RTC::RTC_BKP19R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP19RPack  = Register<0x5800409C, 32, ReadWriteMode, RTCRTC_BKP19RBase, T...> ;

  struct RTCRTC_BKP20RBase {} ;

  struct RTC_BKP20R : public RegisterBase<0x580040A0, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP20R_BKP_Values<RTC::RTC_BKP20R, 0, 32, ReadWriteMode, RTCRTC_BKP20RBase> ;
    using FieldValues = RTC_RTC_BKP20R_BKP_Values<RTC::RTC_BKP20R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP20RPack  = Register<0x580040A0, 32, ReadWriteMode, RTCRTC_BKP20RBase, T...> ;

  struct RTCRTC_BKP21RBase {} ;

  struct RTC_BKP21R : public RegisterBase<0x580040A4, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP21R_BKP_Values<RTC::RTC_BKP21R, 0, 32, ReadWriteMode, RTCRTC_BKP21RBase> ;
    using FieldValues = RTC_RTC_BKP21R_BKP_Values<RTC::RTC_BKP21R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP21RPack  = Register<0x580040A4, 32, ReadWriteMode, RTCRTC_BKP21RBase, T...> ;

  struct RTCRTC_BKP22RBase {} ;

  struct RTC_BKP22R : public RegisterBase<0x580040A8, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP22R_BKP_Values<RTC::RTC_BKP22R, 0, 32, ReadWriteMode, RTCRTC_BKP22RBase> ;
    using FieldValues = RTC_RTC_BKP22R_BKP_Values<RTC::RTC_BKP22R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP22RPack  = Register<0x580040A8, 32, ReadWriteMode, RTCRTC_BKP22RBase, T...> ;

  struct RTCRTC_BKP23RBase {} ;

  struct RTC_BKP23R : public RegisterBase<0x580040AC, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP23R_BKP_Values<RTC::RTC_BKP23R, 0, 32, ReadWriteMode, RTCRTC_BKP23RBase> ;
    using FieldValues = RTC_RTC_BKP23R_BKP_Values<RTC::RTC_BKP23R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP23RPack  = Register<0x580040AC, 32, ReadWriteMode, RTCRTC_BKP23RBase, T...> ;

  struct RTCRTC_BKP24RBase {} ;

  struct RTC_BKP24R : public RegisterBase<0x580040B0, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP24R_BKP_Values<RTC::RTC_BKP24R, 0, 32, ReadWriteMode, RTCRTC_BKP24RBase> ;
    using FieldValues = RTC_RTC_BKP24R_BKP_Values<RTC::RTC_BKP24R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP24RPack  = Register<0x580040B0, 32, ReadWriteMode, RTCRTC_BKP24RBase, T...> ;

  struct RTCRTC_BKP25RBase {} ;

  struct RTC_BKP25R : public RegisterBase<0x580040B4, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP25R_BKP_Values<RTC::RTC_BKP25R, 0, 32, ReadWriteMode, RTCRTC_BKP25RBase> ;
    using FieldValues = RTC_RTC_BKP25R_BKP_Values<RTC::RTC_BKP25R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP25RPack  = Register<0x580040B4, 32, ReadWriteMode, RTCRTC_BKP25RBase, T...> ;

  struct RTCRTC_BKP26RBase {} ;

  struct RTC_BKP26R : public RegisterBase<0x580040B8, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP26R_BKP_Values<RTC::RTC_BKP26R, 0, 32, ReadWriteMode, RTCRTC_BKP26RBase> ;
    using FieldValues = RTC_RTC_BKP26R_BKP_Values<RTC::RTC_BKP26R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP26RPack  = Register<0x580040B8, 32, ReadWriteMode, RTCRTC_BKP26RBase, T...> ;

  struct RTCRTC_BKP27RBase {} ;

  struct RTC_BKP27R : public RegisterBase<0x580040BC, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP27R_BKP_Values<RTC::RTC_BKP27R, 0, 32, ReadWriteMode, RTCRTC_BKP27RBase> ;
    using FieldValues = RTC_RTC_BKP27R_BKP_Values<RTC::RTC_BKP27R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP27RPack  = Register<0x580040BC, 32, ReadWriteMode, RTCRTC_BKP27RBase, T...> ;

  struct RTCRTC_BKP28RBase {} ;

  struct RTC_BKP28R : public RegisterBase<0x580040C0, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP28R_BKP_Values<RTC::RTC_BKP28R, 0, 32, ReadWriteMode, RTCRTC_BKP28RBase> ;
    using FieldValues = RTC_RTC_BKP28R_BKP_Values<RTC::RTC_BKP28R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP28RPack  = Register<0x580040C0, 32, ReadWriteMode, RTCRTC_BKP28RBase, T...> ;

  struct RTCRTC_BKP29RBase {} ;

  struct RTC_BKP29R : public RegisterBase<0x580040C4, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP29R_BKP_Values<RTC::RTC_BKP29R, 0, 32, ReadWriteMode, RTCRTC_BKP29RBase> ;
    using FieldValues = RTC_RTC_BKP29R_BKP_Values<RTC::RTC_BKP29R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP29RPack  = Register<0x580040C4, 32, ReadWriteMode, RTCRTC_BKP29RBase, T...> ;

  struct RTCRTC_BKP30RBase {} ;

  struct RTC_BKP30R : public RegisterBase<0x580040C8, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP30R_BKP_Values<RTC::RTC_BKP30R, 0, 32, ReadWriteMode, RTCRTC_BKP30RBase> ;
    using FieldValues = RTC_RTC_BKP30R_BKP_Values<RTC::RTC_BKP30R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP30RPack  = Register<0x580040C8, 32, ReadWriteMode, RTCRTC_BKP30RBase, T...> ;

  struct RTCRTC_BKP31RBase {} ;

  struct RTC_BKP31R : public RegisterBase<0x580040CC, 32, ReadWriteMode>
  {
    using BKP = RTC_RTC_BKP31R_BKP_Values<RTC::RTC_BKP31R, 0, 32, ReadWriteMode, RTCRTC_BKP31RBase> ;
    using FieldValues = RTC_RTC_BKP31R_BKP_Values<RTC::RTC_BKP31R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTC_BKP31RPack  = Register<0x580040CC, 32, ReadWriteMode, RTCRTC_BKP31RBase, T...> ;

} ;

#endif //#if !defined(RTCREGISTERS_HPP)
