/*******************************************************************************
* Filename      : rccregisters.hpp
*
* Details       : Reset and clock control. This header file is auto-generated
*                 for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(RCCREGISTERS_HPP)
#define RCCREGISTERS_HPP

#include "rccfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RCC
{
  struct RCCCRBase {} ;

  struct CR : public RegisterBase<0x58024400, 32, ReadWriteMode>
  {
    using HSION = RCC_CR_HSION_Values<RCC::CR, 0, 1, ReadWriteMode, RCCCRBase> ;
    using HSIKERON = RCC_CR_HSIKERON_Values<RCC::CR, 1, 1, ReadWriteMode, RCCCRBase> ;
    using HSIRDY = RCC_CR_HSIRDY_Values<RCC::CR, 2, 1, ReadWriteMode, RCCCRBase> ;
    using HSIDIV = RCC_CR_HSIDIV_Values<RCC::CR, 3, 2, ReadWriteMode, RCCCRBase> ;
    using HSIDIVF = RCC_CR_HSIDIVF_Values<RCC::CR, 5, 1, ReadWriteMode, RCCCRBase> ;
    using CSION = RCC_CR_CSION_Values<RCC::CR, 7, 1, ReadWriteMode, RCCCRBase> ;
    using CSIRDY = RCC_CR_CSIRDY_Values<RCC::CR, 8, 1, ReadWriteMode, RCCCRBase> ;
    using CSIKERON = RCC_CR_CSIKERON_Values<RCC::CR, 9, 1, ReadWriteMode, RCCCRBase> ;
    using RC48ON = RCC_CR_RC48ON_Values<RCC::CR, 12, 1, ReadWriteMode, RCCCRBase> ;
    using RC48RDY = RCC_CR_RC48RDY_Values<RCC::CR, 13, 1, ReadWriteMode, RCCCRBase> ;
    using D1CKRDY = RCC_CR_D1CKRDY_Values<RCC::CR, 14, 1, ReadWriteMode, RCCCRBase> ;
    using D2CKRDY = RCC_CR_D2CKRDY_Values<RCC::CR, 15, 1, ReadWriteMode, RCCCRBase> ;
    using HSEON = RCC_CR_HSEON_Values<RCC::CR, 16, 1, ReadWriteMode, RCCCRBase> ;
    using HSERDY = RCC_CR_HSERDY_Values<RCC::CR, 17, 1, ReadWriteMode, RCCCRBase> ;
    using HSEBYP = RCC_CR_HSEBYP_Values<RCC::CR, 18, 1, ReadWriteMode, RCCCRBase> ;
    using HSECSSON = RCC_CR_HSECSSON_Values<RCC::CR, 19, 1, ReadWriteMode, RCCCRBase> ;
    using PLL1ON = RCC_CR_PLL1ON_Values<RCC::CR, 24, 1, ReadWriteMode, RCCCRBase> ;
    using PLL1RDY = RCC_CR_PLL1RDY_Values<RCC::CR, 25, 1, ReadWriteMode, RCCCRBase> ;
    using PLL2ON = RCC_CR_PLL2ON_Values<RCC::CR, 26, 1, ReadWriteMode, RCCCRBase> ;
    using PLL2RDY = RCC_CR_PLL2RDY_Values<RCC::CR, 27, 1, ReadWriteMode, RCCCRBase> ;
    using PLL3ON = RCC_CR_PLL3ON_Values<RCC::CR, 28, 1, ReadWriteMode, RCCCRBase> ;
    using PLL3RDY = RCC_CR_PLL3RDY_Values<RCC::CR, 29, 1, ReadWriteMode, RCCCRBase> ;
    using FieldValues = RCC_CR_PLL3RDY_Values<RCC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58024400, 32, ReadWriteMode, RCCCRBase, T...> ;

  struct RCCICSCRBase {} ;

  struct ICSCR : public RegisterBase<0x58024404, 32, ReadWriteMode>
  {
    using HSICAL = RCC_ICSCR_HSICAL_Values<RCC::ICSCR, 0, 12, ReadMode, RCCICSCRBase> ;
    using HSITRIM = RCC_ICSCR_HSITRIM_Values<RCC::ICSCR, 12, 6, ReadWriteMode, RCCICSCRBase> ;
    using CSICAL = RCC_ICSCR_CSICAL_Values<RCC::ICSCR, 18, 8, ReadMode, RCCICSCRBase> ;
    using CSITRIM = RCC_ICSCR_CSITRIM_Values<RCC::ICSCR, 26, 5, ReadWriteMode, RCCICSCRBase> ;
    using FieldValues = RCC_ICSCR_CSITRIM_Values<RCC::ICSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICSCRPack  = Register<0x58024404, 32, ReadWriteMode, RCCICSCRBase, T...> ;

  struct RCCCRRCRBase {} ;

  struct CRRCR : public RegisterBase<0x58024408, 32, ReadMode>
  {
    using RC48CAL = RCC_CRRCR_RC48CAL_Values<RCC::CRRCR, 0, 10, ReadMode, RCCCRRCRBase> ;
    using FieldValues = RCC_CRRCR_RC48CAL_Values<RCC::CRRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRRCRPack  = Register<0x58024408, 32, ReadMode, RCCCRRCRBase, T...> ;

  struct RCCCFGRBase {} ;

  struct CFGR : public RegisterBase<0x58024410, 32, ReadWriteMode>
  {
    using SW = RCC_CFGR_SW_Values<RCC::CFGR, 0, 3, ReadWriteMode, RCCCFGRBase> ;
    using SWS = RCC_CFGR_SWS_Values<RCC::CFGR, 3, 3, ReadWriteMode, RCCCFGRBase> ;
    using STOPWUCK = RCC_CFGR_STOPWUCK_Values<RCC::CFGR, 6, 1, ReadWriteMode, RCCCFGRBase> ;
    using STOPKERWUCK = RCC_CFGR_STOPKERWUCK_Values<RCC::CFGR, 7, 1, ReadWriteMode, RCCCFGRBase> ;
    using RTCPRE = RCC_CFGR_RTCPRE_Values<RCC::CFGR, 8, 6, ReadWriteMode, RCCCFGRBase> ;
    using HRTIMSEL = RCC_CFGR_HRTIMSEL_Values<RCC::CFGR, 14, 1, ReadWriteMode, RCCCFGRBase> ;
    using TIMPRE = RCC_CFGR_TIMPRE_Values<RCC::CFGR, 15, 1, ReadWriteMode, RCCCFGRBase> ;
    using MCO1PRE = RCC_CFGR_MCO1PRE_Values<RCC::CFGR, 18, 4, ReadWriteMode, RCCCFGRBase> ;
    using MCO1SEL = RCC_CFGR_MCO1SEL_Values<RCC::CFGR, 22, 3, ReadWriteMode, RCCCFGRBase> ;
    using MCO2PRE = RCC_CFGR_MCO2PRE_Values<RCC::CFGR, 25, 4, ReadWriteMode, RCCCFGRBase> ;
    using MCO2SEL = RCC_CFGR_MCO2SEL_Values<RCC::CFGR, 29, 3, ReadWriteMode, RCCCFGRBase> ;
    using FieldValues = RCC_CFGR_MCO2SEL_Values<RCC::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x58024410, 32, ReadWriteMode, RCCCFGRBase, T...> ;

  struct RCCD1CFGRBase {} ;

  struct D1CFGR : public RegisterBase<0x58024418, 32, ReadWriteMode>
  {
    using HPRE = RCC_D1CFGR_HPRE_Values<RCC::D1CFGR, 0, 4, ReadWriteMode, RCCD1CFGRBase> ;
    using D1PPRE = RCC_D1CFGR_D1PPRE_Values<RCC::D1CFGR, 4, 3, ReadWriteMode, RCCD1CFGRBase> ;
    using D1CPRE = RCC_D1CFGR_D1CPRE_Values<RCC::D1CFGR, 8, 4, ReadWriteMode, RCCD1CFGRBase> ;
    using FieldValues = RCC_D1CFGR_D1CPRE_Values<RCC::D1CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D1CFGRPack  = Register<0x58024418, 32, ReadWriteMode, RCCD1CFGRBase, T...> ;

  struct RCCD2CFGRBase {} ;

  struct D2CFGR : public RegisterBase<0x5802441C, 32, ReadWriteMode>
  {
    using D2PPRE1 = RCC_D2CFGR_D2PPRE1_Values<RCC::D2CFGR, 4, 3, ReadWriteMode, RCCD2CFGRBase> ;
    using D2PPRE2 = RCC_D2CFGR_D2PPRE2_Values<RCC::D2CFGR, 8, 3, ReadWriteMode, RCCD2CFGRBase> ;
    using FieldValues = RCC_D2CFGR_D2PPRE2_Values<RCC::D2CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D2CFGRPack  = Register<0x5802441C, 32, ReadWriteMode, RCCD2CFGRBase, T...> ;

  struct RCCD3CFGRBase {} ;

  struct D3CFGR : public RegisterBase<0x58024420, 32, ReadWriteMode>
  {
    using D3PPRE = RCC_D3CFGR_D3PPRE_Values<RCC::D3CFGR, 4, 3, ReadWriteMode, RCCD3CFGRBase> ;
    using FieldValues = RCC_D3CFGR_D3PPRE_Values<RCC::D3CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3CFGRPack  = Register<0x58024420, 32, ReadWriteMode, RCCD3CFGRBase, T...> ;

  struct RCCPLLCKSELRBase {} ;

  struct PLLCKSELR : public RegisterBase<0x58024428, 32, ReadWriteMode>
  {
    using PLLSRC = RCC_PLLCKSELR_PLLSRC_Values<RCC::PLLCKSELR, 0, 2, ReadWriteMode, RCCPLLCKSELRBase> ;
    using DIVM1 = RCC_PLLCKSELR_DIVM1_Values<RCC::PLLCKSELR, 4, 6, ReadWriteMode, RCCPLLCKSELRBase> ;
    using DIVM2 = RCC_PLLCKSELR_DIVM2_Values<RCC::PLLCKSELR, 12, 6, ReadWriteMode, RCCPLLCKSELRBase> ;
    using DIVM3 = RCC_PLLCKSELR_DIVM3_Values<RCC::PLLCKSELR, 20, 6, ReadWriteMode, RCCPLLCKSELRBase> ;
    using FieldValues = RCC_PLLCKSELR_DIVM3_Values<RCC::PLLCKSELR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLLCKSELRPack  = Register<0x58024428, 32, ReadWriteMode, RCCPLLCKSELRBase, T...> ;

  struct RCCPLLCFGRBase {} ;

  struct PLLCFGR : public RegisterBase<0x5802442C, 32, ReadWriteMode>
  {
    using PLL1FRACEN = RCC_PLLCFGR_PLL1FRACEN_Values<RCC::PLLCFGR, 0, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLL1VCOSEL = RCC_PLLCFGR_PLL1VCOSEL_Values<RCC::PLLCFGR, 1, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLL1RGE = RCC_PLLCFGR_PLL1RGE_Values<RCC::PLLCFGR, 2, 2, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLL2FRACEN = RCC_PLLCFGR_PLL2FRACEN_Values<RCC::PLLCFGR, 4, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLL2VCOSEL = RCC_PLLCFGR_PLL2VCOSEL_Values<RCC::PLLCFGR, 5, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLL2RGE = RCC_PLLCFGR_PLL2RGE_Values<RCC::PLLCFGR, 6, 2, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLL3FRACEN = RCC_PLLCFGR_PLL3FRACEN_Values<RCC::PLLCFGR, 8, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLL3VCOSEL = RCC_PLLCFGR_PLL3VCOSEL_Values<RCC::PLLCFGR, 9, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLL3RGE = RCC_PLLCFGR_PLL3RGE_Values<RCC::PLLCFGR, 10, 2, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVP1EN = RCC_PLLCFGR_DIVP1EN_Values<RCC::PLLCFGR, 16, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVQ1EN = RCC_PLLCFGR_DIVQ1EN_Values<RCC::PLLCFGR, 17, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVR1EN = RCC_PLLCFGR_DIVR1EN_Values<RCC::PLLCFGR, 18, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVP2EN = RCC_PLLCFGR_DIVP2EN_Values<RCC::PLLCFGR, 19, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVQ2EN = RCC_PLLCFGR_DIVQ2EN_Values<RCC::PLLCFGR, 20, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVR2EN = RCC_PLLCFGR_DIVR2EN_Values<RCC::PLLCFGR, 21, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVP3EN = RCC_PLLCFGR_DIVP3EN_Values<RCC::PLLCFGR, 22, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVQ3EN = RCC_PLLCFGR_DIVQ3EN_Values<RCC::PLLCFGR, 23, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using DIVR3EN = RCC_PLLCFGR_DIVR3EN_Values<RCC::PLLCFGR, 24, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using FieldValues = RCC_PLLCFGR_DIVR3EN_Values<RCC::PLLCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLLCFGRPack  = Register<0x5802442C, 32, ReadWriteMode, RCCPLLCFGRBase, T...> ;

  struct RCCPLL1DIVRBase {} ;

  struct PLL1DIVR : public RegisterBase<0x58024430, 32, ReadWriteMode>
  {
    using DIVN1 = RCC_PLL1DIVR_DIVN1_Values<RCC::PLL1DIVR, 0, 9, ReadWriteMode, RCCPLL1DIVRBase> ;
    using DIVP1 = RCC_PLL1DIVR_DIVP1_Values<RCC::PLL1DIVR, 9, 7, ReadWriteMode, RCCPLL1DIVRBase> ;
    using DIVQ1 = RCC_PLL1DIVR_DIVQ1_Values<RCC::PLL1DIVR, 16, 7, ReadWriteMode, RCCPLL1DIVRBase> ;
    using DIVR1 = RCC_PLL1DIVR_DIVR1_Values<RCC::PLL1DIVR, 24, 7, ReadWriteMode, RCCPLL1DIVRBase> ;
    using FieldValues = RCC_PLL1DIVR_DIVR1_Values<RCC::PLL1DIVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLL1DIVRPack  = Register<0x58024430, 32, ReadWriteMode, RCCPLL1DIVRBase, T...> ;

  struct RCCPLL1FRACRBase {} ;

  struct PLL1FRACR : public RegisterBase<0x58024434, 32, ReadWriteMode>
  {
    using FRACN1 = RCC_PLL1FRACR_FRACN1_Values<RCC::PLL1FRACR, 3, 13, ReadWriteMode, RCCPLL1FRACRBase> ;
    using FieldValues = RCC_PLL1FRACR_FRACN1_Values<RCC::PLL1FRACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLL1FRACRPack  = Register<0x58024434, 32, ReadWriteMode, RCCPLL1FRACRBase, T...> ;

  struct RCCPLL2DIVRBase {} ;

  struct PLL2DIVR : public RegisterBase<0x58024438, 32, ReadWriteMode>
  {
    using DIVN1 = RCC_PLL2DIVR_DIVN1_Values<RCC::PLL2DIVR, 0, 9, ReadWriteMode, RCCPLL2DIVRBase> ;
    using DIVP1 = RCC_PLL2DIVR_DIVP1_Values<RCC::PLL2DIVR, 9, 7, ReadWriteMode, RCCPLL2DIVRBase> ;
    using DIVQ1 = RCC_PLL2DIVR_DIVQ1_Values<RCC::PLL2DIVR, 16, 7, ReadWriteMode, RCCPLL2DIVRBase> ;
    using DIVR1 = RCC_PLL2DIVR_DIVR1_Values<RCC::PLL2DIVR, 24, 7, ReadWriteMode, RCCPLL2DIVRBase> ;
    using FieldValues = RCC_PLL2DIVR_DIVR1_Values<RCC::PLL2DIVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLL2DIVRPack  = Register<0x58024438, 32, ReadWriteMode, RCCPLL2DIVRBase, T...> ;

  struct RCCPLL2FRACRBase {} ;

  struct PLL2FRACR : public RegisterBase<0x5802443C, 32, ReadWriteMode>
  {
    using FRACN2 = RCC_PLL2FRACR_FRACN2_Values<RCC::PLL2FRACR, 3, 13, ReadWriteMode, RCCPLL2FRACRBase> ;
    using FieldValues = RCC_PLL2FRACR_FRACN2_Values<RCC::PLL2FRACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLL2FRACRPack  = Register<0x5802443C, 32, ReadWriteMode, RCCPLL2FRACRBase, T...> ;

  struct RCCPLL3DIVRBase {} ;

  struct PLL3DIVR : public RegisterBase<0x58024440, 32, ReadWriteMode>
  {
    using DIVN3 = RCC_PLL3DIVR_DIVN3_Values<RCC::PLL3DIVR, 0, 9, ReadWriteMode, RCCPLL3DIVRBase> ;
    using DIVP3 = RCC_PLL3DIVR_DIVP3_Values<RCC::PLL3DIVR, 9, 7, ReadWriteMode, RCCPLL3DIVRBase> ;
    using DIVQ3 = RCC_PLL3DIVR_DIVQ3_Values<RCC::PLL3DIVR, 16, 7, ReadWriteMode, RCCPLL3DIVRBase> ;
    using DIVR3 = RCC_PLL3DIVR_DIVR3_Values<RCC::PLL3DIVR, 24, 7, ReadWriteMode, RCCPLL3DIVRBase> ;
    using FieldValues = RCC_PLL3DIVR_DIVR3_Values<RCC::PLL3DIVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLL3DIVRPack  = Register<0x58024440, 32, ReadWriteMode, RCCPLL3DIVRBase, T...> ;

  struct RCCPLL3FRACRBase {} ;

  struct PLL3FRACR : public RegisterBase<0x58024444, 32, ReadWriteMode>
  {
    using FRACN3 = RCC_PLL3FRACR_FRACN3_Values<RCC::PLL3FRACR, 3, 13, ReadWriteMode, RCCPLL3FRACRBase> ;
    using FieldValues = RCC_PLL3FRACR_FRACN3_Values<RCC::PLL3FRACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLL3FRACRPack  = Register<0x58024444, 32, ReadWriteMode, RCCPLL3FRACRBase, T...> ;

  struct RCCD1CCIPRBase {} ;

  struct D1CCIPR : public RegisterBase<0x5802444C, 32, ReadWriteMode>
  {
    using FMCSRC = RCC_D1CCIPR_FMCSRC_Values<RCC::D1CCIPR, 0, 2, ReadWriteMode, RCCD1CCIPRBase> ;
    using QSPISRC = RCC_D1CCIPR_QSPISRC_Values<RCC::D1CCIPR, 4, 2, ReadWriteMode, RCCD1CCIPRBase> ;
    using SDMMCSRC = RCC_D1CCIPR_SDMMCSRC_Values<RCC::D1CCIPR, 16, 1, ReadWriteMode, RCCD1CCIPRBase> ;
    using CKPERSRC = RCC_D1CCIPR_CKPERSRC_Values<RCC::D1CCIPR, 28, 2, ReadWriteMode, RCCD1CCIPRBase> ;
    using FieldValues = RCC_D1CCIPR_CKPERSRC_Values<RCC::D1CCIPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D1CCIPRPack  = Register<0x5802444C, 32, ReadWriteMode, RCCD1CCIPRBase, T...> ;

  struct RCCD2CCIP1RBase {} ;

  struct D2CCIP1R : public RegisterBase<0x58024450, 32, ReadWriteMode>
  {
    using SAI1SRC = RCC_D2CCIP1R_SAI1SRC_Values<RCC::D2CCIP1R, 0, 3, ReadWriteMode, RCCD2CCIP1RBase> ;
    using SAI23SRC = RCC_D2CCIP1R_SAI23SRC_Values<RCC::D2CCIP1R, 6, 3, ReadWriteMode, RCCD2CCIP1RBase> ;
    using SPI123SRC = RCC_D2CCIP1R_SPI123SRC_Values<RCC::D2CCIP1R, 12, 3, ReadWriteMode, RCCD2CCIP1RBase> ;
    using SPI45SRC = RCC_D2CCIP1R_SPI45SRC_Values<RCC::D2CCIP1R, 16, 3, ReadWriteMode, RCCD2CCIP1RBase> ;
    using SPDIFSRC = RCC_D2CCIP1R_SPDIFSRC_Values<RCC::D2CCIP1R, 20, 2, ReadWriteMode, RCCD2CCIP1RBase> ;
    using DFSDM1SRC = RCC_D2CCIP1R_DFSDM1SRC_Values<RCC::D2CCIP1R, 24, 1, ReadWriteMode, RCCD2CCIP1RBase> ;
    using FDCANSRC = RCC_D2CCIP1R_FDCANSRC_Values<RCC::D2CCIP1R, 28, 2, ReadWriteMode, RCCD2CCIP1RBase> ;
    using SWPSRC = RCC_D2CCIP1R_SWPSRC_Values<RCC::D2CCIP1R, 31, 1, ReadWriteMode, RCCD2CCIP1RBase> ;
    using FieldValues = RCC_D2CCIP1R_SWPSRC_Values<RCC::D2CCIP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D2CCIP1RPack  = Register<0x58024450, 32, ReadWriteMode, RCCD2CCIP1RBase, T...> ;

  struct RCCD2CCIP2RBase {} ;

  struct D2CCIP2R : public RegisterBase<0x58024454, 32, ReadWriteMode>
  {
    using USART234578SRC = RCC_D2CCIP2R_USART234578SRC_Values<RCC::D2CCIP2R, 0, 3, ReadWriteMode, RCCD2CCIP2RBase> ;
    using USART16SRC = RCC_D2CCIP2R_USART16SRC_Values<RCC::D2CCIP2R, 3, 3, ReadWriteMode, RCCD2CCIP2RBase> ;
    using RNGSRC = RCC_D2CCIP2R_RNGSRC_Values<RCC::D2CCIP2R, 8, 2, ReadWriteMode, RCCD2CCIP2RBase> ;
    using I2C123SRC = RCC_D2CCIP2R_I2C123SRC_Values<RCC::D2CCIP2R, 12, 2, ReadWriteMode, RCCD2CCIP2RBase> ;
    using USBSRC = RCC_D2CCIP2R_USBSRC_Values<RCC::D2CCIP2R, 20, 2, ReadWriteMode, RCCD2CCIP2RBase> ;
    using CECSRC = RCC_D2CCIP2R_CECSRC_Values<RCC::D2CCIP2R, 22, 2, ReadWriteMode, RCCD2CCIP2RBase> ;
    using LPTIM1SRC = RCC_D2CCIP2R_LPTIM1SRC_Values<RCC::D2CCIP2R, 28, 3, ReadWriteMode, RCCD2CCIP2RBase> ;
    using FieldValues = RCC_D2CCIP2R_LPTIM1SRC_Values<RCC::D2CCIP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D2CCIP2RPack  = Register<0x58024454, 32, ReadWriteMode, RCCD2CCIP2RBase, T...> ;

  struct RCCD3CCIPRBase {} ;

  struct D3CCIPR : public RegisterBase<0x58024458, 32, ReadWriteMode>
  {
    using LPUART1SRC = RCC_D3CCIPR_LPUART1SRC_Values<RCC::D3CCIPR, 0, 3, ReadWriteMode, RCCD3CCIPRBase> ;
    using I2C4SRC = RCC_D3CCIPR_I2C4SRC_Values<RCC::D3CCIPR, 8, 2, ReadWriteMode, RCCD3CCIPRBase> ;
    using LPTIM2SRC = RCC_D3CCIPR_LPTIM2SRC_Values<RCC::D3CCIPR, 10, 3, ReadWriteMode, RCCD3CCIPRBase> ;
    using LPTIM345SRC = RCC_D3CCIPR_LPTIM345SRC_Values<RCC::D3CCIPR, 13, 3, ReadWriteMode, RCCD3CCIPRBase> ;
    using ADCSRC = RCC_D3CCIPR_ADCSRC_Values<RCC::D3CCIPR, 16, 2, ReadWriteMode, RCCD3CCIPRBase> ;
    using SAI4ASRC = RCC_D3CCIPR_SAI4ASRC_Values<RCC::D3CCIPR, 21, 3, ReadWriteMode, RCCD3CCIPRBase> ;
    using SAI4BSRC = RCC_D3CCIPR_SAI4BSRC_Values<RCC::D3CCIPR, 24, 3, ReadWriteMode, RCCD3CCIPRBase> ;
    using SPI6SRC = RCC_D3CCIPR_SPI6SRC_Values<RCC::D3CCIPR, 28, 3, ReadWriteMode, RCCD3CCIPRBase> ;
    using FieldValues = RCC_D3CCIPR_SPI6SRC_Values<RCC::D3CCIPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3CCIPRPack  = Register<0x58024458, 32, ReadWriteMode, RCCD3CCIPRBase, T...> ;

  struct RCCCIERBase {} ;

  struct CIER : public RegisterBase<0x58024460, 32, ReadWriteMode>
  {
    using LSIRDYIE = RCC_CIER_LSIRDYIE_Values<RCC::CIER, 0, 1, ReadWriteMode, RCCCIERBase> ;
    using LSERDYIE = RCC_CIER_LSERDYIE_Values<RCC::CIER, 1, 1, ReadWriteMode, RCCCIERBase> ;
    using HSIRDYIE = RCC_CIER_HSIRDYIE_Values<RCC::CIER, 2, 1, ReadWriteMode, RCCCIERBase> ;
    using HSERDYIE = RCC_CIER_HSERDYIE_Values<RCC::CIER, 3, 1, ReadWriteMode, RCCCIERBase> ;
    using CSIRDYIE = RCC_CIER_CSIRDYIE_Values<RCC::CIER, 4, 1, ReadWriteMode, RCCCIERBase> ;
    using RC48RDYIE = RCC_CIER_RC48RDYIE_Values<RCC::CIER, 5, 1, ReadWriteMode, RCCCIERBase> ;
    using PLL1RDYIE = RCC_CIER_PLL1RDYIE_Values<RCC::CIER, 6, 1, ReadWriteMode, RCCCIERBase> ;
    using PLL2RDYIE = RCC_CIER_PLL2RDYIE_Values<RCC::CIER, 7, 1, ReadWriteMode, RCCCIERBase> ;
    using PLL3RDYIE = RCC_CIER_PLL3RDYIE_Values<RCC::CIER, 8, 1, ReadWriteMode, RCCCIERBase> ;
    using LSECSSIE = RCC_CIER_LSECSSIE_Values<RCC::CIER, 9, 1, ReadWriteMode, RCCCIERBase> ;
    using FieldValues = RCC_CIER_LSECSSIE_Values<RCC::CIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CIERPack  = Register<0x58024460, 32, ReadWriteMode, RCCCIERBase, T...> ;

  struct RCCCIFRBase {} ;

  struct CIFR : public RegisterBase<0x58024464, 32, ReadWriteMode>
  {
    using LSIRDYF = RCC_CIFR_LSIRDYF_Values<RCC::CIFR, 0, 1, ReadWriteMode, RCCCIFRBase> ;
    using LSERDYF = RCC_CIFR_LSERDYF_Values<RCC::CIFR, 1, 1, ReadWriteMode, RCCCIFRBase> ;
    using HSIRDYF = RCC_CIFR_HSIRDYF_Values<RCC::CIFR, 2, 1, ReadWriteMode, RCCCIFRBase> ;
    using HSERDYF = RCC_CIFR_HSERDYF_Values<RCC::CIFR, 3, 1, ReadWriteMode, RCCCIFRBase> ;
    using CSIRDY = RCC_CIFR_CSIRDY_Values<RCC::CIFR, 4, 1, ReadWriteMode, RCCCIFRBase> ;
    using RC48RDYF = RCC_CIFR_RC48RDYF_Values<RCC::CIFR, 5, 1, ReadWriteMode, RCCCIFRBase> ;
    using PLL1RDYF = RCC_CIFR_PLL1RDYF_Values<RCC::CIFR, 6, 1, ReadWriteMode, RCCCIFRBase> ;
    using PLL2RDYF = RCC_CIFR_PLL2RDYF_Values<RCC::CIFR, 7, 1, ReadWriteMode, RCCCIFRBase> ;
    using PLL3RDYF = RCC_CIFR_PLL3RDYF_Values<RCC::CIFR, 8, 1, ReadWriteMode, RCCCIFRBase> ;
    using LSECSSF = RCC_CIFR_LSECSSF_Values<RCC::CIFR, 9, 1, ReadWriteMode, RCCCIFRBase> ;
    using HSECSSF = RCC_CIFR_HSECSSF_Values<RCC::CIFR, 10, 1, ReadWriteMode, RCCCIFRBase> ;
    using FieldValues = RCC_CIFR_HSECSSF_Values<RCC::CIFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CIFRPack  = Register<0x58024464, 32, ReadWriteMode, RCCCIFRBase, T...> ;

  struct RCCCICRBase {} ;

  struct CICR : public RegisterBase<0x58024468, 32, ReadWriteMode>
  {
    using LSIRDYC = RCC_CICR_LSIRDYC_Values<RCC::CICR, 0, 1, ReadWriteMode, RCCCICRBase> ;
    using LSERDYC = RCC_CICR_LSERDYC_Values<RCC::CICR, 1, 1, ReadWriteMode, RCCCICRBase> ;
    using HSIRDYC = RCC_CICR_HSIRDYC_Values<RCC::CICR, 2, 1, ReadWriteMode, RCCCICRBase> ;
    using HSERDYC = RCC_CICR_HSERDYC_Values<RCC::CICR, 3, 1, ReadWriteMode, RCCCICRBase> ;
    using HSE_ready_Interrupt_Clear = RCC_CICR_HSE_ready_Interrupt_Clear_Values<RCC::CICR, 4, 1, ReadWriteMode, RCCCICRBase> ;
    using RC48RDYC = RCC_CICR_RC48RDYC_Values<RCC::CICR, 5, 1, ReadWriteMode, RCCCICRBase> ;
    using PLL1RDYC = RCC_CICR_PLL1RDYC_Values<RCC::CICR, 6, 1, ReadWriteMode, RCCCICRBase> ;
    using PLL2RDYC = RCC_CICR_PLL2RDYC_Values<RCC::CICR, 7, 1, ReadWriteMode, RCCCICRBase> ;
    using PLL3RDYC = RCC_CICR_PLL3RDYC_Values<RCC::CICR, 8, 1, ReadWriteMode, RCCCICRBase> ;
    using LSECSSC = RCC_CICR_LSECSSC_Values<RCC::CICR, 9, 1, ReadWriteMode, RCCCICRBase> ;
    using HSECSSC = RCC_CICR_HSECSSC_Values<RCC::CICR, 10, 1, ReadWriteMode, RCCCICRBase> ;
    using FieldValues = RCC_CICR_HSECSSC_Values<RCC::CICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CICRPack  = Register<0x58024468, 32, ReadWriteMode, RCCCICRBase, T...> ;

  struct RCCBDCRBase {} ;

  struct BDCR : public RegisterBase<0x58024470, 32, ReadWriteMode>
  {
    using LSEON = RCC_BDCR_LSEON_Values<RCC::BDCR, 0, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSERDY = RCC_BDCR_LSERDY_Values<RCC::BDCR, 1, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSEBYP = RCC_BDCR_LSEBYP_Values<RCC::BDCR, 2, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSEDRV = RCC_BDCR_LSEDRV_Values<RCC::BDCR, 3, 2, ReadWriteMode, RCCBDCRBase> ;
    using LSECSSON = RCC_BDCR_LSECSSON_Values<RCC::BDCR, 5, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSECSSD = RCC_BDCR_LSECSSD_Values<RCC::BDCR, 6, 1, ReadWriteMode, RCCBDCRBase> ;
    using RTCSRC = RCC_BDCR_RTCSRC_Values<RCC::BDCR, 8, 2, ReadWriteMode, RCCBDCRBase> ;
    using RTCEN = RCC_BDCR_RTCEN_Values<RCC::BDCR, 15, 1, ReadWriteMode, RCCBDCRBase> ;
    using VSWRST = RCC_BDCR_VSWRST_Values<RCC::BDCR, 16, 1, ReadWriteMode, RCCBDCRBase> ;
    using FieldValues = RCC_BDCR_VSWRST_Values<RCC::BDCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDCRPack  = Register<0x58024470, 32, ReadWriteMode, RCCBDCRBase, T...> ;

  struct RCCCSRBase {} ;

  struct CSR : public RegisterBase<0x58024474, 32, ReadWriteMode>
  {
    using LSION = RCC_CSR_LSION_Values<RCC::CSR, 0, 1, ReadWriteMode, RCCCSRBase> ;
    using LSIRDY = RCC_CSR_LSIRDY_Values<RCC::CSR, 1, 1, ReadWriteMode, RCCCSRBase> ;
    using FieldValues = RCC_CSR_LSIRDY_Values<RCC::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x58024474, 32, ReadWriteMode, RCCCSRBase, T...> ;

  struct RCCAHB3RSTRBase {} ;

  struct AHB3RSTR : public RegisterBase<0x5802447C, 32, ReadWriteMode>
  {
    using MDMARST = RCC_AHB3RSTR_MDMARST_Values<RCC::AHB3RSTR, 0, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using DMA2DRST = RCC_AHB3RSTR_DMA2DRST_Values<RCC::AHB3RSTR, 4, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using JPGDECRST = RCC_AHB3RSTR_JPGDECRST_Values<RCC::AHB3RSTR, 5, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using FMCRST = RCC_AHB3RSTR_FMCRST_Values<RCC::AHB3RSTR, 12, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using QSPIRST = RCC_AHB3RSTR_QSPIRST_Values<RCC::AHB3RSTR, 14, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using SDMMC1RST = RCC_AHB3RSTR_SDMMC1RST_Values<RCC::AHB3RSTR, 16, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using CPURST = RCC_AHB3RSTR_CPURST_Values<RCC::AHB3RSTR, 31, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using FieldValues = RCC_AHB3RSTR_CPURST_Values<RCC::AHB3RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3RSTRPack  = Register<0x5802447C, 32, ReadWriteMode, RCCAHB3RSTRBase, T...> ;

  struct RCCAHB1RSTRBase {} ;

  struct AHB1RSTR : public RegisterBase<0x58024480, 32, ReadWriteMode>
  {
    using DMA1RST = RCC_AHB1RSTR_DMA1RST_Values<RCC::AHB1RSTR, 0, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using DMA2RST = RCC_AHB1RSTR_DMA2RST_Values<RCC::AHB1RSTR, 1, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using ADC12RST = RCC_AHB1RSTR_ADC12RST_Values<RCC::AHB1RSTR, 5, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using ETH1MACRST = RCC_AHB1RSTR_ETH1MACRST_Values<RCC::AHB1RSTR, 15, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using USB1OTGRST = RCC_AHB1RSTR_USB1OTGRST_Values<RCC::AHB1RSTR, 25, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using USB2OTGRST = RCC_AHB1RSTR_USB2OTGRST_Values<RCC::AHB1RSTR, 27, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using FieldValues = RCC_AHB1RSTR_USB2OTGRST_Values<RCC::AHB1RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1RSTRPack  = Register<0x58024480, 32, ReadWriteMode, RCCAHB1RSTRBase, T...> ;

  struct RCCAHB2RSTRBase {} ;

  struct AHB2RSTR : public RegisterBase<0x58024484, 32, ReadWriteMode>
  {
    using CAMITFRST = RCC_AHB2RSTR_CAMITFRST_Values<RCC::AHB2RSTR, 0, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using CRYPTRST = RCC_AHB2RSTR_CRYPTRST_Values<RCC::AHB2RSTR, 4, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using HASHRST = RCC_AHB2RSTR_HASHRST_Values<RCC::AHB2RSTR, 5, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using RNGRST = RCC_AHB2RSTR_RNGRST_Values<RCC::AHB2RSTR, 6, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using SDMMC2RST = RCC_AHB2RSTR_SDMMC2RST_Values<RCC::AHB2RSTR, 9, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using FieldValues = RCC_AHB2RSTR_SDMMC2RST_Values<RCC::AHB2RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2RSTRPack  = Register<0x58024484, 32, ReadWriteMode, RCCAHB2RSTRBase, T...> ;

  struct RCCAHB4RSTRBase {} ;

  struct AHB4RSTR : public RegisterBase<0x58024488, 32, ReadWriteMode>
  {
    using GPIOARST = RCC_AHB4RSTR_GPIOARST_Values<RCC::AHB4RSTR, 0, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOBRST = RCC_AHB4RSTR_GPIOBRST_Values<RCC::AHB4RSTR, 1, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOCRST = RCC_AHB4RSTR_GPIOCRST_Values<RCC::AHB4RSTR, 2, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIODRST = RCC_AHB4RSTR_GPIODRST_Values<RCC::AHB4RSTR, 3, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOERST = RCC_AHB4RSTR_GPIOERST_Values<RCC::AHB4RSTR, 4, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOFRST = RCC_AHB4RSTR_GPIOFRST_Values<RCC::AHB4RSTR, 5, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOGRST = RCC_AHB4RSTR_GPIOGRST_Values<RCC::AHB4RSTR, 6, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOHRST = RCC_AHB4RSTR_GPIOHRST_Values<RCC::AHB4RSTR, 7, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOIRST = RCC_AHB4RSTR_GPIOIRST_Values<RCC::AHB4RSTR, 8, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOJRST = RCC_AHB4RSTR_GPIOJRST_Values<RCC::AHB4RSTR, 9, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using GPIOKRST = RCC_AHB4RSTR_GPIOKRST_Values<RCC::AHB4RSTR, 10, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using CRCRST = RCC_AHB4RSTR_CRCRST_Values<RCC::AHB4RSTR, 19, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using BDMARST = RCC_AHB4RSTR_BDMARST_Values<RCC::AHB4RSTR, 21, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using ADC3RST = RCC_AHB4RSTR_ADC3RST_Values<RCC::AHB4RSTR, 24, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using HSEMRST = RCC_AHB4RSTR_HSEMRST_Values<RCC::AHB4RSTR, 25, 1, ReadWriteMode, RCCAHB4RSTRBase> ;
    using FieldValues = RCC_AHB4RSTR_HSEMRST_Values<RCC::AHB4RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB4RSTRPack  = Register<0x58024488, 32, ReadWriteMode, RCCAHB4RSTRBase, T...> ;

  struct RCCAPB3RSTRBase {} ;

  struct APB3RSTR : public RegisterBase<0x5802448C, 32, ReadWriteMode>
  {
    using LTDCRST = RCC_APB3RSTR_LTDCRST_Values<RCC::APB3RSTR, 3, 1, ReadWriteMode, RCCAPB3RSTRBase> ;
    using FieldValues = RCC_APB3RSTR_LTDCRST_Values<RCC::APB3RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB3RSTRPack  = Register<0x5802448C, 32, ReadWriteMode, RCCAPB3RSTRBase, T...> ;

  struct RCCAPB1LRSTRBase {} ;

  struct APB1LRSTR : public RegisterBase<0x58024490, 32, ReadWriteMode>
  {
    using TIM2RST = RCC_APB1LRSTR_TIM2RST_Values<RCC::APB1LRSTR, 0, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using TIM3RST = RCC_APB1LRSTR_TIM3RST_Values<RCC::APB1LRSTR, 1, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using TIM4RST = RCC_APB1LRSTR_TIM4RST_Values<RCC::APB1LRSTR, 2, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using TIM5RST = RCC_APB1LRSTR_TIM5RST_Values<RCC::APB1LRSTR, 3, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using TIM6RST = RCC_APB1LRSTR_TIM6RST_Values<RCC::APB1LRSTR, 4, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using TIM7RST = RCC_APB1LRSTR_TIM7RST_Values<RCC::APB1LRSTR, 5, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using TIM12RST = RCC_APB1LRSTR_TIM12RST_Values<RCC::APB1LRSTR, 6, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using TIM13RST = RCC_APB1LRSTR_TIM13RST_Values<RCC::APB1LRSTR, 7, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using TIM14RST = RCC_APB1LRSTR_TIM14RST_Values<RCC::APB1LRSTR, 8, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using LPTIM1RST = RCC_APB1LRSTR_LPTIM1RST_Values<RCC::APB1LRSTR, 9, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using SPI2RST = RCC_APB1LRSTR_SPI2RST_Values<RCC::APB1LRSTR, 14, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using SPI3RST = RCC_APB1LRSTR_SPI3RST_Values<RCC::APB1LRSTR, 15, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using SPDIFRXRST = RCC_APB1LRSTR_SPDIFRXRST_Values<RCC::APB1LRSTR, 16, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using USART2RST = RCC_APB1LRSTR_USART2RST_Values<RCC::APB1LRSTR, 17, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using USART3RST = RCC_APB1LRSTR_USART3RST_Values<RCC::APB1LRSTR, 18, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using UART4RST = RCC_APB1LRSTR_UART4RST_Values<RCC::APB1LRSTR, 19, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using UART5RST = RCC_APB1LRSTR_UART5RST_Values<RCC::APB1LRSTR, 20, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using I2C1RST = RCC_APB1LRSTR_I2C1RST_Values<RCC::APB1LRSTR, 21, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using I2C2RST = RCC_APB1LRSTR_I2C2RST_Values<RCC::APB1LRSTR, 22, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using I2C3RST = RCC_APB1LRSTR_I2C3RST_Values<RCC::APB1LRSTR, 23, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using HDMICECRST = RCC_APB1LRSTR_HDMICECRST_Values<RCC::APB1LRSTR, 27, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using DAC12RST = RCC_APB1LRSTR_DAC12RST_Values<RCC::APB1LRSTR, 29, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using USART7RST = RCC_APB1LRSTR_USART7RST_Values<RCC::APB1LRSTR, 30, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using USART8RST = RCC_APB1LRSTR_USART8RST_Values<RCC::APB1LRSTR, 31, 1, ReadWriteMode, RCCAPB1LRSTRBase> ;
    using FieldValues = RCC_APB1LRSTR_USART8RST_Values<RCC::APB1LRSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1LRSTRPack  = Register<0x58024490, 32, ReadWriteMode, RCCAPB1LRSTRBase, T...> ;

  struct RCCAPB1HRSTRBase {} ;

  struct APB1HRSTR : public RegisterBase<0x58024494, 32, ReadWriteMode>
  {
    using CRSRST = RCC_APB1HRSTR_CRSRST_Values<RCC::APB1HRSTR, 1, 1, ReadWriteMode, RCCAPB1HRSTRBase> ;
    using SWPRST = RCC_APB1HRSTR_SWPRST_Values<RCC::APB1HRSTR, 2, 1, ReadWriteMode, RCCAPB1HRSTRBase> ;
    using OPAMPRST = RCC_APB1HRSTR_OPAMPRST_Values<RCC::APB1HRSTR, 4, 1, ReadWriteMode, RCCAPB1HRSTRBase> ;
    using MDIOSRST = RCC_APB1HRSTR_MDIOSRST_Values<RCC::APB1HRSTR, 5, 1, ReadWriteMode, RCCAPB1HRSTRBase> ;
    using FDCANRST = RCC_APB1HRSTR_FDCANRST_Values<RCC::APB1HRSTR, 8, 1, ReadWriteMode, RCCAPB1HRSTRBase> ;
    using FieldValues = RCC_APB1HRSTR_FDCANRST_Values<RCC::APB1HRSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1HRSTRPack  = Register<0x58024494, 32, ReadWriteMode, RCCAPB1HRSTRBase, T...> ;

  struct RCCAPB2RSTRBase {} ;

  struct APB2RSTR : public RegisterBase<0x58024498, 32, ReadWriteMode>
  {
    using TIM1RST = RCC_APB2RSTR_TIM1RST_Values<RCC::APB2RSTR, 0, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM8RST = RCC_APB2RSTR_TIM8RST_Values<RCC::APB2RSTR, 1, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using USART1RST = RCC_APB2RSTR_USART1RST_Values<RCC::APB2RSTR, 4, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using USART6RST = RCC_APB2RSTR_USART6RST_Values<RCC::APB2RSTR, 5, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SPI1RST = RCC_APB2RSTR_SPI1RST_Values<RCC::APB2RSTR, 12, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SPI4RST = RCC_APB2RSTR_SPI4RST_Values<RCC::APB2RSTR, 13, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM15RST = RCC_APB2RSTR_TIM15RST_Values<RCC::APB2RSTR, 16, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM16RST = RCC_APB2RSTR_TIM16RST_Values<RCC::APB2RSTR, 17, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM17RST = RCC_APB2RSTR_TIM17RST_Values<RCC::APB2RSTR, 18, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SPI5RST = RCC_APB2RSTR_SPI5RST_Values<RCC::APB2RSTR, 20, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SAI1RST = RCC_APB2RSTR_SAI1RST_Values<RCC::APB2RSTR, 22, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SAI2RST = RCC_APB2RSTR_SAI2RST_Values<RCC::APB2RSTR, 23, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SAI3RST = RCC_APB2RSTR_SAI3RST_Values<RCC::APB2RSTR, 24, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using DFSDM1RST = RCC_APB2RSTR_DFSDM1RST_Values<RCC::APB2RSTR, 28, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using HRTIMRST = RCC_APB2RSTR_HRTIMRST_Values<RCC::APB2RSTR, 29, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using FieldValues = RCC_APB2RSTR_HRTIMRST_Values<RCC::APB2RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2RSTRPack  = Register<0x58024498, 32, ReadWriteMode, RCCAPB2RSTRBase, T...> ;

  struct RCCAPB4RSTRBase {} ;

  struct APB4RSTR : public RegisterBase<0x5802449C, 32, ReadWriteMode>
  {
    using SYSCFGRST = RCC_APB4RSTR_SYSCFGRST_Values<RCC::APB4RSTR, 1, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using LPUART1RST = RCC_APB4RSTR_LPUART1RST_Values<RCC::APB4RSTR, 3, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using SPI6RST = RCC_APB4RSTR_SPI6RST_Values<RCC::APB4RSTR, 5, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using I2C4RST = RCC_APB4RSTR_I2C4RST_Values<RCC::APB4RSTR, 7, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using LPTIM2RST = RCC_APB4RSTR_LPTIM2RST_Values<RCC::APB4RSTR, 9, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using LPTIM3RST = RCC_APB4RSTR_LPTIM3RST_Values<RCC::APB4RSTR, 10, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using LPTIM4RST = RCC_APB4RSTR_LPTIM4RST_Values<RCC::APB4RSTR, 11, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using LPTIM5RST = RCC_APB4RSTR_LPTIM5RST_Values<RCC::APB4RSTR, 12, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using COMP12RST = RCC_APB4RSTR_COMP12RST_Values<RCC::APB4RSTR, 14, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using VREFRST = RCC_APB4RSTR_VREFRST_Values<RCC::APB4RSTR, 15, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using SAI4RST = RCC_APB4RSTR_SAI4RST_Values<RCC::APB4RSTR, 21, 1, ReadWriteMode, RCCAPB4RSTRBase> ;
    using FieldValues = RCC_APB4RSTR_SAI4RST_Values<RCC::APB4RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB4RSTRPack  = Register<0x5802449C, 32, ReadWriteMode, RCCAPB4RSTRBase, T...> ;

  struct RCCGCRBase {} ;

  struct GCR : public RegisterBase<0x580244A0, 32, ReadWriteMode>
  {
    using WW1RSC = RCC_GCR_WW1RSC_Values<RCC::GCR, 0, 1, ReadWriteMode, RCCGCRBase> ;
    using FieldValues = RCC_GCR_WW1RSC_Values<RCC::GCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GCRPack  = Register<0x580244A0, 32, ReadWriteMode, RCCGCRBase, T...> ;

  struct RCCD3AMRBase {} ;

  struct D3AMR : public RegisterBase<0x580244A8, 32, ReadWriteMode>
  {
    using BDMAAMEN = RCC_D3AMR_BDMAAMEN_Values<RCC::D3AMR, 0, 1, ReadWriteMode, RCCD3AMRBase> ;
    using LPUART1AMEN = RCC_D3AMR_LPUART1AMEN_Values<RCC::D3AMR, 3, 1, ReadWriteMode, RCCD3AMRBase> ;
    using SPI6AMEN = RCC_D3AMR_SPI6AMEN_Values<RCC::D3AMR, 5, 1, ReadWriteMode, RCCD3AMRBase> ;
    using I2C4AMEN = RCC_D3AMR_I2C4AMEN_Values<RCC::D3AMR, 7, 1, ReadWriteMode, RCCD3AMRBase> ;
    using LPTIM2AMEN = RCC_D3AMR_LPTIM2AMEN_Values<RCC::D3AMR, 9, 1, ReadWriteMode, RCCD3AMRBase> ;
    using LPTIM3AMEN = RCC_D3AMR_LPTIM3AMEN_Values<RCC::D3AMR, 10, 1, ReadWriteMode, RCCD3AMRBase> ;
    using LPTIM4AMEN = RCC_D3AMR_LPTIM4AMEN_Values<RCC::D3AMR, 11, 1, ReadWriteMode, RCCD3AMRBase> ;
    using LPTIM5AMEN = RCC_D3AMR_LPTIM5AMEN_Values<RCC::D3AMR, 12, 1, ReadWriteMode, RCCD3AMRBase> ;
    using COMP12AMEN = RCC_D3AMR_COMP12AMEN_Values<RCC::D3AMR, 14, 1, ReadWriteMode, RCCD3AMRBase> ;
    using VREFAMEN = RCC_D3AMR_VREFAMEN_Values<RCC::D3AMR, 15, 1, ReadWriteMode, RCCD3AMRBase> ;
    using RTCAMEN = RCC_D3AMR_RTCAMEN_Values<RCC::D3AMR, 16, 1, ReadWriteMode, RCCD3AMRBase> ;
    using CRCAMEN = RCC_D3AMR_CRCAMEN_Values<RCC::D3AMR, 19, 1, ReadWriteMode, RCCD3AMRBase> ;
    using SAI4AMEN = RCC_D3AMR_SAI4AMEN_Values<RCC::D3AMR, 21, 1, ReadWriteMode, RCCD3AMRBase> ;
    using ADC3AMEN = RCC_D3AMR_ADC3AMEN_Values<RCC::D3AMR, 24, 1, ReadWriteMode, RCCD3AMRBase> ;
    using BKPSRAMAMEN = RCC_D3AMR_BKPSRAMAMEN_Values<RCC::D3AMR, 28, 1, ReadWriteMode, RCCD3AMRBase> ;
    using SRAM4AMEN = RCC_D3AMR_SRAM4AMEN_Values<RCC::D3AMR, 29, 1, ReadWriteMode, RCCD3AMRBase> ;
    using FieldValues = RCC_D3AMR_SRAM4AMEN_Values<RCC::D3AMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3AMRPack  = Register<0x580244A8, 32, ReadWriteMode, RCCD3AMRBase, T...> ;

  struct RCCRSRBase {} ;

  struct RSR : public RegisterBase<0x580244D0, 32, ReadWriteMode>
  {
    using RMVF = RCC_RSR_RMVF_Values<RCC::RSR, 16, 1, ReadWriteMode, RCCRSRBase> ;
    using CPURSTF = RCC_RSR_CPURSTF_Values<RCC::RSR, 17, 1, ReadWriteMode, RCCRSRBase> ;
    using D1RSTF = RCC_RSR_D1RSTF_Values<RCC::RSR, 19, 1, ReadWriteMode, RCCRSRBase> ;
    using D2RSTF = RCC_RSR_D2RSTF_Values<RCC::RSR, 20, 1, ReadWriteMode, RCCRSRBase> ;
    using BORRSTF = RCC_RSR_BORRSTF_Values<RCC::RSR, 21, 1, ReadWriteMode, RCCRSRBase> ;
    using PINRSTF = RCC_RSR_PINRSTF_Values<RCC::RSR, 22, 1, ReadWriteMode, RCCRSRBase> ;
    using PORRSTF = RCC_RSR_PORRSTF_Values<RCC::RSR, 23, 1, ReadWriteMode, RCCRSRBase> ;
    using SFTRSTF = RCC_RSR_SFTRSTF_Values<RCC::RSR, 24, 1, ReadWriteMode, RCCRSRBase> ;
    using IWDG1RSTF = RCC_RSR_IWDG1RSTF_Values<RCC::RSR, 26, 1, ReadWriteMode, RCCRSRBase> ;
    using WWDG1RSTF = RCC_RSR_WWDG1RSTF_Values<RCC::RSR, 28, 1, ReadWriteMode, RCCRSRBase> ;
    using LPWRRSTF = RCC_RSR_LPWRRSTF_Values<RCC::RSR, 30, 1, ReadWriteMode, RCCRSRBase> ;
    using FieldValues = RCC_RSR_LPWRRSTF_Values<RCC::RSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RSRPack  = Register<0x580244D0, 32, ReadWriteMode, RCCRSRBase, T...> ;

  struct RCCC1_RSRBase {} ;

  struct C1_RSR : public RegisterBase<0x58024530, 32, ReadWriteMode>
  {
    using RMVF = RCC_C1_RSR_RMVF_Values<RCC::C1_RSR, 16, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using CPURSTF = RCC_C1_RSR_CPURSTF_Values<RCC::C1_RSR, 17, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using D1RSTF = RCC_C1_RSR_D1RSTF_Values<RCC::C1_RSR, 19, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using D2RSTF = RCC_C1_RSR_D2RSTF_Values<RCC::C1_RSR, 20, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using BORRSTF = RCC_C1_RSR_BORRSTF_Values<RCC::C1_RSR, 21, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using PINRSTF = RCC_C1_RSR_PINRSTF_Values<RCC::C1_RSR, 22, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using PORRSTF = RCC_C1_RSR_PORRSTF_Values<RCC::C1_RSR, 23, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using SFTRSTF = RCC_C1_RSR_SFTRSTF_Values<RCC::C1_RSR, 24, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using IWDG1RSTF = RCC_C1_RSR_IWDG1RSTF_Values<RCC::C1_RSR, 26, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using WWDG1RSTF = RCC_C1_RSR_WWDG1RSTF_Values<RCC::C1_RSR, 28, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using LPWRRSTF = RCC_C1_RSR_LPWRRSTF_Values<RCC::C1_RSR, 30, 1, ReadWriteMode, RCCC1_RSRBase> ;
    using FieldValues = RCC_C1_RSR_LPWRRSTF_Values<RCC::C1_RSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_RSRPack  = Register<0x58024530, 32, ReadWriteMode, RCCC1_RSRBase, T...> ;

  struct RCCC1_AHB3ENRBase {} ;

  struct C1_AHB3ENR : public RegisterBase<0x58024534, 32, ReadWriteMode>
  {
    using MDMAEN = RCC_C1_AHB3ENR_MDMAEN_Values<RCC::C1_AHB3ENR, 0, 1, ReadWriteMode, RCCC1_AHB3ENRBase> ;
    using DMA2DEN = RCC_C1_AHB3ENR_DMA2DEN_Values<RCC::C1_AHB3ENR, 4, 1, ReadWriteMode, RCCC1_AHB3ENRBase> ;
    using JPGDECEN = RCC_C1_AHB3ENR_JPGDECEN_Values<RCC::C1_AHB3ENR, 5, 1, ReadWriteMode, RCCC1_AHB3ENRBase> ;
    using FMCEN = RCC_C1_AHB3ENR_FMCEN_Values<RCC::C1_AHB3ENR, 12, 1, ReadWriteMode, RCCC1_AHB3ENRBase> ;
    using QSPIEN = RCC_C1_AHB3ENR_QSPIEN_Values<RCC::C1_AHB3ENR, 14, 1, ReadWriteMode, RCCC1_AHB3ENRBase> ;
    using SDMMC1EN = RCC_C1_AHB3ENR_SDMMC1EN_Values<RCC::C1_AHB3ENR, 16, 1, ReadWriteMode, RCCC1_AHB3ENRBase> ;
    using FieldValues = RCC_C1_AHB3ENR_SDMMC1EN_Values<RCC::C1_AHB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_AHB3ENRPack  = Register<0x58024534, 32, ReadWriteMode, RCCC1_AHB3ENRBase, T...> ;

  struct RCCAHB3ENRBase {} ;

  struct AHB3ENR : public RegisterBase<0x580244D4, 32, ReadWriteMode>
  {
    using MDMAEN = RCC_AHB3ENR_MDMAEN_Values<RCC::AHB3ENR, 0, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using DMA2DEN = RCC_AHB3ENR_DMA2DEN_Values<RCC::AHB3ENR, 4, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using JPGDECEN = RCC_AHB3ENR_JPGDECEN_Values<RCC::AHB3ENR, 5, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using FMCEN = RCC_AHB3ENR_FMCEN_Values<RCC::AHB3ENR, 12, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using QSPIEN = RCC_AHB3ENR_QSPIEN_Values<RCC::AHB3ENR, 14, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using SDMMC1EN = RCC_AHB3ENR_SDMMC1EN_Values<RCC::AHB3ENR, 16, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using FieldValues = RCC_AHB3ENR_SDMMC1EN_Values<RCC::AHB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3ENRPack  = Register<0x580244D4, 32, ReadWriteMode, RCCAHB3ENRBase, T...> ;

  struct RCCAHB1ENRBase {} ;

  struct AHB1ENR : public RegisterBase<0x580244D8, 32, ReadWriteMode>
  {
    using DMA1EN = RCC_AHB1ENR_DMA1EN_Values<RCC::AHB1ENR, 0, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using DMA2EN = RCC_AHB1ENR_DMA2EN_Values<RCC::AHB1ENR, 1, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using ADC12EN = RCC_AHB1ENR_ADC12EN_Values<RCC::AHB1ENR, 5, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using ETH1MACEN = RCC_AHB1ENR_ETH1MACEN_Values<RCC::AHB1ENR, 15, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using ETH1TXEN = RCC_AHB1ENR_ETH1TXEN_Values<RCC::AHB1ENR, 16, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using ETH1RXEN = RCC_AHB1ENR_ETH1RXEN_Values<RCC::AHB1ENR, 17, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using USB1OTGEN = RCC_AHB1ENR_USB1OTGEN_Values<RCC::AHB1ENR, 25, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using USB1ULPIEN = RCC_AHB1ENR_USB1ULPIEN_Values<RCC::AHB1ENR, 26, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using USB2OTGEN = RCC_AHB1ENR_USB2OTGEN_Values<RCC::AHB1ENR, 27, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using USB2ULPIEN = RCC_AHB1ENR_USB2ULPIEN_Values<RCC::AHB1ENR, 28, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using FieldValues = RCC_AHB1ENR_USB2ULPIEN_Values<RCC::AHB1ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1ENRPack  = Register<0x580244D8, 32, ReadWriteMode, RCCAHB1ENRBase, T...> ;

  struct RCCC1_AHB1ENRBase {} ;

  struct C1_AHB1ENR : public RegisterBase<0x58024538, 32, ReadWriteMode>
  {
    using DMA1EN = RCC_C1_AHB1ENR_DMA1EN_Values<RCC::C1_AHB1ENR, 0, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using DMA2EN = RCC_C1_AHB1ENR_DMA2EN_Values<RCC::C1_AHB1ENR, 1, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using ADC12EN = RCC_C1_AHB1ENR_ADC12EN_Values<RCC::C1_AHB1ENR, 5, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using ETH1MACEN = RCC_C1_AHB1ENR_ETH1MACEN_Values<RCC::C1_AHB1ENR, 15, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using ETH1TXEN = RCC_C1_AHB1ENR_ETH1TXEN_Values<RCC::C1_AHB1ENR, 16, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using ETH1RXEN = RCC_C1_AHB1ENR_ETH1RXEN_Values<RCC::C1_AHB1ENR, 17, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using USB1OTGEN = RCC_C1_AHB1ENR_USB1OTGEN_Values<RCC::C1_AHB1ENR, 25, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using USB1ULPIEN = RCC_C1_AHB1ENR_USB1ULPIEN_Values<RCC::C1_AHB1ENR, 26, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using USB2OTGEN = RCC_C1_AHB1ENR_USB2OTGEN_Values<RCC::C1_AHB1ENR, 27, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using USB2ULPIEN = RCC_C1_AHB1ENR_USB2ULPIEN_Values<RCC::C1_AHB1ENR, 28, 1, ReadWriteMode, RCCC1_AHB1ENRBase> ;
    using FieldValues = RCC_C1_AHB1ENR_USB2ULPIEN_Values<RCC::C1_AHB1ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_AHB1ENRPack  = Register<0x58024538, 32, ReadWriteMode, RCCC1_AHB1ENRBase, T...> ;

  struct RCCC1_AHB2ENRBase {} ;

  struct C1_AHB2ENR : public RegisterBase<0x5802453C, 32, ReadWriteMode>
  {
    using CAMITFEN = RCC_C1_AHB2ENR_CAMITFEN_Values<RCC::C1_AHB2ENR, 0, 1, ReadWriteMode, RCCC1_AHB2ENRBase> ;
    using CRYPTEN = RCC_C1_AHB2ENR_CRYPTEN_Values<RCC::C1_AHB2ENR, 4, 1, ReadWriteMode, RCCC1_AHB2ENRBase> ;
    using HASHEN = RCC_C1_AHB2ENR_HASHEN_Values<RCC::C1_AHB2ENR, 5, 1, ReadWriteMode, RCCC1_AHB2ENRBase> ;
    using RNGEN = RCC_C1_AHB2ENR_RNGEN_Values<RCC::C1_AHB2ENR, 6, 1, ReadWriteMode, RCCC1_AHB2ENRBase> ;
    using SDMMC2EN = RCC_C1_AHB2ENR_SDMMC2EN_Values<RCC::C1_AHB2ENR, 9, 1, ReadWriteMode, RCCC1_AHB2ENRBase> ;
    using SRAM1EN = RCC_C1_AHB2ENR_SRAM1EN_Values<RCC::C1_AHB2ENR, 29, 1, ReadWriteMode, RCCC1_AHB2ENRBase> ;
    using SRAM2EN = RCC_C1_AHB2ENR_SRAM2EN_Values<RCC::C1_AHB2ENR, 30, 1, ReadWriteMode, RCCC1_AHB2ENRBase> ;
    using SRAM3EN = RCC_C1_AHB2ENR_SRAM3EN_Values<RCC::C1_AHB2ENR, 31, 1, ReadWriteMode, RCCC1_AHB2ENRBase> ;
    using FieldValues = RCC_C1_AHB2ENR_SRAM3EN_Values<RCC::C1_AHB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_AHB2ENRPack  = Register<0x5802453C, 32, ReadWriteMode, RCCC1_AHB2ENRBase, T...> ;

  struct RCCAHB2ENRBase {} ;

  struct AHB2ENR : public RegisterBase<0x580244DC, 32, ReadWriteMode>
  {
    using CAMITFEN = RCC_AHB2ENR_CAMITFEN_Values<RCC::AHB2ENR, 0, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using CRYPTEN = RCC_AHB2ENR_CRYPTEN_Values<RCC::AHB2ENR, 4, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using HASHEN = RCC_AHB2ENR_HASHEN_Values<RCC::AHB2ENR, 5, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using RNGEN = RCC_AHB2ENR_RNGEN_Values<RCC::AHB2ENR, 6, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using SDMMC2EN = RCC_AHB2ENR_SDMMC2EN_Values<RCC::AHB2ENR, 9, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using SRAM1EN = RCC_AHB2ENR_SRAM1EN_Values<RCC::AHB2ENR, 29, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using SRAM2EN = RCC_AHB2ENR_SRAM2EN_Values<RCC::AHB2ENR, 30, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using SRAM3EN = RCC_AHB2ENR_SRAM3EN_Values<RCC::AHB2ENR, 31, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using FieldValues = RCC_AHB2ENR_SRAM3EN_Values<RCC::AHB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2ENRPack  = Register<0x580244DC, 32, ReadWriteMode, RCCAHB2ENRBase, T...> ;

  struct RCCAHB4ENRBase {} ;

  struct AHB4ENR : public RegisterBase<0x580244E0, 32, ReadWriteMode>
  {
    using GPIOAEN = RCC_AHB4ENR_GPIOAEN_Values<RCC::AHB4ENR, 0, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOBEN = RCC_AHB4ENR_GPIOBEN_Values<RCC::AHB4ENR, 1, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOCEN = RCC_AHB4ENR_GPIOCEN_Values<RCC::AHB4ENR, 2, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIODEN = RCC_AHB4ENR_GPIODEN_Values<RCC::AHB4ENR, 3, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOEEN = RCC_AHB4ENR_GPIOEEN_Values<RCC::AHB4ENR, 4, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOFEN = RCC_AHB4ENR_GPIOFEN_Values<RCC::AHB4ENR, 5, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOGEN = RCC_AHB4ENR_GPIOGEN_Values<RCC::AHB4ENR, 6, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOHEN = RCC_AHB4ENR_GPIOHEN_Values<RCC::AHB4ENR, 7, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOIEN = RCC_AHB4ENR_GPIOIEN_Values<RCC::AHB4ENR, 8, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOJEN = RCC_AHB4ENR_GPIOJEN_Values<RCC::AHB4ENR, 9, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using GPIOKEN = RCC_AHB4ENR_GPIOKEN_Values<RCC::AHB4ENR, 10, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using CRCEN = RCC_AHB4ENR_CRCEN_Values<RCC::AHB4ENR, 19, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using BDMAEN = RCC_AHB4ENR_BDMAEN_Values<RCC::AHB4ENR, 21, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using ADC3EN = RCC_AHB4ENR_ADC3EN_Values<RCC::AHB4ENR, 24, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using HSEMEN = RCC_AHB4ENR_HSEMEN_Values<RCC::AHB4ENR, 25, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using BKPRAMEN = RCC_AHB4ENR_BKPRAMEN_Values<RCC::AHB4ENR, 28, 1, ReadWriteMode, RCCAHB4ENRBase> ;
    using FieldValues = RCC_AHB4ENR_BKPRAMEN_Values<RCC::AHB4ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB4ENRPack  = Register<0x580244E0, 32, ReadWriteMode, RCCAHB4ENRBase, T...> ;

  struct RCCC1_AHB4ENRBase {} ;

  struct C1_AHB4ENR : public RegisterBase<0x58024540, 32, ReadWriteMode>
  {
    using GPIOAEN = RCC_C1_AHB4ENR_GPIOAEN_Values<RCC::C1_AHB4ENR, 0, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOBEN = RCC_C1_AHB4ENR_GPIOBEN_Values<RCC::C1_AHB4ENR, 1, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOCEN = RCC_C1_AHB4ENR_GPIOCEN_Values<RCC::C1_AHB4ENR, 2, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIODEN = RCC_C1_AHB4ENR_GPIODEN_Values<RCC::C1_AHB4ENR, 3, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOEEN = RCC_C1_AHB4ENR_GPIOEEN_Values<RCC::C1_AHB4ENR, 4, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOFEN = RCC_C1_AHB4ENR_GPIOFEN_Values<RCC::C1_AHB4ENR, 5, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOGEN = RCC_C1_AHB4ENR_GPIOGEN_Values<RCC::C1_AHB4ENR, 6, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOHEN = RCC_C1_AHB4ENR_GPIOHEN_Values<RCC::C1_AHB4ENR, 7, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOIEN = RCC_C1_AHB4ENR_GPIOIEN_Values<RCC::C1_AHB4ENR, 8, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOJEN = RCC_C1_AHB4ENR_GPIOJEN_Values<RCC::C1_AHB4ENR, 9, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using GPIOKEN = RCC_C1_AHB4ENR_GPIOKEN_Values<RCC::C1_AHB4ENR, 10, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using CRCEN = RCC_C1_AHB4ENR_CRCEN_Values<RCC::C1_AHB4ENR, 19, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using BDMAEN = RCC_C1_AHB4ENR_BDMAEN_Values<RCC::C1_AHB4ENR, 21, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using ADC3EN = RCC_C1_AHB4ENR_ADC3EN_Values<RCC::C1_AHB4ENR, 24, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using HSEMEN = RCC_C1_AHB4ENR_HSEMEN_Values<RCC::C1_AHB4ENR, 25, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using BKPRAMEN = RCC_C1_AHB4ENR_BKPRAMEN_Values<RCC::C1_AHB4ENR, 28, 1, ReadWriteMode, RCCC1_AHB4ENRBase> ;
    using FieldValues = RCC_C1_AHB4ENR_BKPRAMEN_Values<RCC::C1_AHB4ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_AHB4ENRPack  = Register<0x58024540, 32, ReadWriteMode, RCCC1_AHB4ENRBase, T...> ;

  struct RCCC1_APB3ENRBase {} ;

  struct C1_APB3ENR : public RegisterBase<0x58024544, 32, ReadWriteMode>
  {
    using LTDCEN = RCC_C1_APB3ENR_LTDCEN_Values<RCC::C1_APB3ENR, 3, 1, ReadWriteMode, RCCC1_APB3ENRBase> ;
    using WWDG1EN = RCC_C1_APB3ENR_WWDG1EN_Values<RCC::C1_APB3ENR, 6, 1, ReadWriteMode, RCCC1_APB3ENRBase> ;
    using FieldValues = RCC_C1_APB3ENR_WWDG1EN_Values<RCC::C1_APB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB3ENRPack  = Register<0x58024544, 32, ReadWriteMode, RCCC1_APB3ENRBase, T...> ;

  struct RCCAPB3ENRBase {} ;

  struct APB3ENR : public RegisterBase<0x580244E4, 32, ReadWriteMode>
  {
    using LTDCEN = RCC_APB3ENR_LTDCEN_Values<RCC::APB3ENR, 3, 1, ReadWriteMode, RCCAPB3ENRBase> ;
    using WWDG1EN = RCC_APB3ENR_WWDG1EN_Values<RCC::APB3ENR, 6, 1, ReadWriteMode, RCCAPB3ENRBase> ;
    using FieldValues = RCC_APB3ENR_WWDG1EN_Values<RCC::APB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB3ENRPack  = Register<0x580244E4, 32, ReadWriteMode, RCCAPB3ENRBase, T...> ;

  struct RCCAPB1LENRBase {} ;

  struct APB1LENR : public RegisterBase<0x580244E8, 32, ReadWriteMode>
  {
    using TIM2EN = RCC_APB1LENR_TIM2EN_Values<RCC::APB1LENR, 0, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using TIM3EN = RCC_APB1LENR_TIM3EN_Values<RCC::APB1LENR, 1, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using TIM4EN = RCC_APB1LENR_TIM4EN_Values<RCC::APB1LENR, 2, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using TIM5EN = RCC_APB1LENR_TIM5EN_Values<RCC::APB1LENR, 3, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using TIM6EN = RCC_APB1LENR_TIM6EN_Values<RCC::APB1LENR, 4, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using TIM7EN = RCC_APB1LENR_TIM7EN_Values<RCC::APB1LENR, 5, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using TIM12EN = RCC_APB1LENR_TIM12EN_Values<RCC::APB1LENR, 6, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using TIM13EN = RCC_APB1LENR_TIM13EN_Values<RCC::APB1LENR, 7, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using TIM14EN = RCC_APB1LENR_TIM14EN_Values<RCC::APB1LENR, 8, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using LPTIM1EN = RCC_APB1LENR_LPTIM1EN_Values<RCC::APB1LENR, 9, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using SPI2EN = RCC_APB1LENR_SPI2EN_Values<RCC::APB1LENR, 14, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using SPI3EN = RCC_APB1LENR_SPI3EN_Values<RCC::APB1LENR, 15, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using SPDIFRXEN = RCC_APB1LENR_SPDIFRXEN_Values<RCC::APB1LENR, 16, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using USART2EN = RCC_APB1LENR_USART2EN_Values<RCC::APB1LENR, 17, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using USART3EN = RCC_APB1LENR_USART3EN_Values<RCC::APB1LENR, 18, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using UART4EN = RCC_APB1LENR_UART4EN_Values<RCC::APB1LENR, 19, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using UART5EN = RCC_APB1LENR_UART5EN_Values<RCC::APB1LENR, 20, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using I2C1EN = RCC_APB1LENR_I2C1EN_Values<RCC::APB1LENR, 21, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using I2C2EN = RCC_APB1LENR_I2C2EN_Values<RCC::APB1LENR, 22, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using I2C3EN = RCC_APB1LENR_I2C3EN_Values<RCC::APB1LENR, 23, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using HDMICECEN = RCC_APB1LENR_HDMICECEN_Values<RCC::APB1LENR, 27, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using DAC12EN = RCC_APB1LENR_DAC12EN_Values<RCC::APB1LENR, 29, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using USART7EN = RCC_APB1LENR_USART7EN_Values<RCC::APB1LENR, 30, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using USART8EN = RCC_APB1LENR_USART8EN_Values<RCC::APB1LENR, 31, 1, ReadWriteMode, RCCAPB1LENRBase> ;
    using FieldValues = RCC_APB1LENR_USART8EN_Values<RCC::APB1LENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1LENRPack  = Register<0x580244E8, 32, ReadWriteMode, RCCAPB1LENRBase, T...> ;

  struct RCCC1_APB1LENRBase {} ;

  struct C1_APB1LENR : public RegisterBase<0x58024548, 32, ReadWriteMode>
  {
    using TIM2EN = RCC_C1_APB1LENR_TIM2EN_Values<RCC::C1_APB1LENR, 0, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using TIM3EN = RCC_C1_APB1LENR_TIM3EN_Values<RCC::C1_APB1LENR, 1, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using TIM4EN = RCC_C1_APB1LENR_TIM4EN_Values<RCC::C1_APB1LENR, 2, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using TIM5EN = RCC_C1_APB1LENR_TIM5EN_Values<RCC::C1_APB1LENR, 3, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using TIM6EN = RCC_C1_APB1LENR_TIM6EN_Values<RCC::C1_APB1LENR, 4, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using TIM7EN = RCC_C1_APB1LENR_TIM7EN_Values<RCC::C1_APB1LENR, 5, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using TIM12EN = RCC_C1_APB1LENR_TIM12EN_Values<RCC::C1_APB1LENR, 6, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using TIM13EN = RCC_C1_APB1LENR_TIM13EN_Values<RCC::C1_APB1LENR, 7, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using TIM14EN = RCC_C1_APB1LENR_TIM14EN_Values<RCC::C1_APB1LENR, 8, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using LPTIM1EN = RCC_C1_APB1LENR_LPTIM1EN_Values<RCC::C1_APB1LENR, 9, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using SPI2EN = RCC_C1_APB1LENR_SPI2EN_Values<RCC::C1_APB1LENR, 14, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using SPI3EN = RCC_C1_APB1LENR_SPI3EN_Values<RCC::C1_APB1LENR, 15, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using SPDIFRXEN = RCC_C1_APB1LENR_SPDIFRXEN_Values<RCC::C1_APB1LENR, 16, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using USART2EN = RCC_C1_APB1LENR_USART2EN_Values<RCC::C1_APB1LENR, 17, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using USART3EN = RCC_C1_APB1LENR_USART3EN_Values<RCC::C1_APB1LENR, 18, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using UART4EN = RCC_C1_APB1LENR_UART4EN_Values<RCC::C1_APB1LENR, 19, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using UART5EN = RCC_C1_APB1LENR_UART5EN_Values<RCC::C1_APB1LENR, 20, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using I2C1EN = RCC_C1_APB1LENR_I2C1EN_Values<RCC::C1_APB1LENR, 21, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using I2C2EN = RCC_C1_APB1LENR_I2C2EN_Values<RCC::C1_APB1LENR, 22, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using I2C3EN = RCC_C1_APB1LENR_I2C3EN_Values<RCC::C1_APB1LENR, 23, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using HDMICECEN = RCC_C1_APB1LENR_HDMICECEN_Values<RCC::C1_APB1LENR, 27, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using DAC12EN = RCC_C1_APB1LENR_DAC12EN_Values<RCC::C1_APB1LENR, 29, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using USART7EN = RCC_C1_APB1LENR_USART7EN_Values<RCC::C1_APB1LENR, 30, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using USART8EN = RCC_C1_APB1LENR_USART8EN_Values<RCC::C1_APB1LENR, 31, 1, ReadWriteMode, RCCC1_APB1LENRBase> ;
    using FieldValues = RCC_C1_APB1LENR_USART8EN_Values<RCC::C1_APB1LENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB1LENRPack  = Register<0x58024548, 32, ReadWriteMode, RCCC1_APB1LENRBase, T...> ;

  struct RCCAPB1HENRBase {} ;

  struct APB1HENR : public RegisterBase<0x580244EC, 32, ReadWriteMode>
  {
    using CRSEN = RCC_APB1HENR_CRSEN_Values<RCC::APB1HENR, 1, 1, ReadWriteMode, RCCAPB1HENRBase> ;
    using SWPEN = RCC_APB1HENR_SWPEN_Values<RCC::APB1HENR, 2, 1, ReadWriteMode, RCCAPB1HENRBase> ;
    using OPAMPEN = RCC_APB1HENR_OPAMPEN_Values<RCC::APB1HENR, 4, 1, ReadWriteMode, RCCAPB1HENRBase> ;
    using MDIOSEN = RCC_APB1HENR_MDIOSEN_Values<RCC::APB1HENR, 5, 1, ReadWriteMode, RCCAPB1HENRBase> ;
    using FDCANEN = RCC_APB1HENR_FDCANEN_Values<RCC::APB1HENR, 8, 1, ReadWriteMode, RCCAPB1HENRBase> ;
    using FieldValues = RCC_APB1HENR_FDCANEN_Values<RCC::APB1HENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1HENRPack  = Register<0x580244EC, 32, ReadWriteMode, RCCAPB1HENRBase, T...> ;

  struct RCCC1_APB1HENRBase {} ;

  struct C1_APB1HENR : public RegisterBase<0x5802454C, 32, ReadWriteMode>
  {
    using CRSEN = RCC_C1_APB1HENR_CRSEN_Values<RCC::C1_APB1HENR, 1, 1, ReadWriteMode, RCCC1_APB1HENRBase> ;
    using SWPEN = RCC_C1_APB1HENR_SWPEN_Values<RCC::C1_APB1HENR, 2, 1, ReadWriteMode, RCCC1_APB1HENRBase> ;
    using OPAMPEN = RCC_C1_APB1HENR_OPAMPEN_Values<RCC::C1_APB1HENR, 4, 1, ReadWriteMode, RCCC1_APB1HENRBase> ;
    using MDIOSEN = RCC_C1_APB1HENR_MDIOSEN_Values<RCC::C1_APB1HENR, 5, 1, ReadWriteMode, RCCC1_APB1HENRBase> ;
    using FDCANEN = RCC_C1_APB1HENR_FDCANEN_Values<RCC::C1_APB1HENR, 8, 1, ReadWriteMode, RCCC1_APB1HENRBase> ;
    using FieldValues = RCC_C1_APB1HENR_FDCANEN_Values<RCC::C1_APB1HENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB1HENRPack  = Register<0x5802454C, 32, ReadWriteMode, RCCC1_APB1HENRBase, T...> ;

  struct RCCC1_APB2ENRBase {} ;

  struct C1_APB2ENR : public RegisterBase<0x58024550, 32, ReadWriteMode>
  {
    using TIM1EN = RCC_C1_APB2ENR_TIM1EN_Values<RCC::C1_APB2ENR, 0, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using TIM8EN = RCC_C1_APB2ENR_TIM8EN_Values<RCC::C1_APB2ENR, 1, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using USART1EN = RCC_C1_APB2ENR_USART1EN_Values<RCC::C1_APB2ENR, 4, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using USART6EN = RCC_C1_APB2ENR_USART6EN_Values<RCC::C1_APB2ENR, 5, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using SPI1EN = RCC_C1_APB2ENR_SPI1EN_Values<RCC::C1_APB2ENR, 12, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using SPI4EN = RCC_C1_APB2ENR_SPI4EN_Values<RCC::C1_APB2ENR, 13, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using TIM16EN = RCC_C1_APB2ENR_TIM16EN_Values<RCC::C1_APB2ENR, 17, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using TIM15EN = RCC_C1_APB2ENR_TIM15EN_Values<RCC::C1_APB2ENR, 16, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using TIM17EN = RCC_C1_APB2ENR_TIM17EN_Values<RCC::C1_APB2ENR, 18, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using SPI5EN = RCC_C1_APB2ENR_SPI5EN_Values<RCC::C1_APB2ENR, 20, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using SAI1EN = RCC_C1_APB2ENR_SAI1EN_Values<RCC::C1_APB2ENR, 22, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using SAI2EN = RCC_C1_APB2ENR_SAI2EN_Values<RCC::C1_APB2ENR, 23, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using SAI3EN = RCC_C1_APB2ENR_SAI3EN_Values<RCC::C1_APB2ENR, 24, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using DFSDM1EN = RCC_C1_APB2ENR_DFSDM1EN_Values<RCC::C1_APB2ENR, 28, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using HRTIMEN = RCC_C1_APB2ENR_HRTIMEN_Values<RCC::C1_APB2ENR, 29, 1, ReadWriteMode, RCCC1_APB2ENRBase> ;
    using FieldValues = RCC_C1_APB2ENR_HRTIMEN_Values<RCC::C1_APB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB2ENRPack  = Register<0x58024550, 32, ReadWriteMode, RCCC1_APB2ENRBase, T...> ;

  struct RCCAPB2ENRBase {} ;

  struct APB2ENR : public RegisterBase<0x580244F0, 32, ReadWriteMode>
  {
    using TIM1EN = RCC_APB2ENR_TIM1EN_Values<RCC::APB2ENR, 0, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM8EN = RCC_APB2ENR_TIM8EN_Values<RCC::APB2ENR, 1, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using USART1EN = RCC_APB2ENR_USART1EN_Values<RCC::APB2ENR, 4, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using USART6EN = RCC_APB2ENR_USART6EN_Values<RCC::APB2ENR, 5, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SPI1EN = RCC_APB2ENR_SPI1EN_Values<RCC::APB2ENR, 12, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SPI4EN = RCC_APB2ENR_SPI4EN_Values<RCC::APB2ENR, 13, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM16EN = RCC_APB2ENR_TIM16EN_Values<RCC::APB2ENR, 17, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM15EN = RCC_APB2ENR_TIM15EN_Values<RCC::APB2ENR, 16, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM17EN = RCC_APB2ENR_TIM17EN_Values<RCC::APB2ENR, 18, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SPI5EN = RCC_APB2ENR_SPI5EN_Values<RCC::APB2ENR, 20, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SAI1EN = RCC_APB2ENR_SAI1EN_Values<RCC::APB2ENR, 22, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SAI2EN = RCC_APB2ENR_SAI2EN_Values<RCC::APB2ENR, 23, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SAI3EN = RCC_APB2ENR_SAI3EN_Values<RCC::APB2ENR, 24, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using DFSDM1EN = RCC_APB2ENR_DFSDM1EN_Values<RCC::APB2ENR, 28, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using HRTIMEN = RCC_APB2ENR_HRTIMEN_Values<RCC::APB2ENR, 29, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using FieldValues = RCC_APB2ENR_HRTIMEN_Values<RCC::APB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2ENRPack  = Register<0x580244F0, 32, ReadWriteMode, RCCAPB2ENRBase, T...> ;

  struct RCCAPB4ENRBase {} ;

  struct APB4ENR : public RegisterBase<0x580244F4, 32, ReadWriteMode>
  {
    using SYSCFGEN = RCC_APB4ENR_SYSCFGEN_Values<RCC::APB4ENR, 1, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using LPUART1EN = RCC_APB4ENR_LPUART1EN_Values<RCC::APB4ENR, 3, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using SPI6EN = RCC_APB4ENR_SPI6EN_Values<RCC::APB4ENR, 5, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using I2C4EN = RCC_APB4ENR_I2C4EN_Values<RCC::APB4ENR, 7, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using LPTIM2EN = RCC_APB4ENR_LPTIM2EN_Values<RCC::APB4ENR, 9, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using LPTIM3EN = RCC_APB4ENR_LPTIM3EN_Values<RCC::APB4ENR, 10, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using LPTIM4EN = RCC_APB4ENR_LPTIM4EN_Values<RCC::APB4ENR, 11, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using LPTIM5EN = RCC_APB4ENR_LPTIM5EN_Values<RCC::APB4ENR, 12, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using COMP12EN = RCC_APB4ENR_COMP12EN_Values<RCC::APB4ENR, 14, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using VREFEN = RCC_APB4ENR_VREFEN_Values<RCC::APB4ENR, 15, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using RTCAPBEN = RCC_APB4ENR_RTCAPBEN_Values<RCC::APB4ENR, 16, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using SAI4EN = RCC_APB4ENR_SAI4EN_Values<RCC::APB4ENR, 21, 1, ReadWriteMode, RCCAPB4ENRBase> ;
    using FieldValues = RCC_APB4ENR_SAI4EN_Values<RCC::APB4ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB4ENRPack  = Register<0x580244F4, 32, ReadWriteMode, RCCAPB4ENRBase, T...> ;

  struct RCCC1_APB4ENRBase {} ;

  struct C1_APB4ENR : public RegisterBase<0x58024554, 32, ReadWriteMode>
  {
    using SYSCFGEN = RCC_C1_APB4ENR_SYSCFGEN_Values<RCC::C1_APB4ENR, 1, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using LPUART1EN = RCC_C1_APB4ENR_LPUART1EN_Values<RCC::C1_APB4ENR, 3, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using SPI6EN = RCC_C1_APB4ENR_SPI6EN_Values<RCC::C1_APB4ENR, 5, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using I2C4EN = RCC_C1_APB4ENR_I2C4EN_Values<RCC::C1_APB4ENR, 7, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using LPTIM2EN = RCC_C1_APB4ENR_LPTIM2EN_Values<RCC::C1_APB4ENR, 9, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using LPTIM3EN = RCC_C1_APB4ENR_LPTIM3EN_Values<RCC::C1_APB4ENR, 10, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using LPTIM4EN = RCC_C1_APB4ENR_LPTIM4EN_Values<RCC::C1_APB4ENR, 11, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using LPTIM5EN = RCC_C1_APB4ENR_LPTIM5EN_Values<RCC::C1_APB4ENR, 12, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using COMP12EN = RCC_C1_APB4ENR_COMP12EN_Values<RCC::C1_APB4ENR, 14, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using VREFEN = RCC_C1_APB4ENR_VREFEN_Values<RCC::C1_APB4ENR, 15, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using RTCAPBEN = RCC_C1_APB4ENR_RTCAPBEN_Values<RCC::C1_APB4ENR, 16, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using SAI4EN = RCC_C1_APB4ENR_SAI4EN_Values<RCC::C1_APB4ENR, 21, 1, ReadWriteMode, RCCC1_APB4ENRBase> ;
    using FieldValues = RCC_C1_APB4ENR_SAI4EN_Values<RCC::C1_APB4ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB4ENRPack  = Register<0x58024554, 32, ReadWriteMode, RCCC1_APB4ENRBase, T...> ;

  struct RCCC1_AHB3LPENRBase {} ;

  struct C1_AHB3LPENR : public RegisterBase<0x5802455C, 32, ReadWriteMode>
  {
    using MDMALPEN = RCC_C1_AHB3LPENR_MDMALPEN_Values<RCC::C1_AHB3LPENR, 0, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using DMA2DLPEN = RCC_C1_AHB3LPENR_DMA2DLPEN_Values<RCC::C1_AHB3LPENR, 4, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using JPGDECLPEN = RCC_C1_AHB3LPENR_JPGDECLPEN_Values<RCC::C1_AHB3LPENR, 5, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using FLITFLPEN = RCC_C1_AHB3LPENR_FLITFLPEN_Values<RCC::C1_AHB3LPENR, 8, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using FMCLPEN = RCC_C1_AHB3LPENR_FMCLPEN_Values<RCC::C1_AHB3LPENR, 12, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using QSPILPEN = RCC_C1_AHB3LPENR_QSPILPEN_Values<RCC::C1_AHB3LPENR, 14, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using SDMMC1LPEN = RCC_C1_AHB3LPENR_SDMMC1LPEN_Values<RCC::C1_AHB3LPENR, 16, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using D1DTCM1LPEN = RCC_C1_AHB3LPENR_D1DTCM1LPEN_Values<RCC::C1_AHB3LPENR, 28, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using DTCM2LPEN = RCC_C1_AHB3LPENR_DTCM2LPEN_Values<RCC::C1_AHB3LPENR, 29, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using ITCMLPEN = RCC_C1_AHB3LPENR_ITCMLPEN_Values<RCC::C1_AHB3LPENR, 30, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using AXISRAMLPEN = RCC_C1_AHB3LPENR_AXISRAMLPEN_Values<RCC::C1_AHB3LPENR, 31, 1, ReadWriteMode, RCCC1_AHB3LPENRBase> ;
    using FieldValues = RCC_C1_AHB3LPENR_AXISRAMLPEN_Values<RCC::C1_AHB3LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_AHB3LPENRPack  = Register<0x5802455C, 32, ReadWriteMode, RCCC1_AHB3LPENRBase, T...> ;

  struct RCCAHB3LPENRBase {} ;

  struct AHB3LPENR : public RegisterBase<0x580244FC, 32, ReadWriteMode>
  {
    using MDMALPEN = RCC_AHB3LPENR_MDMALPEN_Values<RCC::AHB3LPENR, 0, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using DMA2DLPEN = RCC_AHB3LPENR_DMA2DLPEN_Values<RCC::AHB3LPENR, 4, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using JPGDECLPEN = RCC_AHB3LPENR_JPGDECLPEN_Values<RCC::AHB3LPENR, 5, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using FLITFLPEN = RCC_AHB3LPENR_FLITFLPEN_Values<RCC::AHB3LPENR, 8, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using FMCLPEN = RCC_AHB3LPENR_FMCLPEN_Values<RCC::AHB3LPENR, 12, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using QSPILPEN = RCC_AHB3LPENR_QSPILPEN_Values<RCC::AHB3LPENR, 14, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using SDMMC1LPEN = RCC_AHB3LPENR_SDMMC1LPEN_Values<RCC::AHB3LPENR, 16, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using D1DTCM1LPEN = RCC_AHB3LPENR_D1DTCM1LPEN_Values<RCC::AHB3LPENR, 28, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using DTCM2LPEN = RCC_AHB3LPENR_DTCM2LPEN_Values<RCC::AHB3LPENR, 29, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using ITCMLPEN = RCC_AHB3LPENR_ITCMLPEN_Values<RCC::AHB3LPENR, 30, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using AXISRAMLPEN = RCC_AHB3LPENR_AXISRAMLPEN_Values<RCC::AHB3LPENR, 31, 1, ReadWriteMode, RCCAHB3LPENRBase> ;
    using FieldValues = RCC_AHB3LPENR_AXISRAMLPEN_Values<RCC::AHB3LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3LPENRPack  = Register<0x580244FC, 32, ReadWriteMode, RCCAHB3LPENRBase, T...> ;

  struct RCCAHB1LPENRBase {} ;

  struct AHB1LPENR : public RegisterBase<0x58024500, 32, ReadWriteMode>
  {
    using DMA1LPEN = RCC_AHB1LPENR_DMA1LPEN_Values<RCC::AHB1LPENR, 0, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using DMA2LPEN = RCC_AHB1LPENR_DMA2LPEN_Values<RCC::AHB1LPENR, 1, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using ADC12LPEN = RCC_AHB1LPENR_ADC12LPEN_Values<RCC::AHB1LPENR, 5, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using ETH1MACLPEN = RCC_AHB1LPENR_ETH1MACLPEN_Values<RCC::AHB1LPENR, 15, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using ETH1TXLPEN = RCC_AHB1LPENR_ETH1TXLPEN_Values<RCC::AHB1LPENR, 16, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using ETH1RXLPEN = RCC_AHB1LPENR_ETH1RXLPEN_Values<RCC::AHB1LPENR, 17, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using USB1OTGLPEN = RCC_AHB1LPENR_USB1OTGLPEN_Values<RCC::AHB1LPENR, 25, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using USB1ULPILPEN = RCC_AHB1LPENR_USB1ULPILPEN_Values<RCC::AHB1LPENR, 26, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using USB2OTGLPEN = RCC_AHB1LPENR_USB2OTGLPEN_Values<RCC::AHB1LPENR, 27, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using USB2ULPILPEN = RCC_AHB1LPENR_USB2ULPILPEN_Values<RCC::AHB1LPENR, 28, 1, ReadWriteMode, RCCAHB1LPENRBase> ;
    using FieldValues = RCC_AHB1LPENR_USB2ULPILPEN_Values<RCC::AHB1LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1LPENRPack  = Register<0x58024500, 32, ReadWriteMode, RCCAHB1LPENRBase, T...> ;

  struct RCCC1_AHB1LPENRBase {} ;

  struct C1_AHB1LPENR : public RegisterBase<0x58024560, 32, ReadWriteMode>
  {
    using DMA1LPEN = RCC_C1_AHB1LPENR_DMA1LPEN_Values<RCC::C1_AHB1LPENR, 0, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using DMA2LPEN = RCC_C1_AHB1LPENR_DMA2LPEN_Values<RCC::C1_AHB1LPENR, 1, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using ADC12LPEN = RCC_C1_AHB1LPENR_ADC12LPEN_Values<RCC::C1_AHB1LPENR, 5, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using ETH1MACLPEN = RCC_C1_AHB1LPENR_ETH1MACLPEN_Values<RCC::C1_AHB1LPENR, 15, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using ETH1TXLPEN = RCC_C1_AHB1LPENR_ETH1TXLPEN_Values<RCC::C1_AHB1LPENR, 16, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using ETH1RXLPEN = RCC_C1_AHB1LPENR_ETH1RXLPEN_Values<RCC::C1_AHB1LPENR, 17, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using USB1OTGLPEN = RCC_C1_AHB1LPENR_USB1OTGLPEN_Values<RCC::C1_AHB1LPENR, 25, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using USB1ULPILPEN = RCC_C1_AHB1LPENR_USB1ULPILPEN_Values<RCC::C1_AHB1LPENR, 26, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using USB2OTGLPEN = RCC_C1_AHB1LPENR_USB2OTGLPEN_Values<RCC::C1_AHB1LPENR, 27, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using USB2ULPILPEN = RCC_C1_AHB1LPENR_USB2ULPILPEN_Values<RCC::C1_AHB1LPENR, 28, 1, ReadWriteMode, RCCC1_AHB1LPENRBase> ;
    using FieldValues = RCC_C1_AHB1LPENR_USB2ULPILPEN_Values<RCC::C1_AHB1LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_AHB1LPENRPack  = Register<0x58024560, 32, ReadWriteMode, RCCC1_AHB1LPENRBase, T...> ;

  struct RCCC1_AHB2LPENRBase {} ;

  struct C1_AHB2LPENR : public RegisterBase<0x58024564, 32, ReadWriteMode>
  {
    using CAMITFLPEN = RCC_C1_AHB2LPENR_CAMITFLPEN_Values<RCC::C1_AHB2LPENR, 0, 1, ReadWriteMode, RCCC1_AHB2LPENRBase> ;
    using CRYPTLPEN = RCC_C1_AHB2LPENR_CRYPTLPEN_Values<RCC::C1_AHB2LPENR, 4, 1, ReadWriteMode, RCCC1_AHB2LPENRBase> ;
    using HASHLPEN = RCC_C1_AHB2LPENR_HASHLPEN_Values<RCC::C1_AHB2LPENR, 5, 1, ReadWriteMode, RCCC1_AHB2LPENRBase> ;
    using SDMMC2LPEN = RCC_C1_AHB2LPENR_SDMMC2LPEN_Values<RCC::C1_AHB2LPENR, 9, 1, ReadWriteMode, RCCC1_AHB2LPENRBase> ;
    using RNGLPEN = RCC_C1_AHB2LPENR_RNGLPEN_Values<RCC::C1_AHB2LPENR, 6, 1, ReadWriteMode, RCCC1_AHB2LPENRBase> ;
    using SRAM1LPEN = RCC_C1_AHB2LPENR_SRAM1LPEN_Values<RCC::C1_AHB2LPENR, 29, 1, ReadWriteMode, RCCC1_AHB2LPENRBase> ;
    using SRAM2LPEN = RCC_C1_AHB2LPENR_SRAM2LPEN_Values<RCC::C1_AHB2LPENR, 30, 1, ReadWriteMode, RCCC1_AHB2LPENRBase> ;
    using SRAM3LPEN = RCC_C1_AHB2LPENR_SRAM3LPEN_Values<RCC::C1_AHB2LPENR, 31, 1, ReadWriteMode, RCCC1_AHB2LPENRBase> ;
    using FieldValues = RCC_C1_AHB2LPENR_SRAM3LPEN_Values<RCC::C1_AHB2LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_AHB2LPENRPack  = Register<0x58024564, 32, ReadWriteMode, RCCC1_AHB2LPENRBase, T...> ;

  struct RCCAHB2LPENRBase {} ;

  struct AHB2LPENR : public RegisterBase<0x58024504, 32, ReadWriteMode>
  {
    using CAMITFLPEN = RCC_AHB2LPENR_CAMITFLPEN_Values<RCC::AHB2LPENR, 0, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
    using CRYPTLPEN = RCC_AHB2LPENR_CRYPTLPEN_Values<RCC::AHB2LPENR, 4, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
    using HASHLPEN = RCC_AHB2LPENR_HASHLPEN_Values<RCC::AHB2LPENR, 5, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
    using SDMMC2LPEN = RCC_AHB2LPENR_SDMMC2LPEN_Values<RCC::AHB2LPENR, 9, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
    using RNGLPEN = RCC_AHB2LPENR_RNGLPEN_Values<RCC::AHB2LPENR, 6, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
    using SRAM1LPEN = RCC_AHB2LPENR_SRAM1LPEN_Values<RCC::AHB2LPENR, 29, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
    using SRAM2LPEN = RCC_AHB2LPENR_SRAM2LPEN_Values<RCC::AHB2LPENR, 30, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
    using SRAM3LPEN = RCC_AHB2LPENR_SRAM3LPEN_Values<RCC::AHB2LPENR, 31, 1, ReadWriteMode, RCCAHB2LPENRBase> ;
    using FieldValues = RCC_AHB2LPENR_SRAM3LPEN_Values<RCC::AHB2LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2LPENRPack  = Register<0x58024504, 32, ReadWriteMode, RCCAHB2LPENRBase, T...> ;

  struct RCCAHB4LPENRBase {} ;

  struct AHB4LPENR : public RegisterBase<0x58024508, 32, ReadWriteMode>
  {
    using GPIOALPEN = RCC_AHB4LPENR_GPIOALPEN_Values<RCC::AHB4LPENR, 0, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOBLPEN = RCC_AHB4LPENR_GPIOBLPEN_Values<RCC::AHB4LPENR, 1, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOCLPEN = RCC_AHB4LPENR_GPIOCLPEN_Values<RCC::AHB4LPENR, 2, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIODLPEN = RCC_AHB4LPENR_GPIODLPEN_Values<RCC::AHB4LPENR, 3, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOELPEN = RCC_AHB4LPENR_GPIOELPEN_Values<RCC::AHB4LPENR, 4, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOFLPEN = RCC_AHB4LPENR_GPIOFLPEN_Values<RCC::AHB4LPENR, 5, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOGLPEN = RCC_AHB4LPENR_GPIOGLPEN_Values<RCC::AHB4LPENR, 6, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOHLPEN = RCC_AHB4LPENR_GPIOHLPEN_Values<RCC::AHB4LPENR, 7, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOILPEN = RCC_AHB4LPENR_GPIOILPEN_Values<RCC::AHB4LPENR, 8, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOJLPEN = RCC_AHB4LPENR_GPIOJLPEN_Values<RCC::AHB4LPENR, 9, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using GPIOKLPEN = RCC_AHB4LPENR_GPIOKLPEN_Values<RCC::AHB4LPENR, 10, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using CRCLPEN = RCC_AHB4LPENR_CRCLPEN_Values<RCC::AHB4LPENR, 19, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using BDMALPEN = RCC_AHB4LPENR_BDMALPEN_Values<RCC::AHB4LPENR, 21, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using ADC3LPEN = RCC_AHB4LPENR_ADC3LPEN_Values<RCC::AHB4LPENR, 24, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using BKPRAMLPEN = RCC_AHB4LPENR_BKPRAMLPEN_Values<RCC::AHB4LPENR, 28, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using SRAM4LPEN = RCC_AHB4LPENR_SRAM4LPEN_Values<RCC::AHB4LPENR, 29, 1, ReadWriteMode, RCCAHB4LPENRBase> ;
    using FieldValues = RCC_AHB4LPENR_SRAM4LPEN_Values<RCC::AHB4LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB4LPENRPack  = Register<0x58024508, 32, ReadWriteMode, RCCAHB4LPENRBase, T...> ;

  struct RCCC1_AHB4LPENRBase {} ;

  struct C1_AHB4LPENR : public RegisterBase<0x58024568, 32, ReadWriteMode>
  {
    using GPIOALPEN = RCC_C1_AHB4LPENR_GPIOALPEN_Values<RCC::C1_AHB4LPENR, 0, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOBLPEN = RCC_C1_AHB4LPENR_GPIOBLPEN_Values<RCC::C1_AHB4LPENR, 1, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOCLPEN = RCC_C1_AHB4LPENR_GPIOCLPEN_Values<RCC::C1_AHB4LPENR, 2, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIODLPEN = RCC_C1_AHB4LPENR_GPIODLPEN_Values<RCC::C1_AHB4LPENR, 3, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOELPEN = RCC_C1_AHB4LPENR_GPIOELPEN_Values<RCC::C1_AHB4LPENR, 4, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOFLPEN = RCC_C1_AHB4LPENR_GPIOFLPEN_Values<RCC::C1_AHB4LPENR, 5, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOGLPEN = RCC_C1_AHB4LPENR_GPIOGLPEN_Values<RCC::C1_AHB4LPENR, 6, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOHLPEN = RCC_C1_AHB4LPENR_GPIOHLPEN_Values<RCC::C1_AHB4LPENR, 7, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOILPEN = RCC_C1_AHB4LPENR_GPIOILPEN_Values<RCC::C1_AHB4LPENR, 8, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOJLPEN = RCC_C1_AHB4LPENR_GPIOJLPEN_Values<RCC::C1_AHB4LPENR, 9, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using GPIOKLPEN = RCC_C1_AHB4LPENR_GPIOKLPEN_Values<RCC::C1_AHB4LPENR, 10, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using CRCLPEN = RCC_C1_AHB4LPENR_CRCLPEN_Values<RCC::C1_AHB4LPENR, 19, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using BDMALPEN = RCC_C1_AHB4LPENR_BDMALPEN_Values<RCC::C1_AHB4LPENR, 21, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using ADC3LPEN = RCC_C1_AHB4LPENR_ADC3LPEN_Values<RCC::C1_AHB4LPENR, 24, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using BKPRAMLPEN = RCC_C1_AHB4LPENR_BKPRAMLPEN_Values<RCC::C1_AHB4LPENR, 28, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using SRAM4LPEN = RCC_C1_AHB4LPENR_SRAM4LPEN_Values<RCC::C1_AHB4LPENR, 29, 1, ReadWriteMode, RCCC1_AHB4LPENRBase> ;
    using FieldValues = RCC_C1_AHB4LPENR_SRAM4LPEN_Values<RCC::C1_AHB4LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_AHB4LPENRPack  = Register<0x58024568, 32, ReadWriteMode, RCCC1_AHB4LPENRBase, T...> ;

  struct RCCC1_APB3LPENRBase {} ;

  struct C1_APB3LPENR : public RegisterBase<0x5802456C, 32, ReadWriteMode>
  {
    using LTDCLPEN = RCC_C1_APB3LPENR_LTDCLPEN_Values<RCC::C1_APB3LPENR, 3, 1, ReadWriteMode, RCCC1_APB3LPENRBase> ;
    using WWDG1LPEN = RCC_C1_APB3LPENR_WWDG1LPEN_Values<RCC::C1_APB3LPENR, 6, 1, ReadWriteMode, RCCC1_APB3LPENRBase> ;
    using FieldValues = RCC_C1_APB3LPENR_WWDG1LPEN_Values<RCC::C1_APB3LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB3LPENRPack  = Register<0x5802456C, 32, ReadWriteMode, RCCC1_APB3LPENRBase, T...> ;

  struct RCCAPB3LPENRBase {} ;

  struct APB3LPENR : public RegisterBase<0x5802450C, 32, ReadWriteMode>
  {
    using LTDCLPEN = RCC_APB3LPENR_LTDCLPEN_Values<RCC::APB3LPENR, 3, 1, ReadWriteMode, RCCAPB3LPENRBase> ;
    using WWDG1LPEN = RCC_APB3LPENR_WWDG1LPEN_Values<RCC::APB3LPENR, 6, 1, ReadWriteMode, RCCAPB3LPENRBase> ;
    using FieldValues = RCC_APB3LPENR_WWDG1LPEN_Values<RCC::APB3LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB3LPENRPack  = Register<0x5802450C, 32, ReadWriteMode, RCCAPB3LPENRBase, T...> ;

  struct RCCAPB1LLPENRBase {} ;

  struct APB1LLPENR : public RegisterBase<0x58024510, 32, ReadWriteMode>
  {
    using TIM2LPEN = RCC_APB1LLPENR_TIM2LPEN_Values<RCC::APB1LLPENR, 0, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using TIM3LPEN = RCC_APB1LLPENR_TIM3LPEN_Values<RCC::APB1LLPENR, 1, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using TIM4LPEN = RCC_APB1LLPENR_TIM4LPEN_Values<RCC::APB1LLPENR, 2, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using TIM5LPEN = RCC_APB1LLPENR_TIM5LPEN_Values<RCC::APB1LLPENR, 3, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using TIM6LPEN = RCC_APB1LLPENR_TIM6LPEN_Values<RCC::APB1LLPENR, 4, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using TIM7LPEN = RCC_APB1LLPENR_TIM7LPEN_Values<RCC::APB1LLPENR, 5, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using TIM12LPEN = RCC_APB1LLPENR_TIM12LPEN_Values<RCC::APB1LLPENR, 6, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using TIM13LPEN = RCC_APB1LLPENR_TIM13LPEN_Values<RCC::APB1LLPENR, 7, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using TIM14LPEN = RCC_APB1LLPENR_TIM14LPEN_Values<RCC::APB1LLPENR, 8, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using LPTIM1LPEN = RCC_APB1LLPENR_LPTIM1LPEN_Values<RCC::APB1LLPENR, 9, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using SPI2LPEN = RCC_APB1LLPENR_SPI2LPEN_Values<RCC::APB1LLPENR, 14, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using SPI3LPEN = RCC_APB1LLPENR_SPI3LPEN_Values<RCC::APB1LLPENR, 15, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using SPDIFRXLPEN = RCC_APB1LLPENR_SPDIFRXLPEN_Values<RCC::APB1LLPENR, 16, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using USART2LPEN = RCC_APB1LLPENR_USART2LPEN_Values<RCC::APB1LLPENR, 17, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using USART3LPEN = RCC_APB1LLPENR_USART3LPEN_Values<RCC::APB1LLPENR, 18, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using UART4LPEN = RCC_APB1LLPENR_UART4LPEN_Values<RCC::APB1LLPENR, 19, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using UART5LPEN = RCC_APB1LLPENR_UART5LPEN_Values<RCC::APB1LLPENR, 20, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using I2C1LPEN = RCC_APB1LLPENR_I2C1LPEN_Values<RCC::APB1LLPENR, 21, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using I2C2LPEN = RCC_APB1LLPENR_I2C2LPEN_Values<RCC::APB1LLPENR, 22, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using I2C3LPEN = RCC_APB1LLPENR_I2C3LPEN_Values<RCC::APB1LLPENR, 23, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using HDMICECLPEN = RCC_APB1LLPENR_HDMICECLPEN_Values<RCC::APB1LLPENR, 27, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using DAC12LPEN = RCC_APB1LLPENR_DAC12LPEN_Values<RCC::APB1LLPENR, 29, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using USART7LPEN = RCC_APB1LLPENR_USART7LPEN_Values<RCC::APB1LLPENR, 30, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using USART8LPEN = RCC_APB1LLPENR_USART8LPEN_Values<RCC::APB1LLPENR, 31, 1, ReadWriteMode, RCCAPB1LLPENRBase> ;
    using FieldValues = RCC_APB1LLPENR_USART8LPEN_Values<RCC::APB1LLPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1LLPENRPack  = Register<0x58024510, 32, ReadWriteMode, RCCAPB1LLPENRBase, T...> ;

  struct RCCC1_APB1LLPENRBase {} ;

  struct C1_APB1LLPENR : public RegisterBase<0x58024570, 32, ReadWriteMode>
  {
    using TIM2LPEN = RCC_C1_APB1LLPENR_TIM2LPEN_Values<RCC::C1_APB1LLPENR, 0, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using TIM3LPEN = RCC_C1_APB1LLPENR_TIM3LPEN_Values<RCC::C1_APB1LLPENR, 1, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using TIM4LPEN = RCC_C1_APB1LLPENR_TIM4LPEN_Values<RCC::C1_APB1LLPENR, 2, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using TIM5LPEN = RCC_C1_APB1LLPENR_TIM5LPEN_Values<RCC::C1_APB1LLPENR, 3, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using TIM6LPEN = RCC_C1_APB1LLPENR_TIM6LPEN_Values<RCC::C1_APB1LLPENR, 4, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using TIM7LPEN = RCC_C1_APB1LLPENR_TIM7LPEN_Values<RCC::C1_APB1LLPENR, 5, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using TIM12LPEN = RCC_C1_APB1LLPENR_TIM12LPEN_Values<RCC::C1_APB1LLPENR, 6, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using TIM13LPEN = RCC_C1_APB1LLPENR_TIM13LPEN_Values<RCC::C1_APB1LLPENR, 7, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using TIM14LPEN = RCC_C1_APB1LLPENR_TIM14LPEN_Values<RCC::C1_APB1LLPENR, 8, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using LPTIM1LPEN = RCC_C1_APB1LLPENR_LPTIM1LPEN_Values<RCC::C1_APB1LLPENR, 9, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using SPI2LPEN = RCC_C1_APB1LLPENR_SPI2LPEN_Values<RCC::C1_APB1LLPENR, 14, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using SPI3LPEN = RCC_C1_APB1LLPENR_SPI3LPEN_Values<RCC::C1_APB1LLPENR, 15, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using SPDIFRXLPEN = RCC_C1_APB1LLPENR_SPDIFRXLPEN_Values<RCC::C1_APB1LLPENR, 16, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using USART2LPEN = RCC_C1_APB1LLPENR_USART2LPEN_Values<RCC::C1_APB1LLPENR, 17, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using USART3LPEN = RCC_C1_APB1LLPENR_USART3LPEN_Values<RCC::C1_APB1LLPENR, 18, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using UART4LPEN = RCC_C1_APB1LLPENR_UART4LPEN_Values<RCC::C1_APB1LLPENR, 19, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using UART5LPEN = RCC_C1_APB1LLPENR_UART5LPEN_Values<RCC::C1_APB1LLPENR, 20, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using I2C1LPEN = RCC_C1_APB1LLPENR_I2C1LPEN_Values<RCC::C1_APB1LLPENR, 21, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using I2C2LPEN = RCC_C1_APB1LLPENR_I2C2LPEN_Values<RCC::C1_APB1LLPENR, 22, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using I2C3LPEN = RCC_C1_APB1LLPENR_I2C3LPEN_Values<RCC::C1_APB1LLPENR, 23, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using HDMICECLPEN = RCC_C1_APB1LLPENR_HDMICECLPEN_Values<RCC::C1_APB1LLPENR, 27, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using DAC12LPEN = RCC_C1_APB1LLPENR_DAC12LPEN_Values<RCC::C1_APB1LLPENR, 29, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using USART7LPEN = RCC_C1_APB1LLPENR_USART7LPEN_Values<RCC::C1_APB1LLPENR, 30, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using USART8LPEN = RCC_C1_APB1LLPENR_USART8LPEN_Values<RCC::C1_APB1LLPENR, 31, 1, ReadWriteMode, RCCC1_APB1LLPENRBase> ;
    using FieldValues = RCC_C1_APB1LLPENR_USART8LPEN_Values<RCC::C1_APB1LLPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB1LLPENRPack  = Register<0x58024570, 32, ReadWriteMode, RCCC1_APB1LLPENRBase, T...> ;

  struct RCCC1_APB1HLPENRBase {} ;

  struct C1_APB1HLPENR : public RegisterBase<0x58024574, 32, ReadWriteMode>
  {
    using CRSLPEN = RCC_C1_APB1HLPENR_CRSLPEN_Values<RCC::C1_APB1HLPENR, 1, 1, ReadWriteMode, RCCC1_APB1HLPENRBase> ;
    using SWPLPEN = RCC_C1_APB1HLPENR_SWPLPEN_Values<RCC::C1_APB1HLPENR, 2, 1, ReadWriteMode, RCCC1_APB1HLPENRBase> ;
    using OPAMPLPEN = RCC_C1_APB1HLPENR_OPAMPLPEN_Values<RCC::C1_APB1HLPENR, 4, 1, ReadWriteMode, RCCC1_APB1HLPENRBase> ;
    using MDIOSLPEN = RCC_C1_APB1HLPENR_MDIOSLPEN_Values<RCC::C1_APB1HLPENR, 5, 1, ReadWriteMode, RCCC1_APB1HLPENRBase> ;
    using FDCANLPEN = RCC_C1_APB1HLPENR_FDCANLPEN_Values<RCC::C1_APB1HLPENR, 8, 1, ReadWriteMode, RCCC1_APB1HLPENRBase> ;
    using FieldValues = RCC_C1_APB1HLPENR_FDCANLPEN_Values<RCC::C1_APB1HLPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB1HLPENRPack  = Register<0x58024574, 32, ReadWriteMode, RCCC1_APB1HLPENRBase, T...> ;

  struct RCCAPB1HLPENRBase {} ;

  struct APB1HLPENR : public RegisterBase<0x58024514, 32, ReadWriteMode>
  {
    using CRSLPEN = RCC_APB1HLPENR_CRSLPEN_Values<RCC::APB1HLPENR, 1, 1, ReadWriteMode, RCCAPB1HLPENRBase> ;
    using SWPLPEN = RCC_APB1HLPENR_SWPLPEN_Values<RCC::APB1HLPENR, 2, 1, ReadWriteMode, RCCAPB1HLPENRBase> ;
    using OPAMPLPEN = RCC_APB1HLPENR_OPAMPLPEN_Values<RCC::APB1HLPENR, 4, 1, ReadWriteMode, RCCAPB1HLPENRBase> ;
    using MDIOSLPEN = RCC_APB1HLPENR_MDIOSLPEN_Values<RCC::APB1HLPENR, 5, 1, ReadWriteMode, RCCAPB1HLPENRBase> ;
    using FDCANLPEN = RCC_APB1HLPENR_FDCANLPEN_Values<RCC::APB1HLPENR, 8, 1, ReadWriteMode, RCCAPB1HLPENRBase> ;
    using FieldValues = RCC_APB1HLPENR_FDCANLPEN_Values<RCC::APB1HLPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1HLPENRPack  = Register<0x58024514, 32, ReadWriteMode, RCCAPB1HLPENRBase, T...> ;

  struct RCCAPB2LPENRBase {} ;

  struct APB2LPENR : public RegisterBase<0x58024518, 32, ReadWriteMode>
  {
    using TIM1LPEN = RCC_APB2LPENR_TIM1LPEN_Values<RCC::APB2LPENR, 0, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using TIM8LPEN = RCC_APB2LPENR_TIM8LPEN_Values<RCC::APB2LPENR, 1, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using USART1LPEN = RCC_APB2LPENR_USART1LPEN_Values<RCC::APB2LPENR, 4, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using USART6LPEN = RCC_APB2LPENR_USART6LPEN_Values<RCC::APB2LPENR, 5, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SPI1LPEN = RCC_APB2LPENR_SPI1LPEN_Values<RCC::APB2LPENR, 12, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SPI4LPEN = RCC_APB2LPENR_SPI4LPEN_Values<RCC::APB2LPENR, 13, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using TIM15LPEN = RCC_APB2LPENR_TIM15LPEN_Values<RCC::APB2LPENR, 16, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using TIM16LPEN = RCC_APB2LPENR_TIM16LPEN_Values<RCC::APB2LPENR, 17, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using TIM17LPEN = RCC_APB2LPENR_TIM17LPEN_Values<RCC::APB2LPENR, 18, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SPI5LPEN = RCC_APB2LPENR_SPI5LPEN_Values<RCC::APB2LPENR, 20, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SAI1LPEN = RCC_APB2LPENR_SAI1LPEN_Values<RCC::APB2LPENR, 22, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SAI2LPEN = RCC_APB2LPENR_SAI2LPEN_Values<RCC::APB2LPENR, 23, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using SAI3LPEN = RCC_APB2LPENR_SAI3LPEN_Values<RCC::APB2LPENR, 24, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using DFSDM1LPEN = RCC_APB2LPENR_DFSDM1LPEN_Values<RCC::APB2LPENR, 28, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using HRTIMLPEN = RCC_APB2LPENR_HRTIMLPEN_Values<RCC::APB2LPENR, 29, 1, ReadWriteMode, RCCAPB2LPENRBase> ;
    using FieldValues = RCC_APB2LPENR_HRTIMLPEN_Values<RCC::APB2LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2LPENRPack  = Register<0x58024518, 32, ReadWriteMode, RCCAPB2LPENRBase, T...> ;

  struct RCCC1_APB2LPENRBase {} ;

  struct C1_APB2LPENR : public RegisterBase<0x58024578, 32, ReadWriteMode>
  {
    using TIM1LPEN = RCC_C1_APB2LPENR_TIM1LPEN_Values<RCC::C1_APB2LPENR, 0, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using TIM8LPEN = RCC_C1_APB2LPENR_TIM8LPEN_Values<RCC::C1_APB2LPENR, 1, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using USART1LPEN = RCC_C1_APB2LPENR_USART1LPEN_Values<RCC::C1_APB2LPENR, 4, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using USART6LPEN = RCC_C1_APB2LPENR_USART6LPEN_Values<RCC::C1_APB2LPENR, 5, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using SPI1LPEN = RCC_C1_APB2LPENR_SPI1LPEN_Values<RCC::C1_APB2LPENR, 12, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using SPI4LPEN = RCC_C1_APB2LPENR_SPI4LPEN_Values<RCC::C1_APB2LPENR, 13, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using TIM15LPEN = RCC_C1_APB2LPENR_TIM15LPEN_Values<RCC::C1_APB2LPENR, 16, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using TIM16LPEN = RCC_C1_APB2LPENR_TIM16LPEN_Values<RCC::C1_APB2LPENR, 17, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using TIM17LPEN = RCC_C1_APB2LPENR_TIM17LPEN_Values<RCC::C1_APB2LPENR, 18, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using SPI5LPEN = RCC_C1_APB2LPENR_SPI5LPEN_Values<RCC::C1_APB2LPENR, 20, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using SAI1LPEN = RCC_C1_APB2LPENR_SAI1LPEN_Values<RCC::C1_APB2LPENR, 22, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using SAI2LPEN = RCC_C1_APB2LPENR_SAI2LPEN_Values<RCC::C1_APB2LPENR, 23, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using SAI3LPEN = RCC_C1_APB2LPENR_SAI3LPEN_Values<RCC::C1_APB2LPENR, 24, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using DFSDM1LPEN = RCC_C1_APB2LPENR_DFSDM1LPEN_Values<RCC::C1_APB2LPENR, 28, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using HRTIMLPEN = RCC_C1_APB2LPENR_HRTIMLPEN_Values<RCC::C1_APB2LPENR, 29, 1, ReadWriteMode, RCCC1_APB2LPENRBase> ;
    using FieldValues = RCC_C1_APB2LPENR_HRTIMLPEN_Values<RCC::C1_APB2LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB2LPENRPack  = Register<0x58024578, 32, ReadWriteMode, RCCC1_APB2LPENRBase, T...> ;

  struct RCCC1_APB4LPENRBase {} ;

  struct C1_APB4LPENR : public RegisterBase<0x5802457C, 32, ReadWriteMode>
  {
    using SYSCFGLPEN = RCC_C1_APB4LPENR_SYSCFGLPEN_Values<RCC::C1_APB4LPENR, 1, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using LPUART1LPEN = RCC_C1_APB4LPENR_LPUART1LPEN_Values<RCC::C1_APB4LPENR, 3, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using SPI6LPEN = RCC_C1_APB4LPENR_SPI6LPEN_Values<RCC::C1_APB4LPENR, 5, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using I2C4LPEN = RCC_C1_APB4LPENR_I2C4LPEN_Values<RCC::C1_APB4LPENR, 7, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using LPTIM2LPEN = RCC_C1_APB4LPENR_LPTIM2LPEN_Values<RCC::C1_APB4LPENR, 9, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using LPTIM3LPEN = RCC_C1_APB4LPENR_LPTIM3LPEN_Values<RCC::C1_APB4LPENR, 10, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using LPTIM4LPEN = RCC_C1_APB4LPENR_LPTIM4LPEN_Values<RCC::C1_APB4LPENR, 11, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using LPTIM5LPEN = RCC_C1_APB4LPENR_LPTIM5LPEN_Values<RCC::C1_APB4LPENR, 12, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using COMP12LPEN = RCC_C1_APB4LPENR_COMP12LPEN_Values<RCC::C1_APB4LPENR, 14, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using VREFLPEN = RCC_C1_APB4LPENR_VREFLPEN_Values<RCC::C1_APB4LPENR, 15, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using RTCAPBLPEN = RCC_C1_APB4LPENR_RTCAPBLPEN_Values<RCC::C1_APB4LPENR, 16, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using SAI4LPEN = RCC_C1_APB4LPENR_SAI4LPEN_Values<RCC::C1_APB4LPENR, 21, 1, ReadWriteMode, RCCC1_APB4LPENRBase> ;
    using FieldValues = RCC_C1_APB4LPENR_SAI4LPEN_Values<RCC::C1_APB4LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1_APB4LPENRPack  = Register<0x5802457C, 32, ReadWriteMode, RCCC1_APB4LPENRBase, T...> ;

  struct RCCAPB4LPENRBase {} ;

  struct APB4LPENR : public RegisterBase<0x5802451C, 32, ReadWriteMode>
  {
    using SYSCFGLPEN = RCC_APB4LPENR_SYSCFGLPEN_Values<RCC::APB4LPENR, 1, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using LPUART1LPEN = RCC_APB4LPENR_LPUART1LPEN_Values<RCC::APB4LPENR, 3, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using SPI6LPEN = RCC_APB4LPENR_SPI6LPEN_Values<RCC::APB4LPENR, 5, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using I2C4LPEN = RCC_APB4LPENR_I2C4LPEN_Values<RCC::APB4LPENR, 7, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using LPTIM2LPEN = RCC_APB4LPENR_LPTIM2LPEN_Values<RCC::APB4LPENR, 9, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using LPTIM3LPEN = RCC_APB4LPENR_LPTIM3LPEN_Values<RCC::APB4LPENR, 10, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using LPTIM4LPEN = RCC_APB4LPENR_LPTIM4LPEN_Values<RCC::APB4LPENR, 11, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using LPTIM5LPEN = RCC_APB4LPENR_LPTIM5LPEN_Values<RCC::APB4LPENR, 12, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using COMP12LPEN = RCC_APB4LPENR_COMP12LPEN_Values<RCC::APB4LPENR, 14, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using VREFLPEN = RCC_APB4LPENR_VREFLPEN_Values<RCC::APB4LPENR, 15, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using RTCAPBLPEN = RCC_APB4LPENR_RTCAPBLPEN_Values<RCC::APB4LPENR, 16, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using SAI4LPEN = RCC_APB4LPENR_SAI4LPEN_Values<RCC::APB4LPENR, 21, 1, ReadWriteMode, RCCAPB4LPENRBase> ;
    using FieldValues = RCC_APB4LPENR_SAI4LPEN_Values<RCC::APB4LPENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB4LPENRPack  = Register<0x5802451C, 32, ReadWriteMode, RCCAPB4LPENRBase, T...> ;

} ;

#endif //#if !defined(RCCREGISTERS_HPP)
