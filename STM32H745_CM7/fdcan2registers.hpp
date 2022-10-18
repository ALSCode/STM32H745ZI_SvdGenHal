/*******************************************************************************
* Filename      : fdcan2registers.hpp
*
* Details       : FDCAN1. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(FDCAN2REGISTERS_HPP)
#define FDCAN2REGISTERS_HPP

#include "fdcan2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FDCAN2
{
  struct FDCAN2FDCAN_CRELBase {} ;

  struct FDCAN_CREL : public RegisterBase<0x4000A400, 32, ReadMode>
  {
    using REL = FDCAN2_FDCAN_CREL_REL_Values<FDCAN2::FDCAN_CREL, 28, 4, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using STEP = FDCAN2_FDCAN_CREL_STEP_Values<FDCAN2::FDCAN_CREL, 24, 4, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using SUBSTEP = FDCAN2_FDCAN_CREL_SUBSTEP_Values<FDCAN2::FDCAN_CREL, 20, 4, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using YEAR = FDCAN2_FDCAN_CREL_YEAR_Values<FDCAN2::FDCAN_CREL, 16, 4, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using MON = FDCAN2_FDCAN_CREL_MON_Values<FDCAN2::FDCAN_CREL, 8, 8, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using DAY = FDCAN2_FDCAN_CREL_DAY_Values<FDCAN2::FDCAN_CREL, 0, 8, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using FieldValues = FDCAN2_FDCAN_CREL_DAY_Values<FDCAN2::FDCAN_CREL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CRELPack  = Register<0x4000A400, 32, ReadMode, FDCAN2FDCAN_CRELBase, T...> ;

  struct FDCAN2FDCAN_ENDNBase {} ;

  struct FDCAN_ENDN : public RegisterBase<0x4000A404, 32, ReadMode>
  {
    using ETV = FDCAN2_FDCAN_ENDN_ETV_Values<FDCAN2::FDCAN_ENDN, 0, 32, ReadMode, FDCAN2FDCAN_ENDNBase> ;
    using FieldValues = FDCAN2_FDCAN_ENDN_ETV_Values<FDCAN2::FDCAN_ENDN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ENDNPack  = Register<0x4000A404, 32, ReadMode, FDCAN2FDCAN_ENDNBase, T...> ;

  struct FDCAN2FDCAN_DBTPBase {} ;

  struct FDCAN_DBTP : public RegisterBase<0x4000A40C, 32, ReadMode>
  {
    using DSJW = FDCAN2_FDCAN_DBTP_DSJW_Values<FDCAN2::FDCAN_DBTP, 0, 4, ReadMode, FDCAN2FDCAN_DBTPBase> ;
    using DTSEG2 = FDCAN2_FDCAN_DBTP_DTSEG2_Values<FDCAN2::FDCAN_DBTP, 4, 4, ReadMode, FDCAN2FDCAN_DBTPBase> ;
    using DTSEG1 = FDCAN2_FDCAN_DBTP_DTSEG1_Values<FDCAN2::FDCAN_DBTP, 8, 5, ReadMode, FDCAN2FDCAN_DBTPBase> ;
    using DBRP = FDCAN2_FDCAN_DBTP_DBRP_Values<FDCAN2::FDCAN_DBTP, 16, 5, ReadMode, FDCAN2FDCAN_DBTPBase> ;
    using TDC = FDCAN2_FDCAN_DBTP_TDC_Values<FDCAN2::FDCAN_DBTP, 23, 1, ReadMode, FDCAN2FDCAN_DBTPBase> ;
    using FieldValues = FDCAN2_FDCAN_DBTP_TDC_Values<FDCAN2::FDCAN_DBTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_DBTPPack  = Register<0x4000A40C, 32, ReadMode, FDCAN2FDCAN_DBTPBase, T...> ;

  struct FDCAN2FDCAN_TESTBase {} ;

  struct FDCAN_TEST : public RegisterBase<0x4000A410, 32, ReadMode>
  {
    using LBCK = FDCAN2_FDCAN_TEST_LBCK_Values<FDCAN2::FDCAN_TEST, 4, 1, ReadMode, FDCAN2FDCAN_TESTBase> ;
    using TX = FDCAN2_FDCAN_TEST_TX_Values<FDCAN2::FDCAN_TEST, 5, 2, ReadMode, FDCAN2FDCAN_TESTBase> ;
    using RX = FDCAN2_FDCAN_TEST_RX_Values<FDCAN2::FDCAN_TEST, 7, 1, ReadMode, FDCAN2FDCAN_TESTBase> ;
    using FieldValues = FDCAN2_FDCAN_TEST_RX_Values<FDCAN2::FDCAN_TEST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TESTPack  = Register<0x4000A410, 32, ReadMode, FDCAN2FDCAN_TESTBase, T...> ;

  struct FDCAN2FDCAN_RWDBase {} ;

  struct FDCAN_RWD : public RegisterBase<0x4000A414, 32, ReadMode>
  {
    using WDV = FDCAN2_FDCAN_RWD_WDV_Values<FDCAN2::FDCAN_RWD, 8, 8, ReadMode, FDCAN2FDCAN_RWDBase> ;
    using WDC = FDCAN2_FDCAN_RWD_WDC_Values<FDCAN2::FDCAN_RWD, 0, 8, ReadMode, FDCAN2FDCAN_RWDBase> ;
    using FieldValues = FDCAN2_FDCAN_RWD_WDC_Values<FDCAN2::FDCAN_RWD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RWDPack  = Register<0x4000A414, 32, ReadMode, FDCAN2FDCAN_RWDBase, T...> ;

  struct FDCAN2FDCAN_CCCRBase {} ;

  struct FDCAN_CCCR : public RegisterBase<0x4000A418, 32, ReadWriteMode>
  {
    using INIT = FDCAN2_FDCAN_CCCR_INIT_Values<FDCAN2::FDCAN_CCCR, 0, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using CCE = FDCAN2_FDCAN_CCCR_CCE_Values<FDCAN2::FDCAN_CCCR, 1, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using ASM = FDCAN2_FDCAN_CCCR_ASM_Values<FDCAN2::FDCAN_CCCR, 2, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using CSA = FDCAN2_FDCAN_CCCR_CSA_Values<FDCAN2::FDCAN_CCCR, 3, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using CSR = FDCAN2_FDCAN_CCCR_CSR_Values<FDCAN2::FDCAN_CCCR, 4, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using MON = FDCAN2_FDCAN_CCCR_MON_Values<FDCAN2::FDCAN_CCCR, 5, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using DAR = FDCAN2_FDCAN_CCCR_DAR_Values<FDCAN2::FDCAN_CCCR, 6, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using TEST = FDCAN2_FDCAN_CCCR_TEST_Values<FDCAN2::FDCAN_CCCR, 7, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using FDOE = FDCAN2_FDCAN_CCCR_FDOE_Values<FDCAN2::FDCAN_CCCR, 8, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using BSE = FDCAN2_FDCAN_CCCR_BSE_Values<FDCAN2::FDCAN_CCCR, 9, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using PXHD = FDCAN2_FDCAN_CCCR_PXHD_Values<FDCAN2::FDCAN_CCCR, 12, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using EFBI = FDCAN2_FDCAN_CCCR_EFBI_Values<FDCAN2::FDCAN_CCCR, 13, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using TXP = FDCAN2_FDCAN_CCCR_TXP_Values<FDCAN2::FDCAN_CCCR, 14, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using NISO = FDCAN2_FDCAN_CCCR_NISO_Values<FDCAN2::FDCAN_CCCR, 15, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using FieldValues = FDCAN2_FDCAN_CCCR_NISO_Values<FDCAN2::FDCAN_CCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CCCRPack  = Register<0x4000A418, 32, ReadWriteMode, FDCAN2FDCAN_CCCRBase, T...> ;

  struct FDCAN2FDCAN_NBTPBase {} ;

  struct FDCAN_NBTP : public RegisterBase<0x4000A41C, 32, ReadWriteMode>
  {
    using NSJW = FDCAN2_FDCAN_NBTP_NSJW_Values<FDCAN2::FDCAN_NBTP, 25, 7, ReadWriteMode, FDCAN2FDCAN_NBTPBase> ;
    using NBRP = FDCAN2_FDCAN_NBTP_NBRP_Values<FDCAN2::FDCAN_NBTP, 16, 9, ReadWriteMode, FDCAN2FDCAN_NBTPBase> ;
    using NTSEG1 = FDCAN2_FDCAN_NBTP_NTSEG1_Values<FDCAN2::FDCAN_NBTP, 8, 8, ReadWriteMode, FDCAN2FDCAN_NBTPBase> ;
    using TSEG2 = FDCAN2_FDCAN_NBTP_TSEG2_Values<FDCAN2::FDCAN_NBTP, 0, 7, ReadWriteMode, FDCAN2FDCAN_NBTPBase> ;
    using FieldValues = FDCAN2_FDCAN_NBTP_TSEG2_Values<FDCAN2::FDCAN_NBTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_NBTPPack  = Register<0x4000A41C, 32, ReadWriteMode, FDCAN2FDCAN_NBTPBase, T...> ;

  struct FDCAN2FDCAN_TSCCBase {} ;

  struct FDCAN_TSCC : public RegisterBase<0x4000A420, 32, ReadWriteMode>
  {
    using TCP = FDCAN2_FDCAN_TSCC_TCP_Values<FDCAN2::FDCAN_TSCC, 16, 4, ReadWriteMode, FDCAN2FDCAN_TSCCBase> ;
    using TSS = FDCAN2_FDCAN_TSCC_TSS_Values<FDCAN2::FDCAN_TSCC, 0, 2, ReadWriteMode, FDCAN2FDCAN_TSCCBase> ;
    using FieldValues = FDCAN2_FDCAN_TSCC_TSS_Values<FDCAN2::FDCAN_TSCC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TSCCPack  = Register<0x4000A420, 32, ReadWriteMode, FDCAN2FDCAN_TSCCBase, T...> ;

  struct FDCAN2FDCAN_TSCVBase {} ;

  struct FDCAN_TSCV : public RegisterBase<0x4000A424, 32, ReadWriteMode>
  {
    using TSC = FDCAN2_FDCAN_TSCV_TSC_Values<FDCAN2::FDCAN_TSCV, 0, 16, ReadWriteMode, FDCAN2FDCAN_TSCVBase> ;
    using FieldValues = FDCAN2_FDCAN_TSCV_TSC_Values<FDCAN2::FDCAN_TSCV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TSCVPack  = Register<0x4000A424, 32, ReadWriteMode, FDCAN2FDCAN_TSCVBase, T...> ;

  struct FDCAN2FDCAN_TOCCBase {} ;

  struct FDCAN_TOCC : public RegisterBase<0x4000A428, 32, ReadWriteMode>
  {
    using ETOC = FDCAN2_FDCAN_TOCC_ETOC_Values<FDCAN2::FDCAN_TOCC, 0, 1, ReadWriteMode, FDCAN2FDCAN_TOCCBase> ;
    using TOS = FDCAN2_FDCAN_TOCC_TOS_Values<FDCAN2::FDCAN_TOCC, 1, 2, ReadWriteMode, FDCAN2FDCAN_TOCCBase> ;
    using TOP = FDCAN2_FDCAN_TOCC_TOP_Values<FDCAN2::FDCAN_TOCC, 16, 16, ReadWriteMode, FDCAN2FDCAN_TOCCBase> ;
    using FieldValues = FDCAN2_FDCAN_TOCC_TOP_Values<FDCAN2::FDCAN_TOCC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TOCCPack  = Register<0x4000A428, 32, ReadWriteMode, FDCAN2FDCAN_TOCCBase, T...> ;

  struct FDCAN2FDCAN_TOCVBase {} ;

  struct FDCAN_TOCV : public RegisterBase<0x4000A42C, 32, ReadWriteMode>
  {
    using TOC = FDCAN2_FDCAN_TOCV_TOC_Values<FDCAN2::FDCAN_TOCV, 0, 16, ReadWriteMode, FDCAN2FDCAN_TOCVBase> ;
    using FieldValues = FDCAN2_FDCAN_TOCV_TOC_Values<FDCAN2::FDCAN_TOCV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TOCVPack  = Register<0x4000A42C, 32, ReadWriteMode, FDCAN2FDCAN_TOCVBase, T...> ;

  struct FDCAN2FDCAN_ECRBase {} ;

  struct FDCAN_ECR : public RegisterBase<0x4000A440, 32, ReadWriteMode>
  {
    using CEL = FDCAN2_FDCAN_ECR_CEL_Values<FDCAN2::FDCAN_ECR, 16, 8, ReadWriteMode, FDCAN2FDCAN_ECRBase> ;
    using RP = FDCAN2_FDCAN_ECR_RP_Values<FDCAN2::FDCAN_ECR, 15, 1, ReadWriteMode, FDCAN2FDCAN_ECRBase> ;
    using TREC = FDCAN2_FDCAN_ECR_TREC_Values<FDCAN2::FDCAN_ECR, 8, 7, ReadWriteMode, FDCAN2FDCAN_ECRBase> ;
    using TEC = FDCAN2_FDCAN_ECR_TEC_Values<FDCAN2::FDCAN_ECR, 0, 8, ReadWriteMode, FDCAN2FDCAN_ECRBase> ;
    using FieldValues = FDCAN2_FDCAN_ECR_TEC_Values<FDCAN2::FDCAN_ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ECRPack  = Register<0x4000A440, 32, ReadWriteMode, FDCAN2FDCAN_ECRBase, T...> ;

  struct FDCAN2FDCAN_PSRBase {} ;

  struct FDCAN_PSR : public RegisterBase<0x4000A444, 32, ReadWriteMode>
  {
    using LEC = FDCAN2_FDCAN_PSR_LEC_Values<FDCAN2::FDCAN_PSR, 0, 3, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using ACT = FDCAN2_FDCAN_PSR_ACT_Values<FDCAN2::FDCAN_PSR, 3, 2, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using EP = FDCAN2_FDCAN_PSR_EP_Values<FDCAN2::FDCAN_PSR, 5, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using EW = FDCAN2_FDCAN_PSR_EW_Values<FDCAN2::FDCAN_PSR, 6, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using BO = FDCAN2_FDCAN_PSR_BO_Values<FDCAN2::FDCAN_PSR, 7, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using DLEC = FDCAN2_FDCAN_PSR_DLEC_Values<FDCAN2::FDCAN_PSR, 8, 3, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using RESI = FDCAN2_FDCAN_PSR_RESI_Values<FDCAN2::FDCAN_PSR, 11, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using RBRS = FDCAN2_FDCAN_PSR_RBRS_Values<FDCAN2::FDCAN_PSR, 12, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using REDL = FDCAN2_FDCAN_PSR_REDL_Values<FDCAN2::FDCAN_PSR, 13, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using PXE = FDCAN2_FDCAN_PSR_PXE_Values<FDCAN2::FDCAN_PSR, 14, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using TDCV = FDCAN2_FDCAN_PSR_TDCV_Values<FDCAN2::FDCAN_PSR, 16, 7, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using FieldValues = FDCAN2_FDCAN_PSR_TDCV_Values<FDCAN2::FDCAN_PSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_PSRPack  = Register<0x4000A444, 32, ReadWriteMode, FDCAN2FDCAN_PSRBase, T...> ;

  struct FDCAN2FDCAN_TDCRBase {} ;

  struct FDCAN_TDCR : public RegisterBase<0x4000A448, 32, ReadMode>
  {
    using TDCF = FDCAN2_FDCAN_TDCR_TDCF_Values<FDCAN2::FDCAN_TDCR, 0, 7, ReadMode, FDCAN2FDCAN_TDCRBase> ;
    using TDCO = FDCAN2_FDCAN_TDCR_TDCO_Values<FDCAN2::FDCAN_TDCR, 8, 7, ReadMode, FDCAN2FDCAN_TDCRBase> ;
    using FieldValues = FDCAN2_FDCAN_TDCR_TDCO_Values<FDCAN2::FDCAN_TDCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TDCRPack  = Register<0x4000A448, 32, ReadMode, FDCAN2FDCAN_TDCRBase, T...> ;

  struct FDCAN2FDCAN_IRBase {} ;

  struct FDCAN_IR : public RegisterBase<0x4000A450, 32, ReadMode>
  {
    using RF0N = FDCAN2_FDCAN_IR_RF0N_Values<FDCAN2::FDCAN_IR, 0, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using RF0W = FDCAN2_FDCAN_IR_RF0W_Values<FDCAN2::FDCAN_IR, 1, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using RF0F = FDCAN2_FDCAN_IR_RF0F_Values<FDCAN2::FDCAN_IR, 2, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using RF0L = FDCAN2_FDCAN_IR_RF0L_Values<FDCAN2::FDCAN_IR, 3, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using RF1N = FDCAN2_FDCAN_IR_RF1N_Values<FDCAN2::FDCAN_IR, 4, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using RF1W = FDCAN2_FDCAN_IR_RF1W_Values<FDCAN2::FDCAN_IR, 5, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using RF1F = FDCAN2_FDCAN_IR_RF1F_Values<FDCAN2::FDCAN_IR, 6, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using RF1L = FDCAN2_FDCAN_IR_RF1L_Values<FDCAN2::FDCAN_IR, 7, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using HPM = FDCAN2_FDCAN_IR_HPM_Values<FDCAN2::FDCAN_IR, 8, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TC = FDCAN2_FDCAN_IR_TC_Values<FDCAN2::FDCAN_IR, 9, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TCF = FDCAN2_FDCAN_IR_TCF_Values<FDCAN2::FDCAN_IR, 10, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TEF = FDCAN2_FDCAN_IR_TEF_Values<FDCAN2::FDCAN_IR, 11, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TEFN = FDCAN2_FDCAN_IR_TEFN_Values<FDCAN2::FDCAN_IR, 12, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TEFW = FDCAN2_FDCAN_IR_TEFW_Values<FDCAN2::FDCAN_IR, 13, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TEFF = FDCAN2_FDCAN_IR_TEFF_Values<FDCAN2::FDCAN_IR, 14, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TEFL = FDCAN2_FDCAN_IR_TEFL_Values<FDCAN2::FDCAN_IR, 15, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TSW = FDCAN2_FDCAN_IR_TSW_Values<FDCAN2::FDCAN_IR, 16, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using MRAF = FDCAN2_FDCAN_IR_MRAF_Values<FDCAN2::FDCAN_IR, 17, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using TOO = FDCAN2_FDCAN_IR_TOO_Values<FDCAN2::FDCAN_IR, 18, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using DRX = FDCAN2_FDCAN_IR_DRX_Values<FDCAN2::FDCAN_IR, 19, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using ELO = FDCAN2_FDCAN_IR_ELO_Values<FDCAN2::FDCAN_IR, 22, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using EP = FDCAN2_FDCAN_IR_EP_Values<FDCAN2::FDCAN_IR, 23, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using EW = FDCAN2_FDCAN_IR_EW_Values<FDCAN2::FDCAN_IR, 24, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using BO = FDCAN2_FDCAN_IR_BO_Values<FDCAN2::FDCAN_IR, 25, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using WDI = FDCAN2_FDCAN_IR_WDI_Values<FDCAN2::FDCAN_IR, 26, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using PEA = FDCAN2_FDCAN_IR_PEA_Values<FDCAN2::FDCAN_IR, 27, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using PED = FDCAN2_FDCAN_IR_PED_Values<FDCAN2::FDCAN_IR, 28, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using ARA = FDCAN2_FDCAN_IR_ARA_Values<FDCAN2::FDCAN_IR, 29, 1, ReadMode, FDCAN2FDCAN_IRBase> ;
    using FieldValues = FDCAN2_FDCAN_IR_ARA_Values<FDCAN2::FDCAN_IR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_IRPack  = Register<0x4000A450, 32, ReadMode, FDCAN2FDCAN_IRBase, T...> ;

  struct FDCAN2FDCAN_IEBase {} ;

  struct FDCAN_IE : public RegisterBase<0x4000A454, 32, ReadMode>
  {
    using RF0NE = FDCAN2_FDCAN_IE_RF0NE_Values<FDCAN2::FDCAN_IE, 0, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using RF0WE = FDCAN2_FDCAN_IE_RF0WE_Values<FDCAN2::FDCAN_IE, 1, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using RF0FE = FDCAN2_FDCAN_IE_RF0FE_Values<FDCAN2::FDCAN_IE, 2, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using RF0LE = FDCAN2_FDCAN_IE_RF0LE_Values<FDCAN2::FDCAN_IE, 3, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using RF1NE = FDCAN2_FDCAN_IE_RF1NE_Values<FDCAN2::FDCAN_IE, 4, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using RF1WE = FDCAN2_FDCAN_IE_RF1WE_Values<FDCAN2::FDCAN_IE, 5, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using RF1FE = FDCAN2_FDCAN_IE_RF1FE_Values<FDCAN2::FDCAN_IE, 6, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using RF1LE = FDCAN2_FDCAN_IE_RF1LE_Values<FDCAN2::FDCAN_IE, 7, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using HPME = FDCAN2_FDCAN_IE_HPME_Values<FDCAN2::FDCAN_IE, 8, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TCE = FDCAN2_FDCAN_IE_TCE_Values<FDCAN2::FDCAN_IE, 9, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TCFE = FDCAN2_FDCAN_IE_TCFE_Values<FDCAN2::FDCAN_IE, 10, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TEFE = FDCAN2_FDCAN_IE_TEFE_Values<FDCAN2::FDCAN_IE, 11, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TEFNE = FDCAN2_FDCAN_IE_TEFNE_Values<FDCAN2::FDCAN_IE, 12, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TEFWE = FDCAN2_FDCAN_IE_TEFWE_Values<FDCAN2::FDCAN_IE, 13, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TEFFE = FDCAN2_FDCAN_IE_TEFFE_Values<FDCAN2::FDCAN_IE, 14, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TEFLE = FDCAN2_FDCAN_IE_TEFLE_Values<FDCAN2::FDCAN_IE, 15, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TSWE = FDCAN2_FDCAN_IE_TSWE_Values<FDCAN2::FDCAN_IE, 16, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using MRAFE = FDCAN2_FDCAN_IE_MRAFE_Values<FDCAN2::FDCAN_IE, 17, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using TOOE = FDCAN2_FDCAN_IE_TOOE_Values<FDCAN2::FDCAN_IE, 18, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using DRXE = FDCAN2_FDCAN_IE_DRXE_Values<FDCAN2::FDCAN_IE, 19, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using BECE = FDCAN2_FDCAN_IE_BECE_Values<FDCAN2::FDCAN_IE, 20, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using BEUE = FDCAN2_FDCAN_IE_BEUE_Values<FDCAN2::FDCAN_IE, 21, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using ELOE = FDCAN2_FDCAN_IE_ELOE_Values<FDCAN2::FDCAN_IE, 22, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using EPE = FDCAN2_FDCAN_IE_EPE_Values<FDCAN2::FDCAN_IE, 23, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using EWE = FDCAN2_FDCAN_IE_EWE_Values<FDCAN2::FDCAN_IE, 24, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using BOE = FDCAN2_FDCAN_IE_BOE_Values<FDCAN2::FDCAN_IE, 25, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using WDIE = FDCAN2_FDCAN_IE_WDIE_Values<FDCAN2::FDCAN_IE, 26, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using PEAE = FDCAN2_FDCAN_IE_PEAE_Values<FDCAN2::FDCAN_IE, 27, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using PEDE = FDCAN2_FDCAN_IE_PEDE_Values<FDCAN2::FDCAN_IE, 28, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using ARAE = FDCAN2_FDCAN_IE_ARAE_Values<FDCAN2::FDCAN_IE, 29, 1, ReadMode, FDCAN2FDCAN_IEBase> ;
    using FieldValues = FDCAN2_FDCAN_IE_ARAE_Values<FDCAN2::FDCAN_IE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_IEPack  = Register<0x4000A454, 32, ReadMode, FDCAN2FDCAN_IEBase, T...> ;

  struct FDCAN2FDCAN_ILSBase {} ;

  struct FDCAN_ILS : public RegisterBase<0x4000A458, 32, ReadMode>
  {
    using RF0NL = FDCAN2_FDCAN_ILS_RF0NL_Values<FDCAN2::FDCAN_ILS, 0, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using RF0WL = FDCAN2_FDCAN_ILS_RF0WL_Values<FDCAN2::FDCAN_ILS, 1, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using RF0FL = FDCAN2_FDCAN_ILS_RF0FL_Values<FDCAN2::FDCAN_ILS, 2, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using RF0LL = FDCAN2_FDCAN_ILS_RF0LL_Values<FDCAN2::FDCAN_ILS, 3, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using RF1NL = FDCAN2_FDCAN_ILS_RF1NL_Values<FDCAN2::FDCAN_ILS, 4, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using RF1WL = FDCAN2_FDCAN_ILS_RF1WL_Values<FDCAN2::FDCAN_ILS, 5, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using RF1FL = FDCAN2_FDCAN_ILS_RF1FL_Values<FDCAN2::FDCAN_ILS, 6, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using RF1LL = FDCAN2_FDCAN_ILS_RF1LL_Values<FDCAN2::FDCAN_ILS, 7, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using HPML = FDCAN2_FDCAN_ILS_HPML_Values<FDCAN2::FDCAN_ILS, 8, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TCL = FDCAN2_FDCAN_ILS_TCL_Values<FDCAN2::FDCAN_ILS, 9, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TCFL = FDCAN2_FDCAN_ILS_TCFL_Values<FDCAN2::FDCAN_ILS, 10, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TEFL = FDCAN2_FDCAN_ILS_TEFL_Values<FDCAN2::FDCAN_ILS, 11, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TEFNL = FDCAN2_FDCAN_ILS_TEFNL_Values<FDCAN2::FDCAN_ILS, 12, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TEFWL = FDCAN2_FDCAN_ILS_TEFWL_Values<FDCAN2::FDCAN_ILS, 13, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TEFFL = FDCAN2_FDCAN_ILS_TEFFL_Values<FDCAN2::FDCAN_ILS, 14, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TEFLL = FDCAN2_FDCAN_ILS_TEFLL_Values<FDCAN2::FDCAN_ILS, 15, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TSWL = FDCAN2_FDCAN_ILS_TSWL_Values<FDCAN2::FDCAN_ILS, 16, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using MRAFL = FDCAN2_FDCAN_ILS_MRAFL_Values<FDCAN2::FDCAN_ILS, 17, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using TOOL = FDCAN2_FDCAN_ILS_TOOL_Values<FDCAN2::FDCAN_ILS, 18, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using DRXL = FDCAN2_FDCAN_ILS_DRXL_Values<FDCAN2::FDCAN_ILS, 19, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using BECL = FDCAN2_FDCAN_ILS_BECL_Values<FDCAN2::FDCAN_ILS, 20, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using BEUL = FDCAN2_FDCAN_ILS_BEUL_Values<FDCAN2::FDCAN_ILS, 21, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using ELOL = FDCAN2_FDCAN_ILS_ELOL_Values<FDCAN2::FDCAN_ILS, 22, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using EPL = FDCAN2_FDCAN_ILS_EPL_Values<FDCAN2::FDCAN_ILS, 23, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using EWL = FDCAN2_FDCAN_ILS_EWL_Values<FDCAN2::FDCAN_ILS, 24, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using BOL = FDCAN2_FDCAN_ILS_BOL_Values<FDCAN2::FDCAN_ILS, 25, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using WDIL = FDCAN2_FDCAN_ILS_WDIL_Values<FDCAN2::FDCAN_ILS, 26, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using PEAL = FDCAN2_FDCAN_ILS_PEAL_Values<FDCAN2::FDCAN_ILS, 27, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using PEDL = FDCAN2_FDCAN_ILS_PEDL_Values<FDCAN2::FDCAN_ILS, 28, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using ARAL = FDCAN2_FDCAN_ILS_ARAL_Values<FDCAN2::FDCAN_ILS, 29, 1, ReadMode, FDCAN2FDCAN_ILSBase> ;
    using FieldValues = FDCAN2_FDCAN_ILS_ARAL_Values<FDCAN2::FDCAN_ILS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ILSPack  = Register<0x4000A458, 32, ReadMode, FDCAN2FDCAN_ILSBase, T...> ;

  struct FDCAN2FDCAN_ILEBase {} ;

  struct FDCAN_ILE : public RegisterBase<0x4000A45C, 32, ReadWriteMode>
  {
    using EINT0 = FDCAN2_FDCAN_ILE_EINT0_Values<FDCAN2::FDCAN_ILE, 0, 1, ReadWriteMode, FDCAN2FDCAN_ILEBase> ;
    using EINT1 = FDCAN2_FDCAN_ILE_EINT1_Values<FDCAN2::FDCAN_ILE, 1, 1, ReadWriteMode, FDCAN2FDCAN_ILEBase> ;
    using FieldValues = FDCAN2_FDCAN_ILE_EINT1_Values<FDCAN2::FDCAN_ILE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ILEPack  = Register<0x4000A45C, 32, ReadWriteMode, FDCAN2FDCAN_ILEBase, T...> ;

  struct FDCAN2FDCAN_GFCBase {} ;

  struct FDCAN_GFC : public RegisterBase<0x4000A480, 32, ReadWriteMode>
  {
    using RRFE = FDCAN2_FDCAN_GFC_RRFE_Values<FDCAN2::FDCAN_GFC, 0, 1, ReadWriteMode, FDCAN2FDCAN_GFCBase> ;
    using RRFS = FDCAN2_FDCAN_GFC_RRFS_Values<FDCAN2::FDCAN_GFC, 1, 1, ReadWriteMode, FDCAN2FDCAN_GFCBase> ;
    using ANFE = FDCAN2_FDCAN_GFC_ANFE_Values<FDCAN2::FDCAN_GFC, 2, 2, ReadWriteMode, FDCAN2FDCAN_GFCBase> ;
    using ANFS = FDCAN2_FDCAN_GFC_ANFS_Values<FDCAN2::FDCAN_GFC, 4, 2, ReadWriteMode, FDCAN2FDCAN_GFCBase> ;
    using FieldValues = FDCAN2_FDCAN_GFC_ANFS_Values<FDCAN2::FDCAN_GFC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_GFCPack  = Register<0x4000A480, 32, ReadWriteMode, FDCAN2FDCAN_GFCBase, T...> ;

  struct FDCAN2FDCAN_SIDFCBase {} ;

  struct FDCAN_SIDFC : public RegisterBase<0x4000A484, 32, ReadWriteMode>
  {
    using FLSSA = FDCAN2_FDCAN_SIDFC_FLSSA_Values<FDCAN2::FDCAN_SIDFC, 2, 14, ReadWriteMode, FDCAN2FDCAN_SIDFCBase> ;
    using LSS = FDCAN2_FDCAN_SIDFC_LSS_Values<FDCAN2::FDCAN_SIDFC, 16, 8, ReadWriteMode, FDCAN2FDCAN_SIDFCBase> ;
    using FieldValues = FDCAN2_FDCAN_SIDFC_LSS_Values<FDCAN2::FDCAN_SIDFC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_SIDFCPack  = Register<0x4000A484, 32, ReadWriteMode, FDCAN2FDCAN_SIDFCBase, T...> ;

  struct FDCAN2FDCAN_XIDFCBase {} ;

  struct FDCAN_XIDFC : public RegisterBase<0x4000A488, 32, ReadWriteMode>
  {
    using FLESA = FDCAN2_FDCAN_XIDFC_FLESA_Values<FDCAN2::FDCAN_XIDFC, 2, 14, ReadWriteMode, FDCAN2FDCAN_XIDFCBase> ;
    using LSE = FDCAN2_FDCAN_XIDFC_LSE_Values<FDCAN2::FDCAN_XIDFC, 16, 8, ReadWriteMode, FDCAN2FDCAN_XIDFCBase> ;
    using FieldValues = FDCAN2_FDCAN_XIDFC_LSE_Values<FDCAN2::FDCAN_XIDFC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_XIDFCPack  = Register<0x4000A488, 32, ReadWriteMode, FDCAN2FDCAN_XIDFCBase, T...> ;

  struct FDCAN2FDCAN_XIDAMBase {} ;

  struct FDCAN_XIDAM : public RegisterBase<0x4000A490, 32, ReadWriteMode>
  {
    using EIDM = FDCAN2_FDCAN_XIDAM_EIDM_Values<FDCAN2::FDCAN_XIDAM, 0, 29, ReadWriteMode, FDCAN2FDCAN_XIDAMBase> ;
    using FieldValues = FDCAN2_FDCAN_XIDAM_EIDM_Values<FDCAN2::FDCAN_XIDAM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_XIDAMPack  = Register<0x4000A490, 32, ReadWriteMode, FDCAN2FDCAN_XIDAMBase, T...> ;

  struct FDCAN2FDCAN_HPMSBase {} ;

  struct FDCAN_HPMS : public RegisterBase<0x4000A494, 32, ReadMode>
  {
    using BIDX = FDCAN2_FDCAN_HPMS_BIDX_Values<FDCAN2::FDCAN_HPMS, 0, 6, ReadMode, FDCAN2FDCAN_HPMSBase> ;
    using MSI = FDCAN2_FDCAN_HPMS_MSI_Values<FDCAN2::FDCAN_HPMS, 6, 2, ReadMode, FDCAN2FDCAN_HPMSBase> ;
    using FIDX = FDCAN2_FDCAN_HPMS_FIDX_Values<FDCAN2::FDCAN_HPMS, 8, 7, ReadMode, FDCAN2FDCAN_HPMSBase> ;
    using FLST = FDCAN2_FDCAN_HPMS_FLST_Values<FDCAN2::FDCAN_HPMS, 15, 1, ReadMode, FDCAN2FDCAN_HPMSBase> ;
    using FieldValues = FDCAN2_FDCAN_HPMS_FLST_Values<FDCAN2::FDCAN_HPMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_HPMSPack  = Register<0x4000A494, 32, ReadMode, FDCAN2FDCAN_HPMSBase, T...> ;

  struct FDCAN2FDCAN_NDAT1Base {} ;

  struct FDCAN_NDAT1 : public RegisterBase<0x4000A498, 32, ReadMode>
  {
    using ND0 = FDCAN2_FDCAN_NDAT1_ND0_Values<FDCAN2::FDCAN_NDAT1, 0, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND1 = FDCAN2_FDCAN_NDAT1_ND1_Values<FDCAN2::FDCAN_NDAT1, 1, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND2 = FDCAN2_FDCAN_NDAT1_ND2_Values<FDCAN2::FDCAN_NDAT1, 2, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND3 = FDCAN2_FDCAN_NDAT1_ND3_Values<FDCAN2::FDCAN_NDAT1, 3, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND4 = FDCAN2_FDCAN_NDAT1_ND4_Values<FDCAN2::FDCAN_NDAT1, 4, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND5 = FDCAN2_FDCAN_NDAT1_ND5_Values<FDCAN2::FDCAN_NDAT1, 5, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND6 = FDCAN2_FDCAN_NDAT1_ND6_Values<FDCAN2::FDCAN_NDAT1, 6, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND7 = FDCAN2_FDCAN_NDAT1_ND7_Values<FDCAN2::FDCAN_NDAT1, 7, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND8 = FDCAN2_FDCAN_NDAT1_ND8_Values<FDCAN2::FDCAN_NDAT1, 8, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND9 = FDCAN2_FDCAN_NDAT1_ND9_Values<FDCAN2::FDCAN_NDAT1, 9, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND10 = FDCAN2_FDCAN_NDAT1_ND10_Values<FDCAN2::FDCAN_NDAT1, 10, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND11 = FDCAN2_FDCAN_NDAT1_ND11_Values<FDCAN2::FDCAN_NDAT1, 11, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND12 = FDCAN2_FDCAN_NDAT1_ND12_Values<FDCAN2::FDCAN_NDAT1, 12, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND13 = FDCAN2_FDCAN_NDAT1_ND13_Values<FDCAN2::FDCAN_NDAT1, 13, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND14 = FDCAN2_FDCAN_NDAT1_ND14_Values<FDCAN2::FDCAN_NDAT1, 14, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND15 = FDCAN2_FDCAN_NDAT1_ND15_Values<FDCAN2::FDCAN_NDAT1, 15, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND16 = FDCAN2_FDCAN_NDAT1_ND16_Values<FDCAN2::FDCAN_NDAT1, 16, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND17 = FDCAN2_FDCAN_NDAT1_ND17_Values<FDCAN2::FDCAN_NDAT1, 17, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND18 = FDCAN2_FDCAN_NDAT1_ND18_Values<FDCAN2::FDCAN_NDAT1, 18, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND19 = FDCAN2_FDCAN_NDAT1_ND19_Values<FDCAN2::FDCAN_NDAT1, 19, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND20 = FDCAN2_FDCAN_NDAT1_ND20_Values<FDCAN2::FDCAN_NDAT1, 20, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND21 = FDCAN2_FDCAN_NDAT1_ND21_Values<FDCAN2::FDCAN_NDAT1, 21, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND22 = FDCAN2_FDCAN_NDAT1_ND22_Values<FDCAN2::FDCAN_NDAT1, 22, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND23 = FDCAN2_FDCAN_NDAT1_ND23_Values<FDCAN2::FDCAN_NDAT1, 23, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND24 = FDCAN2_FDCAN_NDAT1_ND24_Values<FDCAN2::FDCAN_NDAT1, 24, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND25 = FDCAN2_FDCAN_NDAT1_ND25_Values<FDCAN2::FDCAN_NDAT1, 25, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND26 = FDCAN2_FDCAN_NDAT1_ND26_Values<FDCAN2::FDCAN_NDAT1, 26, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND27 = FDCAN2_FDCAN_NDAT1_ND27_Values<FDCAN2::FDCAN_NDAT1, 27, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND28 = FDCAN2_FDCAN_NDAT1_ND28_Values<FDCAN2::FDCAN_NDAT1, 28, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND29 = FDCAN2_FDCAN_NDAT1_ND29_Values<FDCAN2::FDCAN_NDAT1, 29, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND30 = FDCAN2_FDCAN_NDAT1_ND30_Values<FDCAN2::FDCAN_NDAT1, 30, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using ND31 = FDCAN2_FDCAN_NDAT1_ND31_Values<FDCAN2::FDCAN_NDAT1, 31, 1, ReadMode, FDCAN2FDCAN_NDAT1Base> ;
    using FieldValues = FDCAN2_FDCAN_NDAT1_ND31_Values<FDCAN2::FDCAN_NDAT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_NDAT1Pack  = Register<0x4000A498, 32, ReadMode, FDCAN2FDCAN_NDAT1Base, T...> ;

  struct FDCAN2FDCAN_NDAT2Base {} ;

  struct FDCAN_NDAT2 : public RegisterBase<0x4000A49C, 32, ReadMode>
  {
    using ND32 = FDCAN2_FDCAN_NDAT2_ND32_Values<FDCAN2::FDCAN_NDAT2, 0, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND33 = FDCAN2_FDCAN_NDAT2_ND33_Values<FDCAN2::FDCAN_NDAT2, 1, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND34 = FDCAN2_FDCAN_NDAT2_ND34_Values<FDCAN2::FDCAN_NDAT2, 2, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND35 = FDCAN2_FDCAN_NDAT2_ND35_Values<FDCAN2::FDCAN_NDAT2, 3, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND36 = FDCAN2_FDCAN_NDAT2_ND36_Values<FDCAN2::FDCAN_NDAT2, 4, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND37 = FDCAN2_FDCAN_NDAT2_ND37_Values<FDCAN2::FDCAN_NDAT2, 5, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND38 = FDCAN2_FDCAN_NDAT2_ND38_Values<FDCAN2::FDCAN_NDAT2, 6, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND39 = FDCAN2_FDCAN_NDAT2_ND39_Values<FDCAN2::FDCAN_NDAT2, 7, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND40 = FDCAN2_FDCAN_NDAT2_ND40_Values<FDCAN2::FDCAN_NDAT2, 8, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND41 = FDCAN2_FDCAN_NDAT2_ND41_Values<FDCAN2::FDCAN_NDAT2, 9, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND42 = FDCAN2_FDCAN_NDAT2_ND42_Values<FDCAN2::FDCAN_NDAT2, 10, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND43 = FDCAN2_FDCAN_NDAT2_ND43_Values<FDCAN2::FDCAN_NDAT2, 11, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND44 = FDCAN2_FDCAN_NDAT2_ND44_Values<FDCAN2::FDCAN_NDAT2, 12, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND45 = FDCAN2_FDCAN_NDAT2_ND45_Values<FDCAN2::FDCAN_NDAT2, 13, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND46 = FDCAN2_FDCAN_NDAT2_ND46_Values<FDCAN2::FDCAN_NDAT2, 14, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND47 = FDCAN2_FDCAN_NDAT2_ND47_Values<FDCAN2::FDCAN_NDAT2, 15, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND48 = FDCAN2_FDCAN_NDAT2_ND48_Values<FDCAN2::FDCAN_NDAT2, 16, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND49 = FDCAN2_FDCAN_NDAT2_ND49_Values<FDCAN2::FDCAN_NDAT2, 17, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND50 = FDCAN2_FDCAN_NDAT2_ND50_Values<FDCAN2::FDCAN_NDAT2, 18, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND51 = FDCAN2_FDCAN_NDAT2_ND51_Values<FDCAN2::FDCAN_NDAT2, 19, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND52 = FDCAN2_FDCAN_NDAT2_ND52_Values<FDCAN2::FDCAN_NDAT2, 20, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND53 = FDCAN2_FDCAN_NDAT2_ND53_Values<FDCAN2::FDCAN_NDAT2, 21, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND54 = FDCAN2_FDCAN_NDAT2_ND54_Values<FDCAN2::FDCAN_NDAT2, 22, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND55 = FDCAN2_FDCAN_NDAT2_ND55_Values<FDCAN2::FDCAN_NDAT2, 23, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND56 = FDCAN2_FDCAN_NDAT2_ND56_Values<FDCAN2::FDCAN_NDAT2, 24, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND57 = FDCAN2_FDCAN_NDAT2_ND57_Values<FDCAN2::FDCAN_NDAT2, 25, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND58 = FDCAN2_FDCAN_NDAT2_ND58_Values<FDCAN2::FDCAN_NDAT2, 26, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND59 = FDCAN2_FDCAN_NDAT2_ND59_Values<FDCAN2::FDCAN_NDAT2, 27, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND60 = FDCAN2_FDCAN_NDAT2_ND60_Values<FDCAN2::FDCAN_NDAT2, 28, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND61 = FDCAN2_FDCAN_NDAT2_ND61_Values<FDCAN2::FDCAN_NDAT2, 29, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND62 = FDCAN2_FDCAN_NDAT2_ND62_Values<FDCAN2::FDCAN_NDAT2, 30, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using ND63 = FDCAN2_FDCAN_NDAT2_ND63_Values<FDCAN2::FDCAN_NDAT2, 31, 1, ReadMode, FDCAN2FDCAN_NDAT2Base> ;
    using FieldValues = FDCAN2_FDCAN_NDAT2_ND63_Values<FDCAN2::FDCAN_NDAT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_NDAT2Pack  = Register<0x4000A49C, 32, ReadMode, FDCAN2FDCAN_NDAT2Base, T...> ;

  struct FDCAN2FDCAN_RXF0CBase {} ;

  struct FDCAN_RXF0C : public RegisterBase<0x4000A4A0, 32, ReadWriteMode>
  {
    using F0SA = FDCAN2_FDCAN_RXF0C_F0SA_Values<FDCAN2::FDCAN_RXF0C, 2, 14, ReadWriteMode, FDCAN2FDCAN_RXF0CBase> ;
    using F0S = FDCAN2_FDCAN_RXF0C_F0S_Values<FDCAN2::FDCAN_RXF0C, 16, 8, ReadWriteMode, FDCAN2FDCAN_RXF0CBase> ;
    using F0WM = FDCAN2_FDCAN_RXF0C_F0WM_Values<FDCAN2::FDCAN_RXF0C, 24, 8, ReadWriteMode, FDCAN2FDCAN_RXF0CBase> ;
    using FieldValues = FDCAN2_FDCAN_RXF0C_F0WM_Values<FDCAN2::FDCAN_RXF0C, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0CPack  = Register<0x4000A4A0, 32, ReadWriteMode, FDCAN2FDCAN_RXF0CBase, T...> ;

  struct FDCAN2FDCAN_RXF0SBase {} ;

  struct FDCAN_RXF0S : public RegisterBase<0x4000A4A4, 32, ReadWriteMode>
  {
    using F0FL = FDCAN2_FDCAN_RXF0S_F0FL_Values<FDCAN2::FDCAN_RXF0S, 0, 7, ReadWriteMode, FDCAN2FDCAN_RXF0SBase> ;
    using F0G = FDCAN2_FDCAN_RXF0S_F0G_Values<FDCAN2::FDCAN_RXF0S, 8, 6, ReadWriteMode, FDCAN2FDCAN_RXF0SBase> ;
    using F0P = FDCAN2_FDCAN_RXF0S_F0P_Values<FDCAN2::FDCAN_RXF0S, 16, 6, ReadWriteMode, FDCAN2FDCAN_RXF0SBase> ;
    using F0F = FDCAN2_FDCAN_RXF0S_F0F_Values<FDCAN2::FDCAN_RXF0S, 24, 1, ReadWriteMode, FDCAN2FDCAN_RXF0SBase> ;
    using RF0L = FDCAN2_FDCAN_RXF0S_RF0L_Values<FDCAN2::FDCAN_RXF0S, 25, 1, ReadWriteMode, FDCAN2FDCAN_RXF0SBase> ;
    using FieldValues = FDCAN2_FDCAN_RXF0S_RF0L_Values<FDCAN2::FDCAN_RXF0S, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0SPack  = Register<0x4000A4A4, 32, ReadWriteMode, FDCAN2FDCAN_RXF0SBase, T...> ;

  struct FDCAN2FDCAN_RXF0ABase {} ;

  struct FDCAN_RXF0A : public RegisterBase<0x4000A4A8, 32, ReadWriteMode>
  {
    using FA01 = FDCAN2_FDCAN_RXF0A_FA01_Values<FDCAN2::FDCAN_RXF0A, 0, 6, ReadWriteMode, FDCAN2FDCAN_RXF0ABase> ;
    using FieldValues = FDCAN2_FDCAN_RXF0A_FA01_Values<FDCAN2::FDCAN_RXF0A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0APack  = Register<0x4000A4A8, 32, ReadWriteMode, FDCAN2FDCAN_RXF0ABase, T...> ;

  struct FDCAN2FDCAN_RXBCBase {} ;

  struct FDCAN_RXBC : public RegisterBase<0x4000A4AC, 32, ReadWriteMode>
  {
    using RBSA = FDCAN2_FDCAN_RXBC_RBSA_Values<FDCAN2::FDCAN_RXBC, 2, 14, ReadWriteMode, FDCAN2FDCAN_RXBCBase> ;
    using FieldValues = FDCAN2_FDCAN_RXBC_RBSA_Values<FDCAN2::FDCAN_RXBC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXBCPack  = Register<0x4000A4AC, 32, ReadWriteMode, FDCAN2FDCAN_RXBCBase, T...> ;

  struct FDCAN2FDCAN_RXF1CBase {} ;

  struct FDCAN_RXF1C : public RegisterBase<0x4000A4B0, 32, ReadWriteMode>
  {
    using F1SA = FDCAN2_FDCAN_RXF1C_F1SA_Values<FDCAN2::FDCAN_RXF1C, 2, 14, ReadWriteMode, FDCAN2FDCAN_RXF1CBase> ;
    using F1S = FDCAN2_FDCAN_RXF1C_F1S_Values<FDCAN2::FDCAN_RXF1C, 16, 7, ReadWriteMode, FDCAN2FDCAN_RXF1CBase> ;
    using F1WM = FDCAN2_FDCAN_RXF1C_F1WM_Values<FDCAN2::FDCAN_RXF1C, 24, 7, ReadWriteMode, FDCAN2FDCAN_RXF1CBase> ;
    using FieldValues = FDCAN2_FDCAN_RXF1C_F1WM_Values<FDCAN2::FDCAN_RXF1C, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1CPack  = Register<0x4000A4B0, 32, ReadWriteMode, FDCAN2FDCAN_RXF1CBase, T...> ;

  struct FDCAN2FDCAN_RXF1SBase {} ;

  struct FDCAN_RXF1S : public RegisterBase<0x4000A4B4, 32, ReadWriteMode>
  {
    using F1FL = FDCAN2_FDCAN_RXF1S_F1FL_Values<FDCAN2::FDCAN_RXF1S, 0, 7, ReadWriteMode, FDCAN2FDCAN_RXF1SBase> ;
    using F1GI = FDCAN2_FDCAN_RXF1S_F1GI_Values<FDCAN2::FDCAN_RXF1S, 8, 7, ReadWriteMode, FDCAN2FDCAN_RXF1SBase> ;
    using F1PI = FDCAN2_FDCAN_RXF1S_F1PI_Values<FDCAN2::FDCAN_RXF1S, 16, 7, ReadWriteMode, FDCAN2FDCAN_RXF1SBase> ;
    using F1F = FDCAN2_FDCAN_RXF1S_F1F_Values<FDCAN2::FDCAN_RXF1S, 24, 1, ReadWriteMode, FDCAN2FDCAN_RXF1SBase> ;
    using RF1L = FDCAN2_FDCAN_RXF1S_RF1L_Values<FDCAN2::FDCAN_RXF1S, 25, 1, ReadWriteMode, FDCAN2FDCAN_RXF1SBase> ;
    using DMS = FDCAN2_FDCAN_RXF1S_DMS_Values<FDCAN2::FDCAN_RXF1S, 30, 2, ReadWriteMode, FDCAN2FDCAN_RXF1SBase> ;
    using FieldValues = FDCAN2_FDCAN_RXF1S_DMS_Values<FDCAN2::FDCAN_RXF1S, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1SPack  = Register<0x4000A4B4, 32, ReadWriteMode, FDCAN2FDCAN_RXF1SBase, T...> ;

  struct FDCAN2FDCAN_RXF1ABase {} ;

  struct FDCAN_RXF1A : public RegisterBase<0x4000A4B8, 32, ReadWriteMode>
  {
    using F1AI = FDCAN2_FDCAN_RXF1A_F1AI_Values<FDCAN2::FDCAN_RXF1A, 0, 6, ReadWriteMode, FDCAN2FDCAN_RXF1ABase> ;
    using FieldValues = FDCAN2_FDCAN_RXF1A_F1AI_Values<FDCAN2::FDCAN_RXF1A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1APack  = Register<0x4000A4B8, 32, ReadWriteMode, FDCAN2FDCAN_RXF1ABase, T...> ;

  struct FDCAN2FDCAN_RXESCBase {} ;

  struct FDCAN_RXESC : public RegisterBase<0x4000A4BC, 32, ReadWriteMode>
  {
    using F0DS = FDCAN2_FDCAN_RXESC_F0DS_Values<FDCAN2::FDCAN_RXESC, 0, 3, ReadWriteMode, FDCAN2FDCAN_RXESCBase> ;
    using F1DS = FDCAN2_FDCAN_RXESC_F1DS_Values<FDCAN2::FDCAN_RXESC, 4, 3, ReadWriteMode, FDCAN2FDCAN_RXESCBase> ;
    using RBDS = FDCAN2_FDCAN_RXESC_RBDS_Values<FDCAN2::FDCAN_RXESC, 8, 3, ReadWriteMode, FDCAN2FDCAN_RXESCBase> ;
    using FieldValues = FDCAN2_FDCAN_RXESC_RBDS_Values<FDCAN2::FDCAN_RXESC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXESCPack  = Register<0x4000A4BC, 32, ReadWriteMode, FDCAN2FDCAN_RXESCBase, T...> ;

  struct FDCAN2FDCAN_TXBCBase {} ;

  struct FDCAN_TXBC : public RegisterBase<0x4000A4C0, 32, ReadWriteMode>
  {
    using TBSA = FDCAN2_FDCAN_TXBC_TBSA_Values<FDCAN2::FDCAN_TXBC, 2, 14, ReadWriteMode, FDCAN2FDCAN_TXBCBase> ;
    using NDTB = FDCAN2_FDCAN_TXBC_NDTB_Values<FDCAN2::FDCAN_TXBC, 16, 6, ReadWriteMode, FDCAN2FDCAN_TXBCBase> ;
    using TFQS = FDCAN2_FDCAN_TXBC_TFQS_Values<FDCAN2::FDCAN_TXBC, 24, 6, ReadWriteMode, FDCAN2FDCAN_TXBCBase> ;
    using TFQM = FDCAN2_FDCAN_TXBC_TFQM_Values<FDCAN2::FDCAN_TXBC, 30, 1, ReadWriteMode, FDCAN2FDCAN_TXBCBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBC_TFQM_Values<FDCAN2::FDCAN_TXBC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCPack  = Register<0x4000A4C0, 32, ReadWriteMode, FDCAN2FDCAN_TXBCBase, T...> ;

  struct FDCAN2FDCAN_TXFQSBase {} ;

  struct FDCAN_TXFQS : public RegisterBase<0x4000A4C4, 32, ReadMode>
  {
    using TFFL = FDCAN2_FDCAN_TXFQS_TFFL_Values<FDCAN2::FDCAN_TXFQS, 0, 6, ReadMode, FDCAN2FDCAN_TXFQSBase> ;
    using TFGI = FDCAN2_FDCAN_TXFQS_TFGI_Values<FDCAN2::FDCAN_TXFQS, 8, 5, ReadMode, FDCAN2FDCAN_TXFQSBase> ;
    using TFQPI = FDCAN2_FDCAN_TXFQS_TFQPI_Values<FDCAN2::FDCAN_TXFQS, 16, 5, ReadMode, FDCAN2FDCAN_TXFQSBase> ;
    using TFQF = FDCAN2_FDCAN_TXFQS_TFQF_Values<FDCAN2::FDCAN_TXFQS, 21, 1, ReadMode, FDCAN2FDCAN_TXFQSBase> ;
    using FieldValues = FDCAN2_FDCAN_TXFQS_TFQF_Values<FDCAN2::FDCAN_TXFQS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXFQSPack  = Register<0x4000A4C4, 32, ReadMode, FDCAN2FDCAN_TXFQSBase, T...> ;

  struct FDCAN2FDCAN_TXESCBase {} ;

  struct FDCAN_TXESC : public RegisterBase<0x4000A4C8, 32, ReadWriteMode>
  {
    using TBDS = FDCAN2_FDCAN_TXESC_TBDS_Values<FDCAN2::FDCAN_TXESC, 0, 3, ReadWriteMode, FDCAN2FDCAN_TXESCBase> ;
    using FieldValues = FDCAN2_FDCAN_TXESC_TBDS_Values<FDCAN2::FDCAN_TXESC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXESCPack  = Register<0x4000A4C8, 32, ReadWriteMode, FDCAN2FDCAN_TXESCBase, T...> ;

  struct FDCAN2FDCAN_TXBRPBase {} ;

  struct FDCAN_TXBRP : public RegisterBase<0x4000A4CC, 32, ReadMode>
  {
    using TRP = FDCAN2_FDCAN_TXBRP_TRP_Values<FDCAN2::FDCAN_TXBRP, 0, 32, ReadMode, FDCAN2FDCAN_TXBRPBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBRP_TRP_Values<FDCAN2::FDCAN_TXBRP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBRPPack  = Register<0x4000A4CC, 32, ReadMode, FDCAN2FDCAN_TXBRPBase, T...> ;

  struct FDCAN2FDCAN_TXBARBase {} ;

  struct FDCAN_TXBAR : public RegisterBase<0x4000A4D0, 32, ReadWriteMode>
  {
    using AR = FDCAN2_FDCAN_TXBAR_AR_Values<FDCAN2::FDCAN_TXBAR, 0, 32, ReadWriteMode, FDCAN2FDCAN_TXBARBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBAR_AR_Values<FDCAN2::FDCAN_TXBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBARPack  = Register<0x4000A4D0, 32, ReadWriteMode, FDCAN2FDCAN_TXBARBase, T...> ;

  struct FDCAN2FDCAN_TXBCRBase {} ;

  struct FDCAN_TXBCR : public RegisterBase<0x4000A4D4, 32, ReadWriteMode>
  {
    using CR = FDCAN2_FDCAN_TXBCR_CR_Values<FDCAN2::FDCAN_TXBCR, 0, 32, ReadWriteMode, FDCAN2FDCAN_TXBCRBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBCR_CR_Values<FDCAN2::FDCAN_TXBCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCRPack  = Register<0x4000A4D4, 32, ReadWriteMode, FDCAN2FDCAN_TXBCRBase, T...> ;

  struct FDCAN2FDCAN_TXBTOBase {} ;

  struct FDCAN_TXBTO : public RegisterBase<0x4000A4D8, 32, ReadWriteMode>
  {
    using TO = FDCAN2_FDCAN_TXBTO_TO_Values<FDCAN2::FDCAN_TXBTO, 0, 32, ReadWriteMode, FDCAN2FDCAN_TXBTOBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBTO_TO_Values<FDCAN2::FDCAN_TXBTO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBTOPack  = Register<0x4000A4D8, 32, ReadWriteMode, FDCAN2FDCAN_TXBTOBase, T...> ;

  struct FDCAN2FDCAN_TXBCFBase {} ;

  struct FDCAN_TXBCF : public RegisterBase<0x4000A4DC, 32, ReadMode>
  {
    using CF = FDCAN2_FDCAN_TXBCF_CF_Values<FDCAN2::FDCAN_TXBCF, 0, 32, ReadMode, FDCAN2FDCAN_TXBCFBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBCF_CF_Values<FDCAN2::FDCAN_TXBCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCFPack  = Register<0x4000A4DC, 32, ReadMode, FDCAN2FDCAN_TXBCFBase, T...> ;

  struct FDCAN2FDCAN_TXBTIEBase {} ;

  struct FDCAN_TXBTIE : public RegisterBase<0x4000A4E0, 32, ReadWriteMode>
  {
    using TIE = FDCAN2_FDCAN_TXBTIE_TIE_Values<FDCAN2::FDCAN_TXBTIE, 0, 32, ReadWriteMode, FDCAN2FDCAN_TXBTIEBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBTIE_TIE_Values<FDCAN2::FDCAN_TXBTIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBTIEPack  = Register<0x4000A4E0, 32, ReadWriteMode, FDCAN2FDCAN_TXBTIEBase, T...> ;

  struct FDCAN2FDCAN_TXBCIEBase {} ;

  struct FDCAN_TXBCIE : public RegisterBase<0x4000A4E4, 32, ReadWriteMode>
  {
    using CF = FDCAN2_FDCAN_TXBCIE_CF_Values<FDCAN2::FDCAN_TXBCIE, 0, 32, ReadWriteMode, FDCAN2FDCAN_TXBCIEBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBCIE_CF_Values<FDCAN2::FDCAN_TXBCIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCIEPack  = Register<0x4000A4E4, 32, ReadWriteMode, FDCAN2FDCAN_TXBCIEBase, T...> ;

  struct FDCAN2FDCAN_TXEFCBase {} ;

  struct FDCAN_TXEFC : public RegisterBase<0x4000A4F0, 32, ReadWriteMode>
  {
    using EFSA = FDCAN2_FDCAN_TXEFC_EFSA_Values<FDCAN2::FDCAN_TXEFC, 2, 14, ReadWriteMode, FDCAN2FDCAN_TXEFCBase> ;
    using EFS = FDCAN2_FDCAN_TXEFC_EFS_Values<FDCAN2::FDCAN_TXEFC, 16, 6, ReadWriteMode, FDCAN2FDCAN_TXEFCBase> ;
    using EFWM = FDCAN2_FDCAN_TXEFC_EFWM_Values<FDCAN2::FDCAN_TXEFC, 24, 6, ReadWriteMode, FDCAN2FDCAN_TXEFCBase> ;
    using FieldValues = FDCAN2_FDCAN_TXEFC_EFWM_Values<FDCAN2::FDCAN_TXEFC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFCPack  = Register<0x4000A4F0, 32, ReadWriteMode, FDCAN2FDCAN_TXEFCBase, T...> ;

  struct FDCAN2FDCAN_TXEFSBase {} ;

  struct FDCAN_TXEFS : public RegisterBase<0x4000A4F4, 32, ReadWriteMode>
  {
    using EFFL = FDCAN2_FDCAN_TXEFS_EFFL_Values<FDCAN2::FDCAN_TXEFS, 0, 6, ReadWriteMode, FDCAN2FDCAN_TXEFSBase> ;
    using EFGI = FDCAN2_FDCAN_TXEFS_EFGI_Values<FDCAN2::FDCAN_TXEFS, 8, 5, ReadWriteMode, FDCAN2FDCAN_TXEFSBase> ;
    using EFF = FDCAN2_FDCAN_TXEFS_EFF_Values<FDCAN2::FDCAN_TXEFS, 24, 1, ReadWriteMode, FDCAN2FDCAN_TXEFSBase> ;
    using TEFL = FDCAN2_FDCAN_TXEFS_TEFL_Values<FDCAN2::FDCAN_TXEFS, 25, 1, ReadWriteMode, FDCAN2FDCAN_TXEFSBase> ;
    using FieldValues = FDCAN2_FDCAN_TXEFS_TEFL_Values<FDCAN2::FDCAN_TXEFS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFSPack  = Register<0x4000A4F4, 32, ReadWriteMode, FDCAN2FDCAN_TXEFSBase, T...> ;

  struct FDCAN2FDCAN_TXEFABase {} ;

  struct FDCAN_TXEFA : public RegisterBase<0x4000A4F8, 32, ReadWriteMode>
  {
    using EFAI = FDCAN2_FDCAN_TXEFA_EFAI_Values<FDCAN2::FDCAN_TXEFA, 0, 5, ReadWriteMode, FDCAN2FDCAN_TXEFABase> ;
    using FieldValues = FDCAN2_FDCAN_TXEFA_EFAI_Values<FDCAN2::FDCAN_TXEFA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFAPack  = Register<0x4000A4F8, 32, ReadWriteMode, FDCAN2FDCAN_TXEFABase, T...> ;

  struct FDCAN2FDCAN_TTTMCBase {} ;

  struct FDCAN_TTTMC : public RegisterBase<0x4000A500, 32, ReadWriteMode>
  {
    using TMSA = FDCAN2_FDCAN_TTTMC_TMSA_Values<FDCAN2::FDCAN_TTTMC, 2, 14, ReadWriteMode, FDCAN2FDCAN_TTTMCBase> ;
    using TME = FDCAN2_FDCAN_TTTMC_TME_Values<FDCAN2::FDCAN_TTTMC, 16, 7, ReadWriteMode, FDCAN2FDCAN_TTTMCBase> ;
    using FieldValues = FDCAN2_FDCAN_TTTMC_TME_Values<FDCAN2::FDCAN_TTTMC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTTMCPack  = Register<0x4000A500, 32, ReadWriteMode, FDCAN2FDCAN_TTTMCBase, T...> ;

  struct FDCAN2FDCAN_TTRMCBase {} ;

  struct FDCAN_TTRMC : public RegisterBase<0x4000A504, 32, ReadWriteMode>
  {
    using RID = FDCAN2_FDCAN_TTRMC_RID_Values<FDCAN2::FDCAN_TTRMC, 0, 29, ReadWriteMode, FDCAN2FDCAN_TTRMCBase> ;
    using XTD = FDCAN2_FDCAN_TTRMC_XTD_Values<FDCAN2::FDCAN_TTRMC, 30, 1, ReadWriteMode, FDCAN2FDCAN_TTRMCBase> ;
    using RMPS = FDCAN2_FDCAN_TTRMC_RMPS_Values<FDCAN2::FDCAN_TTRMC, 31, 1, ReadWriteMode, FDCAN2FDCAN_TTRMCBase> ;
    using FieldValues = FDCAN2_FDCAN_TTRMC_RMPS_Values<FDCAN2::FDCAN_TTRMC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTRMCPack  = Register<0x4000A504, 32, ReadWriteMode, FDCAN2FDCAN_TTRMCBase, T...> ;

  struct FDCAN2FDCAN_TTOCFBase {} ;

  struct FDCAN_TTOCF : public RegisterBase<0x4000A508, 32, ReadWriteMode>
  {
    using OM = FDCAN2_FDCAN_TTOCF_OM_Values<FDCAN2::FDCAN_TTOCF, 0, 2, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using GEN = FDCAN2_FDCAN_TTOCF_GEN_Values<FDCAN2::FDCAN_TTOCF, 3, 1, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using TM = FDCAN2_FDCAN_TTOCF_TM_Values<FDCAN2::FDCAN_TTOCF, 4, 1, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using LDSDL = FDCAN2_FDCAN_TTOCF_LDSDL_Values<FDCAN2::FDCAN_TTOCF, 5, 3, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using IRTO = FDCAN2_FDCAN_TTOCF_IRTO_Values<FDCAN2::FDCAN_TTOCF, 8, 7, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using EECS = FDCAN2_FDCAN_TTOCF_EECS_Values<FDCAN2::FDCAN_TTOCF, 15, 1, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using AWL = FDCAN2_FDCAN_TTOCF_AWL_Values<FDCAN2::FDCAN_TTOCF, 16, 8, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using EGTF = FDCAN2_FDCAN_TTOCF_EGTF_Values<FDCAN2::FDCAN_TTOCF, 24, 1, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using ECC = FDCAN2_FDCAN_TTOCF_ECC_Values<FDCAN2::FDCAN_TTOCF, 25, 1, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using EVTP = FDCAN2_FDCAN_TTOCF_EVTP_Values<FDCAN2::FDCAN_TTOCF, 26, 1, ReadWriteMode, FDCAN2FDCAN_TTOCFBase> ;
    using FieldValues = FDCAN2_FDCAN_TTOCF_EVTP_Values<FDCAN2::FDCAN_TTOCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTOCFPack  = Register<0x4000A508, 32, ReadWriteMode, FDCAN2FDCAN_TTOCFBase, T...> ;

  struct FDCAN2FDCAN_TTMLMBase {} ;

  struct FDCAN_TTMLM : public RegisterBase<0x4000A50C, 32, ReadWriteMode>
  {
    using CCM = FDCAN2_FDCAN_TTMLM_CCM_Values<FDCAN2::FDCAN_TTMLM, 0, 6, ReadWriteMode, FDCAN2FDCAN_TTMLMBase> ;
    using CSS = FDCAN2_FDCAN_TTMLM_CSS_Values<FDCAN2::FDCAN_TTMLM, 6, 2, ReadWriteMode, FDCAN2FDCAN_TTMLMBase> ;
    using TXEW = FDCAN2_FDCAN_TTMLM_TXEW_Values<FDCAN2::FDCAN_TTMLM, 8, 4, ReadWriteMode, FDCAN2FDCAN_TTMLMBase> ;
    using ENTT = FDCAN2_FDCAN_TTMLM_ENTT_Values<FDCAN2::FDCAN_TTMLM, 16, 12, ReadWriteMode, FDCAN2FDCAN_TTMLMBase> ;
    using FieldValues = FDCAN2_FDCAN_TTMLM_ENTT_Values<FDCAN2::FDCAN_TTMLM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTMLMPack  = Register<0x4000A50C, 32, ReadWriteMode, FDCAN2FDCAN_TTMLMBase, T...> ;

  struct FDCAN2FDCAN_TURCFBase {} ;

  struct FDCAN_TURCF : public RegisterBase<0x4000A510, 32, ReadWriteMode>
  {
    using NCL = FDCAN2_FDCAN_TURCF_NCL_Values<FDCAN2::FDCAN_TURCF, 0, 16, ReadWriteMode, FDCAN2FDCAN_TURCFBase> ;
    using DC = FDCAN2_FDCAN_TURCF_DC_Values<FDCAN2::FDCAN_TURCF, 16, 14, ReadWriteMode, FDCAN2FDCAN_TURCFBase> ;
    using ELT = FDCAN2_FDCAN_TURCF_ELT_Values<FDCAN2::FDCAN_TURCF, 31, 1, ReadWriteMode, FDCAN2FDCAN_TURCFBase> ;
    using FieldValues = FDCAN2_FDCAN_TURCF_ELT_Values<FDCAN2::FDCAN_TURCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TURCFPack  = Register<0x4000A510, 32, ReadWriteMode, FDCAN2FDCAN_TURCFBase, T...> ;

  struct FDCAN2FDCAN_TTOCNBase {} ;

  struct FDCAN_TTOCN : public RegisterBase<0x4000A514, 32, ReadWriteMode>
  {
    using SGT = FDCAN2_FDCAN_TTOCN_SGT_Values<FDCAN2::FDCAN_TTOCN, 0, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using ECS = FDCAN2_FDCAN_TTOCN_ECS_Values<FDCAN2::FDCAN_TTOCN, 1, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using SWP = FDCAN2_FDCAN_TTOCN_SWP_Values<FDCAN2::FDCAN_TTOCN, 2, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using SWS = FDCAN2_FDCAN_TTOCN_SWS_Values<FDCAN2::FDCAN_TTOCN, 3, 2, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using RTIE = FDCAN2_FDCAN_TTOCN_RTIE_Values<FDCAN2::FDCAN_TTOCN, 5, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using TMC = FDCAN2_FDCAN_TTOCN_TMC_Values<FDCAN2::FDCAN_TTOCN, 6, 2, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using TTIE = FDCAN2_FDCAN_TTOCN_TTIE_Values<FDCAN2::FDCAN_TTOCN, 8, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using GCS = FDCAN2_FDCAN_TTOCN_GCS_Values<FDCAN2::FDCAN_TTOCN, 9, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using FGP = FDCAN2_FDCAN_TTOCN_FGP_Values<FDCAN2::FDCAN_TTOCN, 10, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using TMG = FDCAN2_FDCAN_TTOCN_TMG_Values<FDCAN2::FDCAN_TTOCN, 11, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using NIG = FDCAN2_FDCAN_TTOCN_NIG_Values<FDCAN2::FDCAN_TTOCN, 12, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using ESCN = FDCAN2_FDCAN_TTOCN_ESCN_Values<FDCAN2::FDCAN_TTOCN, 13, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using LCKC = FDCAN2_FDCAN_TTOCN_LCKC_Values<FDCAN2::FDCAN_TTOCN, 15, 1, ReadWriteMode, FDCAN2FDCAN_TTOCNBase> ;
    using FieldValues = FDCAN2_FDCAN_TTOCN_LCKC_Values<FDCAN2::FDCAN_TTOCN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTOCNPack  = Register<0x4000A514, 32, ReadWriteMode, FDCAN2FDCAN_TTOCNBase, T...> ;

  struct FDCAN2CAN_TTGTPBase {} ;

  struct CAN_TTGTP : public RegisterBase<0x4000A518, 32, ReadWriteMode>
  {
    using NCL = FDCAN2_CAN_TTGTP_NCL_Values<FDCAN2::CAN_TTGTP, 0, 16, ReadWriteMode, FDCAN2CAN_TTGTPBase> ;
    using CTP = FDCAN2_CAN_TTGTP_CTP_Values<FDCAN2::CAN_TTGTP, 16, 16, ReadWriteMode, FDCAN2CAN_TTGTPBase> ;
    using FieldValues = FDCAN2_CAN_TTGTP_CTP_Values<FDCAN2::CAN_TTGTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAN_TTGTPPack  = Register<0x4000A518, 32, ReadWriteMode, FDCAN2CAN_TTGTPBase, T...> ;

  struct FDCAN2FDCAN_TTTMKBase {} ;

  struct FDCAN_TTTMK : public RegisterBase<0x4000A51C, 32, ReadWriteMode>
  {
    using TM = FDCAN2_FDCAN_TTTMK_TM_Values<FDCAN2::FDCAN_TTTMK, 0, 16, ReadWriteMode, FDCAN2FDCAN_TTTMKBase> ;
    using TICC = FDCAN2_FDCAN_TTTMK_TICC_Values<FDCAN2::FDCAN_TTTMK, 16, 7, ReadWriteMode, FDCAN2FDCAN_TTTMKBase> ;
    using LCKM = FDCAN2_FDCAN_TTTMK_LCKM_Values<FDCAN2::FDCAN_TTTMK, 31, 1, ReadWriteMode, FDCAN2FDCAN_TTTMKBase> ;
    using FieldValues = FDCAN2_FDCAN_TTTMK_LCKM_Values<FDCAN2::FDCAN_TTTMK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTTMKPack  = Register<0x4000A51C, 32, ReadWriteMode, FDCAN2FDCAN_TTTMKBase, T...> ;

  struct FDCAN2FDCAN_TTIRBase {} ;

  struct FDCAN_TTIR : public RegisterBase<0x4000A520, 32, ReadWriteMode>
  {
    using SBC = FDCAN2_FDCAN_TTIR_SBC_Values<FDCAN2::FDCAN_TTIR, 0, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using SMC = FDCAN2_FDCAN_TTIR_SMC_Values<FDCAN2::FDCAN_TTIR, 1, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using CSM = FDCAN2_FDCAN_TTIR_CSM_Values<FDCAN2::FDCAN_TTIR, 2, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using SOG = FDCAN2_FDCAN_TTIR_SOG_Values<FDCAN2::FDCAN_TTIR, 3, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using RTMI = FDCAN2_FDCAN_TTIR_RTMI_Values<FDCAN2::FDCAN_TTIR, 4, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using TTMI = FDCAN2_FDCAN_TTIR_TTMI_Values<FDCAN2::FDCAN_TTIR, 5, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using SWE = FDCAN2_FDCAN_TTIR_SWE_Values<FDCAN2::FDCAN_TTIR, 6, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using GTW = FDCAN2_FDCAN_TTIR_GTW_Values<FDCAN2::FDCAN_TTIR, 7, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using GTD = FDCAN2_FDCAN_TTIR_GTD_Values<FDCAN2::FDCAN_TTIR, 8, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using GTE = FDCAN2_FDCAN_TTIR_GTE_Values<FDCAN2::FDCAN_TTIR, 9, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using TXU = FDCAN2_FDCAN_TTIR_TXU_Values<FDCAN2::FDCAN_TTIR, 10, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using TXO = FDCAN2_FDCAN_TTIR_TXO_Values<FDCAN2::FDCAN_TTIR, 11, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using SE1 = FDCAN2_FDCAN_TTIR_SE1_Values<FDCAN2::FDCAN_TTIR, 12, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using SE2 = FDCAN2_FDCAN_TTIR_SE2_Values<FDCAN2::FDCAN_TTIR, 13, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using ELC = FDCAN2_FDCAN_TTIR_ELC_Values<FDCAN2::FDCAN_TTIR, 14, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using IWTG = FDCAN2_FDCAN_TTIR_IWTG_Values<FDCAN2::FDCAN_TTIR, 15, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using WT = FDCAN2_FDCAN_TTIR_WT_Values<FDCAN2::FDCAN_TTIR, 16, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using AW = FDCAN2_FDCAN_TTIR_AW_Values<FDCAN2::FDCAN_TTIR, 17, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using CER = FDCAN2_FDCAN_TTIR_CER_Values<FDCAN2::FDCAN_TTIR, 18, 1, ReadWriteMode, FDCAN2FDCAN_TTIRBase> ;
    using FieldValues = FDCAN2_FDCAN_TTIR_CER_Values<FDCAN2::FDCAN_TTIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTIRPack  = Register<0x4000A520, 32, ReadWriteMode, FDCAN2FDCAN_TTIRBase, T...> ;

  struct FDCAN2FDCAN_TTIEBase {} ;

  struct FDCAN_TTIE : public RegisterBase<0x4000A524, 32, ReadWriteMode>
  {
    using SBCE = FDCAN2_FDCAN_TTIE_SBCE_Values<FDCAN2::FDCAN_TTIE, 0, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using SMCE = FDCAN2_FDCAN_TTIE_SMCE_Values<FDCAN2::FDCAN_TTIE, 1, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using CSME = FDCAN2_FDCAN_TTIE_CSME_Values<FDCAN2::FDCAN_TTIE, 2, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using SOGE = FDCAN2_FDCAN_TTIE_SOGE_Values<FDCAN2::FDCAN_TTIE, 3, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using RTMIE = FDCAN2_FDCAN_TTIE_RTMIE_Values<FDCAN2::FDCAN_TTIE, 4, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using TTMIE = FDCAN2_FDCAN_TTIE_TTMIE_Values<FDCAN2::FDCAN_TTIE, 5, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using SWEE = FDCAN2_FDCAN_TTIE_SWEE_Values<FDCAN2::FDCAN_TTIE, 6, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using GTWE = FDCAN2_FDCAN_TTIE_GTWE_Values<FDCAN2::FDCAN_TTIE, 7, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using GTDE = FDCAN2_FDCAN_TTIE_GTDE_Values<FDCAN2::FDCAN_TTIE, 8, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using GTEE = FDCAN2_FDCAN_TTIE_GTEE_Values<FDCAN2::FDCAN_TTIE, 9, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using TXUE = FDCAN2_FDCAN_TTIE_TXUE_Values<FDCAN2::FDCAN_TTIE, 10, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using TXOE = FDCAN2_FDCAN_TTIE_TXOE_Values<FDCAN2::FDCAN_TTIE, 11, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using SE1E = FDCAN2_FDCAN_TTIE_SE1E_Values<FDCAN2::FDCAN_TTIE, 12, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using SE2E = FDCAN2_FDCAN_TTIE_SE2E_Values<FDCAN2::FDCAN_TTIE, 13, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using ELCE = FDCAN2_FDCAN_TTIE_ELCE_Values<FDCAN2::FDCAN_TTIE, 14, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using IWTGE = FDCAN2_FDCAN_TTIE_IWTGE_Values<FDCAN2::FDCAN_TTIE, 15, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using WTE = FDCAN2_FDCAN_TTIE_WTE_Values<FDCAN2::FDCAN_TTIE, 16, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using AWE = FDCAN2_FDCAN_TTIE_AWE_Values<FDCAN2::FDCAN_TTIE, 17, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using CERE = FDCAN2_FDCAN_TTIE_CERE_Values<FDCAN2::FDCAN_TTIE, 18, 1, ReadWriteMode, FDCAN2FDCAN_TTIEBase> ;
    using FieldValues = FDCAN2_FDCAN_TTIE_CERE_Values<FDCAN2::FDCAN_TTIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTIEPack  = Register<0x4000A524, 32, ReadWriteMode, FDCAN2FDCAN_TTIEBase, T...> ;

  struct FDCAN2FDCAN_TTILSBase {} ;

  struct FDCAN_TTILS : public RegisterBase<0x4000A528, 32, ReadWriteMode>
  {
    using SBCL = FDCAN2_FDCAN_TTILS_SBCL_Values<FDCAN2::FDCAN_TTILS, 0, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using SMCL = FDCAN2_FDCAN_TTILS_SMCL_Values<FDCAN2::FDCAN_TTILS, 1, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using CSML = FDCAN2_FDCAN_TTILS_CSML_Values<FDCAN2::FDCAN_TTILS, 2, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using SOGL = FDCAN2_FDCAN_TTILS_SOGL_Values<FDCAN2::FDCAN_TTILS, 3, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using RTMIL = FDCAN2_FDCAN_TTILS_RTMIL_Values<FDCAN2::FDCAN_TTILS, 4, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using TTMIL = FDCAN2_FDCAN_TTILS_TTMIL_Values<FDCAN2::FDCAN_TTILS, 5, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using SWEL = FDCAN2_FDCAN_TTILS_SWEL_Values<FDCAN2::FDCAN_TTILS, 6, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using GTWL = FDCAN2_FDCAN_TTILS_GTWL_Values<FDCAN2::FDCAN_TTILS, 7, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using GTDL = FDCAN2_FDCAN_TTILS_GTDL_Values<FDCAN2::FDCAN_TTILS, 8, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using GTEL = FDCAN2_FDCAN_TTILS_GTEL_Values<FDCAN2::FDCAN_TTILS, 9, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using TXUL = FDCAN2_FDCAN_TTILS_TXUL_Values<FDCAN2::FDCAN_TTILS, 10, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using TXOL = FDCAN2_FDCAN_TTILS_TXOL_Values<FDCAN2::FDCAN_TTILS, 11, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using SE1L = FDCAN2_FDCAN_TTILS_SE1L_Values<FDCAN2::FDCAN_TTILS, 12, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using SE2L = FDCAN2_FDCAN_TTILS_SE2L_Values<FDCAN2::FDCAN_TTILS, 13, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using ELCL = FDCAN2_FDCAN_TTILS_ELCL_Values<FDCAN2::FDCAN_TTILS, 14, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using IWTGL = FDCAN2_FDCAN_TTILS_IWTGL_Values<FDCAN2::FDCAN_TTILS, 15, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using WTL = FDCAN2_FDCAN_TTILS_WTL_Values<FDCAN2::FDCAN_TTILS, 16, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using AWL = FDCAN2_FDCAN_TTILS_AWL_Values<FDCAN2::FDCAN_TTILS, 17, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using CERL = FDCAN2_FDCAN_TTILS_CERL_Values<FDCAN2::FDCAN_TTILS, 18, 1, ReadWriteMode, FDCAN2FDCAN_TTILSBase> ;
    using FieldValues = FDCAN2_FDCAN_TTILS_CERL_Values<FDCAN2::FDCAN_TTILS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTILSPack  = Register<0x4000A528, 32, ReadWriteMode, FDCAN2FDCAN_TTILSBase, T...> ;

  struct FDCAN2FDCAN_TTOSTBase {} ;

  struct FDCAN_TTOST : public RegisterBase<0x4000A52C, 32, ReadWriteMode>
  {
    using EL = FDCAN2_FDCAN_TTOST_EL_Values<FDCAN2::FDCAN_TTOST, 0, 2, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using MS = FDCAN2_FDCAN_TTOST_MS_Values<FDCAN2::FDCAN_TTOST, 2, 2, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using SYS = FDCAN2_FDCAN_TTOST_SYS_Values<FDCAN2::FDCAN_TTOST, 4, 2, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using GTP = FDCAN2_FDCAN_TTOST_GTP_Values<FDCAN2::FDCAN_TTOST, 6, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using QCS = FDCAN2_FDCAN_TTOST_QCS_Values<FDCAN2::FDCAN_TTOST, 7, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using RTO = FDCAN2_FDCAN_TTOST_RTO_Values<FDCAN2::FDCAN_TTOST, 8, 8, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using WGTD = FDCAN2_FDCAN_TTOST_WGTD_Values<FDCAN2::FDCAN_TTOST, 22, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using GFI = FDCAN2_FDCAN_TTOST_GFI_Values<FDCAN2::FDCAN_TTOST, 23, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using TMP = FDCAN2_FDCAN_TTOST_TMP_Values<FDCAN2::FDCAN_TTOST, 24, 3, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using GSI = FDCAN2_FDCAN_TTOST_GSI_Values<FDCAN2::FDCAN_TTOST, 27, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using WFE = FDCAN2_FDCAN_TTOST_WFE_Values<FDCAN2::FDCAN_TTOST, 28, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using AWE = FDCAN2_FDCAN_TTOST_AWE_Values<FDCAN2::FDCAN_TTOST, 29, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using WECS = FDCAN2_FDCAN_TTOST_WECS_Values<FDCAN2::FDCAN_TTOST, 30, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using SPL = FDCAN2_FDCAN_TTOST_SPL_Values<FDCAN2::FDCAN_TTOST, 31, 1, ReadWriteMode, FDCAN2FDCAN_TTOSTBase> ;
    using FieldValues = FDCAN2_FDCAN_TTOST_SPL_Values<FDCAN2::FDCAN_TTOST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTOSTPack  = Register<0x4000A52C, 32, ReadWriteMode, FDCAN2FDCAN_TTOSTBase, T...> ;

  struct FDCAN2FDCAN_TURNABase {} ;

  struct FDCAN_TURNA : public RegisterBase<0x4000A530, 32, ReadMode>
  {
    using NAV = FDCAN2_FDCAN_TURNA_NAV_Values<FDCAN2::FDCAN_TURNA, 0, 18, ReadMode, FDCAN2FDCAN_TURNABase> ;
    using FieldValues = FDCAN2_FDCAN_TURNA_NAV_Values<FDCAN2::FDCAN_TURNA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TURNAPack  = Register<0x4000A530, 32, ReadMode, FDCAN2FDCAN_TURNABase, T...> ;

  struct FDCAN2FDCAN_TTLGTBase {} ;

  struct FDCAN_TTLGT : public RegisterBase<0x4000A534, 32, ReadMode>
  {
    using LT = FDCAN2_FDCAN_TTLGT_LT_Values<FDCAN2::FDCAN_TTLGT, 0, 16, ReadMode, FDCAN2FDCAN_TTLGTBase> ;
    using GT = FDCAN2_FDCAN_TTLGT_GT_Values<FDCAN2::FDCAN_TTLGT, 16, 16, ReadMode, FDCAN2FDCAN_TTLGTBase> ;
    using FieldValues = FDCAN2_FDCAN_TTLGT_GT_Values<FDCAN2::FDCAN_TTLGT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTLGTPack  = Register<0x4000A534, 32, ReadMode, FDCAN2FDCAN_TTLGTBase, T...> ;

  struct FDCAN2FDCAN_TTCTCBase {} ;

  struct FDCAN_TTCTC : public RegisterBase<0x4000A538, 32, ReadMode>
  {
    using CT = FDCAN2_FDCAN_TTCTC_CT_Values<FDCAN2::FDCAN_TTCTC, 0, 16, ReadMode, FDCAN2FDCAN_TTCTCBase> ;
    using CC = FDCAN2_FDCAN_TTCTC_CC_Values<FDCAN2::FDCAN_TTCTC, 16, 6, ReadMode, FDCAN2FDCAN_TTCTCBase> ;
    using FieldValues = FDCAN2_FDCAN_TTCTC_CC_Values<FDCAN2::FDCAN_TTCTC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTCTCPack  = Register<0x4000A538, 32, ReadMode, FDCAN2FDCAN_TTCTCBase, T...> ;

  struct FDCAN2FDCAN_TTCPTBase {} ;

  struct FDCAN_TTCPT : public RegisterBase<0x4000A53C, 32, ReadMode>
  {
    using CT = FDCAN2_FDCAN_TTCPT_CT_Values<FDCAN2::FDCAN_TTCPT, 0, 6, ReadMode, FDCAN2FDCAN_TTCPTBase> ;
    using SWV = FDCAN2_FDCAN_TTCPT_SWV_Values<FDCAN2::FDCAN_TTCPT, 16, 16, ReadMode, FDCAN2FDCAN_TTCPTBase> ;
    using FieldValues = FDCAN2_FDCAN_TTCPT_SWV_Values<FDCAN2::FDCAN_TTCPT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTCPTPack  = Register<0x4000A53C, 32, ReadMode, FDCAN2FDCAN_TTCPTBase, T...> ;

  struct FDCAN2FDCAN_TTCSMBase {} ;

  struct FDCAN_TTCSM : public RegisterBase<0x4000A540, 32, ReadMode>
  {
    using CSM = FDCAN2_FDCAN_TTCSM_CSM_Values<FDCAN2::FDCAN_TTCSM, 0, 16, ReadMode, FDCAN2FDCAN_TTCSMBase> ;
    using FieldValues = FDCAN2_FDCAN_TTCSM_CSM_Values<FDCAN2::FDCAN_TTCSM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTCSMPack  = Register<0x4000A540, 32, ReadMode, FDCAN2FDCAN_TTCSMBase, T...> ;

  struct FDCAN2FDCAN_TTTSBase {} ;

  struct FDCAN_TTTS : public RegisterBase<0x4000A700, 32, ReadWriteMode>
  {
    using SWTDEL = FDCAN2_FDCAN_TTTS_SWTDEL_Values<FDCAN2::FDCAN_TTTS, 0, 2, ReadWriteMode, FDCAN2FDCAN_TTTSBase> ;
    using EVTSEL = FDCAN2_FDCAN_TTTS_EVTSEL_Values<FDCAN2::FDCAN_TTTS, 4, 2, ReadWriteMode, FDCAN2FDCAN_TTTSBase> ;
    using FieldValues = FDCAN2_FDCAN_TTTS_EVTSEL_Values<FDCAN2::FDCAN_TTTS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TTTSPack  = Register<0x4000A700, 32, ReadWriteMode, FDCAN2FDCAN_TTTSBase, T...> ;

} ;

#endif //#if !defined(FDCAN2REGISTERS_HPP)
