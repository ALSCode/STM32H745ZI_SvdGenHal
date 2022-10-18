/*******************************************************************************
* Filename      : ramecc3registers.hpp
*
* Details       : ECC controller is associated to each RAM area. This header
*                 file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(RAMECC3REGISTERS_HPP)
#define RAMECC3REGISTERS_HPP

#include "ramecc3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RAMECC3
{
  struct RAMECC3IERBase {} ;

  struct IER : public RegisterBase<0x58027000, 32, ReadWriteMode>
  {
    using GIE = RAMECC3_IER_GIE_Values<RAMECC3::IER, 0, 1, ReadWriteMode, RAMECC3IERBase> ;
    using GECCSEIE_ = RAMECC3_IER_GECCSEIE__Values<RAMECC3::IER, 1, 1, ReadWriteMode, RAMECC3IERBase> ;
    using GECCDEIE = RAMECC3_IER_GECCDEIE_Values<RAMECC3::IER, 2, 1, ReadWriteMode, RAMECC3IERBase> ;
    using GECCDEBWIE = RAMECC3_IER_GECCDEBWIE_Values<RAMECC3::IER, 3, 1, ReadWriteMode, RAMECC3IERBase> ;
    using FieldValues = RAMECC3_IER_GECCDEBWIE_Values<RAMECC3::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x58027000, 32, ReadWriteMode, RAMECC3IERBase, T...> ;

  struct RAMECC3M1CRBase {} ;

  struct M1CR : public RegisterBase<0x58027020, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC3_M1CR_ECCSEIE_Values<RAMECC3::M1CR, 2, 1, ReadWriteMode, RAMECC3M1CRBase> ;
    using ECCDEIE = RAMECC3_M1CR_ECCDEIE_Values<RAMECC3::M1CR, 3, 1, ReadWriteMode, RAMECC3M1CRBase> ;
    using ECCDEBWIE = RAMECC3_M1CR_ECCDEBWIE_Values<RAMECC3::M1CR, 4, 1, ReadWriteMode, RAMECC3M1CRBase> ;
    using ECCELEN = RAMECC3_M1CR_ECCELEN_Values<RAMECC3::M1CR, 5, 1, ReadWriteMode, RAMECC3M1CRBase> ;
    using FieldValues = RAMECC3_M1CR_ECCELEN_Values<RAMECC3::M1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1CRPack  = Register<0x58027020, 32, ReadWriteMode, RAMECC3M1CRBase, T...> ;

  struct RAMECC3M2CRBase {} ;

  struct M2CR : public RegisterBase<0x58027040, 32, ReadWriteMode>
  {
    using ECCSEIE = RAMECC3_M2CR_ECCSEIE_Values<RAMECC3::M2CR, 2, 1, ReadWriteMode, RAMECC3M2CRBase> ;
    using ECCDEIE = RAMECC3_M2CR_ECCDEIE_Values<RAMECC3::M2CR, 3, 1, ReadWriteMode, RAMECC3M2CRBase> ;
    using ECCDEBWIE = RAMECC3_M2CR_ECCDEBWIE_Values<RAMECC3::M2CR, 4, 1, ReadWriteMode, RAMECC3M2CRBase> ;
    using ECCELEN = RAMECC3_M2CR_ECCELEN_Values<RAMECC3::M2CR, 5, 1, ReadWriteMode, RAMECC3M2CRBase> ;
    using FieldValues = RAMECC3_M2CR_ECCELEN_Values<RAMECC3::M2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2CRPack  = Register<0x58027040, 32, ReadWriteMode, RAMECC3M2CRBase, T...> ;

  struct RAMECC3M1SRBase {} ;

  struct M1SR : public RegisterBase<0x58027024, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC3_M1SR_SEDCF_Values<RAMECC3::M1SR, 0, 1, ReadWriteMode, RAMECC3M1SRBase> ;
    using DEDF = RAMECC3_M1SR_DEDF_Values<RAMECC3::M1SR, 1, 1, ReadWriteMode, RAMECC3M1SRBase> ;
    using DEBWDF = RAMECC3_M1SR_DEBWDF_Values<RAMECC3::M1SR, 2, 1, ReadWriteMode, RAMECC3M1SRBase> ;
    using FieldValues = RAMECC3_M1SR_DEBWDF_Values<RAMECC3::M1SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1SRPack  = Register<0x58027024, 32, ReadWriteMode, RAMECC3M1SRBase, T...> ;

  struct RAMECC3M2SRBase {} ;

  struct M2SR : public RegisterBase<0x58027044, 32, ReadWriteMode>
  {
    using SEDCF = RAMECC3_M2SR_SEDCF_Values<RAMECC3::M2SR, 0, 1, ReadWriteMode, RAMECC3M2SRBase> ;
    using DEDF = RAMECC3_M2SR_DEDF_Values<RAMECC3::M2SR, 1, 1, ReadWriteMode, RAMECC3M2SRBase> ;
    using DEBWDF = RAMECC3_M2SR_DEBWDF_Values<RAMECC3::M2SR, 2, 1, ReadWriteMode, RAMECC3M2SRBase> ;
    using FieldValues = RAMECC3_M2SR_DEBWDF_Values<RAMECC3::M2SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2SRPack  = Register<0x58027044, 32, ReadWriteMode, RAMECC3M2SRBase, T...> ;

  struct RAMECC3M1FARBase {} ;

  struct M1FAR : public RegisterBase<0x58027028, 32, ReadMode>
  {
    using FADD = RAMECC3_M1FAR_FADD_Values<RAMECC3::M1FAR, 0, 32, ReadMode, RAMECC3M1FARBase> ;
    using FieldValues = RAMECC3_M1FAR_FADD_Values<RAMECC3::M1FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FARPack  = Register<0x58027028, 32, ReadMode, RAMECC3M1FARBase, T...> ;

  struct RAMECC3M2FARBase {} ;

  struct M2FAR : public RegisterBase<0x58027048, 32, ReadMode>
  {
    using FADD = RAMECC3_M2FAR_FADD_Values<RAMECC3::M2FAR, 0, 32, ReadMode, RAMECC3M2FARBase> ;
    using FieldValues = RAMECC3_M2FAR_FADD_Values<RAMECC3::M2FAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FARPack  = Register<0x58027048, 32, ReadMode, RAMECC3M2FARBase, T...> ;

  struct RAMECC3M1FDRLBase {} ;

  struct M1FDRL : public RegisterBase<0x5802702C, 32, ReadMode>
  {
    using FDATAL = RAMECC3_M1FDRL_FDATAL_Values<RAMECC3::M1FDRL, 0, 32, ReadMode, RAMECC3M1FDRLBase> ;
    using FieldValues = RAMECC3_M1FDRL_FDATAL_Values<RAMECC3::M1FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FDRLPack  = Register<0x5802702C, 32, ReadMode, RAMECC3M1FDRLBase, T...> ;

  struct RAMECC3M2FDRLBase {} ;

  struct M2FDRL : public RegisterBase<0x5802704C, 32, ReadMode>
  {
    using FDATAL = RAMECC3_M2FDRL_FDATAL_Values<RAMECC3::M2FDRL, 0, 32, ReadMode, RAMECC3M2FDRLBase> ;
    using FieldValues = RAMECC3_M2FDRL_FDATAL_Values<RAMECC3::M2FDRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FDRLPack  = Register<0x5802704C, 32, ReadMode, RAMECC3M2FDRLBase, T...> ;

  struct RAMECC3M1FDRHBase {} ;

  struct M1FDRH : public RegisterBase<0x58027030, 32, ReadMode>
  {
    using FDATAH = RAMECC3_M1FDRH_FDATAH_Values<RAMECC3::M1FDRH, 0, 32, ReadMode, RAMECC3M1FDRHBase> ;
    using FieldValues = RAMECC3_M1FDRH_FDATAH_Values<RAMECC3::M1FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FDRHPack  = Register<0x58027030, 32, ReadMode, RAMECC3M1FDRHBase, T...> ;

  struct RAMECC3M2FDRHBase {} ;

  struct M2FDRH : public RegisterBase<0x58027050, 32, ReadWriteMode>
  {
    using FDATAH = RAMECC3_M2FDRH_FDATAH_Values<RAMECC3::M2FDRH, 0, 32, ReadWriteMode, RAMECC3M2FDRHBase> ;
    using FieldValues = RAMECC3_M2FDRH_FDATAH_Values<RAMECC3::M2FDRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FDRHPack  = Register<0x58027050, 32, ReadWriteMode, RAMECC3M2FDRHBase, T...> ;

  struct RAMECC3M1FECRBase {} ;

  struct M1FECR : public RegisterBase<0x58027034, 32, ReadWriteMode>
  {
    using FEC = RAMECC3_M1FECR_FEC_Values<RAMECC3::M1FECR, 0, 32, ReadWriteMode, RAMECC3M1FECRBase> ;
    using FieldValues = RAMECC3_M1FECR_FEC_Values<RAMECC3::M1FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M1FECRPack  = Register<0x58027034, 32, ReadWriteMode, RAMECC3M1FECRBase, T...> ;

  struct RAMECC3M2FECRBase {} ;

  struct M2FECR : public RegisterBase<0x58027058, 32, ReadWriteMode>
  {
    using FEC = RAMECC3_M2FECR_FEC_Values<RAMECC3::M2FECR, 0, 32, ReadWriteMode, RAMECC3M2FECRBase> ;
    using FieldValues = RAMECC3_M2FECR_FEC_Values<RAMECC3::M2FECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using M2FECRPack  = Register<0x58027058, 32, ReadWriteMode, RAMECC3M2FECRBase, T...> ;

} ;

#endif //#if !defined(RAMECC3REGISTERS_HPP)
