/*******************************************************************************
* Filename      : sai2registers.hpp
*
* Details       : SAI. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(SAI2REGISTERS_HPP)
#define SAI2REGISTERS_HPP

#include "sai2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SAI2
{
  struct SAI2SAI_GCRBase {} ;

  struct SAI_GCR : public RegisterBase<0x40015C00, 32, ReadWriteMode>
  {
    using SYNCOUT = SAI2_SAI_GCR_SYNCOUT_Values<SAI2::SAI_GCR, 4, 2, ReadWriteMode, SAI2SAI_GCRBase> ;
    using SYNCIN = SAI2_SAI_GCR_SYNCIN_Values<SAI2::SAI_GCR, 0, 2, ReadWriteMode, SAI2SAI_GCRBase> ;
    using FieldValues = SAI2_SAI_GCR_SYNCIN_Values<SAI2::SAI_GCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_GCRPack  = Register<0x40015C00, 32, ReadWriteMode, SAI2SAI_GCRBase, T...> ;

  struct SAI2SAI_ACR1Base {} ;

  struct SAI_ACR1 : public RegisterBase<0x40015C04, 32, ReadWriteMode>
  {
    using MODE = SAI2_SAI_ACR1_MODE_Values<SAI2::SAI_ACR1, 0, 2, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using PRTCFG = SAI2_SAI_ACR1_PRTCFG_Values<SAI2::SAI_ACR1, 2, 2, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using DS = SAI2_SAI_ACR1_DS_Values<SAI2::SAI_ACR1, 5, 3, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using LSBFIRST = SAI2_SAI_ACR1_LSBFIRST_Values<SAI2::SAI_ACR1, 8, 1, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using CKSTR = SAI2_SAI_ACR1_CKSTR_Values<SAI2::SAI_ACR1, 9, 1, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using SYNCEN = SAI2_SAI_ACR1_SYNCEN_Values<SAI2::SAI_ACR1, 10, 2, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using MONO = SAI2_SAI_ACR1_MONO_Values<SAI2::SAI_ACR1, 12, 1, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using OUTDRIV = SAI2_SAI_ACR1_OUTDRIV_Values<SAI2::SAI_ACR1, 13, 1, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using SAIXEN = SAI2_SAI_ACR1_SAIXEN_Values<SAI2::SAI_ACR1, 16, 1, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using DMAEN = SAI2_SAI_ACR1_DMAEN_Values<SAI2::SAI_ACR1, 17, 1, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using NOMCK = SAI2_SAI_ACR1_NOMCK_Values<SAI2::SAI_ACR1, 19, 1, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using MCKDIV = SAI2_SAI_ACR1_MCKDIV_Values<SAI2::SAI_ACR1, 20, 4, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using OSR = SAI2_SAI_ACR1_OSR_Values<SAI2::SAI_ACR1, 26, 1, ReadWriteMode, SAI2SAI_ACR1Base> ;
    using FieldValues = SAI2_SAI_ACR1_OSR_Values<SAI2::SAI_ACR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACR1Pack  = Register<0x40015C04, 32, ReadWriteMode, SAI2SAI_ACR1Base, T...> ;

  struct SAI2SAI_ACR2Base {} ;

  struct SAI_ACR2 : public RegisterBase<0x40015C08, 32, ReadWriteMode>
  {
    using FTH = SAI2_SAI_ACR2_FTH_Values<SAI2::SAI_ACR2, 0, 3, ReadWriteMode, SAI2SAI_ACR2Base> ;
    using FFLUSH = SAI2_SAI_ACR2_FFLUSH_Values<SAI2::SAI_ACR2, 3, 1, WriteMode, SAI2SAI_ACR2Base> ;
    using TRIS = SAI2_SAI_ACR2_TRIS_Values<SAI2::SAI_ACR2, 4, 1, ReadWriteMode, SAI2SAI_ACR2Base> ;
    using MUTE = SAI2_SAI_ACR2_MUTE_Values<SAI2::SAI_ACR2, 5, 1, ReadWriteMode, SAI2SAI_ACR2Base> ;
    using MUTEVAL = SAI2_SAI_ACR2_MUTEVAL_Values<SAI2::SAI_ACR2, 6, 1, ReadWriteMode, SAI2SAI_ACR2Base> ;
    using MUTECNT = SAI2_SAI_ACR2_MUTECNT_Values<SAI2::SAI_ACR2, 7, 6, ReadWriteMode, SAI2SAI_ACR2Base> ;
    using CPL = SAI2_SAI_ACR2_CPL_Values<SAI2::SAI_ACR2, 13, 1, ReadWriteMode, SAI2SAI_ACR2Base> ;
    using COMP = SAI2_SAI_ACR2_COMP_Values<SAI2::SAI_ACR2, 14, 2, ReadWriteMode, SAI2SAI_ACR2Base> ;
    using FieldValues = SAI2_SAI_ACR2_COMP_Values<SAI2::SAI_ACR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACR2Pack  = Register<0x40015C08, 32, ReadWriteMode, SAI2SAI_ACR2Base, T...> ;

  struct SAI2SAI_AFRCRBase {} ;

  struct SAI_AFRCR : public RegisterBase<0x40015C0C, 32, ReadWriteMode>
  {
    using FRL = SAI2_SAI_AFRCR_FRL_Values<SAI2::SAI_AFRCR, 0, 8, ReadWriteMode, SAI2SAI_AFRCRBase> ;
    using FSALL = SAI2_SAI_AFRCR_FSALL_Values<SAI2::SAI_AFRCR, 8, 7, ReadWriteMode, SAI2SAI_AFRCRBase> ;
    using FSDEF = SAI2_SAI_AFRCR_FSDEF_Values<SAI2::SAI_AFRCR, 16, 1, ReadMode, SAI2SAI_AFRCRBase> ;
    using FSPOL = SAI2_SAI_AFRCR_FSPOL_Values<SAI2::SAI_AFRCR, 17, 1, ReadWriteMode, SAI2SAI_AFRCRBase> ;
    using FSOFF = SAI2_SAI_AFRCR_FSOFF_Values<SAI2::SAI_AFRCR, 18, 1, ReadWriteMode, SAI2SAI_AFRCRBase> ;
    using FieldValues = SAI2_SAI_AFRCR_FSOFF_Values<SAI2::SAI_AFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_AFRCRPack  = Register<0x40015C0C, 32, ReadWriteMode, SAI2SAI_AFRCRBase, T...> ;

  struct SAI2SAI_ASLOTRBase {} ;

  struct SAI_ASLOTR : public RegisterBase<0x40015C10, 32, ReadWriteMode>
  {
    using FBOFF = SAI2_SAI_ASLOTR_FBOFF_Values<SAI2::SAI_ASLOTR, 0, 5, ReadWriteMode, SAI2SAI_ASLOTRBase> ;
    using SLOTSZ = SAI2_SAI_ASLOTR_SLOTSZ_Values<SAI2::SAI_ASLOTR, 6, 2, ReadWriteMode, SAI2SAI_ASLOTRBase> ;
    using NBSLOT = SAI2_SAI_ASLOTR_NBSLOT_Values<SAI2::SAI_ASLOTR, 8, 4, ReadWriteMode, SAI2SAI_ASLOTRBase> ;
    using SLOTEN = SAI2_SAI_ASLOTR_SLOTEN_Values<SAI2::SAI_ASLOTR, 16, 16, ReadWriteMode, SAI2SAI_ASLOTRBase> ;
    using FieldValues = SAI2_SAI_ASLOTR_SLOTEN_Values<SAI2::SAI_ASLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ASLOTRPack  = Register<0x40015C10, 32, ReadWriteMode, SAI2SAI_ASLOTRBase, T...> ;

  struct SAI2SAI_AIMBase {} ;

  struct SAI_AIM : public RegisterBase<0x40015C14, 32, ReadWriteMode>
  {
    using OVRUDRIE = SAI2_SAI_AIM_OVRUDRIE_Values<SAI2::SAI_AIM, 0, 1, ReadWriteMode, SAI2SAI_AIMBase> ;
    using MUTEDETIE = SAI2_SAI_AIM_MUTEDETIE_Values<SAI2::SAI_AIM, 1, 1, ReadWriteMode, SAI2SAI_AIMBase> ;
    using WCKCFGIE = SAI2_SAI_AIM_WCKCFGIE_Values<SAI2::SAI_AIM, 2, 1, ReadWriteMode, SAI2SAI_AIMBase> ;
    using FREQIE = SAI2_SAI_AIM_FREQIE_Values<SAI2::SAI_AIM, 3, 1, ReadWriteMode, SAI2SAI_AIMBase> ;
    using CNRDYIE = SAI2_SAI_AIM_CNRDYIE_Values<SAI2::SAI_AIM, 4, 1, ReadWriteMode, SAI2SAI_AIMBase> ;
    using AFSDETIE = SAI2_SAI_AIM_AFSDETIE_Values<SAI2::SAI_AIM, 5, 1, ReadWriteMode, SAI2SAI_AIMBase> ;
    using LFSDETIE = SAI2_SAI_AIM_LFSDETIE_Values<SAI2::SAI_AIM, 6, 1, ReadWriteMode, SAI2SAI_AIMBase> ;
    using FieldValues = SAI2_SAI_AIM_LFSDETIE_Values<SAI2::SAI_AIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_AIMPack  = Register<0x40015C14, 32, ReadWriteMode, SAI2SAI_AIMBase, T...> ;

  struct SAI2SAI_ASRBase {} ;

  struct SAI_ASR : public RegisterBase<0x40015C18, 32, ReadMode>
  {
    using OVRUDR = SAI2_SAI_ASR_OVRUDR_Values<SAI2::SAI_ASR, 0, 1, ReadMode, SAI2SAI_ASRBase> ;
    using MUTEDET = SAI2_SAI_ASR_MUTEDET_Values<SAI2::SAI_ASR, 1, 1, ReadMode, SAI2SAI_ASRBase> ;
    using WCKCFG = SAI2_SAI_ASR_WCKCFG_Values<SAI2::SAI_ASR, 2, 1, ReadMode, SAI2SAI_ASRBase> ;
    using FREQ = SAI2_SAI_ASR_FREQ_Values<SAI2::SAI_ASR, 3, 1, ReadMode, SAI2SAI_ASRBase> ;
    using CNRDY = SAI2_SAI_ASR_CNRDY_Values<SAI2::SAI_ASR, 4, 1, ReadMode, SAI2SAI_ASRBase> ;
    using AFSDET = SAI2_SAI_ASR_AFSDET_Values<SAI2::SAI_ASR, 5, 1, ReadMode, SAI2SAI_ASRBase> ;
    using LFSDET = SAI2_SAI_ASR_LFSDET_Values<SAI2::SAI_ASR, 6, 1, ReadMode, SAI2SAI_ASRBase> ;
    using FLVL = SAI2_SAI_ASR_FLVL_Values<SAI2::SAI_ASR, 16, 3, ReadMode, SAI2SAI_ASRBase> ;
    using FieldValues = SAI2_SAI_ASR_FLVL_Values<SAI2::SAI_ASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ASRPack  = Register<0x40015C18, 32, ReadMode, SAI2SAI_ASRBase, T...> ;

  struct SAI2SAI_ACLRFRBase {} ;

  struct SAI_ACLRFR : public RegisterBase<0x40015C1C, 32, WriteMode>
  {
    using COVRUDR = SAI2_SAI_ACLRFR_COVRUDR_Values<SAI2::SAI_ACLRFR, 0, 1, WriteMode, SAI2SAI_ACLRFRBase> ;
    using CMUTEDET = SAI2_SAI_ACLRFR_CMUTEDET_Values<SAI2::SAI_ACLRFR, 1, 1, WriteMode, SAI2SAI_ACLRFRBase> ;
    using CWCKCFG = SAI2_SAI_ACLRFR_CWCKCFG_Values<SAI2::SAI_ACLRFR, 2, 1, WriteMode, SAI2SAI_ACLRFRBase> ;
    using CCNRDY = SAI2_SAI_ACLRFR_CCNRDY_Values<SAI2::SAI_ACLRFR, 4, 1, WriteMode, SAI2SAI_ACLRFRBase> ;
    using CAFSDET = SAI2_SAI_ACLRFR_CAFSDET_Values<SAI2::SAI_ACLRFR, 5, 1, WriteMode, SAI2SAI_ACLRFRBase> ;
    using CLFSDET = SAI2_SAI_ACLRFR_CLFSDET_Values<SAI2::SAI_ACLRFR, 6, 1, WriteMode, SAI2SAI_ACLRFRBase> ;
    using FieldValues = SAI2_SAI_ACLRFR_CLFSDET_Values<SAI2::SAI_ACLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACLRFRPack  = Register<0x40015C1C, 32, WriteMode, SAI2SAI_ACLRFRBase, T...> ;

  struct SAI2SAI_ADRBase {} ;

  struct SAI_ADR : public RegisterBase<0x40015C20, 32, ReadWriteMode>
  {
    using DATA = SAI2_SAI_ADR_DATA_Values<SAI2::SAI_ADR, 0, 32, ReadWriteMode, SAI2SAI_ADRBase> ;
    using FieldValues = SAI2_SAI_ADR_DATA_Values<SAI2::SAI_ADR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ADRPack  = Register<0x40015C20, 32, ReadWriteMode, SAI2SAI_ADRBase, T...> ;

  struct SAI2SAI_BCR1Base {} ;

  struct SAI_BCR1 : public RegisterBase<0x40015C24, 32, ReadWriteMode>
  {
    using MODE = SAI2_SAI_BCR1_MODE_Values<SAI2::SAI_BCR1, 0, 2, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using PRTCFG = SAI2_SAI_BCR1_PRTCFG_Values<SAI2::SAI_BCR1, 2, 2, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using DS = SAI2_SAI_BCR1_DS_Values<SAI2::SAI_BCR1, 5, 3, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using LSBFIRST = SAI2_SAI_BCR1_LSBFIRST_Values<SAI2::SAI_BCR1, 8, 1, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using CKSTR = SAI2_SAI_BCR1_CKSTR_Values<SAI2::SAI_BCR1, 9, 1, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using SYNCEN = SAI2_SAI_BCR1_SYNCEN_Values<SAI2::SAI_BCR1, 10, 2, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using MONO = SAI2_SAI_BCR1_MONO_Values<SAI2::SAI_BCR1, 12, 1, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using OUTDRIV = SAI2_SAI_BCR1_OUTDRIV_Values<SAI2::SAI_BCR1, 13, 1, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using SAIXEN = SAI2_SAI_BCR1_SAIXEN_Values<SAI2::SAI_BCR1, 16, 1, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using DMAEN = SAI2_SAI_BCR1_DMAEN_Values<SAI2::SAI_BCR1, 17, 1, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using NOMCK = SAI2_SAI_BCR1_NOMCK_Values<SAI2::SAI_BCR1, 19, 1, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using MCKDIV = SAI2_SAI_BCR1_MCKDIV_Values<SAI2::SAI_BCR1, 20, 4, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using OSR = SAI2_SAI_BCR1_OSR_Values<SAI2::SAI_BCR1, 26, 1, ReadWriteMode, SAI2SAI_BCR1Base> ;
    using FieldValues = SAI2_SAI_BCR1_OSR_Values<SAI2::SAI_BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCR1Pack  = Register<0x40015C24, 32, ReadWriteMode, SAI2SAI_BCR1Base, T...> ;

  struct SAI2SAI_BCR2Base {} ;

  struct SAI_BCR2 : public RegisterBase<0x40015C28, 32, ReadWriteMode>
  {
    using FTH = SAI2_SAI_BCR2_FTH_Values<SAI2::SAI_BCR2, 0, 3, ReadWriteMode, SAI2SAI_BCR2Base> ;
    using FFLUSH = SAI2_SAI_BCR2_FFLUSH_Values<SAI2::SAI_BCR2, 3, 1, WriteMode, SAI2SAI_BCR2Base> ;
    using TRIS = SAI2_SAI_BCR2_TRIS_Values<SAI2::SAI_BCR2, 4, 1, ReadWriteMode, SAI2SAI_BCR2Base> ;
    using MUTE = SAI2_SAI_BCR2_MUTE_Values<SAI2::SAI_BCR2, 5, 1, ReadWriteMode, SAI2SAI_BCR2Base> ;
    using MUTEVAL = SAI2_SAI_BCR2_MUTEVAL_Values<SAI2::SAI_BCR2, 6, 1, ReadWriteMode, SAI2SAI_BCR2Base> ;
    using MUTECNT = SAI2_SAI_BCR2_MUTECNT_Values<SAI2::SAI_BCR2, 7, 6, ReadWriteMode, SAI2SAI_BCR2Base> ;
    using CPL = SAI2_SAI_BCR2_CPL_Values<SAI2::SAI_BCR2, 13, 1, ReadWriteMode, SAI2SAI_BCR2Base> ;
    using COMP = SAI2_SAI_BCR2_COMP_Values<SAI2::SAI_BCR2, 14, 2, ReadWriteMode, SAI2SAI_BCR2Base> ;
    using FieldValues = SAI2_SAI_BCR2_COMP_Values<SAI2::SAI_BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCR2Pack  = Register<0x40015C28, 32, ReadWriteMode, SAI2SAI_BCR2Base, T...> ;

  struct SAI2SAI_BFRCRBase {} ;

  struct SAI_BFRCR : public RegisterBase<0x40015C2C, 32, ReadWriteMode>
  {
    using FRL = SAI2_SAI_BFRCR_FRL_Values<SAI2::SAI_BFRCR, 0, 8, ReadWriteMode, SAI2SAI_BFRCRBase> ;
    using FSALL = SAI2_SAI_BFRCR_FSALL_Values<SAI2::SAI_BFRCR, 8, 7, ReadWriteMode, SAI2SAI_BFRCRBase> ;
    using FSDEF = SAI2_SAI_BFRCR_FSDEF_Values<SAI2::SAI_BFRCR, 16, 1, ReadMode, SAI2SAI_BFRCRBase> ;
    using FSPOL = SAI2_SAI_BFRCR_FSPOL_Values<SAI2::SAI_BFRCR, 17, 1, ReadWriteMode, SAI2SAI_BFRCRBase> ;
    using FSOFF = SAI2_SAI_BFRCR_FSOFF_Values<SAI2::SAI_BFRCR, 18, 1, ReadWriteMode, SAI2SAI_BFRCRBase> ;
    using FieldValues = SAI2_SAI_BFRCR_FSOFF_Values<SAI2::SAI_BFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BFRCRPack  = Register<0x40015C2C, 32, ReadWriteMode, SAI2SAI_BFRCRBase, T...> ;

  struct SAI2SAI_BSLOTRBase {} ;

  struct SAI_BSLOTR : public RegisterBase<0x40015C30, 32, ReadWriteMode>
  {
    using FBOFF = SAI2_SAI_BSLOTR_FBOFF_Values<SAI2::SAI_BSLOTR, 0, 5, ReadWriteMode, SAI2SAI_BSLOTRBase> ;
    using SLOTSZ = SAI2_SAI_BSLOTR_SLOTSZ_Values<SAI2::SAI_BSLOTR, 6, 2, ReadWriteMode, SAI2SAI_BSLOTRBase> ;
    using NBSLOT = SAI2_SAI_BSLOTR_NBSLOT_Values<SAI2::SAI_BSLOTR, 8, 4, ReadWriteMode, SAI2SAI_BSLOTRBase> ;
    using SLOTEN = SAI2_SAI_BSLOTR_SLOTEN_Values<SAI2::SAI_BSLOTR, 16, 16, ReadWriteMode, SAI2SAI_BSLOTRBase> ;
    using FieldValues = SAI2_SAI_BSLOTR_SLOTEN_Values<SAI2::SAI_BSLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BSLOTRPack  = Register<0x40015C30, 32, ReadWriteMode, SAI2SAI_BSLOTRBase, T...> ;

  struct SAI2SAI_BIMBase {} ;

  struct SAI_BIM : public RegisterBase<0x40015C34, 32, ReadWriteMode>
  {
    using OVRUDRIE = SAI2_SAI_BIM_OVRUDRIE_Values<SAI2::SAI_BIM, 0, 1, ReadWriteMode, SAI2SAI_BIMBase> ;
    using MUTEDETIE = SAI2_SAI_BIM_MUTEDETIE_Values<SAI2::SAI_BIM, 1, 1, ReadWriteMode, SAI2SAI_BIMBase> ;
    using WCKCFGIE = SAI2_SAI_BIM_WCKCFGIE_Values<SAI2::SAI_BIM, 2, 1, ReadWriteMode, SAI2SAI_BIMBase> ;
    using FREQIE = SAI2_SAI_BIM_FREQIE_Values<SAI2::SAI_BIM, 3, 1, ReadWriteMode, SAI2SAI_BIMBase> ;
    using CNRDYIE = SAI2_SAI_BIM_CNRDYIE_Values<SAI2::SAI_BIM, 4, 1, ReadWriteMode, SAI2SAI_BIMBase> ;
    using AFSDETIE = SAI2_SAI_BIM_AFSDETIE_Values<SAI2::SAI_BIM, 5, 1, ReadWriteMode, SAI2SAI_BIMBase> ;
    using LFSDETIE = SAI2_SAI_BIM_LFSDETIE_Values<SAI2::SAI_BIM, 6, 1, ReadWriteMode, SAI2SAI_BIMBase> ;
    using FieldValues = SAI2_SAI_BIM_LFSDETIE_Values<SAI2::SAI_BIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BIMPack  = Register<0x40015C34, 32, ReadWriteMode, SAI2SAI_BIMBase, T...> ;

  struct SAI2SAI_BSRBase {} ;

  struct SAI_BSR : public RegisterBase<0x40015C38, 32, ReadMode>
  {
    using OVRUDR = SAI2_SAI_BSR_OVRUDR_Values<SAI2::SAI_BSR, 0, 1, ReadMode, SAI2SAI_BSRBase> ;
    using MUTEDET = SAI2_SAI_BSR_MUTEDET_Values<SAI2::SAI_BSR, 1, 1, ReadMode, SAI2SAI_BSRBase> ;
    using WCKCFG = SAI2_SAI_BSR_WCKCFG_Values<SAI2::SAI_BSR, 2, 1, ReadMode, SAI2SAI_BSRBase> ;
    using FREQ = SAI2_SAI_BSR_FREQ_Values<SAI2::SAI_BSR, 3, 1, ReadMode, SAI2SAI_BSRBase> ;
    using CNRDY = SAI2_SAI_BSR_CNRDY_Values<SAI2::SAI_BSR, 4, 1, ReadMode, SAI2SAI_BSRBase> ;
    using AFSDET = SAI2_SAI_BSR_AFSDET_Values<SAI2::SAI_BSR, 5, 1, ReadMode, SAI2SAI_BSRBase> ;
    using LFSDET = SAI2_SAI_BSR_LFSDET_Values<SAI2::SAI_BSR, 6, 1, ReadMode, SAI2SAI_BSRBase> ;
    using FLVL = SAI2_SAI_BSR_FLVL_Values<SAI2::SAI_BSR, 16, 3, ReadMode, SAI2SAI_BSRBase> ;
    using FieldValues = SAI2_SAI_BSR_FLVL_Values<SAI2::SAI_BSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BSRPack  = Register<0x40015C38, 32, ReadMode, SAI2SAI_BSRBase, T...> ;

  struct SAI2SAI_BCLRFRBase {} ;

  struct SAI_BCLRFR : public RegisterBase<0x40015C3C, 32, WriteMode>
  {
    using COVRUDR = SAI2_SAI_BCLRFR_COVRUDR_Values<SAI2::SAI_BCLRFR, 0, 1, WriteMode, SAI2SAI_BCLRFRBase> ;
    using CMUTEDET = SAI2_SAI_BCLRFR_CMUTEDET_Values<SAI2::SAI_BCLRFR, 1, 1, WriteMode, SAI2SAI_BCLRFRBase> ;
    using CWCKCFG = SAI2_SAI_BCLRFR_CWCKCFG_Values<SAI2::SAI_BCLRFR, 2, 1, WriteMode, SAI2SAI_BCLRFRBase> ;
    using CCNRDY = SAI2_SAI_BCLRFR_CCNRDY_Values<SAI2::SAI_BCLRFR, 4, 1, WriteMode, SAI2SAI_BCLRFRBase> ;
    using CAFSDET = SAI2_SAI_BCLRFR_CAFSDET_Values<SAI2::SAI_BCLRFR, 5, 1, WriteMode, SAI2SAI_BCLRFRBase> ;
    using CLFSDET = SAI2_SAI_BCLRFR_CLFSDET_Values<SAI2::SAI_BCLRFR, 6, 1, WriteMode, SAI2SAI_BCLRFRBase> ;
    using FieldValues = SAI2_SAI_BCLRFR_CLFSDET_Values<SAI2::SAI_BCLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCLRFRPack  = Register<0x40015C3C, 32, WriteMode, SAI2SAI_BCLRFRBase, T...> ;

  struct SAI2SAI_BDRBase {} ;

  struct SAI_BDR : public RegisterBase<0x40015C40, 32, ReadWriteMode>
  {
    using DATA = SAI2_SAI_BDR_DATA_Values<SAI2::SAI_BDR, 0, 32, ReadWriteMode, SAI2SAI_BDRBase> ;
    using FieldValues = SAI2_SAI_BDR_DATA_Values<SAI2::SAI_BDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BDRPack  = Register<0x40015C40, 32, ReadWriteMode, SAI2SAI_BDRBase, T...> ;

  struct SAI2SAI_PDMCRBase {} ;

  struct SAI_PDMCR : public RegisterBase<0x40015C44, 32, ReadWriteMode>
  {
    using PDMEN = SAI2_SAI_PDMCR_PDMEN_Values<SAI2::SAI_PDMCR, 0, 1, ReadWriteMode, SAI2SAI_PDMCRBase> ;
    using MICNBR = SAI2_SAI_PDMCR_MICNBR_Values<SAI2::SAI_PDMCR, 4, 2, ReadWriteMode, SAI2SAI_PDMCRBase> ;
    using CKEN1 = SAI2_SAI_PDMCR_CKEN1_Values<SAI2::SAI_PDMCR, 8, 1, ReadWriteMode, SAI2SAI_PDMCRBase> ;
    using CKEN2 = SAI2_SAI_PDMCR_CKEN2_Values<SAI2::SAI_PDMCR, 9, 1, ReadWriteMode, SAI2SAI_PDMCRBase> ;
    using CKEN3 = SAI2_SAI_PDMCR_CKEN3_Values<SAI2::SAI_PDMCR, 10, 1, ReadWriteMode, SAI2SAI_PDMCRBase> ;
    using CKEN4 = SAI2_SAI_PDMCR_CKEN4_Values<SAI2::SAI_PDMCR, 11, 1, ReadWriteMode, SAI2SAI_PDMCRBase> ;
    using FieldValues = SAI2_SAI_PDMCR_CKEN4_Values<SAI2::SAI_PDMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_PDMCRPack  = Register<0x40015C44, 32, ReadWriteMode, SAI2SAI_PDMCRBase, T...> ;

  struct SAI2SAI_PDMDLYBase {} ;

  struct SAI_PDMDLY : public RegisterBase<0x40015C48, 32, ReadWriteMode>
  {
    using DLYM1L = SAI2_SAI_PDMDLY_DLYM1L_Values<SAI2::SAI_PDMDLY, 0, 3, ReadWriteMode, SAI2SAI_PDMDLYBase> ;
    using DLYM1R = SAI2_SAI_PDMDLY_DLYM1R_Values<SAI2::SAI_PDMDLY, 4, 3, ReadWriteMode, SAI2SAI_PDMDLYBase> ;
    using DLYM2L = SAI2_SAI_PDMDLY_DLYM2L_Values<SAI2::SAI_PDMDLY, 8, 3, ReadWriteMode, SAI2SAI_PDMDLYBase> ;
    using DLYM2R = SAI2_SAI_PDMDLY_DLYM2R_Values<SAI2::SAI_PDMDLY, 12, 3, ReadWriteMode, SAI2SAI_PDMDLYBase> ;
    using DLYM3L = SAI2_SAI_PDMDLY_DLYM3L_Values<SAI2::SAI_PDMDLY, 16, 3, ReadWriteMode, SAI2SAI_PDMDLYBase> ;
    using DLYM3R = SAI2_SAI_PDMDLY_DLYM3R_Values<SAI2::SAI_PDMDLY, 20, 3, ReadWriteMode, SAI2SAI_PDMDLYBase> ;
    using DLYM4L = SAI2_SAI_PDMDLY_DLYM4L_Values<SAI2::SAI_PDMDLY, 24, 3, ReadWriteMode, SAI2SAI_PDMDLYBase> ;
    using DLYM4R = SAI2_SAI_PDMDLY_DLYM4R_Values<SAI2::SAI_PDMDLY, 28, 3, ReadWriteMode, SAI2SAI_PDMDLYBase> ;
    using FieldValues = SAI2_SAI_PDMDLY_DLYM4R_Values<SAI2::SAI_PDMDLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_PDMDLYPack  = Register<0x40015C48, 32, ReadWriteMode, SAI2SAI_PDMDLYBase, T...> ;

} ;

#endif //#if !defined(SAI2REGISTERS_HPP)
