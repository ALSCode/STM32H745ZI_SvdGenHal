/*******************************************************************************
* Filename      : scbactrlfieldvalues.hpp
*
* Details       : Enumerations related with SCB_ACTRL peripheral. This header
*                 file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SCBACTRLENUMS_HPP)
#define SCBACTRLENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_DISFOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_DISFOLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_DISFOLD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_FPEXCODIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_FPEXCODIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_FPEXCODIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_DISRAMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_DISRAMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_DISRAMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SCB_ACTRL_ACTRL_DISITMATBFLUSH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SCB_ACTRL_ACTRL_DISITMATBFLUSH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SCB_ACTRL_ACTRL_DISITMATBFLUSH_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SCBACTRLENUMS_HPP)
