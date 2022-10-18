/*******************************************************************************
* Filename      : ramecc3fieldvalues.hpp
*
* Details       : Enumerations related with RAMECC3 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(RAMECC3ENUMS_HPP)
#define RAMECC3ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_IER_GIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_IER_GIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_IER_GIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_IER_GECCSEIE__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_IER_GECCSEIE__Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_IER_GECCSEIE__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_IER_GECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_IER_GECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_IER_GECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_IER_GECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_IER_GECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_IER_GECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1CR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M1CR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M1CR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1CR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M1CR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M1CR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1CR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M1CR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M1CR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1CR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M1CR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M1CR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2CR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M2CR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M2CR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2CR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M2CR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M2CR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2CR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M2CR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M2CR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2CR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M2CR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M2CR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1SR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M1SR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M1SR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1SR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M1SR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M1SR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1SR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M1SR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M1SR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2SR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M2SR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M2SR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2SR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M2SR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M2SR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2SR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC3_M2SR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC3_M2SR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1FAR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2FAR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1FDRL_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2FDRL_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1FDRH_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2FDRH_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M1FECR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC3_M2FECR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RAMECC3ENUMS_HPP)
