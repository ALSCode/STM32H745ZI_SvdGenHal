/*******************************************************************************
* Filename      : ramecc1fieldvalues.hpp
*
* Details       : Enumerations related with RAMECC1 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(RAMECC1ENUMS_HPP)
#define RAMECC1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_IER_GIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_IER_GIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_IER_GIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_IER_GECCSEIE__Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_IER_GECCSEIE__Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_IER_GECCSEIE__Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_IER_GECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_IER_GECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_IER_GECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_IER_GECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_IER_GECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_IER_GECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1CR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1CR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1CR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1CR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1CR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1CR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1CR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1CR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1CR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1CR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1CR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1CR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1SR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1SR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1SR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1SR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1SR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1SR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1SR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1SR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1SR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1SR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1SR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1SR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FAR_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FAR_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FAR_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FAR_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FAR_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FAR_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FAR_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FAR_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FAR_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FAR_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FAR_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FAR_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FDRL_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FDRL_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FDRL_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FDRL_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FDRL_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FDRL_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FDRL_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FDRL_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FDRL_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FDRL_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FDRL_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FDRL_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FDRH_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FDRH_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FDRH_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FDRH_ECCDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FDRH_ECCDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FDRH_ECCDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FDRH_ECCDEBWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FDRH_ECCDEBWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FDRH_ECCDEBWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FDRH_ECCELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FDRH_ECCELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FDRH_ECCELEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FECR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FECR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FECR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FECR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FECR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FECR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M1FECR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M1FECR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M1FECR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2CR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2CR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2CR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2CR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2CR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2CR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2CR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2CR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2CR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2SR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2SR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2SR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2SR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2SR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2SR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2SR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2SR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2SR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2FAR_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2FAR_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2FAR_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2FAR_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2FAR_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2FAR_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2FAR_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2FAR_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2FAR_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2FDRL_SEDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2FDRL_SEDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2FDRL_SEDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2FDRL_DEDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2FDRL_DEDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2FDRL_DEDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2FDRL_DEBWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RAMECC1_M2FDRL_DEBWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RAMECC1_M2FDRL_DEBWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2FDRH_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M2FECR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M3CR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M3SR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M3FAR_FADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M3FDRL_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M3FDRH_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M3FECR_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M4CR_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M4SR_FDATAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M4FAR_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M4FDRL_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M4FDRH_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M4FECR_FDATAH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M5CR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M5SR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M5FAR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M5FDRL_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M5FDRH_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RAMECC1_M5FECR_FEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(RAMECC1ENUMS_HPP)
