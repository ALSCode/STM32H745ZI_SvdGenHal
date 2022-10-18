/*******************************************************************************
* Filename      : sdmmc2registers.hpp
*
* Details       : SDMMC1. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(SDMMC2REGISTERS_HPP)
#define SDMMC2REGISTERS_HPP

#include "sdmmc2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SDMMC2
{
  struct SDMMC2POWERBase {} ;

  struct POWER : public RegisterBase<0x48022400, 32, ReadWriteMode>
  {
    using PWRCTRL = SDMMC2_POWER_PWRCTRL_Values<SDMMC2::POWER, 0, 2, ReadWriteMode, SDMMC2POWERBase> ;
    using VSWITCH = SDMMC2_POWER_VSWITCH_Values<SDMMC2::POWER, 2, 1, ReadWriteMode, SDMMC2POWERBase> ;
    using VSWITCHEN = SDMMC2_POWER_VSWITCHEN_Values<SDMMC2::POWER, 3, 1, ReadWriteMode, SDMMC2POWERBase> ;
    using DIRPOL = SDMMC2_POWER_DIRPOL_Values<SDMMC2::POWER, 4, 1, ReadWriteMode, SDMMC2POWERBase> ;
    using FieldValues = SDMMC2_POWER_DIRPOL_Values<SDMMC2::POWER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using POWERPack  = Register<0x48022400, 32, ReadWriteMode, SDMMC2POWERBase, T...> ;

  struct SDMMC2CLKCRBase {} ;

  struct CLKCR : public RegisterBase<0x48022404, 32, ReadWriteMode>
  {
    using CLKDIV = SDMMC2_CLKCR_CLKDIV_Values<SDMMC2::CLKCR, 0, 10, ReadWriteMode, SDMMC2CLKCRBase> ;
    using PWRSAV = SDMMC2_CLKCR_PWRSAV_Values<SDMMC2::CLKCR, 12, 1, ReadWriteMode, SDMMC2CLKCRBase> ;
    using WIDBUS = SDMMC2_CLKCR_WIDBUS_Values<SDMMC2::CLKCR, 14, 2, ReadWriteMode, SDMMC2CLKCRBase> ;
    using NEGEDGE = SDMMC2_CLKCR_NEGEDGE_Values<SDMMC2::CLKCR, 16, 1, ReadWriteMode, SDMMC2CLKCRBase> ;
    using HWFC_EN = SDMMC2_CLKCR_HWFC_EN_Values<SDMMC2::CLKCR, 17, 1, ReadWriteMode, SDMMC2CLKCRBase> ;
    using DDR = SDMMC2_CLKCR_DDR_Values<SDMMC2::CLKCR, 18, 1, ReadWriteMode, SDMMC2CLKCRBase> ;
    using BUSSPEED = SDMMC2_CLKCR_BUSSPEED_Values<SDMMC2::CLKCR, 19, 1, ReadWriteMode, SDMMC2CLKCRBase> ;
    using SELCLKRX = SDMMC2_CLKCR_SELCLKRX_Values<SDMMC2::CLKCR, 20, 2, ReadWriteMode, SDMMC2CLKCRBase> ;
    using FieldValues = SDMMC2_CLKCR_SELCLKRX_Values<SDMMC2::CLKCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLKCRPack  = Register<0x48022404, 32, ReadWriteMode, SDMMC2CLKCRBase, T...> ;

  struct SDMMC2ARGRBase {} ;

  struct ARGR : public RegisterBase<0x48022408, 32, ReadWriteMode>
  {
    using CMDARG = SDMMC2_ARGR_CMDARG_Values<SDMMC2::ARGR, 0, 32, ReadWriteMode, SDMMC2ARGRBase> ;
    using FieldValues = SDMMC2_ARGR_CMDARG_Values<SDMMC2::ARGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARGRPack  = Register<0x48022408, 32, ReadWriteMode, SDMMC2ARGRBase, T...> ;

  struct SDMMC2CMDRBase {} ;

  struct CMDR : public RegisterBase<0x4802240C, 32, ReadWriteMode>
  {
    using CMDINDEX = SDMMC2_CMDR_CMDINDEX_Values<SDMMC2::CMDR, 0, 6, ReadWriteMode, SDMMC2CMDRBase> ;
    using CMDTRANS = SDMMC2_CMDR_CMDTRANS_Values<SDMMC2::CMDR, 6, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using CMDSTOP = SDMMC2_CMDR_CMDSTOP_Values<SDMMC2::CMDR, 7, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using WAITRESP = SDMMC2_CMDR_WAITRESP_Values<SDMMC2::CMDR, 8, 2, ReadWriteMode, SDMMC2CMDRBase> ;
    using WAITINT = SDMMC2_CMDR_WAITINT_Values<SDMMC2::CMDR, 10, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using WAITPEND = SDMMC2_CMDR_WAITPEND_Values<SDMMC2::CMDR, 11, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using CPSMEN = SDMMC2_CMDR_CPSMEN_Values<SDMMC2::CMDR, 12, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using DTHOLD = SDMMC2_CMDR_DTHOLD_Values<SDMMC2::CMDR, 13, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using BOOTMODE = SDMMC2_CMDR_BOOTMODE_Values<SDMMC2::CMDR, 14, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using BOOTEN = SDMMC2_CMDR_BOOTEN_Values<SDMMC2::CMDR, 15, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using CMDSUSPEND = SDMMC2_CMDR_CMDSUSPEND_Values<SDMMC2::CMDR, 16, 1, ReadWriteMode, SDMMC2CMDRBase> ;
    using FieldValues = SDMMC2_CMDR_CMDSUSPEND_Values<SDMMC2::CMDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMDRPack  = Register<0x4802240C, 32, ReadWriteMode, SDMMC2CMDRBase, T...> ;

  struct SDMMC2RESP1RBase {} ;

  struct RESP1R : public RegisterBase<0x48022414, 32, ReadMode>
  {
    using CARDSTATUS1 = SDMMC2_RESP1R_CARDSTATUS1_Values<SDMMC2::RESP1R, 0, 32, ReadMode, SDMMC2RESP1RBase> ;
    using FieldValues = SDMMC2_RESP1R_CARDSTATUS1_Values<SDMMC2::RESP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP1RPack  = Register<0x48022414, 32, ReadMode, SDMMC2RESP1RBase, T...> ;

  struct SDMMC2RESP2RBase {} ;

  struct RESP2R : public RegisterBase<0x48022418, 32, ReadMode>
  {
    using CARDSTATUS2 = SDMMC2_RESP2R_CARDSTATUS2_Values<SDMMC2::RESP2R, 0, 32, ReadMode, SDMMC2RESP2RBase> ;
    using FieldValues = SDMMC2_RESP2R_CARDSTATUS2_Values<SDMMC2::RESP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP2RPack  = Register<0x48022418, 32, ReadMode, SDMMC2RESP2RBase, T...> ;

  struct SDMMC2RESP3RBase {} ;

  struct RESP3R : public RegisterBase<0x4802241C, 32, ReadMode>
  {
    using CARDSTATUS3 = SDMMC2_RESP3R_CARDSTATUS3_Values<SDMMC2::RESP3R, 0, 32, ReadMode, SDMMC2RESP3RBase> ;
    using FieldValues = SDMMC2_RESP3R_CARDSTATUS3_Values<SDMMC2::RESP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP3RPack  = Register<0x4802241C, 32, ReadMode, SDMMC2RESP3RBase, T...> ;

  struct SDMMC2RESP4RBase {} ;

  struct RESP4R : public RegisterBase<0x48022420, 32, ReadMode>
  {
    using CARDSTATUS4 = SDMMC2_RESP4R_CARDSTATUS4_Values<SDMMC2::RESP4R, 0, 32, ReadMode, SDMMC2RESP4RBase> ;
    using FieldValues = SDMMC2_RESP4R_CARDSTATUS4_Values<SDMMC2::RESP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESP4RPack  = Register<0x48022420, 32, ReadMode, SDMMC2RESP4RBase, T...> ;

  struct SDMMC2DTIMERBase {} ;

  struct DTIMER : public RegisterBase<0x48022424, 32, ReadWriteMode>
  {
    using DATATIME = SDMMC2_DTIMER_DATATIME_Values<SDMMC2::DTIMER, 0, 32, ReadWriteMode, SDMMC2DTIMERBase> ;
    using FieldValues = SDMMC2_DTIMER_DATATIME_Values<SDMMC2::DTIMER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTIMERPack  = Register<0x48022424, 32, ReadWriteMode, SDMMC2DTIMERBase, T...> ;

  struct SDMMC2DLENRBase {} ;

  struct DLENR : public RegisterBase<0x48022428, 32, ReadWriteMode>
  {
    using DATALENGTH = SDMMC2_DLENR_DATALENGTH_Values<SDMMC2::DLENR, 0, 25, ReadWriteMode, SDMMC2DLENRBase> ;
    using FieldValues = SDMMC2_DLENR_DATALENGTH_Values<SDMMC2::DLENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DLENRPack  = Register<0x48022428, 32, ReadWriteMode, SDMMC2DLENRBase, T...> ;

  struct SDMMC2DCTRLBase {} ;

  struct DCTRL : public RegisterBase<0x4802242C, 32, ReadWriteMode>
  {
    using DTEN = SDMMC2_DCTRL_DTEN_Values<SDMMC2::DCTRL, 0, 1, ReadWriteMode, SDMMC2DCTRLBase> ;
    using DTDIR = SDMMC2_DCTRL_DTDIR_Values<SDMMC2::DCTRL, 1, 1, ReadWriteMode, SDMMC2DCTRLBase> ;
    using DTMODE = SDMMC2_DCTRL_DTMODE_Values<SDMMC2::DCTRL, 2, 2, ReadWriteMode, SDMMC2DCTRLBase> ;
    using DBLOCKSIZE = SDMMC2_DCTRL_DBLOCKSIZE_Values<SDMMC2::DCTRL, 4, 4, ReadWriteMode, SDMMC2DCTRLBase> ;
    using RWSTART = SDMMC2_DCTRL_RWSTART_Values<SDMMC2::DCTRL, 8, 1, ReadWriteMode, SDMMC2DCTRLBase> ;
    using RWSTOP = SDMMC2_DCTRL_RWSTOP_Values<SDMMC2::DCTRL, 9, 1, ReadWriteMode, SDMMC2DCTRLBase> ;
    using RWMOD = SDMMC2_DCTRL_RWMOD_Values<SDMMC2::DCTRL, 10, 1, ReadWriteMode, SDMMC2DCTRLBase> ;
    using SDIOEN = SDMMC2_DCTRL_SDIOEN_Values<SDMMC2::DCTRL, 11, 1, ReadWriteMode, SDMMC2DCTRLBase> ;
    using BOOTACKEN = SDMMC2_DCTRL_BOOTACKEN_Values<SDMMC2::DCTRL, 12, 1, ReadWriteMode, SDMMC2DCTRLBase> ;
    using FIFORST = SDMMC2_DCTRL_FIFORST_Values<SDMMC2::DCTRL, 13, 1, ReadWriteMode, SDMMC2DCTRLBase> ;
    using FieldValues = SDMMC2_DCTRL_FIFORST_Values<SDMMC2::DCTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCTRLPack  = Register<0x4802242C, 32, ReadWriteMode, SDMMC2DCTRLBase, T...> ;

  struct SDMMC2DCNTRBase {} ;

  struct DCNTR : public RegisterBase<0x48022430, 32, ReadMode>
  {
    using DATACOUNT = SDMMC2_DCNTR_DATACOUNT_Values<SDMMC2::DCNTR, 0, 25, ReadMode, SDMMC2DCNTRBase> ;
    using FieldValues = SDMMC2_DCNTR_DATACOUNT_Values<SDMMC2::DCNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCNTRPack  = Register<0x48022430, 32, ReadMode, SDMMC2DCNTRBase, T...> ;

  struct SDMMC2STARBase {} ;

  struct STAR : public RegisterBase<0x48022434, 32, ReadMode>
  {
    using CCRCFAIL = SDMMC2_STAR_CCRCFAIL_Values<SDMMC2::STAR, 0, 1, ReadMode, SDMMC2STARBase> ;
    using DCRCFAIL = SDMMC2_STAR_DCRCFAIL_Values<SDMMC2::STAR, 1, 1, ReadMode, SDMMC2STARBase> ;
    using CTIMEOUT = SDMMC2_STAR_CTIMEOUT_Values<SDMMC2::STAR, 2, 1, ReadMode, SDMMC2STARBase> ;
    using DTIMEOUT = SDMMC2_STAR_DTIMEOUT_Values<SDMMC2::STAR, 3, 1, ReadMode, SDMMC2STARBase> ;
    using TXUNDERR = SDMMC2_STAR_TXUNDERR_Values<SDMMC2::STAR, 4, 1, ReadMode, SDMMC2STARBase> ;
    using RXOVERR = SDMMC2_STAR_RXOVERR_Values<SDMMC2::STAR, 5, 1, ReadMode, SDMMC2STARBase> ;
    using CMDREND = SDMMC2_STAR_CMDREND_Values<SDMMC2::STAR, 6, 1, ReadMode, SDMMC2STARBase> ;
    using CMDSENT = SDMMC2_STAR_CMDSENT_Values<SDMMC2::STAR, 7, 1, ReadMode, SDMMC2STARBase> ;
    using DATAEND = SDMMC2_STAR_DATAEND_Values<SDMMC2::STAR, 8, 1, ReadMode, SDMMC2STARBase> ;
    using DHOLD = SDMMC2_STAR_DHOLD_Values<SDMMC2::STAR, 9, 1, ReadMode, SDMMC2STARBase> ;
    using DBCKEND = SDMMC2_STAR_DBCKEND_Values<SDMMC2::STAR, 10, 1, ReadMode, SDMMC2STARBase> ;
    using DABORT = SDMMC2_STAR_DABORT_Values<SDMMC2::STAR, 11, 1, ReadMode, SDMMC2STARBase> ;
    using DPSMACT = SDMMC2_STAR_DPSMACT_Values<SDMMC2::STAR, 12, 1, ReadMode, SDMMC2STARBase> ;
    using CPSMACT = SDMMC2_STAR_CPSMACT_Values<SDMMC2::STAR, 13, 1, ReadMode, SDMMC2STARBase> ;
    using TXFIFOHE = SDMMC2_STAR_TXFIFOHE_Values<SDMMC2::STAR, 14, 1, ReadMode, SDMMC2STARBase> ;
    using RXFIFOHF = SDMMC2_STAR_RXFIFOHF_Values<SDMMC2::STAR, 15, 1, ReadMode, SDMMC2STARBase> ;
    using TXFIFOF = SDMMC2_STAR_TXFIFOF_Values<SDMMC2::STAR, 16, 1, ReadMode, SDMMC2STARBase> ;
    using RXFIFOF = SDMMC2_STAR_RXFIFOF_Values<SDMMC2::STAR, 17, 1, ReadMode, SDMMC2STARBase> ;
    using TXFIFOE = SDMMC2_STAR_TXFIFOE_Values<SDMMC2::STAR, 18, 1, ReadMode, SDMMC2STARBase> ;
    using RXFIFOE = SDMMC2_STAR_RXFIFOE_Values<SDMMC2::STAR, 19, 1, ReadMode, SDMMC2STARBase> ;
    using BUSYD0 = SDMMC2_STAR_BUSYD0_Values<SDMMC2::STAR, 20, 1, ReadMode, SDMMC2STARBase> ;
    using BUSYD0END = SDMMC2_STAR_BUSYD0END_Values<SDMMC2::STAR, 21, 1, ReadMode, SDMMC2STARBase> ;
    using SDIOIT = SDMMC2_STAR_SDIOIT_Values<SDMMC2::STAR, 22, 1, ReadMode, SDMMC2STARBase> ;
    using ACKFAIL = SDMMC2_STAR_ACKFAIL_Values<SDMMC2::STAR, 23, 1, ReadMode, SDMMC2STARBase> ;
    using ACKTIMEOUT = SDMMC2_STAR_ACKTIMEOUT_Values<SDMMC2::STAR, 24, 1, ReadMode, SDMMC2STARBase> ;
    using VSWEND = SDMMC2_STAR_VSWEND_Values<SDMMC2::STAR, 25, 1, ReadMode, SDMMC2STARBase> ;
    using CKSTOP = SDMMC2_STAR_CKSTOP_Values<SDMMC2::STAR, 26, 1, ReadMode, SDMMC2STARBase> ;
    using IDMATE = SDMMC2_STAR_IDMATE_Values<SDMMC2::STAR, 27, 1, ReadMode, SDMMC2STARBase> ;
    using IDMABTC = SDMMC2_STAR_IDMABTC_Values<SDMMC2::STAR, 28, 1, ReadMode, SDMMC2STARBase> ;
    using FieldValues = SDMMC2_STAR_IDMABTC_Values<SDMMC2::STAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using STARPack  = Register<0x48022434, 32, ReadMode, SDMMC2STARBase, T...> ;

  struct SDMMC2ICRBase {} ;

  struct ICR : public RegisterBase<0x48022438, 32, ReadWriteMode>
  {
    using CCRCFAILC = SDMMC2_ICR_CCRCFAILC_Values<SDMMC2::ICR, 0, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using DCRCFAILC = SDMMC2_ICR_DCRCFAILC_Values<SDMMC2::ICR, 1, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using CTIMEOUTC = SDMMC2_ICR_CTIMEOUTC_Values<SDMMC2::ICR, 2, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using DTIMEOUTC = SDMMC2_ICR_DTIMEOUTC_Values<SDMMC2::ICR, 3, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using TXUNDERRC = SDMMC2_ICR_TXUNDERRC_Values<SDMMC2::ICR, 4, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using RXOVERRC = SDMMC2_ICR_RXOVERRC_Values<SDMMC2::ICR, 5, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using CMDRENDC = SDMMC2_ICR_CMDRENDC_Values<SDMMC2::ICR, 6, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using CMDSENTC = SDMMC2_ICR_CMDSENTC_Values<SDMMC2::ICR, 7, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using DATAENDC = SDMMC2_ICR_DATAENDC_Values<SDMMC2::ICR, 8, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using DHOLDC = SDMMC2_ICR_DHOLDC_Values<SDMMC2::ICR, 9, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using DBCKENDC = SDMMC2_ICR_DBCKENDC_Values<SDMMC2::ICR, 10, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using DABORTC = SDMMC2_ICR_DABORTC_Values<SDMMC2::ICR, 11, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using BUSYD0ENDC = SDMMC2_ICR_BUSYD0ENDC_Values<SDMMC2::ICR, 21, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using SDIOITC = SDMMC2_ICR_SDIOITC_Values<SDMMC2::ICR, 22, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using ACKFAILC = SDMMC2_ICR_ACKFAILC_Values<SDMMC2::ICR, 23, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using ACKTIMEOUTC = SDMMC2_ICR_ACKTIMEOUTC_Values<SDMMC2::ICR, 24, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using VSWENDC = SDMMC2_ICR_VSWENDC_Values<SDMMC2::ICR, 25, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using CKSTOPC = SDMMC2_ICR_CKSTOPC_Values<SDMMC2::ICR, 26, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using IDMATEC = SDMMC2_ICR_IDMATEC_Values<SDMMC2::ICR, 27, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using IDMABTCC = SDMMC2_ICR_IDMABTCC_Values<SDMMC2::ICR, 28, 1, ReadWriteMode, SDMMC2ICRBase> ;
    using FieldValues = SDMMC2_ICR_IDMABTCC_Values<SDMMC2::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x48022438, 32, ReadWriteMode, SDMMC2ICRBase, T...> ;

  struct SDMMC2MASKRBase {} ;

  struct MASKR : public RegisterBase<0x4802243C, 32, ReadWriteMode>
  {
    using CCRCFAILIE = SDMMC2_MASKR_CCRCFAILIE_Values<SDMMC2::MASKR, 0, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using DCRCFAILIE = SDMMC2_MASKR_DCRCFAILIE_Values<SDMMC2::MASKR, 1, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using CTIMEOUTIE = SDMMC2_MASKR_CTIMEOUTIE_Values<SDMMC2::MASKR, 2, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using DTIMEOUTIE = SDMMC2_MASKR_DTIMEOUTIE_Values<SDMMC2::MASKR, 3, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using TXUNDERRIE = SDMMC2_MASKR_TXUNDERRIE_Values<SDMMC2::MASKR, 4, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using RXOVERRIE = SDMMC2_MASKR_RXOVERRIE_Values<SDMMC2::MASKR, 5, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using CMDRENDIE = SDMMC2_MASKR_CMDRENDIE_Values<SDMMC2::MASKR, 6, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using CMDSENTIE = SDMMC2_MASKR_CMDSENTIE_Values<SDMMC2::MASKR, 7, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using DATAENDIE = SDMMC2_MASKR_DATAENDIE_Values<SDMMC2::MASKR, 8, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using DHOLDIE = SDMMC2_MASKR_DHOLDIE_Values<SDMMC2::MASKR, 9, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using DBCKENDIE = SDMMC2_MASKR_DBCKENDIE_Values<SDMMC2::MASKR, 10, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using DABORTIE = SDMMC2_MASKR_DABORTIE_Values<SDMMC2::MASKR, 11, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using TXFIFOHEIE = SDMMC2_MASKR_TXFIFOHEIE_Values<SDMMC2::MASKR, 14, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using RXFIFOHFIE = SDMMC2_MASKR_RXFIFOHFIE_Values<SDMMC2::MASKR, 15, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using RXFIFOFIE = SDMMC2_MASKR_RXFIFOFIE_Values<SDMMC2::MASKR, 17, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using TXFIFOEIE = SDMMC2_MASKR_TXFIFOEIE_Values<SDMMC2::MASKR, 18, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using BUSYD0ENDIE = SDMMC2_MASKR_BUSYD0ENDIE_Values<SDMMC2::MASKR, 21, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using SDIOITIE = SDMMC2_MASKR_SDIOITIE_Values<SDMMC2::MASKR, 22, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using ACKFAILIE = SDMMC2_MASKR_ACKFAILIE_Values<SDMMC2::MASKR, 23, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using ACKTIMEOUTIE = SDMMC2_MASKR_ACKTIMEOUTIE_Values<SDMMC2::MASKR, 24, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using VSWENDIE = SDMMC2_MASKR_VSWENDIE_Values<SDMMC2::MASKR, 25, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using CKSTOPIE = SDMMC2_MASKR_CKSTOPIE_Values<SDMMC2::MASKR, 26, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using IDMABTCIE = SDMMC2_MASKR_IDMABTCIE_Values<SDMMC2::MASKR, 28, 1, ReadWriteMode, SDMMC2MASKRBase> ;
    using FieldValues = SDMMC2_MASKR_IDMABTCIE_Values<SDMMC2::MASKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MASKRPack  = Register<0x4802243C, 32, ReadWriteMode, SDMMC2MASKRBase, T...> ;

  struct SDMMC2ACKTIMERBase {} ;

  struct ACKTIMER : public RegisterBase<0x48022440, 32, ReadWriteMode>
  {
    using ACKTIME = SDMMC2_ACKTIMER_ACKTIME_Values<SDMMC2::ACKTIMER, 0, 25, ReadWriteMode, SDMMC2ACKTIMERBase> ;
    using FieldValues = SDMMC2_ACKTIMER_ACKTIME_Values<SDMMC2::ACKTIMER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACKTIMERPack  = Register<0x48022440, 32, ReadWriteMode, SDMMC2ACKTIMERBase, T...> ;

  struct SDMMC2IDMACTRLRBase {} ;

  struct IDMACTRLR : public RegisterBase<0x48022450, 32, ReadWriteMode>
  {
    using IDMAEN = SDMMC2_IDMACTRLR_IDMAEN_Values<SDMMC2::IDMACTRLR, 0, 1, ReadWriteMode, SDMMC2IDMACTRLRBase> ;
    using IDMABMODE = SDMMC2_IDMACTRLR_IDMABMODE_Values<SDMMC2::IDMACTRLR, 1, 1, ReadWriteMode, SDMMC2IDMACTRLRBase> ;
    using IDMABACT = SDMMC2_IDMACTRLR_IDMABACT_Values<SDMMC2::IDMACTRLR, 2, 1, ReadWriteMode, SDMMC2IDMACTRLRBase> ;
    using FieldValues = SDMMC2_IDMACTRLR_IDMABACT_Values<SDMMC2::IDMACTRLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDMACTRLRPack  = Register<0x48022450, 32, ReadWriteMode, SDMMC2IDMACTRLRBase, T...> ;

  struct SDMMC2IDMABSIZERBase {} ;

  struct IDMABSIZER : public RegisterBase<0x48022454, 32, ReadWriteMode>
  {
    using IDMABNDT = SDMMC2_IDMABSIZER_IDMABNDT_Values<SDMMC2::IDMABSIZER, 5, 8, ReadWriteMode, SDMMC2IDMABSIZERBase> ;
    using FieldValues = SDMMC2_IDMABSIZER_IDMABNDT_Values<SDMMC2::IDMABSIZER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDMABSIZERPack  = Register<0x48022454, 32, ReadWriteMode, SDMMC2IDMABSIZERBase, T...> ;

  struct SDMMC2IDMABASE0RBase {} ;

  struct IDMABASE0R : public RegisterBase<0x48022458, 32, ReadWriteMode>
  {
    using IDMABASE0 = SDMMC2_IDMABASE0R_IDMABASE0_Values<SDMMC2::IDMABASE0R, 0, 32, ReadWriteMode, SDMMC2IDMABASE0RBase> ;
    using FieldValues = SDMMC2_IDMABASE0R_IDMABASE0_Values<SDMMC2::IDMABASE0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDMABASE0RPack  = Register<0x48022458, 32, ReadWriteMode, SDMMC2IDMABASE0RBase, T...> ;

  struct SDMMC2IDMABASE1RBase {} ;

  struct IDMABASE1R : public RegisterBase<0x4802245C, 32, ReadWriteMode>
  {
    using IDMABASE1 = SDMMC2_IDMABASE1R_IDMABASE1_Values<SDMMC2::IDMABASE1R, 0, 32, ReadWriteMode, SDMMC2IDMABASE1RBase> ;
    using FieldValues = SDMMC2_IDMABASE1R_IDMABASE1_Values<SDMMC2::IDMABASE1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDMABASE1RPack  = Register<0x4802245C, 32, ReadWriteMode, SDMMC2IDMABASE1RBase, T...> ;

  struct SDMMC2FIFORBase {} ;

  struct FIFOR : public RegisterBase<0x48022480, 32, ReadWriteMode>
  {
    using FIFODATA = SDMMC2_FIFOR_FIFODATA_Values<SDMMC2::FIFOR, 0, 32, ReadWriteMode, SDMMC2FIFORBase> ;
    using FieldValues = SDMMC2_FIFOR_FIFODATA_Values<SDMMC2::FIFOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FIFORPack  = Register<0x48022480, 32, ReadWriteMode, SDMMC2FIFORBase, T...> ;

  struct SDMMC2RESPCMDRBase {} ;

  struct RESPCMDR : public RegisterBase<0x48022410, 32, ReadMode>
  {
    using RESPCMD = SDMMC2_RESPCMDR_RESPCMD_Values<SDMMC2::RESPCMDR, 0, 6, ReadMode, SDMMC2RESPCMDRBase> ;
    using FieldValues = SDMMC2_RESPCMDR_RESPCMD_Values<SDMMC2::RESPCMDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RESPCMDRPack  = Register<0x48022410, 32, ReadMode, SDMMC2RESPCMDRBase, T...> ;

} ;

#endif //#if !defined(SDMMC2REGISTERS_HPP)
