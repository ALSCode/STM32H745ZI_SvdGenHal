/*******************************************************************************
* Filename      : wwdg1registers.hpp
*
* Details       : WWDG. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(WWDG1REGISTERS_HPP)
#define WWDG1REGISTERS_HPP

#include "wwdg1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct WWDG1
{
  struct WWDG1CRBase {} ;

  struct CR : public RegisterBase<0x50003000, 32, ReadWriteMode>
  {
    using T = WWDG1_CR_T_Values<WWDG1::CR, 0, 7, ReadWriteMode, WWDG1CRBase> ;
    using WDGA = WWDG1_CR_WDGA_Values<WWDG1::CR, 7, 1, ReadWriteMode, WWDG1CRBase> ;
    using FieldValues = WWDG1_CR_WDGA_Values<WWDG1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50003000, 32, ReadWriteMode, WWDG1CRBase, T...> ;

  struct WWDG1CFRBase {} ;

  struct CFR : public RegisterBase<0x50003004, 32, ReadWriteMode>
  {
    using W = WWDG1_CFR_W_Values<WWDG1::CFR, 0, 7, ReadWriteMode, WWDG1CFRBase> ;
    using WDGTB = WWDG1_CFR_WDGTB_Values<WWDG1::CFR, 11, 2, ReadWriteMode, WWDG1CFRBase> ;
    using EWI = WWDG1_CFR_EWI_Values<WWDG1::CFR, 9, 1, ReadWriteMode, WWDG1CFRBase> ;
    using FieldValues = WWDG1_CFR_EWI_Values<WWDG1::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x50003004, 32, ReadWriteMode, WWDG1CFRBase, T...> ;

  struct WWDG1SRBase {} ;

  struct SR : public RegisterBase<0x50003008, 32, ReadWriteMode>
  {
    using EWIF = WWDG1_SR_EWIF_Values<WWDG1::SR, 0, 1, ReadWriteMode, WWDG1SRBase> ;
    using FieldValues = WWDG1_SR_EWIF_Values<WWDG1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x50003008, 32, ReadWriteMode, WWDG1SRBase, T...> ;

} ;

#endif //#if !defined(WWDG1REGISTERS_HPP)
