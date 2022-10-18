/*******************************************************************************
* Filename      : dfsdmfieldvalues.hpp
*
* Details       : Enumerations related with DFSDM peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DFSDMENUMS_HPP)
#define DFSDMENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_DFSDMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_DFSDMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_DFSDMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_CKOUTSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_CKOUTSRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_CKOUTSRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_CKOUTDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH0CFGR1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH0CFGR1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH0CFGR1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH0CFGR1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH0CFGR1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH0CFGR1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH0CFGR1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH0CFGR1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0CFGR2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH0CFGR2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0AWSCDR_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0AWSCDR_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0AWSCDR_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH0AWSCDR_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH0AWSCDR_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0AWSCDR_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH0AWSCDR_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0AWSCDR_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH0AWSCDR_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0AWSCDR_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0WDATR_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0DATINR_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0DATINR_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH0DLYR_PLSSKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH1CFGR1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH1CFGR1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH1CFGR1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH1CFGR1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH1CFGR1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH1CFGR1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH1CFGR1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH1CFGR1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1CFGR2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH1CFGR2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1AWSCDR_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1AWSCDR_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1AWSCDR_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH1AWSCDR_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH1AWSCDR_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1AWSCDR_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH1AWSCDR_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1AWSCDR_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH1AWSCDR_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1AWSCDR_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1WDATR_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1DATINR_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1DATINR_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH1DLYR_PLSSKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH2CFGR1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH2CFGR1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH2CFGR1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH2CFGR1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH2CFGR1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH2CFGR1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH2CFGR1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH2CFGR1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2CFGR2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH2CFGR2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2AWSCDR_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2AWSCDR_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2AWSCDR_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH2AWSCDR_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH2AWSCDR_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2AWSCDR_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH2AWSCDR_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2AWSCDR_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH2AWSCDR_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2AWSCDR_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2WDATR_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2DATINR_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2DATINR_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH2DLYR_PLSSKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH3CFGR1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH3CFGR1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH3CFGR1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH3CFGR1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH3CFGR1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH3CFGR1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH3CFGR1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH3CFGR1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3CFGR2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH3CFGR2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3AWSCDR_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3AWSCDR_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3AWSCDR_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH3AWSCDR_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH3AWSCDR_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3AWSCDR_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH3AWSCDR_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3AWSCDR_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH3AWSCDR_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3AWSCDR_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3WDATR_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3DATINR_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3DATINR_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH3DLYR_PLSSKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH4CFGR1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH4CFGR1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH4CFGR1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH4CFGR1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH4CFGR1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH4CFGR1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH4CFGR1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH4CFGR1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4CFGR2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH4CFGR2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4AWSCDR_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4AWSCDR_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4AWSCDR_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH4AWSCDR_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH4AWSCDR_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4AWSCDR_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH4AWSCDR_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4AWSCDR_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH4AWSCDR_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4AWSCDR_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4WDATR_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4DATINR_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4DATINR_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH4DLYR_PLSSKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH5CFGR1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH5CFGR1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH5CFGR1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH5CFGR1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH5CFGR1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH5CFGR1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH5CFGR1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH5CFGR1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5CFGR2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH5CFGR2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5AWSCDR_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5AWSCDR_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5AWSCDR_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH5AWSCDR_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH5AWSCDR_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5AWSCDR_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH5AWSCDR_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5AWSCDR_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH5AWSCDR_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5AWSCDR_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5WDATR_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5DATINR_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5DATINR_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH5DLYR_PLSSKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH6CFGR1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH6CFGR1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH6CFGR1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH6CFGR1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH6CFGR1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH6CFGR1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH6CFGR1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH6CFGR1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6CFGR2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH6CFGR2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6AWSCDR_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6AWSCDR_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6AWSCDR_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH6AWSCDR_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH6AWSCDR_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6AWSCDR_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH6AWSCDR_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6AWSCDR_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH6AWSCDR_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6AWSCDR_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6WDATR_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6DATINR_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6DATINR_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH6DLYR_PLSSKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR1_DATPACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR1_DATPACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR1_DATPACK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH7CFGR1_DATPACK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH7CFGR1_DATPACK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR1_DATMPX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR1_DATMPX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR1_DATMPX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH7CFGR1_DATMPX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH7CFGR1_DATMPX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR1_CHINSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR1_CHINSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR1_CHINSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR1_CHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR1_CHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR1_CHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR1_CKABEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR1_CKABEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR1_CKABEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR1_SCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR1_SCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR1_SCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR1_SPICKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR1_SPICKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR1_SPICKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH7CFGR1_SPICKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH7CFGR1_SPICKSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR1_SITP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR1_SITP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR1_SITP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH7CFGR1_SITP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH7CFGR1_SITP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR2_OFFSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7CFGR2_DTRBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH7CFGR2_DTRBS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7AWSCDR_AWFORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7AWSCDR_AWFORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7AWSCDR_AWFORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH7AWSCDR_AWFORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH7AWSCDR_AWFORD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7AWSCDR_AWFOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<DFSDM_CH7AWSCDR_AWFOSR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7AWSCDR_BKSCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_CH7AWSCDR_BKSCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7AWSCDR_SCDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7WDATR_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7DATINR_INDAT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7DATINR_INDAT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_CH7DLYR_PLSSKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_AWFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_AWFSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_AWFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_RCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_RSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_RSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_RSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_RCONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_RCONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_RSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_RSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_RSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_JDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_JDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_JDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_JSCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_JSCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_JSCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_JSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_JSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_JSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR1_DFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR1_DFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR1_DFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_EXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_CKABIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR2_CKABIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR2_CKABIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_SCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR2_SCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR2_SCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR2_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR2_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_ROVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR2_ROVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR2_ROVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_JOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR2_JOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR2_JOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_REOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR2_REOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR2_REOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CR2_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0CR2_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0CR2_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_SCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_CKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_RCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ISR_RCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ISR_RCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_JCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ISR_JCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ISR_JCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_AWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ISR_AWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ISR_AWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_ROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ISR_ROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ISR_ROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_JOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ISR_JOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ISR_JOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_REOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ISR_REOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ISR_REOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ISR_JEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ISR_JEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ISR_JEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ICR_CLRSCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ICR_CLRCKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ICR_CLRROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ICR_CLRROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ICR_CLRROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0ICR_CLRJOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0ICR_CLRJOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0ICR_CLRJOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0JCHGR_JCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0FCR_FORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0FCR_FORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0FCR_FORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0FCR_FORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0FCR_FORD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0FCR_FORD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0FCR_FORD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0FCR_FORD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0FCR_FORD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0FCR_FOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0FCR_IOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0JDATAR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0RDATAR_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0RDATAR_RPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0AWHTR_AWHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0AWLTR_AWLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0AWSR_AWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0AWSR_AWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0AWCFR_CLRAWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0AWCFR_CLRAWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0EXMAX_EXMAX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0EXMIN_EXMIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT0CNVTIMR_CNVCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_AWFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_AWFSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_AWFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_RCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_RSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_RSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_RSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_RCONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_RCONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_RSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_RSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_RSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_JDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_JDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_JDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_JSCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_JSCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_JSCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_JSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_JSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_JSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR1_DFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR1_DFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR1_DFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_EXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_CKABIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR2_CKABIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR2_CKABIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_SCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR2_SCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR2_SCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR2_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR2_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_ROVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR2_ROVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR2_ROVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_JOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR2_JOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR2_JOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_REOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR2_REOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR2_REOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CR2_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1CR2_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1CR2_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_SCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_CKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_RCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ISR_RCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ISR_RCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_JCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ISR_JCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ISR_JCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_AWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ISR_AWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ISR_AWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_ROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ISR_ROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ISR_ROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_JOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ISR_JOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ISR_JOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_REOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ISR_REOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ISR_REOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ISR_JEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ISR_JEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ISR_JEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ICR_CLRSCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ICR_CLRCKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ICR_CLRROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ICR_CLRROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ICR_CLRROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1ICR_CLRJOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1ICR_CLRJOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1ICR_CLRJOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CHGR_JCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1FCR_FORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1FCR_FORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1FCR_FORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1FCR_FORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1FCR_FORD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1FCR_FORD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1FCR_FORD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1FCR_FORD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1FCR_FORD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1FCR_FOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1FCR_IOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1JDATAR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1RDATAR_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1RDATAR_RPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1AWHTR_AWHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1AWLTR_AWLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1AWSR_AWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1AWSR_AWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1AWCFR_CLRAWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1AWCFR_CLRAWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1EXMAX_EXMAX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1EXMIN_EXMIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT1CNVTIMR_CNVCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_AWFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_AWFSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_AWFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_RCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_RSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_RSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_RSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_RCONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_RCONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_RSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_RSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_RSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_JDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_JDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_JDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_JSCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_JSCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_JSCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_JSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_JSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_JSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR1_DFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR1_DFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR1_DFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_EXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_CKABIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR2_CKABIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR2_CKABIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_SCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR2_SCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR2_SCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR2_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR2_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_ROVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR2_ROVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR2_ROVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_JOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR2_JOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR2_JOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_REOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR2_REOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR2_REOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CR2_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2CR2_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2CR2_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_SCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_CKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_RCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ISR_RCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ISR_RCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_JCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ISR_JCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ISR_JCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_AWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ISR_AWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ISR_AWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_ROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ISR_ROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ISR_ROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_JOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ISR_JOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ISR_JOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_REOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ISR_REOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ISR_REOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ISR_JEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ISR_JEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ISR_JEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ICR_CLRSCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ICR_CLRCKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ICR_CLRROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ICR_CLRROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ICR_CLRROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2ICR_CLRJOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2ICR_CLRJOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2ICR_CLRJOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2JCHGR_JCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2FCR_FORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2FCR_FORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2FCR_FORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2FCR_FORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2FCR_FORD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2FCR_FORD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2FCR_FORD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2FCR_FORD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2FCR_FORD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2FCR_FOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2FCR_IOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2JDATAR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2RDATAR_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2RDATAR_RPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2AWHTR_AWHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2AWLTR_AWLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2AWSR_AWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2AWSR_AWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2AWCFR_CLRAWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2AWCFR_CLRAWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2EXMAX_EXMAX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2EXMIN_EXMIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT2CNVTIMR_CNVCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_AWFSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_AWFSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_AWFSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_FAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_FAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_FAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_RCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_RDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_RDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_RDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_RSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_RSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_RSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_RCONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_RCONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_RSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_RSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_RSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_JEXTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_JDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_JDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_JDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_JSCAN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_JSCAN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_JSCAN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_JSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_JSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_JSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_JSWSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_JSWSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_JSWSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR1_DFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR1_DFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR1_DFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_AWDCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_EXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_CKABIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR2_CKABIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR2_CKABIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_SCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR2_SCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR2_SCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_AWDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR2_AWDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR2_AWDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_ROVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR2_ROVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR2_ROVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_JOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR2_JOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR2_JOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_REOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR2_REOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR2_REOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CR2_JEOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3CR2_JEOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3CR2_JEOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_SCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_CKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_RCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ISR_RCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ISR_RCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_JCIP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ISR_JCIP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ISR_JCIP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_AWDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ISR_AWDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ISR_AWDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_ROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ISR_ROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ISR_ROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_JOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ISR_JOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ISR_JOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_REOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ISR_REOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ISR_REOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ISR_JEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ISR_JEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ISR_JEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ICR_CLRSCDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ICR_CLRCKABF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ICR_CLRROVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ICR_CLRROVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ICR_CLRROVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3ICR_CLRJOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3ICR_CLRJOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3ICR_CLRJOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3JCHGR_JCHG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3FCR_FORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3FCR_FORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3FCR_FORD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3FCR_FORD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3FCR_FORD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3FCR_FORD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3FCR_FORD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3FCR_FORD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3FCR_FORD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3FCR_FOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3FCR_IOSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3JDATAR_JDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3RDATAR_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3RDATAR_RPEND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RPEND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RPEND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3AWHTR_AWHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3AWLTR_AWLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3AWSR_AWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3AWSR_AWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3AWCFR_CLRAWHTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3AWCFR_CLRAWLTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3EXMAX_EXMAX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3EXMIN_EXMIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DFSDM_DFSDM_FLT3CNVTIMR_CNVCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(DFSDMENUMS_HPP)
