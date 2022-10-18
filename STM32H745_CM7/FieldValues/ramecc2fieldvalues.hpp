/*******************************************************************************
* Filename      : ramecc2fieldvalues.hpp
*
* Details       : Enumerations related with RAMECC2 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(RAMECC2ENUMS_HPP)
#define RAMECC2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_IER_GIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_IER_GIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_IER_GIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_IER_GECCSEIE__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_IER_GECCSEIE__Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_IER_GECCSEIE__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_IER_GECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_IER_GECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_IER_GECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_IER_GECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_IER_GECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_IER_GECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1CR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M1CR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M1CR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1CR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M1CR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M1CR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1CR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M1CR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M1CR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1CR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M1CR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M1CR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2CR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M2CR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M2CR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2CR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M2CR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M2CR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2CR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M2CR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M2CR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2CR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M2CR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M2CR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3CR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M3CR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M3CR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3CR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M3CR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M3CR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3CR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M3CR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M3CR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3CR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M3CR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M3CR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4CR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M4CR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M4CR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4CR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M4CR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M4CR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4CR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M4CR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M4CR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4CR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M4CR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M4CR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5CR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M5CR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M5CR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5CR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M5CR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M5CR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5CR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M5CR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M5CR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5CR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M5CR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M5CR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1SR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M1SR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M1SR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1SR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M1SR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M1SR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1SR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M1SR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M1SR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2SR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M2SR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M2SR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2SR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M2SR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M2SR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2SR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M2SR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M2SR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3SR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M3SR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M3SR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3SR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M3SR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M3SR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3SR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M3SR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M3SR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4SR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M4SR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M4SR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4SR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M4SR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M4SR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4SR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M4SR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M4SR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5SR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M5SR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M5SR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5SR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M5SR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M5SR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5SR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC2_M5SR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC2_M5SR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1FAR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2FAR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3FAR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4FAR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5FAR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1FDRL_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2FDRL_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3FDRL_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4FDRL_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5FDRL_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1FDRH_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2FDRH_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3FDRH_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4FDRH_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5FDRH_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M1FECR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M2FECR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M3FECR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M4FECR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC2_M5FECR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RAMECC2ENUMS_HPP)
