/*******************************************************************************
* Filename      : ramecc1registers.hpp
*
* Details       : ECC controller is associated to each RAM area. This header
*                 file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(RAMECC1REGISTERS_HPP)
#define RAMECC1REGISTERS_HPP

#include "ramecc1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RAMECC1
{
  struct RAMECC1IERBase {} ;

  struct IER : public RegisterBase<0x52009000, 32, ReadWriteMode>
  {
    using GIE = RAMECC1_IER_GIE_Values<RAMECC1::IER, 0, 1, ReadWriteMode, RAMECC1IERBase> ;
    using GECCSEIE_ = RAMECC1_IER_GECCSEIE__Values<RAMECC1::IER, 1, 1, ReadWriteMode, RAMECC1IERBase> ;
    using GECCDEIE = RAMECC1_IER_GECCDEIE_Values<RAMECC1::IER, 2, 1, ReadWriteMode, RAMECC1IERBase> ;
    using GECCDEBWIE = RAMECC1_IER_GECCDEBWIE_Values<RAMECC1::IER, 3, 1, ReadWriteMode, RAMECC1IERBase> ;
    using FieldValues = RAMECC1_IER_GECCDEBWIE_Values<RAMECC1::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x52009000, 32, ReadWriteMode, RAMECC1IERBase, T...> ;

  struct RAMECC1M1CRBase {} ;

  struct M1CR : public RegisterBase<0x52009020, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC1_M1CR_ECCSEIE_Values<RAMECC1::M1CR, 2, 1, ReadWriteMode, RAMECC1M1CRBase> ;
    using ECCDEIE = RAMECC1_M1CR_ECCDEIE_Values<RAMECC1::M1CR, 3, 1, ReadWriteMode, RAMECC1M1CRBase> ;
    using ECCDEBWIE = RAMECC1_M1CR_ECCDEBWIE_Values<RAMECC1::M1CR, 4, 1, ReadWriteMode, RAMECC1M1CRBase> ;
    using ECCELEN = RAMECC1_M1CR_ECCELEN_Values<RAMECC1::M1CR, 5, 1, ReadWriteMode, RAMECC1M1CRBase> ;
    using FieldValues = RAMECC1_M1CR_ECCELEN_Values<RAMECC1::M1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1CRPack  = Register<0x52009020, 32, ReadWriteMode, RAMECC1M1CRBase, T...> ;

  struct RAMECC1M1SRBase {} ;

  struct M1SR : public RegisterBase<0x52009024, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC1_M1SR_ECCSEIE_Values<RAMECC1::M1SR, 2, 1, ReadWriteMode, RAMECC1M1SRBase> ;
    using ECCDEIE = RAMECC1_M1SR_ECCDEIE_Values<RAMECC1::M1SR, 3, 1, ReadWriteMode, RAMECC1M1SRBase> ;
    using ECCDEBWIE = RAMECC1_M1SR_ECCDEBWIE_Values<RAMECC1::M1SR, 4, 1, ReadWriteMode, RAMECC1M1SRBase> ;
    using ECCELEN = RAMECC1_M1SR_ECCELEN_Values<RAMECC1::M1SR, 5, 1, ReadWriteMode, RAMECC1M1SRBase> ;
    using FieldValues = RAMECC1_M1SR_ECCELEN_Values<RAMECC1::M1SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1SRPack  = Register<0x52009024, 32, ReadWriteMode, RAMECC1M1SRBase, T...> ;

  struct RAMECC1M1FARBase {} ;

  struct M1FAR : public RegisterBase<0x52009028, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC1_M1FAR_ECCSEIE_Values<RAMECC1::M1FAR, 2, 1, ReadWriteMode, RAMECC1M1FARBase> ;
    using ECCDEIE = RAMECC1_M1FAR_ECCDEIE_Values<RAMECC1::M1FAR, 3, 1, ReadWriteMode, RAMECC1M1FARBase> ;
    using ECCDEBWIE = RAMECC1_M1FAR_ECCDEBWIE_Values<RAMECC1::M1FAR, 4, 1, ReadWriteMode, RAMECC1M1FARBase> ;
    using ECCELEN = RAMECC1_M1FAR_ECCELEN_Values<RAMECC1::M1FAR, 5, 1, ReadWriteMode, RAMECC1M1FARBase> ;
    using FieldValues = RAMECC1_M1FAR_ECCELEN_Values<RAMECC1::M1FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FARPack  = Register<0x52009028, 32, ReadWriteMode, RAMECC1M1FARBase, T...> ;

  struct RAMECC1M1FDRLBase {} ;

  struct M1FDRL : public RegisterBase<0x5200902C, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC1_M1FDRL_ECCSEIE_Values<RAMECC1::M1FDRL, 2, 1, ReadWriteMode, RAMECC1M1FDRLBase> ;
    using ECCDEIE = RAMECC1_M1FDRL_ECCDEIE_Values<RAMECC1::M1FDRL, 3, 1, ReadWriteMode, RAMECC1M1FDRLBase> ;
    using ECCDEBWIE = RAMECC1_M1FDRL_ECCDEBWIE_Values<RAMECC1::M1FDRL, 4, 1, ReadWriteMode, RAMECC1M1FDRLBase> ;
    using ECCELEN = RAMECC1_M1FDRL_ECCELEN_Values<RAMECC1::M1FDRL, 5, 1, ReadWriteMode, RAMECC1M1FDRLBase> ;
    using FieldValues = RAMECC1_M1FDRL_ECCELEN_Values<RAMECC1::M1FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FDRLPack  = Register<0x5200902C, 32, ReadWriteMode, RAMECC1M1FDRLBase, T...> ;

  struct RAMECC1M1FDRHBase {} ;

  struct M1FDRH : public RegisterBase<0x52009030, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC1_M1FDRH_ECCSEIE_Values<RAMECC1::M1FDRH, 2, 1, ReadWriteMode, RAMECC1M1FDRHBase> ;
    using ECCDEIE = RAMECC1_M1FDRH_ECCDEIE_Values<RAMECC1::M1FDRH, 3, 1, ReadWriteMode, RAMECC1M1FDRHBase> ;
    using ECCDEBWIE = RAMECC1_M1FDRH_ECCDEBWIE_Values<RAMECC1::M1FDRH, 4, 1, ReadWriteMode, RAMECC1M1FDRHBase> ;
    using ECCELEN = RAMECC1_M1FDRH_ECCELEN_Values<RAMECC1::M1FDRH, 5, 1, ReadWriteMode, RAMECC1M1FDRHBase> ;
    using FieldValues = RAMECC1_M1FDRH_ECCELEN_Values<RAMECC1::M1FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FDRHPack  = Register<0x52009030, 32, ReadWriteMode, RAMECC1M1FDRHBase, T...> ;

  struct RAMECC1M1FECRBase {} ;

  struct M1FECR : public RegisterBase<0x52009034, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC1_M1FECR_SEDCF_Values<RAMECC1::M1FECR, 0, 1, ReadWriteMode, RAMECC1M1FECRBase> ;
    using DEDF = RAMECC1_M1FECR_DEDF_Values<RAMECC1::M1FECR, 1, 1, ReadWriteMode, RAMECC1M1FECRBase> ;
    using DEBWDF = RAMECC1_M1FECR_DEBWDF_Values<RAMECC1::M1FECR, 2, 1, ReadWriteMode, RAMECC1M1FECRBase> ;
    using FieldValues = RAMECC1_M1FECR_DEBWDF_Values<RAMECC1::M1FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FECRPack  = Register<0x52009034, 32, ReadWriteMode, RAMECC1M1FECRBase, T...> ;

  struct RAMECC1M2CRBase {} ;

  struct M2CR : public RegisterBase<0x52009040, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC1_M2CR_SEDCF_Values<RAMECC1::M2CR, 0, 1, ReadWriteMode, RAMECC1M2CRBase> ;
    using DEDF = RAMECC1_M2CR_DEDF_Values<RAMECC1::M2CR, 1, 1, ReadWriteMode, RAMECC1M2CRBase> ;
    using DEBWDF = RAMECC1_M2CR_DEBWDF_Values<RAMECC1::M2CR, 2, 1, ReadWriteMode, RAMECC1M2CRBase> ;
    using FieldValues = RAMECC1_M2CR_DEBWDF_Values<RAMECC1::M2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2CRPack  = Register<0x52009040, 32, ReadWriteMode, RAMECC1M2CRBase, T...> ;

  struct RAMECC1M2SRBase {} ;

  struct M2SR : public RegisterBase<0x52009044, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC1_M2SR_SEDCF_Values<RAMECC1::M2SR, 0, 1, ReadWriteMode, RAMECC1M2SRBase> ;
    using DEDF = RAMECC1_M2SR_DEDF_Values<RAMECC1::M2SR, 1, 1, ReadWriteMode, RAMECC1M2SRBase> ;
    using DEBWDF = RAMECC1_M2SR_DEBWDF_Values<RAMECC1::M2SR, 2, 1, ReadWriteMode, RAMECC1M2SRBase> ;
    using FieldValues = RAMECC1_M2SR_DEBWDF_Values<RAMECC1::M2SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2SRPack  = Register<0x52009044, 32, ReadWriteMode, RAMECC1M2SRBase, T...> ;

  struct RAMECC1M2FARBase {} ;

  struct M2FAR : public RegisterBase<0x52009048, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC1_M2FAR_SEDCF_Values<RAMECC1::M2FAR, 0, 1, ReadWriteMode, RAMECC1M2FARBase> ;
    using DEDF = RAMECC1_M2FAR_DEDF_Values<RAMECC1::M2FAR, 1, 1, ReadWriteMode, RAMECC1M2FARBase> ;
    using DEBWDF = RAMECC1_M2FAR_DEBWDF_Values<RAMECC1::M2FAR, 2, 1, ReadWriteMode, RAMECC1M2FARBase> ;
    using FieldValues = RAMECC1_M2FAR_DEBWDF_Values<RAMECC1::M2FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FARPack  = Register<0x52009048, 32, ReadWriteMode, RAMECC1M2FARBase, T...> ;

  struct RAMECC1M2FDRLBase {} ;

  struct M2FDRL : public RegisterBase<0x5200904C, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC1_M2FDRL_SEDCF_Values<RAMECC1::M2FDRL, 0, 1, ReadWriteMode, RAMECC1M2FDRLBase> ;
    using DEDF = RAMECC1_M2FDRL_DEDF_Values<RAMECC1::M2FDRL, 1, 1, ReadWriteMode, RAMECC1M2FDRLBase> ;
    using DEBWDF = RAMECC1_M2FDRL_DEBWDF_Values<RAMECC1::M2FDRL, 2, 1, ReadWriteMode, RAMECC1M2FDRLBase> ;
    using FieldValues = RAMECC1_M2FDRL_DEBWDF_Values<RAMECC1::M2FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FDRLPack  = Register<0x5200904C, 32, ReadWriteMode, RAMECC1M2FDRLBase, T...> ;

  struct RAMECC1M2FDRHBase {} ;

  struct M2FDRH : public RegisterBase<0x52009050, 32, ReadMode>
  {
    using FADD = RAMECC1_M2FDRH_FADD_Values<RAMECC1::M2FDRH, 0, 32, ReadMode, RAMECC1M2FDRHBase> ;
    using FieldValues = RAMECC1_M2FDRH_FADD_Values<RAMECC1::M2FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FDRHPack  = Register<0x52009050, 32, ReadMode, RAMECC1M2FDRHBase, T...> ;

  struct RAMECC1M2FECRBase {} ;

  struct M2FECR : public RegisterBase<0x52009058, 32, ReadMode>
  {
    using FADD = RAMECC1_M2FECR_FADD_Values<RAMECC1::M2FECR, 0, 32, ReadMode, RAMECC1M2FECRBase> ;
    using FieldValues = RAMECC1_M2FECR_FADD_Values<RAMECC1::M2FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FECRPack  = Register<0x52009058, 32, ReadMode, RAMECC1M2FECRBase, T...> ;

  struct RAMECC1M3CRBase {} ;

  struct M3CR : public RegisterBase<0x52009060, 32, ReadMode>
  {
    using FADD = RAMECC1_M3CR_FADD_Values<RAMECC1::M3CR, 0, 32, ReadMode, RAMECC1M3CRBase> ;
    using FieldValues = RAMECC1_M3CR_FADD_Values<RAMECC1::M3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3CRPack  = Register<0x52009060, 32, ReadMode, RAMECC1M3CRBase, T...> ;

  struct RAMECC1M3SRBase {} ;

  struct M3SR : public RegisterBase<0x52009064, 32, ReadMode>
  {
    using FADD = RAMECC1_M3SR_FADD_Values<RAMECC1::M3SR, 0, 32, ReadMode, RAMECC1M3SRBase> ;
    using FieldValues = RAMECC1_M3SR_FADD_Values<RAMECC1::M3SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3SRPack  = Register<0x52009064, 32, ReadMode, RAMECC1M3SRBase, T...> ;

  struct RAMECC1M3FARBase {} ;

  struct M3FAR : public RegisterBase<0x52009068, 32, ReadWriteMode>
  {
    using FADD = RAMECC1_M3FAR_FADD_Values<RAMECC1::M3FAR, 0, 32, ReadWriteMode, RAMECC1M3FARBase> ;
    using FieldValues = RAMECC1_M3FAR_FADD_Values<RAMECC1::M3FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3FARPack  = Register<0x52009068, 32, ReadWriteMode, RAMECC1M3FARBase, T...> ;

  struct RAMECC1M3FDRLBase {} ;

  struct M3FDRL : public RegisterBase<0x5200906C, 32, ReadMode>
  {
    using FDATAL = RAMECC1_M3FDRL_FDATAL_Values<RAMECC1::M3FDRL, 0, 32, ReadMode, RAMECC1M3FDRLBase> ;
    using FieldValues = RAMECC1_M3FDRL_FDATAL_Values<RAMECC1::M3FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3FDRLPack  = Register<0x5200906C, 32, ReadMode, RAMECC1M3FDRLBase, T...> ;

  struct RAMECC1M3FDRHBase {} ;

  struct M3FDRH : public RegisterBase<0x52009070, 32, ReadMode>
  {
    using FDATAL = RAMECC1_M3FDRH_FDATAL_Values<RAMECC1::M3FDRH, 0, 32, ReadMode, RAMECC1M3FDRHBase> ;
    using FieldValues = RAMECC1_M3FDRH_FDATAL_Values<RAMECC1::M3FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3FDRHPack  = Register<0x52009070, 32, ReadMode, RAMECC1M3FDRHBase, T...> ;

  struct RAMECC1M3FECRBase {} ;

  struct M3FECR : public RegisterBase<0x5200907C, 32, ReadMode>
  {
    using FDATAL = RAMECC1_M3FECR_FDATAL_Values<RAMECC1::M3FECR, 0, 32, ReadMode, RAMECC1M3FECRBase> ;
    using FieldValues = RAMECC1_M3FECR_FDATAL_Values<RAMECC1::M3FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M3FECRPack  = Register<0x5200907C, 32, ReadMode, RAMECC1M3FECRBase, T...> ;

  struct RAMECC1M4CRBase {} ;

  struct M4CR : public RegisterBase<0x52009080, 32, ReadMode>
  {
    using FDATAL = RAMECC1_M4CR_FDATAL_Values<RAMECC1::M4CR, 0, 32, ReadMode, RAMECC1M4CRBase> ;
    using FieldValues = RAMECC1_M4CR_FDATAL_Values<RAMECC1::M4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4CRPack  = Register<0x52009080, 32, ReadMode, RAMECC1M4CRBase, T...> ;

  struct RAMECC1M4SRBase {} ;

  struct M4SR : public RegisterBase<0x52009084, 32, ReadMode>
  {
    using FDATAL = RAMECC1_M4SR_FDATAL_Values<RAMECC1::M4SR, 0, 32, ReadMode, RAMECC1M4SRBase> ;
    using FieldValues = RAMECC1_M4SR_FDATAL_Values<RAMECC1::M4SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4SRPack  = Register<0x52009084, 32, ReadMode, RAMECC1M4SRBase, T...> ;

  struct RAMECC1M4FARBase {} ;

  struct M4FAR : public RegisterBase<0x52009088, 32, ReadMode>
  {
    using FDATAH = RAMECC1_M4FAR_FDATAH_Values<RAMECC1::M4FAR, 0, 32, ReadMode, RAMECC1M4FARBase> ;
    using FieldValues = RAMECC1_M4FAR_FDATAH_Values<RAMECC1::M4FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4FARPack  = Register<0x52009088, 32, ReadMode, RAMECC1M4FARBase, T...> ;

  struct RAMECC1M4FDRLBase {} ;

  struct M4FDRL : public RegisterBase<0x5200908C, 32, ReadWriteMode>
  {
    using FDATAH = RAMECC1_M4FDRL_FDATAH_Values<RAMECC1::M4FDRL, 0, 32, ReadWriteMode, RAMECC1M4FDRLBase> ;
    using FieldValues = RAMECC1_M4FDRL_FDATAH_Values<RAMECC1::M4FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4FDRLPack  = Register<0x5200908C, 32, ReadWriteMode, RAMECC1M4FDRLBase, T...> ;

  struct RAMECC1M4FDRHBase {} ;

  struct M4FDRH : public RegisterBase<0x52009090, 32, ReadMode>
  {
    using FDATAH = RAMECC1_M4FDRH_FDATAH_Values<RAMECC1::M4FDRH, 0, 32, ReadMode, RAMECC1M4FDRHBase> ;
    using FieldValues = RAMECC1_M4FDRH_FDATAH_Values<RAMECC1::M4FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4FDRHPack  = Register<0x52009090, 32, ReadMode, RAMECC1M4FDRHBase, T...> ;

  struct RAMECC1M4FECRBase {} ;

  struct M4FECR : public RegisterBase<0x52009090, 32, ReadMode>
  {
    using FDATAH = RAMECC1_M4FECR_FDATAH_Values<RAMECC1::M4FECR, 0, 32, ReadMode, RAMECC1M4FECRBase> ;
    using FieldValues = RAMECC1_M4FECR_FDATAH_Values<RAMECC1::M4FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M4FECRPack  = Register<0x52009090, 32, ReadMode, RAMECC1M4FECRBase, T...> ;

  struct RAMECC1M5CRBase {} ;

  struct M5CR : public RegisterBase<0x520090A0, 32, ReadMode>
  {
    using FEC = RAMECC1_M5CR_FEC_Values<RAMECC1::M5CR, 0, 32, ReadMode, RAMECC1M5CRBase> ;
    using FieldValues = RAMECC1_M5CR_FEC_Values<RAMECC1::M5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5CRPack  = Register<0x520090A0, 32, ReadMode, RAMECC1M5CRBase, T...> ;

  struct RAMECC1M5SRBase {} ;

  struct M5SR : public RegisterBase<0x520090A4, 32, ReadWriteMode>
  {
    using FEC = RAMECC1_M5SR_FEC_Values<RAMECC1::M5SR, 0, 32, ReadWriteMode, RAMECC1M5SRBase> ;
    using FieldValues = RAMECC1_M5SR_FEC_Values<RAMECC1::M5SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5SRPack  = Register<0x520090A4, 32, ReadWriteMode, RAMECC1M5SRBase, T...> ;

  struct RAMECC1M5FARBase {} ;

  struct M5FAR : public RegisterBase<0x520090A8, 32, ReadWriteMode>
  {
    using FEC = RAMECC1_M5FAR_FEC_Values<RAMECC1::M5FAR, 0, 32, ReadWriteMode, RAMECC1M5FARBase> ;
    using FieldValues = RAMECC1_M5FAR_FEC_Values<RAMECC1::M5FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5FARPack  = Register<0x520090A8, 32, ReadWriteMode, RAMECC1M5FARBase, T...> ;

  struct RAMECC1M5FDRLBase {} ;

  struct M5FDRL : public RegisterBase<0x520090AC, 32, ReadMode>
  {
    using FEC = RAMECC1_M5FDRL_FEC_Values<RAMECC1::M5FDRL, 0, 32, ReadMode, RAMECC1M5FDRLBase> ;
    using FieldValues = RAMECC1_M5FDRL_FEC_Values<RAMECC1::M5FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5FDRLPack  = Register<0x520090AC, 32, ReadMode, RAMECC1M5FDRLBase, T...> ;

  struct RAMECC1M5FDRHBase {} ;

  struct M5FDRH : public RegisterBase<0x520090B0, 32, ReadMode>
  {
    using FEC = RAMECC1_M5FDRH_FEC_Values<RAMECC1::M5FDRH, 0, 32, ReadMode, RAMECC1M5FDRHBase> ;
    using FieldValues = RAMECC1_M5FDRH_FEC_Values<RAMECC1::M5FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5FDRHPack  = Register<0x520090B0, 32, ReadMode, RAMECC1M5FDRHBase, T...> ;

  struct RAMECC1M5FECRBase {} ;

  struct M5FECR : public RegisterBase<0x520090B4, 32, ReadMode>
  {
    using FEC = RAMECC1_M5FECR_FEC_Values<RAMECC1::M5FECR, 0, 32, ReadMode, RAMECC1M5FECRBase> ;
    using FieldValues = RAMECC1_M5FECR_FEC_Values<RAMECC1::M5FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M5FECRPack  = Register<0x520090B4, 32, ReadMode, RAMECC1M5FECRBase, T...> ;

} ;

#endif //#if !defined(RAMECC1REGISTERS_HPP)
