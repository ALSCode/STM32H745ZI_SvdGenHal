/*******************************************************************************
* Filename      : vrefbufregisters.hpp
*
* Details       : VREFBUF. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(VREFBUFREGISTERS_HPP)
#define VREFBUFREGISTERS_HPP

#include "vrefbuffieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct VREFBUF
{
  struct VREFBUFCSRBase {} ;

  struct CSR : public RegisterBase<0x58003C00, 32, ReadWriteMode>
  {
    using ENVR = VREFBUF_CSR_ENVR_Values<VREFBUF::CSR, 0, 1, ReadWriteMode, VREFBUFCSRBase> ;
    using HIZ = VREFBUF_CSR_HIZ_Values<VREFBUF::CSR, 1, 1, ReadWriteMode, VREFBUFCSRBase> ;
    using VRR = VREFBUF_CSR_VRR_Values<VREFBUF::CSR, 3, 1, ReadMode, VREFBUFCSRBase> ;
    using VRS = VREFBUF_CSR_VRS_Values<VREFBUF::CSR, 4, 3, ReadWriteMode, VREFBUFCSRBase> ;
    using FieldValues = VREFBUF_CSR_VRS_Values<VREFBUF::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x58003C00, 32, ReadWriteMode, VREFBUFCSRBase, T...> ;

  struct VREFBUFCCRBase {} ;

  struct CCR : public RegisterBase<0x58003C04, 32, ReadWriteMode>
  {
    using TRIM = VREFBUF_CCR_TRIM_Values<VREFBUF::CCR, 0, 6, ReadWriteMode, VREFBUFCCRBase> ;
    using FieldValues = VREFBUF_CCR_TRIM_Values<VREFBUF::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x58003C04, 32, ReadWriteMode, VREFBUFCCRBase, T...> ;

} ;

#endif //#if !defined(VREFBUFREGISTERS_HPP)
