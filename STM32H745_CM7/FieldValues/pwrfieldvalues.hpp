/*******************************************************************************
* Filename      : pwrfieldvalues.hpp
*
* Details       : Enumerations related with PWR peripheral. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(PWRENUMS_HPP)
#define PWRENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_LPDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_LPDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_LPDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_PVDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_PVDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_PVDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_PLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_PLS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_PLS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR1_PLS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR1_PLS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_CR1_PLS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_CR1_PLS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_CR1_PLS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_CR1_PLS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_DBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_DBP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_DBP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_FLPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_FLPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_FLPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_SVOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_SVOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_SVOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR1_SVOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR1_SVOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_AVDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_AVDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_AVDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_ALS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_ALS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_ALS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR1_ALS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR1_ALS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR1_PVDO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR1_PVDO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR1_PVDO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR1_ACTVOSRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR1_ACTVOSRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR1_ACTVOSRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR1_ACTVOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR1_ACTVOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR1_ACTVOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CSR1_ACTVOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CSR1_ACTVOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CSR1_AVDO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CSR1_AVDO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CSR1_AVDO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_BREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_BREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_BREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_MONEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_MONEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_MONEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_BRRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_BRRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_BRRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_VBATL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_VBATL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_VBATL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_VBATH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_VBATH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_VBATH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_TEMPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_TEMPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_TEMPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_TEMPH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_TEMPH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_TEMPH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_BYPASS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_BYPASS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_BYPASS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_LDOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_LDOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_LDOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_SDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_SDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_SDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_VBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_VBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_VBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_VBRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_VBRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_VBRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_USB33DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_USB33DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_USB33DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_USBREGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_USBREGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_USBREGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_USB33RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_USB33RDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_USB33RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_PDDS_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_PDDS_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_PDDS_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_PDDS_D2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_PDDS_D2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_PDDS_D2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_PDDS_D3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_PDDS_D3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_PDDS_D3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_STOPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_STOPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_STOPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_SBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_SBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_SBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_SBF_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_SBF_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_SBF_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_SBF_D2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_SBF_D2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_SBF_D2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_CSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_CSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_CSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CPUCR_RUN_D3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CPUCR_RUN_D3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CPUCR_RUN_D3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_D3CR_VOSRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_D3CR_VOSRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_D3CR_VOSRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_D3CR_VOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_D3CR_VOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_D3CR_VOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_D3CR_VOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_D3CR_VOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPCR_WKUPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPFR_WKUPF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPFR_WKUPF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPFR_WKUPF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPFR_WKUPF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPFR_WKUPF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPFR_WKUPF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPFR_WKUPF3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPFR_WKUPF3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPFR_WKUPF3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPFR_WKUPF4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPFR_WKUPF4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPFR_WKUPF4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPFR_WKUPF5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPFR_WKUPF5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPFR_WKUPF5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPFR_WKUPF6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPFR_WKUPF6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPFR_WKUPF6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPEN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPEN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPEN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPEN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPEN2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPEN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPEN3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPEN3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPEN3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPEN4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPEN4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPEN4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPEN5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPEN5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPEN5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPEN6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPEN6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPEN6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPP5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPP5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPP6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPP6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPP6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPPUPD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPPUPD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPPUPD1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_WKUPEPR_WKUPPUPD1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_WKUPEPR_WKUPPUPD1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPPUPD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPPUPD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPPUPD2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_WKUPEPR_WKUPPUPD2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_WKUPEPR_WKUPPUPD2_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPPUPD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPPUPD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPPUPD3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_WKUPEPR_WKUPPUPD3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_WKUPEPR_WKUPPUPD3_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPPUPD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPPUPD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPPUPD4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_WKUPEPR_WKUPPUPD4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_WKUPEPR_WKUPPUPD4_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPPUPD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPPUPD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPPUPD5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_WKUPEPR_WKUPPUPD5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_WKUPEPR_WKUPPUPD5_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_WKUPEPR_WKUPPUPD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_WKUPEPR_WKUPPUPD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_WKUPEPR_WKUPPUPD6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_WKUPEPR_WKUPPUPD6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_WKUPEPR_WKUPPUPD6_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(PWRENUMS_HPP)
