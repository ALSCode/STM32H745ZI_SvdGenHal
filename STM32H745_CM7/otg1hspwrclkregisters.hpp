/*******************************************************************************
* Filename      : otg1hspwrclkregisters.hpp
*
* Details       : USB 1 on the go high speed. This header file is auto-generated
*                 for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(OTG1HSPWRCLKREGISTERS_HPP)
#define OTG1HSPWRCLKREGISTERS_HPP

#include "otg1hspwrclkfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OTG1_HS_PWRCLK
{
  struct OTG1_HS_PWRCLKOTG_HS_PCGCRBase {} ;

  struct OTG_HS_PCGCR : public RegisterBase<0x40040E00, 32, ReadWriteMode>
  {
    using STPPCLK = OTG1_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK_Values<OTG1_HS_PWRCLK::OTG_HS_PCGCR, 0, 1, ReadWriteMode, OTG1_HS_PWRCLKOTG_HS_PCGCRBase> ;
    using GATEHCLK = OTG1_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK_Values<OTG1_HS_PWRCLK::OTG_HS_PCGCR, 1, 1, ReadWriteMode, OTG1_HS_PWRCLKOTG_HS_PCGCRBase> ;
    using PHYSUSP = OTG1_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values<OTG1_HS_PWRCLK::OTG_HS_PCGCR, 4, 1, ReadWriteMode, OTG1_HS_PWRCLKOTG_HS_PCGCRBase> ;
    using FieldValues = OTG1_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values<OTG1_HS_PWRCLK::OTG_HS_PCGCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTG_HS_PCGCRPack  = Register<0x40040E00, 32, ReadWriteMode, OTG1_HS_PWRCLKOTG_HS_PCGCRBase, T...> ;

} ;

#endif //#if !defined(OTG1HSPWRCLKREGISTERS_HPP)
