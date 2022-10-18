/*******************************************************************************
* Filename      : jpegregisters.hpp
*
* Details       : JPEG. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(JPEGREGISTERS_HPP)
#define JPEGREGISTERS_HPP

#include "jpegfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct JPEG
{
  struct JPEGCONFR0Base {} ;

  struct CONFR0 : public RegisterBase<0x52003000, 32, WriteMode>
  {
    using START = JPEG_CONFR0_START_Values<JPEG::CONFR0, 0, 1, WriteMode, JPEGCONFR0Base> ;
    using FieldValues = JPEG_CONFR0_START_Values<JPEG::CONFR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFR0Pack  = Register<0x52003000, 32, WriteMode, JPEGCONFR0Base, T...> ;

  struct JPEGCONFR1Base {} ;

  struct CONFR1 : public RegisterBase<0x52003004, 32, ReadWriteMode>
  {
    using NF = JPEG_CONFR1_NF_Values<JPEG::CONFR1, 0, 2, ReadWriteMode, JPEGCONFR1Base> ;
    using DE = JPEG_CONFR1_DE_Values<JPEG::CONFR1, 3, 1, ReadWriteMode, JPEGCONFR1Base> ;
    using COLORSPACE = JPEG_CONFR1_COLORSPACE_Values<JPEG::CONFR1, 4, 2, ReadWriteMode, JPEGCONFR1Base> ;
    using NS = JPEG_CONFR1_NS_Values<JPEG::CONFR1, 6, 2, ReadWriteMode, JPEGCONFR1Base> ;
    using HDR = JPEG_CONFR1_HDR_Values<JPEG::CONFR1, 8, 1, ReadWriteMode, JPEGCONFR1Base> ;
    using YSIZE = JPEG_CONFR1_YSIZE_Values<JPEG::CONFR1, 16, 16, ReadWriteMode, JPEGCONFR1Base> ;
    using FieldValues = JPEG_CONFR1_YSIZE_Values<JPEG::CONFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFR1Pack  = Register<0x52003004, 32, ReadWriteMode, JPEGCONFR1Base, T...> ;

  struct JPEGCONFR2Base {} ;

  struct CONFR2 : public RegisterBase<0x52003008, 32, ReadWriteMode>
  {
    using NMCU = JPEG_CONFR2_NMCU_Values<JPEG::CONFR2, 0, 26, ReadWriteMode, JPEGCONFR2Base> ;
    using FieldValues = JPEG_CONFR2_NMCU_Values<JPEG::CONFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFR2Pack  = Register<0x52003008, 32, ReadWriteMode, JPEGCONFR2Base, T...> ;

  struct JPEGCONFR3Base {} ;

  struct CONFR3 : public RegisterBase<0x5200300C, 32, ReadWriteMode>
  {
    using XSIZE = JPEG_CONFR3_XSIZE_Values<JPEG::CONFR3, 16, 16, ReadWriteMode, JPEGCONFR3Base> ;
    using FieldValues = JPEG_CONFR3_XSIZE_Values<JPEG::CONFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFR3Pack  = Register<0x5200300C, 32, ReadWriteMode, JPEGCONFR3Base, T...> ;

  struct JPEGCONFRN1Base {} ;

  struct CONFRN1 : public RegisterBase<0x52003010, 32, ReadWriteMode>
  {
    using HD = JPEG_CONFRN1_HD_Values<JPEG::CONFRN1, 0, 1, ReadWriteMode, JPEGCONFRN1Base> ;
    using HA = JPEG_CONFRN1_HA_Values<JPEG::CONFRN1, 1, 1, ReadWriteMode, JPEGCONFRN1Base> ;
    using QT = JPEG_CONFRN1_QT_Values<JPEG::CONFRN1, 2, 2, ReadWriteMode, JPEGCONFRN1Base> ;
    using NB = JPEG_CONFRN1_NB_Values<JPEG::CONFRN1, 4, 4, ReadWriteMode, JPEGCONFRN1Base> ;
    using VSF = JPEG_CONFRN1_VSF_Values<JPEG::CONFRN1, 8, 4, ReadWriteMode, JPEGCONFRN1Base> ;
    using HSF = JPEG_CONFRN1_HSF_Values<JPEG::CONFRN1, 12, 4, ReadWriteMode, JPEGCONFRN1Base> ;
    using FieldValues = JPEG_CONFRN1_HSF_Values<JPEG::CONFRN1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFRN1Pack  = Register<0x52003010, 32, ReadWriteMode, JPEGCONFRN1Base, T...> ;

  struct JPEGCONFRN2Base {} ;

  struct CONFRN2 : public RegisterBase<0x52003014, 32, ReadWriteMode>
  {
    using HD = JPEG_CONFRN2_HD_Values<JPEG::CONFRN2, 0, 1, ReadWriteMode, JPEGCONFRN2Base> ;
    using HA = JPEG_CONFRN2_HA_Values<JPEG::CONFRN2, 1, 1, ReadWriteMode, JPEGCONFRN2Base> ;
    using QT = JPEG_CONFRN2_QT_Values<JPEG::CONFRN2, 2, 2, ReadWriteMode, JPEGCONFRN2Base> ;
    using NB = JPEG_CONFRN2_NB_Values<JPEG::CONFRN2, 4, 4, ReadWriteMode, JPEGCONFRN2Base> ;
    using VSF = JPEG_CONFRN2_VSF_Values<JPEG::CONFRN2, 8, 4, ReadWriteMode, JPEGCONFRN2Base> ;
    using HSF = JPEG_CONFRN2_HSF_Values<JPEG::CONFRN2, 12, 4, ReadWriteMode, JPEGCONFRN2Base> ;
    using FieldValues = JPEG_CONFRN2_HSF_Values<JPEG::CONFRN2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFRN2Pack  = Register<0x52003014, 32, ReadWriteMode, JPEGCONFRN2Base, T...> ;

  struct JPEGCONFRN3Base {} ;

  struct CONFRN3 : public RegisterBase<0x52003018, 32, ReadWriteMode>
  {
    using HD = JPEG_CONFRN3_HD_Values<JPEG::CONFRN3, 0, 1, ReadWriteMode, JPEGCONFRN3Base> ;
    using HA = JPEG_CONFRN3_HA_Values<JPEG::CONFRN3, 1, 1, ReadWriteMode, JPEGCONFRN3Base> ;
    using QT = JPEG_CONFRN3_QT_Values<JPEG::CONFRN3, 2, 2, ReadWriteMode, JPEGCONFRN3Base> ;
    using NB = JPEG_CONFRN3_NB_Values<JPEG::CONFRN3, 4, 4, ReadWriteMode, JPEGCONFRN3Base> ;
    using VSF = JPEG_CONFRN3_VSF_Values<JPEG::CONFRN3, 8, 4, ReadWriteMode, JPEGCONFRN3Base> ;
    using HSF = JPEG_CONFRN3_HSF_Values<JPEG::CONFRN3, 12, 4, ReadWriteMode, JPEGCONFRN3Base> ;
    using FieldValues = JPEG_CONFRN3_HSF_Values<JPEG::CONFRN3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFRN3Pack  = Register<0x52003018, 32, ReadWriteMode, JPEGCONFRN3Base, T...> ;

  struct JPEGCONFRN4Base {} ;

  struct CONFRN4 : public RegisterBase<0x5200301C, 32, ReadWriteMode>
  {
    using HD = JPEG_CONFRN4_HD_Values<JPEG::CONFRN4, 0, 1, ReadWriteMode, JPEGCONFRN4Base> ;
    using HA = JPEG_CONFRN4_HA_Values<JPEG::CONFRN4, 1, 1, ReadWriteMode, JPEGCONFRN4Base> ;
    using QT = JPEG_CONFRN4_QT_Values<JPEG::CONFRN4, 2, 2, ReadWriteMode, JPEGCONFRN4Base> ;
    using NB = JPEG_CONFRN4_NB_Values<JPEG::CONFRN4, 4, 4, ReadWriteMode, JPEGCONFRN4Base> ;
    using VSF = JPEG_CONFRN4_VSF_Values<JPEG::CONFRN4, 8, 4, ReadWriteMode, JPEGCONFRN4Base> ;
    using HSF = JPEG_CONFRN4_HSF_Values<JPEG::CONFRN4, 12, 4, ReadWriteMode, JPEGCONFRN4Base> ;
    using FieldValues = JPEG_CONFRN4_HSF_Values<JPEG::CONFRN4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CONFRN4Pack  = Register<0x5200301C, 32, ReadWriteMode, JPEGCONFRN4Base, T...> ;

  struct JPEGCRBase {} ;

  struct CR : public RegisterBase<0x52003030, 32, ReadWriteMode>
  {
    using JCEN = JPEG_CR_JCEN_Values<JPEG::CR, 0, 1, ReadWriteMode, JPEGCRBase> ;
    using IFTIE = JPEG_CR_IFTIE_Values<JPEG::CR, 1, 1, ReadWriteMode, JPEGCRBase> ;
    using IFNFIE = JPEG_CR_IFNFIE_Values<JPEG::CR, 2, 1, ReadWriteMode, JPEGCRBase> ;
    using OFTIE = JPEG_CR_OFTIE_Values<JPEG::CR, 3, 1, ReadWriteMode, JPEGCRBase> ;
    using OFNEIE = JPEG_CR_OFNEIE_Values<JPEG::CR, 4, 1, ReadWriteMode, JPEGCRBase> ;
    using EOCIE = JPEG_CR_EOCIE_Values<JPEG::CR, 5, 1, ReadWriteMode, JPEGCRBase> ;
    using HPDIE = JPEG_CR_HPDIE_Values<JPEG::CR, 6, 1, ReadWriteMode, JPEGCRBase> ;
    using IDMAEN = JPEG_CR_IDMAEN_Values<JPEG::CR, 11, 1, ReadWriteMode, JPEGCRBase> ;
    using ODMAEN = JPEG_CR_ODMAEN_Values<JPEG::CR, 12, 1, ReadWriteMode, JPEGCRBase> ;
    using IFF = JPEG_CR_IFF_Values<JPEG::CR, 13, 1, ReadWriteMode, JPEGCRBase> ;
    using OFF = JPEG_CR_OFF_Values<JPEG::CR, 14, 1, ReadWriteMode, JPEGCRBase> ;
    using FieldValues = JPEG_CR_OFF_Values<JPEG::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x52003030, 32, ReadWriteMode, JPEGCRBase, T...> ;

  struct JPEGSRBase {} ;

  struct SR : public RegisterBase<0x52003034, 32, ReadMode>
  {
    using IFTF = JPEG_SR_IFTF_Values<JPEG::SR, 1, 1, ReadMode, JPEGSRBase> ;
    using IFNFF = JPEG_SR_IFNFF_Values<JPEG::SR, 2, 1, ReadMode, JPEGSRBase> ;
    using OFTF = JPEG_SR_OFTF_Values<JPEG::SR, 3, 1, ReadMode, JPEGSRBase> ;
    using OFNEF = JPEG_SR_OFNEF_Values<JPEG::SR, 4, 1, ReadMode, JPEGSRBase> ;
    using EOCF = JPEG_SR_EOCF_Values<JPEG::SR, 5, 1, ReadMode, JPEGSRBase> ;
    using HPDF = JPEG_SR_HPDF_Values<JPEG::SR, 6, 1, ReadMode, JPEGSRBase> ;
    using COF = JPEG_SR_COF_Values<JPEG::SR, 7, 1, ReadMode, JPEGSRBase> ;
    using FieldValues = JPEG_SR_COF_Values<JPEG::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x52003034, 32, ReadMode, JPEGSRBase, T...> ;

  struct JPEGCFRBase {} ;

  struct CFR : public RegisterBase<0x52003038, 32, ReadWriteMode>
  {
    using CEOCF = JPEG_CFR_CEOCF_Values<JPEG::CFR, 5, 1, ReadWriteMode, JPEGCFRBase> ;
    using CHPDF = JPEG_CFR_CHPDF_Values<JPEG::CFR, 6, 1, ReadWriteMode, JPEGCFRBase> ;
    using FieldValues = JPEG_CFR_CHPDF_Values<JPEG::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x52003038, 32, ReadWriteMode, JPEGCFRBase, T...> ;

  struct JPEGDIRBase {} ;

  struct DIR : public RegisterBase<0x52003040, 32, WriteMode>
  {
    using DATAIN = JPEG_DIR_DATAIN_Values<JPEG::DIR, 0, 32, WriteMode, JPEGDIRBase> ;
    using FieldValues = JPEG_DIR_DATAIN_Values<JPEG::DIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIRPack  = Register<0x52003040, 32, WriteMode, JPEGDIRBase, T...> ;

  struct JPEGDORBase {} ;

  struct DOR : public RegisterBase<0x52003044, 32, ReadMode>
  {
    using DATAOUT = JPEG_DOR_DATAOUT_Values<JPEG::DOR, 0, 32, ReadMode, JPEGDORBase> ;
    using FieldValues = JPEG_DOR_DATAOUT_Values<JPEG::DOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DORPack  = Register<0x52003044, 32, ReadMode, JPEGDORBase, T...> ;

} ;

#endif //#if !defined(JPEGREGISTERS_HPP)
