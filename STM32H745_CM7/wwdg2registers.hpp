/*******************************************************************************
* Filename      : wwdg2registers.hpp
*
* Details       : WWDG. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(WWDG2REGISTERS_HPP)
#define WWDG2REGISTERS_HPP

#include "wwdg2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct WWDG2
{
  struct WWDG2CRBase {} ;

  struct CR : public RegisterBase<0x40002C00, 32, ReadWriteMode>
  {
    using T = WWDG2_CR_T_Values<WWDG2::CR, 0, 7, ReadWriteMode, WWDG2CRBase> ;
    using WDGA = WWDG2_CR_WDGA_Values<WWDG2::CR, 7, 1, ReadWriteMode, WWDG2CRBase> ;
    using FieldValues = WWDG2_CR_WDGA_Values<WWDG2::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40002C00, 32, ReadWriteMode, WWDG2CRBase, T...> ;

  struct WWDG2CFRBase {} ;

  struct CFR : public RegisterBase<0x40002C04, 32, ReadWriteMode>
  {
    using W = WWDG2_CFR_W_Values<WWDG2::CFR, 0, 7, ReadWriteMode, WWDG2CFRBase> ;
    using WDGTB = WWDG2_CFR_WDGTB_Values<WWDG2::CFR, 11, 2, ReadWriteMode, WWDG2CFRBase> ;
    using EWI = WWDG2_CFR_EWI_Values<WWDG2::CFR, 9, 1, ReadWriteMode, WWDG2CFRBase> ;
    using FieldValues = WWDG2_CFR_EWI_Values<WWDG2::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x40002C04, 32, ReadWriteMode, WWDG2CFRBase, T...> ;

  struct WWDG2SRBase {} ;

  struct SR : public RegisterBase<0x40002C08, 32, ReadWriteMode>
  {
    using EWIF = WWDG2_SR_EWIF_Values<WWDG2::SR, 0, 1, ReadWriteMode, WWDG2SRBase> ;
    using FieldValues = WWDG2_SR_EWIF_Values<WWDG2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40002C08, 32, ReadWriteMode, WWDG2SRBase, T...> ;

} ;

#endif //#if !defined(WWDG2REGISTERS_HPP)
