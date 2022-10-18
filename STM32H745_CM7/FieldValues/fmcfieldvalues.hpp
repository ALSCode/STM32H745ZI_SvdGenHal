/*******************************************************************************
* Filename      : fmcfieldvalues.hpp
*
* Details       : Enumerations related with FMC peripheral. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(FMCENUMS_HPP)
#define FMCENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_MBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_MBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_MBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_MUXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_MUXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_MUXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_MTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_MTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_MTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR1_MTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR1_MTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR1_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR1_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_FACCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_FACCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_FACCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_BURSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_BURSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_BURSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WAITPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WAITPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WAITPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WAITCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WAITCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WAITCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_EXTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_EXTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_EXTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_CPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_CPSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_CPSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR1_CPSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR1_CPSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BCR1_CPSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BCR1_CPSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BCR1_CPSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BCR1_CPSIZE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_CBURSTRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_CBURSTRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_CBURSTRW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_CCLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_CCLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_CCLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_WFDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_WFDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_WFDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_BMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_BMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_BMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR1_BMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR1_BMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR1_FMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR1_FMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR1_FMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR1_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR1_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR1_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR1_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR1_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR1_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_MBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_MBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_MBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_MUXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_MUXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_MUXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_MTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_MTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_MTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR2_MTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR2_MTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR2_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR2_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_FACCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_FACCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_FACCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_BURSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_BURSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_BURSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WAITPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WAITPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WAITPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WAITCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WAITCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WAITCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_EXTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_EXTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_EXTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_CPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_CPSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_CPSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR2_CPSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR2_CPSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BCR2_CPSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BCR2_CPSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BCR2_CPSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BCR2_CPSIZE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_CBURSTRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_CBURSTRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_CBURSTRW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_CCLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_CCLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_CCLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_WFDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_WFDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_WFDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_BMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_BMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_BMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR2_BMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR2_BMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR2_FMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR2_FMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR2_FMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR2_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR2_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR2_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR2_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR2_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR2_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_MBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_MBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_MBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_MUXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_MUXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_MUXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_MTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_MTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_MTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR3_MTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR3_MTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR3_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR3_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_FACCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_FACCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_FACCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_BURSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_BURSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_BURSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WAITPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WAITPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WAITPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WAITCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WAITCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WAITCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_EXTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_EXTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_EXTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_CPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_CPSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_CPSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR3_CPSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR3_CPSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BCR3_CPSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BCR3_CPSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BCR3_CPSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BCR3_CPSIZE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_CBURSTRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_CBURSTRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_CBURSTRW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_CCLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_CCLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_CCLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_WFDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_WFDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_WFDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_BMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_BMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_BMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR3_BMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR3_BMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR3_FMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR3_FMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR3_FMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR3_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR3_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR3_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR3_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR3_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR3_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_MBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_MBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_MBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_MUXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_MUXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_MUXEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_MTYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_MTYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_MTYP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR4_MTYP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR4_MTYP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR4_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR4_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_FACCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_FACCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_FACCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_BURSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_BURSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_BURSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WAITPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WAITPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WAITPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WAITCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WAITCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WAITCFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_EXTMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_EXTMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_EXTMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_ASYNCWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_ASYNCWAIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_ASYNCWAIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_CPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_CPSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_CPSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR4_CPSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR4_CPSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BCR4_CPSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BCR4_CPSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BCR4_CPSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BCR4_CPSIZE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_CBURSTRW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_CBURSTRW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_CBURSTRW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_CCLKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_CCLKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_CCLKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_WFDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_WFDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_WFDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_BMAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_BMAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_BMAP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BCR4_BMAP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BCR4_BMAP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BCR4_FMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BCR4_FMCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BCR4_FMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_CLKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_CLKDIV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_DATLAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BTR4_DATLAT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BTR4_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BTR4_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BTR4_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BTR4_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BTR4_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR_PWAITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR_PWAITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR_PWAITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR_PBKEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR_PBKEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR_PBKEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR_PWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR_PWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR_PWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR_PWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR_PWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR_ECCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR_ECCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR_ECCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR_TCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_PCR_TCLR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR_TAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR_TAR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR_TAR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR_TAR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR_TAR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR_TAR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR_TAR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR_TAR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR_TAR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_PCR_TAR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_PCR_TAR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_PCR_TAR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_PCR_TAR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_PCR_TAR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_PCR_TAR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_PCR_TAR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_PCR_TAR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PCR_ECCPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_PCR_ECCPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_PCR_ECCPS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_PCR_ECCPS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_PCR_ECCPS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_PCR_ECCPS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_PCR_ECCPS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_PCR_ECCPS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_PCR_ECCPS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR_IRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR_IRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR_IRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR_ILS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR_ILS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR_ILS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR_IFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR_IFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR_IFS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR_IREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR_IREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR_IREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR_ILEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR_ILEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR_ILEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR_IFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR_IFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR_IFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SR_FEMPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SR_FEMPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SR_FEMPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM_MEMSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM_MEMWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM_MEMHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PMEM_MEMHIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT_ATTSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT_ATTWAIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT_ATTHOLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_PATT_ATTHIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_ECCR_ECC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR1_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR1_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR1_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR1_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR1_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR1_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR1_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR1_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR2_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR2_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR2_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR2_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR2_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR2_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR2_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR2_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR3_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR3_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR3_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR3_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR3_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR3_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR3_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR3_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_ADDSET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR4_ADDSET_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_ADDHLD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR4_ADDHLD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_DATAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_BUSTURN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_BWTR4_BUSTURN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_BWTR4_ACCMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_BWTR4_ACCMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_BWTR4_ACCMOD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_BWTR4_ACCMOD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_BWTR4_ACCMOD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_NC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_NC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_NC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR1_NC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR1_NC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_NR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_NR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_NR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR1_NR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR1_NR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR1_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR1_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_NB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_NB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_NB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_CAS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_CAS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_CAS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR1_CAS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR1_CAS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_SDCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_SDCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_SDCLK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR1_SDCLK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR1_SDCLK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_RBURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_RBURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_RBURST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR1_RPIPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR1_RPIPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR1_RPIPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR1_RPIPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR1_RPIPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_NC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_NC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_NC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR2_NC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR2_NC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_NR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_NR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_NR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR2_NR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR2_NR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_MWID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_MWID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_MWID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR2_MWID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR2_MWID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_NB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_NB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_NB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_CAS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_CAS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_CAS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR2_CAS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR2_CAS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_SDCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_SDCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_SDCLK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR2_SDCLK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR2_SDCLK_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_RBURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_RBURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_RBURST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCR2_RPIPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCR2_RPIPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCR2_RPIPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCR2_RPIPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCR2_RPIPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR1_TMRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR1_TMRD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR1_TXSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR1_TXSR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR1_TRAS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR1_TRAS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR1_TRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR1_TRC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR1_TWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR1_TWR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR1_TRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR1_TRP_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR1_TRCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR1_TRCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR2_TMRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR2_TMRD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR2_TXSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR2_TXSR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR2_TRAS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR2_TRAS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR2_TRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR2_TRC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR2_TWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR2_TWR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR2_TRP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR2_TRP_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDTR2_TRCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDTR2_TRCD_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCMR_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCMR_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCMR_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCMR_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCMR_MODE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDCMR_MODE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDCMR_MODE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDCMR_MODE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDCMR_MODE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCMR_CTB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCMR_CTB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCMR_CTB2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCMR_CTB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCMR_CTB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCMR_CTB1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCMR_NRFS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<FMC_SDCMR_NRFS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDCMR_MRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDRTR_CRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDRTR_CRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDRTR_CRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDRTR_COUNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDRTR_REIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDRTR_REIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDRTR_REIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDSR_RE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDSR_RE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDSR_RE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDSR_MODES1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDSR_MODES1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDSR_MODES1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDSR_MODES1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDSR_MODES1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMC_SDSR_MODES2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMC_SDSR_MODES2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMC_SDSR_MODES2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMC_SDSR_MODES2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMC_SDSR_MODES2_Values, BaseType, 3U> ;
} ;

#endif //#if !defined(FMCENUMS_HPP)
