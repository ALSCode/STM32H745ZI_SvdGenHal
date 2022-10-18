/*******************************************************************************
* Filename      : artfieldvalues.hpp
*
* Details       : Enumerations related with ART peripheral. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(ARTENUMS_HPP)
#define ARTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ART_CTR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ART_CTR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ART_CTR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ART_CTR_PCACHEADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ARTENUMS_HPP)
