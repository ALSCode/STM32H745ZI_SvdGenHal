/*******************************************************************************
* Filename      : ramecc2registers.hpp
*
* Details       : ECC controller is associated to each RAM area. This header
*                 file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(RAMECC2REGISTERS_HPP)
#define RAMECC2REGISTERS_HPP

#include "ramecc2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RAMECC2
{
  struct RAMECC2IERBase {} ;

  struct IER : public RegisterBase<0x48023000, 32, ReadWriteMode>
  {
    using GIE = RAMECC2_IER_GIE_Values<RAMECC2::IER, 0, 1, ReadWriteMode, RAMECC2IERBase> ;
    using GECCSEIE_ = RAMECC2_IER_GECCSEIE__Values<RAMECC2::IER, 1, 1, ReadWriteMode, RAMECC2IERBase> ;
    using GECCDEIE = RAMECC2_IER_GECCDEIE_Values<RAMECC2::IER, 2, 1, ReadWriteMode, RAMECC2IERBase> ;
    using GECCDEBWIE = RAMECC2_IER_GECCDEBWIE_Values<RAMECC2::IER, 3, 1, ReadWriteMode, RAMECC2IERBase> ;
    using FieldValues = RAMECC2_IER_GECCDEBWIE_Values<RAMECC2::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x48023000, 32, ReadWriteMode, RAMECC2IERBase, T...> ;

  struct RAMECC2M1CRBase {} ;

  struct M1CR : public RegisterBase<0x48023020, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC2_M1CR_ECCSEIE_Values<RAMECC2::M1CR, 2, 1, ReadWriteMode, RAMECC2M1CRBase> ;
    using ECCDEIE = RAMECC2_M1CR_ECCDEIE_Values<RAMECC2::M1CR, 3, 1, ReadWriteMode, RAMECC2M1CRBase> ;
    using ECCDEBWIE = RAMECC2_M1CR_ECCDEBWIE_Values<RAMECC2::M1CR, 4, 1, ReadWriteMode, RAMECC2M1CRBase> ;
    using ECCELEN = RAMECC2_M1CR_ECCELEN_Values<RAMECC2::M1CR, 5, 1, ReadWriteMode, RAMECC2M1CRBase> ;
    using FieldValues = RAMECC2_M1CR_ECCELEN_Values<RAMECC2::M1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1CRPack  = Register<0x48023020, 32, ReadWriteMode, RAMECC2M1CRBase, T...> ;

  struct RAMECC2M2CRBase {} ;

  struct M2CR : public RegisterBase<0x48023040, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC2_M2CR_ECCSEIE_Values<RAMECC2::M2CR, 2, 1, ReadWriteMode, RAMECC2M2CRBase> ;
    using ECCDEIE = RAMECC2_M2CR_ECCDEIE_Values<RAMECC2::M2CR, 3, 1, ReadWriteMode, RAMECC2M2CRBase> ;
    using ECCDEBWIE = RAMECC2_M2CR_ECCDEBWIE_Values<RAMECC2::M2CR, 4, 1, ReadWriteMode, RAMECC2M2CRBase> ;
    using ECCELEN = RAMECC2_M2CR_ECCELEN_Values<RAMECC2::M2CR, 5, 1, ReadWriteMode, RAMECC2M2CRBase> ;
    using FieldValues = RAMECC2_M2CR_ECCELEN_Values<RAMECC2::M2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2CRPack  = Register<0x48023040, 32, ReadWriteMode, RAMECC2M2CRBase, T...> ;

  struct RAMECC2M3CRBase {} ;

  struct M3CR : public RegisterBase<0x48023060, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC2_M3CR_ECCSEIE_Values<RAMECC2::M3CR, 2, 1, ReadWriteMode, RAMECC2M3CRBase> ;
    using ECCDEIE = RAMECC2_M3CR_ECCDEIE_Values<RAMECC2::M3CR, 3, 1, ReadWriteMode, RAMECC2M3CRBase> ;
    using ECCDEBWIE = RAMECC2_M3CR_ECCDEBWIE_Values<RAMECC2::M3CR, 4, 1, ReadWriteMode, RAMECC2M3CRBase> ;
    using ECCELEN = RAMECC2_M3CR_ECCELEN_Values<RAMECC2::M3CR, 5, 1, ReadWriteMode, RAMECC2M3CRBase> ;
    using FieldValues = RAMECC2_M3CR_ECCELEN_Values<RAMECC2::M3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3CRPack  = Register<0x48023060, 32, ReadWriteMode, RAMECC2M3CRBase, T...> ;

  struct RAMECC2M4CRBase {} ;

  struct M4CR : public RegisterBase<0x48023080, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC2_M4CR_ECCSEIE_Values<RAMECC2::M4CR, 2, 1, ReadWriteMode, RAMECC2M4CRBase> ;
    using ECCDEIE = RAMECC2_M4CR_ECCDEIE_Values<RAMECC2::M4CR, 3, 1, ReadWriteMode, RAMECC2M4CRBase> ;
    using ECCDEBWIE = RAMECC2_M4CR_ECCDEBWIE_Values<RAMECC2::M4CR, 4, 1, ReadWriteMode, RAMECC2M4CRBase> ;
    using ECCELEN = RAMECC2_M4CR_ECCELEN_Values<RAMECC2::M4CR, 5, 1, ReadWriteMode, RAMECC2M4CRBase> ;
    using FieldValues = RAMECC2_M4CR_ECCELEN_Values<RAMECC2::M4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4CRPack  = Register<0x48023080, 32, ReadWriteMode, RAMECC2M4CRBase, T...> ;

  struct RAMECC2M5CRBase {} ;

  struct M5CR : public RegisterBase<0x480230A0, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC2_M5CR_ECCSEIE_Values<RAMECC2::M5CR, 2, 1, ReadWriteMode, RAMECC2M5CRBase> ;
    using ECCDEIE = RAMECC2_M5CR_ECCDEIE_Values<RAMECC2::M5CR, 3, 1, ReadWriteMode, RAMECC2M5CRBase> ;
    using ECCDEBWIE = RAMECC2_M5CR_ECCDEBWIE_Values<RAMECC2::M5CR, 4, 1, ReadWriteMode, RAMECC2M5CRBase> ;
    using ECCELEN = RAMECC2_M5CR_ECCELEN_Values<RAMECC2::M5CR, 5, 1, ReadWriteMode, RAMECC2M5CRBase> ;
    using FieldValues = RAMECC2_M5CR_ECCELEN_Values<RAMECC2::M5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5CRPack  = Register<0x480230A0, 32, ReadWriteMode, RAMECC2M5CRBase, T...> ;

  struct RAMECC2M1SRBase {} ;

  struct M1SR : public RegisterBase<0x48023024, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC2_M1SR_SEDCF_Values<RAMECC2::M1SR, 0, 1, ReadWriteMode, RAMECC2M1SRBase> ;
    using DEDF = RAMECC2_M1SR_DEDF_Values<RAMECC2::M1SR, 1, 1, ReadWriteMode, RAMECC2M1SRBase> ;
    using DEBWDF = RAMECC2_M1SR_DEBWDF_Values<RAMECC2::M1SR, 2, 1, ReadWriteMode, RAMECC2M1SRBase> ;
    using FieldValues = RAMECC2_M1SR_DEBWDF_Values<RAMECC2::M1SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1SRPack  = Register<0x48023024, 32, ReadWriteMode, RAMECC2M1SRBase, T...> ;

  struct RAMECC2M2SRBase {} ;

  struct M2SR : public RegisterBase<0x48023044, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC2_M2SR_SEDCF_Values<RAMECC2::M2SR, 0, 1, ReadWriteMode, RAMECC2M2SRBase> ;
    using DEDF = RAMECC2_M2SR_DEDF_Values<RAMECC2::M2SR, 1, 1, ReadWriteMode, RAMECC2M2SRBase> ;
    using DEBWDF = RAMECC2_M2SR_DEBWDF_Values<RAMECC2::M2SR, 2, 1, ReadWriteMode, RAMECC2M2SRBase> ;
    using FieldValues = RAMECC2_M2SR_DEBWDF_Values<RAMECC2::M2SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2SRPack  = Register<0x48023044, 32, ReadWriteMode, RAMECC2M2SRBase, T...> ;

  struct RAMECC2M3SRBase {} ;

  struct M3SR : public RegisterBase<0x48023064, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC2_M3SR_SEDCF_Values<RAMECC2::M3SR, 0, 1, ReadWriteMode, RAMECC2M3SRBase> ;
    using DEDF = RAMECC2_M3SR_DEDF_Values<RAMECC2::M3SR, 1, 1, ReadWriteMode, RAMECC2M3SRBase> ;
    using DEBWDF = RAMECC2_M3SR_DEBWDF_Values<RAMECC2::M3SR, 2, 1, ReadWriteMode, RAMECC2M3SRBase> ;
    using FieldValues = RAMECC2_M3SR_DEBWDF_Values<RAMECC2::M3SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3SRPack  = Register<0x48023064, 32, ReadWriteMode, RAMECC2M3SRBase, T...> ;

  struct RAMECC2M4SRBase {} ;

  struct M4SR : public RegisterBase<0x48023084, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC2_M4SR_SEDCF_Values<RAMECC2::M4SR, 0, 1, ReadWriteMode, RAMECC2M4SRBase> ;
    using DEDF = RAMECC2_M4SR_DEDF_Values<RAMECC2::M4SR, 1, 1, ReadWriteMode, RAMECC2M4SRBase> ;
    using DEBWDF = RAMECC2_M4SR_DEBWDF_Values<RAMECC2::M4SR, 2, 1, ReadWriteMode, RAMECC2M4SRBase> ;
    using FieldValues = RAMECC2_M4SR_DEBWDF_Values<RAMECC2::M4SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4SRPack  = Register<0x48023084, 32, ReadWriteMode, RAMECC2M4SRBase, T...> ;

  struct RAMECC2M5SRBase {} ;

  struct M5SR : public RegisterBase<0x480230A4, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC2_M5SR_SEDCF_Values<RAMECC2::M5SR, 0, 1, ReadWriteMode, RAMECC2M5SRBase> ;
    using DEDF = RAMECC2_M5SR_DEDF_Values<RAMECC2::M5SR, 1, 1, ReadWriteMode, RAMECC2M5SRBase> ;
    using DEBWDF = RAMECC2_M5SR_DEBWDF_Values<RAMECC2::M5SR, 2, 1, ReadWriteMode, RAMECC2M5SRBase> ;
    using FieldValues = RAMECC2_M5SR_DEBWDF_Values<RAMECC2::M5SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5SRPack  = Register<0x480230A4, 32, ReadWriteMode, RAMECC2M5SRBase, T...> ;

  struct RAMECC2M1FARBase {} ;

  struct M1FAR : public RegisterBase<0x48023028, 32, ReadMode>
  {
    using FADD = RAMECC2_M1FAR_FADD_Values<RAMECC2::M1FAR, 0, 32, ReadMode, RAMECC2M1FARBase> ;
    using FieldValues = RAMECC2_M1FAR_FADD_Values<RAMECC2::M1FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FARPack  = Register<0x48023028, 32, ReadMode, RAMECC2M1FARBase, T...> ;

  struct RAMECC2M2FARBase {} ;

  struct M2FAR : public RegisterBase<0x48023048, 32, ReadMode>
  {
    using FADD = RAMECC2_M2FAR_FADD_Values<RAMECC2::M2FAR, 0, 32, ReadMode, RAMECC2M2FARBase> ;
    using FieldValues = RAMECC2_M2FAR_FADD_Values<RAMECC2::M2FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FARPack  = Register<0x48023048, 32, ReadMode, RAMECC2M2FARBase, T...> ;

  struct RAMECC2M3FARBase {} ;

  struct M3FAR : public RegisterBase<0x48023068, 32, ReadMode>
  {
    using FADD = RAMECC2_M3FAR_FADD_Values<RAMECC2::M3FAR, 0, 32, ReadMode, RAMECC2M3FARBase> ;
    using FieldValues = RAMECC2_M3FAR_FADD_Values<RAMECC2::M3FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3FARPack  = Register<0x48023068, 32, ReadMode, RAMECC2M3FARBase, T...> ;

  struct RAMECC2M4FARBase {} ;

  struct M4FAR : public RegisterBase<0x48023088, 32, ReadMode>
  {
    using FADD = RAMECC2_M4FAR_FADD_Values<RAMECC2::M4FAR, 0, 32, ReadMode, RAMECC2M4FARBase> ;
    using FieldValues = RAMECC2_M4FAR_FADD_Values<RAMECC2::M4FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4FARPack  = Register<0x48023088, 32, ReadMode, RAMECC2M4FARBase, T...> ;

  struct RAMECC2M5FARBase {} ;

  struct M5FAR : public RegisterBase<0x480230A8, 32, ReadWriteMode>
  {
    using FADD = RAMECC2_M5FAR_FADD_Values<RAMECC2::M5FAR, 0, 32, ReadWriteMode, RAMECC2M5FARBase> ;
    using FieldValues = RAMECC2_M5FAR_FADD_Values<RAMECC2::M5FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5FARPack  = Register<0x480230A8, 32, ReadWriteMode, RAMECC2M5FARBase, T...> ;

  struct RAMECC2M1FDRLBase {} ;

  struct M1FDRL : public RegisterBase<0x4802302C, 32, ReadMode>
  {
    using FDATAL = RAMECC2_M1FDRL_FDATAL_Values<RAMECC2::M1FDRL, 0, 32, ReadMode, RAMECC2M1FDRLBase> ;
    using FieldValues = RAMECC2_M1FDRL_FDATAL_Values<RAMECC2::M1FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FDRLPack  = Register<0x4802302C, 32, ReadMode, RAMECC2M1FDRLBase, T...> ;

  struct RAMECC2M2FDRLBase {} ;

  struct M2FDRL : public RegisterBase<0x4802304C, 32, ReadMode>
  {
    using FDATAL = RAMECC2_M2FDRL_FDATAL_Values<RAMECC2::M2FDRL, 0, 32, ReadMode, RAMECC2M2FDRLBase> ;
    using FieldValues = RAMECC2_M2FDRL_FDATAL_Values<RAMECC2::M2FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FDRLPack  = Register<0x4802304C, 32, ReadMode, RAMECC2M2FDRLBase, T...> ;

  struct RAMECC2M3FDRLBase {} ;

  struct M3FDRL : public RegisterBase<0x4802306C, 32, ReadMode>
  {
    using FDATAL = RAMECC2_M3FDRL_FDATAL_Values<RAMECC2::M3FDRL, 0, 32, ReadMode, RAMECC2M3FDRLBase> ;
    using FieldValues = RAMECC2_M3FDRL_FDATAL_Values<RAMECC2::M3FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3FDRLPack  = Register<0x4802306C, 32, ReadMode, RAMECC2M3FDRLBase, T...> ;

  struct RAMECC2M4FDRLBase {} ;

  struct M4FDRL : public RegisterBase<0x4802308C, 32, ReadMode>
  {
    using FDATAL = RAMECC2_M4FDRL_FDATAL_Values<RAMECC2::M4FDRL, 0, 32, ReadMode, RAMECC2M4FDRLBase> ;
    using FieldValues = RAMECC2_M4FDRL_FDATAL_Values<RAMECC2::M4FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4FDRLPack  = Register<0x4802308C, 32, ReadMode, RAMECC2M4FDRLBase, T...> ;

  struct RAMECC2M5FDRLBase {} ;

  struct M5FDRL : public RegisterBase<0x480230AC, 32, ReadMode>
  {
    using FDATAL = RAMECC2_M5FDRL_FDATAL_Values<RAMECC2::M5FDRL, 0, 32, ReadMode, RAMECC2M5FDRLBase> ;
    using FieldValues = RAMECC2_M5FDRL_FDATAL_Values<RAMECC2::M5FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5FDRLPack  = Register<0x480230AC, 32, ReadMode, RAMECC2M5FDRLBase, T...> ;

  struct RAMECC2M1FDRHBase {} ;

  struct M1FDRH : public RegisterBase<0x48023030, 32, ReadMode>
  {
    using FDATAH = RAMECC2_M1FDRH_FDATAH_Values<RAMECC2::M1FDRH, 0, 32, ReadMode, RAMECC2M1FDRHBase> ;
    using FieldValues = RAMECC2_M1FDRH_FDATAH_Values<RAMECC2::M1FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FDRHPack  = Register<0x48023030, 32, ReadMode, RAMECC2M1FDRHBase, T...> ;

  struct RAMECC2M2FDRHBase {} ;

  struct M2FDRH : public RegisterBase<0x48023050, 32, ReadWriteMode>
  {
    using FDATAH = RAMECC2_M2FDRH_FDATAH_Values<RAMECC2::M2FDRH, 0, 32, ReadWriteMode, RAMECC2M2FDRHBase> ;
    using FieldValues = RAMECC2_M2FDRH_FDATAH_Values<RAMECC2::M2FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FDRHPack  = Register<0x48023050, 32, ReadWriteMode, RAMECC2M2FDRHBase, T...> ;

  struct RAMECC2M3FDRHBase {} ;

  struct M3FDRH : public RegisterBase<0x48023070, 32, ReadMode>
  {
    using FDATAH = RAMECC2_M3FDRH_FDATAH_Values<RAMECC2::M3FDRH, 0, 32, ReadMode, RAMECC2M3FDRHBase> ;
    using FieldValues = RAMECC2_M3FDRH_FDATAH_Values<RAMECC2::M3FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3FDRHPack  = Register<0x48023070, 32, ReadMode, RAMECC2M3FDRHBase, T...> ;

  struct RAMECC2M4FDRHBase {} ;

  struct M4FDRH : public RegisterBase<0x48023090, 32, ReadMode>
  {
    using FDATAH = RAMECC2_M4FDRH_FDATAH_Values<RAMECC2::M4FDRH, 0, 32, ReadMode, RAMECC2M4FDRHBase> ;
    using FieldValues = RAMECC2_M4FDRH_FDATAH_Values<RAMECC2::M4FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4FDRHPack  = Register<0x48023090, 32, ReadMode, RAMECC2M4FDRHBase, T...> ;

  struct RAMECC2M5FDRHBase {} ;

  struct M5FDRH : public RegisterBase<0x480230B0, 32, ReadMode>
  {
    using FEC = RAMECC2_M5FDRH_FEC_Values<RAMECC2::M5FDRH, 0, 32, ReadMode, RAMECC2M5FDRHBase> ;
    using FieldValues = RAMECC2_M5FDRH_FEC_Values<RAMECC2::M5FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5FDRHPack  = Register<0x480230B0, 32, ReadMode, RAMECC2M5FDRHBase, T...> ;

  struct RAMECC2M1FECRBase {} ;

  struct M1FECR : public RegisterBase<0x48023034, 32, ReadWriteMode>
  {
    using FEC = RAMECC2_M1FECR_FEC_Values<RAMECC2::M1FECR, 0, 32, ReadWriteMode, RAMECC2M1FECRBase> ;
    using FieldValues = RAMECC2_M1FECR_FEC_Values<RAMECC2::M1FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FECRPack  = Register<0x48023034, 32, ReadWriteMode, RAMECC2M1FECRBase, T...> ;

  struct RAMECC2M2FECRBase {} ;

  struct M2FECR : public RegisterBase<0x48023058, 32, ReadWriteMode>
  {
    using FEC = RAMECC2_M2FECR_FEC_Values<RAMECC2::M2FECR, 0, 32, ReadWriteMode, RAMECC2M2FECRBase> ;
    using FieldValues = RAMECC2_M2FECR_FEC_Values<RAMECC2::M2FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FECRPack  = Register<0x48023058, 32, ReadWriteMode, RAMECC2M2FECRBase, T...> ;

  struct RAMECC2M3FECRBase {} ;

  struct M3FECR : public RegisterBase<0x4802307C, 32, ReadMode>
  {
    using FEC = RAMECC2_M3FECR_FEC_Values<RAMECC2::M3FECR, 0, 32, ReadMode, RAMECC2M3FECRBase> ;
    using FieldValues = RAMECC2_M3FECR_FEC_Values<RAMECC2::M3FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3FECRPack  = Register<0x4802307C, 32, ReadMode, RAMECC2M3FECRBase, T...> ;

  struct RAMECC2M4FECRBase {} ;

  struct M4FECR : public RegisterBase<0x48023090, 32, ReadMode>
  {
    using FEC = RAMECC2_M4FECR_FEC_Values<RAMECC2::M4FECR, 0, 32, ReadMode, RAMECC2M4FECRBase> ;
    using FieldValues = RAMECC2_M4FECR_FEC_Values<RAMECC2::M4FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4FECRPack  = Register<0x48023090, 32, ReadMode, RAMECC2M4FECRBase, T...> ;

  struct RAMECC2M5FECRBase {} ;

  struct M5FECR : public RegisterBase<0x480230B4, 32, ReadMode>
  {
    using FEC = RAMECC2_M5FECR_FEC_Values<RAMECC2::M5FECR, 0, 32, ReadMode, RAMECC2M5FECRBase> ;
    using FieldValues = RAMECC2_M5FECR_FEC_Values<RAMECC2::M5FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5FECRPack  = Register<0x480230B4, 32, ReadMode, RAMECC2M5FECRBase, T...> ;

} ;

#endif //#if !defined(RAMECC2REGISTERS_HPP)
