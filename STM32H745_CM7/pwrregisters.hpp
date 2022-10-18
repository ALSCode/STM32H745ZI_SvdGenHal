/*******************************************************************************
* Filename      : pwrregisters.hpp
*
* Details       : PWR. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(PWRREGISTERS_HPP)
#define PWRREGISTERS_HPP

#include "pwrfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PWR
{
  struct PWRCR1Base {} ;

  struct CR1 : public RegisterBase<0x58024800, 32, ReadWriteMode>
  {
    using LPDS = PWR_CR1_LPDS_Values<PWR::CR1, 0, 1, ReadWriteMode, PWRCR1Base> ;
    using PVDE = PWR_CR1_PVDE_Values<PWR::CR1, 4, 1, ReadWriteMode, PWRCR1Base> ;
    using PLS = PWR_CR1_PLS_Values<PWR::CR1, 5, 3, ReadWriteMode, PWRCR1Base> ;
    using DBP = PWR_CR1_DBP_Values<PWR::CR1, 8, 1, ReadWriteMode, PWRCR1Base> ;
    using FLPS = PWR_CR1_FLPS_Values<PWR::CR1, 9, 1, ReadWriteMode, PWRCR1Base> ;
    using SVOS = PWR_CR1_SVOS_Values<PWR::CR1, 14, 2, ReadWriteMode, PWRCR1Base> ;
    using AVDEN = PWR_CR1_AVDEN_Values<PWR::CR1, 16, 1, ReadWriteMode, PWRCR1Base> ;
    using ALS = PWR_CR1_ALS_Values<PWR::CR1, 17, 2, ReadWriteMode, PWRCR1Base> ;
    using FieldValues = PWR_CR1_ALS_Values<PWR::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x58024800, 32, ReadWriteMode, PWRCR1Base, T...> ;

  struct PWRCSR1Base {} ;

  struct CSR1 : public RegisterBase<0x58024804, 32, ReadMode>
  {
    using PVDO = PWR_CSR1_PVDO_Values<PWR::CSR1, 4, 1, ReadMode, PWRCSR1Base> ;
    using ACTVOSRDY = PWR_CSR1_ACTVOSRDY_Values<PWR::CSR1, 13, 1, ReadMode, PWRCSR1Base> ;
    using ACTVOS = PWR_CSR1_ACTVOS_Values<PWR::CSR1, 14, 2, ReadMode, PWRCSR1Base> ;
    using AVDO = PWR_CSR1_AVDO_Values<PWR::CSR1, 16, 1, ReadMode, PWRCSR1Base> ;
    using FieldValues = PWR_CSR1_AVDO_Values<PWR::CSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSR1Pack  = Register<0x58024804, 32, ReadMode, PWRCSR1Base, T...> ;

  struct PWRCR2Base {} ;

  struct CR2 : public RegisterBase<0x58024808, 32, ReadWriteMode>
  {
    using BREN = PWR_CR2_BREN_Values<PWR::CR2, 0, 1, ReadWriteMode, PWRCR2Base> ;
    using MONEN = PWR_CR2_MONEN_Values<PWR::CR2, 4, 1, ReadWriteMode, PWRCR2Base> ;
    using BRRDY = PWR_CR2_BRRDY_Values<PWR::CR2, 16, 1, ReadMode, PWRCR2Base> ;
    using VBATL = PWR_CR2_VBATL_Values<PWR::CR2, 20, 1, ReadMode, PWRCR2Base> ;
    using VBATH = PWR_CR2_VBATH_Values<PWR::CR2, 21, 1, ReadMode, PWRCR2Base> ;
    using TEMPL = PWR_CR2_TEMPL_Values<PWR::CR2, 22, 1, ReadMode, PWRCR2Base> ;
    using TEMPH = PWR_CR2_TEMPH_Values<PWR::CR2, 23, 1, ReadMode, PWRCR2Base> ;
    using FieldValues = PWR_CR2_TEMPH_Values<PWR::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x58024808, 32, ReadWriteMode, PWRCR2Base, T...> ;

  struct PWRCR3Base {} ;

  struct CR3 : public RegisterBase<0x5802480C, 32, ReadWriteMode>
  {
    using BYPASS = PWR_CR3_BYPASS_Values<PWR::CR3, 0, 1, ReadWriteMode, PWRCR3Base> ;
    using LDOEN = PWR_CR3_LDOEN_Values<PWR::CR3, 1, 1, ReadWriteMode, PWRCR3Base> ;
    using SDEN = PWR_CR3_SDEN_Values<PWR::CR3, 2, 1, ReadWriteMode, PWRCR3Base> ;
    using VBE = PWR_CR3_VBE_Values<PWR::CR3, 8, 1, ReadWriteMode, PWRCR3Base> ;
    using VBRS = PWR_CR3_VBRS_Values<PWR::CR3, 9, 1, ReadWriteMode, PWRCR3Base> ;
    using USB33DEN = PWR_CR3_USB33DEN_Values<PWR::CR3, 24, 1, WriteMode, PWRCR3Base> ;
    using USBREGEN = PWR_CR3_USBREGEN_Values<PWR::CR3, 25, 1, ReadWriteMode, PWRCR3Base> ;
    using USB33RDY = PWR_CR3_USB33RDY_Values<PWR::CR3, 26, 1, ReadMode, PWRCR3Base> ;
    using FieldValues = PWR_CR3_USB33RDY_Values<PWR::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x5802480C, 32, ReadWriteMode, PWRCR3Base, T...> ;

  struct PWRCPUCRBase {} ;

  struct CPUCR : public RegisterBase<0x58024810, 32, ReadWriteMode>
  {
    using PDDS_D1 = PWR_CPUCR_PDDS_D1_Values<PWR::CPUCR, 0, 1, ReadWriteMode, PWRCPUCRBase> ;
    using PDDS_D2 = PWR_CPUCR_PDDS_D2_Values<PWR::CPUCR, 1, 1, ReadWriteMode, PWRCPUCRBase> ;
    using PDDS_D3 = PWR_CPUCR_PDDS_D3_Values<PWR::CPUCR, 2, 1, ReadWriteMode, PWRCPUCRBase> ;
    using STOPF = PWR_CPUCR_STOPF_Values<PWR::CPUCR, 5, 1, ReadMode, PWRCPUCRBase> ;
    using SBF = PWR_CPUCR_SBF_Values<PWR::CPUCR, 6, 1, ReadMode, PWRCPUCRBase> ;
    using SBF_D1 = PWR_CPUCR_SBF_D1_Values<PWR::CPUCR, 7, 1, ReadMode, PWRCPUCRBase> ;
    using SBF_D2 = PWR_CPUCR_SBF_D2_Values<PWR::CPUCR, 8, 1, ReadMode, PWRCPUCRBase> ;
    using CSSF = PWR_CPUCR_CSSF_Values<PWR::CPUCR, 9, 1, ReadWriteMode, PWRCPUCRBase> ;
    using RUN_D3 = PWR_CPUCR_RUN_D3_Values<PWR::CPUCR, 11, 1, ReadWriteMode, PWRCPUCRBase> ;
    using FieldValues = PWR_CPUCR_RUN_D3_Values<PWR::CPUCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUCRPack  = Register<0x58024810, 32, ReadWriteMode, PWRCPUCRBase, T...> ;

  struct PWRD3CRBase {} ;

  struct D3CR : public RegisterBase<0x58024818, 32, ReadWriteMode>
  {
    using VOSRDY = PWR_D3CR_VOSRDY_Values<PWR::D3CR, 13, 1, ReadMode, PWRD3CRBase> ;
    using VOS = PWR_D3CR_VOS_Values<PWR::D3CR, 14, 2, ReadWriteMode, PWRD3CRBase> ;
    using FieldValues = PWR_D3CR_VOS_Values<PWR::D3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3CRPack  = Register<0x58024818, 32, ReadWriteMode, PWRD3CRBase, T...> ;

  struct PWRWKUPCRBase {} ;

  struct WKUPCR : public RegisterBase<0x58024820, 32, ReadWriteMode>
  {
    using WKUPC = PWR_WKUPCR_WKUPC_Values<PWR::WKUPCR, 0, 6, ReadWriteMode, PWRWKUPCRBase> ;
    using FieldValues = PWR_WKUPCR_WKUPC_Values<PWR::WKUPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WKUPCRPack  = Register<0x58024820, 32, ReadWriteMode, PWRWKUPCRBase, T...> ;

  struct PWRWKUPFRBase {} ;

  struct WKUPFR : public RegisterBase<0x58024824, 32, ReadWriteMode>
  {
    using WKUPF1 = PWR_WKUPFR_WKUPF1_Values<PWR::WKUPFR, 0, 1, ReadWriteMode, PWRWKUPFRBase> ;
    using WKUPF2 = PWR_WKUPFR_WKUPF2_Values<PWR::WKUPFR, 1, 1, ReadWriteMode, PWRWKUPFRBase> ;
    using WKUPF3 = PWR_WKUPFR_WKUPF3_Values<PWR::WKUPFR, 2, 1, ReadWriteMode, PWRWKUPFRBase> ;
    using WKUPF4 = PWR_WKUPFR_WKUPF4_Values<PWR::WKUPFR, 3, 1, ReadWriteMode, PWRWKUPFRBase> ;
    using WKUPF5 = PWR_WKUPFR_WKUPF5_Values<PWR::WKUPFR, 4, 1, ReadWriteMode, PWRWKUPFRBase> ;
    using WKUPF6 = PWR_WKUPFR_WKUPF6_Values<PWR::WKUPFR, 5, 1, ReadWriteMode, PWRWKUPFRBase> ;
    using FieldValues = PWR_WKUPFR_WKUPF6_Values<PWR::WKUPFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WKUPFRPack  = Register<0x58024824, 32, ReadWriteMode, PWRWKUPFRBase, T...> ;

  struct PWRWKUPEPRBase {} ;

  struct WKUPEPR : public RegisterBase<0x58024828, 32, ReadWriteMode>
  {
    using WKUPEN1 = PWR_WKUPEPR_WKUPEN1_Values<PWR::WKUPEPR, 0, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPEN2 = PWR_WKUPEPR_WKUPEN2_Values<PWR::WKUPEPR, 1, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPEN3 = PWR_WKUPEPR_WKUPEN3_Values<PWR::WKUPEPR, 2, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPEN4 = PWR_WKUPEPR_WKUPEN4_Values<PWR::WKUPEPR, 3, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPEN5 = PWR_WKUPEPR_WKUPEN5_Values<PWR::WKUPEPR, 4, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPEN6 = PWR_WKUPEPR_WKUPEN6_Values<PWR::WKUPEPR, 5, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPP1 = PWR_WKUPEPR_WKUPP1_Values<PWR::WKUPEPR, 8, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPP2 = PWR_WKUPEPR_WKUPP2_Values<PWR::WKUPEPR, 9, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPP3 = PWR_WKUPEPR_WKUPP3_Values<PWR::WKUPEPR, 10, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPP4 = PWR_WKUPEPR_WKUPP4_Values<PWR::WKUPEPR, 11, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPP5 = PWR_WKUPEPR_WKUPP5_Values<PWR::WKUPEPR, 12, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPP6 = PWR_WKUPEPR_WKUPP6_Values<PWR::WKUPEPR, 13, 1, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPPUPD1 = PWR_WKUPEPR_WKUPPUPD1_Values<PWR::WKUPEPR, 16, 2, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPPUPD2 = PWR_WKUPEPR_WKUPPUPD2_Values<PWR::WKUPEPR, 18, 2, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPPUPD3 = PWR_WKUPEPR_WKUPPUPD3_Values<PWR::WKUPEPR, 20, 2, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPPUPD4 = PWR_WKUPEPR_WKUPPUPD4_Values<PWR::WKUPEPR, 22, 2, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPPUPD5 = PWR_WKUPEPR_WKUPPUPD5_Values<PWR::WKUPEPR, 24, 2, ReadWriteMode, PWRWKUPEPRBase> ;
    using WKUPPUPD6 = PWR_WKUPEPR_WKUPPUPD6_Values<PWR::WKUPEPR, 26, 2, ReadWriteMode, PWRWKUPEPRBase> ;
    using FieldValues = PWR_WKUPEPR_WKUPPUPD6_Values<PWR::WKUPEPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WKUPEPRPack  = Register<0x58024828, 32, ReadWriteMode, PWRWKUPEPRBase, T...> ;

} ;

#endif //#if !defined(PWRREGISTERS_HPP)
