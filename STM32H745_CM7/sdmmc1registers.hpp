/*******************************************************************************
* Filename      : sdmmc1registers.hpp
*
* Details       : SDMMC1. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(SDMMC1REGISTERS_HPP)
#define SDMMC1REGISTERS_HPP

#include "sdmmc1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SDMMC1
{
  struct SDMMC1POWERBase {} ;

  struct POWER : public RegisterBase<0x52007000, 32, ReadWriteMode>
  {
    using PWRCTRL = SDMMC1_POWER_PWRCTRL_Values<SDMMC1::POWER, 0, 2, ReadWriteMode, SDMMC1POWERBase> ;
    using VSWITCH = SDMMC1_POWER_VSWITCH_Values<SDMMC1::POWER, 2, 1, ReadWriteMode, SDMMC1POWERBase> ;
    using VSWITCHEN = SDMMC1_POWER_VSWITCHEN_Values<SDMMC1::POWER, 3, 1, ReadWriteMode, SDMMC1POWERBase> ;
    using DIRPOL = SDMMC1_POWER_DIRPOL_Values<SDMMC1::POWER, 4, 1, ReadWriteMode, SDMMC1POWERBase> ;
    using FieldValues = SDMMC1_POWER_DIRPOL_Values<SDMMC1::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x52007000, 32, ReadWriteMode, SDMMC1POWERBase, T...> ;

  struct SDMMC1CLKCRBase {} ;

  struct CLKCR : public RegisterBase<0x52007004, 32, ReadWriteMode>
  {
    using CLKDIV = SDMMC1_CLKCR_CLKDIV_Values<SDMMC1::CLKCR, 0, 10, ReadWriteMode, SDMMC1CLKCRBase> ;
    using PWRSAV = SDMMC1_CLKCR_PWRSAV_Values<SDMMC1::CLKCR, 12, 1, ReadWriteMode, SDMMC1CLKCRBase> ;
    using WIDBUS = SDMMC1_CLKCR_WIDBUS_Values<SDMMC1::CLKCR, 14, 2, ReadWriteMode, SDMMC1CLKCRBase> ;
    using NEGEDGE = SDMMC1_CLKCR_NEGEDGE_Values<SDMMC1::CLKCR, 16, 1, ReadWriteMode, SDMMC1CLKCRBase> ;
    using HWFC_EN = SDMMC1_CLKCR_HWFC_EN_Values<SDMMC1::CLKCR, 17, 1, ReadWriteMode, SDMMC1CLKCRBase> ;
    using DDR = SDMMC1_CLKCR_DDR_Values<SDMMC1::CLKCR, 18, 1, ReadWriteMode, SDMMC1CLKCRBase> ;
    using BUSSPEED = SDMMC1_CLKCR_BUSSPEED_Values<SDMMC1::CLKCR, 19, 1, ReadWriteMode, SDMMC1CLKCRBase> ;
    using SELCLKRX = SDMMC1_CLKCR_SELCLKRX_Values<SDMMC1::CLKCR, 20, 2, ReadWriteMode, SDMMC1CLKCRBase> ;
    using FieldValues = SDMMC1_CLKCR_SELCLKRX_Values<SDMMC1::CLKCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLKCRPack  = Register<0x52007004, 32, ReadWriteMode, SDMMC1CLKCRBase, T...> ;

  struct SDMMC1ARGRBase {} ;

  struct ARGR : public RegisterBase<0x52007008, 32, ReadWriteMode>
  {
    using CMDARG = SDMMC1_ARGR_CMDARG_Values<SDMMC1::ARGR, 0, 32, ReadWriteMode, SDMMC1ARGRBase> ;
    using FieldValues = SDMMC1_ARGR_CMDARG_Values<SDMMC1::ARGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARGRPack  = Register<0x52007008, 32, ReadWriteMode, SDMMC1ARGRBase, T...> ;

  struct SDMMC1CMDRBase {} ;

  struct CMDR : public RegisterBase<0x5200700C, 32, ReadWriteMode>
  {
    using CMDINDEX = SDMMC1_CMDR_CMDINDEX_Values<SDMMC1::CMDR, 0, 6, ReadWriteMode, SDMMC1CMDRBase> ;
    using CMDTRANS = SDMMC1_CMDR_CMDTRANS_Values<SDMMC1::CMDR, 6, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using CMDSTOP = SDMMC1_CMDR_CMDSTOP_Values<SDMMC1::CMDR, 7, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using WAITRESP = SDMMC1_CMDR_WAITRESP_Values<SDMMC1::CMDR, 8, 2, ReadWriteMode, SDMMC1CMDRBase> ;
    using WAITINT = SDMMC1_CMDR_WAITINT_Values<SDMMC1::CMDR, 10, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using WAITPEND = SDMMC1_CMDR_WAITPEND_Values<SDMMC1::CMDR, 11, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using CPSMEN = SDMMC1_CMDR_CPSMEN_Values<SDMMC1::CMDR, 12, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using DTHOLD = SDMMC1_CMDR_DTHOLD_Values<SDMMC1::CMDR, 13, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using BOOTMODE = SDMMC1_CMDR_BOOTMODE_Values<SDMMC1::CMDR, 14, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using BOOTEN = SDMMC1_CMDR_BOOTEN_Values<SDMMC1::CMDR, 15, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using CMDSUSPEND = SDMMC1_CMDR_CMDSUSPEND_Values<SDMMC1::CMDR, 16, 1, ReadWriteMode, SDMMC1CMDRBase> ;
    using FieldValues = SDMMC1_CMDR_CMDSUSPEND_Values<SDMMC1::CMDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMDRPack  = Register<0x5200700C, 32, ReadWriteMode, SDMMC1CMDRBase, T...> ;

  struct SDMMC1RESP1RBase {} ;

  struct RESP1R : public RegisterBase<0x52007014, 32, ReadMode>
  {
    using CARDSTATUS1 = SDMMC1_RESP1R_CARDSTATUS1_Values<SDMMC1::RESP1R, 0, 32, ReadMode, SDMMC1RESP1RBase> ;
    using FieldValues = SDMMC1_RESP1R_CARDSTATUS1_Values<SDMMC1::RESP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP1RPack  = Register<0x52007014, 32, ReadMode, SDMMC1RESP1RBase, T...> ;

  struct SDMMC1RESP2RBase {} ;

  struct RESP2R : public RegisterBase<0x52007018, 32, ReadMode>
  {
    using CARDSTATUS2 = SDMMC1_RESP2R_CARDSTATUS2_Values<SDMMC1::RESP2R, 0, 32, ReadMode, SDMMC1RESP2RBase> ;
    using FieldValues = SDMMC1_RESP2R_CARDSTATUS2_Values<SDMMC1::RESP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP2RPack  = Register<0x52007018, 32, ReadMode, SDMMC1RESP2RBase, T...> ;

  struct SDMMC1RESP3RBase {} ;

  struct RESP3R : public RegisterBase<0x5200701C, 32, ReadMode>
  {
    using CARDSTATUS3 = SDMMC1_RESP3R_CARDSTATUS3_Values<SDMMC1::RESP3R, 0, 32, ReadMode, SDMMC1RESP3RBase> ;
    using FieldValues = SDMMC1_RESP3R_CARDSTATUS3_Values<SDMMC1::RESP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP3RPack  = Register<0x5200701C, 32, ReadMode, SDMMC1RESP3RBase, T...> ;

  struct SDMMC1RESP4RBase {} ;

  struct RESP4R : public RegisterBase<0x52007020, 32, ReadMode>
  {
    using CARDSTATUS4 = SDMMC1_RESP4R_CARDSTATUS4_Values<SDMMC1::RESP4R, 0, 32, ReadMode, SDMMC1RESP4RBase> ;
    using FieldValues = SDMMC1_RESP4R_CARDSTATUS4_Values<SDMMC1::RESP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP4RPack  = Register<0x52007020, 32, ReadMode, SDMMC1RESP4RBase, T...> ;

  struct SDMMC1DTIMERBase {} ;

  struct DTIMER : public RegisterBase<0x52007024, 32, ReadWriteMode>
  {
    using DATATIME = SDMMC1_DTIMER_DATATIME_Values<SDMMC1::DTIMER, 0, 32, ReadWriteMode, SDMMC1DTIMERBase> ;
    using FieldValues = SDMMC1_DTIMER_DATATIME_Values<SDMMC1::DTIMER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTIMERPack  = Register<0x52007024, 32, ReadWriteMode, SDMMC1DTIMERBase, T...> ;

  struct SDMMC1DLENRBase {} ;

  struct DLENR : public RegisterBase<0x52007028, 32, ReadWriteMode>
  {
    using DATALENGTH = SDMMC1_DLENR_DATALENGTH_Values<SDMMC1::DLENR, 0, 25, ReadWriteMode, SDMMC1DLENRBase> ;
    using FieldValues = SDMMC1_DLENR_DATALENGTH_Values<SDMMC1::DLENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DLENRPack  = Register<0x52007028, 32, ReadWriteMode, SDMMC1DLENRBase, T...> ;

  struct SDMMC1DCTRLBase {} ;

  struct DCTRL : public RegisterBase<0x5200702C, 32, ReadWriteMode>
  {
    using DTEN = SDMMC1_DCTRL_DTEN_Values<SDMMC1::DCTRL, 0, 1, ReadWriteMode, SDMMC1DCTRLBase> ;
    using DTDIR = SDMMC1_DCTRL_DTDIR_Values<SDMMC1::DCTRL, 1, 1, ReadWriteMode, SDMMC1DCTRLBase> ;
    using DTMODE = SDMMC1_DCTRL_DTMODE_Values<SDMMC1::DCTRL, 2, 2, ReadWriteMode, SDMMC1DCTRLBase> ;
    using DBLOCKSIZE = SDMMC1_DCTRL_DBLOCKSIZE_Values<SDMMC1::DCTRL, 4, 4, ReadWriteMode, SDMMC1DCTRLBase> ;
    using RWSTART = SDMMC1_DCTRL_RWSTART_Values<SDMMC1::DCTRL, 8, 1, ReadWriteMode, SDMMC1DCTRLBase> ;
    using RWSTOP = SDMMC1_DCTRL_RWSTOP_Values<SDMMC1::DCTRL, 9, 1, ReadWriteMode, SDMMC1DCTRLBase> ;
    using RWMOD = SDMMC1_DCTRL_RWMOD_Values<SDMMC1::DCTRL, 10, 1, ReadWriteMode, SDMMC1DCTRLBase> ;
    using SDIOEN = SDMMC1_DCTRL_SDIOEN_Values<SDMMC1::DCTRL, 11, 1, ReadWriteMode, SDMMC1DCTRLBase> ;
    using BOOTACKEN = SDMMC1_DCTRL_BOOTACKEN_Values<SDMMC1::DCTRL, 12, 1, ReadWriteMode, SDMMC1DCTRLBase> ;
    using FIFORST = SDMMC1_DCTRL_FIFORST_Values<SDMMC1::DCTRL, 13, 1, ReadWriteMode, SDMMC1DCTRLBase> ;
    using FieldValues = SDMMC1_DCTRL_FIFORST_Values<SDMMC1::DCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCTRLPack  = Register<0x5200702C, 32, ReadWriteMode, SDMMC1DCTRLBase, T...> ;

  struct SDMMC1DCNTRBase {} ;

  struct DCNTR : public RegisterBase<0x52007030, 32, ReadMode>
  {
    using DATACOUNT = SDMMC1_DCNTR_DATACOUNT_Values<SDMMC1::DCNTR, 0, 25, ReadMode, SDMMC1DCNTRBase> ;
    using FieldValues = SDMMC1_DCNTR_DATACOUNT_Values<SDMMC1::DCNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCNTRPack  = Register<0x52007030, 32, ReadMode, SDMMC1DCNTRBase, T...> ;

  struct SDMMC1STARBase {} ;

  struct STAR : public RegisterBase<0x52007034, 32, ReadMode>
  {
    using CCRCFAIL = SDMMC1_STAR_CCRCFAIL_Values<SDMMC1::STAR, 0, 1, ReadMode, SDMMC1STARBase> ;
    using DCRCFAIL = SDMMC1_STAR_DCRCFAIL_Values<SDMMC1::STAR, 1, 1, ReadMode, SDMMC1STARBase> ;
    using CTIMEOUT = SDMMC1_STAR_CTIMEOUT_Values<SDMMC1::STAR, 2, 1, ReadMode, SDMMC1STARBase> ;
    using DTIMEOUT = SDMMC1_STAR_DTIMEOUT_Values<SDMMC1::STAR, 3, 1, ReadMode, SDMMC1STARBase> ;
    using TXUNDERR = SDMMC1_STAR_TXUNDERR_Values<SDMMC1::STAR, 4, 1, ReadMode, SDMMC1STARBase> ;
    using RXOVERR = SDMMC1_STAR_RXOVERR_Values<SDMMC1::STAR, 5, 1, ReadMode, SDMMC1STARBase> ;
    using CMDREND = SDMMC1_STAR_CMDREND_Values<SDMMC1::STAR, 6, 1, ReadMode, SDMMC1STARBase> ;
    using CMDSENT = SDMMC1_STAR_CMDSENT_Values<SDMMC1::STAR, 7, 1, ReadMode, SDMMC1STARBase> ;
    using DATAEND = SDMMC1_STAR_DATAEND_Values<SDMMC1::STAR, 8, 1, ReadMode, SDMMC1STARBase> ;
    using DHOLD = SDMMC1_STAR_DHOLD_Values<SDMMC1::STAR, 9, 1, ReadMode, SDMMC1STARBase> ;
    using DBCKEND = SDMMC1_STAR_DBCKEND_Values<SDMMC1::STAR, 10, 1, ReadMode, SDMMC1STARBase> ;
    using DABORT = SDMMC1_STAR_DABORT_Values<SDMMC1::STAR, 11, 1, ReadMode, SDMMC1STARBase> ;
    using DPSMACT = SDMMC1_STAR_DPSMACT_Values<SDMMC1::STAR, 12, 1, ReadMode, SDMMC1STARBase> ;
    using CPSMACT = SDMMC1_STAR_CPSMACT_Values<SDMMC1::STAR, 13, 1, ReadMode, SDMMC1STARBase> ;
    using TXFIFOHE = SDMMC1_STAR_TXFIFOHE_Values<SDMMC1::STAR, 14, 1, ReadMode, SDMMC1STARBase> ;
    using RXFIFOHF = SDMMC1_STAR_RXFIFOHF_Values<SDMMC1::STAR, 15, 1, ReadMode, SDMMC1STARBase> ;
    using TXFIFOF = SDMMC1_STAR_TXFIFOF_Values<SDMMC1::STAR, 16, 1, ReadMode, SDMMC1STARBase> ;
    using RXFIFOF = SDMMC1_STAR_RXFIFOF_Values<SDMMC1::STAR, 17, 1, ReadMode, SDMMC1STARBase> ;
    using TXFIFOE = SDMMC1_STAR_TXFIFOE_Values<SDMMC1::STAR, 18, 1, ReadMode, SDMMC1STARBase> ;
    using RXFIFOE = SDMMC1_STAR_RXFIFOE_Values<SDMMC1::STAR, 19, 1, ReadMode, SDMMC1STARBase> ;
    using BUSYD0 = SDMMC1_STAR_BUSYD0_Values<SDMMC1::STAR, 20, 1, ReadMode, SDMMC1STARBase> ;
    using BUSYD0END = SDMMC1_STAR_BUSYD0END_Values<SDMMC1::STAR, 21, 1, ReadMode, SDMMC1STARBase> ;
    using SDIOIT = SDMMC1_STAR_SDIOIT_Values<SDMMC1::STAR, 22, 1, ReadMode, SDMMC1STARBase> ;
    using ACKFAIL = SDMMC1_STAR_ACKFAIL_Values<SDMMC1::STAR, 23, 1, ReadMode, SDMMC1STARBase> ;
    using ACKTIMEOUT = SDMMC1_STAR_ACKTIMEOUT_Values<SDMMC1::STAR, 24, 1, ReadMode, SDMMC1STARBase> ;
    using VSWEND = SDMMC1_STAR_VSWEND_Values<SDMMC1::STAR, 25, 1, ReadMode, SDMMC1STARBase> ;
    using CKSTOP = SDMMC1_STAR_CKSTOP_Values<SDMMC1::STAR, 26, 1, ReadMode, SDMMC1STARBase> ;
    using IDMATE = SDMMC1_STAR_IDMATE_Values<SDMMC1::STAR, 27, 1, ReadMode, SDMMC1STARBase> ;
    using IDMABTC = SDMMC1_STAR_IDMABTC_Values<SDMMC1::STAR, 28, 1, ReadMode, SDMMC1STARBase> ;
    using FieldValues = SDMMC1_STAR_IDMABTC_Values<SDMMC1::STAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STARPack  = Register<0x52007034, 32, ReadMode, SDMMC1STARBase, T...> ;

  struct SDMMC1ICRBase {} ;

  struct ICR : public RegisterBase<0x52007038, 32, ReadWriteMode>
  {
    using CCRCFAILC = SDMMC1_ICR_CCRCFAILC_Values<SDMMC1::ICR, 0, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using DCRCFAILC = SDMMC1_ICR_DCRCFAILC_Values<SDMMC1::ICR, 1, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using CTIMEOUTC = SDMMC1_ICR_CTIMEOUTC_Values<SDMMC1::ICR, 2, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using DTIMEOUTC = SDMMC1_ICR_DTIMEOUTC_Values<SDMMC1::ICR, 3, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using TXUNDERRC = SDMMC1_ICR_TXUNDERRC_Values<SDMMC1::ICR, 4, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using RXOVERRC = SDMMC1_ICR_RXOVERRC_Values<SDMMC1::ICR, 5, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using CMDRENDC = SDMMC1_ICR_CMDRENDC_Values<SDMMC1::ICR, 6, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using CMDSENTC = SDMMC1_ICR_CMDSENTC_Values<SDMMC1::ICR, 7, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using DATAENDC = SDMMC1_ICR_DATAENDC_Values<SDMMC1::ICR, 8, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using DHOLDC = SDMMC1_ICR_DHOLDC_Values<SDMMC1::ICR, 9, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using DBCKENDC = SDMMC1_ICR_DBCKENDC_Values<SDMMC1::ICR, 10, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using DABORTC = SDMMC1_ICR_DABORTC_Values<SDMMC1::ICR, 11, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using BUSYD0ENDC = SDMMC1_ICR_BUSYD0ENDC_Values<SDMMC1::ICR, 21, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using SDIOITC = SDMMC1_ICR_SDIOITC_Values<SDMMC1::ICR, 22, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using ACKFAILC = SDMMC1_ICR_ACKFAILC_Values<SDMMC1::ICR, 23, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using ACKTIMEOUTC = SDMMC1_ICR_ACKTIMEOUTC_Values<SDMMC1::ICR, 24, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using VSWENDC = SDMMC1_ICR_VSWENDC_Values<SDMMC1::ICR, 25, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using CKSTOPC = SDMMC1_ICR_CKSTOPC_Values<SDMMC1::ICR, 26, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using IDMATEC = SDMMC1_ICR_IDMATEC_Values<SDMMC1::ICR, 27, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using IDMABTCC = SDMMC1_ICR_IDMABTCC_Values<SDMMC1::ICR, 28, 1, ReadWriteMode, SDMMC1ICRBase> ;
    using FieldValues = SDMMC1_ICR_IDMABTCC_Values<SDMMC1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x52007038, 32, ReadWriteMode, SDMMC1ICRBase, T...> ;

  struct SDMMC1MASKRBase {} ;

  struct MASKR : public RegisterBase<0x5200703C, 32, ReadWriteMode>
  {
    using CCRCFAILIE = SDMMC1_MASKR_CCRCFAILIE_Values<SDMMC1::MASKR, 0, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using DCRCFAILIE = SDMMC1_MASKR_DCRCFAILIE_Values<SDMMC1::MASKR, 1, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using CTIMEOUTIE = SDMMC1_MASKR_CTIMEOUTIE_Values<SDMMC1::MASKR, 2, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using DTIMEOUTIE = SDMMC1_MASKR_DTIMEOUTIE_Values<SDMMC1::MASKR, 3, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using TXUNDERRIE = SDMMC1_MASKR_TXUNDERRIE_Values<SDMMC1::MASKR, 4, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using RXOVERRIE = SDMMC1_MASKR_RXOVERRIE_Values<SDMMC1::MASKR, 5, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using CMDRENDIE = SDMMC1_MASKR_CMDRENDIE_Values<SDMMC1::MASKR, 6, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using CMDSENTIE = SDMMC1_MASKR_CMDSENTIE_Values<SDMMC1::MASKR, 7, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using DATAENDIE = SDMMC1_MASKR_DATAENDIE_Values<SDMMC1::MASKR, 8, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using DHOLDIE = SDMMC1_MASKR_DHOLDIE_Values<SDMMC1::MASKR, 9, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using DBCKENDIE = SDMMC1_MASKR_DBCKENDIE_Values<SDMMC1::MASKR, 10, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using DABORTIE = SDMMC1_MASKR_DABORTIE_Values<SDMMC1::MASKR, 11, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using TXFIFOHEIE = SDMMC1_MASKR_TXFIFOHEIE_Values<SDMMC1::MASKR, 14, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using RXFIFOHFIE = SDMMC1_MASKR_RXFIFOHFIE_Values<SDMMC1::MASKR, 15, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using RXFIFOFIE = SDMMC1_MASKR_RXFIFOFIE_Values<SDMMC1::MASKR, 17, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using TXFIFOEIE = SDMMC1_MASKR_TXFIFOEIE_Values<SDMMC1::MASKR, 18, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using BUSYD0ENDIE = SDMMC1_MASKR_BUSYD0ENDIE_Values<SDMMC1::MASKR, 21, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using SDIOITIE = SDMMC1_MASKR_SDIOITIE_Values<SDMMC1::MASKR, 22, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using ACKFAILIE = SDMMC1_MASKR_ACKFAILIE_Values<SDMMC1::MASKR, 23, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using ACKTIMEOUTIE = SDMMC1_MASKR_ACKTIMEOUTIE_Values<SDMMC1::MASKR, 24, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using VSWENDIE = SDMMC1_MASKR_VSWENDIE_Values<SDMMC1::MASKR, 25, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using CKSTOPIE = SDMMC1_MASKR_CKSTOPIE_Values<SDMMC1::MASKR, 26, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using IDMABTCIE = SDMMC1_MASKR_IDMABTCIE_Values<SDMMC1::MASKR, 28, 1, ReadWriteMode, SDMMC1MASKRBase> ;
    using FieldValues = SDMMC1_MASKR_IDMABTCIE_Values<SDMMC1::MASKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MASKRPack  = Register<0x5200703C, 32, ReadWriteMode, SDMMC1MASKRBase, T...> ;

  struct SDMMC1ACKTIMERBase {} ;

  struct ACKTIMER : public RegisterBase<0x52007040, 32, ReadWriteMode>
  {
    using ACKTIME = SDMMC1_ACKTIMER_ACKTIME_Values<SDMMC1::ACKTIMER, 0, 25, ReadWriteMode, SDMMC1ACKTIMERBase> ;
    using FieldValues = SDMMC1_ACKTIMER_ACKTIME_Values<SDMMC1::ACKTIMER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACKTIMERPack  = Register<0x52007040, 32, ReadWriteMode, SDMMC1ACKTIMERBase, T...> ;

  struct SDMMC1IDMACTRLRBase {} ;

  struct IDMACTRLR : public RegisterBase<0x52007050, 32, ReadWriteMode>
  {
    using IDMAEN = SDMMC1_IDMACTRLR_IDMAEN_Values<SDMMC1::IDMACTRLR, 0, 1, ReadWriteMode, SDMMC1IDMACTRLRBase> ;
    using IDMABMODE = SDMMC1_IDMACTRLR_IDMABMODE_Values<SDMMC1::IDMACTRLR, 1, 1, ReadWriteMode, SDMMC1IDMACTRLRBase> ;
    using IDMABACT = SDMMC1_IDMACTRLR_IDMABACT_Values<SDMMC1::IDMACTRLR, 2, 1, ReadWriteMode, SDMMC1IDMACTRLRBase> ;
    using FieldValues = SDMMC1_IDMACTRLR_IDMABACT_Values<SDMMC1::IDMACTRLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDMACTRLRPack  = Register<0x52007050, 32, ReadWriteMode, SDMMC1IDMACTRLRBase, T...> ;

  struct SDMMC1IDMABSIZERBase {} ;

  struct IDMABSIZER : public RegisterBase<0x52007054, 32, ReadWriteMode>
  {
    using IDMABNDT = SDMMC1_IDMABSIZER_IDMABNDT_Values<SDMMC1::IDMABSIZER, 5, 8, ReadWriteMode, SDMMC1IDMABSIZERBase> ;
    using FieldValues = SDMMC1_IDMABSIZER_IDMABNDT_Values<SDMMC1::IDMABSIZER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDMABSIZERPack  = Register<0x52007054, 32, ReadWriteMode, SDMMC1IDMABSIZERBase, T...> ;

  struct SDMMC1IDMABASE0RBase {} ;

  struct IDMABASE0R : public RegisterBase<0x52007058, 32, ReadWriteMode>
  {
    using IDMABASE0 = SDMMC1_IDMABASE0R_IDMABASE0_Values<SDMMC1::IDMABASE0R, 0, 32, ReadWriteMode, SDMMC1IDMABASE0RBase> ;
    using FieldValues = SDMMC1_IDMABASE0R_IDMABASE0_Values<SDMMC1::IDMABASE0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDMABASE0RPack  = Register<0x52007058, 32, ReadWriteMode, SDMMC1IDMABASE0RBase, T...> ;

  struct SDMMC1IDMABASE1RBase {} ;

  struct IDMABASE1R : public RegisterBase<0x5200705C, 32, ReadWriteMode>
  {
    using IDMABASE1 = SDMMC1_IDMABASE1R_IDMABASE1_Values<SDMMC1::IDMABASE1R, 0, 32, ReadWriteMode, SDMMC1IDMABASE1RBase> ;
    using FieldValues = SDMMC1_IDMABASE1R_IDMABASE1_Values<SDMMC1::IDMABASE1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDMABASE1RPack  = Register<0x5200705C, 32, ReadWriteMode, SDMMC1IDMABASE1RBase, T...> ;

  struct SDMMC1FIFORBase {} ;

  struct FIFOR : public RegisterBase<0x52007080, 32, ReadWriteMode>
  {
    using FIFODATA = SDMMC1_FIFOR_FIFODATA_Values<SDMMC1::FIFOR, 0, 32, ReadWriteMode, SDMMC1FIFORBase> ;
    using FieldValues = SDMMC1_FIFOR_FIFODATA_Values<SDMMC1::FIFOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FIFORPack  = Register<0x52007080, 32, ReadWriteMode, SDMMC1FIFORBase, T...> ;

  struct SDMMC1RESPCMDRBase {} ;

  struct RESPCMDR : public RegisterBase<0x52007010, 32, ReadMode>
  {
    using RESPCMD = SDMMC1_RESPCMDR_RESPCMD_Values<SDMMC1::RESPCMDR, 0, 6, ReadMode, SDMMC1RESPCMDRBase> ;
    using FieldValues = SDMMC1_RESPCMDR_RESPCMD_Values<SDMMC1::RESPCMDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESPCMDRPack  = Register<0x52007010, 32, ReadMode, SDMMC1RESPCMDRBase, T...> ;

} ;

#endif //#if !defined(SDMMC1REGISTERS_HPP)
