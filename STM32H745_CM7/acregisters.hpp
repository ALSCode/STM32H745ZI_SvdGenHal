/*******************************************************************************
* Filename      : acregisters.hpp
*
* Details       : Access control. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(ACREGISTERS_HPP)
#define ACREGISTERS_HPP

#include "acfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AC
{
  struct ACITCMCRBase {} ;

  struct ITCMCR : public RegisterBase<0xE000EF90, 32, ReadWriteMode>
  {
    using EN = AC_ITCMCR_EN_Values<AC::ITCMCR, 0, 1, ReadWriteMode, ACITCMCRBase> ;
    using RMW = AC_ITCMCR_RMW_Values<AC::ITCMCR, 1, 1, ReadWriteMode, ACITCMCRBase> ;
    using RETEN = AC_ITCMCR_RETEN_Values<AC::ITCMCR, 2, 1, ReadWriteMode, ACITCMCRBase> ;
    using SZ = AC_ITCMCR_SZ_Values<AC::ITCMCR, 3, 4, ReadWriteMode, ACITCMCRBase> ;
    using FieldValues = AC_ITCMCR_SZ_Values<AC::ITCMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ITCMCRPack  = Register<0xE000EF90, 32, ReadWriteMode, ACITCMCRBase, T...> ;

  struct ACDTCMCRBase {} ;

  struct DTCMCR : public RegisterBase<0xE000EF94, 32, ReadWriteMode>
  {
    using EN = AC_DTCMCR_EN_Values<AC::DTCMCR, 0, 1, ReadWriteMode, ACDTCMCRBase> ;
    using RMW = AC_DTCMCR_RMW_Values<AC::DTCMCR, 1, 1, ReadWriteMode, ACDTCMCRBase> ;
    using RETEN = AC_DTCMCR_RETEN_Values<AC::DTCMCR, 2, 1, ReadWriteMode, ACDTCMCRBase> ;
    using SZ = AC_DTCMCR_SZ_Values<AC::DTCMCR, 3, 4, ReadWriteMode, ACDTCMCRBase> ;
    using FieldValues = AC_DTCMCR_SZ_Values<AC::DTCMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTCMCRPack  = Register<0xE000EF94, 32, ReadWriteMode, ACDTCMCRBase, T...> ;

  struct ACAHBPCRBase {} ;

  struct AHBPCR : public RegisterBase<0xE000EF98, 32, ReadWriteMode>
  {
    using EN = AC_AHBPCR_EN_Values<AC::AHBPCR, 0, 1, ReadWriteMode, ACAHBPCRBase> ;
    using SZ = AC_AHBPCR_SZ_Values<AC::AHBPCR, 1, 3, ReadWriteMode, ACAHBPCRBase> ;
    using FieldValues = AC_AHBPCR_SZ_Values<AC::AHBPCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHBPCRPack  = Register<0xE000EF98, 32, ReadWriteMode, ACAHBPCRBase, T...> ;

  struct ACCACRBase {} ;

  struct CACR : public RegisterBase<0xE000EF9C, 32, ReadWriteMode>
  {
    using SIWT = AC_CACR_SIWT_Values<AC::CACR, 0, 1, ReadWriteMode, ACCACRBase> ;
    using ECCEN = AC_CACR_ECCEN_Values<AC::CACR, 1, 1, ReadWriteMode, ACCACRBase> ;
    using FORCEWT = AC_CACR_FORCEWT_Values<AC::CACR, 2, 1, ReadWriteMode, ACCACRBase> ;
    using FieldValues = AC_CACR_FORCEWT_Values<AC::CACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CACRPack  = Register<0xE000EF9C, 32, ReadWriteMode, ACCACRBase, T...> ;

  struct ACAHBSCRBase {} ;

  struct AHBSCR : public RegisterBase<0xE000EFA0, 32, ReadWriteMode>
  {
    using CTL = AC_AHBSCR_CTL_Values<AC::AHBSCR, 0, 2, ReadWriteMode, ACAHBSCRBase> ;
    using TPRI = AC_AHBSCR_TPRI_Values<AC::AHBSCR, 2, 9, ReadWriteMode, ACAHBSCRBase> ;
    using INITCOUNT = AC_AHBSCR_INITCOUNT_Values<AC::AHBSCR, 11, 5, ReadWriteMode, ACAHBSCRBase> ;
    using FieldValues = AC_AHBSCR_INITCOUNT_Values<AC::AHBSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHBSCRPack  = Register<0xE000EFA0, 32, ReadWriteMode, ACAHBSCRBase, T...> ;

  struct ACABFSRBase {} ;

  struct ABFSR : public RegisterBase<0xE000EFA8, 32, ReadWriteMode>
  {
    using ITCM = AC_ABFSR_ITCM_Values<AC::ABFSR, 0, 1, ReadWriteMode, ACABFSRBase> ;
    using DTCM = AC_ABFSR_DTCM_Values<AC::ABFSR, 1, 1, ReadWriteMode, ACABFSRBase> ;
    using AHBP = AC_ABFSR_AHBP_Values<AC::ABFSR, 2, 1, ReadWriteMode, ACABFSRBase> ;
    using AXIM = AC_ABFSR_AXIM_Values<AC::ABFSR, 3, 1, ReadWriteMode, ACABFSRBase> ;
    using EPPB = AC_ABFSR_EPPB_Values<AC::ABFSR, 4, 1, ReadWriteMode, ACABFSRBase> ;
    using AXIMTYPE = AC_ABFSR_AXIMTYPE_Values<AC::ABFSR, 8, 2, ReadWriteMode, ACABFSRBase> ;
    using FieldValues = AC_ABFSR_AXIMTYPE_Values<AC::ABFSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ABFSRPack  = Register<0xE000EFA8, 32, ReadWriteMode, ACABFSRBase, T...> ;

} ;

#endif //#if !defined(ACREGISTERS_HPP)
