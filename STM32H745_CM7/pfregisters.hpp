/*******************************************************************************
* Filename      : pfregisters.hpp
*
* Details       : Processor features. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(PFREGISTERS_HPP)
#define PFREGISTERS_HPP

#include "pffieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PF
{
  struct PFCLIDRBase {} ;

  struct CLIDR : public RegisterBase<0xE000ED78, 32, ReadMode>
  {
    using CL1 = PF_CLIDR_CL1_Values<PF::CLIDR, 0, 3, ReadMode, PFCLIDRBase> ;
    using CL2 = PF_CLIDR_CL2_Values<PF::CLIDR, 3, 3, ReadMode, PFCLIDRBase> ;
    using CL3 = PF_CLIDR_CL3_Values<PF::CLIDR, 6, 3, ReadMode, PFCLIDRBase> ;
    using CL4 = PF_CLIDR_CL4_Values<PF::CLIDR, 9, 3, ReadMode, PFCLIDRBase> ;
    using CL5 = PF_CLIDR_CL5_Values<PF::CLIDR, 12, 3, ReadMode, PFCLIDRBase> ;
    using CL6 = PF_CLIDR_CL6_Values<PF::CLIDR, 15, 3, ReadMode, PFCLIDRBase> ;
    using CL7 = PF_CLIDR_CL7_Values<PF::CLIDR, 18, 3, ReadMode, PFCLIDRBase> ;
    using LoUIS = PF_CLIDR_LoUIS_Values<PF::CLIDR, 21, 3, ReadMode, PFCLIDRBase> ;
    using LoC = PF_CLIDR_LoC_Values<PF::CLIDR, 24, 3, ReadMode, PFCLIDRBase> ;
    using LoU = PF_CLIDR_LoU_Values<PF::CLIDR, 27, 3, ReadMode, PFCLIDRBase> ;
    using FieldValues = PF_CLIDR_LoU_Values<PF::CLIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLIDRPack  = Register<0xE000ED78, 32, ReadMode, PFCLIDRBase, T...> ;

  struct PFCTRBase {} ;

  struct CTR : public RegisterBase<0xE000ED7C, 32, ReadMode>
  {
    using _IminLine = PF_CTR__IminLine_Values<PF::CTR, 0, 4, ReadMode, PFCTRBase> ;
    using DMinLine = PF_CTR_DMinLine_Values<PF::CTR, 16, 4, ReadMode, PFCTRBase> ;
    using ERG = PF_CTR_ERG_Values<PF::CTR, 20, 4, ReadMode, PFCTRBase> ;
    using CWG = PF_CTR_CWG_Values<PF::CTR, 24, 4, ReadMode, PFCTRBase> ;
    using Format = PF_CTR_Format_Values<PF::CTR, 29, 3, ReadMode, PFCTRBase> ;
    using FieldValues = PF_CTR_Format_Values<PF::CTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRPack  = Register<0xE000ED7C, 32, ReadMode, PFCTRBase, T...> ;

  struct PFCCSIDRBase {} ;

  struct CCSIDR : public RegisterBase<0xE000ED80, 32, ReadMode>
  {
    using LineSize = PF_CCSIDR_LineSize_Values<PF::CCSIDR, 0, 3, ReadMode, PFCCSIDRBase> ;
    using Associativity = PF_CCSIDR_Associativity_Values<PF::CCSIDR, 3, 10, ReadMode, PFCCSIDRBase> ;
    using NumSets = PF_CCSIDR_NumSets_Values<PF::CCSIDR, 13, 15, ReadMode, PFCCSIDRBase> ;
    using WA = PF_CCSIDR_WA_Values<PF::CCSIDR, 28, 1, ReadMode, PFCCSIDRBase> ;
    using RA = PF_CCSIDR_RA_Values<PF::CCSIDR, 29, 1, ReadMode, PFCCSIDRBase> ;
    using WB = PF_CCSIDR_WB_Values<PF::CCSIDR, 30, 1, ReadMode, PFCCSIDRBase> ;
    using WT = PF_CCSIDR_WT_Values<PF::CCSIDR, 31, 1, ReadMode, PFCCSIDRBase> ;
    using FieldValues = PF_CCSIDR_WT_Values<PF::CCSIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCSIDRPack  = Register<0xE000ED80, 32, ReadMode, PFCCSIDRBase, T...> ;

} ;

#endif //#if !defined(PFREGISTERS_HPP)
