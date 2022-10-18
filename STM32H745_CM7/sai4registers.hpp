/*******************************************************************************
* Filename      : sai4registers.hpp
*
* Details       : SAI. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(SAI4REGISTERS_HPP)
#define SAI4REGISTERS_HPP

#include "sai4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SAI4
{
  struct SAI4SAI_GCRBase {} ;

  struct SAI_GCR : public RegisterBase<0x58005400, 32, ReadWriteMode>
  {
    using SYNCOUT = SAI4_SAI_GCR_SYNCOUT_Values<SAI4::SAI_GCR, 4, 2, ReadWriteMode, SAI4SAI_GCRBase> ;
    using SYNCIN = SAI4_SAI_GCR_SYNCIN_Values<SAI4::SAI_GCR, 0, 2, ReadWriteMode, SAI4SAI_GCRBase> ;
    using FieldValues = SAI4_SAI_GCR_SYNCIN_Values<SAI4::SAI_GCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_GCRPack  = Register<0x58005400, 32, ReadWriteMode, SAI4SAI_GCRBase, T...> ;

  struct SAI4SAI_ACR1Base {} ;

  struct SAI_ACR1 : public RegisterBase<0x58005404, 32, ReadWriteMode>
  {
    using MODE = SAI4_SAI_ACR1_MODE_Values<SAI4::SAI_ACR1, 0, 2, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using PRTCFG = SAI4_SAI_ACR1_PRTCFG_Values<SAI4::SAI_ACR1, 2, 2, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using DS = SAI4_SAI_ACR1_DS_Values<SAI4::SAI_ACR1, 5, 3, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using LSBFIRST = SAI4_SAI_ACR1_LSBFIRST_Values<SAI4::SAI_ACR1, 8, 1, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using CKSTR = SAI4_SAI_ACR1_CKSTR_Values<SAI4::SAI_ACR1, 9, 1, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using SYNCEN = SAI4_SAI_ACR1_SYNCEN_Values<SAI4::SAI_ACR1, 10, 2, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using MONO = SAI4_SAI_ACR1_MONO_Values<SAI4::SAI_ACR1, 12, 1, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using OUTDRIV = SAI4_SAI_ACR1_OUTDRIV_Values<SAI4::SAI_ACR1, 13, 1, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using SAIXEN = SAI4_SAI_ACR1_SAIXEN_Values<SAI4::SAI_ACR1, 16, 1, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using DMAEN = SAI4_SAI_ACR1_DMAEN_Values<SAI4::SAI_ACR1, 17, 1, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using NOMCK = SAI4_SAI_ACR1_NOMCK_Values<SAI4::SAI_ACR1, 19, 1, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using MCKDIV = SAI4_SAI_ACR1_MCKDIV_Values<SAI4::SAI_ACR1, 20, 4, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using OSR = SAI4_SAI_ACR1_OSR_Values<SAI4::SAI_ACR1, 26, 1, ReadWriteMode, SAI4SAI_ACR1Base> ;
    using FieldValues = SAI4_SAI_ACR1_OSR_Values<SAI4::SAI_ACR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACR1Pack  = Register<0x58005404, 32, ReadWriteMode, SAI4SAI_ACR1Base, T...> ;

  struct SAI4SAI_ACR2Base {} ;

  struct SAI_ACR2 : public RegisterBase<0x58005408, 32, ReadWriteMode>
  {
    using FTH = SAI4_SAI_ACR2_FTH_Values<SAI4::SAI_ACR2, 0, 3, ReadWriteMode, SAI4SAI_ACR2Base> ;
    using FFLUSH = SAI4_SAI_ACR2_FFLUSH_Values<SAI4::SAI_ACR2, 3, 1, WriteMode, SAI4SAI_ACR2Base> ;
    using TRIS = SAI4_SAI_ACR2_TRIS_Values<SAI4::SAI_ACR2, 4, 1, ReadWriteMode, SAI4SAI_ACR2Base> ;
    using MUTE = SAI4_SAI_ACR2_MUTE_Values<SAI4::SAI_ACR2, 5, 1, ReadWriteMode, SAI4SAI_ACR2Base> ;
    using MUTEVAL = SAI4_SAI_ACR2_MUTEVAL_Values<SAI4::SAI_ACR2, 6, 1, ReadWriteMode, SAI4SAI_ACR2Base> ;
    using MUTECNT = SAI4_SAI_ACR2_MUTECNT_Values<SAI4::SAI_ACR2, 7, 6, ReadWriteMode, SAI4SAI_ACR2Base> ;
    using CPL = SAI4_SAI_ACR2_CPL_Values<SAI4::SAI_ACR2, 13, 1, ReadWriteMode, SAI4SAI_ACR2Base> ;
    using COMP = SAI4_SAI_ACR2_COMP_Values<SAI4::SAI_ACR2, 14, 2, ReadWriteMode, SAI4SAI_ACR2Base> ;
    using FieldValues = SAI4_SAI_ACR2_COMP_Values<SAI4::SAI_ACR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACR2Pack  = Register<0x58005408, 32, ReadWriteMode, SAI4SAI_ACR2Base, T...> ;

  struct SAI4SAI_AFRCRBase {} ;

  struct SAI_AFRCR : public RegisterBase<0x5800540C, 32, ReadWriteMode>
  {
    using FRL = SAI4_SAI_AFRCR_FRL_Values<SAI4::SAI_AFRCR, 0, 8, ReadWriteMode, SAI4SAI_AFRCRBase> ;
    using FSALL = SAI4_SAI_AFRCR_FSALL_Values<SAI4::SAI_AFRCR, 8, 7, ReadWriteMode, SAI4SAI_AFRCRBase> ;
    using FSDEF = SAI4_SAI_AFRCR_FSDEF_Values<SAI4::SAI_AFRCR, 16, 1, ReadMode, SAI4SAI_AFRCRBase> ;
    using FSPOL = SAI4_SAI_AFRCR_FSPOL_Values<SAI4::SAI_AFRCR, 17, 1, ReadWriteMode, SAI4SAI_AFRCRBase> ;
    using FSOFF = SAI4_SAI_AFRCR_FSOFF_Values<SAI4::SAI_AFRCR, 18, 1, ReadWriteMode, SAI4SAI_AFRCRBase> ;
    using FieldValues = SAI4_SAI_AFRCR_FSOFF_Values<SAI4::SAI_AFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_AFRCRPack  = Register<0x5800540C, 32, ReadWriteMode, SAI4SAI_AFRCRBase, T...> ;

  struct SAI4SAI_ASLOTRBase {} ;

  struct SAI_ASLOTR : public RegisterBase<0x58005410, 32, ReadWriteMode>
  {
    using FBOFF = SAI4_SAI_ASLOTR_FBOFF_Values<SAI4::SAI_ASLOTR, 0, 5, ReadWriteMode, SAI4SAI_ASLOTRBase> ;
    using SLOTSZ = SAI4_SAI_ASLOTR_SLOTSZ_Values<SAI4::SAI_ASLOTR, 6, 2, ReadWriteMode, SAI4SAI_ASLOTRBase> ;
    using NBSLOT = SAI4_SAI_ASLOTR_NBSLOT_Values<SAI4::SAI_ASLOTR, 8, 4, ReadWriteMode, SAI4SAI_ASLOTRBase> ;
    using SLOTEN = SAI4_SAI_ASLOTR_SLOTEN_Values<SAI4::SAI_ASLOTR, 16, 16, ReadWriteMode, SAI4SAI_ASLOTRBase> ;
    using FieldValues = SAI4_SAI_ASLOTR_SLOTEN_Values<SAI4::SAI_ASLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ASLOTRPack  = Register<0x58005410, 32, ReadWriteMode, SAI4SAI_ASLOTRBase, T...> ;

  struct SAI4SAI_AIMBase {} ;

  struct SAI_AIM : public RegisterBase<0x58005414, 32, ReadWriteMode>
  {
    using OVRUDRIE = SAI4_SAI_AIM_OVRUDRIE_Values<SAI4::SAI_AIM, 0, 1, ReadWriteMode, SAI4SAI_AIMBase> ;
    using MUTEDETIE = SAI4_SAI_AIM_MUTEDETIE_Values<SAI4::SAI_AIM, 1, 1, ReadWriteMode, SAI4SAI_AIMBase> ;
    using WCKCFGIE = SAI4_SAI_AIM_WCKCFGIE_Values<SAI4::SAI_AIM, 2, 1, ReadWriteMode, SAI4SAI_AIMBase> ;
    using FREQIE = SAI4_SAI_AIM_FREQIE_Values<SAI4::SAI_AIM, 3, 1, ReadWriteMode, SAI4SAI_AIMBase> ;
    using CNRDYIE = SAI4_SAI_AIM_CNRDYIE_Values<SAI4::SAI_AIM, 4, 1, ReadWriteMode, SAI4SAI_AIMBase> ;
    using AFSDETIE = SAI4_SAI_AIM_AFSDETIE_Values<SAI4::SAI_AIM, 5, 1, ReadWriteMode, SAI4SAI_AIMBase> ;
    using LFSDETIE = SAI4_SAI_AIM_LFSDETIE_Values<SAI4::SAI_AIM, 6, 1, ReadWriteMode, SAI4SAI_AIMBase> ;
    using FieldValues = SAI4_SAI_AIM_LFSDETIE_Values<SAI4::SAI_AIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_AIMPack  = Register<0x58005414, 32, ReadWriteMode, SAI4SAI_AIMBase, T...> ;

  struct SAI4SAI_ASRBase {} ;

  struct SAI_ASR : public RegisterBase<0x58005418, 32, ReadMode>
  {
    using OVRUDR = SAI4_SAI_ASR_OVRUDR_Values<SAI4::SAI_ASR, 0, 1, ReadMode, SAI4SAI_ASRBase> ;
    using MUTEDET = SAI4_SAI_ASR_MUTEDET_Values<SAI4::SAI_ASR, 1, 1, ReadMode, SAI4SAI_ASRBase> ;
    using WCKCFG = SAI4_SAI_ASR_WCKCFG_Values<SAI4::SAI_ASR, 2, 1, ReadMode, SAI4SAI_ASRBase> ;
    using FREQ = SAI4_SAI_ASR_FREQ_Values<SAI4::SAI_ASR, 3, 1, ReadMode, SAI4SAI_ASRBase> ;
    using CNRDY = SAI4_SAI_ASR_CNRDY_Values<SAI4::SAI_ASR, 4, 1, ReadMode, SAI4SAI_ASRBase> ;
    using AFSDET = SAI4_SAI_ASR_AFSDET_Values<SAI4::SAI_ASR, 5, 1, ReadMode, SAI4SAI_ASRBase> ;
    using LFSDET = SAI4_SAI_ASR_LFSDET_Values<SAI4::SAI_ASR, 6, 1, ReadMode, SAI4SAI_ASRBase> ;
    using FLVL = SAI4_SAI_ASR_FLVL_Values<SAI4::SAI_ASR, 16, 3, ReadMode, SAI4SAI_ASRBase> ;
    using FieldValues = SAI4_SAI_ASR_FLVL_Values<SAI4::SAI_ASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ASRPack  = Register<0x58005418, 32, ReadMode, SAI4SAI_ASRBase, T...> ;

  struct SAI4SAI_ACLRFRBase {} ;

  struct SAI_ACLRFR : public RegisterBase<0x5800541C, 32, WriteMode>
  {
    using COVRUDR = SAI4_SAI_ACLRFR_COVRUDR_Values<SAI4::SAI_ACLRFR, 0, 1, WriteMode, SAI4SAI_ACLRFRBase> ;
    using CMUTEDET = SAI4_SAI_ACLRFR_CMUTEDET_Values<SAI4::SAI_ACLRFR, 1, 1, WriteMode, SAI4SAI_ACLRFRBase> ;
    using CWCKCFG = SAI4_SAI_ACLRFR_CWCKCFG_Values<SAI4::SAI_ACLRFR, 2, 1, WriteMode, SAI4SAI_ACLRFRBase> ;
    using CCNRDY = SAI4_SAI_ACLRFR_CCNRDY_Values<SAI4::SAI_ACLRFR, 4, 1, WriteMode, SAI4SAI_ACLRFRBase> ;
    using CAFSDET = SAI4_SAI_ACLRFR_CAFSDET_Values<SAI4::SAI_ACLRFR, 5, 1, WriteMode, SAI4SAI_ACLRFRBase> ;
    using CLFSDET = SAI4_SAI_ACLRFR_CLFSDET_Values<SAI4::SAI_ACLRFR, 6, 1, WriteMode, SAI4SAI_ACLRFRBase> ;
    using FieldValues = SAI4_SAI_ACLRFR_CLFSDET_Values<SAI4::SAI_ACLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ACLRFRPack  = Register<0x5800541C, 32, WriteMode, SAI4SAI_ACLRFRBase, T...> ;

  struct SAI4SAI_ADRBase {} ;

  struct SAI_ADR : public RegisterBase<0x58005420, 32, ReadWriteMode>
  {
    using DATA = SAI4_SAI_ADR_DATA_Values<SAI4::SAI_ADR, 0, 32, ReadWriteMode, SAI4SAI_ADRBase> ;
    using FieldValues = SAI4_SAI_ADR_DATA_Values<SAI4::SAI_ADR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_ADRPack  = Register<0x58005420, 32, ReadWriteMode, SAI4SAI_ADRBase, T...> ;

  struct SAI4SAI_BCR1Base {} ;

  struct SAI_BCR1 : public RegisterBase<0x58005424, 32, ReadWriteMode>
  {
    using MODE = SAI4_SAI_BCR1_MODE_Values<SAI4::SAI_BCR1, 0, 2, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using PRTCFG = SAI4_SAI_BCR1_PRTCFG_Values<SAI4::SAI_BCR1, 2, 2, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using DS = SAI4_SAI_BCR1_DS_Values<SAI4::SAI_BCR1, 5, 3, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using LSBFIRST = SAI4_SAI_BCR1_LSBFIRST_Values<SAI4::SAI_BCR1, 8, 1, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using CKSTR = SAI4_SAI_BCR1_CKSTR_Values<SAI4::SAI_BCR1, 9, 1, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using SYNCEN = SAI4_SAI_BCR1_SYNCEN_Values<SAI4::SAI_BCR1, 10, 2, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using MONO = SAI4_SAI_BCR1_MONO_Values<SAI4::SAI_BCR1, 12, 1, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using OUTDRIV = SAI4_SAI_BCR1_OUTDRIV_Values<SAI4::SAI_BCR1, 13, 1, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using SAIXEN = SAI4_SAI_BCR1_SAIXEN_Values<SAI4::SAI_BCR1, 16, 1, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using DMAEN = SAI4_SAI_BCR1_DMAEN_Values<SAI4::SAI_BCR1, 17, 1, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using NOMCK = SAI4_SAI_BCR1_NOMCK_Values<SAI4::SAI_BCR1, 19, 1, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using MCKDIV = SAI4_SAI_BCR1_MCKDIV_Values<SAI4::SAI_BCR1, 20, 4, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using OSR = SAI4_SAI_BCR1_OSR_Values<SAI4::SAI_BCR1, 26, 1, ReadWriteMode, SAI4SAI_BCR1Base> ;
    using FieldValues = SAI4_SAI_BCR1_OSR_Values<SAI4::SAI_BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCR1Pack  = Register<0x58005424, 32, ReadWriteMode, SAI4SAI_BCR1Base, T...> ;

  struct SAI4SAI_BCR2Base {} ;

  struct SAI_BCR2 : public RegisterBase<0x58005428, 32, ReadWriteMode>
  {
    using FTH = SAI4_SAI_BCR2_FTH_Values<SAI4::SAI_BCR2, 0, 3, ReadWriteMode, SAI4SAI_BCR2Base> ;
    using FFLUSH = SAI4_SAI_BCR2_FFLUSH_Values<SAI4::SAI_BCR2, 3, 1, WriteMode, SAI4SAI_BCR2Base> ;
    using TRIS = SAI4_SAI_BCR2_TRIS_Values<SAI4::SAI_BCR2, 4, 1, ReadWriteMode, SAI4SAI_BCR2Base> ;
    using MUTE = SAI4_SAI_BCR2_MUTE_Values<SAI4::SAI_BCR2, 5, 1, ReadWriteMode, SAI4SAI_BCR2Base> ;
    using MUTEVAL = SAI4_SAI_BCR2_MUTEVAL_Values<SAI4::SAI_BCR2, 6, 1, ReadWriteMode, SAI4SAI_BCR2Base> ;
    using MUTECNT = SAI4_SAI_BCR2_MUTECNT_Values<SAI4::SAI_BCR2, 7, 6, ReadWriteMode, SAI4SAI_BCR2Base> ;
    using CPL = SAI4_SAI_BCR2_CPL_Values<SAI4::SAI_BCR2, 13, 1, ReadWriteMode, SAI4SAI_BCR2Base> ;
    using COMP = SAI4_SAI_BCR2_COMP_Values<SAI4::SAI_BCR2, 14, 2, ReadWriteMode, SAI4SAI_BCR2Base> ;
    using FieldValues = SAI4_SAI_BCR2_COMP_Values<SAI4::SAI_BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCR2Pack  = Register<0x58005428, 32, ReadWriteMode, SAI4SAI_BCR2Base, T...> ;

  struct SAI4SAI_BFRCRBase {} ;

  struct SAI_BFRCR : public RegisterBase<0x5800542C, 32, ReadWriteMode>
  {
    using FRL = SAI4_SAI_BFRCR_FRL_Values<SAI4::SAI_BFRCR, 0, 8, ReadWriteMode, SAI4SAI_BFRCRBase> ;
    using FSALL = SAI4_SAI_BFRCR_FSALL_Values<SAI4::SAI_BFRCR, 8, 7, ReadWriteMode, SAI4SAI_BFRCRBase> ;
    using FSDEF = SAI4_SAI_BFRCR_FSDEF_Values<SAI4::SAI_BFRCR, 16, 1, ReadMode, SAI4SAI_BFRCRBase> ;
    using FSPOL = SAI4_SAI_BFRCR_FSPOL_Values<SAI4::SAI_BFRCR, 17, 1, ReadWriteMode, SAI4SAI_BFRCRBase> ;
    using FSOFF = SAI4_SAI_BFRCR_FSOFF_Values<SAI4::SAI_BFRCR, 18, 1, ReadWriteMode, SAI4SAI_BFRCRBase> ;
    using FieldValues = SAI4_SAI_BFRCR_FSOFF_Values<SAI4::SAI_BFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BFRCRPack  = Register<0x5800542C, 32, ReadWriteMode, SAI4SAI_BFRCRBase, T...> ;

  struct SAI4SAI_BSLOTRBase {} ;

  struct SAI_BSLOTR : public RegisterBase<0x58005430, 32, ReadWriteMode>
  {
    using FBOFF = SAI4_SAI_BSLOTR_FBOFF_Values<SAI4::SAI_BSLOTR, 0, 5, ReadWriteMode, SAI4SAI_BSLOTRBase> ;
    using SLOTSZ = SAI4_SAI_BSLOTR_SLOTSZ_Values<SAI4::SAI_BSLOTR, 6, 2, ReadWriteMode, SAI4SAI_BSLOTRBase> ;
    using NBSLOT = SAI4_SAI_BSLOTR_NBSLOT_Values<SAI4::SAI_BSLOTR, 8, 4, ReadWriteMode, SAI4SAI_BSLOTRBase> ;
    using SLOTEN = SAI4_SAI_BSLOTR_SLOTEN_Values<SAI4::SAI_BSLOTR, 16, 16, ReadWriteMode, SAI4SAI_BSLOTRBase> ;
    using FieldValues = SAI4_SAI_BSLOTR_SLOTEN_Values<SAI4::SAI_BSLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BSLOTRPack  = Register<0x58005430, 32, ReadWriteMode, SAI4SAI_BSLOTRBase, T...> ;

  struct SAI4SAI_BIMBase {} ;

  struct SAI_BIM : public RegisterBase<0x58005434, 32, ReadWriteMode>
  {
    using OVRUDRIE = SAI4_SAI_BIM_OVRUDRIE_Values<SAI4::SAI_BIM, 0, 1, ReadWriteMode, SAI4SAI_BIMBase> ;
    using MUTEDETIE = SAI4_SAI_BIM_MUTEDETIE_Values<SAI4::SAI_BIM, 1, 1, ReadWriteMode, SAI4SAI_BIMBase> ;
    using WCKCFGIE = SAI4_SAI_BIM_WCKCFGIE_Values<SAI4::SAI_BIM, 2, 1, ReadWriteMode, SAI4SAI_BIMBase> ;
    using FREQIE = SAI4_SAI_BIM_FREQIE_Values<SAI4::SAI_BIM, 3, 1, ReadWriteMode, SAI4SAI_BIMBase> ;
    using CNRDYIE = SAI4_SAI_BIM_CNRDYIE_Values<SAI4::SAI_BIM, 4, 1, ReadWriteMode, SAI4SAI_BIMBase> ;
    using AFSDETIE = SAI4_SAI_BIM_AFSDETIE_Values<SAI4::SAI_BIM, 5, 1, ReadWriteMode, SAI4SAI_BIMBase> ;
    using LFSDETIE = SAI4_SAI_BIM_LFSDETIE_Values<SAI4::SAI_BIM, 6, 1, ReadWriteMode, SAI4SAI_BIMBase> ;
    using FieldValues = SAI4_SAI_BIM_LFSDETIE_Values<SAI4::SAI_BIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BIMPack  = Register<0x58005434, 32, ReadWriteMode, SAI4SAI_BIMBase, T...> ;

  struct SAI4SAI_BSRBase {} ;

  struct SAI_BSR : public RegisterBase<0x58005438, 32, ReadMode>
  {
    using OVRUDR = SAI4_SAI_BSR_OVRUDR_Values<SAI4::SAI_BSR, 0, 1, ReadMode, SAI4SAI_BSRBase> ;
    using MUTEDET = SAI4_SAI_BSR_MUTEDET_Values<SAI4::SAI_BSR, 1, 1, ReadMode, SAI4SAI_BSRBase> ;
    using WCKCFG = SAI4_SAI_BSR_WCKCFG_Values<SAI4::SAI_BSR, 2, 1, ReadMode, SAI4SAI_BSRBase> ;
    using FREQ = SAI4_SAI_BSR_FREQ_Values<SAI4::SAI_BSR, 3, 1, ReadMode, SAI4SAI_BSRBase> ;
    using CNRDY = SAI4_SAI_BSR_CNRDY_Values<SAI4::SAI_BSR, 4, 1, ReadMode, SAI4SAI_BSRBase> ;
    using AFSDET = SAI4_SAI_BSR_AFSDET_Values<SAI4::SAI_BSR, 5, 1, ReadMode, SAI4SAI_BSRBase> ;
    using LFSDET = SAI4_SAI_BSR_LFSDET_Values<SAI4::SAI_BSR, 6, 1, ReadMode, SAI4SAI_BSRBase> ;
    using FLVL = SAI4_SAI_BSR_FLVL_Values<SAI4::SAI_BSR, 16, 3, ReadMode, SAI4SAI_BSRBase> ;
    using FieldValues = SAI4_SAI_BSR_FLVL_Values<SAI4::SAI_BSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BSRPack  = Register<0x58005438, 32, ReadMode, SAI4SAI_BSRBase, T...> ;

  struct SAI4SAI_BCLRFRBase {} ;

  struct SAI_BCLRFR : public RegisterBase<0x5800543C, 32, WriteMode>
  {
    using COVRUDR = SAI4_SAI_BCLRFR_COVRUDR_Values<SAI4::SAI_BCLRFR, 0, 1, WriteMode, SAI4SAI_BCLRFRBase> ;
    using CMUTEDET = SAI4_SAI_BCLRFR_CMUTEDET_Values<SAI4::SAI_BCLRFR, 1, 1, WriteMode, SAI4SAI_BCLRFRBase> ;
    using CWCKCFG = SAI4_SAI_BCLRFR_CWCKCFG_Values<SAI4::SAI_BCLRFR, 2, 1, WriteMode, SAI4SAI_BCLRFRBase> ;
    using CCNRDY = SAI4_SAI_BCLRFR_CCNRDY_Values<SAI4::SAI_BCLRFR, 4, 1, WriteMode, SAI4SAI_BCLRFRBase> ;
    using CAFSDET = SAI4_SAI_BCLRFR_CAFSDET_Values<SAI4::SAI_BCLRFR, 5, 1, WriteMode, SAI4SAI_BCLRFRBase> ;
    using CLFSDET = SAI4_SAI_BCLRFR_CLFSDET_Values<SAI4::SAI_BCLRFR, 6, 1, WriteMode, SAI4SAI_BCLRFRBase> ;
    using FieldValues = SAI4_SAI_BCLRFR_CLFSDET_Values<SAI4::SAI_BCLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BCLRFRPack  = Register<0x5800543C, 32, WriteMode, SAI4SAI_BCLRFRBase, T...> ;

  struct SAI4SAI_BDRBase {} ;

  struct SAI_BDR : public RegisterBase<0x58005440, 32, ReadWriteMode>
  {
    using DATA = SAI4_SAI_BDR_DATA_Values<SAI4::SAI_BDR, 0, 32, ReadWriteMode, SAI4SAI_BDRBase> ;
    using FieldValues = SAI4_SAI_BDR_DATA_Values<SAI4::SAI_BDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_BDRPack  = Register<0x58005440, 32, ReadWriteMode, SAI4SAI_BDRBase, T...> ;

  struct SAI4SAI_PDMCRBase {} ;

  struct SAI_PDMCR : public RegisterBase<0x58005444, 32, ReadWriteMode>
  {
    using PDMEN = SAI4_SAI_PDMCR_PDMEN_Values<SAI4::SAI_PDMCR, 0, 1, ReadWriteMode, SAI4SAI_PDMCRBase> ;
    using MICNBR = SAI4_SAI_PDMCR_MICNBR_Values<SAI4::SAI_PDMCR, 4, 2, ReadWriteMode, SAI4SAI_PDMCRBase> ;
    using CKEN1 = SAI4_SAI_PDMCR_CKEN1_Values<SAI4::SAI_PDMCR, 8, 1, ReadWriteMode, SAI4SAI_PDMCRBase> ;
    using CKEN2 = SAI4_SAI_PDMCR_CKEN2_Values<SAI4::SAI_PDMCR, 9, 1, ReadWriteMode, SAI4SAI_PDMCRBase> ;
    using CKEN3 = SAI4_SAI_PDMCR_CKEN3_Values<SAI4::SAI_PDMCR, 10, 1, ReadWriteMode, SAI4SAI_PDMCRBase> ;
    using CKEN4 = SAI4_SAI_PDMCR_CKEN4_Values<SAI4::SAI_PDMCR, 11, 1, ReadWriteMode, SAI4SAI_PDMCRBase> ;
    using FieldValues = SAI4_SAI_PDMCR_CKEN4_Values<SAI4::SAI_PDMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_PDMCRPack  = Register<0x58005444, 32, ReadWriteMode, SAI4SAI_PDMCRBase, T...> ;

  struct SAI4SAI_PDMDLYBase {} ;

  struct SAI_PDMDLY : public RegisterBase<0x58005448, 32, ReadWriteMode>
  {
    using DLYM1L = SAI4_SAI_PDMDLY_DLYM1L_Values<SAI4::SAI_PDMDLY, 0, 3, ReadWriteMode, SAI4SAI_PDMDLYBase> ;
    using DLYM1R = SAI4_SAI_PDMDLY_DLYM1R_Values<SAI4::SAI_PDMDLY, 4, 3, ReadWriteMode, SAI4SAI_PDMDLYBase> ;
    using DLYM2L = SAI4_SAI_PDMDLY_DLYM2L_Values<SAI4::SAI_PDMDLY, 8, 3, ReadWriteMode, SAI4SAI_PDMDLYBase> ;
    using DLYM2R = SAI4_SAI_PDMDLY_DLYM2R_Values<SAI4::SAI_PDMDLY, 12, 3, ReadWriteMode, SAI4SAI_PDMDLYBase> ;
    using DLYM3L = SAI4_SAI_PDMDLY_DLYM3L_Values<SAI4::SAI_PDMDLY, 16, 3, ReadWriteMode, SAI4SAI_PDMDLYBase> ;
    using DLYM3R = SAI4_SAI_PDMDLY_DLYM3R_Values<SAI4::SAI_PDMDLY, 20, 3, ReadWriteMode, SAI4SAI_PDMDLYBase> ;
    using DLYM4L = SAI4_SAI_PDMDLY_DLYM4L_Values<SAI4::SAI_PDMDLY, 24, 3, ReadWriteMode, SAI4SAI_PDMDLYBase> ;
    using DLYM4R = SAI4_SAI_PDMDLY_DLYM4R_Values<SAI4::SAI_PDMDLY, 28, 3, ReadWriteMode, SAI4SAI_PDMDLYBase> ;
    using FieldValues = SAI4_SAI_PDMDLY_DLYM4R_Values<SAI4::SAI_PDMDLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SAI_PDMDLYPack  = Register<0x58005448, 32, ReadWriteMode, SAI4SAI_PDMDLYBase, T...> ;

} ;

#endif //#if !defined(SAI4REGISTERS_HPP)
