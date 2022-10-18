/*******************************************************************************
* Filename      : artregisters.hpp
*
* Details       : accelerator - control register (ART_CTR). This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(ARTREGISTERS_HPP)
#define ARTREGISTERS_HPP

#include "artfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ART
{
  struct ARTCTRBase {} ;

  struct CTR : public RegisterBase<0x40024400, 32, ReadWriteMode>
  {
    using EN = ART_CTR_EN_Values<ART::CTR, 0, 1, ReadWriteMode, ARTCTRBase> ;
    using PCACHEADDR = ART_CTR_PCACHEADDR_Values<ART::CTR, 8, 12, ReadWriteMode, ARTCTRBase> ;
    using FieldValues = ART_CTR_PCACHEADDR_Values<ART::CTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CTRPack  = Register<0x40024400, 32, ReadWriteMode, ARTCTRBase, T...> ;

} ;

#endif //#if !defined(ARTREGISTERS_HPP)
