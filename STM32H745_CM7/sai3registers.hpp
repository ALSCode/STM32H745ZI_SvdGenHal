/*******************************************************************************
* Filename      : sai3registers.hpp
*
* Details       : SAI. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(SAI3REGISTERS_HPP)
#define SAI3REGISTERS_HPP

#include "sai3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SAI3
{
  struct SAI3SAI_GCRBase {} ;

  struct SAI_GCR : public RegisterBase<0x40016000, 32, ReadWriteMode>
  {
    using SYNCOUT = SAI3_SAI_GCR_SYNCOUT_Values<SAI3::SAI_GCR, 4, 2, ReadWriteMode, SAI3SAI_GCRBase> ;
    using SYNCIN = SAI3_SAI_GCR_SYNCIN_Values<SAI3::SAI_GCR, 0, 2, ReadWriteMode, SAI3SAI_GCRBase> ;
    using FieldValues = SAI3_SAI_GCR_SYNCIN_Values<SAI3::SAI_GCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_GCRPack  = Register<0x40016000, 32, ReadWriteMode, SAI3SAI_GCRBase, T...> ;

  struct SAI3SAI_ACR1Base {} ;

  struct SAI_ACR1 : public RegisterBase<0x40016004, 32, ReadWriteMode>
  {
    using MODE = SAI3_SAI_ACR1_MODE_Values<SAI3::SAI_ACR1, 0, 2, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using PRTCFG = SAI3_SAI_ACR1_PRTCFG_Values<SAI3::SAI_ACR1, 2, 2, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using DS = SAI3_SAI_ACR1_DS_Values<SAI3::SAI_ACR1, 5, 3, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using LSBFIRST = SAI3_SAI_ACR1_LSBFIRST_Values<SAI3::SAI_ACR1, 8, 1, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using CKSTR = SAI3_SAI_ACR1_CKSTR_Values<SAI3::SAI_ACR1, 9, 1, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using SYNCEN = SAI3_SAI_ACR1_SYNCEN_Values<SAI3::SAI_ACR1, 10, 2, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using MONO = SAI3_SAI_ACR1_MONO_Values<SAI3::SAI_ACR1, 12, 1, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using OUTDRIV = SAI3_SAI_ACR1_OUTDRIV_Values<SAI3::SAI_ACR1, 13, 1, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using SAIXEN = SAI3_SAI_ACR1_SAIXEN_Values<SAI3::SAI_ACR1, 16, 1, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using DMAEN = SAI3_SAI_ACR1_DMAEN_Values<SAI3::SAI_ACR1, 17, 1, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using NOMCK = SAI3_SAI_ACR1_NOMCK_Values<SAI3::SAI_ACR1, 19, 1, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using MCKDIV = SAI3_SAI_ACR1_MCKDIV_Values<SAI3::SAI_ACR1, 20, 4, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using OSR = SAI3_SAI_ACR1_OSR_Values<SAI3::SAI_ACR1, 26, 1, ReadWriteMode, SAI3SAI_ACR1Base> ;
    using FieldValues = SAI3_SAI_ACR1_OSR_Values<SAI3::SAI_ACR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACR1Pack  = Register<0x40016004, 32, ReadWriteMode, SAI3SAI_ACR1Base, T...> ;

  struct SAI3SAI_ACR2Base {} ;

  struct SAI_ACR2 : public RegisterBase<0x40016008, 32, ReadWriteMode>
  {
    using FTH = SAI3_SAI_ACR2_FTH_Values<SAI3::SAI_ACR2, 0, 3, ReadWriteMode, SAI3SAI_ACR2Base> ;
    using FFLUSH = SAI3_SAI_ACR2_FFLUSH_Values<SAI3::SAI_ACR2, 3, 1, WriteMode, SAI3SAI_ACR2Base> ;
    using TRIS = SAI3_SAI_ACR2_TRIS_Values<SAI3::SAI_ACR2, 4, 1, ReadWriteMode, SAI3SAI_ACR2Base> ;
    using MUTE = SAI3_SAI_ACR2_MUTE_Values<SAI3::SAI_ACR2, 5, 1, ReadWriteMode, SAI3SAI_ACR2Base> ;
    using MUTEVAL = SAI3_SAI_ACR2_MUTEVAL_Values<SAI3::SAI_ACR2, 6, 1, ReadWriteMode, SAI3SAI_ACR2Base> ;
    using MUTECNT = SAI3_SAI_ACR2_MUTECNT_Values<SAI3::SAI_ACR2, 7, 6, ReadWriteMode, SAI3SAI_ACR2Base> ;
    using CPL = SAI3_SAI_ACR2_CPL_Values<SAI3::SAI_ACR2, 13, 1, ReadWriteMode, SAI3SAI_ACR2Base> ;
    using COMP = SAI3_SAI_ACR2_COMP_Values<SAI3::SAI_ACR2, 14, 2, ReadWriteMode, SAI3SAI_ACR2Base> ;
    using FieldValues = SAI3_SAI_ACR2_COMP_Values<SAI3::SAI_ACR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACR2Pack  = Register<0x40016008, 32, ReadWriteMode, SAI3SAI_ACR2Base, T...> ;

  struct SAI3SAI_AFRCRBase {} ;

  struct SAI_AFRCR : public RegisterBase<0x4001600C, 32, ReadWriteMode>
  {
    using FRL = SAI3_SAI_AFRCR_FRL_Values<SAI3::SAI_AFRCR, 0, 8, ReadWriteMode, SAI3SAI_AFRCRBase> ;
    using FSALL = SAI3_SAI_AFRCR_FSALL_Values<SAI3::SAI_AFRCR, 8, 7, ReadWriteMode, SAI3SAI_AFRCRBase> ;
    using FSDEF = SAI3_SAI_AFRCR_FSDEF_Values<SAI3::SAI_AFRCR, 16, 1, ReadMode, SAI3SAI_AFRCRBase> ;
    using FSPOL = SAI3_SAI_AFRCR_FSPOL_Values<SAI3::SAI_AFRCR, 17, 1, ReadWriteMode, SAI3SAI_AFRCRBase> ;
    using FSOFF = SAI3_SAI_AFRCR_FSOFF_Values<SAI3::SAI_AFRCR, 18, 1, ReadWriteMode, SAI3SAI_AFRCRBase> ;
    using FieldValues = SAI3_SAI_AFRCR_FSOFF_Values<SAI3::SAI_AFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_AFRCRPack  = Register<0x4001600C, 32, ReadWriteMode, SAI3SAI_AFRCRBase, T...> ;

  struct SAI3SAI_ASLOTRBase {} ;

  struct SAI_ASLOTR : public RegisterBase<0x40016010, 32, ReadWriteMode>
  {
    using FBOFF = SAI3_SAI_ASLOTR_FBOFF_Values<SAI3::SAI_ASLOTR, 0, 5, ReadWriteMode, SAI3SAI_ASLOTRBase> ;
    using SLOTSZ = SAI3_SAI_ASLOTR_SLOTSZ_Values<SAI3::SAI_ASLOTR, 6, 2, ReadWriteMode, SAI3SAI_ASLOTRBase> ;
    using NBSLOT = SAI3_SAI_ASLOTR_NBSLOT_Values<SAI3::SAI_ASLOTR, 8, 4, ReadWriteMode, SAI3SAI_ASLOTRBase> ;
    using SLOTEN = SAI3_SAI_ASLOTR_SLOTEN_Values<SAI3::SAI_ASLOTR, 16, 16, ReadWriteMode, SAI3SAI_ASLOTRBase> ;
    using FieldValues = SAI3_SAI_ASLOTR_SLOTEN_Values<SAI3::SAI_ASLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ASLOTRPack  = Register<0x40016010, 32, ReadWriteMode, SAI3SAI_ASLOTRBase, T...> ;

  struct SAI3SAI_AIMBase {} ;

  struct SAI_AIM : public RegisterBase<0x40016014, 32, ReadWriteMode>
  {
    using OVRUDRIE = SAI3_SAI_AIM_OVRUDRIE_Values<SAI3::SAI_AIM, 0, 1, ReadWriteMode, SAI3SAI_AIMBase> ;
    using MUTEDETIE = SAI3_SAI_AIM_MUTEDETIE_Values<SAI3::SAI_AIM, 1, 1, ReadWriteMode, SAI3SAI_AIMBase> ;
    using WCKCFGIE = SAI3_SAI_AIM_WCKCFGIE_Values<SAI3::SAI_AIM, 2, 1, ReadWriteMode, SAI3SAI_AIMBase> ;
    using FREQIE = SAI3_SAI_AIM_FREQIE_Values<SAI3::SAI_AIM, 3, 1, ReadWriteMode, SAI3SAI_AIMBase> ;
    using CNRDYIE = SAI3_SAI_AIM_CNRDYIE_Values<SAI3::SAI_AIM, 4, 1, ReadWriteMode, SAI3SAI_AIMBase> ;
    using AFSDETIE = SAI3_SAI_AIM_AFSDETIE_Values<SAI3::SAI_AIM, 5, 1, ReadWriteMode, SAI3SAI_AIMBase> ;
    using LFSDETIE = SAI3_SAI_AIM_LFSDETIE_Values<SAI3::SAI_AIM, 6, 1, ReadWriteMode, SAI3SAI_AIMBase> ;
    using FieldValues = SAI3_SAI_AIM_LFSDETIE_Values<SAI3::SAI_AIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_AIMPack  = Register<0x40016014, 32, ReadWriteMode, SAI3SAI_AIMBase, T...> ;

  struct SAI3SAI_ASRBase {} ;

  struct SAI_ASR : public RegisterBase<0x40016018, 32, ReadMode>
  {
    using OVRUDR = SAI3_SAI_ASR_OVRUDR_Values<SAI3::SAI_ASR, 0, 1, ReadMode, SAI3SAI_ASRBase> ;
    using MUTEDET = SAI3_SAI_ASR_MUTEDET_Values<SAI3::SAI_ASR, 1, 1, ReadMode, SAI3SAI_ASRBase> ;
    using WCKCFG = SAI3_SAI_ASR_WCKCFG_Values<SAI3::SAI_ASR, 2, 1, ReadMode, SAI3SAI_ASRBase> ;
    using FREQ = SAI3_SAI_ASR_FREQ_Values<SAI3::SAI_ASR, 3, 1, ReadMode, SAI3SAI_ASRBase> ;
    using CNRDY = SAI3_SAI_ASR_CNRDY_Values<SAI3::SAI_ASR, 4, 1, ReadMode, SAI3SAI_ASRBase> ;
    using AFSDET = SAI3_SAI_ASR_AFSDET_Values<SAI3::SAI_ASR, 5, 1, ReadMode, SAI3SAI_ASRBase> ;
    using LFSDET = SAI3_SAI_ASR_LFSDET_Values<SAI3::SAI_ASR, 6, 1, ReadMode, SAI3SAI_ASRBase> ;
    using FLVL = SAI3_SAI_ASR_FLVL_Values<SAI3::SAI_ASR, 16, 3, ReadMode, SAI3SAI_ASRBase> ;
    using FieldValues = SAI3_SAI_ASR_FLVL_Values<SAI3::SAI_ASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ASRPack  = Register<0x40016018, 32, ReadMode, SAI3SAI_ASRBase, T...> ;

  struct SAI3SAI_ACLRFRBase {} ;

  struct SAI_ACLRFR : public RegisterBase<0x4001601C, 32, WriteMode>
  {
    using COVRUDR = SAI3_SAI_ACLRFR_COVRUDR_Values<SAI3::SAI_ACLRFR, 0, 1, WriteMode, SAI3SAI_ACLRFRBase> ;
    using CMUTEDET = SAI3_SAI_ACLRFR_CMUTEDET_Values<SAI3::SAI_ACLRFR, 1, 1, WriteMode, SAI3SAI_ACLRFRBase> ;
    using CWCKCFG = SAI3_SAI_ACLRFR_CWCKCFG_Values<SAI3::SAI_ACLRFR, 2, 1, WriteMode, SAI3SAI_ACLRFRBase> ;
    using CCNRDY = SAI3_SAI_ACLRFR_CCNRDY_Values<SAI3::SAI_ACLRFR, 4, 1, WriteMode, SAI3SAI_ACLRFRBase> ;
    using CAFSDET = SAI3_SAI_ACLRFR_CAFSDET_Values<SAI3::SAI_ACLRFR, 5, 1, WriteMode, SAI3SAI_ACLRFRBase> ;
    using CLFSDET = SAI3_SAI_ACLRFR_CLFSDET_Values<SAI3::SAI_ACLRFR, 6, 1, WriteMode, SAI3SAI_ACLRFRBase> ;
    using FieldValues = SAI3_SAI_ACLRFR_CLFSDET_Values<SAI3::SAI_ACLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACLRFRPack  = Register<0x4001601C, 32, WriteMode, SAI3SAI_ACLRFRBase, T...> ;

  struct SAI3SAI_ADRBase {} ;

  struct SAI_ADR : public RegisterBase<0x40016020, 32, ReadWriteMode>
  {
    using DATA = SAI3_SAI_ADR_DATA_Values<SAI3::SAI_ADR, 0, 32, ReadWriteMode, SAI3SAI_ADRBase> ;
    using FieldValues = SAI3_SAI_ADR_DATA_Values<SAI3::SAI_ADR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ADRPack  = Register<0x40016020, 32, ReadWriteMode, SAI3SAI_ADRBase, T...> ;

  struct SAI3SAI_BCR1Base {} ;

  struct SAI_BCR1 : public RegisterBase<0x40016024, 32, ReadWriteMode>
  {
    using MODE = SAI3_SAI_BCR1_MODE_Values<SAI3::SAI_BCR1, 0, 2, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using PRTCFG = SAI3_SAI_BCR1_PRTCFG_Values<SAI3::SAI_BCR1, 2, 2, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using DS = SAI3_SAI_BCR1_DS_Values<SAI3::SAI_BCR1, 5, 3, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using LSBFIRST = SAI3_SAI_BCR1_LSBFIRST_Values<SAI3::SAI_BCR1, 8, 1, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using CKSTR = SAI3_SAI_BCR1_CKSTR_Values<SAI3::SAI_BCR1, 9, 1, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using SYNCEN = SAI3_SAI_BCR1_SYNCEN_Values<SAI3::SAI_BCR1, 10, 2, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using MONO = SAI3_SAI_BCR1_MONO_Values<SAI3::SAI_BCR1, 12, 1, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using OUTDRIV = SAI3_SAI_BCR1_OUTDRIV_Values<SAI3::SAI_BCR1, 13, 1, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using SAIXEN = SAI3_SAI_BCR1_SAIXEN_Values<SAI3::SAI_BCR1, 16, 1, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using DMAEN = SAI3_SAI_BCR1_DMAEN_Values<SAI3::SAI_BCR1, 17, 1, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using NOMCK = SAI3_SAI_BCR1_NOMCK_Values<SAI3::SAI_BCR1, 19, 1, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using MCKDIV = SAI3_SAI_BCR1_MCKDIV_Values<SAI3::SAI_BCR1, 20, 4, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using OSR = SAI3_SAI_BCR1_OSR_Values<SAI3::SAI_BCR1, 26, 1, ReadWriteMode, SAI3SAI_BCR1Base> ;
    using FieldValues = SAI3_SAI_BCR1_OSR_Values<SAI3::SAI_BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCR1Pack  = Register<0x40016024, 32, ReadWriteMode, SAI3SAI_BCR1Base, T...> ;

  struct SAI3SAI_BCR2Base {} ;

  struct SAI_BCR2 : public RegisterBase<0x40016028, 32, ReadWriteMode>
  {
    using FTH = SAI3_SAI_BCR2_FTH_Values<SAI3::SAI_BCR2, 0, 3, ReadWriteMode, SAI3SAI_BCR2Base> ;
    using FFLUSH = SAI3_SAI_BCR2_FFLUSH_Values<SAI3::SAI_BCR2, 3, 1, WriteMode, SAI3SAI_BCR2Base> ;
    using TRIS = SAI3_SAI_BCR2_TRIS_Values<SAI3::SAI_BCR2, 4, 1, ReadWriteMode, SAI3SAI_BCR2Base> ;
    using MUTE = SAI3_SAI_BCR2_MUTE_Values<SAI3::SAI_BCR2, 5, 1, ReadWriteMode, SAI3SAI_BCR2Base> ;
    using MUTEVAL = SAI3_SAI_BCR2_MUTEVAL_Values<SAI3::SAI_BCR2, 6, 1, ReadWriteMode, SAI3SAI_BCR2Base> ;
    using MUTECNT = SAI3_SAI_BCR2_MUTECNT_Values<SAI3::SAI_BCR2, 7, 6, ReadWriteMode, SAI3SAI_BCR2Base> ;
    using CPL = SAI3_SAI_BCR2_CPL_Values<SAI3::SAI_BCR2, 13, 1, ReadWriteMode, SAI3SAI_BCR2Base> ;
    using COMP = SAI3_SAI_BCR2_COMP_Values<SAI3::SAI_BCR2, 14, 2, ReadWriteMode, SAI3SAI_BCR2Base> ;
    using FieldValues = SAI3_SAI_BCR2_COMP_Values<SAI3::SAI_BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCR2Pack  = Register<0x40016028, 32, ReadWriteMode, SAI3SAI_BCR2Base, T...> ;

  struct SAI3SAI_BFRCRBase {} ;

  struct SAI_BFRCR : public RegisterBase<0x4001602C, 32, ReadWriteMode>
  {
    using FRL = SAI3_SAI_BFRCR_FRL_Values<SAI3::SAI_BFRCR, 0, 8, ReadWriteMode, SAI3SAI_BFRCRBase> ;
    using FSALL = SAI3_SAI_BFRCR_FSALL_Values<SAI3::SAI_BFRCR, 8, 7, ReadWriteMode, SAI3SAI_BFRCRBase> ;
    using FSDEF = SAI3_SAI_BFRCR_FSDEF_Values<SAI3::SAI_BFRCR, 16, 1, ReadMode, SAI3SAI_BFRCRBase> ;
    using FSPOL = SAI3_SAI_BFRCR_FSPOL_Values<SAI3::SAI_BFRCR, 17, 1, ReadWriteMode, SAI3SAI_BFRCRBase> ;
    using FSOFF = SAI3_SAI_BFRCR_FSOFF_Values<SAI3::SAI_BFRCR, 18, 1, ReadWriteMode, SAI3SAI_BFRCRBase> ;
    using FieldValues = SAI3_SAI_BFRCR_FSOFF_Values<SAI3::SAI_BFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BFRCRPack  = Register<0x4001602C, 32, ReadWriteMode, SAI3SAI_BFRCRBase, T...> ;

  struct SAI3SAI_BSLOTRBase {} ;

  struct SAI_BSLOTR : public RegisterBase<0x40016030, 32, ReadWriteMode>
  {
    using FBOFF = SAI3_SAI_BSLOTR_FBOFF_Values<SAI3::SAI_BSLOTR, 0, 5, ReadWriteMode, SAI3SAI_BSLOTRBase> ;
    using SLOTSZ = SAI3_SAI_BSLOTR_SLOTSZ_Values<SAI3::SAI_BSLOTR, 6, 2, ReadWriteMode, SAI3SAI_BSLOTRBase> ;
    using NBSLOT = SAI3_SAI_BSLOTR_NBSLOT_Values<SAI3::SAI_BSLOTR, 8, 4, ReadWriteMode, SAI3SAI_BSLOTRBase> ;
    using SLOTEN = SAI3_SAI_BSLOTR_SLOTEN_Values<SAI3::SAI_BSLOTR, 16, 16, ReadWriteMode, SAI3SAI_BSLOTRBase> ;
    using FieldValues = SAI3_SAI_BSLOTR_SLOTEN_Values<SAI3::SAI_BSLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BSLOTRPack  = Register<0x40016030, 32, ReadWriteMode, SAI3SAI_BSLOTRBase, T...> ;

  struct SAI3SAI_BIMBase {} ;

  struct SAI_BIM : public RegisterBase<0x40016034, 32, ReadWriteMode>
  {
    using OVRUDRIE = SAI3_SAI_BIM_OVRUDRIE_Values<SAI3::SAI_BIM, 0, 1, ReadWriteMode, SAI3SAI_BIMBase> ;
    using MUTEDETIE = SAI3_SAI_BIM_MUTEDETIE_Values<SAI3::SAI_BIM, 1, 1, ReadWriteMode, SAI3SAI_BIMBase> ;
    using WCKCFGIE = SAI3_SAI_BIM_WCKCFGIE_Values<SAI3::SAI_BIM, 2, 1, ReadWriteMode, SAI3SAI_BIMBase> ;
    using FREQIE = SAI3_SAI_BIM_FREQIE_Values<SAI3::SAI_BIM, 3, 1, ReadWriteMode, SAI3SAI_BIMBase> ;
    using CNRDYIE = SAI3_SAI_BIM_CNRDYIE_Values<SAI3::SAI_BIM, 4, 1, ReadWriteMode, SAI3SAI_BIMBase> ;
    using AFSDETIE = SAI3_SAI_BIM_AFSDETIE_Values<SAI3::SAI_BIM, 5, 1, ReadWriteMode, SAI3SAI_BIMBase> ;
    using LFSDETIE = SAI3_SAI_BIM_LFSDETIE_Values<SAI3::SAI_BIM, 6, 1, ReadWriteMode, SAI3SAI_BIMBase> ;
    using FieldValues = SAI3_SAI_BIM_LFSDETIE_Values<SAI3::SAI_BIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BIMPack  = Register<0x40016034, 32, ReadWriteMode, SAI3SAI_BIMBase, T...> ;

  struct SAI3SAI_BSRBase {} ;

  struct SAI_BSR : public RegisterBase<0x40016038, 32, ReadMode>
  {
    using OVRUDR = SAI3_SAI_BSR_OVRUDR_Values<SAI3::SAI_BSR, 0, 1, ReadMode, SAI3SAI_BSRBase> ;
    using MUTEDET = SAI3_SAI_BSR_MUTEDET_Values<SAI3::SAI_BSR, 1, 1, ReadMode, SAI3SAI_BSRBase> ;
    using WCKCFG = SAI3_SAI_BSR_WCKCFG_Values<SAI3::SAI_BSR, 2, 1, ReadMode, SAI3SAI_BSRBase> ;
    using FREQ = SAI3_SAI_BSR_FREQ_Values<SAI3::SAI_BSR, 3, 1, ReadMode, SAI3SAI_BSRBase> ;
    using CNRDY = SAI3_SAI_BSR_CNRDY_Values<SAI3::SAI_BSR, 4, 1, ReadMode, SAI3SAI_BSRBase> ;
    using AFSDET = SAI3_SAI_BSR_AFSDET_Values<SAI3::SAI_BSR, 5, 1, ReadMode, SAI3SAI_BSRBase> ;
    using LFSDET = SAI3_SAI_BSR_LFSDET_Values<SAI3::SAI_BSR, 6, 1, ReadMode, SAI3SAI_BSRBase> ;
    using FLVL = SAI3_SAI_BSR_FLVL_Values<SAI3::SAI_BSR, 16, 3, ReadMode, SAI3SAI_BSRBase> ;
    using FieldValues = SAI3_SAI_BSR_FLVL_Values<SAI3::SAI_BSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BSRPack  = Register<0x40016038, 32, ReadMode, SAI3SAI_BSRBase, T...> ;

  struct SAI3SAI_BCLRFRBase {} ;

  struct SAI_BCLRFR : public RegisterBase<0x4001603C, 32, WriteMode>
  {
    using COVRUDR = SAI3_SAI_BCLRFR_COVRUDR_Values<SAI3::SAI_BCLRFR, 0, 1, WriteMode, SAI3SAI_BCLRFRBase> ;
    using CMUTEDET = SAI3_SAI_BCLRFR_CMUTEDET_Values<SAI3::SAI_BCLRFR, 1, 1, WriteMode, SAI3SAI_BCLRFRBase> ;
    using CWCKCFG = SAI3_SAI_BCLRFR_CWCKCFG_Values<SAI3::SAI_BCLRFR, 2, 1, WriteMode, SAI3SAI_BCLRFRBase> ;
    using CCNRDY = SAI3_SAI_BCLRFR_CCNRDY_Values<SAI3::SAI_BCLRFR, 4, 1, WriteMode, SAI3SAI_BCLRFRBase> ;
    using CAFSDET = SAI3_SAI_BCLRFR_CAFSDET_Values<SAI3::SAI_BCLRFR, 5, 1, WriteMode, SAI3SAI_BCLRFRBase> ;
    using CLFSDET = SAI3_SAI_BCLRFR_CLFSDET_Values<SAI3::SAI_BCLRFR, 6, 1, WriteMode, SAI3SAI_BCLRFRBase> ;
    using FieldValues = SAI3_SAI_BCLRFR_CLFSDET_Values<SAI3::SAI_BCLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCLRFRPack  = Register<0x4001603C, 32, WriteMode, SAI3SAI_BCLRFRBase, T...> ;

  struct SAI3SAI_BDRBase {} ;

  struct SAI_BDR : public RegisterBase<0x40016040, 32, ReadWriteMode>
  {
    using DATA = SAI3_SAI_BDR_DATA_Values<SAI3::SAI_BDR, 0, 32, ReadWriteMode, SAI3SAI_BDRBase> ;
    using FieldValues = SAI3_SAI_BDR_DATA_Values<SAI3::SAI_BDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BDRPack  = Register<0x40016040, 32, ReadWriteMode, SAI3SAI_BDRBase, T...> ;

  struct SAI3SAI_PDMCRBase {} ;

  struct SAI_PDMCR : public RegisterBase<0x40016044, 32, ReadWriteMode>
  {
    using PDMEN = SAI3_SAI_PDMCR_PDMEN_Values<SAI3::SAI_PDMCR, 0, 1, ReadWriteMode, SAI3SAI_PDMCRBase> ;
    using MICNBR = SAI3_SAI_PDMCR_MICNBR_Values<SAI3::SAI_PDMCR, 4, 2, ReadWriteMode, SAI3SAI_PDMCRBase> ;
    using CKEN1 = SAI3_SAI_PDMCR_CKEN1_Values<SAI3::SAI_PDMCR, 8, 1, ReadWriteMode, SAI3SAI_PDMCRBase> ;
    using CKEN2 = SAI3_SAI_PDMCR_CKEN2_Values<SAI3::SAI_PDMCR, 9, 1, ReadWriteMode, SAI3SAI_PDMCRBase> ;
    using CKEN3 = SAI3_SAI_PDMCR_CKEN3_Values<SAI3::SAI_PDMCR, 10, 1, ReadWriteMode, SAI3SAI_PDMCRBase> ;
    using CKEN4 = SAI3_SAI_PDMCR_CKEN4_Values<SAI3::SAI_PDMCR, 11, 1, ReadWriteMode, SAI3SAI_PDMCRBase> ;
    using FieldValues = SAI3_SAI_PDMCR_CKEN4_Values<SAI3::SAI_PDMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_PDMCRPack  = Register<0x40016044, 32, ReadWriteMode, SAI3SAI_PDMCRBase, T...> ;

  struct SAI3SAI_PDMDLYBase {} ;

  struct SAI_PDMDLY : public RegisterBase<0x40016048, 32, ReadWriteMode>
  {
    using DLYM1L = SAI3_SAI_PDMDLY_DLYM1L_Values<SAI3::SAI_PDMDLY, 0, 3, ReadWriteMode, SAI3SAI_PDMDLYBase> ;
    using DLYM1R = SAI3_SAI_PDMDLY_DLYM1R_Values<SAI3::SAI_PDMDLY, 4, 3, ReadWriteMode, SAI3SAI_PDMDLYBase> ;
    using DLYM2L = SAI3_SAI_PDMDLY_DLYM2L_Values<SAI3::SAI_PDMDLY, 8, 3, ReadWriteMode, SAI3SAI_PDMDLYBase> ;
    using DLYM2R = SAI3_SAI_PDMDLY_DLYM2R_Values<SAI3::SAI_PDMDLY, 12, 3, ReadWriteMode, SAI3SAI_PDMDLYBase> ;
    using DLYM3L = SAI3_SAI_PDMDLY_DLYM3L_Values<SAI3::SAI_PDMDLY, 16, 3, ReadWriteMode, SAI3SAI_PDMDLYBase> ;
    using DLYM3R = SAI3_SAI_PDMDLY_DLYM3R_Values<SAI3::SAI_PDMDLY, 20, 3, ReadWriteMode, SAI3SAI_PDMDLYBase> ;
    using DLYM4L = SAI3_SAI_PDMDLY_DLYM4L_Values<SAI3::SAI_PDMDLY, 24, 3, ReadWriteMode, SAI3SAI_PDMDLYBase> ;
    using DLYM4R = SAI3_SAI_PDMDLY_DLYM4R_Values<SAI3::SAI_PDMDLY, 28, 3, ReadWriteMode, SAI3SAI_PDMDLYBase> ;
    using FieldValues = SAI3_SAI_PDMDLY_DLYM4R_Values<SAI3::SAI_PDMDLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_PDMDLYPack  = Register<0x40016048, 32, ReadWriteMode, SAI3SAI_PDMDLYBase, T...> ;

} ;

#endif //#if !defined(SAI3REGISTERS_HPP)
