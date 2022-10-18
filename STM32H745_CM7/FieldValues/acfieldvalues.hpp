/*******************************************************************************
* Filename      : acfieldvalues.hpp
*
* Details       : Enumerations related with AC peripheral. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(ACENUMS_HPP)
#define ACENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ITCMCR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ITCMCR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ITCMCR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ITCMCR_RMW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ITCMCR_RMW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ITCMCR_RMW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ITCMCR_RETEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ITCMCR_RETEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ITCMCR_RETEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ITCMCR_SZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AC_ITCMCR_SZ_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_DTCMCR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_DTCMCR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_DTCMCR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_DTCMCR_RMW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_DTCMCR_RMW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_DTCMCR_RMW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_DTCMCR_RETEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_DTCMCR_RETEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_DTCMCR_RETEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_DTCMCR_SZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AC_DTCMCR_SZ_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_AHBPCR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_AHBPCR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_AHBPCR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_AHBPCR_SZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_AHBPCR_SZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_AHBPCR_SZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AC_AHBPCR_SZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AC_AHBPCR_SZ_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AC_AHBPCR_SZ_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AC_AHBPCR_SZ_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AC_AHBPCR_SZ_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AC_AHBPCR_SZ_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_CACR_SIWT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_CACR_SIWT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_CACR_SIWT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_CACR_ECCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_CACR_ECCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_CACR_ECCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_CACR_FORCEWT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_CACR_FORCEWT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_CACR_FORCEWT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_AHBSCR_CTL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_AHBSCR_CTL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_AHBSCR_CTL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AC_AHBSCR_CTL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AC_AHBSCR_CTL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_AHBSCR_TPRI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_AHBSCR_INITCOUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 15U> ;
  using Value16 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 16U> ;
  using Value17 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 17U> ;
  using Value18 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 18U> ;
  using Value19 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 19U> ;
  using Value20 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 20U> ;
  using Value21 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 21U> ;
  using Value22 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 22U> ;
  using Value23 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 23U> ;
  using Value24 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 24U> ;
  using Value25 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 25U> ;
  using Value26 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 26U> ;
  using Value27 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 27U> ;
  using Value28 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 28U> ;
  using Value29 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 29U> ;
  using Value30 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 30U> ;
  using Value31 = FieldValue<AC_AHBSCR_INITCOUNT_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ABFSR_ITCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ABFSR_ITCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ABFSR_ITCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ABFSR_DTCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ABFSR_DTCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ABFSR_DTCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ABFSR_AHBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ABFSR_AHBP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ABFSR_AHBP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ABFSR_AXIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ABFSR_AXIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ABFSR_AXIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ABFSR_EPPB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ABFSR_EPPB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ABFSR_EPPB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct AC_ABFSR_AXIMTYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<AC_ABFSR_AXIMTYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<AC_ABFSR_AXIMTYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<AC_ABFSR_AXIMTYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<AC_ABFSR_AXIMTYPE_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(ACENUMS_HPP)
