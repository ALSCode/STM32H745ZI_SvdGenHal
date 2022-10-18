/*******************************************************************************
* Filename      : dsihostregisters.hpp
*
* Details       : DSIHOST. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(DSIHOSTREGISTERS_HPP)
#define DSIHOSTREGISTERS_HPP

#include "dsihostfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DSIHOST
{
  struct DSIHOSTDSI_VRBase {} ;

  struct DSI_VR : public RegisterBase<0x50000000, 32, ReadMode>
  {
    using VERSION = DSIHOST_DSI_VR_VERSION_Values<DSIHOST::DSI_VR, 0, 32, ReadMode, DSIHOSTDSI_VRBase> ;
    using FieldValues = DSIHOST_DSI_VR_VERSION_Values<DSIHOST::DSI_VR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VRPack  = Register<0x50000000, 32, ReadMode, DSIHOSTDSI_VRBase, T...> ;

  struct DSIHOSTDSI_CRBase {} ;

  struct DSI_CR : public RegisterBase<0x50000004, 32, ReadWriteMode>
  {
    using EN = DSIHOST_DSI_CR_EN_Values<DSIHOST::DSI_CR, 0, 1, ReadWriteMode, DSIHOSTDSI_CRBase> ;
    using FieldValues = DSIHOST_DSI_CR_EN_Values<DSIHOST::DSI_CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_CRPack  = Register<0x50000004, 32, ReadWriteMode, DSIHOSTDSI_CRBase, T...> ;

  struct DSIHOSTDSI_CCRBase {} ;

  struct DSI_CCR : public RegisterBase<0x50000008, 32, ReadWriteMode>
  {
    using TXECKDIV = DSIHOST_DSI_CCR_TXECKDIV_Values<DSIHOST::DSI_CCR, 0, 8, ReadWriteMode, DSIHOSTDSI_CCRBase> ;
    using TOCKDIV = DSIHOST_DSI_CCR_TOCKDIV_Values<DSIHOST::DSI_CCR, 8, 8, ReadWriteMode, DSIHOSTDSI_CCRBase> ;
    using FieldValues = DSIHOST_DSI_CCR_TOCKDIV_Values<DSIHOST::DSI_CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_CCRPack  = Register<0x50000008, 32, ReadWriteMode, DSIHOSTDSI_CCRBase, T...> ;

  struct DSIHOSTDSI_LVCIDRBase {} ;

  struct DSI_LVCIDR : public RegisterBase<0x5000000C, 32, ReadWriteMode>
  {
    using VCID = DSIHOST_DSI_LVCIDR_VCID_Values<DSIHOST::DSI_LVCIDR, 0, 2, ReadWriteMode, DSIHOSTDSI_LVCIDRBase> ;
    using FieldValues = DSIHOST_DSI_LVCIDR_VCID_Values<DSIHOST::DSI_LVCIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_LVCIDRPack  = Register<0x5000000C, 32, ReadWriteMode, DSIHOSTDSI_LVCIDRBase, T...> ;

  struct DSIHOSTDSI_LCOLCRBase {} ;

  struct DSI_LCOLCR : public RegisterBase<0x50000010, 32, ReadWriteMode>
  {
    using COLC = DSIHOST_DSI_LCOLCR_COLC_Values<DSIHOST::DSI_LCOLCR, 0, 4, ReadWriteMode, DSIHOSTDSI_LCOLCRBase> ;
    using LPE = DSIHOST_DSI_LCOLCR_LPE_Values<DSIHOST::DSI_LCOLCR, 8, 1, ReadWriteMode, DSIHOSTDSI_LCOLCRBase> ;
    using FieldValues = DSIHOST_DSI_LCOLCR_LPE_Values<DSIHOST::DSI_LCOLCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_LCOLCRPack  = Register<0x50000010, 32, ReadWriteMode, DSIHOSTDSI_LCOLCRBase, T...> ;

  struct DSIHOSTDSI_LPCRBase {} ;

  struct DSI_LPCR : public RegisterBase<0x50000014, 32, ReadWriteMode>
  {
    using DEP = DSIHOST_DSI_LPCR_DEP_Values<DSIHOST::DSI_LPCR, 0, 1, ReadWriteMode, DSIHOSTDSI_LPCRBase> ;
    using VSP = DSIHOST_DSI_LPCR_VSP_Values<DSIHOST::DSI_LPCR, 1, 1, ReadWriteMode, DSIHOSTDSI_LPCRBase> ;
    using HSP = DSIHOST_DSI_LPCR_HSP_Values<DSIHOST::DSI_LPCR, 2, 1, ReadWriteMode, DSIHOSTDSI_LPCRBase> ;
    using FieldValues = DSIHOST_DSI_LPCR_HSP_Values<DSIHOST::DSI_LPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_LPCRPack  = Register<0x50000014, 32, ReadWriteMode, DSIHOSTDSI_LPCRBase, T...> ;

  struct DSIHOSTDSI_LPMCRBase {} ;

  struct DSI_LPMCR : public RegisterBase<0x50000018, 32, ReadWriteMode>
  {
    using VLPSIZE = DSIHOST_DSI_LPMCR_VLPSIZE_Values<DSIHOST::DSI_LPMCR, 0, 8, ReadWriteMode, DSIHOSTDSI_LPMCRBase> ;
    using LPSIZE = DSIHOST_DSI_LPMCR_LPSIZE_Values<DSIHOST::DSI_LPMCR, 16, 8, ReadWriteMode, DSIHOSTDSI_LPMCRBase> ;
    using FieldValues = DSIHOST_DSI_LPMCR_LPSIZE_Values<DSIHOST::DSI_LPMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_LPMCRPack  = Register<0x50000018, 32, ReadWriteMode, DSIHOSTDSI_LPMCRBase, T...> ;

  struct DSIHOSTDSI_PCRBase {} ;

  struct DSI_PCR : public RegisterBase<0x5000002C, 32, ReadWriteMode>
  {
    using ETTXE = DSIHOST_DSI_PCR_ETTXE_Values<DSIHOST::DSI_PCR, 0, 1, ReadWriteMode, DSIHOSTDSI_PCRBase> ;
    using ETRXE = DSIHOST_DSI_PCR_ETRXE_Values<DSIHOST::DSI_PCR, 1, 1, ReadWriteMode, DSIHOSTDSI_PCRBase> ;
    using BTAE = DSIHOST_DSI_PCR_BTAE_Values<DSIHOST::DSI_PCR, 2, 1, ReadWriteMode, DSIHOSTDSI_PCRBase> ;
    using ECCRXE = DSIHOST_DSI_PCR_ECCRXE_Values<DSIHOST::DSI_PCR, 3, 1, ReadWriteMode, DSIHOSTDSI_PCRBase> ;
    using CRCRXE = DSIHOST_DSI_PCR_CRCRXE_Values<DSIHOST::DSI_PCR, 4, 1, ReadWriteMode, DSIHOSTDSI_PCRBase> ;
    using FieldValues = DSIHOST_DSI_PCR_CRCRXE_Values<DSIHOST::DSI_PCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_PCRPack  = Register<0x5000002C, 32, ReadWriteMode, DSIHOSTDSI_PCRBase, T...> ;

  struct DSIHOSTDSI_GVCIDRBase {} ;

  struct DSI_GVCIDR : public RegisterBase<0x50000030, 32, ReadMode>
  {
    using VCID = DSIHOST_DSI_GVCIDR_VCID_Values<DSIHOST::DSI_GVCIDR, 0, 2, ReadMode, DSIHOSTDSI_GVCIDRBase> ;
    using FieldValues = DSIHOST_DSI_GVCIDR_VCID_Values<DSIHOST::DSI_GVCIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_GVCIDRPack  = Register<0x50000030, 32, ReadMode, DSIHOSTDSI_GVCIDRBase, T...> ;

  struct DSIHOSTDSI_MCRBase {} ;

  struct DSI_MCR : public RegisterBase<0x50000034, 32, ReadWriteMode>
  {
    using CMDM = DSIHOST_DSI_MCR_CMDM_Values<DSIHOST::DSI_MCR, 0, 1, ReadWriteMode, DSIHOSTDSI_MCRBase> ;
    using FieldValues = DSIHOST_DSI_MCR_CMDM_Values<DSIHOST::DSI_MCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_MCRPack  = Register<0x50000034, 32, ReadWriteMode, DSIHOSTDSI_MCRBase, T...> ;

  struct DSIHOSTDSI_VMCRBase {} ;

  struct DSI_VMCR : public RegisterBase<0x50000038, 32, ReadWriteMode>
  {
    using VMT = DSIHOST_DSI_VMCR_VMT_Values<DSIHOST::DSI_VMCR, 0, 2, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using LPVSAE = DSIHOST_DSI_VMCR_LPVSAE_Values<DSIHOST::DSI_VMCR, 8, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using LPVBPE = DSIHOST_DSI_VMCR_LPVBPE_Values<DSIHOST::DSI_VMCR, 9, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using LPVFPE = DSIHOST_DSI_VMCR_LPVFPE_Values<DSIHOST::DSI_VMCR, 10, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using LPVAE = DSIHOST_DSI_VMCR_LPVAE_Values<DSIHOST::DSI_VMCR, 11, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using LPHBPE = DSIHOST_DSI_VMCR_LPHBPE_Values<DSIHOST::DSI_VMCR, 12, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using LPHFPE = DSIHOST_DSI_VMCR_LPHFPE_Values<DSIHOST::DSI_VMCR, 13, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using FBTAAE = DSIHOST_DSI_VMCR_FBTAAE_Values<DSIHOST::DSI_VMCR, 14, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using LPCE = DSIHOST_DSI_VMCR_LPCE_Values<DSIHOST::DSI_VMCR, 15, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using PGE = DSIHOST_DSI_VMCR_PGE_Values<DSIHOST::DSI_VMCR, 16, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using PGM = DSIHOST_DSI_VMCR_PGM_Values<DSIHOST::DSI_VMCR, 20, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using PGO = DSIHOST_DSI_VMCR_PGO_Values<DSIHOST::DSI_VMCR, 24, 1, ReadWriteMode, DSIHOSTDSI_VMCRBase> ;
    using FieldValues = DSIHOST_DSI_VMCR_PGO_Values<DSIHOST::DSI_VMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VMCRPack  = Register<0x50000038, 32, ReadWriteMode, DSIHOSTDSI_VMCRBase, T...> ;

  struct DSIHOSTDSI_VPCRBase {} ;

  struct DSI_VPCR : public RegisterBase<0x5000003C, 32, ReadWriteMode>
  {
    using VPSIZE = DSIHOST_DSI_VPCR_VPSIZE_Values<DSIHOST::DSI_VPCR, 0, 14, ReadWriteMode, DSIHOSTDSI_VPCRBase> ;
    using FieldValues = DSIHOST_DSI_VPCR_VPSIZE_Values<DSIHOST::DSI_VPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VPCRPack  = Register<0x5000003C, 32, ReadWriteMode, DSIHOSTDSI_VPCRBase, T...> ;

  struct DSIHOSTDSI_VCCRBase {} ;

  struct DSI_VCCR : public RegisterBase<0x50000040, 32, ReadWriteMode>
  {
    using NUMC = DSIHOST_DSI_VCCR_NUMC_Values<DSIHOST::DSI_VCCR, 0, 13, ReadWriteMode, DSIHOSTDSI_VCCRBase> ;
    using FieldValues = DSIHOST_DSI_VCCR_NUMC_Values<DSIHOST::DSI_VCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VCCRPack  = Register<0x50000040, 32, ReadWriteMode, DSIHOSTDSI_VCCRBase, T...> ;

  struct DSIHOSTDSI_VNPCRBase {} ;

  struct DSI_VNPCR : public RegisterBase<0x50000044, 32, ReadWriteMode>
  {
    using NPSIZE = DSIHOST_DSI_VNPCR_NPSIZE_Values<DSIHOST::DSI_VNPCR, 0, 13, ReadWriteMode, DSIHOSTDSI_VNPCRBase> ;
    using FieldValues = DSIHOST_DSI_VNPCR_NPSIZE_Values<DSIHOST::DSI_VNPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VNPCRPack  = Register<0x50000044, 32, ReadWriteMode, DSIHOSTDSI_VNPCRBase, T...> ;

  struct DSIHOSTDSI_VHSACRBase {} ;

  struct DSI_VHSACR : public RegisterBase<0x50000048, 32, ReadWriteMode>
  {
    using HSA = DSIHOST_DSI_VHSACR_HSA_Values<DSIHOST::DSI_VHSACR, 0, 12, ReadWriteMode, DSIHOSTDSI_VHSACRBase> ;
    using FieldValues = DSIHOST_DSI_VHSACR_HSA_Values<DSIHOST::DSI_VHSACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VHSACRPack  = Register<0x50000048, 32, ReadWriteMode, DSIHOSTDSI_VHSACRBase, T...> ;

  struct DSIHOSTDSI_VHBPCRBase {} ;

  struct DSI_VHBPCR : public RegisterBase<0x5000004C, 32, ReadWriteMode>
  {
    using HBP = DSIHOST_DSI_VHBPCR_HBP_Values<DSIHOST::DSI_VHBPCR, 0, 12, ReadWriteMode, DSIHOSTDSI_VHBPCRBase> ;
    using FieldValues = DSIHOST_DSI_VHBPCR_HBP_Values<DSIHOST::DSI_VHBPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VHBPCRPack  = Register<0x5000004C, 32, ReadWriteMode, DSIHOSTDSI_VHBPCRBase, T...> ;

  struct DSIHOSTDSI_VLCRBase {} ;

  struct DSI_VLCR : public RegisterBase<0x50000050, 32, ReadWriteMode>
  {
    using HLINE = DSIHOST_DSI_VLCR_HLINE_Values<DSIHOST::DSI_VLCR, 0, 15, ReadWriteMode, DSIHOSTDSI_VLCRBase> ;
    using FieldValues = DSIHOST_DSI_VLCR_HLINE_Values<DSIHOST::DSI_VLCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VLCRPack  = Register<0x50000050, 32, ReadWriteMode, DSIHOSTDSI_VLCRBase, T...> ;

  struct DSIHOSTDSI_VVSACRBase {} ;

  struct DSI_VVSACR : public RegisterBase<0x50000054, 32, ReadWriteMode>
  {
    using VSA = DSIHOST_DSI_VVSACR_VSA_Values<DSIHOST::DSI_VVSACR, 0, 10, ReadWriteMode, DSIHOSTDSI_VVSACRBase> ;
    using FieldValues = DSIHOST_DSI_VVSACR_VSA_Values<DSIHOST::DSI_VVSACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VVSACRPack  = Register<0x50000054, 32, ReadWriteMode, DSIHOSTDSI_VVSACRBase, T...> ;

  struct DSIHOSTDSI_VVBPCRBase {} ;

  struct DSI_VVBPCR : public RegisterBase<0x50000058, 32, ReadWriteMode>
  {
    using VBP = DSIHOST_DSI_VVBPCR_VBP_Values<DSIHOST::DSI_VVBPCR, 0, 10, ReadWriteMode, DSIHOSTDSI_VVBPCRBase> ;
    using FieldValues = DSIHOST_DSI_VVBPCR_VBP_Values<DSIHOST::DSI_VVBPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VVBPCRPack  = Register<0x50000058, 32, ReadWriteMode, DSIHOSTDSI_VVBPCRBase, T...> ;

  struct DSIHOSTDSI_VVFPCRBase {} ;

  struct DSI_VVFPCR : public RegisterBase<0x5000005C, 32, ReadWriteMode>
  {
    using VFP = DSIHOST_DSI_VVFPCR_VFP_Values<DSIHOST::DSI_VVFPCR, 0, 10, ReadWriteMode, DSIHOSTDSI_VVFPCRBase> ;
    using FieldValues = DSIHOST_DSI_VVFPCR_VFP_Values<DSIHOST::DSI_VVFPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VVFPCRPack  = Register<0x5000005C, 32, ReadWriteMode, DSIHOSTDSI_VVFPCRBase, T...> ;

  struct DSIHOSTDSI_VVACRBase {} ;

  struct DSI_VVACR : public RegisterBase<0x50000060, 32, ReadWriteMode>
  {
    using VA = DSIHOST_DSI_VVACR_VA_Values<DSIHOST::DSI_VVACR, 0, 14, ReadWriteMode, DSIHOSTDSI_VVACRBase> ;
    using FieldValues = DSIHOST_DSI_VVACR_VA_Values<DSIHOST::DSI_VVACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VVACRPack  = Register<0x50000060, 32, ReadWriteMode, DSIHOSTDSI_VVACRBase, T...> ;

  struct DSIHOSTDSI_LCCRBase {} ;

  struct DSI_LCCR : public RegisterBase<0x50000064, 32, ReadWriteMode>
  {
    using CMDSIZE = DSIHOST_DSI_LCCR_CMDSIZE_Values<DSIHOST::DSI_LCCR, 0, 16, ReadWriteMode, DSIHOSTDSI_LCCRBase> ;
    using FieldValues = DSIHOST_DSI_LCCR_CMDSIZE_Values<DSIHOST::DSI_LCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_LCCRPack  = Register<0x50000064, 32, ReadWriteMode, DSIHOSTDSI_LCCRBase, T...> ;

  struct DSIHOSTDSI_CMCRBase {} ;

  struct DSI_CMCR : public RegisterBase<0x50000068, 32, ReadWriteMode>
  {
    using TEARE = DSIHOST_DSI_CMCR_TEARE_Values<DSIHOST::DSI_CMCR, 0, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using ARE = DSIHOST_DSI_CMCR_ARE_Values<DSIHOST::DSI_CMCR, 1, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using GSW0TX = DSIHOST_DSI_CMCR_GSW0TX_Values<DSIHOST::DSI_CMCR, 8, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using GSW1TX = DSIHOST_DSI_CMCR_GSW1TX_Values<DSIHOST::DSI_CMCR, 9, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using GSW2TX = DSIHOST_DSI_CMCR_GSW2TX_Values<DSIHOST::DSI_CMCR, 10, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using GSR0TX = DSIHOST_DSI_CMCR_GSR0TX_Values<DSIHOST::DSI_CMCR, 11, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using GSR1TX = DSIHOST_DSI_CMCR_GSR1TX_Values<DSIHOST::DSI_CMCR, 12, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using GSR2TX = DSIHOST_DSI_CMCR_GSR2TX_Values<DSIHOST::DSI_CMCR, 13, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using GLWTX = DSIHOST_DSI_CMCR_GLWTX_Values<DSIHOST::DSI_CMCR, 14, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using DSW0TX = DSIHOST_DSI_CMCR_DSW0TX_Values<DSIHOST::DSI_CMCR, 16, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using DSW1TX = DSIHOST_DSI_CMCR_DSW1TX_Values<DSIHOST::DSI_CMCR, 17, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using DSR0TX = DSIHOST_DSI_CMCR_DSR0TX_Values<DSIHOST::DSI_CMCR, 18, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using DLWTX = DSIHOST_DSI_CMCR_DLWTX_Values<DSIHOST::DSI_CMCR, 19, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using MRDPS = DSIHOST_DSI_CMCR_MRDPS_Values<DSIHOST::DSI_CMCR, 24, 1, ReadWriteMode, DSIHOSTDSI_CMCRBase> ;
    using FieldValues = DSIHOST_DSI_CMCR_MRDPS_Values<DSIHOST::DSI_CMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_CMCRPack  = Register<0x50000068, 32, ReadWriteMode, DSIHOSTDSI_CMCRBase, T...> ;

  struct DSIHOSTDSI_GHCRBase {} ;

  struct DSI_GHCR : public RegisterBase<0x5000006C, 32, ReadWriteMode>
  {
    using DT = DSIHOST_DSI_GHCR_DT_Values<DSIHOST::DSI_GHCR, 0, 6, ReadWriteMode, DSIHOSTDSI_GHCRBase> ;
    using VCID = DSIHOST_DSI_GHCR_VCID_Values<DSIHOST::DSI_GHCR, 6, 2, ReadWriteMode, DSIHOSTDSI_GHCRBase> ;
    using WCLSB = DSIHOST_DSI_GHCR_WCLSB_Values<DSIHOST::DSI_GHCR, 8, 8, ReadWriteMode, DSIHOSTDSI_GHCRBase> ;
    using WCMSB = DSIHOST_DSI_GHCR_WCMSB_Values<DSIHOST::DSI_GHCR, 16, 8, ReadWriteMode, DSIHOSTDSI_GHCRBase> ;
    using FieldValues = DSIHOST_DSI_GHCR_WCMSB_Values<DSIHOST::DSI_GHCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_GHCRPack  = Register<0x5000006C, 32, ReadWriteMode, DSIHOSTDSI_GHCRBase, T...> ;

  struct DSIHOSTDSI_GPDRBase {} ;

  struct DSI_GPDR : public RegisterBase<0x50000070, 32, ReadWriteMode>
  {
    using DATA1 = DSIHOST_DSI_GPDR_DATA1_Values<DSIHOST::DSI_GPDR, 0, 8, ReadWriteMode, DSIHOSTDSI_GPDRBase> ;
    using DATA2 = DSIHOST_DSI_GPDR_DATA2_Values<DSIHOST::DSI_GPDR, 8, 8, ReadWriteMode, DSIHOSTDSI_GPDRBase> ;
    using DATA3 = DSIHOST_DSI_GPDR_DATA3_Values<DSIHOST::DSI_GPDR, 16, 8, ReadWriteMode, DSIHOSTDSI_GPDRBase> ;
    using DATA4 = DSIHOST_DSI_GPDR_DATA4_Values<DSIHOST::DSI_GPDR, 24, 8, ReadWriteMode, DSIHOSTDSI_GPDRBase> ;
    using FieldValues = DSIHOST_DSI_GPDR_DATA4_Values<DSIHOST::DSI_GPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_GPDRPack  = Register<0x50000070, 32, ReadWriteMode, DSIHOSTDSI_GPDRBase, T...> ;

  struct DSIHOSTDSI_GPSRBase {} ;

  struct DSI_GPSR : public RegisterBase<0x50000074, 32, ReadMode>
  {
    using CMDFE = DSIHOST_DSI_GPSR_CMDFE_Values<DSIHOST::DSI_GPSR, 0, 1, ReadMode, DSIHOSTDSI_GPSRBase> ;
    using CMDFF = DSIHOST_DSI_GPSR_CMDFF_Values<DSIHOST::DSI_GPSR, 1, 1, ReadMode, DSIHOSTDSI_GPSRBase> ;
    using PWRFE = DSIHOST_DSI_GPSR_PWRFE_Values<DSIHOST::DSI_GPSR, 2, 1, ReadMode, DSIHOSTDSI_GPSRBase> ;
    using PWRFF = DSIHOST_DSI_GPSR_PWRFF_Values<DSIHOST::DSI_GPSR, 3, 1, ReadMode, DSIHOSTDSI_GPSRBase> ;
    using PRDFE = DSIHOST_DSI_GPSR_PRDFE_Values<DSIHOST::DSI_GPSR, 4, 1, ReadMode, DSIHOSTDSI_GPSRBase> ;
    using PRDFF = DSIHOST_DSI_GPSR_PRDFF_Values<DSIHOST::DSI_GPSR, 5, 1, ReadMode, DSIHOSTDSI_GPSRBase> ;
    using RCB = DSIHOST_DSI_GPSR_RCB_Values<DSIHOST::DSI_GPSR, 6, 1, ReadMode, DSIHOSTDSI_GPSRBase> ;
    using FieldValues = DSIHOST_DSI_GPSR_RCB_Values<DSIHOST::DSI_GPSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_GPSRPack  = Register<0x50000074, 32, ReadMode, DSIHOSTDSI_GPSRBase, T...> ;

  struct DSIHOSTDSI_TCCR0Base {} ;

  struct DSI_TCCR0 : public RegisterBase<0x50000078, 32, ReadWriteMode>
  {
    using LPRX_TOCNT = DSIHOST_DSI_TCCR0_LPRX_TOCNT_Values<DSIHOST::DSI_TCCR0, 0, 16, ReadWriteMode, DSIHOSTDSI_TCCR0Base> ;
    using HSTX_TOCNT = DSIHOST_DSI_TCCR0_HSTX_TOCNT_Values<DSIHOST::DSI_TCCR0, 16, 16, ReadWriteMode, DSIHOSTDSI_TCCR0Base> ;
    using FieldValues = DSIHOST_DSI_TCCR0_HSTX_TOCNT_Values<DSIHOST::DSI_TCCR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_TCCR0Pack  = Register<0x50000078, 32, ReadWriteMode, DSIHOSTDSI_TCCR0Base, T...> ;

  struct DSIHOSTDSI_TCCR1Base {} ;

  struct DSI_TCCR1 : public RegisterBase<0x5000007C, 32, ReadWriteMode>
  {
    using HSRD_TOCNT = DSIHOST_DSI_TCCR1_HSRD_TOCNT_Values<DSIHOST::DSI_TCCR1, 0, 16, ReadWriteMode, DSIHOSTDSI_TCCR1Base> ;
    using FieldValues = DSIHOST_DSI_TCCR1_HSRD_TOCNT_Values<DSIHOST::DSI_TCCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_TCCR1Pack  = Register<0x5000007C, 32, ReadWriteMode, DSIHOSTDSI_TCCR1Base, T...> ;

  struct DSIHOSTDSI_TCCR2Base {} ;

  struct DSI_TCCR2 : public RegisterBase<0x50000080, 32, ReadWriteMode>
  {
    using LPRD_TOCNT = DSIHOST_DSI_TCCR2_LPRD_TOCNT_Values<DSIHOST::DSI_TCCR2, 0, 16, ReadWriteMode, DSIHOSTDSI_TCCR2Base> ;
    using FieldValues = DSIHOST_DSI_TCCR2_LPRD_TOCNT_Values<DSIHOST::DSI_TCCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_TCCR2Pack  = Register<0x50000080, 32, ReadWriteMode, DSIHOSTDSI_TCCR2Base, T...> ;

  struct DSIHOSTDSI_TCCR3Base {} ;

  struct DSI_TCCR3 : public RegisterBase<0x50000084, 32, ReadWriteMode>
  {
    using HSWR_TOCNT = DSIHOST_DSI_TCCR3_HSWR_TOCNT_Values<DSIHOST::DSI_TCCR3, 0, 16, ReadWriteMode, DSIHOSTDSI_TCCR3Base> ;
    using PM = DSIHOST_DSI_TCCR3_PM_Values<DSIHOST::DSI_TCCR3, 24, 1, ReadWriteMode, DSIHOSTDSI_TCCR3Base> ;
    using FieldValues = DSIHOST_DSI_TCCR3_PM_Values<DSIHOST::DSI_TCCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_TCCR3Pack  = Register<0x50000084, 32, ReadWriteMode, DSIHOSTDSI_TCCR3Base, T...> ;

  struct DSIHOSTDSI_TCCR4Base {} ;

  struct DSI_TCCR4 : public RegisterBase<0x50000088, 32, ReadWriteMode>
  {
    using LPWR_TOCNT = DSIHOST_DSI_TCCR4_LPWR_TOCNT_Values<DSIHOST::DSI_TCCR4, 0, 16, ReadWriteMode, DSIHOSTDSI_TCCR4Base> ;
    using FieldValues = DSIHOST_DSI_TCCR4_LPWR_TOCNT_Values<DSIHOST::DSI_TCCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_TCCR4Pack  = Register<0x50000088, 32, ReadWriteMode, DSIHOSTDSI_TCCR4Base, T...> ;

  struct DSIHOSTDSI_TCCR5Base {} ;

  struct DSI_TCCR5 : public RegisterBase<0x5000008C, 32, ReadWriteMode>
  {
    using BTA_TOCNT = DSIHOST_DSI_TCCR5_BTA_TOCNT_Values<DSIHOST::DSI_TCCR5, 0, 16, ReadWriteMode, DSIHOSTDSI_TCCR5Base> ;
    using FieldValues = DSIHOST_DSI_TCCR5_BTA_TOCNT_Values<DSIHOST::DSI_TCCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_TCCR5Pack  = Register<0x5000008C, 32, ReadWriteMode, DSIHOSTDSI_TCCR5Base, T...> ;

  struct DSIHOSTDSI_CLCRBase {} ;

  struct DSI_CLCR : public RegisterBase<0x50000094, 32, ReadWriteMode>
  {
    using DPCC = DSIHOST_DSI_CLCR_DPCC_Values<DSIHOST::DSI_CLCR, 0, 1, ReadWriteMode, DSIHOSTDSI_CLCRBase> ;
    using ACR = DSIHOST_DSI_CLCR_ACR_Values<DSIHOST::DSI_CLCR, 1, 1, ReadWriteMode, DSIHOSTDSI_CLCRBase> ;
    using FieldValues = DSIHOST_DSI_CLCR_ACR_Values<DSIHOST::DSI_CLCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_CLCRPack  = Register<0x50000094, 32, ReadWriteMode, DSIHOSTDSI_CLCRBase, T...> ;

  struct DSIHOSTDSI_CLTCRBase {} ;

  struct DSI_CLTCR : public RegisterBase<0x50000098, 32, ReadWriteMode>
  {
    using LP2HS_TIME = DSIHOST_DSI_CLTCR_LP2HS_TIME_Values<DSIHOST::DSI_CLTCR, 0, 10, ReadWriteMode, DSIHOSTDSI_CLTCRBase> ;
    using HS2LP_TIME = DSIHOST_DSI_CLTCR_HS2LP_TIME_Values<DSIHOST::DSI_CLTCR, 16, 10, ReadWriteMode, DSIHOSTDSI_CLTCRBase> ;
    using FieldValues = DSIHOST_DSI_CLTCR_HS2LP_TIME_Values<DSIHOST::DSI_CLTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_CLTCRPack  = Register<0x50000098, 32, ReadWriteMode, DSIHOSTDSI_CLTCRBase, T...> ;

  struct DSIHOSTDSI_DLTCRBase {} ;

  struct DSI_DLTCR : public RegisterBase<0x5000009C, 32, ReadWriteMode>
  {
    using MRD_TIME = DSIHOST_DSI_DLTCR_MRD_TIME_Values<DSIHOST::DSI_DLTCR, 0, 15, ReadWriteMode, DSIHOSTDSI_DLTCRBase> ;
    using LP2HS_TIME = DSIHOST_DSI_DLTCR_LP2HS_TIME_Values<DSIHOST::DSI_DLTCR, 16, 8, ReadWriteMode, DSIHOSTDSI_DLTCRBase> ;
    using HS2LP_TIME = DSIHOST_DSI_DLTCR_HS2LP_TIME_Values<DSIHOST::DSI_DLTCR, 24, 8, ReadWriteMode, DSIHOSTDSI_DLTCRBase> ;
    using FieldValues = DSIHOST_DSI_DLTCR_HS2LP_TIME_Values<DSIHOST::DSI_DLTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_DLTCRPack  = Register<0x5000009C, 32, ReadWriteMode, DSIHOSTDSI_DLTCRBase, T...> ;

  struct DSIHOSTDSI_PCTLRBase {} ;

  struct DSI_PCTLR : public RegisterBase<0x500000A0, 32, ReadWriteMode>
  {
    using DEN = DSIHOST_DSI_PCTLR_DEN_Values<DSIHOST::DSI_PCTLR, 1, 1, ReadWriteMode, DSIHOSTDSI_PCTLRBase> ;
    using CKE = DSIHOST_DSI_PCTLR_CKE_Values<DSIHOST::DSI_PCTLR, 2, 1, ReadWriteMode, DSIHOSTDSI_PCTLRBase> ;
    using FieldValues = DSIHOST_DSI_PCTLR_CKE_Values<DSIHOST::DSI_PCTLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_PCTLRPack  = Register<0x500000A0, 32, ReadWriteMode, DSIHOSTDSI_PCTLRBase, T...> ;

  struct DSIHOSTDSI_PCONFRBase {} ;

  struct DSI_PCONFR : public RegisterBase<0x500000A4, 32, ReadWriteMode>
  {
    using NL = DSIHOST_DSI_PCONFR_NL_Values<DSIHOST::DSI_PCONFR, 0, 2, ReadWriteMode, DSIHOSTDSI_PCONFRBase> ;
    using SW_TIME = DSIHOST_DSI_PCONFR_SW_TIME_Values<DSIHOST::DSI_PCONFR, 8, 8, ReadWriteMode, DSIHOSTDSI_PCONFRBase> ;
    using FieldValues = DSIHOST_DSI_PCONFR_SW_TIME_Values<DSIHOST::DSI_PCONFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_PCONFRPack  = Register<0x500000A4, 32, ReadWriteMode, DSIHOSTDSI_PCONFRBase, T...> ;

  struct DSIHOSTDSI_PUCRBase {} ;

  struct DSI_PUCR : public RegisterBase<0x500000A8, 32, ReadWriteMode>
  {
    using URCL = DSIHOST_DSI_PUCR_URCL_Values<DSIHOST::DSI_PUCR, 0, 1, ReadWriteMode, DSIHOSTDSI_PUCRBase> ;
    using UECL = DSIHOST_DSI_PUCR_UECL_Values<DSIHOST::DSI_PUCR, 1, 1, ReadWriteMode, DSIHOSTDSI_PUCRBase> ;
    using URDL = DSIHOST_DSI_PUCR_URDL_Values<DSIHOST::DSI_PUCR, 2, 1, ReadWriteMode, DSIHOSTDSI_PUCRBase> ;
    using UEDL = DSIHOST_DSI_PUCR_UEDL_Values<DSIHOST::DSI_PUCR, 3, 1, ReadWriteMode, DSIHOSTDSI_PUCRBase> ;
    using FieldValues = DSIHOST_DSI_PUCR_UEDL_Values<DSIHOST::DSI_PUCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_PUCRPack  = Register<0x500000A8, 32, ReadWriteMode, DSIHOSTDSI_PUCRBase, T...> ;

  struct DSIHOSTDSI_PTTCRBase {} ;

  struct DSI_PTTCR : public RegisterBase<0x500000AC, 32, ReadWriteMode>
  {
    using TX_TRIG = DSIHOST_DSI_PTTCR_TX_TRIG_Values<DSIHOST::DSI_PTTCR, 0, 4, ReadWriteMode, DSIHOSTDSI_PTTCRBase> ;
    using FieldValues = DSIHOST_DSI_PTTCR_TX_TRIG_Values<DSIHOST::DSI_PTTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_PTTCRPack  = Register<0x500000AC, 32, ReadWriteMode, DSIHOSTDSI_PTTCRBase, T...> ;

  struct DSIHOSTDSI_PSRBase {} ;

  struct DSI_PSR : public RegisterBase<0x500000B0, 32, ReadMode>
  {
    using PD = DSIHOST_DSI_PSR_PD_Values<DSIHOST::DSI_PSR, 1, 1, ReadMode, DSIHOSTDSI_PSRBase> ;
    using PSSC = DSIHOST_DSI_PSR_PSSC_Values<DSIHOST::DSI_PSR, 2, 1, ReadMode, DSIHOSTDSI_PSRBase> ;
    using UANC = DSIHOST_DSI_PSR_UANC_Values<DSIHOST::DSI_PSR, 3, 1, ReadMode, DSIHOSTDSI_PSRBase> ;
    using PSS0 = DSIHOST_DSI_PSR_PSS0_Values<DSIHOST::DSI_PSR, 4, 1, ReadMode, DSIHOSTDSI_PSRBase> ;
    using UAN0 = DSIHOST_DSI_PSR_UAN0_Values<DSIHOST::DSI_PSR, 5, 1, ReadMode, DSIHOSTDSI_PSRBase> ;
    using RUE0 = DSIHOST_DSI_PSR_RUE0_Values<DSIHOST::DSI_PSR, 6, 1, ReadMode, DSIHOSTDSI_PSRBase> ;
    using PSS1 = DSIHOST_DSI_PSR_PSS1_Values<DSIHOST::DSI_PSR, 7, 1, ReadMode, DSIHOSTDSI_PSRBase> ;
    using UAN1 = DSIHOST_DSI_PSR_UAN1_Values<DSIHOST::DSI_PSR, 8, 1, ReadMode, DSIHOSTDSI_PSRBase> ;
    using FieldValues = DSIHOST_DSI_PSR_UAN1_Values<DSIHOST::DSI_PSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_PSRPack  = Register<0x500000B0, 32, ReadMode, DSIHOSTDSI_PSRBase, T...> ;

  struct DSIHOSTDSI_ISR0Base {} ;

  struct DSI_ISR0 : public RegisterBase<0x500000BC, 32, ReadMode>
  {
    using AE0 = DSIHOST_DSI_ISR0_AE0_Values<DSIHOST::DSI_ISR0, 0, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE1 = DSIHOST_DSI_ISR0_AE1_Values<DSIHOST::DSI_ISR0, 1, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE2 = DSIHOST_DSI_ISR0_AE2_Values<DSIHOST::DSI_ISR0, 2, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE3 = DSIHOST_DSI_ISR0_AE3_Values<DSIHOST::DSI_ISR0, 3, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE4 = DSIHOST_DSI_ISR0_AE4_Values<DSIHOST::DSI_ISR0, 4, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE5 = DSIHOST_DSI_ISR0_AE5_Values<DSIHOST::DSI_ISR0, 5, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE6 = DSIHOST_DSI_ISR0_AE6_Values<DSIHOST::DSI_ISR0, 6, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE7 = DSIHOST_DSI_ISR0_AE7_Values<DSIHOST::DSI_ISR0, 7, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE8 = DSIHOST_DSI_ISR0_AE8_Values<DSIHOST::DSI_ISR0, 8, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE9 = DSIHOST_DSI_ISR0_AE9_Values<DSIHOST::DSI_ISR0, 9, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE10 = DSIHOST_DSI_ISR0_AE10_Values<DSIHOST::DSI_ISR0, 10, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE11 = DSIHOST_DSI_ISR0_AE11_Values<DSIHOST::DSI_ISR0, 11, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE12 = DSIHOST_DSI_ISR0_AE12_Values<DSIHOST::DSI_ISR0, 12, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE13 = DSIHOST_DSI_ISR0_AE13_Values<DSIHOST::DSI_ISR0, 13, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE14 = DSIHOST_DSI_ISR0_AE14_Values<DSIHOST::DSI_ISR0, 14, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using AE15 = DSIHOST_DSI_ISR0_AE15_Values<DSIHOST::DSI_ISR0, 15, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using PE0 = DSIHOST_DSI_ISR0_PE0_Values<DSIHOST::DSI_ISR0, 16, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using PE1 = DSIHOST_DSI_ISR0_PE1_Values<DSIHOST::DSI_ISR0, 17, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using PE2 = DSIHOST_DSI_ISR0_PE2_Values<DSIHOST::DSI_ISR0, 18, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using PE3 = DSIHOST_DSI_ISR0_PE3_Values<DSIHOST::DSI_ISR0, 19, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using PE4 = DSIHOST_DSI_ISR0_PE4_Values<DSIHOST::DSI_ISR0, 20, 1, ReadMode, DSIHOSTDSI_ISR0Base> ;
    using FieldValues = DSIHOST_DSI_ISR0_PE4_Values<DSIHOST::DSI_ISR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_ISR0Pack  = Register<0x500000BC, 32, ReadMode, DSIHOSTDSI_ISR0Base, T...> ;

  struct DSIHOSTDSI_ISR1Base {} ;

  struct DSI_ISR1 : public RegisterBase<0x500000C0, 32, ReadMode>
  {
    using TOHSTX = DSIHOST_DSI_ISR1_TOHSTX_Values<DSIHOST::DSI_ISR1, 0, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using TOLPRX = DSIHOST_DSI_ISR1_TOLPRX_Values<DSIHOST::DSI_ISR1, 1, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using ECCSE = DSIHOST_DSI_ISR1_ECCSE_Values<DSIHOST::DSI_ISR1, 2, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using ECCME = DSIHOST_DSI_ISR1_ECCME_Values<DSIHOST::DSI_ISR1, 3, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using CRCE = DSIHOST_DSI_ISR1_CRCE_Values<DSIHOST::DSI_ISR1, 4, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using PSE = DSIHOST_DSI_ISR1_PSE_Values<DSIHOST::DSI_ISR1, 5, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using EOTPE = DSIHOST_DSI_ISR1_EOTPE_Values<DSIHOST::DSI_ISR1, 6, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using LPWRE = DSIHOST_DSI_ISR1_LPWRE_Values<DSIHOST::DSI_ISR1, 7, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using GCWRE = DSIHOST_DSI_ISR1_GCWRE_Values<DSIHOST::DSI_ISR1, 8, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using GPWRE = DSIHOST_DSI_ISR1_GPWRE_Values<DSIHOST::DSI_ISR1, 9, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using GPTXE = DSIHOST_DSI_ISR1_GPTXE_Values<DSIHOST::DSI_ISR1, 10, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using GPRDE = DSIHOST_DSI_ISR1_GPRDE_Values<DSIHOST::DSI_ISR1, 11, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using GPRXE = DSIHOST_DSI_ISR1_GPRXE_Values<DSIHOST::DSI_ISR1, 12, 1, ReadMode, DSIHOSTDSI_ISR1Base> ;
    using FieldValues = DSIHOST_DSI_ISR1_GPRXE_Values<DSIHOST::DSI_ISR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_ISR1Pack  = Register<0x500000C0, 32, ReadMode, DSIHOSTDSI_ISR1Base, T...> ;

  struct DSIHOSTDSI_IER0Base {} ;

  struct DSI_IER0 : public RegisterBase<0x500000C4, 32, ReadWriteMode>
  {
    using AE0IE = DSIHOST_DSI_IER0_AE0IE_Values<DSIHOST::DSI_IER0, 0, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE1IE = DSIHOST_DSI_IER0_AE1IE_Values<DSIHOST::DSI_IER0, 1, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE2IE = DSIHOST_DSI_IER0_AE2IE_Values<DSIHOST::DSI_IER0, 2, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE3IE = DSIHOST_DSI_IER0_AE3IE_Values<DSIHOST::DSI_IER0, 3, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE4IE = DSIHOST_DSI_IER0_AE4IE_Values<DSIHOST::DSI_IER0, 4, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE5IE = DSIHOST_DSI_IER0_AE5IE_Values<DSIHOST::DSI_IER0, 5, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE6IE = DSIHOST_DSI_IER0_AE6IE_Values<DSIHOST::DSI_IER0, 6, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE7IE = DSIHOST_DSI_IER0_AE7IE_Values<DSIHOST::DSI_IER0, 7, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE8IE = DSIHOST_DSI_IER0_AE8IE_Values<DSIHOST::DSI_IER0, 8, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE9IE = DSIHOST_DSI_IER0_AE9IE_Values<DSIHOST::DSI_IER0, 9, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE10IE = DSIHOST_DSI_IER0_AE10IE_Values<DSIHOST::DSI_IER0, 10, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE11IE = DSIHOST_DSI_IER0_AE11IE_Values<DSIHOST::DSI_IER0, 11, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE12IE = DSIHOST_DSI_IER0_AE12IE_Values<DSIHOST::DSI_IER0, 12, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE13IE = DSIHOST_DSI_IER0_AE13IE_Values<DSIHOST::DSI_IER0, 13, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE14IE = DSIHOST_DSI_IER0_AE14IE_Values<DSIHOST::DSI_IER0, 14, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using AE15IE = DSIHOST_DSI_IER0_AE15IE_Values<DSIHOST::DSI_IER0, 15, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using PE0IE = DSIHOST_DSI_IER0_PE0IE_Values<DSIHOST::DSI_IER0, 16, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using PE1IE = DSIHOST_DSI_IER0_PE1IE_Values<DSIHOST::DSI_IER0, 17, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using PE2IE = DSIHOST_DSI_IER0_PE2IE_Values<DSIHOST::DSI_IER0, 18, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using PE3IE = DSIHOST_DSI_IER0_PE3IE_Values<DSIHOST::DSI_IER0, 19, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using PE4IE = DSIHOST_DSI_IER0_PE4IE_Values<DSIHOST::DSI_IER0, 20, 1, ReadWriteMode, DSIHOSTDSI_IER0Base> ;
    using FieldValues = DSIHOST_DSI_IER0_PE4IE_Values<DSIHOST::DSI_IER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_IER0Pack  = Register<0x500000C4, 32, ReadWriteMode, DSIHOSTDSI_IER0Base, T...> ;

  struct DSIHOSTDSI_IER1Base {} ;

  struct DSI_IER1 : public RegisterBase<0x500000C8, 32, ReadWriteMode>
  {
    using TOHSTXIE = DSIHOST_DSI_IER1_TOHSTXIE_Values<DSIHOST::DSI_IER1, 0, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using TOLPRXIE = DSIHOST_DSI_IER1_TOLPRXIE_Values<DSIHOST::DSI_IER1, 1, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using ECCSEIE = DSIHOST_DSI_IER1_ECCSEIE_Values<DSIHOST::DSI_IER1, 2, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using ECCMEIE = DSIHOST_DSI_IER1_ECCMEIE_Values<DSIHOST::DSI_IER1, 3, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using CRCEIE = DSIHOST_DSI_IER1_CRCEIE_Values<DSIHOST::DSI_IER1, 4, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using PSEIE = DSIHOST_DSI_IER1_PSEIE_Values<DSIHOST::DSI_IER1, 5, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using EOTPEIE = DSIHOST_DSI_IER1_EOTPEIE_Values<DSIHOST::DSI_IER1, 6, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using LPWREIE = DSIHOST_DSI_IER1_LPWREIE_Values<DSIHOST::DSI_IER1, 7, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using GCWREIE = DSIHOST_DSI_IER1_GCWREIE_Values<DSIHOST::DSI_IER1, 8, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using GPWREIE = DSIHOST_DSI_IER1_GPWREIE_Values<DSIHOST::DSI_IER1, 9, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using GPTXEIE = DSIHOST_DSI_IER1_GPTXEIE_Values<DSIHOST::DSI_IER1, 10, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using GPRDEIE = DSIHOST_DSI_IER1_GPRDEIE_Values<DSIHOST::DSI_IER1, 11, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using GPRXEIE = DSIHOST_DSI_IER1_GPRXEIE_Values<DSIHOST::DSI_IER1, 12, 1, ReadWriteMode, DSIHOSTDSI_IER1Base> ;
    using FieldValues = DSIHOST_DSI_IER1_GPRXEIE_Values<DSIHOST::DSI_IER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_IER1Pack  = Register<0x500000C8, 32, ReadWriteMode, DSIHOSTDSI_IER1Base, T...> ;

  struct DSIHOSTDSI_FIR0Base {} ;

  struct DSI_FIR0 : public RegisterBase<0x500000D8, 32, WriteMode>
  {
    using FAE0 = DSIHOST_DSI_FIR0_FAE0_Values<DSIHOST::DSI_FIR0, 0, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE1 = DSIHOST_DSI_FIR0_FAE1_Values<DSIHOST::DSI_FIR0, 1, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE2 = DSIHOST_DSI_FIR0_FAE2_Values<DSIHOST::DSI_FIR0, 2, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE3 = DSIHOST_DSI_FIR0_FAE3_Values<DSIHOST::DSI_FIR0, 3, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE4 = DSIHOST_DSI_FIR0_FAE4_Values<DSIHOST::DSI_FIR0, 4, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE5 = DSIHOST_DSI_FIR0_FAE5_Values<DSIHOST::DSI_FIR0, 5, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE6 = DSIHOST_DSI_FIR0_FAE6_Values<DSIHOST::DSI_FIR0, 6, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE7 = DSIHOST_DSI_FIR0_FAE7_Values<DSIHOST::DSI_FIR0, 7, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE8 = DSIHOST_DSI_FIR0_FAE8_Values<DSIHOST::DSI_FIR0, 8, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE9 = DSIHOST_DSI_FIR0_FAE9_Values<DSIHOST::DSI_FIR0, 9, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE10 = DSIHOST_DSI_FIR0_FAE10_Values<DSIHOST::DSI_FIR0, 10, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE11 = DSIHOST_DSI_FIR0_FAE11_Values<DSIHOST::DSI_FIR0, 11, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE12 = DSIHOST_DSI_FIR0_FAE12_Values<DSIHOST::DSI_FIR0, 12, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE13 = DSIHOST_DSI_FIR0_FAE13_Values<DSIHOST::DSI_FIR0, 13, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE14 = DSIHOST_DSI_FIR0_FAE14_Values<DSIHOST::DSI_FIR0, 14, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FAE15 = DSIHOST_DSI_FIR0_FAE15_Values<DSIHOST::DSI_FIR0, 15, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FPE0 = DSIHOST_DSI_FIR0_FPE0_Values<DSIHOST::DSI_FIR0, 16, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FPE1 = DSIHOST_DSI_FIR0_FPE1_Values<DSIHOST::DSI_FIR0, 17, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FPE2 = DSIHOST_DSI_FIR0_FPE2_Values<DSIHOST::DSI_FIR0, 18, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FPE3 = DSIHOST_DSI_FIR0_FPE3_Values<DSIHOST::DSI_FIR0, 19, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FPE4 = DSIHOST_DSI_FIR0_FPE4_Values<DSIHOST::DSI_FIR0, 20, 1, WriteMode, DSIHOSTDSI_FIR0Base> ;
    using FieldValues = DSIHOST_DSI_FIR0_FPE4_Values<DSIHOST::DSI_FIR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_FIR0Pack  = Register<0x500000D8, 32, WriteMode, DSIHOSTDSI_FIR0Base, T...> ;

  struct DSIHOSTDSI_FIR1Base {} ;

  struct DSI_FIR1 : public RegisterBase<0x500000DC, 32, WriteMode>
  {
    using FTOHSTX = DSIHOST_DSI_FIR1_FTOHSTX_Values<DSIHOST::DSI_FIR1, 0, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FTOLPRX = DSIHOST_DSI_FIR1_FTOLPRX_Values<DSIHOST::DSI_FIR1, 1, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FECCSE = DSIHOST_DSI_FIR1_FECCSE_Values<DSIHOST::DSI_FIR1, 2, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FECCME = DSIHOST_DSI_FIR1_FECCME_Values<DSIHOST::DSI_FIR1, 3, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FCRCE = DSIHOST_DSI_FIR1_FCRCE_Values<DSIHOST::DSI_FIR1, 4, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FPSE = DSIHOST_DSI_FIR1_FPSE_Values<DSIHOST::DSI_FIR1, 5, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FEOTPE = DSIHOST_DSI_FIR1_FEOTPE_Values<DSIHOST::DSI_FIR1, 6, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FLPWRE = DSIHOST_DSI_FIR1_FLPWRE_Values<DSIHOST::DSI_FIR1, 7, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FGCWRE = DSIHOST_DSI_FIR1_FGCWRE_Values<DSIHOST::DSI_FIR1, 8, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FGPWRE = DSIHOST_DSI_FIR1_FGPWRE_Values<DSIHOST::DSI_FIR1, 9, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FGPTXE = DSIHOST_DSI_FIR1_FGPTXE_Values<DSIHOST::DSI_FIR1, 10, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FGPRDE = DSIHOST_DSI_FIR1_FGPRDE_Values<DSIHOST::DSI_FIR1, 11, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FGPRXE = DSIHOST_DSI_FIR1_FGPRXE_Values<DSIHOST::DSI_FIR1, 12, 1, WriteMode, DSIHOSTDSI_FIR1Base> ;
    using FieldValues = DSIHOST_DSI_FIR1_FGPRXE_Values<DSIHOST::DSI_FIR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_FIR1Pack  = Register<0x500000DC, 32, WriteMode, DSIHOSTDSI_FIR1Base, T...> ;

  struct DSIHOSTDSI_VSCRBase {} ;

  struct DSI_VSCR : public RegisterBase<0x50000100, 32, ReadWriteMode>
  {
    using EN = DSIHOST_DSI_VSCR_EN_Values<DSIHOST::DSI_VSCR, 0, 1, ReadWriteMode, DSIHOSTDSI_VSCRBase> ;
    using UR = DSIHOST_DSI_VSCR_UR_Values<DSIHOST::DSI_VSCR, 8, 1, ReadWriteMode, DSIHOSTDSI_VSCRBase> ;
    using FieldValues = DSIHOST_DSI_VSCR_UR_Values<DSIHOST::DSI_VSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VSCRPack  = Register<0x50000100, 32, ReadWriteMode, DSIHOSTDSI_VSCRBase, T...> ;

  struct DSIHOSTDSI_LCVCIDRBase {} ;

  struct DSI_LCVCIDR : public RegisterBase<0x5000010C, 32, ReadWriteMode>
  {
    using VCID = DSIHOST_DSI_LCVCIDR_VCID_Values<DSIHOST::DSI_LCVCIDR, 0, 2, ReadWriteMode, DSIHOSTDSI_LCVCIDRBase> ;
    using FieldValues = DSIHOST_DSI_LCVCIDR_VCID_Values<DSIHOST::DSI_LCVCIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_LCVCIDRPack  = Register<0x5000010C, 32, ReadWriteMode, DSIHOSTDSI_LCVCIDRBase, T...> ;

  struct DSIHOSTDSI_LCCCRBase {} ;

  struct DSI_LCCCR : public RegisterBase<0x50000110, 32, ReadMode>
  {
    using COLC = DSIHOST_DSI_LCCCR_COLC_Values<DSIHOST::DSI_LCCCR, 0, 4, ReadMode, DSIHOSTDSI_LCCCRBase> ;
    using LPE = DSIHOST_DSI_LCCCR_LPE_Values<DSIHOST::DSI_LCCCR, 8, 1, ReadMode, DSIHOSTDSI_LCCCRBase> ;
    using FieldValues = DSIHOST_DSI_LCCCR_LPE_Values<DSIHOST::DSI_LCCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_LCCCRPack  = Register<0x50000110, 32, ReadMode, DSIHOSTDSI_LCCCRBase, T...> ;

  struct DSIHOSTDSI_LPMCCRBase {} ;

  struct DSI_LPMCCR : public RegisterBase<0x50000118, 32, ReadMode>
  {
    using VLPSIZE = DSIHOST_DSI_LPMCCR_VLPSIZE_Values<DSIHOST::DSI_LPMCCR, 0, 8, ReadMode, DSIHOSTDSI_LPMCCRBase> ;
    using LPSIZE = DSIHOST_DSI_LPMCCR_LPSIZE_Values<DSIHOST::DSI_LPMCCR, 16, 8, ReadMode, DSIHOSTDSI_LPMCCRBase> ;
    using FieldValues = DSIHOST_DSI_LPMCCR_LPSIZE_Values<DSIHOST::DSI_LPMCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_LPMCCRPack  = Register<0x50000118, 32, ReadMode, DSIHOSTDSI_LPMCCRBase, T...> ;

  struct DSIHOSTDSI_VMCCRBase {} ;

  struct DSI_VMCCR : public RegisterBase<0x50000138, 32, ReadMode>
  {
    using VMT = DSIHOST_DSI_VMCCR_VMT_Values<DSIHOST::DSI_VMCCR, 0, 2, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using LPVSAE = DSIHOST_DSI_VMCCR_LPVSAE_Values<DSIHOST::DSI_VMCCR, 2, 1, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using LPVBPE = DSIHOST_DSI_VMCCR_LPVBPE_Values<DSIHOST::DSI_VMCCR, 3, 1, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using LPVFPE = DSIHOST_DSI_VMCCR_LPVFPE_Values<DSIHOST::DSI_VMCCR, 4, 1, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using LPVAE = DSIHOST_DSI_VMCCR_LPVAE_Values<DSIHOST::DSI_VMCCR, 5, 1, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using LPHBPE = DSIHOST_DSI_VMCCR_LPHBPE_Values<DSIHOST::DSI_VMCCR, 6, 1, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using LPHFE = DSIHOST_DSI_VMCCR_LPHFE_Values<DSIHOST::DSI_VMCCR, 7, 1, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using FBTAAE = DSIHOST_DSI_VMCCR_FBTAAE_Values<DSIHOST::DSI_VMCCR, 8, 1, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using LPCE = DSIHOST_DSI_VMCCR_LPCE_Values<DSIHOST::DSI_VMCCR, 9, 1, ReadMode, DSIHOSTDSI_VMCCRBase> ;
    using FieldValues = DSIHOST_DSI_VMCCR_LPCE_Values<DSIHOST::DSI_VMCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VMCCRPack  = Register<0x50000138, 32, ReadMode, DSIHOSTDSI_VMCCRBase, T...> ;

  struct DSIHOSTDSI_VPCCRBase {} ;

  struct DSI_VPCCR : public RegisterBase<0x5000013C, 32, ReadMode>
  {
    using VPSIZE = DSIHOST_DSI_VPCCR_VPSIZE_Values<DSIHOST::DSI_VPCCR, 0, 14, ReadMode, DSIHOSTDSI_VPCCRBase> ;
    using FieldValues = DSIHOST_DSI_VPCCR_VPSIZE_Values<DSIHOST::DSI_VPCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VPCCRPack  = Register<0x5000013C, 32, ReadMode, DSIHOSTDSI_VPCCRBase, T...> ;

  struct DSIHOSTDSI_VCCCRBase {} ;

  struct DSI_VCCCR : public RegisterBase<0x50000140, 32, ReadMode>
  {
    using NUMC = DSIHOST_DSI_VCCCR_NUMC_Values<DSIHOST::DSI_VCCCR, 0, 13, ReadMode, DSIHOSTDSI_VCCCRBase> ;
    using FieldValues = DSIHOST_DSI_VCCCR_NUMC_Values<DSIHOST::DSI_VCCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VCCCRPack  = Register<0x50000140, 32, ReadMode, DSIHOSTDSI_VCCCRBase, T...> ;

  struct DSIHOSTDSI_VNPCCRBase {} ;

  struct DSI_VNPCCR : public RegisterBase<0x50000144, 32, ReadMode>
  {
    using NPSIZE = DSIHOST_DSI_VNPCCR_NPSIZE_Values<DSIHOST::DSI_VNPCCR, 0, 13, ReadMode, DSIHOSTDSI_VNPCCRBase> ;
    using FieldValues = DSIHOST_DSI_VNPCCR_NPSIZE_Values<DSIHOST::DSI_VNPCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VNPCCRPack  = Register<0x50000144, 32, ReadMode, DSIHOSTDSI_VNPCCRBase, T...> ;

  struct DSIHOSTDSI_VHSACCRBase {} ;

  struct DSI_VHSACCR : public RegisterBase<0x50000148, 32, ReadMode>
  {
    using HSA = DSIHOST_DSI_VHSACCR_HSA_Values<DSIHOST::DSI_VHSACCR, 0, 12, ReadMode, DSIHOSTDSI_VHSACCRBase> ;
    using FieldValues = DSIHOST_DSI_VHSACCR_HSA_Values<DSIHOST::DSI_VHSACCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VHSACCRPack  = Register<0x50000148, 32, ReadMode, DSIHOSTDSI_VHSACCRBase, T...> ;

  struct DSIHOSTDSI_VHBPCCRBase {} ;

  struct DSI_VHBPCCR : public RegisterBase<0x5000014C, 32, ReadMode>
  {
    using HBP = DSIHOST_DSI_VHBPCCR_HBP_Values<DSIHOST::DSI_VHBPCCR, 0, 12, ReadMode, DSIHOSTDSI_VHBPCCRBase> ;
    using FieldValues = DSIHOST_DSI_VHBPCCR_HBP_Values<DSIHOST::DSI_VHBPCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VHBPCCRPack  = Register<0x5000014C, 32, ReadMode, DSIHOSTDSI_VHBPCCRBase, T...> ;

  struct DSIHOSTDSI_VLCCRBase {} ;

  struct DSI_VLCCR : public RegisterBase<0x50000150, 32, ReadMode>
  {
    using HLINE = DSIHOST_DSI_VLCCR_HLINE_Values<DSIHOST::DSI_VLCCR, 0, 15, ReadMode, DSIHOSTDSI_VLCCRBase> ;
    using FieldValues = DSIHOST_DSI_VLCCR_HLINE_Values<DSIHOST::DSI_VLCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VLCCRPack  = Register<0x50000150, 32, ReadMode, DSIHOSTDSI_VLCCRBase, T...> ;

  struct DSIHOSTDSI_VVSACCRBase {} ;

  struct DSI_VVSACCR : public RegisterBase<0x50000154, 32, ReadMode>
  {
    using VSA = DSIHOST_DSI_VVSACCR_VSA_Values<DSIHOST::DSI_VVSACCR, 0, 10, ReadMode, DSIHOSTDSI_VVSACCRBase> ;
    using FieldValues = DSIHOST_DSI_VVSACCR_VSA_Values<DSIHOST::DSI_VVSACCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VVSACCRPack  = Register<0x50000154, 32, ReadMode, DSIHOSTDSI_VVSACCRBase, T...> ;

  struct DSIHOSTDSI_VVBPCCRBase {} ;

  struct DSI_VVBPCCR : public RegisterBase<0x50000158, 32, ReadMode>
  {
    using VBP = DSIHOST_DSI_VVBPCCR_VBP_Values<DSIHOST::DSI_VVBPCCR, 0, 10, ReadMode, DSIHOSTDSI_VVBPCCRBase> ;
    using FieldValues = DSIHOST_DSI_VVBPCCR_VBP_Values<DSIHOST::DSI_VVBPCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VVBPCCRPack  = Register<0x50000158, 32, ReadMode, DSIHOSTDSI_VVBPCCRBase, T...> ;

  struct DSIHOSTDSI_VVFPCCRBase {} ;

  struct DSI_VVFPCCR : public RegisterBase<0x5000015C, 32, ReadMode>
  {
    using VFP = DSIHOST_DSI_VVFPCCR_VFP_Values<DSIHOST::DSI_VVFPCCR, 0, 10, ReadMode, DSIHOSTDSI_VVFPCCRBase> ;
    using FieldValues = DSIHOST_DSI_VVFPCCR_VFP_Values<DSIHOST::DSI_VVFPCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VVFPCCRPack  = Register<0x5000015C, 32, ReadMode, DSIHOSTDSI_VVFPCCRBase, T...> ;

  struct DSIHOSTDSI_VVACCRBase {} ;

  struct DSI_VVACCR : public RegisterBase<0x50000160, 32, ReadMode>
  {
    using VA = DSIHOST_DSI_VVACCR_VA_Values<DSIHOST::DSI_VVACCR, 0, 14, ReadMode, DSIHOSTDSI_VVACCRBase> ;
    using FieldValues = DSIHOST_DSI_VVACCR_VA_Values<DSIHOST::DSI_VVACCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_VVACCRPack  = Register<0x50000160, 32, ReadMode, DSIHOSTDSI_VVACCRBase, T...> ;

  struct DSIHOSTDSI_WCFGRBase {} ;

  struct DSI_WCFGR : public RegisterBase<0x50000400, 32, ReadWriteMode>
  {
    using DSIM = DSIHOST_DSI_WCFGR_DSIM_Values<DSIHOST::DSI_WCFGR, 0, 1, ReadWriteMode, DSIHOSTDSI_WCFGRBase> ;
    using COLMUX = DSIHOST_DSI_WCFGR_COLMUX_Values<DSIHOST::DSI_WCFGR, 1, 3, ReadWriteMode, DSIHOSTDSI_WCFGRBase> ;
    using TESRC = DSIHOST_DSI_WCFGR_TESRC_Values<DSIHOST::DSI_WCFGR, 4, 1, ReadWriteMode, DSIHOSTDSI_WCFGRBase> ;
    using TEPOL = DSIHOST_DSI_WCFGR_TEPOL_Values<DSIHOST::DSI_WCFGR, 5, 1, ReadWriteMode, DSIHOSTDSI_WCFGRBase> ;
    using AR = DSIHOST_DSI_WCFGR_AR_Values<DSIHOST::DSI_WCFGR, 6, 1, ReadWriteMode, DSIHOSTDSI_WCFGRBase> ;
    using VSPOL = DSIHOST_DSI_WCFGR_VSPOL_Values<DSIHOST::DSI_WCFGR, 7, 1, ReadWriteMode, DSIHOSTDSI_WCFGRBase> ;
    using FieldValues = DSIHOST_DSI_WCFGR_VSPOL_Values<DSIHOST::DSI_WCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WCFGRPack  = Register<0x50000400, 32, ReadWriteMode, DSIHOSTDSI_WCFGRBase, T...> ;

  struct DSIHOSTDSI_WCRBase {} ;

  struct DSI_WCR : public RegisterBase<0x50000404, 32, ReadWriteMode>
  {
    using COLM = DSIHOST_DSI_WCR_COLM_Values<DSIHOST::DSI_WCR, 0, 1, ReadWriteMode, DSIHOSTDSI_WCRBase> ;
    using SHTDN = DSIHOST_DSI_WCR_SHTDN_Values<DSIHOST::DSI_WCR, 1, 1, ReadWriteMode, DSIHOSTDSI_WCRBase> ;
    using LTDCEN = DSIHOST_DSI_WCR_LTDCEN_Values<DSIHOST::DSI_WCR, 2, 1, ReadWriteMode, DSIHOSTDSI_WCRBase> ;
    using DSIEN = DSIHOST_DSI_WCR_DSIEN_Values<DSIHOST::DSI_WCR, 3, 1, ReadWriteMode, DSIHOSTDSI_WCRBase> ;
    using FieldValues = DSIHOST_DSI_WCR_DSIEN_Values<DSIHOST::DSI_WCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WCRPack  = Register<0x50000404, 32, ReadWriteMode, DSIHOSTDSI_WCRBase, T...> ;

  struct DSIHOSTDSI_WIERBase {} ;

  struct DSI_WIER : public RegisterBase<0x50000408, 32, ReadWriteMode>
  {
    using TEIE = DSIHOST_DSI_WIER_TEIE_Values<DSIHOST::DSI_WIER, 0, 1, ReadWriteMode, DSIHOSTDSI_WIERBase> ;
    using ERIE = DSIHOST_DSI_WIER_ERIE_Values<DSIHOST::DSI_WIER, 1, 1, ReadWriteMode, DSIHOSTDSI_WIERBase> ;
    using PLLLIE = DSIHOST_DSI_WIER_PLLLIE_Values<DSIHOST::DSI_WIER, 9, 1, ReadWriteMode, DSIHOSTDSI_WIERBase> ;
    using PLLUIE = DSIHOST_DSI_WIER_PLLUIE_Values<DSIHOST::DSI_WIER, 10, 1, ReadWriteMode, DSIHOSTDSI_WIERBase> ;
    using RRIE = DSIHOST_DSI_WIER_RRIE_Values<DSIHOST::DSI_WIER, 13, 1, ReadWriteMode, DSIHOSTDSI_WIERBase> ;
    using FieldValues = DSIHOST_DSI_WIER_RRIE_Values<DSIHOST::DSI_WIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WIERPack  = Register<0x50000408, 32, ReadWriteMode, DSIHOSTDSI_WIERBase, T...> ;

  struct DSIHOSTDSI_WISRBase {} ;

  struct DSI_WISR : public RegisterBase<0x5000040C, 32, ReadMode>
  {
    using TEIF = DSIHOST_DSI_WISR_TEIF_Values<DSIHOST::DSI_WISR, 0, 1, ReadMode, DSIHOSTDSI_WISRBase> ;
    using ERIF = DSIHOST_DSI_WISR_ERIF_Values<DSIHOST::DSI_WISR, 1, 1, ReadMode, DSIHOSTDSI_WISRBase> ;
    using BUSY = DSIHOST_DSI_WISR_BUSY_Values<DSIHOST::DSI_WISR, 2, 1, ReadMode, DSIHOSTDSI_WISRBase> ;
    using PLLLS = DSIHOST_DSI_WISR_PLLLS_Values<DSIHOST::DSI_WISR, 8, 1, ReadMode, DSIHOSTDSI_WISRBase> ;
    using PLLLIF = DSIHOST_DSI_WISR_PLLLIF_Values<DSIHOST::DSI_WISR, 9, 1, ReadMode, DSIHOSTDSI_WISRBase> ;
    using PLLUIF = DSIHOST_DSI_WISR_PLLUIF_Values<DSIHOST::DSI_WISR, 10, 1, ReadMode, DSIHOSTDSI_WISRBase> ;
    using RRS = DSIHOST_DSI_WISR_RRS_Values<DSIHOST::DSI_WISR, 12, 1, ReadMode, DSIHOSTDSI_WISRBase> ;
    using RRIF = DSIHOST_DSI_WISR_RRIF_Values<DSIHOST::DSI_WISR, 13, 1, ReadMode, DSIHOSTDSI_WISRBase> ;
    using FieldValues = DSIHOST_DSI_WISR_RRIF_Values<DSIHOST::DSI_WISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WISRPack  = Register<0x5000040C, 32, ReadMode, DSIHOSTDSI_WISRBase, T...> ;

  struct DSIHOSTDSI_WIFCRBase {} ;

  struct DSI_WIFCR : public RegisterBase<0x50000410, 32, WriteMode>
  {
    using CTEIF = DSIHOST_DSI_WIFCR_CTEIF_Values<DSIHOST::DSI_WIFCR, 0, 1, WriteMode, DSIHOSTDSI_WIFCRBase> ;
    using CERIF = DSIHOST_DSI_WIFCR_CERIF_Values<DSIHOST::DSI_WIFCR, 1, 1, WriteMode, DSIHOSTDSI_WIFCRBase> ;
    using CPLLLIF = DSIHOST_DSI_WIFCR_CPLLLIF_Values<DSIHOST::DSI_WIFCR, 9, 1, WriteMode, DSIHOSTDSI_WIFCRBase> ;
    using CPLLUIF = DSIHOST_DSI_WIFCR_CPLLUIF_Values<DSIHOST::DSI_WIFCR, 10, 1, WriteMode, DSIHOSTDSI_WIFCRBase> ;
    using CRRIF = DSIHOST_DSI_WIFCR_CRRIF_Values<DSIHOST::DSI_WIFCR, 13, 1, WriteMode, DSIHOSTDSI_WIFCRBase> ;
    using FieldValues = DSIHOST_DSI_WIFCR_CRRIF_Values<DSIHOST::DSI_WIFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WIFCRPack  = Register<0x50000410, 32, WriteMode, DSIHOSTDSI_WIFCRBase, T...> ;

  struct DSIHOSTDSI_WPCR0Base {} ;

  struct DSI_WPCR0 : public RegisterBase<0x50000418, 32, ReadWriteMode>
  {
    using UIX4 = DSIHOST_DSI_WPCR0_UIX4_Values<DSIHOST::DSI_WPCR0, 0, 6, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using SWCL = DSIHOST_DSI_WPCR0_SWCL_Values<DSIHOST::DSI_WPCR0, 6, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using SWDL0 = DSIHOST_DSI_WPCR0_SWDL0_Values<DSIHOST::DSI_WPCR0, 7, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using SWDL1 = DSIHOST_DSI_WPCR0_SWDL1_Values<DSIHOST::DSI_WPCR0, 8, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using HSICL = DSIHOST_DSI_WPCR0_HSICL_Values<DSIHOST::DSI_WPCR0, 9, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using HSIDL0 = DSIHOST_DSI_WPCR0_HSIDL0_Values<DSIHOST::DSI_WPCR0, 10, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using HSIDL1 = DSIHOST_DSI_WPCR0_HSIDL1_Values<DSIHOST::DSI_WPCR0, 11, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using FTXSMCL = DSIHOST_DSI_WPCR0_FTXSMCL_Values<DSIHOST::DSI_WPCR0, 12, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using FTXSMDL = DSIHOST_DSI_WPCR0_FTXSMDL_Values<DSIHOST::DSI_WPCR0, 13, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using CDOFFDL = DSIHOST_DSI_WPCR0_CDOFFDL_Values<DSIHOST::DSI_WPCR0, 14, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using TDDL = DSIHOST_DSI_WPCR0_TDDL_Values<DSIHOST::DSI_WPCR0, 16, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using PDEN = DSIHOST_DSI_WPCR0_PDEN_Values<DSIHOST::DSI_WPCR0, 18, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using TCLKPREPEN = DSIHOST_DSI_WPCR0_TCLKPREPEN_Values<DSIHOST::DSI_WPCR0, 19, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using TCLKZEROEN = DSIHOST_DSI_WPCR0_TCLKZEROEN_Values<DSIHOST::DSI_WPCR0, 20, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using THSPREPEN = DSIHOST_DSI_WPCR0_THSPREPEN_Values<DSIHOST::DSI_WPCR0, 21, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using THSTRAILEN = DSIHOST_DSI_WPCR0_THSTRAILEN_Values<DSIHOST::DSI_WPCR0, 22, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using THSZEROEN = DSIHOST_DSI_WPCR0_THSZEROEN_Values<DSIHOST::DSI_WPCR0, 23, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using TLPXDEN = DSIHOST_DSI_WPCR0_TLPXDEN_Values<DSIHOST::DSI_WPCR0, 24, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using THSEXITEN = DSIHOST_DSI_WPCR0_THSEXITEN_Values<DSIHOST::DSI_WPCR0, 25, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using TLPXCEN = DSIHOST_DSI_WPCR0_TLPXCEN_Values<DSIHOST::DSI_WPCR0, 26, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using TCLKPOSTEN = DSIHOST_DSI_WPCR0_TCLKPOSTEN_Values<DSIHOST::DSI_WPCR0, 27, 1, ReadWriteMode, DSIHOSTDSI_WPCR0Base> ;
    using FieldValues = DSIHOST_DSI_WPCR0_TCLKPOSTEN_Values<DSIHOST::DSI_WPCR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WPCR0Pack  = Register<0x50000418, 32, ReadWriteMode, DSIHOSTDSI_WPCR0Base, T...> ;

  struct DSIHOSTDSI_WPCR1Base {} ;

  struct DSI_WPCR1 : public RegisterBase<0x5000041C, 32, ReadWriteMode>
  {
    using HSTXDCL = DSIHOST_DSI_WPCR1_HSTXDCL_Values<DSIHOST::DSI_WPCR1, 0, 2, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using HSTXDDL = DSIHOST_DSI_WPCR1_HSTXDDL_Values<DSIHOST::DSI_WPCR1, 2, 2, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using LPSRCCL = DSIHOST_DSI_WPCR1_LPSRCCL_Values<DSIHOST::DSI_WPCR1, 6, 2, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using LPSRCDL = DSIHOST_DSI_WPCR1_LPSRCDL_Values<DSIHOST::DSI_WPCR1, 8, 2, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using SDDC = DSIHOST_DSI_WPCR1_SDDC_Values<DSIHOST::DSI_WPCR1, 12, 1, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using HSTXSRCCL = DSIHOST_DSI_WPCR1_HSTXSRCCL_Values<DSIHOST::DSI_WPCR1, 16, 2, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using HSTXSRCDL = DSIHOST_DSI_WPCR1_HSTXSRCDL_Values<DSIHOST::DSI_WPCR1, 18, 2, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using FLPRXLPM = DSIHOST_DSI_WPCR1_FLPRXLPM_Values<DSIHOST::DSI_WPCR1, 22, 1, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using LPRXFT = DSIHOST_DSI_WPCR1_LPRXFT_Values<DSIHOST::DSI_WPCR1, 25, 2, ReadWriteMode, DSIHOSTDSI_WPCR1Base> ;
    using FieldValues = DSIHOST_DSI_WPCR1_LPRXFT_Values<DSIHOST::DSI_WPCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WPCR1Pack  = Register<0x5000041C, 32, ReadWriteMode, DSIHOSTDSI_WPCR1Base, T...> ;

  struct DSIHOSTDSI_WPCR2Base {} ;

  struct DSI_WPCR2 : public RegisterBase<0x50000420, 32, ReadWriteMode>
  {
    using TCLKPREP = DSIHOST_DSI_WPCR2_TCLKPREP_Values<DSIHOST::DSI_WPCR2, 0, 8, ReadWriteMode, DSIHOSTDSI_WPCR2Base> ;
    using TCLKZERO = DSIHOST_DSI_WPCR2_TCLKZERO_Values<DSIHOST::DSI_WPCR2, 8, 8, ReadWriteMode, DSIHOSTDSI_WPCR2Base> ;
    using THSPREP = DSIHOST_DSI_WPCR2_THSPREP_Values<DSIHOST::DSI_WPCR2, 16, 8, ReadWriteMode, DSIHOSTDSI_WPCR2Base> ;
    using THSTRAIL = DSIHOST_DSI_WPCR2_THSTRAIL_Values<DSIHOST::DSI_WPCR2, 24, 8, ReadWriteMode, DSIHOSTDSI_WPCR2Base> ;
    using FieldValues = DSIHOST_DSI_WPCR2_THSTRAIL_Values<DSIHOST::DSI_WPCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WPCR2Pack  = Register<0x50000420, 32, ReadWriteMode, DSIHOSTDSI_WPCR2Base, T...> ;

  struct DSIHOSTDSI_WPCR3Base {} ;

  struct DSI_WPCR3 : public RegisterBase<0x50000424, 32, ReadWriteMode>
  {
    using THSZERO = DSIHOST_DSI_WPCR3_THSZERO_Values<DSIHOST::DSI_WPCR3, 0, 8, ReadWriteMode, DSIHOSTDSI_WPCR3Base> ;
    using TLPXD = DSIHOST_DSI_WPCR3_TLPXD_Values<DSIHOST::DSI_WPCR3, 8, 8, ReadWriteMode, DSIHOSTDSI_WPCR3Base> ;
    using THSEXIT = DSIHOST_DSI_WPCR3_THSEXIT_Values<DSIHOST::DSI_WPCR3, 16, 8, ReadWriteMode, DSIHOSTDSI_WPCR3Base> ;
    using TLPXC = DSIHOST_DSI_WPCR3_TLPXC_Values<DSIHOST::DSI_WPCR3, 24, 8, ReadWriteMode, DSIHOSTDSI_WPCR3Base> ;
    using FieldValues = DSIHOST_DSI_WPCR3_TLPXC_Values<DSIHOST::DSI_WPCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WPCR3Pack  = Register<0x50000424, 32, ReadWriteMode, DSIHOSTDSI_WPCR3Base, T...> ;

  struct DSIHOSTDSI_WPCR4Base {} ;

  struct DSI_WPCR4 : public RegisterBase<0x50000428, 32, ReadWriteMode>
  {
    using TCLKPOST = DSIHOST_DSI_WPCR4_TCLKPOST_Values<DSIHOST::DSI_WPCR4, 0, 8, ReadWriteMode, DSIHOSTDSI_WPCR4Base> ;
    using FieldValues = DSIHOST_DSI_WPCR4_TCLKPOST_Values<DSIHOST::DSI_WPCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WPCR4Pack  = Register<0x50000428, 32, ReadWriteMode, DSIHOSTDSI_WPCR4Base, T...> ;

  struct DSIHOSTDSI_WRPCRBase {} ;

  struct DSI_WRPCR : public RegisterBase<0x50000430, 32, ReadWriteMode>
  {
    using PLLEN = DSIHOST_DSI_WRPCR_PLLEN_Values<DSIHOST::DSI_WRPCR, 0, 1, ReadWriteMode, DSIHOSTDSI_WRPCRBase> ;
    using NDIV = DSIHOST_DSI_WRPCR_NDIV_Values<DSIHOST::DSI_WRPCR, 2, 7, ReadWriteMode, DSIHOSTDSI_WRPCRBase> ;
    using IDF = DSIHOST_DSI_WRPCR_IDF_Values<DSIHOST::DSI_WRPCR, 11, 4, ReadWriteMode, DSIHOSTDSI_WRPCRBase> ;
    using ODF = DSIHOST_DSI_WRPCR_ODF_Values<DSIHOST::DSI_WRPCR, 16, 2, ReadWriteMode, DSIHOSTDSI_WRPCRBase> ;
    using REGEN = DSIHOST_DSI_WRPCR_REGEN_Values<DSIHOST::DSI_WRPCR, 24, 1, ReadWriteMode, DSIHOSTDSI_WRPCRBase> ;
    using FieldValues = DSIHOST_DSI_WRPCR_REGEN_Values<DSIHOST::DSI_WRPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DSI_WRPCRPack  = Register<0x50000430, 32, ReadWriteMode, DSIHOSTDSI_WRPCRBase, T...> ;

} ;

#endif //#if !defined(DSIHOSTREGISTERS_HPP)
