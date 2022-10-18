/*******************************************************************************
* Filename      : mdmaregisters.hpp
*
* Details       : MDMA. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(MDMAREGISTERS_HPP)
#define MDMAREGISTERS_HPP

#include "mdmafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDMA
{
  struct MDMAMDMA_GISR0Base {} ;

  struct MDMA_GISR0 : public RegisterBase<0x52000000, 32, ReadMode>
  {
    using GIF0 = MDMA_MDMA_GISR0_GIF0_Values<MDMA::MDMA_GISR0, 0, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF1 = MDMA_MDMA_GISR0_GIF1_Values<MDMA::MDMA_GISR0, 1, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF2 = MDMA_MDMA_GISR0_GIF2_Values<MDMA::MDMA_GISR0, 2, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF3 = MDMA_MDMA_GISR0_GIF3_Values<MDMA::MDMA_GISR0, 3, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF4 = MDMA_MDMA_GISR0_GIF4_Values<MDMA::MDMA_GISR0, 4, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF5 = MDMA_MDMA_GISR0_GIF5_Values<MDMA::MDMA_GISR0, 5, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF6 = MDMA_MDMA_GISR0_GIF6_Values<MDMA::MDMA_GISR0, 6, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF7 = MDMA_MDMA_GISR0_GIF7_Values<MDMA::MDMA_GISR0, 7, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF8 = MDMA_MDMA_GISR0_GIF8_Values<MDMA::MDMA_GISR0, 8, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF9 = MDMA_MDMA_GISR0_GIF9_Values<MDMA::MDMA_GISR0, 9, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF10 = MDMA_MDMA_GISR0_GIF10_Values<MDMA::MDMA_GISR0, 10, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF11 = MDMA_MDMA_GISR0_GIF11_Values<MDMA::MDMA_GISR0, 11, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF12 = MDMA_MDMA_GISR0_GIF12_Values<MDMA::MDMA_GISR0, 12, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF13 = MDMA_MDMA_GISR0_GIF13_Values<MDMA::MDMA_GISR0, 13, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF14 = MDMA_MDMA_GISR0_GIF14_Values<MDMA::MDMA_GISR0, 14, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using GIF15 = MDMA_MDMA_GISR0_GIF15_Values<MDMA::MDMA_GISR0, 15, 1, ReadMode, MDMAMDMA_GISR0Base> ;
    using FieldValues = MDMA_MDMA_GISR0_GIF15_Values<MDMA::MDMA_GISR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_GISR0Pack  = Register<0x52000000, 32, ReadMode, MDMAMDMA_GISR0Base, T...> ;

  struct MDMAMDMA_C0ISRBase {} ;

  struct MDMA_C0ISR : public RegisterBase<0x52000040, 32, ReadMode>
  {
    using TEIF0 = MDMA_MDMA_C0ISR_TEIF0_Values<MDMA::MDMA_C0ISR, 0, 1, ReadMode, MDMAMDMA_C0ISRBase> ;
    using CTCIF0 = MDMA_MDMA_C0ISR_CTCIF0_Values<MDMA::MDMA_C0ISR, 1, 1, ReadMode, MDMAMDMA_C0ISRBase> ;
    using BRTIF0 = MDMA_MDMA_C0ISR_BRTIF0_Values<MDMA::MDMA_C0ISR, 2, 1, ReadMode, MDMAMDMA_C0ISRBase> ;
    using BTIF0 = MDMA_MDMA_C0ISR_BTIF0_Values<MDMA::MDMA_C0ISR, 3, 1, ReadMode, MDMAMDMA_C0ISRBase> ;
    using TCIF0 = MDMA_MDMA_C0ISR_TCIF0_Values<MDMA::MDMA_C0ISR, 4, 1, ReadMode, MDMAMDMA_C0ISRBase> ;
    using CRQA0 = MDMA_MDMA_C0ISR_CRQA0_Values<MDMA::MDMA_C0ISR, 16, 1, ReadMode, MDMAMDMA_C0ISRBase> ;
    using FieldValues = MDMA_MDMA_C0ISR_CRQA0_Values<MDMA::MDMA_C0ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0ISRPack  = Register<0x52000040, 32, ReadMode, MDMAMDMA_C0ISRBase, T...> ;

  struct MDMAMDMA_C0IFCRBase {} ;

  struct MDMA_C0IFCR : public RegisterBase<0x52000044, 32, WriteMode>
  {
    using CTEIF0 = MDMA_MDMA_C0IFCR_CTEIF0_Values<MDMA::MDMA_C0IFCR, 0, 1, WriteMode, MDMAMDMA_C0IFCRBase> ;
    using CCTCIF0 = MDMA_MDMA_C0IFCR_CCTCIF0_Values<MDMA::MDMA_C0IFCR, 1, 1, WriteMode, MDMAMDMA_C0IFCRBase> ;
    using CBRTIF0 = MDMA_MDMA_C0IFCR_CBRTIF0_Values<MDMA::MDMA_C0IFCR, 2, 1, WriteMode, MDMAMDMA_C0IFCRBase> ;
    using CBTIF0 = MDMA_MDMA_C0IFCR_CBTIF0_Values<MDMA::MDMA_C0IFCR, 3, 1, WriteMode, MDMAMDMA_C0IFCRBase> ;
    using CLTCIF0 = MDMA_MDMA_C0IFCR_CLTCIF0_Values<MDMA::MDMA_C0IFCR, 4, 1, WriteMode, MDMAMDMA_C0IFCRBase> ;
    using FieldValues = MDMA_MDMA_C0IFCR_CLTCIF0_Values<MDMA::MDMA_C0IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0IFCRPack  = Register<0x52000044, 32, WriteMode, MDMAMDMA_C0IFCRBase, T...> ;

  struct MDMAMDMA_C0ESRBase {} ;

  struct MDMA_C0ESR : public RegisterBase<0x52000048, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C0ESR_TEA_Values<MDMA::MDMA_C0ESR, 0, 7, ReadMode, MDMAMDMA_C0ESRBase> ;
    using TED = MDMA_MDMA_C0ESR_TED_Values<MDMA::MDMA_C0ESR, 7, 1, ReadMode, MDMAMDMA_C0ESRBase> ;
    using TELD = MDMA_MDMA_C0ESR_TELD_Values<MDMA::MDMA_C0ESR, 8, 1, ReadMode, MDMAMDMA_C0ESRBase> ;
    using TEMD = MDMA_MDMA_C0ESR_TEMD_Values<MDMA::MDMA_C0ESR, 9, 1, ReadMode, MDMAMDMA_C0ESRBase> ;
    using ASE = MDMA_MDMA_C0ESR_ASE_Values<MDMA::MDMA_C0ESR, 10, 1, ReadMode, MDMAMDMA_C0ESRBase> ;
    using BSE = MDMA_MDMA_C0ESR_BSE_Values<MDMA::MDMA_C0ESR, 11, 1, ReadMode, MDMAMDMA_C0ESRBase> ;
    using FieldValues = MDMA_MDMA_C0ESR_BSE_Values<MDMA::MDMA_C0ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0ESRPack  = Register<0x52000048, 32, ReadMode, MDMAMDMA_C0ESRBase, T...> ;

  struct MDMAMDMA_C0CRBase {} ;

  struct MDMA_C0CR : public RegisterBase<0x5200004C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C0CR_EN_Values<MDMA::MDMA_C0CR, 0, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using TEIE = MDMA_MDMA_C0CR_TEIE_Values<MDMA::MDMA_C0CR, 1, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using CTCIE = MDMA_MDMA_C0CR_CTCIE_Values<MDMA::MDMA_C0CR, 2, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using BRTIE = MDMA_MDMA_C0CR_BRTIE_Values<MDMA::MDMA_C0CR, 3, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using BTIE = MDMA_MDMA_C0CR_BTIE_Values<MDMA::MDMA_C0CR, 4, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using TCIE = MDMA_MDMA_C0CR_TCIE_Values<MDMA::MDMA_C0CR, 5, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using PL = MDMA_MDMA_C0CR_PL_Values<MDMA::MDMA_C0CR, 6, 2, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using BEX = MDMA_MDMA_C0CR_BEX_Values<MDMA::MDMA_C0CR, 12, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using HEX = MDMA_MDMA_C0CR_HEX_Values<MDMA::MDMA_C0CR, 13, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using WEX = MDMA_MDMA_C0CR_WEX_Values<MDMA::MDMA_C0CR, 14, 1, ReadWriteMode, MDMAMDMA_C0CRBase> ;
    using SWRQ = MDMA_MDMA_C0CR_SWRQ_Values<MDMA::MDMA_C0CR, 16, 1, WriteMode, MDMAMDMA_C0CRBase> ;
    using FieldValues = MDMA_MDMA_C0CR_SWRQ_Values<MDMA::MDMA_C0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0CRPack  = Register<0x5200004C, 32, ReadWriteMode, MDMAMDMA_C0CRBase, T...> ;

  struct MDMAMDMA_C0TCRBase {} ;

  struct MDMA_C0TCR : public RegisterBase<0x52000050, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C0TCR_SINC_Values<MDMA::MDMA_C0TCR, 0, 2, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using DINC = MDMA_MDMA_C0TCR_DINC_Values<MDMA::MDMA_C0TCR, 2, 2, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using SSIZE = MDMA_MDMA_C0TCR_SSIZE_Values<MDMA::MDMA_C0TCR, 4, 2, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using DSIZE = MDMA_MDMA_C0TCR_DSIZE_Values<MDMA::MDMA_C0TCR, 6, 2, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using SINCOS = MDMA_MDMA_C0TCR_SINCOS_Values<MDMA::MDMA_C0TCR, 8, 2, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using DINCOS = MDMA_MDMA_C0TCR_DINCOS_Values<MDMA::MDMA_C0TCR, 10, 2, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using SBURST = MDMA_MDMA_C0TCR_SBURST_Values<MDMA::MDMA_C0TCR, 12, 3, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using DBURST = MDMA_MDMA_C0TCR_DBURST_Values<MDMA::MDMA_C0TCR, 15, 3, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using TLEN = MDMA_MDMA_C0TCR_TLEN_Values<MDMA::MDMA_C0TCR, 18, 7, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using PKE = MDMA_MDMA_C0TCR_PKE_Values<MDMA::MDMA_C0TCR, 25, 1, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using PAM = MDMA_MDMA_C0TCR_PAM_Values<MDMA::MDMA_C0TCR, 26, 2, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using TRGM = MDMA_MDMA_C0TCR_TRGM_Values<MDMA::MDMA_C0TCR, 28, 2, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using SWRM = MDMA_MDMA_C0TCR_SWRM_Values<MDMA::MDMA_C0TCR, 30, 1, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using BWM = MDMA_MDMA_C0TCR_BWM_Values<MDMA::MDMA_C0TCR, 31, 1, ReadWriteMode, MDMAMDMA_C0TCRBase> ;
    using FieldValues = MDMA_MDMA_C0TCR_BWM_Values<MDMA::MDMA_C0TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0TCRPack  = Register<0x52000050, 32, ReadWriteMode, MDMAMDMA_C0TCRBase, T...> ;

  struct MDMAMDMA_C0BNDTRBase {} ;

  struct MDMA_C0BNDTR : public RegisterBase<0x52000054, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C0BNDTR_BNDT_Values<MDMA::MDMA_C0BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C0BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C0BNDTR_BRSUM_Values<MDMA::MDMA_C0BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C0BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C0BNDTR_BRDUM_Values<MDMA::MDMA_C0BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C0BNDTRBase> ;
    using BRC = MDMA_MDMA_C0BNDTR_BRC_Values<MDMA::MDMA_C0BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C0BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C0BNDTR_BRC_Values<MDMA::MDMA_C0BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0BNDTRPack  = Register<0x52000054, 32, ReadWriteMode, MDMAMDMA_C0BNDTRBase, T...> ;

  struct MDMAMDMA_C0SARBase {} ;

  struct MDMA_C0SAR : public RegisterBase<0x52000058, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C0SAR_SAR_Values<MDMA::MDMA_C0SAR, 0, 32, ReadWriteMode, MDMAMDMA_C0SARBase> ;
    using FieldValues = MDMA_MDMA_C0SAR_SAR_Values<MDMA::MDMA_C0SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0SARPack  = Register<0x52000058, 32, ReadWriteMode, MDMAMDMA_C0SARBase, T...> ;

  struct MDMAMDMA_C0DARBase {} ;

  struct MDMA_C0DAR : public RegisterBase<0x5200005C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C0DAR_DAR_Values<MDMA::MDMA_C0DAR, 0, 32, ReadWriteMode, MDMAMDMA_C0DARBase> ;
    using FieldValues = MDMA_MDMA_C0DAR_DAR_Values<MDMA::MDMA_C0DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0DARPack  = Register<0x5200005C, 32, ReadWriteMode, MDMAMDMA_C0DARBase, T...> ;

  struct MDMAMDMA_C0BRURBase {} ;

  struct MDMA_C0BRUR : public RegisterBase<0x52000060, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C0BRUR_SUV_Values<MDMA::MDMA_C0BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C0BRURBase> ;
    using DUV = MDMA_MDMA_C0BRUR_DUV_Values<MDMA::MDMA_C0BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C0BRURBase> ;
    using FieldValues = MDMA_MDMA_C0BRUR_DUV_Values<MDMA::MDMA_C0BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0BRURPack  = Register<0x52000060, 32, ReadWriteMode, MDMAMDMA_C0BRURBase, T...> ;

  struct MDMAMDMA_C0LARBase {} ;

  struct MDMA_C0LAR : public RegisterBase<0x52000064, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C0LAR_LAR_Values<MDMA::MDMA_C0LAR, 0, 32, ReadWriteMode, MDMAMDMA_C0LARBase> ;
    using FieldValues = MDMA_MDMA_C0LAR_LAR_Values<MDMA::MDMA_C0LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0LARPack  = Register<0x52000064, 32, ReadWriteMode, MDMAMDMA_C0LARBase, T...> ;

  struct MDMAMDMA_C0TBRBase {} ;

  struct MDMA_C0TBR : public RegisterBase<0x52000068, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C0TBR_TSEL_Values<MDMA::MDMA_C0TBR, 0, 6, ReadWriteMode, MDMAMDMA_C0TBRBase> ;
    using SBUS = MDMA_MDMA_C0TBR_SBUS_Values<MDMA::MDMA_C0TBR, 16, 1, ReadWriteMode, MDMAMDMA_C0TBRBase> ;
    using DBUS = MDMA_MDMA_C0TBR_DBUS_Values<MDMA::MDMA_C0TBR, 17, 1, ReadWriteMode, MDMAMDMA_C0TBRBase> ;
    using FieldValues = MDMA_MDMA_C0TBR_DBUS_Values<MDMA::MDMA_C0TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0TBRPack  = Register<0x52000068, 32, ReadWriteMode, MDMAMDMA_C0TBRBase, T...> ;

  struct MDMAMDMA_C0MARBase {} ;

  struct MDMA_C0MAR : public RegisterBase<0x52000070, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C0MAR_MAR_Values<MDMA::MDMA_C0MAR, 0, 32, ReadWriteMode, MDMAMDMA_C0MARBase> ;
    using FieldValues = MDMA_MDMA_C0MAR_MAR_Values<MDMA::MDMA_C0MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0MARPack  = Register<0x52000070, 32, ReadWriteMode, MDMAMDMA_C0MARBase, T...> ;

  struct MDMAMDMA_C0MDRBase {} ;

  struct MDMA_C0MDR : public RegisterBase<0x52000074, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C0MDR_MDR_Values<MDMA::MDMA_C0MDR, 0, 32, ReadWriteMode, MDMAMDMA_C0MDRBase> ;
    using FieldValues = MDMA_MDMA_C0MDR_MDR_Values<MDMA::MDMA_C0MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C0MDRPack  = Register<0x52000074, 32, ReadWriteMode, MDMAMDMA_C0MDRBase, T...> ;

  struct MDMAMDMA_C1ISRBase {} ;

  struct MDMA_C1ISR : public RegisterBase<0x52000080, 32, ReadMode>
  {
    using TEIF1 = MDMA_MDMA_C1ISR_TEIF1_Values<MDMA::MDMA_C1ISR, 0, 1, ReadMode, MDMAMDMA_C1ISRBase> ;
    using CTCIF1 = MDMA_MDMA_C1ISR_CTCIF1_Values<MDMA::MDMA_C1ISR, 1, 1, ReadMode, MDMAMDMA_C1ISRBase> ;
    using BRTIF1 = MDMA_MDMA_C1ISR_BRTIF1_Values<MDMA::MDMA_C1ISR, 2, 1, ReadMode, MDMAMDMA_C1ISRBase> ;
    using BTIF1 = MDMA_MDMA_C1ISR_BTIF1_Values<MDMA::MDMA_C1ISR, 3, 1, ReadMode, MDMAMDMA_C1ISRBase> ;
    using TCIF1 = MDMA_MDMA_C1ISR_TCIF1_Values<MDMA::MDMA_C1ISR, 4, 1, ReadMode, MDMAMDMA_C1ISRBase> ;
    using CRQA1 = MDMA_MDMA_C1ISR_CRQA1_Values<MDMA::MDMA_C1ISR, 16, 1, ReadMode, MDMAMDMA_C1ISRBase> ;
    using FieldValues = MDMA_MDMA_C1ISR_CRQA1_Values<MDMA::MDMA_C1ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1ISRPack  = Register<0x52000080, 32, ReadMode, MDMAMDMA_C1ISRBase, T...> ;

  struct MDMAMDMA_C1IFCRBase {} ;

  struct MDMA_C1IFCR : public RegisterBase<0x52000084, 32, WriteMode>
  {
    using CTEIF1 = MDMA_MDMA_C1IFCR_CTEIF1_Values<MDMA::MDMA_C1IFCR, 0, 1, WriteMode, MDMAMDMA_C1IFCRBase> ;
    using CCTCIF1 = MDMA_MDMA_C1IFCR_CCTCIF1_Values<MDMA::MDMA_C1IFCR, 1, 1, WriteMode, MDMAMDMA_C1IFCRBase> ;
    using CBRTIF1 = MDMA_MDMA_C1IFCR_CBRTIF1_Values<MDMA::MDMA_C1IFCR, 2, 1, WriteMode, MDMAMDMA_C1IFCRBase> ;
    using CBTIF1 = MDMA_MDMA_C1IFCR_CBTIF1_Values<MDMA::MDMA_C1IFCR, 3, 1, WriteMode, MDMAMDMA_C1IFCRBase> ;
    using CLTCIF1 = MDMA_MDMA_C1IFCR_CLTCIF1_Values<MDMA::MDMA_C1IFCR, 4, 1, WriteMode, MDMAMDMA_C1IFCRBase> ;
    using FieldValues = MDMA_MDMA_C1IFCR_CLTCIF1_Values<MDMA::MDMA_C1IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1IFCRPack  = Register<0x52000084, 32, WriteMode, MDMAMDMA_C1IFCRBase, T...> ;

  struct MDMAMDMA_C1ESRBase {} ;

  struct MDMA_C1ESR : public RegisterBase<0x52000088, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C1ESR_TEA_Values<MDMA::MDMA_C1ESR, 0, 7, ReadMode, MDMAMDMA_C1ESRBase> ;
    using TED = MDMA_MDMA_C1ESR_TED_Values<MDMA::MDMA_C1ESR, 7, 1, ReadMode, MDMAMDMA_C1ESRBase> ;
    using TELD = MDMA_MDMA_C1ESR_TELD_Values<MDMA::MDMA_C1ESR, 8, 1, ReadMode, MDMAMDMA_C1ESRBase> ;
    using TEMD = MDMA_MDMA_C1ESR_TEMD_Values<MDMA::MDMA_C1ESR, 9, 1, ReadMode, MDMAMDMA_C1ESRBase> ;
    using ASE = MDMA_MDMA_C1ESR_ASE_Values<MDMA::MDMA_C1ESR, 10, 1, ReadMode, MDMAMDMA_C1ESRBase> ;
    using BSE = MDMA_MDMA_C1ESR_BSE_Values<MDMA::MDMA_C1ESR, 11, 1, ReadMode, MDMAMDMA_C1ESRBase> ;
    using FieldValues = MDMA_MDMA_C1ESR_BSE_Values<MDMA::MDMA_C1ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1ESRPack  = Register<0x52000088, 32, ReadMode, MDMAMDMA_C1ESRBase, T...> ;

  struct MDMAMDMA_C1CRBase {} ;

  struct MDMA_C1CR : public RegisterBase<0x5200008C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C1CR_EN_Values<MDMA::MDMA_C1CR, 0, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using TEIE = MDMA_MDMA_C1CR_TEIE_Values<MDMA::MDMA_C1CR, 1, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using CTCIE = MDMA_MDMA_C1CR_CTCIE_Values<MDMA::MDMA_C1CR, 2, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using BRTIE = MDMA_MDMA_C1CR_BRTIE_Values<MDMA::MDMA_C1CR, 3, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using BTIE = MDMA_MDMA_C1CR_BTIE_Values<MDMA::MDMA_C1CR, 4, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using TCIE = MDMA_MDMA_C1CR_TCIE_Values<MDMA::MDMA_C1CR, 5, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using PL = MDMA_MDMA_C1CR_PL_Values<MDMA::MDMA_C1CR, 6, 2, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using BEX = MDMA_MDMA_C1CR_BEX_Values<MDMA::MDMA_C1CR, 12, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using HEX = MDMA_MDMA_C1CR_HEX_Values<MDMA::MDMA_C1CR, 13, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using WEX = MDMA_MDMA_C1CR_WEX_Values<MDMA::MDMA_C1CR, 14, 1, ReadWriteMode, MDMAMDMA_C1CRBase> ;
    using SWRQ = MDMA_MDMA_C1CR_SWRQ_Values<MDMA::MDMA_C1CR, 16, 1, WriteMode, MDMAMDMA_C1CRBase> ;
    using FieldValues = MDMA_MDMA_C1CR_SWRQ_Values<MDMA::MDMA_C1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1CRPack  = Register<0x5200008C, 32, ReadWriteMode, MDMAMDMA_C1CRBase, T...> ;

  struct MDMAMDMA_C1TCRBase {} ;

  struct MDMA_C1TCR : public RegisterBase<0x52000090, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C1TCR_SINC_Values<MDMA::MDMA_C1TCR, 0, 2, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using DINC = MDMA_MDMA_C1TCR_DINC_Values<MDMA::MDMA_C1TCR, 2, 2, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using SSIZE = MDMA_MDMA_C1TCR_SSIZE_Values<MDMA::MDMA_C1TCR, 4, 2, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using DSIZE = MDMA_MDMA_C1TCR_DSIZE_Values<MDMA::MDMA_C1TCR, 6, 2, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using SINCOS = MDMA_MDMA_C1TCR_SINCOS_Values<MDMA::MDMA_C1TCR, 8, 2, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using DINCOS = MDMA_MDMA_C1TCR_DINCOS_Values<MDMA::MDMA_C1TCR, 10, 2, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using SBURST = MDMA_MDMA_C1TCR_SBURST_Values<MDMA::MDMA_C1TCR, 12, 3, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using DBURST = MDMA_MDMA_C1TCR_DBURST_Values<MDMA::MDMA_C1TCR, 15, 3, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using TLEN = MDMA_MDMA_C1TCR_TLEN_Values<MDMA::MDMA_C1TCR, 18, 7, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using PKE = MDMA_MDMA_C1TCR_PKE_Values<MDMA::MDMA_C1TCR, 25, 1, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using PAM = MDMA_MDMA_C1TCR_PAM_Values<MDMA::MDMA_C1TCR, 26, 2, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using TRGM = MDMA_MDMA_C1TCR_TRGM_Values<MDMA::MDMA_C1TCR, 28, 2, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using SWRM = MDMA_MDMA_C1TCR_SWRM_Values<MDMA::MDMA_C1TCR, 30, 1, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using BWM = MDMA_MDMA_C1TCR_BWM_Values<MDMA::MDMA_C1TCR, 31, 1, ReadWriteMode, MDMAMDMA_C1TCRBase> ;
    using FieldValues = MDMA_MDMA_C1TCR_BWM_Values<MDMA::MDMA_C1TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1TCRPack  = Register<0x52000090, 32, ReadWriteMode, MDMAMDMA_C1TCRBase, T...> ;

  struct MDMAMDMA_C1BNDTRBase {} ;

  struct MDMA_C1BNDTR : public RegisterBase<0x52000094, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C1BNDTR_BNDT_Values<MDMA::MDMA_C1BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C1BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C1BNDTR_BRSUM_Values<MDMA::MDMA_C1BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C1BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C1BNDTR_BRDUM_Values<MDMA::MDMA_C1BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C1BNDTRBase> ;
    using BRC = MDMA_MDMA_C1BNDTR_BRC_Values<MDMA::MDMA_C1BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C1BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C1BNDTR_BRC_Values<MDMA::MDMA_C1BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1BNDTRPack  = Register<0x52000094, 32, ReadWriteMode, MDMAMDMA_C1BNDTRBase, T...> ;

  struct MDMAMDMA_C1SARBase {} ;

  struct MDMA_C1SAR : public RegisterBase<0x52000098, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C1SAR_SAR_Values<MDMA::MDMA_C1SAR, 0, 32, ReadWriteMode, MDMAMDMA_C1SARBase> ;
    using FieldValues = MDMA_MDMA_C1SAR_SAR_Values<MDMA::MDMA_C1SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1SARPack  = Register<0x52000098, 32, ReadWriteMode, MDMAMDMA_C1SARBase, T...> ;

  struct MDMAMDMA_C1DARBase {} ;

  struct MDMA_C1DAR : public RegisterBase<0x5200009C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C1DAR_DAR_Values<MDMA::MDMA_C1DAR, 0, 32, ReadWriteMode, MDMAMDMA_C1DARBase> ;
    using FieldValues = MDMA_MDMA_C1DAR_DAR_Values<MDMA::MDMA_C1DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1DARPack  = Register<0x5200009C, 32, ReadWriteMode, MDMAMDMA_C1DARBase, T...> ;

  struct MDMAMDMA_C1BRURBase {} ;

  struct MDMA_C1BRUR : public RegisterBase<0x520000A0, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C1BRUR_SUV_Values<MDMA::MDMA_C1BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C1BRURBase> ;
    using DUV = MDMA_MDMA_C1BRUR_DUV_Values<MDMA::MDMA_C1BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C1BRURBase> ;
    using FieldValues = MDMA_MDMA_C1BRUR_DUV_Values<MDMA::MDMA_C1BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1BRURPack  = Register<0x520000A0, 32, ReadWriteMode, MDMAMDMA_C1BRURBase, T...> ;

  struct MDMAMDMA_C1LARBase {} ;

  struct MDMA_C1LAR : public RegisterBase<0x520000A4, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C1LAR_LAR_Values<MDMA::MDMA_C1LAR, 0, 32, ReadWriteMode, MDMAMDMA_C1LARBase> ;
    using FieldValues = MDMA_MDMA_C1LAR_LAR_Values<MDMA::MDMA_C1LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1LARPack  = Register<0x520000A4, 32, ReadWriteMode, MDMAMDMA_C1LARBase, T...> ;

  struct MDMAMDMA_C1TBRBase {} ;

  struct MDMA_C1TBR : public RegisterBase<0x520000A8, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C1TBR_TSEL_Values<MDMA::MDMA_C1TBR, 0, 6, ReadWriteMode, MDMAMDMA_C1TBRBase> ;
    using SBUS = MDMA_MDMA_C1TBR_SBUS_Values<MDMA::MDMA_C1TBR, 16, 1, ReadWriteMode, MDMAMDMA_C1TBRBase> ;
    using DBUS = MDMA_MDMA_C1TBR_DBUS_Values<MDMA::MDMA_C1TBR, 17, 1, ReadWriteMode, MDMAMDMA_C1TBRBase> ;
    using FieldValues = MDMA_MDMA_C1TBR_DBUS_Values<MDMA::MDMA_C1TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1TBRPack  = Register<0x520000A8, 32, ReadWriteMode, MDMAMDMA_C1TBRBase, T...> ;

  struct MDMAMDMA_C1MARBase {} ;

  struct MDMA_C1MAR : public RegisterBase<0x520000B0, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C1MAR_MAR_Values<MDMA::MDMA_C1MAR, 0, 32, ReadWriteMode, MDMAMDMA_C1MARBase> ;
    using FieldValues = MDMA_MDMA_C1MAR_MAR_Values<MDMA::MDMA_C1MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1MARPack  = Register<0x520000B0, 32, ReadWriteMode, MDMAMDMA_C1MARBase, T...> ;

  struct MDMAMDMA_C1MDRBase {} ;

  struct MDMA_C1MDR : public RegisterBase<0x520000B4, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C1MDR_MDR_Values<MDMA::MDMA_C1MDR, 0, 32, ReadWriteMode, MDMAMDMA_C1MDRBase> ;
    using FieldValues = MDMA_MDMA_C1MDR_MDR_Values<MDMA::MDMA_C1MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C1MDRPack  = Register<0x520000B4, 32, ReadWriteMode, MDMAMDMA_C1MDRBase, T...> ;

  struct MDMAMDMA_C2ISRBase {} ;

  struct MDMA_C2ISR : public RegisterBase<0x520000C0, 32, ReadMode>
  {
    using TEIF2 = MDMA_MDMA_C2ISR_TEIF2_Values<MDMA::MDMA_C2ISR, 0, 1, ReadMode, MDMAMDMA_C2ISRBase> ;
    using CTCIF2 = MDMA_MDMA_C2ISR_CTCIF2_Values<MDMA::MDMA_C2ISR, 1, 1, ReadMode, MDMAMDMA_C2ISRBase> ;
    using BRTIF2 = MDMA_MDMA_C2ISR_BRTIF2_Values<MDMA::MDMA_C2ISR, 2, 1, ReadMode, MDMAMDMA_C2ISRBase> ;
    using BTIF2 = MDMA_MDMA_C2ISR_BTIF2_Values<MDMA::MDMA_C2ISR, 3, 1, ReadMode, MDMAMDMA_C2ISRBase> ;
    using TCIF2 = MDMA_MDMA_C2ISR_TCIF2_Values<MDMA::MDMA_C2ISR, 4, 1, ReadMode, MDMAMDMA_C2ISRBase> ;
    using CRQA2 = MDMA_MDMA_C2ISR_CRQA2_Values<MDMA::MDMA_C2ISR, 16, 1, ReadMode, MDMAMDMA_C2ISRBase> ;
    using FieldValues = MDMA_MDMA_C2ISR_CRQA2_Values<MDMA::MDMA_C2ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2ISRPack  = Register<0x520000C0, 32, ReadMode, MDMAMDMA_C2ISRBase, T...> ;

  struct MDMAMDMA_C2IFCRBase {} ;

  struct MDMA_C2IFCR : public RegisterBase<0x520000C4, 32, WriteMode>
  {
    using CTEIF2 = MDMA_MDMA_C2IFCR_CTEIF2_Values<MDMA::MDMA_C2IFCR, 0, 1, WriteMode, MDMAMDMA_C2IFCRBase> ;
    using CCTCIF2 = MDMA_MDMA_C2IFCR_CCTCIF2_Values<MDMA::MDMA_C2IFCR, 1, 1, WriteMode, MDMAMDMA_C2IFCRBase> ;
    using CBRTIF2 = MDMA_MDMA_C2IFCR_CBRTIF2_Values<MDMA::MDMA_C2IFCR, 2, 1, WriteMode, MDMAMDMA_C2IFCRBase> ;
    using CBTIF2 = MDMA_MDMA_C2IFCR_CBTIF2_Values<MDMA::MDMA_C2IFCR, 3, 1, WriteMode, MDMAMDMA_C2IFCRBase> ;
    using CLTCIF2 = MDMA_MDMA_C2IFCR_CLTCIF2_Values<MDMA::MDMA_C2IFCR, 4, 1, WriteMode, MDMAMDMA_C2IFCRBase> ;
    using FieldValues = MDMA_MDMA_C2IFCR_CLTCIF2_Values<MDMA::MDMA_C2IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2IFCRPack  = Register<0x520000C4, 32, WriteMode, MDMAMDMA_C2IFCRBase, T...> ;

  struct MDMAMDMA_C2ESRBase {} ;

  struct MDMA_C2ESR : public RegisterBase<0x520000C8, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C2ESR_TEA_Values<MDMA::MDMA_C2ESR, 0, 7, ReadMode, MDMAMDMA_C2ESRBase> ;
    using TED = MDMA_MDMA_C2ESR_TED_Values<MDMA::MDMA_C2ESR, 7, 1, ReadMode, MDMAMDMA_C2ESRBase> ;
    using TELD = MDMA_MDMA_C2ESR_TELD_Values<MDMA::MDMA_C2ESR, 8, 1, ReadMode, MDMAMDMA_C2ESRBase> ;
    using TEMD = MDMA_MDMA_C2ESR_TEMD_Values<MDMA::MDMA_C2ESR, 9, 1, ReadMode, MDMAMDMA_C2ESRBase> ;
    using ASE = MDMA_MDMA_C2ESR_ASE_Values<MDMA::MDMA_C2ESR, 10, 1, ReadMode, MDMAMDMA_C2ESRBase> ;
    using BSE = MDMA_MDMA_C2ESR_BSE_Values<MDMA::MDMA_C2ESR, 11, 1, ReadMode, MDMAMDMA_C2ESRBase> ;
    using FieldValues = MDMA_MDMA_C2ESR_BSE_Values<MDMA::MDMA_C2ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2ESRPack  = Register<0x520000C8, 32, ReadMode, MDMAMDMA_C2ESRBase, T...> ;

  struct MDMAMDMA_C2CRBase {} ;

  struct MDMA_C2CR : public RegisterBase<0x520000CC, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C2CR_EN_Values<MDMA::MDMA_C2CR, 0, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using TEIE = MDMA_MDMA_C2CR_TEIE_Values<MDMA::MDMA_C2CR, 1, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using CTCIE = MDMA_MDMA_C2CR_CTCIE_Values<MDMA::MDMA_C2CR, 2, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using BRTIE = MDMA_MDMA_C2CR_BRTIE_Values<MDMA::MDMA_C2CR, 3, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using BTIE = MDMA_MDMA_C2CR_BTIE_Values<MDMA::MDMA_C2CR, 4, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using TCIE = MDMA_MDMA_C2CR_TCIE_Values<MDMA::MDMA_C2CR, 5, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using PL = MDMA_MDMA_C2CR_PL_Values<MDMA::MDMA_C2CR, 6, 2, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using BEX = MDMA_MDMA_C2CR_BEX_Values<MDMA::MDMA_C2CR, 12, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using HEX = MDMA_MDMA_C2CR_HEX_Values<MDMA::MDMA_C2CR, 13, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using WEX = MDMA_MDMA_C2CR_WEX_Values<MDMA::MDMA_C2CR, 14, 1, ReadWriteMode, MDMAMDMA_C2CRBase> ;
    using SWRQ = MDMA_MDMA_C2CR_SWRQ_Values<MDMA::MDMA_C2CR, 16, 1, WriteMode, MDMAMDMA_C2CRBase> ;
    using FieldValues = MDMA_MDMA_C2CR_SWRQ_Values<MDMA::MDMA_C2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2CRPack  = Register<0x520000CC, 32, ReadWriteMode, MDMAMDMA_C2CRBase, T...> ;

  struct MDMAMDMA_C2TCRBase {} ;

  struct MDMA_C2TCR : public RegisterBase<0x520000D0, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C2TCR_SINC_Values<MDMA::MDMA_C2TCR, 0, 2, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using DINC = MDMA_MDMA_C2TCR_DINC_Values<MDMA::MDMA_C2TCR, 2, 2, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using SSIZE = MDMA_MDMA_C2TCR_SSIZE_Values<MDMA::MDMA_C2TCR, 4, 2, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using DSIZE = MDMA_MDMA_C2TCR_DSIZE_Values<MDMA::MDMA_C2TCR, 6, 2, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using SINCOS = MDMA_MDMA_C2TCR_SINCOS_Values<MDMA::MDMA_C2TCR, 8, 2, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using DINCOS = MDMA_MDMA_C2TCR_DINCOS_Values<MDMA::MDMA_C2TCR, 10, 2, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using SBURST = MDMA_MDMA_C2TCR_SBURST_Values<MDMA::MDMA_C2TCR, 12, 3, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using DBURST = MDMA_MDMA_C2TCR_DBURST_Values<MDMA::MDMA_C2TCR, 15, 3, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using TLEN = MDMA_MDMA_C2TCR_TLEN_Values<MDMA::MDMA_C2TCR, 18, 7, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using PKE = MDMA_MDMA_C2TCR_PKE_Values<MDMA::MDMA_C2TCR, 25, 1, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using PAM = MDMA_MDMA_C2TCR_PAM_Values<MDMA::MDMA_C2TCR, 26, 2, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using TRGM = MDMA_MDMA_C2TCR_TRGM_Values<MDMA::MDMA_C2TCR, 28, 2, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using SWRM = MDMA_MDMA_C2TCR_SWRM_Values<MDMA::MDMA_C2TCR, 30, 1, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using BWM = MDMA_MDMA_C2TCR_BWM_Values<MDMA::MDMA_C2TCR, 31, 1, ReadWriteMode, MDMAMDMA_C2TCRBase> ;
    using FieldValues = MDMA_MDMA_C2TCR_BWM_Values<MDMA::MDMA_C2TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2TCRPack  = Register<0x520000D0, 32, ReadWriteMode, MDMAMDMA_C2TCRBase, T...> ;

  struct MDMAMDMA_C2BNDTRBase {} ;

  struct MDMA_C2BNDTR : public RegisterBase<0x520000D4, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C2BNDTR_BNDT_Values<MDMA::MDMA_C2BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C2BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C2BNDTR_BRSUM_Values<MDMA::MDMA_C2BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C2BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C2BNDTR_BRDUM_Values<MDMA::MDMA_C2BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C2BNDTRBase> ;
    using BRC = MDMA_MDMA_C2BNDTR_BRC_Values<MDMA::MDMA_C2BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C2BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C2BNDTR_BRC_Values<MDMA::MDMA_C2BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2BNDTRPack  = Register<0x520000D4, 32, ReadWriteMode, MDMAMDMA_C2BNDTRBase, T...> ;

  struct MDMAMDMA_C2SARBase {} ;

  struct MDMA_C2SAR : public RegisterBase<0x520000D8, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C2SAR_SAR_Values<MDMA::MDMA_C2SAR, 0, 32, ReadWriteMode, MDMAMDMA_C2SARBase> ;
    using FieldValues = MDMA_MDMA_C2SAR_SAR_Values<MDMA::MDMA_C2SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2SARPack  = Register<0x520000D8, 32, ReadWriteMode, MDMAMDMA_C2SARBase, T...> ;

  struct MDMAMDMA_C2DARBase {} ;

  struct MDMA_C2DAR : public RegisterBase<0x520000DC, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C2DAR_DAR_Values<MDMA::MDMA_C2DAR, 0, 32, ReadWriteMode, MDMAMDMA_C2DARBase> ;
    using FieldValues = MDMA_MDMA_C2DAR_DAR_Values<MDMA::MDMA_C2DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2DARPack  = Register<0x520000DC, 32, ReadWriteMode, MDMAMDMA_C2DARBase, T...> ;

  struct MDMAMDMA_C2BRURBase {} ;

  struct MDMA_C2BRUR : public RegisterBase<0x520000E0, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C2BRUR_SUV_Values<MDMA::MDMA_C2BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C2BRURBase> ;
    using DUV = MDMA_MDMA_C2BRUR_DUV_Values<MDMA::MDMA_C2BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C2BRURBase> ;
    using FieldValues = MDMA_MDMA_C2BRUR_DUV_Values<MDMA::MDMA_C2BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2BRURPack  = Register<0x520000E0, 32, ReadWriteMode, MDMAMDMA_C2BRURBase, T...> ;

  struct MDMAMDMA_C2LARBase {} ;

  struct MDMA_C2LAR : public RegisterBase<0x520000E4, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C2LAR_LAR_Values<MDMA::MDMA_C2LAR, 0, 32, ReadWriteMode, MDMAMDMA_C2LARBase> ;
    using FieldValues = MDMA_MDMA_C2LAR_LAR_Values<MDMA::MDMA_C2LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2LARPack  = Register<0x520000E4, 32, ReadWriteMode, MDMAMDMA_C2LARBase, T...> ;

  struct MDMAMDMA_C2TBRBase {} ;

  struct MDMA_C2TBR : public RegisterBase<0x520000E8, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C2TBR_TSEL_Values<MDMA::MDMA_C2TBR, 0, 6, ReadWriteMode, MDMAMDMA_C2TBRBase> ;
    using SBUS = MDMA_MDMA_C2TBR_SBUS_Values<MDMA::MDMA_C2TBR, 16, 1, ReadWriteMode, MDMAMDMA_C2TBRBase> ;
    using DBUS = MDMA_MDMA_C2TBR_DBUS_Values<MDMA::MDMA_C2TBR, 17, 1, ReadWriteMode, MDMAMDMA_C2TBRBase> ;
    using FieldValues = MDMA_MDMA_C2TBR_DBUS_Values<MDMA::MDMA_C2TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2TBRPack  = Register<0x520000E8, 32, ReadWriteMode, MDMAMDMA_C2TBRBase, T...> ;

  struct MDMAMDMA_C2MARBase {} ;

  struct MDMA_C2MAR : public RegisterBase<0x520000F0, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C2MAR_MAR_Values<MDMA::MDMA_C2MAR, 0, 32, ReadWriteMode, MDMAMDMA_C2MARBase> ;
    using FieldValues = MDMA_MDMA_C2MAR_MAR_Values<MDMA::MDMA_C2MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2MARPack  = Register<0x520000F0, 32, ReadWriteMode, MDMAMDMA_C2MARBase, T...> ;

  struct MDMAMDMA_C2MDRBase {} ;

  struct MDMA_C2MDR : public RegisterBase<0x520000F4, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C2MDR_MDR_Values<MDMA::MDMA_C2MDR, 0, 32, ReadWriteMode, MDMAMDMA_C2MDRBase> ;
    using FieldValues = MDMA_MDMA_C2MDR_MDR_Values<MDMA::MDMA_C2MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C2MDRPack  = Register<0x520000F4, 32, ReadWriteMode, MDMAMDMA_C2MDRBase, T...> ;

  struct MDMAMDMA_C3ISRBase {} ;

  struct MDMA_C3ISR : public RegisterBase<0x52000100, 32, ReadMode>
  {
    using TEIF3 = MDMA_MDMA_C3ISR_TEIF3_Values<MDMA::MDMA_C3ISR, 0, 1, ReadMode, MDMAMDMA_C3ISRBase> ;
    using CTCIF3 = MDMA_MDMA_C3ISR_CTCIF3_Values<MDMA::MDMA_C3ISR, 1, 1, ReadMode, MDMAMDMA_C3ISRBase> ;
    using BRTIF3 = MDMA_MDMA_C3ISR_BRTIF3_Values<MDMA::MDMA_C3ISR, 2, 1, ReadMode, MDMAMDMA_C3ISRBase> ;
    using BTIF3 = MDMA_MDMA_C3ISR_BTIF3_Values<MDMA::MDMA_C3ISR, 3, 1, ReadMode, MDMAMDMA_C3ISRBase> ;
    using TCIF3 = MDMA_MDMA_C3ISR_TCIF3_Values<MDMA::MDMA_C3ISR, 4, 1, ReadMode, MDMAMDMA_C3ISRBase> ;
    using CRQA3 = MDMA_MDMA_C3ISR_CRQA3_Values<MDMA::MDMA_C3ISR, 16, 1, ReadMode, MDMAMDMA_C3ISRBase> ;
    using FieldValues = MDMA_MDMA_C3ISR_CRQA3_Values<MDMA::MDMA_C3ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3ISRPack  = Register<0x52000100, 32, ReadMode, MDMAMDMA_C3ISRBase, T...> ;

  struct MDMAMDMA_C3IFCRBase {} ;

  struct MDMA_C3IFCR : public RegisterBase<0x52000104, 32, WriteMode>
  {
    using CTEIF3 = MDMA_MDMA_C3IFCR_CTEIF3_Values<MDMA::MDMA_C3IFCR, 0, 1, WriteMode, MDMAMDMA_C3IFCRBase> ;
    using CCTCIF3 = MDMA_MDMA_C3IFCR_CCTCIF3_Values<MDMA::MDMA_C3IFCR, 1, 1, WriteMode, MDMAMDMA_C3IFCRBase> ;
    using CBRTIF3 = MDMA_MDMA_C3IFCR_CBRTIF3_Values<MDMA::MDMA_C3IFCR, 2, 1, WriteMode, MDMAMDMA_C3IFCRBase> ;
    using CBTIF3 = MDMA_MDMA_C3IFCR_CBTIF3_Values<MDMA::MDMA_C3IFCR, 3, 1, WriteMode, MDMAMDMA_C3IFCRBase> ;
    using CLTCIF3 = MDMA_MDMA_C3IFCR_CLTCIF3_Values<MDMA::MDMA_C3IFCR, 4, 1, WriteMode, MDMAMDMA_C3IFCRBase> ;
    using FieldValues = MDMA_MDMA_C3IFCR_CLTCIF3_Values<MDMA::MDMA_C3IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3IFCRPack  = Register<0x52000104, 32, WriteMode, MDMAMDMA_C3IFCRBase, T...> ;

  struct MDMAMDMA_C3ESRBase {} ;

  struct MDMA_C3ESR : public RegisterBase<0x52000108, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C3ESR_TEA_Values<MDMA::MDMA_C3ESR, 0, 7, ReadMode, MDMAMDMA_C3ESRBase> ;
    using TED = MDMA_MDMA_C3ESR_TED_Values<MDMA::MDMA_C3ESR, 7, 1, ReadMode, MDMAMDMA_C3ESRBase> ;
    using TELD = MDMA_MDMA_C3ESR_TELD_Values<MDMA::MDMA_C3ESR, 8, 1, ReadMode, MDMAMDMA_C3ESRBase> ;
    using TEMD = MDMA_MDMA_C3ESR_TEMD_Values<MDMA::MDMA_C3ESR, 9, 1, ReadMode, MDMAMDMA_C3ESRBase> ;
    using ASE = MDMA_MDMA_C3ESR_ASE_Values<MDMA::MDMA_C3ESR, 10, 1, ReadMode, MDMAMDMA_C3ESRBase> ;
    using BSE = MDMA_MDMA_C3ESR_BSE_Values<MDMA::MDMA_C3ESR, 11, 1, ReadMode, MDMAMDMA_C3ESRBase> ;
    using FieldValues = MDMA_MDMA_C3ESR_BSE_Values<MDMA::MDMA_C3ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3ESRPack  = Register<0x52000108, 32, ReadMode, MDMAMDMA_C3ESRBase, T...> ;

  struct MDMAMDMA_C3CRBase {} ;

  struct MDMA_C3CR : public RegisterBase<0x5200010C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C3CR_EN_Values<MDMA::MDMA_C3CR, 0, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using TEIE = MDMA_MDMA_C3CR_TEIE_Values<MDMA::MDMA_C3CR, 1, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using CTCIE = MDMA_MDMA_C3CR_CTCIE_Values<MDMA::MDMA_C3CR, 2, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using BRTIE = MDMA_MDMA_C3CR_BRTIE_Values<MDMA::MDMA_C3CR, 3, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using BTIE = MDMA_MDMA_C3CR_BTIE_Values<MDMA::MDMA_C3CR, 4, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using TCIE = MDMA_MDMA_C3CR_TCIE_Values<MDMA::MDMA_C3CR, 5, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using PL = MDMA_MDMA_C3CR_PL_Values<MDMA::MDMA_C3CR, 6, 2, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using BEX = MDMA_MDMA_C3CR_BEX_Values<MDMA::MDMA_C3CR, 12, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using HEX = MDMA_MDMA_C3CR_HEX_Values<MDMA::MDMA_C3CR, 13, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using WEX = MDMA_MDMA_C3CR_WEX_Values<MDMA::MDMA_C3CR, 14, 1, ReadWriteMode, MDMAMDMA_C3CRBase> ;
    using SWRQ = MDMA_MDMA_C3CR_SWRQ_Values<MDMA::MDMA_C3CR, 16, 1, WriteMode, MDMAMDMA_C3CRBase> ;
    using FieldValues = MDMA_MDMA_C3CR_SWRQ_Values<MDMA::MDMA_C3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3CRPack  = Register<0x5200010C, 32, ReadWriteMode, MDMAMDMA_C3CRBase, T...> ;

  struct MDMAMDMA_C3TCRBase {} ;

  struct MDMA_C3TCR : public RegisterBase<0x52000110, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C3TCR_SINC_Values<MDMA::MDMA_C3TCR, 0, 2, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using DINC = MDMA_MDMA_C3TCR_DINC_Values<MDMA::MDMA_C3TCR, 2, 2, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using SSIZE = MDMA_MDMA_C3TCR_SSIZE_Values<MDMA::MDMA_C3TCR, 4, 2, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using DSIZE = MDMA_MDMA_C3TCR_DSIZE_Values<MDMA::MDMA_C3TCR, 6, 2, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using SINCOS = MDMA_MDMA_C3TCR_SINCOS_Values<MDMA::MDMA_C3TCR, 8, 2, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using DINCOS = MDMA_MDMA_C3TCR_DINCOS_Values<MDMA::MDMA_C3TCR, 10, 2, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using SBURST = MDMA_MDMA_C3TCR_SBURST_Values<MDMA::MDMA_C3TCR, 12, 3, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using DBURST = MDMA_MDMA_C3TCR_DBURST_Values<MDMA::MDMA_C3TCR, 15, 3, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using TLEN = MDMA_MDMA_C3TCR_TLEN_Values<MDMA::MDMA_C3TCR, 18, 7, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using PKE = MDMA_MDMA_C3TCR_PKE_Values<MDMA::MDMA_C3TCR, 25, 1, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using PAM = MDMA_MDMA_C3TCR_PAM_Values<MDMA::MDMA_C3TCR, 26, 2, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using TRGM = MDMA_MDMA_C3TCR_TRGM_Values<MDMA::MDMA_C3TCR, 28, 2, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using SWRM = MDMA_MDMA_C3TCR_SWRM_Values<MDMA::MDMA_C3TCR, 30, 1, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using BWM = MDMA_MDMA_C3TCR_BWM_Values<MDMA::MDMA_C3TCR, 31, 1, ReadWriteMode, MDMAMDMA_C3TCRBase> ;
    using FieldValues = MDMA_MDMA_C3TCR_BWM_Values<MDMA::MDMA_C3TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3TCRPack  = Register<0x52000110, 32, ReadWriteMode, MDMAMDMA_C3TCRBase, T...> ;

  struct MDMAMDMA_C3BNDTRBase {} ;

  struct MDMA_C3BNDTR : public RegisterBase<0x52000114, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C3BNDTR_BNDT_Values<MDMA::MDMA_C3BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C3BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C3BNDTR_BRSUM_Values<MDMA::MDMA_C3BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C3BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C3BNDTR_BRDUM_Values<MDMA::MDMA_C3BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C3BNDTRBase> ;
    using BRC = MDMA_MDMA_C3BNDTR_BRC_Values<MDMA::MDMA_C3BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C3BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C3BNDTR_BRC_Values<MDMA::MDMA_C3BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3BNDTRPack  = Register<0x52000114, 32, ReadWriteMode, MDMAMDMA_C3BNDTRBase, T...> ;

  struct MDMAMDMA_C3SARBase {} ;

  struct MDMA_C3SAR : public RegisterBase<0x52000118, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C3SAR_SAR_Values<MDMA::MDMA_C3SAR, 0, 32, ReadWriteMode, MDMAMDMA_C3SARBase> ;
    using FieldValues = MDMA_MDMA_C3SAR_SAR_Values<MDMA::MDMA_C3SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3SARPack  = Register<0x52000118, 32, ReadWriteMode, MDMAMDMA_C3SARBase, T...> ;

  struct MDMAMDMA_C3DARBase {} ;

  struct MDMA_C3DAR : public RegisterBase<0x5200011C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C3DAR_DAR_Values<MDMA::MDMA_C3DAR, 0, 32, ReadWriteMode, MDMAMDMA_C3DARBase> ;
    using FieldValues = MDMA_MDMA_C3DAR_DAR_Values<MDMA::MDMA_C3DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3DARPack  = Register<0x5200011C, 32, ReadWriteMode, MDMAMDMA_C3DARBase, T...> ;

  struct MDMAMDMA_C3BRURBase {} ;

  struct MDMA_C3BRUR : public RegisterBase<0x52000120, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C3BRUR_SUV_Values<MDMA::MDMA_C3BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C3BRURBase> ;
    using DUV = MDMA_MDMA_C3BRUR_DUV_Values<MDMA::MDMA_C3BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C3BRURBase> ;
    using FieldValues = MDMA_MDMA_C3BRUR_DUV_Values<MDMA::MDMA_C3BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3BRURPack  = Register<0x52000120, 32, ReadWriteMode, MDMAMDMA_C3BRURBase, T...> ;

  struct MDMAMDMA_C3LARBase {} ;

  struct MDMA_C3LAR : public RegisterBase<0x52000124, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C3LAR_LAR_Values<MDMA::MDMA_C3LAR, 0, 32, ReadWriteMode, MDMAMDMA_C3LARBase> ;
    using FieldValues = MDMA_MDMA_C3LAR_LAR_Values<MDMA::MDMA_C3LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3LARPack  = Register<0x52000124, 32, ReadWriteMode, MDMAMDMA_C3LARBase, T...> ;

  struct MDMAMDMA_C3TBRBase {} ;

  struct MDMA_C3TBR : public RegisterBase<0x52000128, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C3TBR_TSEL_Values<MDMA::MDMA_C3TBR, 0, 6, ReadWriteMode, MDMAMDMA_C3TBRBase> ;
    using SBUS = MDMA_MDMA_C3TBR_SBUS_Values<MDMA::MDMA_C3TBR, 16, 1, ReadWriteMode, MDMAMDMA_C3TBRBase> ;
    using DBUS = MDMA_MDMA_C3TBR_DBUS_Values<MDMA::MDMA_C3TBR, 17, 1, ReadWriteMode, MDMAMDMA_C3TBRBase> ;
    using FieldValues = MDMA_MDMA_C3TBR_DBUS_Values<MDMA::MDMA_C3TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3TBRPack  = Register<0x52000128, 32, ReadWriteMode, MDMAMDMA_C3TBRBase, T...> ;

  struct MDMAMDMA_C3MARBase {} ;

  struct MDMA_C3MAR : public RegisterBase<0x52000130, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C3MAR_MAR_Values<MDMA::MDMA_C3MAR, 0, 32, ReadWriteMode, MDMAMDMA_C3MARBase> ;
    using FieldValues = MDMA_MDMA_C3MAR_MAR_Values<MDMA::MDMA_C3MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3MARPack  = Register<0x52000130, 32, ReadWriteMode, MDMAMDMA_C3MARBase, T...> ;

  struct MDMAMDMA_C3MDRBase {} ;

  struct MDMA_C3MDR : public RegisterBase<0x52000134, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C3MDR_MDR_Values<MDMA::MDMA_C3MDR, 0, 32, ReadWriteMode, MDMAMDMA_C3MDRBase> ;
    using FieldValues = MDMA_MDMA_C3MDR_MDR_Values<MDMA::MDMA_C3MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C3MDRPack  = Register<0x52000134, 32, ReadWriteMode, MDMAMDMA_C3MDRBase, T...> ;

  struct MDMAMDMA_C4ISRBase {} ;

  struct MDMA_C4ISR : public RegisterBase<0x52000140, 32, ReadMode>
  {
    using TEIF4 = MDMA_MDMA_C4ISR_TEIF4_Values<MDMA::MDMA_C4ISR, 0, 1, ReadMode, MDMAMDMA_C4ISRBase> ;
    using CTCIF4 = MDMA_MDMA_C4ISR_CTCIF4_Values<MDMA::MDMA_C4ISR, 1, 1, ReadMode, MDMAMDMA_C4ISRBase> ;
    using BRTIF4 = MDMA_MDMA_C4ISR_BRTIF4_Values<MDMA::MDMA_C4ISR, 2, 1, ReadMode, MDMAMDMA_C4ISRBase> ;
    using BTIF4 = MDMA_MDMA_C4ISR_BTIF4_Values<MDMA::MDMA_C4ISR, 3, 1, ReadMode, MDMAMDMA_C4ISRBase> ;
    using TCIF4 = MDMA_MDMA_C4ISR_TCIF4_Values<MDMA::MDMA_C4ISR, 4, 1, ReadMode, MDMAMDMA_C4ISRBase> ;
    using CRQA4 = MDMA_MDMA_C4ISR_CRQA4_Values<MDMA::MDMA_C4ISR, 16, 1, ReadMode, MDMAMDMA_C4ISRBase> ;
    using FieldValues = MDMA_MDMA_C4ISR_CRQA4_Values<MDMA::MDMA_C4ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4ISRPack  = Register<0x52000140, 32, ReadMode, MDMAMDMA_C4ISRBase, T...> ;

  struct MDMAMDMA_C4IFCRBase {} ;

  struct MDMA_C4IFCR : public RegisterBase<0x52000144, 32, WriteMode>
  {
    using CTEIF4 = MDMA_MDMA_C4IFCR_CTEIF4_Values<MDMA::MDMA_C4IFCR, 0, 1, WriteMode, MDMAMDMA_C4IFCRBase> ;
    using CCTCIF4 = MDMA_MDMA_C4IFCR_CCTCIF4_Values<MDMA::MDMA_C4IFCR, 1, 1, WriteMode, MDMAMDMA_C4IFCRBase> ;
    using CBRTIF4 = MDMA_MDMA_C4IFCR_CBRTIF4_Values<MDMA::MDMA_C4IFCR, 2, 1, WriteMode, MDMAMDMA_C4IFCRBase> ;
    using CBTIF4 = MDMA_MDMA_C4IFCR_CBTIF4_Values<MDMA::MDMA_C4IFCR, 3, 1, WriteMode, MDMAMDMA_C4IFCRBase> ;
    using CLTCIF4 = MDMA_MDMA_C4IFCR_CLTCIF4_Values<MDMA::MDMA_C4IFCR, 4, 1, WriteMode, MDMAMDMA_C4IFCRBase> ;
    using FieldValues = MDMA_MDMA_C4IFCR_CLTCIF4_Values<MDMA::MDMA_C4IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4IFCRPack  = Register<0x52000144, 32, WriteMode, MDMAMDMA_C4IFCRBase, T...> ;

  struct MDMAMDMA_C4ESRBase {} ;

  struct MDMA_C4ESR : public RegisterBase<0x52000148, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C4ESR_TEA_Values<MDMA::MDMA_C4ESR, 0, 7, ReadMode, MDMAMDMA_C4ESRBase> ;
    using TED = MDMA_MDMA_C4ESR_TED_Values<MDMA::MDMA_C4ESR, 7, 1, ReadMode, MDMAMDMA_C4ESRBase> ;
    using TELD = MDMA_MDMA_C4ESR_TELD_Values<MDMA::MDMA_C4ESR, 8, 1, ReadMode, MDMAMDMA_C4ESRBase> ;
    using TEMD = MDMA_MDMA_C4ESR_TEMD_Values<MDMA::MDMA_C4ESR, 9, 1, ReadMode, MDMAMDMA_C4ESRBase> ;
    using ASE = MDMA_MDMA_C4ESR_ASE_Values<MDMA::MDMA_C4ESR, 10, 1, ReadMode, MDMAMDMA_C4ESRBase> ;
    using BSE = MDMA_MDMA_C4ESR_BSE_Values<MDMA::MDMA_C4ESR, 11, 1, ReadMode, MDMAMDMA_C4ESRBase> ;
    using FieldValues = MDMA_MDMA_C4ESR_BSE_Values<MDMA::MDMA_C4ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4ESRPack  = Register<0x52000148, 32, ReadMode, MDMAMDMA_C4ESRBase, T...> ;

  struct MDMAMDMA_C4CRBase {} ;

  struct MDMA_C4CR : public RegisterBase<0x5200014C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C4CR_EN_Values<MDMA::MDMA_C4CR, 0, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using TEIE = MDMA_MDMA_C4CR_TEIE_Values<MDMA::MDMA_C4CR, 1, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using CTCIE = MDMA_MDMA_C4CR_CTCIE_Values<MDMA::MDMA_C4CR, 2, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using BRTIE = MDMA_MDMA_C4CR_BRTIE_Values<MDMA::MDMA_C4CR, 3, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using BTIE = MDMA_MDMA_C4CR_BTIE_Values<MDMA::MDMA_C4CR, 4, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using TCIE = MDMA_MDMA_C4CR_TCIE_Values<MDMA::MDMA_C4CR, 5, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using PL = MDMA_MDMA_C4CR_PL_Values<MDMA::MDMA_C4CR, 6, 2, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using BEX = MDMA_MDMA_C4CR_BEX_Values<MDMA::MDMA_C4CR, 12, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using HEX = MDMA_MDMA_C4CR_HEX_Values<MDMA::MDMA_C4CR, 13, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using WEX = MDMA_MDMA_C4CR_WEX_Values<MDMA::MDMA_C4CR, 14, 1, ReadWriteMode, MDMAMDMA_C4CRBase> ;
    using SWRQ = MDMA_MDMA_C4CR_SWRQ_Values<MDMA::MDMA_C4CR, 16, 1, WriteMode, MDMAMDMA_C4CRBase> ;
    using FieldValues = MDMA_MDMA_C4CR_SWRQ_Values<MDMA::MDMA_C4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4CRPack  = Register<0x5200014C, 32, ReadWriteMode, MDMAMDMA_C4CRBase, T...> ;

  struct MDMAMDMA_C4TCRBase {} ;

  struct MDMA_C4TCR : public RegisterBase<0x52000150, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C4TCR_SINC_Values<MDMA::MDMA_C4TCR, 0, 2, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using DINC = MDMA_MDMA_C4TCR_DINC_Values<MDMA::MDMA_C4TCR, 2, 2, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using SSIZE = MDMA_MDMA_C4TCR_SSIZE_Values<MDMA::MDMA_C4TCR, 4, 2, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using DSIZE = MDMA_MDMA_C4TCR_DSIZE_Values<MDMA::MDMA_C4TCR, 6, 2, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using SINCOS = MDMA_MDMA_C4TCR_SINCOS_Values<MDMA::MDMA_C4TCR, 8, 2, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using DINCOS = MDMA_MDMA_C4TCR_DINCOS_Values<MDMA::MDMA_C4TCR, 10, 2, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using SBURST = MDMA_MDMA_C4TCR_SBURST_Values<MDMA::MDMA_C4TCR, 12, 3, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using DBURST = MDMA_MDMA_C4TCR_DBURST_Values<MDMA::MDMA_C4TCR, 15, 3, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using TLEN = MDMA_MDMA_C4TCR_TLEN_Values<MDMA::MDMA_C4TCR, 18, 7, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using PKE = MDMA_MDMA_C4TCR_PKE_Values<MDMA::MDMA_C4TCR, 25, 1, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using PAM = MDMA_MDMA_C4TCR_PAM_Values<MDMA::MDMA_C4TCR, 26, 2, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using TRGM = MDMA_MDMA_C4TCR_TRGM_Values<MDMA::MDMA_C4TCR, 28, 2, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using SWRM = MDMA_MDMA_C4TCR_SWRM_Values<MDMA::MDMA_C4TCR, 30, 1, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using BWM = MDMA_MDMA_C4TCR_BWM_Values<MDMA::MDMA_C4TCR, 31, 1, ReadWriteMode, MDMAMDMA_C4TCRBase> ;
    using FieldValues = MDMA_MDMA_C4TCR_BWM_Values<MDMA::MDMA_C4TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4TCRPack  = Register<0x52000150, 32, ReadWriteMode, MDMAMDMA_C4TCRBase, T...> ;

  struct MDMAMDMA_C4BNDTRBase {} ;

  struct MDMA_C4BNDTR : public RegisterBase<0x52000154, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C4BNDTR_BNDT_Values<MDMA::MDMA_C4BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C4BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C4BNDTR_BRSUM_Values<MDMA::MDMA_C4BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C4BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C4BNDTR_BRDUM_Values<MDMA::MDMA_C4BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C4BNDTRBase> ;
    using BRC = MDMA_MDMA_C4BNDTR_BRC_Values<MDMA::MDMA_C4BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C4BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C4BNDTR_BRC_Values<MDMA::MDMA_C4BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4BNDTRPack  = Register<0x52000154, 32, ReadWriteMode, MDMAMDMA_C4BNDTRBase, T...> ;

  struct MDMAMDMA_C4SARBase {} ;

  struct MDMA_C4SAR : public RegisterBase<0x52000158, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C4SAR_SAR_Values<MDMA::MDMA_C4SAR, 0, 32, ReadWriteMode, MDMAMDMA_C4SARBase> ;
    using FieldValues = MDMA_MDMA_C4SAR_SAR_Values<MDMA::MDMA_C4SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4SARPack  = Register<0x52000158, 32, ReadWriteMode, MDMAMDMA_C4SARBase, T...> ;

  struct MDMAMDMA_C4DARBase {} ;

  struct MDMA_C4DAR : public RegisterBase<0x5200015C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C4DAR_DAR_Values<MDMA::MDMA_C4DAR, 0, 32, ReadWriteMode, MDMAMDMA_C4DARBase> ;
    using FieldValues = MDMA_MDMA_C4DAR_DAR_Values<MDMA::MDMA_C4DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4DARPack  = Register<0x5200015C, 32, ReadWriteMode, MDMAMDMA_C4DARBase, T...> ;

  struct MDMAMDMA_C4BRURBase {} ;

  struct MDMA_C4BRUR : public RegisterBase<0x52000160, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C4BRUR_SUV_Values<MDMA::MDMA_C4BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C4BRURBase> ;
    using DUV = MDMA_MDMA_C4BRUR_DUV_Values<MDMA::MDMA_C4BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C4BRURBase> ;
    using FieldValues = MDMA_MDMA_C4BRUR_DUV_Values<MDMA::MDMA_C4BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4BRURPack  = Register<0x52000160, 32, ReadWriteMode, MDMAMDMA_C4BRURBase, T...> ;

  struct MDMAMDMA_C4LARBase {} ;

  struct MDMA_C4LAR : public RegisterBase<0x52000164, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C4LAR_LAR_Values<MDMA::MDMA_C4LAR, 0, 32, ReadWriteMode, MDMAMDMA_C4LARBase> ;
    using FieldValues = MDMA_MDMA_C4LAR_LAR_Values<MDMA::MDMA_C4LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4LARPack  = Register<0x52000164, 32, ReadWriteMode, MDMAMDMA_C4LARBase, T...> ;

  struct MDMAMDMA_C4TBRBase {} ;

  struct MDMA_C4TBR : public RegisterBase<0x52000168, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C4TBR_TSEL_Values<MDMA::MDMA_C4TBR, 0, 6, ReadWriteMode, MDMAMDMA_C4TBRBase> ;
    using SBUS = MDMA_MDMA_C4TBR_SBUS_Values<MDMA::MDMA_C4TBR, 16, 1, ReadWriteMode, MDMAMDMA_C4TBRBase> ;
    using DBUS = MDMA_MDMA_C4TBR_DBUS_Values<MDMA::MDMA_C4TBR, 17, 1, ReadWriteMode, MDMAMDMA_C4TBRBase> ;
    using FieldValues = MDMA_MDMA_C4TBR_DBUS_Values<MDMA::MDMA_C4TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4TBRPack  = Register<0x52000168, 32, ReadWriteMode, MDMAMDMA_C4TBRBase, T...> ;

  struct MDMAMDMA_C4MARBase {} ;

  struct MDMA_C4MAR : public RegisterBase<0x52000170, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C4MAR_MAR_Values<MDMA::MDMA_C4MAR, 0, 32, ReadWriteMode, MDMAMDMA_C4MARBase> ;
    using FieldValues = MDMA_MDMA_C4MAR_MAR_Values<MDMA::MDMA_C4MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4MARPack  = Register<0x52000170, 32, ReadWriteMode, MDMAMDMA_C4MARBase, T...> ;

  struct MDMAMDMA_C4MDRBase {} ;

  struct MDMA_C4MDR : public RegisterBase<0x52000174, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C4MDR_MDR_Values<MDMA::MDMA_C4MDR, 0, 32, ReadWriteMode, MDMAMDMA_C4MDRBase> ;
    using FieldValues = MDMA_MDMA_C4MDR_MDR_Values<MDMA::MDMA_C4MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C4MDRPack  = Register<0x52000174, 32, ReadWriteMode, MDMAMDMA_C4MDRBase, T...> ;

  struct MDMAMDMA_C5ISRBase {} ;

  struct MDMA_C5ISR : public RegisterBase<0x52000180, 32, ReadMode>
  {
    using TEIF5 = MDMA_MDMA_C5ISR_TEIF5_Values<MDMA::MDMA_C5ISR, 0, 1, ReadMode, MDMAMDMA_C5ISRBase> ;
    using CTCIF5 = MDMA_MDMA_C5ISR_CTCIF5_Values<MDMA::MDMA_C5ISR, 1, 1, ReadMode, MDMAMDMA_C5ISRBase> ;
    using BRTIF5 = MDMA_MDMA_C5ISR_BRTIF5_Values<MDMA::MDMA_C5ISR, 2, 1, ReadMode, MDMAMDMA_C5ISRBase> ;
    using BTIF5 = MDMA_MDMA_C5ISR_BTIF5_Values<MDMA::MDMA_C5ISR, 3, 1, ReadMode, MDMAMDMA_C5ISRBase> ;
    using TCIF5 = MDMA_MDMA_C5ISR_TCIF5_Values<MDMA::MDMA_C5ISR, 4, 1, ReadMode, MDMAMDMA_C5ISRBase> ;
    using CRQA5 = MDMA_MDMA_C5ISR_CRQA5_Values<MDMA::MDMA_C5ISR, 16, 1, ReadMode, MDMAMDMA_C5ISRBase> ;
    using FieldValues = MDMA_MDMA_C5ISR_CRQA5_Values<MDMA::MDMA_C5ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5ISRPack  = Register<0x52000180, 32, ReadMode, MDMAMDMA_C5ISRBase, T...> ;

  struct MDMAMDMA_C5IFCRBase {} ;

  struct MDMA_C5IFCR : public RegisterBase<0x52000184, 32, WriteMode>
  {
    using CTEIF5 = MDMA_MDMA_C5IFCR_CTEIF5_Values<MDMA::MDMA_C5IFCR, 0, 1, WriteMode, MDMAMDMA_C5IFCRBase> ;
    using CCTCIF5 = MDMA_MDMA_C5IFCR_CCTCIF5_Values<MDMA::MDMA_C5IFCR, 1, 1, WriteMode, MDMAMDMA_C5IFCRBase> ;
    using CBRTIF5 = MDMA_MDMA_C5IFCR_CBRTIF5_Values<MDMA::MDMA_C5IFCR, 2, 1, WriteMode, MDMAMDMA_C5IFCRBase> ;
    using CBTIF5 = MDMA_MDMA_C5IFCR_CBTIF5_Values<MDMA::MDMA_C5IFCR, 3, 1, WriteMode, MDMAMDMA_C5IFCRBase> ;
    using CLTCIF5 = MDMA_MDMA_C5IFCR_CLTCIF5_Values<MDMA::MDMA_C5IFCR, 4, 1, WriteMode, MDMAMDMA_C5IFCRBase> ;
    using FieldValues = MDMA_MDMA_C5IFCR_CLTCIF5_Values<MDMA::MDMA_C5IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5IFCRPack  = Register<0x52000184, 32, WriteMode, MDMAMDMA_C5IFCRBase, T...> ;

  struct MDMAMDMA_C5ESRBase {} ;

  struct MDMA_C5ESR : public RegisterBase<0x52000188, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C5ESR_TEA_Values<MDMA::MDMA_C5ESR, 0, 7, ReadMode, MDMAMDMA_C5ESRBase> ;
    using TED = MDMA_MDMA_C5ESR_TED_Values<MDMA::MDMA_C5ESR, 7, 1, ReadMode, MDMAMDMA_C5ESRBase> ;
    using TELD = MDMA_MDMA_C5ESR_TELD_Values<MDMA::MDMA_C5ESR, 8, 1, ReadMode, MDMAMDMA_C5ESRBase> ;
    using TEMD = MDMA_MDMA_C5ESR_TEMD_Values<MDMA::MDMA_C5ESR, 9, 1, ReadMode, MDMAMDMA_C5ESRBase> ;
    using ASE = MDMA_MDMA_C5ESR_ASE_Values<MDMA::MDMA_C5ESR, 10, 1, ReadMode, MDMAMDMA_C5ESRBase> ;
    using BSE = MDMA_MDMA_C5ESR_BSE_Values<MDMA::MDMA_C5ESR, 11, 1, ReadMode, MDMAMDMA_C5ESRBase> ;
    using FieldValues = MDMA_MDMA_C5ESR_BSE_Values<MDMA::MDMA_C5ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5ESRPack  = Register<0x52000188, 32, ReadMode, MDMAMDMA_C5ESRBase, T...> ;

  struct MDMAMDMA_C5CRBase {} ;

  struct MDMA_C5CR : public RegisterBase<0x5200018C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C5CR_EN_Values<MDMA::MDMA_C5CR, 0, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using TEIE = MDMA_MDMA_C5CR_TEIE_Values<MDMA::MDMA_C5CR, 1, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using CTCIE = MDMA_MDMA_C5CR_CTCIE_Values<MDMA::MDMA_C5CR, 2, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using BRTIE = MDMA_MDMA_C5CR_BRTIE_Values<MDMA::MDMA_C5CR, 3, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using BTIE = MDMA_MDMA_C5CR_BTIE_Values<MDMA::MDMA_C5CR, 4, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using TCIE = MDMA_MDMA_C5CR_TCIE_Values<MDMA::MDMA_C5CR, 5, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using PL = MDMA_MDMA_C5CR_PL_Values<MDMA::MDMA_C5CR, 6, 2, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using BEX = MDMA_MDMA_C5CR_BEX_Values<MDMA::MDMA_C5CR, 12, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using HEX = MDMA_MDMA_C5CR_HEX_Values<MDMA::MDMA_C5CR, 13, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using WEX = MDMA_MDMA_C5CR_WEX_Values<MDMA::MDMA_C5CR, 14, 1, ReadWriteMode, MDMAMDMA_C5CRBase> ;
    using SWRQ = MDMA_MDMA_C5CR_SWRQ_Values<MDMA::MDMA_C5CR, 16, 1, WriteMode, MDMAMDMA_C5CRBase> ;
    using FieldValues = MDMA_MDMA_C5CR_SWRQ_Values<MDMA::MDMA_C5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5CRPack  = Register<0x5200018C, 32, ReadWriteMode, MDMAMDMA_C5CRBase, T...> ;

  struct MDMAMDMA_C5TCRBase {} ;

  struct MDMA_C5TCR : public RegisterBase<0x52000190, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C5TCR_SINC_Values<MDMA::MDMA_C5TCR, 0, 2, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using DINC = MDMA_MDMA_C5TCR_DINC_Values<MDMA::MDMA_C5TCR, 2, 2, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using SSIZE = MDMA_MDMA_C5TCR_SSIZE_Values<MDMA::MDMA_C5TCR, 4, 2, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using DSIZE = MDMA_MDMA_C5TCR_DSIZE_Values<MDMA::MDMA_C5TCR, 6, 2, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using SINCOS = MDMA_MDMA_C5TCR_SINCOS_Values<MDMA::MDMA_C5TCR, 8, 2, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using DINCOS = MDMA_MDMA_C5TCR_DINCOS_Values<MDMA::MDMA_C5TCR, 10, 2, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using SBURST = MDMA_MDMA_C5TCR_SBURST_Values<MDMA::MDMA_C5TCR, 12, 3, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using DBURST = MDMA_MDMA_C5TCR_DBURST_Values<MDMA::MDMA_C5TCR, 15, 3, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using TLEN = MDMA_MDMA_C5TCR_TLEN_Values<MDMA::MDMA_C5TCR, 18, 7, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using PKE = MDMA_MDMA_C5TCR_PKE_Values<MDMA::MDMA_C5TCR, 25, 1, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using PAM = MDMA_MDMA_C5TCR_PAM_Values<MDMA::MDMA_C5TCR, 26, 2, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using TRGM = MDMA_MDMA_C5TCR_TRGM_Values<MDMA::MDMA_C5TCR, 28, 2, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using SWRM = MDMA_MDMA_C5TCR_SWRM_Values<MDMA::MDMA_C5TCR, 30, 1, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using BWM = MDMA_MDMA_C5TCR_BWM_Values<MDMA::MDMA_C5TCR, 31, 1, ReadWriteMode, MDMAMDMA_C5TCRBase> ;
    using FieldValues = MDMA_MDMA_C5TCR_BWM_Values<MDMA::MDMA_C5TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5TCRPack  = Register<0x52000190, 32, ReadWriteMode, MDMAMDMA_C5TCRBase, T...> ;

  struct MDMAMDMA_C5BNDTRBase {} ;

  struct MDMA_C5BNDTR : public RegisterBase<0x52000194, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C5BNDTR_BNDT_Values<MDMA::MDMA_C5BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C5BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C5BNDTR_BRSUM_Values<MDMA::MDMA_C5BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C5BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C5BNDTR_BRDUM_Values<MDMA::MDMA_C5BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C5BNDTRBase> ;
    using BRC = MDMA_MDMA_C5BNDTR_BRC_Values<MDMA::MDMA_C5BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C5BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C5BNDTR_BRC_Values<MDMA::MDMA_C5BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5BNDTRPack  = Register<0x52000194, 32, ReadWriteMode, MDMAMDMA_C5BNDTRBase, T...> ;

  struct MDMAMDMA_C5SARBase {} ;

  struct MDMA_C5SAR : public RegisterBase<0x52000198, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C5SAR_SAR_Values<MDMA::MDMA_C5SAR, 0, 32, ReadWriteMode, MDMAMDMA_C5SARBase> ;
    using FieldValues = MDMA_MDMA_C5SAR_SAR_Values<MDMA::MDMA_C5SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5SARPack  = Register<0x52000198, 32, ReadWriteMode, MDMAMDMA_C5SARBase, T...> ;

  struct MDMAMDMA_C5DARBase {} ;

  struct MDMA_C5DAR : public RegisterBase<0x5200019C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C5DAR_DAR_Values<MDMA::MDMA_C5DAR, 0, 32, ReadWriteMode, MDMAMDMA_C5DARBase> ;
    using FieldValues = MDMA_MDMA_C5DAR_DAR_Values<MDMA::MDMA_C5DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5DARPack  = Register<0x5200019C, 32, ReadWriteMode, MDMAMDMA_C5DARBase, T...> ;

  struct MDMAMDMA_C5BRURBase {} ;

  struct MDMA_C5BRUR : public RegisterBase<0x520001A0, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C5BRUR_SUV_Values<MDMA::MDMA_C5BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C5BRURBase> ;
    using DUV = MDMA_MDMA_C5BRUR_DUV_Values<MDMA::MDMA_C5BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C5BRURBase> ;
    using FieldValues = MDMA_MDMA_C5BRUR_DUV_Values<MDMA::MDMA_C5BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5BRURPack  = Register<0x520001A0, 32, ReadWriteMode, MDMAMDMA_C5BRURBase, T...> ;

  struct MDMAMDMA_C5LARBase {} ;

  struct MDMA_C5LAR : public RegisterBase<0x520001A4, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C5LAR_LAR_Values<MDMA::MDMA_C5LAR, 0, 32, ReadWriteMode, MDMAMDMA_C5LARBase> ;
    using FieldValues = MDMA_MDMA_C5LAR_LAR_Values<MDMA::MDMA_C5LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5LARPack  = Register<0x520001A4, 32, ReadWriteMode, MDMAMDMA_C5LARBase, T...> ;

  struct MDMAMDMA_C5TBRBase {} ;

  struct MDMA_C5TBR : public RegisterBase<0x520001A8, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C5TBR_TSEL_Values<MDMA::MDMA_C5TBR, 0, 6, ReadWriteMode, MDMAMDMA_C5TBRBase> ;
    using SBUS = MDMA_MDMA_C5TBR_SBUS_Values<MDMA::MDMA_C5TBR, 16, 1, ReadWriteMode, MDMAMDMA_C5TBRBase> ;
    using DBUS = MDMA_MDMA_C5TBR_DBUS_Values<MDMA::MDMA_C5TBR, 17, 1, ReadWriteMode, MDMAMDMA_C5TBRBase> ;
    using FieldValues = MDMA_MDMA_C5TBR_DBUS_Values<MDMA::MDMA_C5TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5TBRPack  = Register<0x520001A8, 32, ReadWriteMode, MDMAMDMA_C5TBRBase, T...> ;

  struct MDMAMDMA_C5MARBase {} ;

  struct MDMA_C5MAR : public RegisterBase<0x520001B0, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C5MAR_MAR_Values<MDMA::MDMA_C5MAR, 0, 32, ReadWriteMode, MDMAMDMA_C5MARBase> ;
    using FieldValues = MDMA_MDMA_C5MAR_MAR_Values<MDMA::MDMA_C5MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5MARPack  = Register<0x520001B0, 32, ReadWriteMode, MDMAMDMA_C5MARBase, T...> ;

  struct MDMAMDMA_C5MDRBase {} ;

  struct MDMA_C5MDR : public RegisterBase<0x520001B4, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C5MDR_MDR_Values<MDMA::MDMA_C5MDR, 0, 32, ReadWriteMode, MDMAMDMA_C5MDRBase> ;
    using FieldValues = MDMA_MDMA_C5MDR_MDR_Values<MDMA::MDMA_C5MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C5MDRPack  = Register<0x520001B4, 32, ReadWriteMode, MDMAMDMA_C5MDRBase, T...> ;

  struct MDMAMDMA_C6ISRBase {} ;

  struct MDMA_C6ISR : public RegisterBase<0x520001C0, 32, ReadMode>
  {
    using TEIF6 = MDMA_MDMA_C6ISR_TEIF6_Values<MDMA::MDMA_C6ISR, 0, 1, ReadMode, MDMAMDMA_C6ISRBase> ;
    using CTCIF6 = MDMA_MDMA_C6ISR_CTCIF6_Values<MDMA::MDMA_C6ISR, 1, 1, ReadMode, MDMAMDMA_C6ISRBase> ;
    using BRTIF6 = MDMA_MDMA_C6ISR_BRTIF6_Values<MDMA::MDMA_C6ISR, 2, 1, ReadMode, MDMAMDMA_C6ISRBase> ;
    using BTIF6 = MDMA_MDMA_C6ISR_BTIF6_Values<MDMA::MDMA_C6ISR, 3, 1, ReadMode, MDMAMDMA_C6ISRBase> ;
    using TCIF6 = MDMA_MDMA_C6ISR_TCIF6_Values<MDMA::MDMA_C6ISR, 4, 1, ReadMode, MDMAMDMA_C6ISRBase> ;
    using CRQA6 = MDMA_MDMA_C6ISR_CRQA6_Values<MDMA::MDMA_C6ISR, 16, 1, ReadMode, MDMAMDMA_C6ISRBase> ;
    using FieldValues = MDMA_MDMA_C6ISR_CRQA6_Values<MDMA::MDMA_C6ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6ISRPack  = Register<0x520001C0, 32, ReadMode, MDMAMDMA_C6ISRBase, T...> ;

  struct MDMAMDMA_C6IFCRBase {} ;

  struct MDMA_C6IFCR : public RegisterBase<0x520001C4, 32, WriteMode>
  {
    using CTEIF6 = MDMA_MDMA_C6IFCR_CTEIF6_Values<MDMA::MDMA_C6IFCR, 0, 1, WriteMode, MDMAMDMA_C6IFCRBase> ;
    using CCTCIF6 = MDMA_MDMA_C6IFCR_CCTCIF6_Values<MDMA::MDMA_C6IFCR, 1, 1, WriteMode, MDMAMDMA_C6IFCRBase> ;
    using CBRTIF6 = MDMA_MDMA_C6IFCR_CBRTIF6_Values<MDMA::MDMA_C6IFCR, 2, 1, WriteMode, MDMAMDMA_C6IFCRBase> ;
    using CBTIF6 = MDMA_MDMA_C6IFCR_CBTIF6_Values<MDMA::MDMA_C6IFCR, 3, 1, WriteMode, MDMAMDMA_C6IFCRBase> ;
    using CLTCIF6 = MDMA_MDMA_C6IFCR_CLTCIF6_Values<MDMA::MDMA_C6IFCR, 4, 1, WriteMode, MDMAMDMA_C6IFCRBase> ;
    using FieldValues = MDMA_MDMA_C6IFCR_CLTCIF6_Values<MDMA::MDMA_C6IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6IFCRPack  = Register<0x520001C4, 32, WriteMode, MDMAMDMA_C6IFCRBase, T...> ;

  struct MDMAMDMA_C6ESRBase {} ;

  struct MDMA_C6ESR : public RegisterBase<0x520001C8, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C6ESR_TEA_Values<MDMA::MDMA_C6ESR, 0, 7, ReadMode, MDMAMDMA_C6ESRBase> ;
    using TED = MDMA_MDMA_C6ESR_TED_Values<MDMA::MDMA_C6ESR, 7, 1, ReadMode, MDMAMDMA_C6ESRBase> ;
    using TELD = MDMA_MDMA_C6ESR_TELD_Values<MDMA::MDMA_C6ESR, 8, 1, ReadMode, MDMAMDMA_C6ESRBase> ;
    using TEMD = MDMA_MDMA_C6ESR_TEMD_Values<MDMA::MDMA_C6ESR, 9, 1, ReadMode, MDMAMDMA_C6ESRBase> ;
    using ASE = MDMA_MDMA_C6ESR_ASE_Values<MDMA::MDMA_C6ESR, 10, 1, ReadMode, MDMAMDMA_C6ESRBase> ;
    using BSE = MDMA_MDMA_C6ESR_BSE_Values<MDMA::MDMA_C6ESR, 11, 1, ReadMode, MDMAMDMA_C6ESRBase> ;
    using FieldValues = MDMA_MDMA_C6ESR_BSE_Values<MDMA::MDMA_C6ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6ESRPack  = Register<0x520001C8, 32, ReadMode, MDMAMDMA_C6ESRBase, T...> ;

  struct MDMAMDMA_C6CRBase {} ;

  struct MDMA_C6CR : public RegisterBase<0x520001CC, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C6CR_EN_Values<MDMA::MDMA_C6CR, 0, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using TEIE = MDMA_MDMA_C6CR_TEIE_Values<MDMA::MDMA_C6CR, 1, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using CTCIE = MDMA_MDMA_C6CR_CTCIE_Values<MDMA::MDMA_C6CR, 2, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using BRTIE = MDMA_MDMA_C6CR_BRTIE_Values<MDMA::MDMA_C6CR, 3, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using BTIE = MDMA_MDMA_C6CR_BTIE_Values<MDMA::MDMA_C6CR, 4, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using TCIE = MDMA_MDMA_C6CR_TCIE_Values<MDMA::MDMA_C6CR, 5, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using PL = MDMA_MDMA_C6CR_PL_Values<MDMA::MDMA_C6CR, 6, 2, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using BEX = MDMA_MDMA_C6CR_BEX_Values<MDMA::MDMA_C6CR, 12, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using HEX = MDMA_MDMA_C6CR_HEX_Values<MDMA::MDMA_C6CR, 13, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using WEX = MDMA_MDMA_C6CR_WEX_Values<MDMA::MDMA_C6CR, 14, 1, ReadWriteMode, MDMAMDMA_C6CRBase> ;
    using SWRQ = MDMA_MDMA_C6CR_SWRQ_Values<MDMA::MDMA_C6CR, 16, 1, WriteMode, MDMAMDMA_C6CRBase> ;
    using FieldValues = MDMA_MDMA_C6CR_SWRQ_Values<MDMA::MDMA_C6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6CRPack  = Register<0x520001CC, 32, ReadWriteMode, MDMAMDMA_C6CRBase, T...> ;

  struct MDMAMDMA_C6TCRBase {} ;

  struct MDMA_C6TCR : public RegisterBase<0x520001D0, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C6TCR_SINC_Values<MDMA::MDMA_C6TCR, 0, 2, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using DINC = MDMA_MDMA_C6TCR_DINC_Values<MDMA::MDMA_C6TCR, 2, 2, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using SSIZE = MDMA_MDMA_C6TCR_SSIZE_Values<MDMA::MDMA_C6TCR, 4, 2, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using DSIZE = MDMA_MDMA_C6TCR_DSIZE_Values<MDMA::MDMA_C6TCR, 6, 2, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using SINCOS = MDMA_MDMA_C6TCR_SINCOS_Values<MDMA::MDMA_C6TCR, 8, 2, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using DINCOS = MDMA_MDMA_C6TCR_DINCOS_Values<MDMA::MDMA_C6TCR, 10, 2, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using SBURST = MDMA_MDMA_C6TCR_SBURST_Values<MDMA::MDMA_C6TCR, 12, 3, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using DBURST = MDMA_MDMA_C6TCR_DBURST_Values<MDMA::MDMA_C6TCR, 15, 3, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using TLEN = MDMA_MDMA_C6TCR_TLEN_Values<MDMA::MDMA_C6TCR, 18, 7, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using PKE = MDMA_MDMA_C6TCR_PKE_Values<MDMA::MDMA_C6TCR, 25, 1, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using PAM = MDMA_MDMA_C6TCR_PAM_Values<MDMA::MDMA_C6TCR, 26, 2, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using TRGM = MDMA_MDMA_C6TCR_TRGM_Values<MDMA::MDMA_C6TCR, 28, 2, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using SWRM = MDMA_MDMA_C6TCR_SWRM_Values<MDMA::MDMA_C6TCR, 30, 1, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using BWM = MDMA_MDMA_C6TCR_BWM_Values<MDMA::MDMA_C6TCR, 31, 1, ReadWriteMode, MDMAMDMA_C6TCRBase> ;
    using FieldValues = MDMA_MDMA_C6TCR_BWM_Values<MDMA::MDMA_C6TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6TCRPack  = Register<0x520001D0, 32, ReadWriteMode, MDMAMDMA_C6TCRBase, T...> ;

  struct MDMAMDMA_C6BNDTRBase {} ;

  struct MDMA_C6BNDTR : public RegisterBase<0x520001D4, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C6BNDTR_BNDT_Values<MDMA::MDMA_C6BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C6BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C6BNDTR_BRSUM_Values<MDMA::MDMA_C6BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C6BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C6BNDTR_BRDUM_Values<MDMA::MDMA_C6BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C6BNDTRBase> ;
    using BRC = MDMA_MDMA_C6BNDTR_BRC_Values<MDMA::MDMA_C6BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C6BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C6BNDTR_BRC_Values<MDMA::MDMA_C6BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6BNDTRPack  = Register<0x520001D4, 32, ReadWriteMode, MDMAMDMA_C6BNDTRBase, T...> ;

  struct MDMAMDMA_C6SARBase {} ;

  struct MDMA_C6SAR : public RegisterBase<0x520001D8, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C6SAR_SAR_Values<MDMA::MDMA_C6SAR, 0, 32, ReadWriteMode, MDMAMDMA_C6SARBase> ;
    using FieldValues = MDMA_MDMA_C6SAR_SAR_Values<MDMA::MDMA_C6SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6SARPack  = Register<0x520001D8, 32, ReadWriteMode, MDMAMDMA_C6SARBase, T...> ;

  struct MDMAMDMA_C6DARBase {} ;

  struct MDMA_C6DAR : public RegisterBase<0x520001DC, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C6DAR_DAR_Values<MDMA::MDMA_C6DAR, 0, 32, ReadWriteMode, MDMAMDMA_C6DARBase> ;
    using FieldValues = MDMA_MDMA_C6DAR_DAR_Values<MDMA::MDMA_C6DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6DARPack  = Register<0x520001DC, 32, ReadWriteMode, MDMAMDMA_C6DARBase, T...> ;

  struct MDMAMDMA_C6BRURBase {} ;

  struct MDMA_C6BRUR : public RegisterBase<0x520001E0, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C6BRUR_SUV_Values<MDMA::MDMA_C6BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C6BRURBase> ;
    using DUV = MDMA_MDMA_C6BRUR_DUV_Values<MDMA::MDMA_C6BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C6BRURBase> ;
    using FieldValues = MDMA_MDMA_C6BRUR_DUV_Values<MDMA::MDMA_C6BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6BRURPack  = Register<0x520001E0, 32, ReadWriteMode, MDMAMDMA_C6BRURBase, T...> ;

  struct MDMAMDMA_C6LARBase {} ;

  struct MDMA_C6LAR : public RegisterBase<0x520001E4, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C6LAR_LAR_Values<MDMA::MDMA_C6LAR, 0, 32, ReadWriteMode, MDMAMDMA_C6LARBase> ;
    using FieldValues = MDMA_MDMA_C6LAR_LAR_Values<MDMA::MDMA_C6LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6LARPack  = Register<0x520001E4, 32, ReadWriteMode, MDMAMDMA_C6LARBase, T...> ;

  struct MDMAMDMA_C6TBRBase {} ;

  struct MDMA_C6TBR : public RegisterBase<0x520001E8, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C6TBR_TSEL_Values<MDMA::MDMA_C6TBR, 0, 6, ReadWriteMode, MDMAMDMA_C6TBRBase> ;
    using SBUS = MDMA_MDMA_C6TBR_SBUS_Values<MDMA::MDMA_C6TBR, 16, 1, ReadWriteMode, MDMAMDMA_C6TBRBase> ;
    using DBUS = MDMA_MDMA_C6TBR_DBUS_Values<MDMA::MDMA_C6TBR, 17, 1, ReadWriteMode, MDMAMDMA_C6TBRBase> ;
    using FieldValues = MDMA_MDMA_C6TBR_DBUS_Values<MDMA::MDMA_C6TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6TBRPack  = Register<0x520001E8, 32, ReadWriteMode, MDMAMDMA_C6TBRBase, T...> ;

  struct MDMAMDMA_C6MARBase {} ;

  struct MDMA_C6MAR : public RegisterBase<0x520001F0, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C6MAR_MAR_Values<MDMA::MDMA_C6MAR, 0, 32, ReadWriteMode, MDMAMDMA_C6MARBase> ;
    using FieldValues = MDMA_MDMA_C6MAR_MAR_Values<MDMA::MDMA_C6MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6MARPack  = Register<0x520001F0, 32, ReadWriteMode, MDMAMDMA_C6MARBase, T...> ;

  struct MDMAMDMA_C6MDRBase {} ;

  struct MDMA_C6MDR : public RegisterBase<0x520001F4, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C6MDR_MDR_Values<MDMA::MDMA_C6MDR, 0, 32, ReadWriteMode, MDMAMDMA_C6MDRBase> ;
    using FieldValues = MDMA_MDMA_C6MDR_MDR_Values<MDMA::MDMA_C6MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C6MDRPack  = Register<0x520001F4, 32, ReadWriteMode, MDMAMDMA_C6MDRBase, T...> ;

  struct MDMAMDMA_C7ISRBase {} ;

  struct MDMA_C7ISR : public RegisterBase<0x52000200, 32, ReadMode>
  {
    using TEIF7 = MDMA_MDMA_C7ISR_TEIF7_Values<MDMA::MDMA_C7ISR, 0, 1, ReadMode, MDMAMDMA_C7ISRBase> ;
    using CTCIF7 = MDMA_MDMA_C7ISR_CTCIF7_Values<MDMA::MDMA_C7ISR, 1, 1, ReadMode, MDMAMDMA_C7ISRBase> ;
    using BRTIF7 = MDMA_MDMA_C7ISR_BRTIF7_Values<MDMA::MDMA_C7ISR, 2, 1, ReadMode, MDMAMDMA_C7ISRBase> ;
    using BTIF7 = MDMA_MDMA_C7ISR_BTIF7_Values<MDMA::MDMA_C7ISR, 3, 1, ReadMode, MDMAMDMA_C7ISRBase> ;
    using TCIF7 = MDMA_MDMA_C7ISR_TCIF7_Values<MDMA::MDMA_C7ISR, 4, 1, ReadMode, MDMAMDMA_C7ISRBase> ;
    using CRQA7 = MDMA_MDMA_C7ISR_CRQA7_Values<MDMA::MDMA_C7ISR, 16, 1, ReadMode, MDMAMDMA_C7ISRBase> ;
    using FieldValues = MDMA_MDMA_C7ISR_CRQA7_Values<MDMA::MDMA_C7ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7ISRPack  = Register<0x52000200, 32, ReadMode, MDMAMDMA_C7ISRBase, T...> ;

  struct MDMAMDMA_C7IFCRBase {} ;

  struct MDMA_C7IFCR : public RegisterBase<0x52000204, 32, WriteMode>
  {
    using CTEIF7 = MDMA_MDMA_C7IFCR_CTEIF7_Values<MDMA::MDMA_C7IFCR, 0, 1, WriteMode, MDMAMDMA_C7IFCRBase> ;
    using CCTCIF7 = MDMA_MDMA_C7IFCR_CCTCIF7_Values<MDMA::MDMA_C7IFCR, 1, 1, WriteMode, MDMAMDMA_C7IFCRBase> ;
    using CBRTIF7 = MDMA_MDMA_C7IFCR_CBRTIF7_Values<MDMA::MDMA_C7IFCR, 2, 1, WriteMode, MDMAMDMA_C7IFCRBase> ;
    using CBTIF7 = MDMA_MDMA_C7IFCR_CBTIF7_Values<MDMA::MDMA_C7IFCR, 3, 1, WriteMode, MDMAMDMA_C7IFCRBase> ;
    using CLTCIF7 = MDMA_MDMA_C7IFCR_CLTCIF7_Values<MDMA::MDMA_C7IFCR, 4, 1, WriteMode, MDMAMDMA_C7IFCRBase> ;
    using FieldValues = MDMA_MDMA_C7IFCR_CLTCIF7_Values<MDMA::MDMA_C7IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7IFCRPack  = Register<0x52000204, 32, WriteMode, MDMAMDMA_C7IFCRBase, T...> ;

  struct MDMAMDMA_C7ESRBase {} ;

  struct MDMA_C7ESR : public RegisterBase<0x52000208, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C7ESR_TEA_Values<MDMA::MDMA_C7ESR, 0, 7, ReadMode, MDMAMDMA_C7ESRBase> ;
    using TED = MDMA_MDMA_C7ESR_TED_Values<MDMA::MDMA_C7ESR, 7, 1, ReadMode, MDMAMDMA_C7ESRBase> ;
    using TELD = MDMA_MDMA_C7ESR_TELD_Values<MDMA::MDMA_C7ESR, 8, 1, ReadMode, MDMAMDMA_C7ESRBase> ;
    using TEMD = MDMA_MDMA_C7ESR_TEMD_Values<MDMA::MDMA_C7ESR, 9, 1, ReadMode, MDMAMDMA_C7ESRBase> ;
    using ASE = MDMA_MDMA_C7ESR_ASE_Values<MDMA::MDMA_C7ESR, 10, 1, ReadMode, MDMAMDMA_C7ESRBase> ;
    using BSE = MDMA_MDMA_C7ESR_BSE_Values<MDMA::MDMA_C7ESR, 11, 1, ReadMode, MDMAMDMA_C7ESRBase> ;
    using FieldValues = MDMA_MDMA_C7ESR_BSE_Values<MDMA::MDMA_C7ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7ESRPack  = Register<0x52000208, 32, ReadMode, MDMAMDMA_C7ESRBase, T...> ;

  struct MDMAMDMA_C7CRBase {} ;

  struct MDMA_C7CR : public RegisterBase<0x5200020C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C7CR_EN_Values<MDMA::MDMA_C7CR, 0, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using TEIE = MDMA_MDMA_C7CR_TEIE_Values<MDMA::MDMA_C7CR, 1, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using CTCIE = MDMA_MDMA_C7CR_CTCIE_Values<MDMA::MDMA_C7CR, 2, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using BRTIE = MDMA_MDMA_C7CR_BRTIE_Values<MDMA::MDMA_C7CR, 3, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using BTIE = MDMA_MDMA_C7CR_BTIE_Values<MDMA::MDMA_C7CR, 4, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using TCIE = MDMA_MDMA_C7CR_TCIE_Values<MDMA::MDMA_C7CR, 5, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using PL = MDMA_MDMA_C7CR_PL_Values<MDMA::MDMA_C7CR, 6, 2, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using BEX = MDMA_MDMA_C7CR_BEX_Values<MDMA::MDMA_C7CR, 12, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using HEX = MDMA_MDMA_C7CR_HEX_Values<MDMA::MDMA_C7CR, 13, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using WEX = MDMA_MDMA_C7CR_WEX_Values<MDMA::MDMA_C7CR, 14, 1, ReadWriteMode, MDMAMDMA_C7CRBase> ;
    using SWRQ = MDMA_MDMA_C7CR_SWRQ_Values<MDMA::MDMA_C7CR, 16, 1, WriteMode, MDMAMDMA_C7CRBase> ;
    using FieldValues = MDMA_MDMA_C7CR_SWRQ_Values<MDMA::MDMA_C7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7CRPack  = Register<0x5200020C, 32, ReadWriteMode, MDMAMDMA_C7CRBase, T...> ;

  struct MDMAMDMA_C7TCRBase {} ;

  struct MDMA_C7TCR : public RegisterBase<0x52000210, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C7TCR_SINC_Values<MDMA::MDMA_C7TCR, 0, 2, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using DINC = MDMA_MDMA_C7TCR_DINC_Values<MDMA::MDMA_C7TCR, 2, 2, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using SSIZE = MDMA_MDMA_C7TCR_SSIZE_Values<MDMA::MDMA_C7TCR, 4, 2, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using DSIZE = MDMA_MDMA_C7TCR_DSIZE_Values<MDMA::MDMA_C7TCR, 6, 2, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using SINCOS = MDMA_MDMA_C7TCR_SINCOS_Values<MDMA::MDMA_C7TCR, 8, 2, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using DINCOS = MDMA_MDMA_C7TCR_DINCOS_Values<MDMA::MDMA_C7TCR, 10, 2, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using SBURST = MDMA_MDMA_C7TCR_SBURST_Values<MDMA::MDMA_C7TCR, 12, 3, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using DBURST = MDMA_MDMA_C7TCR_DBURST_Values<MDMA::MDMA_C7TCR, 15, 3, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using TLEN = MDMA_MDMA_C7TCR_TLEN_Values<MDMA::MDMA_C7TCR, 18, 7, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using PKE = MDMA_MDMA_C7TCR_PKE_Values<MDMA::MDMA_C7TCR, 25, 1, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using PAM = MDMA_MDMA_C7TCR_PAM_Values<MDMA::MDMA_C7TCR, 26, 2, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using TRGM = MDMA_MDMA_C7TCR_TRGM_Values<MDMA::MDMA_C7TCR, 28, 2, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using SWRM = MDMA_MDMA_C7TCR_SWRM_Values<MDMA::MDMA_C7TCR, 30, 1, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using BWM = MDMA_MDMA_C7TCR_BWM_Values<MDMA::MDMA_C7TCR, 31, 1, ReadWriteMode, MDMAMDMA_C7TCRBase> ;
    using FieldValues = MDMA_MDMA_C7TCR_BWM_Values<MDMA::MDMA_C7TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7TCRPack  = Register<0x52000210, 32, ReadWriteMode, MDMAMDMA_C7TCRBase, T...> ;

  struct MDMAMDMA_C7BNDTRBase {} ;

  struct MDMA_C7BNDTR : public RegisterBase<0x52000214, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C7BNDTR_BNDT_Values<MDMA::MDMA_C7BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C7BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C7BNDTR_BRSUM_Values<MDMA::MDMA_C7BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C7BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C7BNDTR_BRDUM_Values<MDMA::MDMA_C7BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C7BNDTRBase> ;
    using BRC = MDMA_MDMA_C7BNDTR_BRC_Values<MDMA::MDMA_C7BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C7BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C7BNDTR_BRC_Values<MDMA::MDMA_C7BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7BNDTRPack  = Register<0x52000214, 32, ReadWriteMode, MDMAMDMA_C7BNDTRBase, T...> ;

  struct MDMAMDMA_C7SARBase {} ;

  struct MDMA_C7SAR : public RegisterBase<0x52000218, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C7SAR_SAR_Values<MDMA::MDMA_C7SAR, 0, 32, ReadWriteMode, MDMAMDMA_C7SARBase> ;
    using FieldValues = MDMA_MDMA_C7SAR_SAR_Values<MDMA::MDMA_C7SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7SARPack  = Register<0x52000218, 32, ReadWriteMode, MDMAMDMA_C7SARBase, T...> ;

  struct MDMAMDMA_C7DARBase {} ;

  struct MDMA_C7DAR : public RegisterBase<0x5200021C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C7DAR_DAR_Values<MDMA::MDMA_C7DAR, 0, 32, ReadWriteMode, MDMAMDMA_C7DARBase> ;
    using FieldValues = MDMA_MDMA_C7DAR_DAR_Values<MDMA::MDMA_C7DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7DARPack  = Register<0x5200021C, 32, ReadWriteMode, MDMAMDMA_C7DARBase, T...> ;

  struct MDMAMDMA_C7BRURBase {} ;

  struct MDMA_C7BRUR : public RegisterBase<0x52000220, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C7BRUR_SUV_Values<MDMA::MDMA_C7BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C7BRURBase> ;
    using DUV = MDMA_MDMA_C7BRUR_DUV_Values<MDMA::MDMA_C7BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C7BRURBase> ;
    using FieldValues = MDMA_MDMA_C7BRUR_DUV_Values<MDMA::MDMA_C7BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7BRURPack  = Register<0x52000220, 32, ReadWriteMode, MDMAMDMA_C7BRURBase, T...> ;

  struct MDMAMDMA_C7LARBase {} ;

  struct MDMA_C7LAR : public RegisterBase<0x52000224, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C7LAR_LAR_Values<MDMA::MDMA_C7LAR, 0, 32, ReadWriteMode, MDMAMDMA_C7LARBase> ;
    using FieldValues = MDMA_MDMA_C7LAR_LAR_Values<MDMA::MDMA_C7LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7LARPack  = Register<0x52000224, 32, ReadWriteMode, MDMAMDMA_C7LARBase, T...> ;

  struct MDMAMDMA_C7TBRBase {} ;

  struct MDMA_C7TBR : public RegisterBase<0x52000228, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C7TBR_TSEL_Values<MDMA::MDMA_C7TBR, 0, 6, ReadWriteMode, MDMAMDMA_C7TBRBase> ;
    using SBUS = MDMA_MDMA_C7TBR_SBUS_Values<MDMA::MDMA_C7TBR, 16, 1, ReadWriteMode, MDMAMDMA_C7TBRBase> ;
    using DBUS = MDMA_MDMA_C7TBR_DBUS_Values<MDMA::MDMA_C7TBR, 17, 1, ReadWriteMode, MDMAMDMA_C7TBRBase> ;
    using FieldValues = MDMA_MDMA_C7TBR_DBUS_Values<MDMA::MDMA_C7TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7TBRPack  = Register<0x52000228, 32, ReadWriteMode, MDMAMDMA_C7TBRBase, T...> ;

  struct MDMAMDMA_C7MARBase {} ;

  struct MDMA_C7MAR : public RegisterBase<0x52000230, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C7MAR_MAR_Values<MDMA::MDMA_C7MAR, 0, 32, ReadWriteMode, MDMAMDMA_C7MARBase> ;
    using FieldValues = MDMA_MDMA_C7MAR_MAR_Values<MDMA::MDMA_C7MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7MARPack  = Register<0x52000230, 32, ReadWriteMode, MDMAMDMA_C7MARBase, T...> ;

  struct MDMAMDMA_C7MDRBase {} ;

  struct MDMA_C7MDR : public RegisterBase<0x52000234, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C7MDR_MDR_Values<MDMA::MDMA_C7MDR, 0, 32, ReadWriteMode, MDMAMDMA_C7MDRBase> ;
    using FieldValues = MDMA_MDMA_C7MDR_MDR_Values<MDMA::MDMA_C7MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C7MDRPack  = Register<0x52000234, 32, ReadWriteMode, MDMAMDMA_C7MDRBase, T...> ;

  struct MDMAMDMA_C8ISRBase {} ;

  struct MDMA_C8ISR : public RegisterBase<0x52000240, 32, ReadMode>
  {
    using TEIF8 = MDMA_MDMA_C8ISR_TEIF8_Values<MDMA::MDMA_C8ISR, 0, 1, ReadMode, MDMAMDMA_C8ISRBase> ;
    using CTCIF8 = MDMA_MDMA_C8ISR_CTCIF8_Values<MDMA::MDMA_C8ISR, 1, 1, ReadMode, MDMAMDMA_C8ISRBase> ;
    using BRTIF8 = MDMA_MDMA_C8ISR_BRTIF8_Values<MDMA::MDMA_C8ISR, 2, 1, ReadMode, MDMAMDMA_C8ISRBase> ;
    using BTIF8 = MDMA_MDMA_C8ISR_BTIF8_Values<MDMA::MDMA_C8ISR, 3, 1, ReadMode, MDMAMDMA_C8ISRBase> ;
    using TCIF8 = MDMA_MDMA_C8ISR_TCIF8_Values<MDMA::MDMA_C8ISR, 4, 1, ReadMode, MDMAMDMA_C8ISRBase> ;
    using CRQA8 = MDMA_MDMA_C8ISR_CRQA8_Values<MDMA::MDMA_C8ISR, 16, 1, ReadMode, MDMAMDMA_C8ISRBase> ;
    using FieldValues = MDMA_MDMA_C8ISR_CRQA8_Values<MDMA::MDMA_C8ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8ISRPack  = Register<0x52000240, 32, ReadMode, MDMAMDMA_C8ISRBase, T...> ;

  struct MDMAMDMA_C8IFCRBase {} ;

  struct MDMA_C8IFCR : public RegisterBase<0x52000244, 32, WriteMode>
  {
    using CTEIF8 = MDMA_MDMA_C8IFCR_CTEIF8_Values<MDMA::MDMA_C8IFCR, 0, 1, WriteMode, MDMAMDMA_C8IFCRBase> ;
    using CCTCIF8 = MDMA_MDMA_C8IFCR_CCTCIF8_Values<MDMA::MDMA_C8IFCR, 1, 1, WriteMode, MDMAMDMA_C8IFCRBase> ;
    using CBRTIF8 = MDMA_MDMA_C8IFCR_CBRTIF8_Values<MDMA::MDMA_C8IFCR, 2, 1, WriteMode, MDMAMDMA_C8IFCRBase> ;
    using CBTIF8 = MDMA_MDMA_C8IFCR_CBTIF8_Values<MDMA::MDMA_C8IFCR, 3, 1, WriteMode, MDMAMDMA_C8IFCRBase> ;
    using CLTCIF8 = MDMA_MDMA_C8IFCR_CLTCIF8_Values<MDMA::MDMA_C8IFCR, 4, 1, WriteMode, MDMAMDMA_C8IFCRBase> ;
    using FieldValues = MDMA_MDMA_C8IFCR_CLTCIF8_Values<MDMA::MDMA_C8IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8IFCRPack  = Register<0x52000244, 32, WriteMode, MDMAMDMA_C8IFCRBase, T...> ;

  struct MDMAMDMA_C8ESRBase {} ;

  struct MDMA_C8ESR : public RegisterBase<0x52000248, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C8ESR_TEA_Values<MDMA::MDMA_C8ESR, 0, 7, ReadMode, MDMAMDMA_C8ESRBase> ;
    using TED = MDMA_MDMA_C8ESR_TED_Values<MDMA::MDMA_C8ESR, 7, 1, ReadMode, MDMAMDMA_C8ESRBase> ;
    using TELD = MDMA_MDMA_C8ESR_TELD_Values<MDMA::MDMA_C8ESR, 8, 1, ReadMode, MDMAMDMA_C8ESRBase> ;
    using TEMD = MDMA_MDMA_C8ESR_TEMD_Values<MDMA::MDMA_C8ESR, 9, 1, ReadMode, MDMAMDMA_C8ESRBase> ;
    using ASE = MDMA_MDMA_C8ESR_ASE_Values<MDMA::MDMA_C8ESR, 10, 1, ReadMode, MDMAMDMA_C8ESRBase> ;
    using BSE = MDMA_MDMA_C8ESR_BSE_Values<MDMA::MDMA_C8ESR, 11, 1, ReadMode, MDMAMDMA_C8ESRBase> ;
    using FieldValues = MDMA_MDMA_C8ESR_BSE_Values<MDMA::MDMA_C8ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8ESRPack  = Register<0x52000248, 32, ReadMode, MDMAMDMA_C8ESRBase, T...> ;

  struct MDMAMDMA_C8CRBase {} ;

  struct MDMA_C8CR : public RegisterBase<0x5200024C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C8CR_EN_Values<MDMA::MDMA_C8CR, 0, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using TEIE = MDMA_MDMA_C8CR_TEIE_Values<MDMA::MDMA_C8CR, 1, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using CTCIE = MDMA_MDMA_C8CR_CTCIE_Values<MDMA::MDMA_C8CR, 2, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using BRTIE = MDMA_MDMA_C8CR_BRTIE_Values<MDMA::MDMA_C8CR, 3, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using BTIE = MDMA_MDMA_C8CR_BTIE_Values<MDMA::MDMA_C8CR, 4, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using TCIE = MDMA_MDMA_C8CR_TCIE_Values<MDMA::MDMA_C8CR, 5, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using PL = MDMA_MDMA_C8CR_PL_Values<MDMA::MDMA_C8CR, 6, 2, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using BEX = MDMA_MDMA_C8CR_BEX_Values<MDMA::MDMA_C8CR, 12, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using HEX = MDMA_MDMA_C8CR_HEX_Values<MDMA::MDMA_C8CR, 13, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using WEX = MDMA_MDMA_C8CR_WEX_Values<MDMA::MDMA_C8CR, 14, 1, ReadWriteMode, MDMAMDMA_C8CRBase> ;
    using SWRQ = MDMA_MDMA_C8CR_SWRQ_Values<MDMA::MDMA_C8CR, 16, 1, WriteMode, MDMAMDMA_C8CRBase> ;
    using FieldValues = MDMA_MDMA_C8CR_SWRQ_Values<MDMA::MDMA_C8CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8CRPack  = Register<0x5200024C, 32, ReadWriteMode, MDMAMDMA_C8CRBase, T...> ;

  struct MDMAMDMA_C8TCRBase {} ;

  struct MDMA_C8TCR : public RegisterBase<0x52000250, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C8TCR_SINC_Values<MDMA::MDMA_C8TCR, 0, 2, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using DINC = MDMA_MDMA_C8TCR_DINC_Values<MDMA::MDMA_C8TCR, 2, 2, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using SSIZE = MDMA_MDMA_C8TCR_SSIZE_Values<MDMA::MDMA_C8TCR, 4, 2, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using DSIZE = MDMA_MDMA_C8TCR_DSIZE_Values<MDMA::MDMA_C8TCR, 6, 2, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using SINCOS = MDMA_MDMA_C8TCR_SINCOS_Values<MDMA::MDMA_C8TCR, 8, 2, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using DINCOS = MDMA_MDMA_C8TCR_DINCOS_Values<MDMA::MDMA_C8TCR, 10, 2, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using SBURST = MDMA_MDMA_C8TCR_SBURST_Values<MDMA::MDMA_C8TCR, 12, 3, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using DBURST = MDMA_MDMA_C8TCR_DBURST_Values<MDMA::MDMA_C8TCR, 15, 3, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using TLEN = MDMA_MDMA_C8TCR_TLEN_Values<MDMA::MDMA_C8TCR, 18, 7, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using PKE = MDMA_MDMA_C8TCR_PKE_Values<MDMA::MDMA_C8TCR, 25, 1, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using PAM = MDMA_MDMA_C8TCR_PAM_Values<MDMA::MDMA_C8TCR, 26, 2, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using TRGM = MDMA_MDMA_C8TCR_TRGM_Values<MDMA::MDMA_C8TCR, 28, 2, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using SWRM = MDMA_MDMA_C8TCR_SWRM_Values<MDMA::MDMA_C8TCR, 30, 1, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using BWM = MDMA_MDMA_C8TCR_BWM_Values<MDMA::MDMA_C8TCR, 31, 1, ReadWriteMode, MDMAMDMA_C8TCRBase> ;
    using FieldValues = MDMA_MDMA_C8TCR_BWM_Values<MDMA::MDMA_C8TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8TCRPack  = Register<0x52000250, 32, ReadWriteMode, MDMAMDMA_C8TCRBase, T...> ;

  struct MDMAMDMA_C8BNDTRBase {} ;

  struct MDMA_C8BNDTR : public RegisterBase<0x52000254, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C8BNDTR_BNDT_Values<MDMA::MDMA_C8BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C8BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C8BNDTR_BRSUM_Values<MDMA::MDMA_C8BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C8BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C8BNDTR_BRDUM_Values<MDMA::MDMA_C8BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C8BNDTRBase> ;
    using BRC = MDMA_MDMA_C8BNDTR_BRC_Values<MDMA::MDMA_C8BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C8BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C8BNDTR_BRC_Values<MDMA::MDMA_C8BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8BNDTRPack  = Register<0x52000254, 32, ReadWriteMode, MDMAMDMA_C8BNDTRBase, T...> ;

  struct MDMAMDMA_C8SARBase {} ;

  struct MDMA_C8SAR : public RegisterBase<0x52000258, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C8SAR_SAR_Values<MDMA::MDMA_C8SAR, 0, 32, ReadWriteMode, MDMAMDMA_C8SARBase> ;
    using FieldValues = MDMA_MDMA_C8SAR_SAR_Values<MDMA::MDMA_C8SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8SARPack  = Register<0x52000258, 32, ReadWriteMode, MDMAMDMA_C8SARBase, T...> ;

  struct MDMAMDMA_C8DARBase {} ;

  struct MDMA_C8DAR : public RegisterBase<0x5200025C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C8DAR_DAR_Values<MDMA::MDMA_C8DAR, 0, 32, ReadWriteMode, MDMAMDMA_C8DARBase> ;
    using FieldValues = MDMA_MDMA_C8DAR_DAR_Values<MDMA::MDMA_C8DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8DARPack  = Register<0x5200025C, 32, ReadWriteMode, MDMAMDMA_C8DARBase, T...> ;

  struct MDMAMDMA_C8BRURBase {} ;

  struct MDMA_C8BRUR : public RegisterBase<0x52000260, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C8BRUR_SUV_Values<MDMA::MDMA_C8BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C8BRURBase> ;
    using DUV = MDMA_MDMA_C8BRUR_DUV_Values<MDMA::MDMA_C8BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C8BRURBase> ;
    using FieldValues = MDMA_MDMA_C8BRUR_DUV_Values<MDMA::MDMA_C8BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8BRURPack  = Register<0x52000260, 32, ReadWriteMode, MDMAMDMA_C8BRURBase, T...> ;

  struct MDMAMDMA_C8LARBase {} ;

  struct MDMA_C8LAR : public RegisterBase<0x52000264, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C8LAR_LAR_Values<MDMA::MDMA_C8LAR, 0, 32, ReadWriteMode, MDMAMDMA_C8LARBase> ;
    using FieldValues = MDMA_MDMA_C8LAR_LAR_Values<MDMA::MDMA_C8LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8LARPack  = Register<0x52000264, 32, ReadWriteMode, MDMAMDMA_C8LARBase, T...> ;

  struct MDMAMDMA_C8TBRBase {} ;

  struct MDMA_C8TBR : public RegisterBase<0x52000268, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C8TBR_TSEL_Values<MDMA::MDMA_C8TBR, 0, 6, ReadWriteMode, MDMAMDMA_C8TBRBase> ;
    using SBUS = MDMA_MDMA_C8TBR_SBUS_Values<MDMA::MDMA_C8TBR, 16, 1, ReadWriteMode, MDMAMDMA_C8TBRBase> ;
    using DBUS = MDMA_MDMA_C8TBR_DBUS_Values<MDMA::MDMA_C8TBR, 17, 1, ReadWriteMode, MDMAMDMA_C8TBRBase> ;
    using FieldValues = MDMA_MDMA_C8TBR_DBUS_Values<MDMA::MDMA_C8TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8TBRPack  = Register<0x52000268, 32, ReadWriteMode, MDMAMDMA_C8TBRBase, T...> ;

  struct MDMAMDMA_C8MARBase {} ;

  struct MDMA_C8MAR : public RegisterBase<0x52000270, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C8MAR_MAR_Values<MDMA::MDMA_C8MAR, 0, 32, ReadWriteMode, MDMAMDMA_C8MARBase> ;
    using FieldValues = MDMA_MDMA_C8MAR_MAR_Values<MDMA::MDMA_C8MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8MARPack  = Register<0x52000270, 32, ReadWriteMode, MDMAMDMA_C8MARBase, T...> ;

  struct MDMAMDMA_C8MDRBase {} ;

  struct MDMA_C8MDR : public RegisterBase<0x52000274, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C8MDR_MDR_Values<MDMA::MDMA_C8MDR, 0, 32, ReadWriteMode, MDMAMDMA_C8MDRBase> ;
    using FieldValues = MDMA_MDMA_C8MDR_MDR_Values<MDMA::MDMA_C8MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C8MDRPack  = Register<0x52000274, 32, ReadWriteMode, MDMAMDMA_C8MDRBase, T...> ;

  struct MDMAMDMA_C9ISRBase {} ;

  struct MDMA_C9ISR : public RegisterBase<0x52000280, 32, ReadMode>
  {
    using TEIF9 = MDMA_MDMA_C9ISR_TEIF9_Values<MDMA::MDMA_C9ISR, 0, 1, ReadMode, MDMAMDMA_C9ISRBase> ;
    using CTCIF9 = MDMA_MDMA_C9ISR_CTCIF9_Values<MDMA::MDMA_C9ISR, 1, 1, ReadMode, MDMAMDMA_C9ISRBase> ;
    using BRTIF9 = MDMA_MDMA_C9ISR_BRTIF9_Values<MDMA::MDMA_C9ISR, 2, 1, ReadMode, MDMAMDMA_C9ISRBase> ;
    using BTIF9 = MDMA_MDMA_C9ISR_BTIF9_Values<MDMA::MDMA_C9ISR, 3, 1, ReadMode, MDMAMDMA_C9ISRBase> ;
    using TCIF9 = MDMA_MDMA_C9ISR_TCIF9_Values<MDMA::MDMA_C9ISR, 4, 1, ReadMode, MDMAMDMA_C9ISRBase> ;
    using CRQA9 = MDMA_MDMA_C9ISR_CRQA9_Values<MDMA::MDMA_C9ISR, 16, 1, ReadMode, MDMAMDMA_C9ISRBase> ;
    using FieldValues = MDMA_MDMA_C9ISR_CRQA9_Values<MDMA::MDMA_C9ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9ISRPack  = Register<0x52000280, 32, ReadMode, MDMAMDMA_C9ISRBase, T...> ;

  struct MDMAMDMA_C9IFCRBase {} ;

  struct MDMA_C9IFCR : public RegisterBase<0x52000284, 32, WriteMode>
  {
    using CTEIF9 = MDMA_MDMA_C9IFCR_CTEIF9_Values<MDMA::MDMA_C9IFCR, 0, 1, WriteMode, MDMAMDMA_C9IFCRBase> ;
    using CCTCIF9 = MDMA_MDMA_C9IFCR_CCTCIF9_Values<MDMA::MDMA_C9IFCR, 1, 1, WriteMode, MDMAMDMA_C9IFCRBase> ;
    using CBRTIF9 = MDMA_MDMA_C9IFCR_CBRTIF9_Values<MDMA::MDMA_C9IFCR, 2, 1, WriteMode, MDMAMDMA_C9IFCRBase> ;
    using CBTIF9 = MDMA_MDMA_C9IFCR_CBTIF9_Values<MDMA::MDMA_C9IFCR, 3, 1, WriteMode, MDMAMDMA_C9IFCRBase> ;
    using CLTCIF9 = MDMA_MDMA_C9IFCR_CLTCIF9_Values<MDMA::MDMA_C9IFCR, 4, 1, WriteMode, MDMAMDMA_C9IFCRBase> ;
    using FieldValues = MDMA_MDMA_C9IFCR_CLTCIF9_Values<MDMA::MDMA_C9IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9IFCRPack  = Register<0x52000284, 32, WriteMode, MDMAMDMA_C9IFCRBase, T...> ;

  struct MDMAMDMA_C9ESRBase {} ;

  struct MDMA_C9ESR : public RegisterBase<0x52000288, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C9ESR_TEA_Values<MDMA::MDMA_C9ESR, 0, 7, ReadMode, MDMAMDMA_C9ESRBase> ;
    using TED = MDMA_MDMA_C9ESR_TED_Values<MDMA::MDMA_C9ESR, 7, 1, ReadMode, MDMAMDMA_C9ESRBase> ;
    using TELD = MDMA_MDMA_C9ESR_TELD_Values<MDMA::MDMA_C9ESR, 8, 1, ReadMode, MDMAMDMA_C9ESRBase> ;
    using TEMD = MDMA_MDMA_C9ESR_TEMD_Values<MDMA::MDMA_C9ESR, 9, 1, ReadMode, MDMAMDMA_C9ESRBase> ;
    using ASE = MDMA_MDMA_C9ESR_ASE_Values<MDMA::MDMA_C9ESR, 10, 1, ReadMode, MDMAMDMA_C9ESRBase> ;
    using BSE = MDMA_MDMA_C9ESR_BSE_Values<MDMA::MDMA_C9ESR, 11, 1, ReadMode, MDMAMDMA_C9ESRBase> ;
    using FieldValues = MDMA_MDMA_C9ESR_BSE_Values<MDMA::MDMA_C9ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9ESRPack  = Register<0x52000288, 32, ReadMode, MDMAMDMA_C9ESRBase, T...> ;

  struct MDMAMDMA_C9CRBase {} ;

  struct MDMA_C9CR : public RegisterBase<0x5200028C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C9CR_EN_Values<MDMA::MDMA_C9CR, 0, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using TEIE = MDMA_MDMA_C9CR_TEIE_Values<MDMA::MDMA_C9CR, 1, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using CTCIE = MDMA_MDMA_C9CR_CTCIE_Values<MDMA::MDMA_C9CR, 2, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using BRTIE = MDMA_MDMA_C9CR_BRTIE_Values<MDMA::MDMA_C9CR, 3, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using BTIE = MDMA_MDMA_C9CR_BTIE_Values<MDMA::MDMA_C9CR, 4, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using TCIE = MDMA_MDMA_C9CR_TCIE_Values<MDMA::MDMA_C9CR, 5, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using PL = MDMA_MDMA_C9CR_PL_Values<MDMA::MDMA_C9CR, 6, 2, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using BEX = MDMA_MDMA_C9CR_BEX_Values<MDMA::MDMA_C9CR, 12, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using HEX = MDMA_MDMA_C9CR_HEX_Values<MDMA::MDMA_C9CR, 13, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using WEX = MDMA_MDMA_C9CR_WEX_Values<MDMA::MDMA_C9CR, 14, 1, ReadWriteMode, MDMAMDMA_C9CRBase> ;
    using SWRQ = MDMA_MDMA_C9CR_SWRQ_Values<MDMA::MDMA_C9CR, 16, 1, WriteMode, MDMAMDMA_C9CRBase> ;
    using FieldValues = MDMA_MDMA_C9CR_SWRQ_Values<MDMA::MDMA_C9CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9CRPack  = Register<0x5200028C, 32, ReadWriteMode, MDMAMDMA_C9CRBase, T...> ;

  struct MDMAMDMA_C9TCRBase {} ;

  struct MDMA_C9TCR : public RegisterBase<0x52000290, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C9TCR_SINC_Values<MDMA::MDMA_C9TCR, 0, 2, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using DINC = MDMA_MDMA_C9TCR_DINC_Values<MDMA::MDMA_C9TCR, 2, 2, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using SSIZE = MDMA_MDMA_C9TCR_SSIZE_Values<MDMA::MDMA_C9TCR, 4, 2, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using DSIZE = MDMA_MDMA_C9TCR_DSIZE_Values<MDMA::MDMA_C9TCR, 6, 2, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using SINCOS = MDMA_MDMA_C9TCR_SINCOS_Values<MDMA::MDMA_C9TCR, 8, 2, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using DINCOS = MDMA_MDMA_C9TCR_DINCOS_Values<MDMA::MDMA_C9TCR, 10, 2, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using SBURST = MDMA_MDMA_C9TCR_SBURST_Values<MDMA::MDMA_C9TCR, 12, 3, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using DBURST = MDMA_MDMA_C9TCR_DBURST_Values<MDMA::MDMA_C9TCR, 15, 3, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using TLEN = MDMA_MDMA_C9TCR_TLEN_Values<MDMA::MDMA_C9TCR, 18, 7, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using PKE = MDMA_MDMA_C9TCR_PKE_Values<MDMA::MDMA_C9TCR, 25, 1, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using PAM = MDMA_MDMA_C9TCR_PAM_Values<MDMA::MDMA_C9TCR, 26, 2, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using TRGM = MDMA_MDMA_C9TCR_TRGM_Values<MDMA::MDMA_C9TCR, 28, 2, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using SWRM = MDMA_MDMA_C9TCR_SWRM_Values<MDMA::MDMA_C9TCR, 30, 1, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using BWM = MDMA_MDMA_C9TCR_BWM_Values<MDMA::MDMA_C9TCR, 31, 1, ReadWriteMode, MDMAMDMA_C9TCRBase> ;
    using FieldValues = MDMA_MDMA_C9TCR_BWM_Values<MDMA::MDMA_C9TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9TCRPack  = Register<0x52000290, 32, ReadWriteMode, MDMAMDMA_C9TCRBase, T...> ;

  struct MDMAMDMA_C9BNDTRBase {} ;

  struct MDMA_C9BNDTR : public RegisterBase<0x52000294, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C9BNDTR_BNDT_Values<MDMA::MDMA_C9BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C9BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C9BNDTR_BRSUM_Values<MDMA::MDMA_C9BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C9BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C9BNDTR_BRDUM_Values<MDMA::MDMA_C9BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C9BNDTRBase> ;
    using BRC = MDMA_MDMA_C9BNDTR_BRC_Values<MDMA::MDMA_C9BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C9BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C9BNDTR_BRC_Values<MDMA::MDMA_C9BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9BNDTRPack  = Register<0x52000294, 32, ReadWriteMode, MDMAMDMA_C9BNDTRBase, T...> ;

  struct MDMAMDMA_C9SARBase {} ;

  struct MDMA_C9SAR : public RegisterBase<0x52000298, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C9SAR_SAR_Values<MDMA::MDMA_C9SAR, 0, 32, ReadWriteMode, MDMAMDMA_C9SARBase> ;
    using FieldValues = MDMA_MDMA_C9SAR_SAR_Values<MDMA::MDMA_C9SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9SARPack  = Register<0x52000298, 32, ReadWriteMode, MDMAMDMA_C9SARBase, T...> ;

  struct MDMAMDMA_C9DARBase {} ;

  struct MDMA_C9DAR : public RegisterBase<0x5200029C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C9DAR_DAR_Values<MDMA::MDMA_C9DAR, 0, 32, ReadWriteMode, MDMAMDMA_C9DARBase> ;
    using FieldValues = MDMA_MDMA_C9DAR_DAR_Values<MDMA::MDMA_C9DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9DARPack  = Register<0x5200029C, 32, ReadWriteMode, MDMAMDMA_C9DARBase, T...> ;

  struct MDMAMDMA_C9BRURBase {} ;

  struct MDMA_C9BRUR : public RegisterBase<0x520002A0, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C9BRUR_SUV_Values<MDMA::MDMA_C9BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C9BRURBase> ;
    using DUV = MDMA_MDMA_C9BRUR_DUV_Values<MDMA::MDMA_C9BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C9BRURBase> ;
    using FieldValues = MDMA_MDMA_C9BRUR_DUV_Values<MDMA::MDMA_C9BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9BRURPack  = Register<0x520002A0, 32, ReadWriteMode, MDMAMDMA_C9BRURBase, T...> ;

  struct MDMAMDMA_C9LARBase {} ;

  struct MDMA_C9LAR : public RegisterBase<0x520002A4, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C9LAR_LAR_Values<MDMA::MDMA_C9LAR, 0, 32, ReadWriteMode, MDMAMDMA_C9LARBase> ;
    using FieldValues = MDMA_MDMA_C9LAR_LAR_Values<MDMA::MDMA_C9LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9LARPack  = Register<0x520002A4, 32, ReadWriteMode, MDMAMDMA_C9LARBase, T...> ;

  struct MDMAMDMA_C9TBRBase {} ;

  struct MDMA_C9TBR : public RegisterBase<0x520002A8, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C9TBR_TSEL_Values<MDMA::MDMA_C9TBR, 0, 6, ReadWriteMode, MDMAMDMA_C9TBRBase> ;
    using SBUS = MDMA_MDMA_C9TBR_SBUS_Values<MDMA::MDMA_C9TBR, 16, 1, ReadWriteMode, MDMAMDMA_C9TBRBase> ;
    using DBUS = MDMA_MDMA_C9TBR_DBUS_Values<MDMA::MDMA_C9TBR, 17, 1, ReadWriteMode, MDMAMDMA_C9TBRBase> ;
    using FieldValues = MDMA_MDMA_C9TBR_DBUS_Values<MDMA::MDMA_C9TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9TBRPack  = Register<0x520002A8, 32, ReadWriteMode, MDMAMDMA_C9TBRBase, T...> ;

  struct MDMAMDMA_C9MARBase {} ;

  struct MDMA_C9MAR : public RegisterBase<0x520002B0, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C9MAR_MAR_Values<MDMA::MDMA_C9MAR, 0, 32, ReadWriteMode, MDMAMDMA_C9MARBase> ;
    using FieldValues = MDMA_MDMA_C9MAR_MAR_Values<MDMA::MDMA_C9MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9MARPack  = Register<0x520002B0, 32, ReadWriteMode, MDMAMDMA_C9MARBase, T...> ;

  struct MDMAMDMA_C9MDRBase {} ;

  struct MDMA_C9MDR : public RegisterBase<0x520002B4, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C9MDR_MDR_Values<MDMA::MDMA_C9MDR, 0, 32, ReadWriteMode, MDMAMDMA_C9MDRBase> ;
    using FieldValues = MDMA_MDMA_C9MDR_MDR_Values<MDMA::MDMA_C9MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C9MDRPack  = Register<0x520002B4, 32, ReadWriteMode, MDMAMDMA_C9MDRBase, T...> ;

  struct MDMAMDMA_C10ISRBase {} ;

  struct MDMA_C10ISR : public RegisterBase<0x520002C0, 32, ReadMode>
  {
    using TEIF10 = MDMA_MDMA_C10ISR_TEIF10_Values<MDMA::MDMA_C10ISR, 0, 1, ReadMode, MDMAMDMA_C10ISRBase> ;
    using CTCIF10 = MDMA_MDMA_C10ISR_CTCIF10_Values<MDMA::MDMA_C10ISR, 1, 1, ReadMode, MDMAMDMA_C10ISRBase> ;
    using BRTIF10 = MDMA_MDMA_C10ISR_BRTIF10_Values<MDMA::MDMA_C10ISR, 2, 1, ReadMode, MDMAMDMA_C10ISRBase> ;
    using BTIF10 = MDMA_MDMA_C10ISR_BTIF10_Values<MDMA::MDMA_C10ISR, 3, 1, ReadMode, MDMAMDMA_C10ISRBase> ;
    using TCIF10 = MDMA_MDMA_C10ISR_TCIF10_Values<MDMA::MDMA_C10ISR, 4, 1, ReadMode, MDMAMDMA_C10ISRBase> ;
    using CRQA10 = MDMA_MDMA_C10ISR_CRQA10_Values<MDMA::MDMA_C10ISR, 16, 1, ReadMode, MDMAMDMA_C10ISRBase> ;
    using FieldValues = MDMA_MDMA_C10ISR_CRQA10_Values<MDMA::MDMA_C10ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10ISRPack  = Register<0x520002C0, 32, ReadMode, MDMAMDMA_C10ISRBase, T...> ;

  struct MDMAMDMA_C10IFCRBase {} ;

  struct MDMA_C10IFCR : public RegisterBase<0x520002C4, 32, WriteMode>
  {
    using CTEIF10 = MDMA_MDMA_C10IFCR_CTEIF10_Values<MDMA::MDMA_C10IFCR, 0, 1, WriteMode, MDMAMDMA_C10IFCRBase> ;
    using CCTCIF10 = MDMA_MDMA_C10IFCR_CCTCIF10_Values<MDMA::MDMA_C10IFCR, 1, 1, WriteMode, MDMAMDMA_C10IFCRBase> ;
    using CBRTIF10 = MDMA_MDMA_C10IFCR_CBRTIF10_Values<MDMA::MDMA_C10IFCR, 2, 1, WriteMode, MDMAMDMA_C10IFCRBase> ;
    using CBTIF10 = MDMA_MDMA_C10IFCR_CBTIF10_Values<MDMA::MDMA_C10IFCR, 3, 1, WriteMode, MDMAMDMA_C10IFCRBase> ;
    using CLTCIF10 = MDMA_MDMA_C10IFCR_CLTCIF10_Values<MDMA::MDMA_C10IFCR, 4, 1, WriteMode, MDMAMDMA_C10IFCRBase> ;
    using FieldValues = MDMA_MDMA_C10IFCR_CLTCIF10_Values<MDMA::MDMA_C10IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10IFCRPack  = Register<0x520002C4, 32, WriteMode, MDMAMDMA_C10IFCRBase, T...> ;

  struct MDMAMDMA_C10ESRBase {} ;

  struct MDMA_C10ESR : public RegisterBase<0x520002C8, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C10ESR_TEA_Values<MDMA::MDMA_C10ESR, 0, 7, ReadMode, MDMAMDMA_C10ESRBase> ;
    using TED = MDMA_MDMA_C10ESR_TED_Values<MDMA::MDMA_C10ESR, 7, 1, ReadMode, MDMAMDMA_C10ESRBase> ;
    using TELD = MDMA_MDMA_C10ESR_TELD_Values<MDMA::MDMA_C10ESR, 8, 1, ReadMode, MDMAMDMA_C10ESRBase> ;
    using TEMD = MDMA_MDMA_C10ESR_TEMD_Values<MDMA::MDMA_C10ESR, 9, 1, ReadMode, MDMAMDMA_C10ESRBase> ;
    using ASE = MDMA_MDMA_C10ESR_ASE_Values<MDMA::MDMA_C10ESR, 10, 1, ReadMode, MDMAMDMA_C10ESRBase> ;
    using BSE = MDMA_MDMA_C10ESR_BSE_Values<MDMA::MDMA_C10ESR, 11, 1, ReadMode, MDMAMDMA_C10ESRBase> ;
    using FieldValues = MDMA_MDMA_C10ESR_BSE_Values<MDMA::MDMA_C10ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10ESRPack  = Register<0x520002C8, 32, ReadMode, MDMAMDMA_C10ESRBase, T...> ;

  struct MDMAMDMA_C10CRBase {} ;

  struct MDMA_C10CR : public RegisterBase<0x520002CC, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C10CR_EN_Values<MDMA::MDMA_C10CR, 0, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using TEIE = MDMA_MDMA_C10CR_TEIE_Values<MDMA::MDMA_C10CR, 1, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using CTCIE = MDMA_MDMA_C10CR_CTCIE_Values<MDMA::MDMA_C10CR, 2, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using BRTIE = MDMA_MDMA_C10CR_BRTIE_Values<MDMA::MDMA_C10CR, 3, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using BTIE = MDMA_MDMA_C10CR_BTIE_Values<MDMA::MDMA_C10CR, 4, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using TCIE = MDMA_MDMA_C10CR_TCIE_Values<MDMA::MDMA_C10CR, 5, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using PL = MDMA_MDMA_C10CR_PL_Values<MDMA::MDMA_C10CR, 6, 2, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using BEX = MDMA_MDMA_C10CR_BEX_Values<MDMA::MDMA_C10CR, 12, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using HEX = MDMA_MDMA_C10CR_HEX_Values<MDMA::MDMA_C10CR, 13, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using WEX = MDMA_MDMA_C10CR_WEX_Values<MDMA::MDMA_C10CR, 14, 1, ReadWriteMode, MDMAMDMA_C10CRBase> ;
    using SWRQ = MDMA_MDMA_C10CR_SWRQ_Values<MDMA::MDMA_C10CR, 16, 1, WriteMode, MDMAMDMA_C10CRBase> ;
    using FieldValues = MDMA_MDMA_C10CR_SWRQ_Values<MDMA::MDMA_C10CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10CRPack  = Register<0x520002CC, 32, ReadWriteMode, MDMAMDMA_C10CRBase, T...> ;

  struct MDMAMDMA_C10TCRBase {} ;

  struct MDMA_C10TCR : public RegisterBase<0x520002D0, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C10TCR_SINC_Values<MDMA::MDMA_C10TCR, 0, 2, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using DINC = MDMA_MDMA_C10TCR_DINC_Values<MDMA::MDMA_C10TCR, 2, 2, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using SSIZE = MDMA_MDMA_C10TCR_SSIZE_Values<MDMA::MDMA_C10TCR, 4, 2, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using DSIZE = MDMA_MDMA_C10TCR_DSIZE_Values<MDMA::MDMA_C10TCR, 6, 2, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using SINCOS = MDMA_MDMA_C10TCR_SINCOS_Values<MDMA::MDMA_C10TCR, 8, 2, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using DINCOS = MDMA_MDMA_C10TCR_DINCOS_Values<MDMA::MDMA_C10TCR, 10, 2, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using SBURST = MDMA_MDMA_C10TCR_SBURST_Values<MDMA::MDMA_C10TCR, 12, 3, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using DBURST = MDMA_MDMA_C10TCR_DBURST_Values<MDMA::MDMA_C10TCR, 15, 3, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using TLEN = MDMA_MDMA_C10TCR_TLEN_Values<MDMA::MDMA_C10TCR, 18, 7, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using PKE = MDMA_MDMA_C10TCR_PKE_Values<MDMA::MDMA_C10TCR, 25, 1, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using PAM = MDMA_MDMA_C10TCR_PAM_Values<MDMA::MDMA_C10TCR, 26, 2, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using TRGM = MDMA_MDMA_C10TCR_TRGM_Values<MDMA::MDMA_C10TCR, 28, 2, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using SWRM = MDMA_MDMA_C10TCR_SWRM_Values<MDMA::MDMA_C10TCR, 30, 1, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using BWM = MDMA_MDMA_C10TCR_BWM_Values<MDMA::MDMA_C10TCR, 31, 1, ReadWriteMode, MDMAMDMA_C10TCRBase> ;
    using FieldValues = MDMA_MDMA_C10TCR_BWM_Values<MDMA::MDMA_C10TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10TCRPack  = Register<0x520002D0, 32, ReadWriteMode, MDMAMDMA_C10TCRBase, T...> ;

  struct MDMAMDMA_C10BNDTRBase {} ;

  struct MDMA_C10BNDTR : public RegisterBase<0x520002D4, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C10BNDTR_BNDT_Values<MDMA::MDMA_C10BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C10BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C10BNDTR_BRSUM_Values<MDMA::MDMA_C10BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C10BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C10BNDTR_BRDUM_Values<MDMA::MDMA_C10BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C10BNDTRBase> ;
    using BRC = MDMA_MDMA_C10BNDTR_BRC_Values<MDMA::MDMA_C10BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C10BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C10BNDTR_BRC_Values<MDMA::MDMA_C10BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10BNDTRPack  = Register<0x520002D4, 32, ReadWriteMode, MDMAMDMA_C10BNDTRBase, T...> ;

  struct MDMAMDMA_C10SARBase {} ;

  struct MDMA_C10SAR : public RegisterBase<0x520002D8, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C10SAR_SAR_Values<MDMA::MDMA_C10SAR, 0, 32, ReadWriteMode, MDMAMDMA_C10SARBase> ;
    using FieldValues = MDMA_MDMA_C10SAR_SAR_Values<MDMA::MDMA_C10SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10SARPack  = Register<0x520002D8, 32, ReadWriteMode, MDMAMDMA_C10SARBase, T...> ;

  struct MDMAMDMA_C10DARBase {} ;

  struct MDMA_C10DAR : public RegisterBase<0x520002DC, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C10DAR_DAR_Values<MDMA::MDMA_C10DAR, 0, 32, ReadWriteMode, MDMAMDMA_C10DARBase> ;
    using FieldValues = MDMA_MDMA_C10DAR_DAR_Values<MDMA::MDMA_C10DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10DARPack  = Register<0x520002DC, 32, ReadWriteMode, MDMAMDMA_C10DARBase, T...> ;

  struct MDMAMDMA_C10BRURBase {} ;

  struct MDMA_C10BRUR : public RegisterBase<0x520002E0, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C10BRUR_SUV_Values<MDMA::MDMA_C10BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C10BRURBase> ;
    using DUV = MDMA_MDMA_C10BRUR_DUV_Values<MDMA::MDMA_C10BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C10BRURBase> ;
    using FieldValues = MDMA_MDMA_C10BRUR_DUV_Values<MDMA::MDMA_C10BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10BRURPack  = Register<0x520002E0, 32, ReadWriteMode, MDMAMDMA_C10BRURBase, T...> ;

  struct MDMAMDMA_C10LARBase {} ;

  struct MDMA_C10LAR : public RegisterBase<0x520002E4, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C10LAR_LAR_Values<MDMA::MDMA_C10LAR, 0, 32, ReadWriteMode, MDMAMDMA_C10LARBase> ;
    using FieldValues = MDMA_MDMA_C10LAR_LAR_Values<MDMA::MDMA_C10LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10LARPack  = Register<0x520002E4, 32, ReadWriteMode, MDMAMDMA_C10LARBase, T...> ;

  struct MDMAMDMA_C10TBRBase {} ;

  struct MDMA_C10TBR : public RegisterBase<0x520002E8, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C10TBR_TSEL_Values<MDMA::MDMA_C10TBR, 0, 6, ReadWriteMode, MDMAMDMA_C10TBRBase> ;
    using SBUS = MDMA_MDMA_C10TBR_SBUS_Values<MDMA::MDMA_C10TBR, 16, 1, ReadWriteMode, MDMAMDMA_C10TBRBase> ;
    using DBUS = MDMA_MDMA_C10TBR_DBUS_Values<MDMA::MDMA_C10TBR, 17, 1, ReadWriteMode, MDMAMDMA_C10TBRBase> ;
    using FieldValues = MDMA_MDMA_C10TBR_DBUS_Values<MDMA::MDMA_C10TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10TBRPack  = Register<0x520002E8, 32, ReadWriteMode, MDMAMDMA_C10TBRBase, T...> ;

  struct MDMAMDMA_C10MARBase {} ;

  struct MDMA_C10MAR : public RegisterBase<0x520002F0, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C10MAR_MAR_Values<MDMA::MDMA_C10MAR, 0, 32, ReadWriteMode, MDMAMDMA_C10MARBase> ;
    using FieldValues = MDMA_MDMA_C10MAR_MAR_Values<MDMA::MDMA_C10MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10MARPack  = Register<0x520002F0, 32, ReadWriteMode, MDMAMDMA_C10MARBase, T...> ;

  struct MDMAMDMA_C10MDRBase {} ;

  struct MDMA_C10MDR : public RegisterBase<0x520002F4, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C10MDR_MDR_Values<MDMA::MDMA_C10MDR, 0, 32, ReadWriteMode, MDMAMDMA_C10MDRBase> ;
    using FieldValues = MDMA_MDMA_C10MDR_MDR_Values<MDMA::MDMA_C10MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C10MDRPack  = Register<0x520002F4, 32, ReadWriteMode, MDMAMDMA_C10MDRBase, T...> ;

  struct MDMAMDMA_C11ISRBase {} ;

  struct MDMA_C11ISR : public RegisterBase<0x52000300, 32, ReadMode>
  {
    using TEIF11 = MDMA_MDMA_C11ISR_TEIF11_Values<MDMA::MDMA_C11ISR, 0, 1, ReadMode, MDMAMDMA_C11ISRBase> ;
    using CTCIF11 = MDMA_MDMA_C11ISR_CTCIF11_Values<MDMA::MDMA_C11ISR, 1, 1, ReadMode, MDMAMDMA_C11ISRBase> ;
    using BRTIF11 = MDMA_MDMA_C11ISR_BRTIF11_Values<MDMA::MDMA_C11ISR, 2, 1, ReadMode, MDMAMDMA_C11ISRBase> ;
    using BTIF11 = MDMA_MDMA_C11ISR_BTIF11_Values<MDMA::MDMA_C11ISR, 3, 1, ReadMode, MDMAMDMA_C11ISRBase> ;
    using TCIF11 = MDMA_MDMA_C11ISR_TCIF11_Values<MDMA::MDMA_C11ISR, 4, 1, ReadMode, MDMAMDMA_C11ISRBase> ;
    using CRQA11 = MDMA_MDMA_C11ISR_CRQA11_Values<MDMA::MDMA_C11ISR, 16, 1, ReadMode, MDMAMDMA_C11ISRBase> ;
    using FieldValues = MDMA_MDMA_C11ISR_CRQA11_Values<MDMA::MDMA_C11ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11ISRPack  = Register<0x52000300, 32, ReadMode, MDMAMDMA_C11ISRBase, T...> ;

  struct MDMAMDMA_C11IFCRBase {} ;

  struct MDMA_C11IFCR : public RegisterBase<0x52000304, 32, WriteMode>
  {
    using CTEIF11 = MDMA_MDMA_C11IFCR_CTEIF11_Values<MDMA::MDMA_C11IFCR, 0, 1, WriteMode, MDMAMDMA_C11IFCRBase> ;
    using CCTCIF11 = MDMA_MDMA_C11IFCR_CCTCIF11_Values<MDMA::MDMA_C11IFCR, 1, 1, WriteMode, MDMAMDMA_C11IFCRBase> ;
    using CBRTIF11 = MDMA_MDMA_C11IFCR_CBRTIF11_Values<MDMA::MDMA_C11IFCR, 2, 1, WriteMode, MDMAMDMA_C11IFCRBase> ;
    using CBTIF11 = MDMA_MDMA_C11IFCR_CBTIF11_Values<MDMA::MDMA_C11IFCR, 3, 1, WriteMode, MDMAMDMA_C11IFCRBase> ;
    using CLTCIF11 = MDMA_MDMA_C11IFCR_CLTCIF11_Values<MDMA::MDMA_C11IFCR, 4, 1, WriteMode, MDMAMDMA_C11IFCRBase> ;
    using FieldValues = MDMA_MDMA_C11IFCR_CLTCIF11_Values<MDMA::MDMA_C11IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11IFCRPack  = Register<0x52000304, 32, WriteMode, MDMAMDMA_C11IFCRBase, T...> ;

  struct MDMAMDMA_C11ESRBase {} ;

  struct MDMA_C11ESR : public RegisterBase<0x52000308, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C11ESR_TEA_Values<MDMA::MDMA_C11ESR, 0, 7, ReadMode, MDMAMDMA_C11ESRBase> ;
    using TED = MDMA_MDMA_C11ESR_TED_Values<MDMA::MDMA_C11ESR, 7, 1, ReadMode, MDMAMDMA_C11ESRBase> ;
    using TELD = MDMA_MDMA_C11ESR_TELD_Values<MDMA::MDMA_C11ESR, 8, 1, ReadMode, MDMAMDMA_C11ESRBase> ;
    using TEMD = MDMA_MDMA_C11ESR_TEMD_Values<MDMA::MDMA_C11ESR, 9, 1, ReadMode, MDMAMDMA_C11ESRBase> ;
    using ASE = MDMA_MDMA_C11ESR_ASE_Values<MDMA::MDMA_C11ESR, 10, 1, ReadMode, MDMAMDMA_C11ESRBase> ;
    using BSE = MDMA_MDMA_C11ESR_BSE_Values<MDMA::MDMA_C11ESR, 11, 1, ReadMode, MDMAMDMA_C11ESRBase> ;
    using FieldValues = MDMA_MDMA_C11ESR_BSE_Values<MDMA::MDMA_C11ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11ESRPack  = Register<0x52000308, 32, ReadMode, MDMAMDMA_C11ESRBase, T...> ;

  struct MDMAMDMA_C11CRBase {} ;

  struct MDMA_C11CR : public RegisterBase<0x5200030C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C11CR_EN_Values<MDMA::MDMA_C11CR, 0, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using TEIE = MDMA_MDMA_C11CR_TEIE_Values<MDMA::MDMA_C11CR, 1, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using CTCIE = MDMA_MDMA_C11CR_CTCIE_Values<MDMA::MDMA_C11CR, 2, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using BRTIE = MDMA_MDMA_C11CR_BRTIE_Values<MDMA::MDMA_C11CR, 3, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using BTIE = MDMA_MDMA_C11CR_BTIE_Values<MDMA::MDMA_C11CR, 4, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using TCIE = MDMA_MDMA_C11CR_TCIE_Values<MDMA::MDMA_C11CR, 5, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using PL = MDMA_MDMA_C11CR_PL_Values<MDMA::MDMA_C11CR, 6, 2, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using BEX = MDMA_MDMA_C11CR_BEX_Values<MDMA::MDMA_C11CR, 12, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using HEX = MDMA_MDMA_C11CR_HEX_Values<MDMA::MDMA_C11CR, 13, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using WEX = MDMA_MDMA_C11CR_WEX_Values<MDMA::MDMA_C11CR, 14, 1, ReadWriteMode, MDMAMDMA_C11CRBase> ;
    using SWRQ = MDMA_MDMA_C11CR_SWRQ_Values<MDMA::MDMA_C11CR, 16, 1, WriteMode, MDMAMDMA_C11CRBase> ;
    using FieldValues = MDMA_MDMA_C11CR_SWRQ_Values<MDMA::MDMA_C11CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11CRPack  = Register<0x5200030C, 32, ReadWriteMode, MDMAMDMA_C11CRBase, T...> ;

  struct MDMAMDMA_C11TCRBase {} ;

  struct MDMA_C11TCR : public RegisterBase<0x52000310, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C11TCR_SINC_Values<MDMA::MDMA_C11TCR, 0, 2, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using DINC = MDMA_MDMA_C11TCR_DINC_Values<MDMA::MDMA_C11TCR, 2, 2, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using SSIZE = MDMA_MDMA_C11TCR_SSIZE_Values<MDMA::MDMA_C11TCR, 4, 2, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using DSIZE = MDMA_MDMA_C11TCR_DSIZE_Values<MDMA::MDMA_C11TCR, 6, 2, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using SINCOS = MDMA_MDMA_C11TCR_SINCOS_Values<MDMA::MDMA_C11TCR, 8, 2, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using DINCOS = MDMA_MDMA_C11TCR_DINCOS_Values<MDMA::MDMA_C11TCR, 10, 2, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using SBURST = MDMA_MDMA_C11TCR_SBURST_Values<MDMA::MDMA_C11TCR, 12, 3, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using DBURST = MDMA_MDMA_C11TCR_DBURST_Values<MDMA::MDMA_C11TCR, 15, 3, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using TLEN = MDMA_MDMA_C11TCR_TLEN_Values<MDMA::MDMA_C11TCR, 18, 7, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using PKE = MDMA_MDMA_C11TCR_PKE_Values<MDMA::MDMA_C11TCR, 25, 1, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using PAM = MDMA_MDMA_C11TCR_PAM_Values<MDMA::MDMA_C11TCR, 26, 2, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using TRGM = MDMA_MDMA_C11TCR_TRGM_Values<MDMA::MDMA_C11TCR, 28, 2, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using SWRM = MDMA_MDMA_C11TCR_SWRM_Values<MDMA::MDMA_C11TCR, 30, 1, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using BWM = MDMA_MDMA_C11TCR_BWM_Values<MDMA::MDMA_C11TCR, 31, 1, ReadWriteMode, MDMAMDMA_C11TCRBase> ;
    using FieldValues = MDMA_MDMA_C11TCR_BWM_Values<MDMA::MDMA_C11TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11TCRPack  = Register<0x52000310, 32, ReadWriteMode, MDMAMDMA_C11TCRBase, T...> ;

  struct MDMAMDMA_C11BNDTRBase {} ;

  struct MDMA_C11BNDTR : public RegisterBase<0x52000314, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C11BNDTR_BNDT_Values<MDMA::MDMA_C11BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C11BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C11BNDTR_BRSUM_Values<MDMA::MDMA_C11BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C11BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C11BNDTR_BRDUM_Values<MDMA::MDMA_C11BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C11BNDTRBase> ;
    using BRC = MDMA_MDMA_C11BNDTR_BRC_Values<MDMA::MDMA_C11BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C11BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C11BNDTR_BRC_Values<MDMA::MDMA_C11BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11BNDTRPack  = Register<0x52000314, 32, ReadWriteMode, MDMAMDMA_C11BNDTRBase, T...> ;

  struct MDMAMDMA_C11SARBase {} ;

  struct MDMA_C11SAR : public RegisterBase<0x52000318, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C11SAR_SAR_Values<MDMA::MDMA_C11SAR, 0, 32, ReadWriteMode, MDMAMDMA_C11SARBase> ;
    using FieldValues = MDMA_MDMA_C11SAR_SAR_Values<MDMA::MDMA_C11SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11SARPack  = Register<0x52000318, 32, ReadWriteMode, MDMAMDMA_C11SARBase, T...> ;

  struct MDMAMDMA_C11DARBase {} ;

  struct MDMA_C11DAR : public RegisterBase<0x5200031C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C11DAR_DAR_Values<MDMA::MDMA_C11DAR, 0, 32, ReadWriteMode, MDMAMDMA_C11DARBase> ;
    using FieldValues = MDMA_MDMA_C11DAR_DAR_Values<MDMA::MDMA_C11DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11DARPack  = Register<0x5200031C, 32, ReadWriteMode, MDMAMDMA_C11DARBase, T...> ;

  struct MDMAMDMA_C11BRURBase {} ;

  struct MDMA_C11BRUR : public RegisterBase<0x52000320, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C11BRUR_SUV_Values<MDMA::MDMA_C11BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C11BRURBase> ;
    using DUV = MDMA_MDMA_C11BRUR_DUV_Values<MDMA::MDMA_C11BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C11BRURBase> ;
    using FieldValues = MDMA_MDMA_C11BRUR_DUV_Values<MDMA::MDMA_C11BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11BRURPack  = Register<0x52000320, 32, ReadWriteMode, MDMAMDMA_C11BRURBase, T...> ;

  struct MDMAMDMA_C11LARBase {} ;

  struct MDMA_C11LAR : public RegisterBase<0x52000324, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C11LAR_LAR_Values<MDMA::MDMA_C11LAR, 0, 32, ReadWriteMode, MDMAMDMA_C11LARBase> ;
    using FieldValues = MDMA_MDMA_C11LAR_LAR_Values<MDMA::MDMA_C11LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11LARPack  = Register<0x52000324, 32, ReadWriteMode, MDMAMDMA_C11LARBase, T...> ;

  struct MDMAMDMA_C11TBRBase {} ;

  struct MDMA_C11TBR : public RegisterBase<0x52000328, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C11TBR_TSEL_Values<MDMA::MDMA_C11TBR, 0, 6, ReadWriteMode, MDMAMDMA_C11TBRBase> ;
    using SBUS = MDMA_MDMA_C11TBR_SBUS_Values<MDMA::MDMA_C11TBR, 16, 1, ReadWriteMode, MDMAMDMA_C11TBRBase> ;
    using DBUS = MDMA_MDMA_C11TBR_DBUS_Values<MDMA::MDMA_C11TBR, 17, 1, ReadWriteMode, MDMAMDMA_C11TBRBase> ;
    using FieldValues = MDMA_MDMA_C11TBR_DBUS_Values<MDMA::MDMA_C11TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11TBRPack  = Register<0x52000328, 32, ReadWriteMode, MDMAMDMA_C11TBRBase, T...> ;

  struct MDMAMDMA_C11MARBase {} ;

  struct MDMA_C11MAR : public RegisterBase<0x52000330, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C11MAR_MAR_Values<MDMA::MDMA_C11MAR, 0, 32, ReadWriteMode, MDMAMDMA_C11MARBase> ;
    using FieldValues = MDMA_MDMA_C11MAR_MAR_Values<MDMA::MDMA_C11MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11MARPack  = Register<0x52000330, 32, ReadWriteMode, MDMAMDMA_C11MARBase, T...> ;

  struct MDMAMDMA_C11MDRBase {} ;

  struct MDMA_C11MDR : public RegisterBase<0x52000334, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C11MDR_MDR_Values<MDMA::MDMA_C11MDR, 0, 32, ReadWriteMode, MDMAMDMA_C11MDRBase> ;
    using FieldValues = MDMA_MDMA_C11MDR_MDR_Values<MDMA::MDMA_C11MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C11MDRPack  = Register<0x52000334, 32, ReadWriteMode, MDMAMDMA_C11MDRBase, T...> ;

  struct MDMAMDMA_C12ISRBase {} ;

  struct MDMA_C12ISR : public RegisterBase<0x52000340, 32, ReadMode>
  {
    using TEIF12 = MDMA_MDMA_C12ISR_TEIF12_Values<MDMA::MDMA_C12ISR, 0, 1, ReadMode, MDMAMDMA_C12ISRBase> ;
    using CTCIF12 = MDMA_MDMA_C12ISR_CTCIF12_Values<MDMA::MDMA_C12ISR, 1, 1, ReadMode, MDMAMDMA_C12ISRBase> ;
    using BRTIF12 = MDMA_MDMA_C12ISR_BRTIF12_Values<MDMA::MDMA_C12ISR, 2, 1, ReadMode, MDMAMDMA_C12ISRBase> ;
    using BTIF12 = MDMA_MDMA_C12ISR_BTIF12_Values<MDMA::MDMA_C12ISR, 3, 1, ReadMode, MDMAMDMA_C12ISRBase> ;
    using TCIF12 = MDMA_MDMA_C12ISR_TCIF12_Values<MDMA::MDMA_C12ISR, 4, 1, ReadMode, MDMAMDMA_C12ISRBase> ;
    using CRQA12 = MDMA_MDMA_C12ISR_CRQA12_Values<MDMA::MDMA_C12ISR, 16, 1, ReadMode, MDMAMDMA_C12ISRBase> ;
    using FieldValues = MDMA_MDMA_C12ISR_CRQA12_Values<MDMA::MDMA_C12ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12ISRPack  = Register<0x52000340, 32, ReadMode, MDMAMDMA_C12ISRBase, T...> ;

  struct MDMAMDMA_C12IFCRBase {} ;

  struct MDMA_C12IFCR : public RegisterBase<0x52000344, 32, WriteMode>
  {
    using CTEIF12 = MDMA_MDMA_C12IFCR_CTEIF12_Values<MDMA::MDMA_C12IFCR, 0, 1, WriteMode, MDMAMDMA_C12IFCRBase> ;
    using CCTCIF12 = MDMA_MDMA_C12IFCR_CCTCIF12_Values<MDMA::MDMA_C12IFCR, 1, 1, WriteMode, MDMAMDMA_C12IFCRBase> ;
    using CBRTIF12 = MDMA_MDMA_C12IFCR_CBRTIF12_Values<MDMA::MDMA_C12IFCR, 2, 1, WriteMode, MDMAMDMA_C12IFCRBase> ;
    using CBTIF12 = MDMA_MDMA_C12IFCR_CBTIF12_Values<MDMA::MDMA_C12IFCR, 3, 1, WriteMode, MDMAMDMA_C12IFCRBase> ;
    using CLTCIF12 = MDMA_MDMA_C12IFCR_CLTCIF12_Values<MDMA::MDMA_C12IFCR, 4, 1, WriteMode, MDMAMDMA_C12IFCRBase> ;
    using FieldValues = MDMA_MDMA_C12IFCR_CLTCIF12_Values<MDMA::MDMA_C12IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12IFCRPack  = Register<0x52000344, 32, WriteMode, MDMAMDMA_C12IFCRBase, T...> ;

  struct MDMAMDMA_C12ESRBase {} ;

  struct MDMA_C12ESR : public RegisterBase<0x52000348, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C12ESR_TEA_Values<MDMA::MDMA_C12ESR, 0, 7, ReadMode, MDMAMDMA_C12ESRBase> ;
    using TED = MDMA_MDMA_C12ESR_TED_Values<MDMA::MDMA_C12ESR, 7, 1, ReadMode, MDMAMDMA_C12ESRBase> ;
    using TELD = MDMA_MDMA_C12ESR_TELD_Values<MDMA::MDMA_C12ESR, 8, 1, ReadMode, MDMAMDMA_C12ESRBase> ;
    using TEMD = MDMA_MDMA_C12ESR_TEMD_Values<MDMA::MDMA_C12ESR, 9, 1, ReadMode, MDMAMDMA_C12ESRBase> ;
    using ASE = MDMA_MDMA_C12ESR_ASE_Values<MDMA::MDMA_C12ESR, 10, 1, ReadMode, MDMAMDMA_C12ESRBase> ;
    using BSE = MDMA_MDMA_C12ESR_BSE_Values<MDMA::MDMA_C12ESR, 11, 1, ReadMode, MDMAMDMA_C12ESRBase> ;
    using FieldValues = MDMA_MDMA_C12ESR_BSE_Values<MDMA::MDMA_C12ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12ESRPack  = Register<0x52000348, 32, ReadMode, MDMAMDMA_C12ESRBase, T...> ;

  struct MDMAMDMA_C12CRBase {} ;

  struct MDMA_C12CR : public RegisterBase<0x5200034C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C12CR_EN_Values<MDMA::MDMA_C12CR, 0, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using TEIE = MDMA_MDMA_C12CR_TEIE_Values<MDMA::MDMA_C12CR, 1, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using CTCIE = MDMA_MDMA_C12CR_CTCIE_Values<MDMA::MDMA_C12CR, 2, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using BRTIE = MDMA_MDMA_C12CR_BRTIE_Values<MDMA::MDMA_C12CR, 3, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using BTIE = MDMA_MDMA_C12CR_BTIE_Values<MDMA::MDMA_C12CR, 4, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using TCIE = MDMA_MDMA_C12CR_TCIE_Values<MDMA::MDMA_C12CR, 5, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using PL = MDMA_MDMA_C12CR_PL_Values<MDMA::MDMA_C12CR, 6, 2, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using BEX = MDMA_MDMA_C12CR_BEX_Values<MDMA::MDMA_C12CR, 12, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using HEX = MDMA_MDMA_C12CR_HEX_Values<MDMA::MDMA_C12CR, 13, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using WEX = MDMA_MDMA_C12CR_WEX_Values<MDMA::MDMA_C12CR, 14, 1, ReadWriteMode, MDMAMDMA_C12CRBase> ;
    using SWRQ = MDMA_MDMA_C12CR_SWRQ_Values<MDMA::MDMA_C12CR, 16, 1, WriteMode, MDMAMDMA_C12CRBase> ;
    using FieldValues = MDMA_MDMA_C12CR_SWRQ_Values<MDMA::MDMA_C12CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12CRPack  = Register<0x5200034C, 32, ReadWriteMode, MDMAMDMA_C12CRBase, T...> ;

  struct MDMAMDMA_C12TCRBase {} ;

  struct MDMA_C12TCR : public RegisterBase<0x52000350, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C12TCR_SINC_Values<MDMA::MDMA_C12TCR, 0, 2, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using DINC = MDMA_MDMA_C12TCR_DINC_Values<MDMA::MDMA_C12TCR, 2, 2, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using SSIZE = MDMA_MDMA_C12TCR_SSIZE_Values<MDMA::MDMA_C12TCR, 4, 2, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using DSIZE = MDMA_MDMA_C12TCR_DSIZE_Values<MDMA::MDMA_C12TCR, 6, 2, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using SINCOS = MDMA_MDMA_C12TCR_SINCOS_Values<MDMA::MDMA_C12TCR, 8, 2, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using DINCOS = MDMA_MDMA_C12TCR_DINCOS_Values<MDMA::MDMA_C12TCR, 10, 2, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using SBURST = MDMA_MDMA_C12TCR_SBURST_Values<MDMA::MDMA_C12TCR, 12, 3, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using DBURST = MDMA_MDMA_C12TCR_DBURST_Values<MDMA::MDMA_C12TCR, 15, 3, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using TLEN = MDMA_MDMA_C12TCR_TLEN_Values<MDMA::MDMA_C12TCR, 18, 7, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using PKE = MDMA_MDMA_C12TCR_PKE_Values<MDMA::MDMA_C12TCR, 25, 1, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using PAM = MDMA_MDMA_C12TCR_PAM_Values<MDMA::MDMA_C12TCR, 26, 2, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using TRGM = MDMA_MDMA_C12TCR_TRGM_Values<MDMA::MDMA_C12TCR, 28, 2, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using SWRM = MDMA_MDMA_C12TCR_SWRM_Values<MDMA::MDMA_C12TCR, 30, 1, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using BWM = MDMA_MDMA_C12TCR_BWM_Values<MDMA::MDMA_C12TCR, 31, 1, ReadWriteMode, MDMAMDMA_C12TCRBase> ;
    using FieldValues = MDMA_MDMA_C12TCR_BWM_Values<MDMA::MDMA_C12TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12TCRPack  = Register<0x52000350, 32, ReadWriteMode, MDMAMDMA_C12TCRBase, T...> ;

  struct MDMAMDMA_C12BNDTRBase {} ;

  struct MDMA_C12BNDTR : public RegisterBase<0x52000354, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C12BNDTR_BNDT_Values<MDMA::MDMA_C12BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C12BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C12BNDTR_BRSUM_Values<MDMA::MDMA_C12BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C12BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C12BNDTR_BRDUM_Values<MDMA::MDMA_C12BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C12BNDTRBase> ;
    using BRC = MDMA_MDMA_C12BNDTR_BRC_Values<MDMA::MDMA_C12BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C12BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C12BNDTR_BRC_Values<MDMA::MDMA_C12BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12BNDTRPack  = Register<0x52000354, 32, ReadWriteMode, MDMAMDMA_C12BNDTRBase, T...> ;

  struct MDMAMDMA_C12SARBase {} ;

  struct MDMA_C12SAR : public RegisterBase<0x52000358, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C12SAR_SAR_Values<MDMA::MDMA_C12SAR, 0, 32, ReadWriteMode, MDMAMDMA_C12SARBase> ;
    using FieldValues = MDMA_MDMA_C12SAR_SAR_Values<MDMA::MDMA_C12SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12SARPack  = Register<0x52000358, 32, ReadWriteMode, MDMAMDMA_C12SARBase, T...> ;

  struct MDMAMDMA_C12DARBase {} ;

  struct MDMA_C12DAR : public RegisterBase<0x5200035C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C12DAR_DAR_Values<MDMA::MDMA_C12DAR, 0, 32, ReadWriteMode, MDMAMDMA_C12DARBase> ;
    using FieldValues = MDMA_MDMA_C12DAR_DAR_Values<MDMA::MDMA_C12DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12DARPack  = Register<0x5200035C, 32, ReadWriteMode, MDMAMDMA_C12DARBase, T...> ;

  struct MDMAMDMA_C12BRURBase {} ;

  struct MDMA_C12BRUR : public RegisterBase<0x52000360, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C12BRUR_SUV_Values<MDMA::MDMA_C12BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C12BRURBase> ;
    using DUV = MDMA_MDMA_C12BRUR_DUV_Values<MDMA::MDMA_C12BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C12BRURBase> ;
    using FieldValues = MDMA_MDMA_C12BRUR_DUV_Values<MDMA::MDMA_C12BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12BRURPack  = Register<0x52000360, 32, ReadWriteMode, MDMAMDMA_C12BRURBase, T...> ;

  struct MDMAMDMA_C12LARBase {} ;

  struct MDMA_C12LAR : public RegisterBase<0x52000364, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C12LAR_LAR_Values<MDMA::MDMA_C12LAR, 0, 32, ReadWriteMode, MDMAMDMA_C12LARBase> ;
    using FieldValues = MDMA_MDMA_C12LAR_LAR_Values<MDMA::MDMA_C12LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12LARPack  = Register<0x52000364, 32, ReadWriteMode, MDMAMDMA_C12LARBase, T...> ;

  struct MDMAMDMA_C12TBRBase {} ;

  struct MDMA_C12TBR : public RegisterBase<0x52000368, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C12TBR_TSEL_Values<MDMA::MDMA_C12TBR, 0, 6, ReadWriteMode, MDMAMDMA_C12TBRBase> ;
    using SBUS = MDMA_MDMA_C12TBR_SBUS_Values<MDMA::MDMA_C12TBR, 16, 1, ReadWriteMode, MDMAMDMA_C12TBRBase> ;
    using DBUS = MDMA_MDMA_C12TBR_DBUS_Values<MDMA::MDMA_C12TBR, 17, 1, ReadWriteMode, MDMAMDMA_C12TBRBase> ;
    using FieldValues = MDMA_MDMA_C12TBR_DBUS_Values<MDMA::MDMA_C12TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12TBRPack  = Register<0x52000368, 32, ReadWriteMode, MDMAMDMA_C12TBRBase, T...> ;

  struct MDMAMDMA_C12MARBase {} ;

  struct MDMA_C12MAR : public RegisterBase<0x52000370, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C12MAR_MAR_Values<MDMA::MDMA_C12MAR, 0, 32, ReadWriteMode, MDMAMDMA_C12MARBase> ;
    using FieldValues = MDMA_MDMA_C12MAR_MAR_Values<MDMA::MDMA_C12MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12MARPack  = Register<0x52000370, 32, ReadWriteMode, MDMAMDMA_C12MARBase, T...> ;

  struct MDMAMDMA_C12MDRBase {} ;

  struct MDMA_C12MDR : public RegisterBase<0x52000374, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C12MDR_MDR_Values<MDMA::MDMA_C12MDR, 0, 32, ReadWriteMode, MDMAMDMA_C12MDRBase> ;
    using FieldValues = MDMA_MDMA_C12MDR_MDR_Values<MDMA::MDMA_C12MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C12MDRPack  = Register<0x52000374, 32, ReadWriteMode, MDMAMDMA_C12MDRBase, T...> ;

  struct MDMAMDMA_C13ISRBase {} ;

  struct MDMA_C13ISR : public RegisterBase<0x52000380, 32, ReadMode>
  {
    using TEIF13 = MDMA_MDMA_C13ISR_TEIF13_Values<MDMA::MDMA_C13ISR, 0, 1, ReadMode, MDMAMDMA_C13ISRBase> ;
    using CTCIF13 = MDMA_MDMA_C13ISR_CTCIF13_Values<MDMA::MDMA_C13ISR, 1, 1, ReadMode, MDMAMDMA_C13ISRBase> ;
    using BRTIF13 = MDMA_MDMA_C13ISR_BRTIF13_Values<MDMA::MDMA_C13ISR, 2, 1, ReadMode, MDMAMDMA_C13ISRBase> ;
    using BTIF13 = MDMA_MDMA_C13ISR_BTIF13_Values<MDMA::MDMA_C13ISR, 3, 1, ReadMode, MDMAMDMA_C13ISRBase> ;
    using TCIF13 = MDMA_MDMA_C13ISR_TCIF13_Values<MDMA::MDMA_C13ISR, 4, 1, ReadMode, MDMAMDMA_C13ISRBase> ;
    using CRQA13 = MDMA_MDMA_C13ISR_CRQA13_Values<MDMA::MDMA_C13ISR, 16, 1, ReadMode, MDMAMDMA_C13ISRBase> ;
    using FieldValues = MDMA_MDMA_C13ISR_CRQA13_Values<MDMA::MDMA_C13ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13ISRPack  = Register<0x52000380, 32, ReadMode, MDMAMDMA_C13ISRBase, T...> ;

  struct MDMAMDMA_C13IFCRBase {} ;

  struct MDMA_C13IFCR : public RegisterBase<0x52000384, 32, WriteMode>
  {
    using CTEIF13 = MDMA_MDMA_C13IFCR_CTEIF13_Values<MDMA::MDMA_C13IFCR, 0, 1, WriteMode, MDMAMDMA_C13IFCRBase> ;
    using CCTCIF13 = MDMA_MDMA_C13IFCR_CCTCIF13_Values<MDMA::MDMA_C13IFCR, 1, 1, WriteMode, MDMAMDMA_C13IFCRBase> ;
    using CBRTIF13 = MDMA_MDMA_C13IFCR_CBRTIF13_Values<MDMA::MDMA_C13IFCR, 2, 1, WriteMode, MDMAMDMA_C13IFCRBase> ;
    using CBTIF13 = MDMA_MDMA_C13IFCR_CBTIF13_Values<MDMA::MDMA_C13IFCR, 3, 1, WriteMode, MDMAMDMA_C13IFCRBase> ;
    using CLTCIF13 = MDMA_MDMA_C13IFCR_CLTCIF13_Values<MDMA::MDMA_C13IFCR, 4, 1, WriteMode, MDMAMDMA_C13IFCRBase> ;
    using FieldValues = MDMA_MDMA_C13IFCR_CLTCIF13_Values<MDMA::MDMA_C13IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13IFCRPack  = Register<0x52000384, 32, WriteMode, MDMAMDMA_C13IFCRBase, T...> ;

  struct MDMAMDMA_C13ESRBase {} ;

  struct MDMA_C13ESR : public RegisterBase<0x52000388, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C13ESR_TEA_Values<MDMA::MDMA_C13ESR, 0, 7, ReadMode, MDMAMDMA_C13ESRBase> ;
    using TED = MDMA_MDMA_C13ESR_TED_Values<MDMA::MDMA_C13ESR, 7, 1, ReadMode, MDMAMDMA_C13ESRBase> ;
    using TELD = MDMA_MDMA_C13ESR_TELD_Values<MDMA::MDMA_C13ESR, 8, 1, ReadMode, MDMAMDMA_C13ESRBase> ;
    using TEMD = MDMA_MDMA_C13ESR_TEMD_Values<MDMA::MDMA_C13ESR, 9, 1, ReadMode, MDMAMDMA_C13ESRBase> ;
    using ASE = MDMA_MDMA_C13ESR_ASE_Values<MDMA::MDMA_C13ESR, 10, 1, ReadMode, MDMAMDMA_C13ESRBase> ;
    using BSE = MDMA_MDMA_C13ESR_BSE_Values<MDMA::MDMA_C13ESR, 11, 1, ReadMode, MDMAMDMA_C13ESRBase> ;
    using FieldValues = MDMA_MDMA_C13ESR_BSE_Values<MDMA::MDMA_C13ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13ESRPack  = Register<0x52000388, 32, ReadMode, MDMAMDMA_C13ESRBase, T...> ;

  struct MDMAMDMA_C13CRBase {} ;

  struct MDMA_C13CR : public RegisterBase<0x5200038C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C13CR_EN_Values<MDMA::MDMA_C13CR, 0, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using TEIE = MDMA_MDMA_C13CR_TEIE_Values<MDMA::MDMA_C13CR, 1, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using CTCIE = MDMA_MDMA_C13CR_CTCIE_Values<MDMA::MDMA_C13CR, 2, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using BRTIE = MDMA_MDMA_C13CR_BRTIE_Values<MDMA::MDMA_C13CR, 3, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using BTIE = MDMA_MDMA_C13CR_BTIE_Values<MDMA::MDMA_C13CR, 4, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using TCIE = MDMA_MDMA_C13CR_TCIE_Values<MDMA::MDMA_C13CR, 5, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using PL = MDMA_MDMA_C13CR_PL_Values<MDMA::MDMA_C13CR, 6, 2, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using BEX = MDMA_MDMA_C13CR_BEX_Values<MDMA::MDMA_C13CR, 12, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using HEX = MDMA_MDMA_C13CR_HEX_Values<MDMA::MDMA_C13CR, 13, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using WEX = MDMA_MDMA_C13CR_WEX_Values<MDMA::MDMA_C13CR, 14, 1, ReadWriteMode, MDMAMDMA_C13CRBase> ;
    using SWRQ = MDMA_MDMA_C13CR_SWRQ_Values<MDMA::MDMA_C13CR, 16, 1, WriteMode, MDMAMDMA_C13CRBase> ;
    using FieldValues = MDMA_MDMA_C13CR_SWRQ_Values<MDMA::MDMA_C13CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13CRPack  = Register<0x5200038C, 32, ReadWriteMode, MDMAMDMA_C13CRBase, T...> ;

  struct MDMAMDMA_C13TCRBase {} ;

  struct MDMA_C13TCR : public RegisterBase<0x52000390, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C13TCR_SINC_Values<MDMA::MDMA_C13TCR, 0, 2, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using DINC = MDMA_MDMA_C13TCR_DINC_Values<MDMA::MDMA_C13TCR, 2, 2, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using SSIZE = MDMA_MDMA_C13TCR_SSIZE_Values<MDMA::MDMA_C13TCR, 4, 2, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using DSIZE = MDMA_MDMA_C13TCR_DSIZE_Values<MDMA::MDMA_C13TCR, 6, 2, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using SINCOS = MDMA_MDMA_C13TCR_SINCOS_Values<MDMA::MDMA_C13TCR, 8, 2, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using DINCOS = MDMA_MDMA_C13TCR_DINCOS_Values<MDMA::MDMA_C13TCR, 10, 2, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using SBURST = MDMA_MDMA_C13TCR_SBURST_Values<MDMA::MDMA_C13TCR, 12, 3, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using DBURST = MDMA_MDMA_C13TCR_DBURST_Values<MDMA::MDMA_C13TCR, 15, 3, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using TLEN = MDMA_MDMA_C13TCR_TLEN_Values<MDMA::MDMA_C13TCR, 18, 7, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using PKE = MDMA_MDMA_C13TCR_PKE_Values<MDMA::MDMA_C13TCR, 25, 1, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using PAM = MDMA_MDMA_C13TCR_PAM_Values<MDMA::MDMA_C13TCR, 26, 2, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using TRGM = MDMA_MDMA_C13TCR_TRGM_Values<MDMA::MDMA_C13TCR, 28, 2, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using SWRM = MDMA_MDMA_C13TCR_SWRM_Values<MDMA::MDMA_C13TCR, 30, 1, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using BWM = MDMA_MDMA_C13TCR_BWM_Values<MDMA::MDMA_C13TCR, 31, 1, ReadWriteMode, MDMAMDMA_C13TCRBase> ;
    using FieldValues = MDMA_MDMA_C13TCR_BWM_Values<MDMA::MDMA_C13TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13TCRPack  = Register<0x52000390, 32, ReadWriteMode, MDMAMDMA_C13TCRBase, T...> ;

  struct MDMAMDMA_C13BNDTRBase {} ;

  struct MDMA_C13BNDTR : public RegisterBase<0x52000394, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C13BNDTR_BNDT_Values<MDMA::MDMA_C13BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C13BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C13BNDTR_BRSUM_Values<MDMA::MDMA_C13BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C13BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C13BNDTR_BRDUM_Values<MDMA::MDMA_C13BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C13BNDTRBase> ;
    using BRC = MDMA_MDMA_C13BNDTR_BRC_Values<MDMA::MDMA_C13BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C13BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C13BNDTR_BRC_Values<MDMA::MDMA_C13BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13BNDTRPack  = Register<0x52000394, 32, ReadWriteMode, MDMAMDMA_C13BNDTRBase, T...> ;

  struct MDMAMDMA_C13SARBase {} ;

  struct MDMA_C13SAR : public RegisterBase<0x52000398, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C13SAR_SAR_Values<MDMA::MDMA_C13SAR, 0, 32, ReadWriteMode, MDMAMDMA_C13SARBase> ;
    using FieldValues = MDMA_MDMA_C13SAR_SAR_Values<MDMA::MDMA_C13SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13SARPack  = Register<0x52000398, 32, ReadWriteMode, MDMAMDMA_C13SARBase, T...> ;

  struct MDMAMDMA_C13DARBase {} ;

  struct MDMA_C13DAR : public RegisterBase<0x5200039C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C13DAR_DAR_Values<MDMA::MDMA_C13DAR, 0, 32, ReadWriteMode, MDMAMDMA_C13DARBase> ;
    using FieldValues = MDMA_MDMA_C13DAR_DAR_Values<MDMA::MDMA_C13DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13DARPack  = Register<0x5200039C, 32, ReadWriteMode, MDMAMDMA_C13DARBase, T...> ;

  struct MDMAMDMA_C13BRURBase {} ;

  struct MDMA_C13BRUR : public RegisterBase<0x520003A0, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C13BRUR_SUV_Values<MDMA::MDMA_C13BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C13BRURBase> ;
    using DUV = MDMA_MDMA_C13BRUR_DUV_Values<MDMA::MDMA_C13BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C13BRURBase> ;
    using FieldValues = MDMA_MDMA_C13BRUR_DUV_Values<MDMA::MDMA_C13BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13BRURPack  = Register<0x520003A0, 32, ReadWriteMode, MDMAMDMA_C13BRURBase, T...> ;

  struct MDMAMDMA_C13LARBase {} ;

  struct MDMA_C13LAR : public RegisterBase<0x520003A4, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C13LAR_LAR_Values<MDMA::MDMA_C13LAR, 0, 32, ReadWriteMode, MDMAMDMA_C13LARBase> ;
    using FieldValues = MDMA_MDMA_C13LAR_LAR_Values<MDMA::MDMA_C13LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13LARPack  = Register<0x520003A4, 32, ReadWriteMode, MDMAMDMA_C13LARBase, T...> ;

  struct MDMAMDMA_C13TBRBase {} ;

  struct MDMA_C13TBR : public RegisterBase<0x520003A8, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C13TBR_TSEL_Values<MDMA::MDMA_C13TBR, 0, 6, ReadWriteMode, MDMAMDMA_C13TBRBase> ;
    using SBUS = MDMA_MDMA_C13TBR_SBUS_Values<MDMA::MDMA_C13TBR, 16, 1, ReadWriteMode, MDMAMDMA_C13TBRBase> ;
    using DBUS = MDMA_MDMA_C13TBR_DBUS_Values<MDMA::MDMA_C13TBR, 17, 1, ReadWriteMode, MDMAMDMA_C13TBRBase> ;
    using FieldValues = MDMA_MDMA_C13TBR_DBUS_Values<MDMA::MDMA_C13TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13TBRPack  = Register<0x520003A8, 32, ReadWriteMode, MDMAMDMA_C13TBRBase, T...> ;

  struct MDMAMDMA_C13MARBase {} ;

  struct MDMA_C13MAR : public RegisterBase<0x520003B0, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C13MAR_MAR_Values<MDMA::MDMA_C13MAR, 0, 32, ReadWriteMode, MDMAMDMA_C13MARBase> ;
    using FieldValues = MDMA_MDMA_C13MAR_MAR_Values<MDMA::MDMA_C13MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13MARPack  = Register<0x520003B0, 32, ReadWriteMode, MDMAMDMA_C13MARBase, T...> ;

  struct MDMAMDMA_C13MDRBase {} ;

  struct MDMA_C13MDR : public RegisterBase<0x520003B4, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C13MDR_MDR_Values<MDMA::MDMA_C13MDR, 0, 32, ReadWriteMode, MDMAMDMA_C13MDRBase> ;
    using FieldValues = MDMA_MDMA_C13MDR_MDR_Values<MDMA::MDMA_C13MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C13MDRPack  = Register<0x520003B4, 32, ReadWriteMode, MDMAMDMA_C13MDRBase, T...> ;

  struct MDMAMDMA_C14ISRBase {} ;

  struct MDMA_C14ISR : public RegisterBase<0x520003C0, 32, ReadMode>
  {
    using TEIF14 = MDMA_MDMA_C14ISR_TEIF14_Values<MDMA::MDMA_C14ISR, 0, 1, ReadMode, MDMAMDMA_C14ISRBase> ;
    using CTCIF14 = MDMA_MDMA_C14ISR_CTCIF14_Values<MDMA::MDMA_C14ISR, 1, 1, ReadMode, MDMAMDMA_C14ISRBase> ;
    using BRTIF14 = MDMA_MDMA_C14ISR_BRTIF14_Values<MDMA::MDMA_C14ISR, 2, 1, ReadMode, MDMAMDMA_C14ISRBase> ;
    using BTIF14 = MDMA_MDMA_C14ISR_BTIF14_Values<MDMA::MDMA_C14ISR, 3, 1, ReadMode, MDMAMDMA_C14ISRBase> ;
    using TCIF14 = MDMA_MDMA_C14ISR_TCIF14_Values<MDMA::MDMA_C14ISR, 4, 1, ReadMode, MDMAMDMA_C14ISRBase> ;
    using CRQA14 = MDMA_MDMA_C14ISR_CRQA14_Values<MDMA::MDMA_C14ISR, 16, 1, ReadMode, MDMAMDMA_C14ISRBase> ;
    using FieldValues = MDMA_MDMA_C14ISR_CRQA14_Values<MDMA::MDMA_C14ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14ISRPack  = Register<0x520003C0, 32, ReadMode, MDMAMDMA_C14ISRBase, T...> ;

  struct MDMAMDMA_C14IFCRBase {} ;

  struct MDMA_C14IFCR : public RegisterBase<0x520003C4, 32, WriteMode>
  {
    using CTEIF14 = MDMA_MDMA_C14IFCR_CTEIF14_Values<MDMA::MDMA_C14IFCR, 0, 1, WriteMode, MDMAMDMA_C14IFCRBase> ;
    using CCTCIF14 = MDMA_MDMA_C14IFCR_CCTCIF14_Values<MDMA::MDMA_C14IFCR, 1, 1, WriteMode, MDMAMDMA_C14IFCRBase> ;
    using CBRTIF14 = MDMA_MDMA_C14IFCR_CBRTIF14_Values<MDMA::MDMA_C14IFCR, 2, 1, WriteMode, MDMAMDMA_C14IFCRBase> ;
    using CBTIF14 = MDMA_MDMA_C14IFCR_CBTIF14_Values<MDMA::MDMA_C14IFCR, 3, 1, WriteMode, MDMAMDMA_C14IFCRBase> ;
    using CLTCIF14 = MDMA_MDMA_C14IFCR_CLTCIF14_Values<MDMA::MDMA_C14IFCR, 4, 1, WriteMode, MDMAMDMA_C14IFCRBase> ;
    using FieldValues = MDMA_MDMA_C14IFCR_CLTCIF14_Values<MDMA::MDMA_C14IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14IFCRPack  = Register<0x520003C4, 32, WriteMode, MDMAMDMA_C14IFCRBase, T...> ;

  struct MDMAMDMA_C14ESRBase {} ;

  struct MDMA_C14ESR : public RegisterBase<0x520003C8, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C14ESR_TEA_Values<MDMA::MDMA_C14ESR, 0, 7, ReadMode, MDMAMDMA_C14ESRBase> ;
    using TED = MDMA_MDMA_C14ESR_TED_Values<MDMA::MDMA_C14ESR, 7, 1, ReadMode, MDMAMDMA_C14ESRBase> ;
    using TELD = MDMA_MDMA_C14ESR_TELD_Values<MDMA::MDMA_C14ESR, 8, 1, ReadMode, MDMAMDMA_C14ESRBase> ;
    using TEMD = MDMA_MDMA_C14ESR_TEMD_Values<MDMA::MDMA_C14ESR, 9, 1, ReadMode, MDMAMDMA_C14ESRBase> ;
    using ASE = MDMA_MDMA_C14ESR_ASE_Values<MDMA::MDMA_C14ESR, 10, 1, ReadMode, MDMAMDMA_C14ESRBase> ;
    using BSE = MDMA_MDMA_C14ESR_BSE_Values<MDMA::MDMA_C14ESR, 11, 1, ReadMode, MDMAMDMA_C14ESRBase> ;
    using FieldValues = MDMA_MDMA_C14ESR_BSE_Values<MDMA::MDMA_C14ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14ESRPack  = Register<0x520003C8, 32, ReadMode, MDMAMDMA_C14ESRBase, T...> ;

  struct MDMAMDMA_C14CRBase {} ;

  struct MDMA_C14CR : public RegisterBase<0x520003CC, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C14CR_EN_Values<MDMA::MDMA_C14CR, 0, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using TEIE = MDMA_MDMA_C14CR_TEIE_Values<MDMA::MDMA_C14CR, 1, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using CTCIE = MDMA_MDMA_C14CR_CTCIE_Values<MDMA::MDMA_C14CR, 2, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using BRTIE = MDMA_MDMA_C14CR_BRTIE_Values<MDMA::MDMA_C14CR, 3, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using BTIE = MDMA_MDMA_C14CR_BTIE_Values<MDMA::MDMA_C14CR, 4, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using TCIE = MDMA_MDMA_C14CR_TCIE_Values<MDMA::MDMA_C14CR, 5, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using PL = MDMA_MDMA_C14CR_PL_Values<MDMA::MDMA_C14CR, 6, 2, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using BEX = MDMA_MDMA_C14CR_BEX_Values<MDMA::MDMA_C14CR, 12, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using HEX = MDMA_MDMA_C14CR_HEX_Values<MDMA::MDMA_C14CR, 13, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using WEX = MDMA_MDMA_C14CR_WEX_Values<MDMA::MDMA_C14CR, 14, 1, ReadWriteMode, MDMAMDMA_C14CRBase> ;
    using SWRQ = MDMA_MDMA_C14CR_SWRQ_Values<MDMA::MDMA_C14CR, 16, 1, WriteMode, MDMAMDMA_C14CRBase> ;
    using FieldValues = MDMA_MDMA_C14CR_SWRQ_Values<MDMA::MDMA_C14CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14CRPack  = Register<0x520003CC, 32, ReadWriteMode, MDMAMDMA_C14CRBase, T...> ;

  struct MDMAMDMA_C14TCRBase {} ;

  struct MDMA_C14TCR : public RegisterBase<0x520003D0, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C14TCR_SINC_Values<MDMA::MDMA_C14TCR, 0, 2, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using DINC = MDMA_MDMA_C14TCR_DINC_Values<MDMA::MDMA_C14TCR, 2, 2, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using SSIZE = MDMA_MDMA_C14TCR_SSIZE_Values<MDMA::MDMA_C14TCR, 4, 2, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using DSIZE = MDMA_MDMA_C14TCR_DSIZE_Values<MDMA::MDMA_C14TCR, 6, 2, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using SINCOS = MDMA_MDMA_C14TCR_SINCOS_Values<MDMA::MDMA_C14TCR, 8, 2, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using DINCOS = MDMA_MDMA_C14TCR_DINCOS_Values<MDMA::MDMA_C14TCR, 10, 2, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using SBURST = MDMA_MDMA_C14TCR_SBURST_Values<MDMA::MDMA_C14TCR, 12, 3, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using DBURST = MDMA_MDMA_C14TCR_DBURST_Values<MDMA::MDMA_C14TCR, 15, 3, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using TLEN = MDMA_MDMA_C14TCR_TLEN_Values<MDMA::MDMA_C14TCR, 18, 7, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using PKE = MDMA_MDMA_C14TCR_PKE_Values<MDMA::MDMA_C14TCR, 25, 1, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using PAM = MDMA_MDMA_C14TCR_PAM_Values<MDMA::MDMA_C14TCR, 26, 2, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using TRGM = MDMA_MDMA_C14TCR_TRGM_Values<MDMA::MDMA_C14TCR, 28, 2, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using SWRM = MDMA_MDMA_C14TCR_SWRM_Values<MDMA::MDMA_C14TCR, 30, 1, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using BWM = MDMA_MDMA_C14TCR_BWM_Values<MDMA::MDMA_C14TCR, 31, 1, ReadWriteMode, MDMAMDMA_C14TCRBase> ;
    using FieldValues = MDMA_MDMA_C14TCR_BWM_Values<MDMA::MDMA_C14TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14TCRPack  = Register<0x520003D0, 32, ReadWriteMode, MDMAMDMA_C14TCRBase, T...> ;

  struct MDMAMDMA_C14BNDTRBase {} ;

  struct MDMA_C14BNDTR : public RegisterBase<0x520003D4, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C14BNDTR_BNDT_Values<MDMA::MDMA_C14BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C14BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C14BNDTR_BRSUM_Values<MDMA::MDMA_C14BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C14BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C14BNDTR_BRDUM_Values<MDMA::MDMA_C14BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C14BNDTRBase> ;
    using BRC = MDMA_MDMA_C14BNDTR_BRC_Values<MDMA::MDMA_C14BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C14BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C14BNDTR_BRC_Values<MDMA::MDMA_C14BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14BNDTRPack  = Register<0x520003D4, 32, ReadWriteMode, MDMAMDMA_C14BNDTRBase, T...> ;

  struct MDMAMDMA_C14SARBase {} ;

  struct MDMA_C14SAR : public RegisterBase<0x520003D8, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C14SAR_SAR_Values<MDMA::MDMA_C14SAR, 0, 32, ReadWriteMode, MDMAMDMA_C14SARBase> ;
    using FieldValues = MDMA_MDMA_C14SAR_SAR_Values<MDMA::MDMA_C14SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14SARPack  = Register<0x520003D8, 32, ReadWriteMode, MDMAMDMA_C14SARBase, T...> ;

  struct MDMAMDMA_C14DARBase {} ;

  struct MDMA_C14DAR : public RegisterBase<0x520003DC, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C14DAR_DAR_Values<MDMA::MDMA_C14DAR, 0, 32, ReadWriteMode, MDMAMDMA_C14DARBase> ;
    using FieldValues = MDMA_MDMA_C14DAR_DAR_Values<MDMA::MDMA_C14DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14DARPack  = Register<0x520003DC, 32, ReadWriteMode, MDMAMDMA_C14DARBase, T...> ;

  struct MDMAMDMA_C14BRURBase {} ;

  struct MDMA_C14BRUR : public RegisterBase<0x520003E0, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C14BRUR_SUV_Values<MDMA::MDMA_C14BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C14BRURBase> ;
    using DUV = MDMA_MDMA_C14BRUR_DUV_Values<MDMA::MDMA_C14BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C14BRURBase> ;
    using FieldValues = MDMA_MDMA_C14BRUR_DUV_Values<MDMA::MDMA_C14BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14BRURPack  = Register<0x520003E0, 32, ReadWriteMode, MDMAMDMA_C14BRURBase, T...> ;

  struct MDMAMDMA_C14LARBase {} ;

  struct MDMA_C14LAR : public RegisterBase<0x520003E4, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C14LAR_LAR_Values<MDMA::MDMA_C14LAR, 0, 32, ReadWriteMode, MDMAMDMA_C14LARBase> ;
    using FieldValues = MDMA_MDMA_C14LAR_LAR_Values<MDMA::MDMA_C14LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14LARPack  = Register<0x520003E4, 32, ReadWriteMode, MDMAMDMA_C14LARBase, T...> ;

  struct MDMAMDMA_C14TBRBase {} ;

  struct MDMA_C14TBR : public RegisterBase<0x520003E8, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C14TBR_TSEL_Values<MDMA::MDMA_C14TBR, 0, 6, ReadWriteMode, MDMAMDMA_C14TBRBase> ;
    using SBUS = MDMA_MDMA_C14TBR_SBUS_Values<MDMA::MDMA_C14TBR, 16, 1, ReadWriteMode, MDMAMDMA_C14TBRBase> ;
    using DBUS = MDMA_MDMA_C14TBR_DBUS_Values<MDMA::MDMA_C14TBR, 17, 1, ReadWriteMode, MDMAMDMA_C14TBRBase> ;
    using FieldValues = MDMA_MDMA_C14TBR_DBUS_Values<MDMA::MDMA_C14TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14TBRPack  = Register<0x520003E8, 32, ReadWriteMode, MDMAMDMA_C14TBRBase, T...> ;

  struct MDMAMDMA_C14MARBase {} ;

  struct MDMA_C14MAR : public RegisterBase<0x520003F0, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C14MAR_MAR_Values<MDMA::MDMA_C14MAR, 0, 32, ReadWriteMode, MDMAMDMA_C14MARBase> ;
    using FieldValues = MDMA_MDMA_C14MAR_MAR_Values<MDMA::MDMA_C14MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14MARPack  = Register<0x520003F0, 32, ReadWriteMode, MDMAMDMA_C14MARBase, T...> ;

  struct MDMAMDMA_C14MDRBase {} ;

  struct MDMA_C14MDR : public RegisterBase<0x520003F4, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C14MDR_MDR_Values<MDMA::MDMA_C14MDR, 0, 32, ReadWriteMode, MDMAMDMA_C14MDRBase> ;
    using FieldValues = MDMA_MDMA_C14MDR_MDR_Values<MDMA::MDMA_C14MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C14MDRPack  = Register<0x520003F4, 32, ReadWriteMode, MDMAMDMA_C14MDRBase, T...> ;

  struct MDMAMDMA_C15ISRBase {} ;

  struct MDMA_C15ISR : public RegisterBase<0x52000400, 32, ReadMode>
  {
    using TEIF15 = MDMA_MDMA_C15ISR_TEIF15_Values<MDMA::MDMA_C15ISR, 0, 1, ReadMode, MDMAMDMA_C15ISRBase> ;
    using CTCIF15 = MDMA_MDMA_C15ISR_CTCIF15_Values<MDMA::MDMA_C15ISR, 1, 1, ReadMode, MDMAMDMA_C15ISRBase> ;
    using BRTIF15 = MDMA_MDMA_C15ISR_BRTIF15_Values<MDMA::MDMA_C15ISR, 2, 1, ReadMode, MDMAMDMA_C15ISRBase> ;
    using BTIF15 = MDMA_MDMA_C15ISR_BTIF15_Values<MDMA::MDMA_C15ISR, 3, 1, ReadMode, MDMAMDMA_C15ISRBase> ;
    using TCIF15 = MDMA_MDMA_C15ISR_TCIF15_Values<MDMA::MDMA_C15ISR, 4, 1, ReadMode, MDMAMDMA_C15ISRBase> ;
    using CRQA15 = MDMA_MDMA_C15ISR_CRQA15_Values<MDMA::MDMA_C15ISR, 16, 1, ReadMode, MDMAMDMA_C15ISRBase> ;
    using FieldValues = MDMA_MDMA_C15ISR_CRQA15_Values<MDMA::MDMA_C15ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15ISRPack  = Register<0x52000400, 32, ReadMode, MDMAMDMA_C15ISRBase, T...> ;

  struct MDMAMDMA_C15IFCRBase {} ;

  struct MDMA_C15IFCR : public RegisterBase<0x52000404, 32, WriteMode>
  {
    using CTEIF15 = MDMA_MDMA_C15IFCR_CTEIF15_Values<MDMA::MDMA_C15IFCR, 0, 1, WriteMode, MDMAMDMA_C15IFCRBase> ;
    using CCTCIF15 = MDMA_MDMA_C15IFCR_CCTCIF15_Values<MDMA::MDMA_C15IFCR, 1, 1, WriteMode, MDMAMDMA_C15IFCRBase> ;
    using CBRTIF15 = MDMA_MDMA_C15IFCR_CBRTIF15_Values<MDMA::MDMA_C15IFCR, 2, 1, WriteMode, MDMAMDMA_C15IFCRBase> ;
    using CBTIF15 = MDMA_MDMA_C15IFCR_CBTIF15_Values<MDMA::MDMA_C15IFCR, 3, 1, WriteMode, MDMAMDMA_C15IFCRBase> ;
    using CLTCIF15 = MDMA_MDMA_C15IFCR_CLTCIF15_Values<MDMA::MDMA_C15IFCR, 4, 1, WriteMode, MDMAMDMA_C15IFCRBase> ;
    using FieldValues = MDMA_MDMA_C15IFCR_CLTCIF15_Values<MDMA::MDMA_C15IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15IFCRPack  = Register<0x52000404, 32, WriteMode, MDMAMDMA_C15IFCRBase, T...> ;

  struct MDMAMDMA_C15ESRBase {} ;

  struct MDMA_C15ESR : public RegisterBase<0x52000408, 32, ReadMode>
  {
    using TEA = MDMA_MDMA_C15ESR_TEA_Values<MDMA::MDMA_C15ESR, 0, 7, ReadMode, MDMAMDMA_C15ESRBase> ;
    using TED = MDMA_MDMA_C15ESR_TED_Values<MDMA::MDMA_C15ESR, 7, 1, ReadMode, MDMAMDMA_C15ESRBase> ;
    using TELD = MDMA_MDMA_C15ESR_TELD_Values<MDMA::MDMA_C15ESR, 8, 1, ReadMode, MDMAMDMA_C15ESRBase> ;
    using TEMD = MDMA_MDMA_C15ESR_TEMD_Values<MDMA::MDMA_C15ESR, 9, 1, ReadMode, MDMAMDMA_C15ESRBase> ;
    using ASE = MDMA_MDMA_C15ESR_ASE_Values<MDMA::MDMA_C15ESR, 10, 1, ReadMode, MDMAMDMA_C15ESRBase> ;
    using BSE = MDMA_MDMA_C15ESR_BSE_Values<MDMA::MDMA_C15ESR, 11, 1, ReadMode, MDMAMDMA_C15ESRBase> ;
    using FieldValues = MDMA_MDMA_C15ESR_BSE_Values<MDMA::MDMA_C15ESR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15ESRPack  = Register<0x52000408, 32, ReadMode, MDMAMDMA_C15ESRBase, T...> ;

  struct MDMAMDMA_C15CRBase {} ;

  struct MDMA_C15CR : public RegisterBase<0x5200040C, 32, ReadWriteMode>
  {
    using EN = MDMA_MDMA_C15CR_EN_Values<MDMA::MDMA_C15CR, 0, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using TEIE = MDMA_MDMA_C15CR_TEIE_Values<MDMA::MDMA_C15CR, 1, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using CTCIE = MDMA_MDMA_C15CR_CTCIE_Values<MDMA::MDMA_C15CR, 2, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using BRTIE = MDMA_MDMA_C15CR_BRTIE_Values<MDMA::MDMA_C15CR, 3, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using BTIE = MDMA_MDMA_C15CR_BTIE_Values<MDMA::MDMA_C15CR, 4, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using TCIE = MDMA_MDMA_C15CR_TCIE_Values<MDMA::MDMA_C15CR, 5, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using PL = MDMA_MDMA_C15CR_PL_Values<MDMA::MDMA_C15CR, 6, 2, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using BEX = MDMA_MDMA_C15CR_BEX_Values<MDMA::MDMA_C15CR, 12, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using HEX = MDMA_MDMA_C15CR_HEX_Values<MDMA::MDMA_C15CR, 13, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using WEX = MDMA_MDMA_C15CR_WEX_Values<MDMA::MDMA_C15CR, 14, 1, ReadWriteMode, MDMAMDMA_C15CRBase> ;
    using SWRQ = MDMA_MDMA_C15CR_SWRQ_Values<MDMA::MDMA_C15CR, 16, 1, WriteMode, MDMAMDMA_C15CRBase> ;
    using FieldValues = MDMA_MDMA_C15CR_SWRQ_Values<MDMA::MDMA_C15CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15CRPack  = Register<0x5200040C, 32, ReadWriteMode, MDMAMDMA_C15CRBase, T...> ;

  struct MDMAMDMA_C15TCRBase {} ;

  struct MDMA_C15TCR : public RegisterBase<0x52000410, 32, ReadWriteMode>
  {
    using SINC = MDMA_MDMA_C15TCR_SINC_Values<MDMA::MDMA_C15TCR, 0, 2, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using DINC = MDMA_MDMA_C15TCR_DINC_Values<MDMA::MDMA_C15TCR, 2, 2, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using SSIZE = MDMA_MDMA_C15TCR_SSIZE_Values<MDMA::MDMA_C15TCR, 4, 2, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using DSIZE = MDMA_MDMA_C15TCR_DSIZE_Values<MDMA::MDMA_C15TCR, 6, 2, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using SINCOS = MDMA_MDMA_C15TCR_SINCOS_Values<MDMA::MDMA_C15TCR, 8, 2, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using DINCOS = MDMA_MDMA_C15TCR_DINCOS_Values<MDMA::MDMA_C15TCR, 10, 2, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using SBURST = MDMA_MDMA_C15TCR_SBURST_Values<MDMA::MDMA_C15TCR, 12, 3, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using DBURST = MDMA_MDMA_C15TCR_DBURST_Values<MDMA::MDMA_C15TCR, 15, 3, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using TLEN = MDMA_MDMA_C15TCR_TLEN_Values<MDMA::MDMA_C15TCR, 18, 7, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using PKE = MDMA_MDMA_C15TCR_PKE_Values<MDMA::MDMA_C15TCR, 25, 1, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using PAM = MDMA_MDMA_C15TCR_PAM_Values<MDMA::MDMA_C15TCR, 26, 2, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using TRGM = MDMA_MDMA_C15TCR_TRGM_Values<MDMA::MDMA_C15TCR, 28, 2, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using SWRM = MDMA_MDMA_C15TCR_SWRM_Values<MDMA::MDMA_C15TCR, 30, 1, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using BWM = MDMA_MDMA_C15TCR_BWM_Values<MDMA::MDMA_C15TCR, 31, 1, ReadWriteMode, MDMAMDMA_C15TCRBase> ;
    using FieldValues = MDMA_MDMA_C15TCR_BWM_Values<MDMA::MDMA_C15TCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15TCRPack  = Register<0x52000410, 32, ReadWriteMode, MDMAMDMA_C15TCRBase, T...> ;

  struct MDMAMDMA_C15BNDTRBase {} ;

  struct MDMA_C15BNDTR : public RegisterBase<0x52000414, 32, ReadWriteMode>
  {
    using BNDT = MDMA_MDMA_C15BNDTR_BNDT_Values<MDMA::MDMA_C15BNDTR, 0, 17, ReadWriteMode, MDMAMDMA_C15BNDTRBase> ;
    using BRSUM = MDMA_MDMA_C15BNDTR_BRSUM_Values<MDMA::MDMA_C15BNDTR, 18, 1, ReadWriteMode, MDMAMDMA_C15BNDTRBase> ;
    using BRDUM = MDMA_MDMA_C15BNDTR_BRDUM_Values<MDMA::MDMA_C15BNDTR, 19, 1, ReadWriteMode, MDMAMDMA_C15BNDTRBase> ;
    using BRC = MDMA_MDMA_C15BNDTR_BRC_Values<MDMA::MDMA_C15BNDTR, 20, 12, ReadWriteMode, MDMAMDMA_C15BNDTRBase> ;
    using FieldValues = MDMA_MDMA_C15BNDTR_BRC_Values<MDMA::MDMA_C15BNDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15BNDTRPack  = Register<0x52000414, 32, ReadWriteMode, MDMAMDMA_C15BNDTRBase, T...> ;

  struct MDMAMDMA_C15SARBase {} ;

  struct MDMA_C15SAR : public RegisterBase<0x52000418, 32, ReadWriteMode>
  {
    using SAR = MDMA_MDMA_C15SAR_SAR_Values<MDMA::MDMA_C15SAR, 0, 32, ReadWriteMode, MDMAMDMA_C15SARBase> ;
    using FieldValues = MDMA_MDMA_C15SAR_SAR_Values<MDMA::MDMA_C15SAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15SARPack  = Register<0x52000418, 32, ReadWriteMode, MDMAMDMA_C15SARBase, T...> ;

  struct MDMAMDMA_C15DARBase {} ;

  struct MDMA_C15DAR : public RegisterBase<0x5200041C, 32, ReadWriteMode>
  {
    using DAR = MDMA_MDMA_C15DAR_DAR_Values<MDMA::MDMA_C15DAR, 0, 32, ReadWriteMode, MDMAMDMA_C15DARBase> ;
    using FieldValues = MDMA_MDMA_C15DAR_DAR_Values<MDMA::MDMA_C15DAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15DARPack  = Register<0x5200041C, 32, ReadWriteMode, MDMAMDMA_C15DARBase, T...> ;

  struct MDMAMDMA_C15BRURBase {} ;

  struct MDMA_C15BRUR : public RegisterBase<0x52000420, 32, ReadWriteMode>
  {
    using SUV = MDMA_MDMA_C15BRUR_SUV_Values<MDMA::MDMA_C15BRUR, 0, 16, ReadWriteMode, MDMAMDMA_C15BRURBase> ;
    using DUV = MDMA_MDMA_C15BRUR_DUV_Values<MDMA::MDMA_C15BRUR, 16, 16, ReadWriteMode, MDMAMDMA_C15BRURBase> ;
    using FieldValues = MDMA_MDMA_C15BRUR_DUV_Values<MDMA::MDMA_C15BRUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15BRURPack  = Register<0x52000420, 32, ReadWriteMode, MDMAMDMA_C15BRURBase, T...> ;

  struct MDMAMDMA_C15LARBase {} ;

  struct MDMA_C15LAR : public RegisterBase<0x52000424, 32, ReadWriteMode>
  {
    using LAR = MDMA_MDMA_C15LAR_LAR_Values<MDMA::MDMA_C15LAR, 0, 32, ReadWriteMode, MDMAMDMA_C15LARBase> ;
    using FieldValues = MDMA_MDMA_C15LAR_LAR_Values<MDMA::MDMA_C15LAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15LARPack  = Register<0x52000424, 32, ReadWriteMode, MDMAMDMA_C15LARBase, T...> ;

  struct MDMAMDMA_C15TBRBase {} ;

  struct MDMA_C15TBR : public RegisterBase<0x52000428, 32, ReadWriteMode>
  {
    using TSEL = MDMA_MDMA_C15TBR_TSEL_Values<MDMA::MDMA_C15TBR, 0, 6, ReadWriteMode, MDMAMDMA_C15TBRBase> ;
    using SBUS = MDMA_MDMA_C15TBR_SBUS_Values<MDMA::MDMA_C15TBR, 16, 1, ReadWriteMode, MDMAMDMA_C15TBRBase> ;
    using DBUS = MDMA_MDMA_C15TBR_DBUS_Values<MDMA::MDMA_C15TBR, 17, 1, ReadWriteMode, MDMAMDMA_C15TBRBase> ;
    using FieldValues = MDMA_MDMA_C15TBR_DBUS_Values<MDMA::MDMA_C15TBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15TBRPack  = Register<0x52000428, 32, ReadWriteMode, MDMAMDMA_C15TBRBase, T...> ;

  struct MDMAMDMA_C15MARBase {} ;

  struct MDMA_C15MAR : public RegisterBase<0x52000430, 32, ReadWriteMode>
  {
    using MAR = MDMA_MDMA_C15MAR_MAR_Values<MDMA::MDMA_C15MAR, 0, 32, ReadWriteMode, MDMAMDMA_C15MARBase> ;
    using FieldValues = MDMA_MDMA_C15MAR_MAR_Values<MDMA::MDMA_C15MAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15MARPack  = Register<0x52000430, 32, ReadWriteMode, MDMAMDMA_C15MARBase, T...> ;

  struct MDMAMDMA_C15MDRBase {} ;

  struct MDMA_C15MDR : public RegisterBase<0x52000434, 32, ReadWriteMode>
  {
    using MDR = MDMA_MDMA_C15MDR_MDR_Values<MDMA::MDMA_C15MDR, 0, 32, ReadWriteMode, MDMAMDMA_C15MDRBase> ;
    using FieldValues = MDMA_MDMA_C15MDR_MDR_Values<MDMA::MDMA_C15MDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDMA_C15MDRPack  = Register<0x52000434, 32, ReadWriteMode, MDMAMDMA_C15MDRBase, T...> ;

} ;

#endif //#if !defined(MDMAREGISTERS_HPP)
