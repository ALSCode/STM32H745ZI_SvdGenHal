/*******************************************************************************
* Filename      : scbactrlregisters.hpp
*
* Details       : System control block ACTLR. This header file is auto-generated
*                 for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SCBACTRLREGISTERS_HPP)
#define SCBACTRLREGISTERS_HPP

#include "scbactrlfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SCB_ACTRL
{
  struct SCB_ACTRLACTRLBase {} ;

  struct ACTRL : public RegisterBase<0xE000E008, 32, ReadWriteMode>
  {
    using DISFOLD = SCB_ACTRL_ACTRL_DISFOLD_Values<SCB_ACTRL::ACTRL, 2, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using FPEXCODIS = SCB_ACTRL_ACTRL_FPEXCODIS_Values<SCB_ACTRL::ACTRL, 10, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using DISRAMODE = SCB_ACTRL_ACTRL_DISRAMODE_Values<SCB_ACTRL::ACTRL, 11, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using DISITMATBFLUSH = SCB_ACTRL_ACTRL_DISITMATBFLUSH_Values<SCB_ACTRL::ACTRL, 12, 1, ReadWriteMode, SCB_ACTRLACTRLBase> ;
    using FieldValues = SCB_ACTRL_ACTRL_DISITMATBFLUSH_Values<SCB_ACTRL::ACTRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACTRLPack  = Register<0xE000E008, 32, ReadWriteMode, SCB_ACTRLACTRLBase, T...> ;

} ;

#endif //#if !defined(SCBACTRLREGISTERS_HPP)
