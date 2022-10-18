/*******************************************************************************
* Filename      : sdmmc1fieldvalues.hpp
*
* Details       : Enumerations related with SDMMC1 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SDMMC1ENUMS_HPP)
#define SDMMC1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_POWER_PWRCTRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_POWER_PWRCTRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_POWER_PWRCTRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDMMC1_POWER_PWRCTRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDMMC1_POWER_PWRCTRL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_POWER_VSWITCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_POWER_VSWITCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_POWER_VSWITCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_POWER_VSWITCHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_POWER_VSWITCHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_POWER_VSWITCHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_POWER_DIRPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_POWER_DIRPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_POWER_DIRPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CLKCR_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CLKCR_PWRSAV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CLKCR_PWRSAV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CLKCR_PWRSAV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CLKCR_WIDBUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CLKCR_WIDBUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CLKCR_WIDBUS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDMMC1_CLKCR_WIDBUS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDMMC1_CLKCR_WIDBUS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CLKCR_NEGEDGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CLKCR_NEGEDGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CLKCR_NEGEDGE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CLKCR_HWFC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CLKCR_HWFC_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CLKCR_HWFC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CLKCR_DDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CLKCR_DDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CLKCR_DDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CLKCR_BUSSPEED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CLKCR_BUSSPEED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CLKCR_BUSSPEED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CLKCR_SELCLKRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CLKCR_SELCLKRX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CLKCR_SELCLKRX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDMMC1_CLKCR_SELCLKRX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDMMC1_CLKCR_SELCLKRX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ARGR_CMDARG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_CMDINDEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_CMDTRANS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_CMDTRANS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_CMDTRANS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_CMDSTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_CMDSTOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_CMDSTOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_WAITRESP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_WAITRESP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_WAITRESP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDMMC1_CMDR_WAITRESP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDMMC1_CMDR_WAITRESP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_WAITINT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_WAITINT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_WAITINT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_WAITPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_WAITPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_WAITPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_CPSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_CPSMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_CPSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_DTHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_DTHOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_DTHOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_BOOTMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_BOOTMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_BOOTMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_BOOTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_BOOTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_BOOTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_CMDR_CMDSUSPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_CMDR_CMDSUSPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_CMDR_CMDSUSPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_RESP1R_CARDSTATUS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_RESP2R_CARDSTATUS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_RESP3R_CARDSTATUS3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_RESP4R_CARDSTATUS4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DTIMER_DATATIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DLENR_DATALENGTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_DTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_DTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_DTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_DTDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_DTDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_DTDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_DTMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_DTMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_DTMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDMMC1_DCTRL_DTMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDMMC1_DCTRL_DTMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_DBLOCKSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SDMMC1_DCTRL_DBLOCKSIZE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_RWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_RWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_RWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_RWSTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_RWSTOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_RWSTOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_RWMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_RWMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_RWMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_SDIOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_SDIOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_SDIOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_BOOTACKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_BOOTACKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_BOOTACKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCTRL_FIFORST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_DCTRL_FIFORST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_DCTRL_FIFORST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_DCNTR_DATACOUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_CCRCFAIL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_CCRCFAIL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_CCRCFAIL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_DCRCFAIL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_DCRCFAIL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_DCRCFAIL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_CTIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_CTIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_CTIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_DTIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_DTIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_DTIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_TXUNDERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_TXUNDERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_TXUNDERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_RXOVERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_RXOVERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_RXOVERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_CMDREND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_CMDREND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_CMDREND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_CMDSENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_CMDSENT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_CMDSENT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_DATAEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_DATAEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_DATAEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_DHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_DHOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_DHOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_DBCKEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_DBCKEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_DBCKEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_DABORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_DABORT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_DABORT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_DPSMACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_DPSMACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_DPSMACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_CPSMACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_CPSMACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_CPSMACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_TXFIFOHE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_TXFIFOHE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_TXFIFOHE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_RXFIFOHF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_RXFIFOHF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_RXFIFOHF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_TXFIFOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_TXFIFOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_TXFIFOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_RXFIFOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_RXFIFOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_RXFIFOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_TXFIFOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_TXFIFOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_TXFIFOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_RXFIFOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_RXFIFOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_RXFIFOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_BUSYD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_BUSYD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_BUSYD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_BUSYD0END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_BUSYD0END_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_BUSYD0END_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_SDIOIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_SDIOIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_SDIOIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_ACKFAIL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_ACKFAIL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_ACKFAIL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_ACKTIMEOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_ACKTIMEOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_ACKTIMEOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_VSWEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_VSWEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_VSWEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_CKSTOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_CKSTOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_CKSTOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_IDMATE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_IDMATE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_IDMATE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_STAR_IDMABTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_STAR_IDMABTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_STAR_IDMABTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_CCRCFAILC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_CCRCFAILC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_CCRCFAILC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_DCRCFAILC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_DCRCFAILC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_DCRCFAILC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_CTIMEOUTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_CTIMEOUTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_CTIMEOUTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_DTIMEOUTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_DTIMEOUTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_DTIMEOUTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_TXUNDERRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_TXUNDERRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_TXUNDERRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_RXOVERRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_RXOVERRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_RXOVERRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_CMDRENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_CMDRENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_CMDRENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_CMDSENTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_CMDSENTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_CMDSENTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_DATAENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_DATAENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_DATAENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_DHOLDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_DHOLDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_DHOLDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_DBCKENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_DBCKENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_DBCKENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_DABORTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_DABORTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_DABORTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_BUSYD0ENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_BUSYD0ENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_BUSYD0ENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_SDIOITC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_SDIOITC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_SDIOITC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_ACKFAILC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_ACKFAILC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_ACKFAILC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_ACKTIMEOUTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_ACKTIMEOUTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_ACKTIMEOUTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_VSWENDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_VSWENDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_VSWENDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_CKSTOPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_CKSTOPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_CKSTOPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_IDMATEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_IDMATEC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_IDMATEC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ICR_IDMABTCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_ICR_IDMABTCC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_ICR_IDMABTCC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_CCRCFAILIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_CCRCFAILIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_CCRCFAILIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_DCRCFAILIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_DCRCFAILIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_DCRCFAILIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_CTIMEOUTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_CTIMEOUTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_CTIMEOUTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_DTIMEOUTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_DTIMEOUTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_DTIMEOUTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_TXUNDERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_TXUNDERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_TXUNDERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_RXOVERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_RXOVERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_RXOVERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_CMDRENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_CMDRENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_CMDRENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_CMDSENTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_CMDSENTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_CMDSENTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_DATAENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_DATAENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_DATAENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_DHOLDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_DHOLDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_DHOLDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_DBCKENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_DBCKENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_DBCKENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_DABORTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_DABORTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_DABORTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_TXFIFOHEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_TXFIFOHEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_TXFIFOHEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_RXFIFOHFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_RXFIFOHFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_RXFIFOHFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_RXFIFOFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_RXFIFOFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_RXFIFOFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_TXFIFOEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_TXFIFOEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_TXFIFOEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_BUSYD0ENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_BUSYD0ENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_BUSYD0ENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_SDIOITIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_SDIOITIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_SDIOITIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_ACKFAILIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_ACKFAILIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_ACKFAILIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_ACKTIMEOUTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_ACKTIMEOUTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_ACKTIMEOUTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_VSWENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_VSWENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_VSWENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_CKSTOPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_CKSTOPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_CKSTOPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_MASKR_IDMABTCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_MASKR_IDMABTCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_MASKR_IDMABTCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_ACKTIMER_ACKTIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_IDMACTRLR_IDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_IDMACTRLR_IDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_IDMACTRLR_IDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_IDMACTRLR_IDMABMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_IDMACTRLR_IDMABMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_IDMACTRLR_IDMABMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_IDMACTRLR_IDMABACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SDMMC1_IDMACTRLR_IDMABACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SDMMC1_IDMACTRLR_IDMABACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_IDMABSIZER_IDMABNDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_IDMABASE0R_IDMABASE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_IDMABASE1R_IDMABASE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_FIFOR_FIFODATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SDMMC1_RESPCMDR_RESPCMD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SDMMC1ENUMS_HPP)
