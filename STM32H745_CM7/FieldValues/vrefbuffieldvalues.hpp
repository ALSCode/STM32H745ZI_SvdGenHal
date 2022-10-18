/*******************************************************************************
* Filename      : vrefbuffieldvalues.hpp
*
* Details       : Enumerations related with VREFBUF peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(VREFBUFENUMS_HPP)
#define VREFBUFENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CSR_ENVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_CSR_ENVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_CSR_ENVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CSR_HIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_CSR_HIZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_CSR_HIZ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CSR_VRR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_CSR_VRR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_CSR_VRR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CSR_VRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<VREFBUF_CSR_VRS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_CCR_TRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(VREFBUFENUMS_HPP)
