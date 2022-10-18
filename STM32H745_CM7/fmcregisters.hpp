/*******************************************************************************
* Filename      : fmcregisters.hpp
*
* Details       : FMC. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(FMCREGISTERS_HPP)
#define FMCREGISTERS_HPP

#include "fmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FMC
{
  struct FMCBCR1Base {} ;

  struct BCR1 : public RegisterBase<0x52004000, 32, ReadWriteMode>
  {
    using MBKEN = FMC_BCR1_MBKEN_Values<FMC::BCR1, 0, 1, ReadWriteMode, FMCBCR1Base> ;
    using MUXEN = FMC_BCR1_MUXEN_Values<FMC::BCR1, 1, 1, ReadWriteMode, FMCBCR1Base> ;
    using MTYP = FMC_BCR1_MTYP_Values<FMC::BCR1, 2, 2, ReadWriteMode, FMCBCR1Base> ;
    using MWID = FMC_BCR1_MWID_Values<FMC::BCR1, 4, 2, ReadWriteMode, FMCBCR1Base> ;
    using FACCEN = FMC_BCR1_FACCEN_Values<FMC::BCR1, 6, 1, ReadWriteMode, FMCBCR1Base> ;
    using BURSTEN = FMC_BCR1_BURSTEN_Values<FMC::BCR1, 8, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITPOL = FMC_BCR1_WAITPOL_Values<FMC::BCR1, 9, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITCFG = FMC_BCR1_WAITCFG_Values<FMC::BCR1, 11, 1, ReadWriteMode, FMCBCR1Base> ;
    using WREN = FMC_BCR1_WREN_Values<FMC::BCR1, 12, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITEN = FMC_BCR1_WAITEN_Values<FMC::BCR1, 13, 1, ReadWriteMode, FMCBCR1Base> ;
    using EXTMOD = FMC_BCR1_EXTMOD_Values<FMC::BCR1, 14, 1, ReadWriteMode, FMCBCR1Base> ;
    using ASYNCWAIT = FMC_BCR1_ASYNCWAIT_Values<FMC::BCR1, 15, 1, ReadWriteMode, FMCBCR1Base> ;
    using CPSIZE = FMC_BCR1_CPSIZE_Values<FMC::BCR1, 16, 3, ReadWriteMode, FMCBCR1Base> ;
    using CBURSTRW = FMC_BCR1_CBURSTRW_Values<FMC::BCR1, 19, 1, ReadWriteMode, FMCBCR1Base> ;
    using CCLKEN = FMC_BCR1_CCLKEN_Values<FMC::BCR1, 20, 1, ReadWriteMode, FMCBCR1Base> ;
    using WFDIS = FMC_BCR1_WFDIS_Values<FMC::BCR1, 21, 1, ReadWriteMode, FMCBCR1Base> ;
    using BMAP = FMC_BCR1_BMAP_Values<FMC::BCR1, 24, 2, ReadWriteMode, FMCBCR1Base> ;
    using FMCEN = FMC_BCR1_FMCEN_Values<FMC::BCR1, 31, 1, ReadWriteMode, FMCBCR1Base> ;
    using FieldValues = FMC_BCR1_FMCEN_Values<FMC::BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR1Pack  = Register<0x52004000, 32, ReadWriteMode, FMCBCR1Base, T...> ;

  struct FMCBTR1Base {} ;

  struct BTR1 : public RegisterBase<0x52004004, 32, ReadWriteMode>
  {
    using ADDSET = FMC_BTR1_ADDSET_Values<FMC::BTR1, 0, 4, ReadWriteMode, FMCBTR1Base> ;
    using ADDHLD = FMC_BTR1_ADDHLD_Values<FMC::BTR1, 4, 4, ReadWriteMode, FMCBTR1Base> ;
    using DATAST = FMC_BTR1_DATAST_Values<FMC::BTR1, 8, 8, ReadWriteMode, FMCBTR1Base> ;
    using BUSTURN = FMC_BTR1_BUSTURN_Values<FMC::BTR1, 16, 4, ReadWriteMode, FMCBTR1Base> ;
    using CLKDIV = FMC_BTR1_CLKDIV_Values<FMC::BTR1, 20, 4, ReadWriteMode, FMCBTR1Base> ;
    using DATLAT = FMC_BTR1_DATLAT_Values<FMC::BTR1, 24, 4, ReadWriteMode, FMCBTR1Base> ;
    using ACCMOD = FMC_BTR1_ACCMOD_Values<FMC::BTR1, 28, 2, ReadWriteMode, FMCBTR1Base> ;
    using FieldValues = FMC_BTR1_ACCMOD_Values<FMC::BTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR1Pack  = Register<0x52004004, 32, ReadWriteMode, FMCBTR1Base, T...> ;

  struct FMCBCR2Base {} ;

  struct BCR2 : public RegisterBase<0x52004008, 32, ReadWriteMode>
  {
    using MBKEN = FMC_BCR2_MBKEN_Values<FMC::BCR2, 0, 1, ReadWriteMode, FMCBCR2Base> ;
    using MUXEN = FMC_BCR2_MUXEN_Values<FMC::BCR2, 1, 1, ReadWriteMode, FMCBCR2Base> ;
    using MTYP = FMC_BCR2_MTYP_Values<FMC::BCR2, 2, 2, ReadWriteMode, FMCBCR2Base> ;
    using MWID = FMC_BCR2_MWID_Values<FMC::BCR2, 4, 2, ReadWriteMode, FMCBCR2Base> ;
    using FACCEN = FMC_BCR2_FACCEN_Values<FMC::BCR2, 6, 1, ReadWriteMode, FMCBCR2Base> ;
    using BURSTEN = FMC_BCR2_BURSTEN_Values<FMC::BCR2, 8, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITPOL = FMC_BCR2_WAITPOL_Values<FMC::BCR2, 9, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITCFG = FMC_BCR2_WAITCFG_Values<FMC::BCR2, 11, 1, ReadWriteMode, FMCBCR2Base> ;
    using WREN = FMC_BCR2_WREN_Values<FMC::BCR2, 12, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITEN = FMC_BCR2_WAITEN_Values<FMC::BCR2, 13, 1, ReadWriteMode, FMCBCR2Base> ;
    using EXTMOD = FMC_BCR2_EXTMOD_Values<FMC::BCR2, 14, 1, ReadWriteMode, FMCBCR2Base> ;
    using ASYNCWAIT = FMC_BCR2_ASYNCWAIT_Values<FMC::BCR2, 15, 1, ReadWriteMode, FMCBCR2Base> ;
    using CPSIZE = FMC_BCR2_CPSIZE_Values<FMC::BCR2, 16, 3, ReadWriteMode, FMCBCR2Base> ;
    using CBURSTRW = FMC_BCR2_CBURSTRW_Values<FMC::BCR2, 19, 1, ReadWriteMode, FMCBCR2Base> ;
    using CCLKEN = FMC_BCR2_CCLKEN_Values<FMC::BCR2, 20, 1, ReadWriteMode, FMCBCR2Base> ;
    using WFDIS = FMC_BCR2_WFDIS_Values<FMC::BCR2, 21, 1, ReadWriteMode, FMCBCR2Base> ;
    using BMAP = FMC_BCR2_BMAP_Values<FMC::BCR2, 24, 2, ReadWriteMode, FMCBCR2Base> ;
    using FMCEN = FMC_BCR2_FMCEN_Values<FMC::BCR2, 31, 1, ReadWriteMode, FMCBCR2Base> ;
    using FieldValues = FMC_BCR2_FMCEN_Values<FMC::BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR2Pack  = Register<0x52004008, 32, ReadWriteMode, FMCBCR2Base, T...> ;

  struct FMCBTR2Base {} ;

  struct BTR2 : public RegisterBase<0x5200400C, 32, ReadWriteMode>
  {
    using ADDSET = FMC_BTR2_ADDSET_Values<FMC::BTR2, 0, 4, ReadWriteMode, FMCBTR2Base> ;
    using ADDHLD = FMC_BTR2_ADDHLD_Values<FMC::BTR2, 4, 4, ReadWriteMode, FMCBTR2Base> ;
    using DATAST = FMC_BTR2_DATAST_Values<FMC::BTR2, 8, 8, ReadWriteMode, FMCBTR2Base> ;
    using BUSTURN = FMC_BTR2_BUSTURN_Values<FMC::BTR2, 16, 4, ReadWriteMode, FMCBTR2Base> ;
    using CLKDIV = FMC_BTR2_CLKDIV_Values<FMC::BTR2, 20, 4, ReadWriteMode, FMCBTR2Base> ;
    using DATLAT = FMC_BTR2_DATLAT_Values<FMC::BTR2, 24, 4, ReadWriteMode, FMCBTR2Base> ;
    using ACCMOD = FMC_BTR2_ACCMOD_Values<FMC::BTR2, 28, 2, ReadWriteMode, FMCBTR2Base> ;
    using FieldValues = FMC_BTR2_ACCMOD_Values<FMC::BTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR2Pack  = Register<0x5200400C, 32, ReadWriteMode, FMCBTR2Base, T...> ;

  struct FMCBCR3Base {} ;

  struct BCR3 : public RegisterBase<0x52004010, 32, ReadWriteMode>
  {
    using MBKEN = FMC_BCR3_MBKEN_Values<FMC::BCR3, 0, 1, ReadWriteMode, FMCBCR3Base> ;
    using MUXEN = FMC_BCR3_MUXEN_Values<FMC::BCR3, 1, 1, ReadWriteMode, FMCBCR3Base> ;
    using MTYP = FMC_BCR3_MTYP_Values<FMC::BCR3, 2, 2, ReadWriteMode, FMCBCR3Base> ;
    using MWID = FMC_BCR3_MWID_Values<FMC::BCR3, 4, 2, ReadWriteMode, FMCBCR3Base> ;
    using FACCEN = FMC_BCR3_FACCEN_Values<FMC::BCR3, 6, 1, ReadWriteMode, FMCBCR3Base> ;
    using BURSTEN = FMC_BCR3_BURSTEN_Values<FMC::BCR3, 8, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITPOL = FMC_BCR3_WAITPOL_Values<FMC::BCR3, 9, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITCFG = FMC_BCR3_WAITCFG_Values<FMC::BCR3, 11, 1, ReadWriteMode, FMCBCR3Base> ;
    using WREN = FMC_BCR3_WREN_Values<FMC::BCR3, 12, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITEN = FMC_BCR3_WAITEN_Values<FMC::BCR3, 13, 1, ReadWriteMode, FMCBCR3Base> ;
    using EXTMOD = FMC_BCR3_EXTMOD_Values<FMC::BCR3, 14, 1, ReadWriteMode, FMCBCR3Base> ;
    using ASYNCWAIT = FMC_BCR3_ASYNCWAIT_Values<FMC::BCR3, 15, 1, ReadWriteMode, FMCBCR3Base> ;
    using CPSIZE = FMC_BCR3_CPSIZE_Values<FMC::BCR3, 16, 3, ReadWriteMode, FMCBCR3Base> ;
    using CBURSTRW = FMC_BCR3_CBURSTRW_Values<FMC::BCR3, 19, 1, ReadWriteMode, FMCBCR3Base> ;
    using CCLKEN = FMC_BCR3_CCLKEN_Values<FMC::BCR3, 20, 1, ReadWriteMode, FMCBCR3Base> ;
    using WFDIS = FMC_BCR3_WFDIS_Values<FMC::BCR3, 21, 1, ReadWriteMode, FMCBCR3Base> ;
    using BMAP = FMC_BCR3_BMAP_Values<FMC::BCR3, 24, 2, ReadWriteMode, FMCBCR3Base> ;
    using FMCEN = FMC_BCR3_FMCEN_Values<FMC::BCR3, 31, 1, ReadWriteMode, FMCBCR3Base> ;
    using FieldValues = FMC_BCR3_FMCEN_Values<FMC::BCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR3Pack  = Register<0x52004010, 32, ReadWriteMode, FMCBCR3Base, T...> ;

  struct FMCBTR3Base {} ;

  struct BTR3 : public RegisterBase<0x52004014, 32, ReadWriteMode>
  {
    using ADDSET = FMC_BTR3_ADDSET_Values<FMC::BTR3, 0, 4, ReadWriteMode, FMCBTR3Base> ;
    using ADDHLD = FMC_BTR3_ADDHLD_Values<FMC::BTR3, 4, 4, ReadWriteMode, FMCBTR3Base> ;
    using DATAST = FMC_BTR3_DATAST_Values<FMC::BTR3, 8, 8, ReadWriteMode, FMCBTR3Base> ;
    using BUSTURN = FMC_BTR3_BUSTURN_Values<FMC::BTR3, 16, 4, ReadWriteMode, FMCBTR3Base> ;
    using CLKDIV = FMC_BTR3_CLKDIV_Values<FMC::BTR3, 20, 4, ReadWriteMode, FMCBTR3Base> ;
    using DATLAT = FMC_BTR3_DATLAT_Values<FMC::BTR3, 24, 4, ReadWriteMode, FMCBTR3Base> ;
    using ACCMOD = FMC_BTR3_ACCMOD_Values<FMC::BTR3, 28, 2, ReadWriteMode, FMCBTR3Base> ;
    using FieldValues = FMC_BTR3_ACCMOD_Values<FMC::BTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR3Pack  = Register<0x52004014, 32, ReadWriteMode, FMCBTR3Base, T...> ;

  struct FMCBCR4Base {} ;

  struct BCR4 : public RegisterBase<0x52004018, 32, ReadWriteMode>
  {
    using MBKEN = FMC_BCR4_MBKEN_Values<FMC::BCR4, 0, 1, ReadWriteMode, FMCBCR4Base> ;
    using MUXEN = FMC_BCR4_MUXEN_Values<FMC::BCR4, 1, 1, ReadWriteMode, FMCBCR4Base> ;
    using MTYP = FMC_BCR4_MTYP_Values<FMC::BCR4, 2, 2, ReadWriteMode, FMCBCR4Base> ;
    using MWID = FMC_BCR4_MWID_Values<FMC::BCR4, 4, 2, ReadWriteMode, FMCBCR4Base> ;
    using FACCEN = FMC_BCR4_FACCEN_Values<FMC::BCR4, 6, 1, ReadWriteMode, FMCBCR4Base> ;
    using BURSTEN = FMC_BCR4_BURSTEN_Values<FMC::BCR4, 8, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITPOL = FMC_BCR4_WAITPOL_Values<FMC::BCR4, 9, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITCFG = FMC_BCR4_WAITCFG_Values<FMC::BCR4, 11, 1, ReadWriteMode, FMCBCR4Base> ;
    using WREN = FMC_BCR4_WREN_Values<FMC::BCR4, 12, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITEN = FMC_BCR4_WAITEN_Values<FMC::BCR4, 13, 1, ReadWriteMode, FMCBCR4Base> ;
    using EXTMOD = FMC_BCR4_EXTMOD_Values<FMC::BCR4, 14, 1, ReadWriteMode, FMCBCR4Base> ;
    using ASYNCWAIT = FMC_BCR4_ASYNCWAIT_Values<FMC::BCR4, 15, 1, ReadWriteMode, FMCBCR4Base> ;
    using CPSIZE = FMC_BCR4_CPSIZE_Values<FMC::BCR4, 16, 3, ReadWriteMode, FMCBCR4Base> ;
    using CBURSTRW = FMC_BCR4_CBURSTRW_Values<FMC::BCR4, 19, 1, ReadWriteMode, FMCBCR4Base> ;
    using CCLKEN = FMC_BCR4_CCLKEN_Values<FMC::BCR4, 20, 1, ReadWriteMode, FMCBCR4Base> ;
    using WFDIS = FMC_BCR4_WFDIS_Values<FMC::BCR4, 21, 1, ReadWriteMode, FMCBCR4Base> ;
    using BMAP = FMC_BCR4_BMAP_Values<FMC::BCR4, 24, 2, ReadWriteMode, FMCBCR4Base> ;
    using FMCEN = FMC_BCR4_FMCEN_Values<FMC::BCR4, 31, 1, ReadWriteMode, FMCBCR4Base> ;
    using FieldValues = FMC_BCR4_FMCEN_Values<FMC::BCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR4Pack  = Register<0x52004018, 32, ReadWriteMode, FMCBCR4Base, T...> ;

  struct FMCBTR4Base {} ;

  struct BTR4 : public RegisterBase<0x5200401C, 32, ReadWriteMode>
  {
    using ADDSET = FMC_BTR4_ADDSET_Values<FMC::BTR4, 0, 4, ReadWriteMode, FMCBTR4Base> ;
    using ADDHLD = FMC_BTR4_ADDHLD_Values<FMC::BTR4, 4, 4, ReadWriteMode, FMCBTR4Base> ;
    using DATAST = FMC_BTR4_DATAST_Values<FMC::BTR4, 8, 8, ReadWriteMode, FMCBTR4Base> ;
    using BUSTURN = FMC_BTR4_BUSTURN_Values<FMC::BTR4, 16, 4, ReadWriteMode, FMCBTR4Base> ;
    using CLKDIV = FMC_BTR4_CLKDIV_Values<FMC::BTR4, 20, 4, ReadWriteMode, FMCBTR4Base> ;
    using DATLAT = FMC_BTR4_DATLAT_Values<FMC::BTR4, 24, 4, ReadWriteMode, FMCBTR4Base> ;
    using ACCMOD = FMC_BTR4_ACCMOD_Values<FMC::BTR4, 28, 2, ReadWriteMode, FMCBTR4Base> ;
    using FieldValues = FMC_BTR4_ACCMOD_Values<FMC::BTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR4Pack  = Register<0x5200401C, 32, ReadWriteMode, FMCBTR4Base, T...> ;

  struct FMCPCRBase {} ;

  struct PCR : public RegisterBase<0x52004080, 32, ReadWriteMode>
  {
    using PWAITEN = FMC_PCR_PWAITEN_Values<FMC::PCR, 1, 1, ReadWriteMode, FMCPCRBase> ;
    using PBKEN = FMC_PCR_PBKEN_Values<FMC::PCR, 2, 1, ReadWriteMode, FMCPCRBase> ;
    using PWID = FMC_PCR_PWID_Values<FMC::PCR, 4, 2, ReadWriteMode, FMCPCRBase> ;
    using ECCEN = FMC_PCR_ECCEN_Values<FMC::PCR, 6, 1, ReadWriteMode, FMCPCRBase> ;
    using TCLR = FMC_PCR_TCLR_Values<FMC::PCR, 9, 4, ReadWriteMode, FMCPCRBase> ;
    using TAR = FMC_PCR_TAR_Values<FMC::PCR, 13, 4, ReadWriteMode, FMCPCRBase> ;
    using ECCPS = FMC_PCR_ECCPS_Values<FMC::PCR, 17, 3, ReadWriteMode, FMCPCRBase> ;
    using FieldValues = FMC_PCR_ECCPS_Values<FMC::PCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCRPack  = Register<0x52004080, 32, ReadWriteMode, FMCPCRBase, T...> ;

  struct FMCSRBase {} ;

  struct SR : public RegisterBase<0x52004084, 32, ReadWriteMode>
  {
    using IRS = FMC_SR_IRS_Values<FMC::SR, 0, 1, ReadWriteMode, FMCSRBase> ;
    using ILS = FMC_SR_ILS_Values<FMC::SR, 1, 1, ReadWriteMode, FMCSRBase> ;
    using IFS = FMC_SR_IFS_Values<FMC::SR, 2, 1, ReadWriteMode, FMCSRBase> ;
    using IREN = FMC_SR_IREN_Values<FMC::SR, 3, 1, ReadWriteMode, FMCSRBase> ;
    using ILEN = FMC_SR_ILEN_Values<FMC::SR, 4, 1, ReadWriteMode, FMCSRBase> ;
    using IFEN = FMC_SR_IFEN_Values<FMC::SR, 5, 1, ReadWriteMode, FMCSRBase> ;
    using FEMPT = FMC_SR_FEMPT_Values<FMC::SR, 6, 1, ReadMode, FMCSRBase> ;
    using FieldValues = FMC_SR_FEMPT_Values<FMC::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x52004084, 32, ReadWriteMode, FMCSRBase, T...> ;

  struct FMCPMEMBase {} ;

  struct PMEM : public RegisterBase<0x52004088, 32, ReadWriteMode>
  {
    using MEMSET = FMC_PMEM_MEMSET_Values<FMC::PMEM, 0, 8, ReadWriteMode, FMCPMEMBase> ;
    using MEMWAIT = FMC_PMEM_MEMWAIT_Values<FMC::PMEM, 8, 8, ReadWriteMode, FMCPMEMBase> ;
    using MEMHOLD = FMC_PMEM_MEMHOLD_Values<FMC::PMEM, 16, 8, ReadWriteMode, FMCPMEMBase> ;
    using MEMHIZ = FMC_PMEM_MEMHIZ_Values<FMC::PMEM, 24, 8, ReadWriteMode, FMCPMEMBase> ;
    using FieldValues = FMC_PMEM_MEMHIZ_Values<FMC::PMEM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMEMPack  = Register<0x52004088, 32, ReadWriteMode, FMCPMEMBase, T...> ;

  struct FMCPATTBase {} ;

  struct PATT : public RegisterBase<0x5200408C, 32, ReadWriteMode>
  {
    using ATTSET = FMC_PATT_ATTSET_Values<FMC::PATT, 0, 8, ReadWriteMode, FMCPATTBase> ;
    using ATTWAIT = FMC_PATT_ATTWAIT_Values<FMC::PATT, 8, 8, ReadWriteMode, FMCPATTBase> ;
    using ATTHOLD = FMC_PATT_ATTHOLD_Values<FMC::PATT, 16, 8, ReadWriteMode, FMCPATTBase> ;
    using ATTHIZ = FMC_PATT_ATTHIZ_Values<FMC::PATT, 24, 8, ReadWriteMode, FMCPATTBase> ;
    using FieldValues = FMC_PATT_ATTHIZ_Values<FMC::PATT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PATTPack  = Register<0x5200408C, 32, ReadWriteMode, FMCPATTBase, T...> ;

  struct FMCECCRBase {} ;

  struct ECCR : public RegisterBase<0x52004094, 32, ReadMode>
  {
    using ECC = FMC_ECCR_ECC_Values<FMC::ECCR, 0, 32, ReadMode, FMCECCRBase> ;
    using FieldValues = FMC_ECCR_ECC_Values<FMC::ECCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECCRPack  = Register<0x52004094, 32, ReadMode, FMCECCRBase, T...> ;

  struct FMCBWTR1Base {} ;

  struct BWTR1 : public RegisterBase<0x52004104, 32, ReadWriteMode>
  {
    using ADDSET = FMC_BWTR1_ADDSET_Values<FMC::BWTR1, 0, 4, ReadWriteMode, FMCBWTR1Base> ;
    using ADDHLD = FMC_BWTR1_ADDHLD_Values<FMC::BWTR1, 4, 4, ReadWriteMode, FMCBWTR1Base> ;
    using DATAST = FMC_BWTR1_DATAST_Values<FMC::BWTR1, 8, 8, ReadWriteMode, FMCBWTR1Base> ;
    using BUSTURN = FMC_BWTR1_BUSTURN_Values<FMC::BWTR1, 16, 4, ReadWriteMode, FMCBWTR1Base> ;
    using ACCMOD = FMC_BWTR1_ACCMOD_Values<FMC::BWTR1, 28, 2, ReadWriteMode, FMCBWTR1Base> ;
    using FieldValues = FMC_BWTR1_ACCMOD_Values<FMC::BWTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR1Pack  = Register<0x52004104, 32, ReadWriteMode, FMCBWTR1Base, T...> ;

  struct FMCBWTR2Base {} ;

  struct BWTR2 : public RegisterBase<0x5200410C, 32, ReadWriteMode>
  {
    using ADDSET = FMC_BWTR2_ADDSET_Values<FMC::BWTR2, 0, 4, ReadWriteMode, FMCBWTR2Base> ;
    using ADDHLD = FMC_BWTR2_ADDHLD_Values<FMC::BWTR2, 4, 4, ReadWriteMode, FMCBWTR2Base> ;
    using DATAST = FMC_BWTR2_DATAST_Values<FMC::BWTR2, 8, 8, ReadWriteMode, FMCBWTR2Base> ;
    using BUSTURN = FMC_BWTR2_BUSTURN_Values<FMC::BWTR2, 16, 4, ReadWriteMode, FMCBWTR2Base> ;
    using ACCMOD = FMC_BWTR2_ACCMOD_Values<FMC::BWTR2, 28, 2, ReadWriteMode, FMCBWTR2Base> ;
    using FieldValues = FMC_BWTR2_ACCMOD_Values<FMC::BWTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR2Pack  = Register<0x5200410C, 32, ReadWriteMode, FMCBWTR2Base, T...> ;

  struct FMCBWTR3Base {} ;

  struct BWTR3 : public RegisterBase<0x52004114, 32, ReadWriteMode>
  {
    using ADDSET = FMC_BWTR3_ADDSET_Values<FMC::BWTR3, 0, 4, ReadWriteMode, FMCBWTR3Base> ;
    using ADDHLD = FMC_BWTR3_ADDHLD_Values<FMC::BWTR3, 4, 4, ReadWriteMode, FMCBWTR3Base> ;
    using DATAST = FMC_BWTR3_DATAST_Values<FMC::BWTR3, 8, 8, ReadWriteMode, FMCBWTR3Base> ;
    using BUSTURN = FMC_BWTR3_BUSTURN_Values<FMC::BWTR3, 16, 4, ReadWriteMode, FMCBWTR3Base> ;
    using ACCMOD = FMC_BWTR3_ACCMOD_Values<FMC::BWTR3, 28, 2, ReadWriteMode, FMCBWTR3Base> ;
    using FieldValues = FMC_BWTR3_ACCMOD_Values<FMC::BWTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR3Pack  = Register<0x52004114, 32, ReadWriteMode, FMCBWTR3Base, T...> ;

  struct FMCBWTR4Base {} ;

  struct BWTR4 : public RegisterBase<0x5200411C, 32, ReadWriteMode>
  {
    using ADDSET = FMC_BWTR4_ADDSET_Values<FMC::BWTR4, 0, 4, ReadWriteMode, FMCBWTR4Base> ;
    using ADDHLD = FMC_BWTR4_ADDHLD_Values<FMC::BWTR4, 4, 4, ReadWriteMode, FMCBWTR4Base> ;
    using DATAST = FMC_BWTR4_DATAST_Values<FMC::BWTR4, 8, 8, ReadWriteMode, FMCBWTR4Base> ;
    using BUSTURN = FMC_BWTR4_BUSTURN_Values<FMC::BWTR4, 16, 4, ReadWriteMode, FMCBWTR4Base> ;
    using ACCMOD = FMC_BWTR4_ACCMOD_Values<FMC::BWTR4, 28, 2, ReadWriteMode, FMCBWTR4Base> ;
    using FieldValues = FMC_BWTR4_ACCMOD_Values<FMC::BWTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR4Pack  = Register<0x5200411C, 32, ReadWriteMode, FMCBWTR4Base, T...> ;

  struct FMCSDCR1Base {} ;

  struct SDCR1 : public RegisterBase<0x52004140, 32, ReadWriteMode>
  {
    using NC = FMC_SDCR1_NC_Values<FMC::SDCR1, 0, 2, ReadWriteMode, FMCSDCR1Base> ;
    using NR = FMC_SDCR1_NR_Values<FMC::SDCR1, 2, 2, ReadWriteMode, FMCSDCR1Base> ;
    using MWID = FMC_SDCR1_MWID_Values<FMC::SDCR1, 4, 2, ReadWriteMode, FMCSDCR1Base> ;
    using NB = FMC_SDCR1_NB_Values<FMC::SDCR1, 6, 1, ReadWriteMode, FMCSDCR1Base> ;
    using CAS = FMC_SDCR1_CAS_Values<FMC::SDCR1, 7, 2, ReadWriteMode, FMCSDCR1Base> ;
    using WP = FMC_SDCR1_WP_Values<FMC::SDCR1, 9, 1, ReadWriteMode, FMCSDCR1Base> ;
    using SDCLK = FMC_SDCR1_SDCLK_Values<FMC::SDCR1, 10, 2, ReadWriteMode, FMCSDCR1Base> ;
    using RBURST = FMC_SDCR1_RBURST_Values<FMC::SDCR1, 12, 1, ReadWriteMode, FMCSDCR1Base> ;
    using RPIPE = FMC_SDCR1_RPIPE_Values<FMC::SDCR1, 13, 2, ReadWriteMode, FMCSDCR1Base> ;
    using FieldValues = FMC_SDCR1_RPIPE_Values<FMC::SDCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SDCR1Pack  = Register<0x52004140, 32, ReadWriteMode, FMCSDCR1Base, T...> ;

  struct FMCSDCR2Base {} ;

  struct SDCR2 : public RegisterBase<0x52004144, 32, ReadWriteMode>
  {
    using NC = FMC_SDCR2_NC_Values<FMC::SDCR2, 0, 2, ReadWriteMode, FMCSDCR2Base> ;
    using NR = FMC_SDCR2_NR_Values<FMC::SDCR2, 2, 2, ReadWriteMode, FMCSDCR2Base> ;
    using MWID = FMC_SDCR2_MWID_Values<FMC::SDCR2, 4, 2, ReadWriteMode, FMCSDCR2Base> ;
    using NB = FMC_SDCR2_NB_Values<FMC::SDCR2, 6, 1, ReadWriteMode, FMCSDCR2Base> ;
    using CAS = FMC_SDCR2_CAS_Values<FMC::SDCR2, 7, 2, ReadWriteMode, FMCSDCR2Base> ;
    using WP = FMC_SDCR2_WP_Values<FMC::SDCR2, 9, 1, ReadWriteMode, FMCSDCR2Base> ;
    using SDCLK = FMC_SDCR2_SDCLK_Values<FMC::SDCR2, 10, 2, ReadWriteMode, FMCSDCR2Base> ;
    using RBURST = FMC_SDCR2_RBURST_Values<FMC::SDCR2, 12, 1, ReadWriteMode, FMCSDCR2Base> ;
    using RPIPE = FMC_SDCR2_RPIPE_Values<FMC::SDCR2, 13, 2, ReadWriteMode, FMCSDCR2Base> ;
    using FieldValues = FMC_SDCR2_RPIPE_Values<FMC::SDCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SDCR2Pack  = Register<0x52004144, 32, ReadWriteMode, FMCSDCR2Base, T...> ;

  struct FMCSDTR1Base {} ;

  struct SDTR1 : public RegisterBase<0x52004148, 32, ReadWriteMode>
  {
    using TMRD = FMC_SDTR1_TMRD_Values<FMC::SDTR1, 0, 4, ReadWriteMode, FMCSDTR1Base> ;
    using TXSR = FMC_SDTR1_TXSR_Values<FMC::SDTR1, 4, 4, ReadWriteMode, FMCSDTR1Base> ;
    using TRAS = FMC_SDTR1_TRAS_Values<FMC::SDTR1, 8, 4, ReadWriteMode, FMCSDTR1Base> ;
    using TRC = FMC_SDTR1_TRC_Values<FMC::SDTR1, 12, 4, ReadWriteMode, FMCSDTR1Base> ;
    using TWR = FMC_SDTR1_TWR_Values<FMC::SDTR1, 16, 4, ReadWriteMode, FMCSDTR1Base> ;
    using TRP = FMC_SDTR1_TRP_Values<FMC::SDTR1, 20, 4, ReadWriteMode, FMCSDTR1Base> ;
    using TRCD = FMC_SDTR1_TRCD_Values<FMC::SDTR1, 24, 4, ReadWriteMode, FMCSDTR1Base> ;
    using FieldValues = FMC_SDTR1_TRCD_Values<FMC::SDTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SDTR1Pack  = Register<0x52004148, 32, ReadWriteMode, FMCSDTR1Base, T...> ;

  struct FMCSDTR2Base {} ;

  struct SDTR2 : public RegisterBase<0x5200414C, 32, ReadWriteMode>
  {
    using TMRD = FMC_SDTR2_TMRD_Values<FMC::SDTR2, 0, 4, ReadWriteMode, FMCSDTR2Base> ;
    using TXSR = FMC_SDTR2_TXSR_Values<FMC::SDTR2, 4, 4, ReadWriteMode, FMCSDTR2Base> ;
    using TRAS = FMC_SDTR2_TRAS_Values<FMC::SDTR2, 8, 4, ReadWriteMode, FMCSDTR2Base> ;
    using TRC = FMC_SDTR2_TRC_Values<FMC::SDTR2, 12, 4, ReadWriteMode, FMCSDTR2Base> ;
    using TWR = FMC_SDTR2_TWR_Values<FMC::SDTR2, 16, 4, ReadWriteMode, FMCSDTR2Base> ;
    using TRP = FMC_SDTR2_TRP_Values<FMC::SDTR2, 20, 4, ReadWriteMode, FMCSDTR2Base> ;
    using TRCD = FMC_SDTR2_TRCD_Values<FMC::SDTR2, 24, 4, ReadWriteMode, FMCSDTR2Base> ;
    using FieldValues = FMC_SDTR2_TRCD_Values<FMC::SDTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SDTR2Pack  = Register<0x5200414C, 32, ReadWriteMode, FMCSDTR2Base, T...> ;

  struct FMCSDCMRBase {} ;

  struct SDCMR : public RegisterBase<0x52004150, 32, ReadWriteMode>
  {
    using MODE = FMC_SDCMR_MODE_Values<FMC::SDCMR, 0, 3, ReadWriteMode, FMCSDCMRBase> ;
    using CTB2 = FMC_SDCMR_CTB2_Values<FMC::SDCMR, 3, 1, ReadWriteMode, FMCSDCMRBase> ;
    using CTB1 = FMC_SDCMR_CTB1_Values<FMC::SDCMR, 4, 1, ReadWriteMode, FMCSDCMRBase> ;
    using NRFS = FMC_SDCMR_NRFS_Values<FMC::SDCMR, 5, 4, ReadWriteMode, FMCSDCMRBase> ;
    using MRD = FMC_SDCMR_MRD_Values<FMC::SDCMR, 9, 14, ReadWriteMode, FMCSDCMRBase> ;
    using FieldValues = FMC_SDCMR_MRD_Values<FMC::SDCMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SDCMRPack  = Register<0x52004150, 32, ReadWriteMode, FMCSDCMRBase, T...> ;

  struct FMCSDRTRBase {} ;

  struct SDRTR : public RegisterBase<0x52004154, 32, ReadWriteMode>
  {
    using CRE = FMC_SDRTR_CRE_Values<FMC::SDRTR, 0, 1, WriteMode, FMCSDRTRBase> ;
    using COUNT = FMC_SDRTR_COUNT_Values<FMC::SDRTR, 1, 13, ReadWriteMode, FMCSDRTRBase> ;
    using REIE = FMC_SDRTR_REIE_Values<FMC::SDRTR, 14, 1, ReadWriteMode, FMCSDRTRBase> ;
    using FieldValues = FMC_SDRTR_REIE_Values<FMC::SDRTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SDRTRPack  = Register<0x52004154, 32, ReadWriteMode, FMCSDRTRBase, T...> ;

  struct FMCSDSRBase {} ;

  struct SDSR : public RegisterBase<0x52004158, 32, ReadMode>
  {
    using RE = FMC_SDSR_RE_Values<FMC::SDSR, 0, 1, ReadMode, FMCSDSRBase> ;
    using MODES1 = FMC_SDSR_MODES1_Values<FMC::SDSR, 1, 2, ReadMode, FMCSDSRBase> ;
    using MODES2 = FMC_SDSR_MODES2_Values<FMC::SDSR, 3, 2, ReadMode, FMCSDSRBase> ;
    using FieldValues = FMC_SDSR_MODES2_Values<FMC::SDSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SDSRPack  = Register<0x52004158, 32, ReadMode, FMCSDSRBase, T...> ;

} ;

#endif //#if !defined(FMCREGISTERS_HPP)
