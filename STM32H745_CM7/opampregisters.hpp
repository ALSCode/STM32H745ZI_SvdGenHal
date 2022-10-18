/*******************************************************************************
* Filename      : opampregisters.hpp
*
* Details       : Operational amplifiers. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(OPAMPREGISTERS_HPP)
#define OPAMPREGISTERS_HPP

#include "opampfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OPAMP
{
  struct OPAMPOPAMP1_CSRBase {} ;

  struct OPAMP1_CSR : public RegisterBase<0x40009000, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP1_CSR_OPAEN_Values<OPAMP::OPAMP1_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using FORCE_VP = OPAMP_OPAMP1_CSR_FORCE_VP_Values<OPAMP::OPAMP1_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP1_CSR_VP_SEL_Values<OPAMP::OPAMP1_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP1_CSR_VM_SEL_Values<OPAMP::OPAMP1_CSR, 5, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using OPAHSM = OPAMP_OPAMP1_CSR_OPAHSM_Values<OPAMP::OPAMP1_CSR, 8, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALON = OPAMP_OPAMP1_CSR_CALON_Values<OPAMP::OPAMP1_CSR, 11, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALSEL = OPAMP_OPAMP1_CSR_CALSEL_Values<OPAMP::OPAMP1_CSR, 12, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP1_CSR_PGA_GAIN_Values<OPAMP::OPAMP1_CSR, 14, 4, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP1_CSR_USERTRIM_Values<OPAMP::OPAMP1_CSR, 18, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using TSTREF = OPAMP_OPAMP1_CSR_TSTREF_Values<OPAMP::OPAMP1_CSR, 29, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALOUT = OPAMP_OPAMP1_CSR_CALOUT_Values<OPAMP::OPAMP1_CSR, 30, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using FieldValues = OPAMP_OPAMP1_CSR_CALOUT_Values<OPAMP::OPAMP1_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP1_CSRPack  = Register<0x40009000, 32, ReadWriteMode, OPAMPOPAMP1_CSRBase, T...> ;

  struct OPAMPOPAMP1_OTRBase {} ;

  struct OPAMP1_OTR : public RegisterBase<0x40009004, 32, ReadWriteMode>
  {
    using TRIMOFFSETN = OPAMP_OPAMP1_OTR_TRIMOFFSETN_Values<OPAMP::OPAMP1_OTR, 0, 5, ReadWriteMode, OPAMPOPAMP1_OTRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values<OPAMP::OPAMP1_OTR, 8, 5, ReadWriteMode, OPAMPOPAMP1_OTRBase> ;
    using FieldValues = OPAMP_OPAMP1_OTR_TRIMOFFSETP_Values<OPAMP::OPAMP1_OTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP1_OTRPack  = Register<0x40009004, 32, ReadWriteMode, OPAMPOPAMP1_OTRBase, T...> ;

  struct OPAMPOPAMP1_HSOTRBase {} ;

  struct OPAMP1_HSOTR : public RegisterBase<0x40009008, 32, ReadWriteMode>
  {
    using TRIMLPOFFSETN = OPAMP_OPAMP1_HSOTR_TRIMLPOFFSETN_Values<OPAMP::OPAMP1_HSOTR, 0, 5, ReadWriteMode, OPAMPOPAMP1_HSOTRBase> ;
    using TRIMLPOFFSETP = OPAMP_OPAMP1_HSOTR_TRIMLPOFFSETP_Values<OPAMP::OPAMP1_HSOTR, 8, 5, ReadWriteMode, OPAMPOPAMP1_HSOTRBase> ;
    using FieldValues = OPAMP_OPAMP1_HSOTR_TRIMLPOFFSETP_Values<OPAMP::OPAMP1_HSOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP1_HSOTRPack  = Register<0x40009008, 32, ReadWriteMode, OPAMPOPAMP1_HSOTRBase, T...> ;

  struct OPAMPOPAMP2_CSRBase {} ;

  struct OPAMP2_CSR : public RegisterBase<0x40009010, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP2_CSR_OPAEN_Values<OPAMP::OPAMP2_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using FORCE_VP = OPAMP_OPAMP2_CSR_FORCE_VP_Values<OPAMP::OPAMP2_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP2_CSR_VM_SEL_Values<OPAMP::OPAMP2_CSR, 5, 2, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using OPAHSM = OPAMP_OPAMP2_CSR_OPAHSM_Values<OPAMP::OPAMP2_CSR, 8, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALON = OPAMP_OPAMP2_CSR_CALON_Values<OPAMP::OPAMP2_CSR, 11, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALSEL = OPAMP_OPAMP2_CSR_CALSEL_Values<OPAMP::OPAMP2_CSR, 12, 2, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP2_CSR_PGA_GAIN_Values<OPAMP::OPAMP2_CSR, 14, 4, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP2_CSR_USERTRIM_Values<OPAMP::OPAMP2_CSR, 18, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using TSTREF = OPAMP_OPAMP2_CSR_TSTREF_Values<OPAMP::OPAMP2_CSR, 29, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALOUT = OPAMP_OPAMP2_CSR_CALOUT_Values<OPAMP::OPAMP2_CSR, 30, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using FieldValues = OPAMP_OPAMP2_CSR_CALOUT_Values<OPAMP::OPAMP2_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP2_CSRPack  = Register<0x40009010, 32, ReadWriteMode, OPAMPOPAMP2_CSRBase, T...> ;

  struct OPAMPOPAMP2_OTRBase {} ;

  struct OPAMP2_OTR : public RegisterBase<0x40009014, 32, ReadWriteMode>
  {
    using TRIMOFFSETN = OPAMP_OPAMP2_OTR_TRIMOFFSETN_Values<OPAMP::OPAMP2_OTR, 0, 5, ReadWriteMode, OPAMPOPAMP2_OTRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values<OPAMP::OPAMP2_OTR, 8, 5, ReadWriteMode, OPAMPOPAMP2_OTRBase> ;
    using FieldValues = OPAMP_OPAMP2_OTR_TRIMOFFSETP_Values<OPAMP::OPAMP2_OTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP2_OTRPack  = Register<0x40009014, 32, ReadWriteMode, OPAMPOPAMP2_OTRBase, T...> ;

  struct OPAMPOPAMP2_HSOTRBase {} ;

  struct OPAMP2_HSOTR : public RegisterBase<0x40009018, 32, ReadWriteMode>
  {
    using TRIMLPOFFSETN = OPAMP_OPAMP2_HSOTR_TRIMLPOFFSETN_Values<OPAMP::OPAMP2_HSOTR, 0, 5, ReadWriteMode, OPAMPOPAMP2_HSOTRBase> ;
    using TRIMLPOFFSETP = OPAMP_OPAMP2_HSOTR_TRIMLPOFFSETP_Values<OPAMP::OPAMP2_HSOTR, 8, 5, ReadWriteMode, OPAMPOPAMP2_HSOTRBase> ;
    using FieldValues = OPAMP_OPAMP2_HSOTR_TRIMLPOFFSETP_Values<OPAMP::OPAMP2_HSOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP2_HSOTRPack  = Register<0x40009018, 32, ReadWriteMode, OPAMPOPAMP2_HSOTRBase, T...> ;

} ;

#endif //#if !defined(OPAMPREGISTERS_HPP)
