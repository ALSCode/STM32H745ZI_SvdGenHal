/*******************************************************************************
* Filename      : spdifrxfieldvalues.hpp
*
* Details       : Enumerations related with SPDIFRX peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPDIFRXENUMS_HPP)
#define SPDIFRXENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_SPDIFRXEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_SPDIFRXEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_SPDIFRXEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPDIFRX_CR_SPDIFRXEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPDIFRX_CR_SPDIFRXEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_RXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_RXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_RXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_RXSTEO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_RXSTEO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_RXSTEO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_DRFMT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_DRFMT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_DRFMT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPDIFRX_CR_DRFMT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPDIFRX_CR_DRFMT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_PMSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_PMSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_PMSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_VMSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_VMSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_VMSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_CUMSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_CUMSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_CUMSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_PTMSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_PTMSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_PTMSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_CBDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_CBDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_CBDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_CHSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_CHSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_CHSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_NBTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_NBTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_NBTR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPDIFRX_CR_NBTR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPDIFRX_CR_NBTR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_WFA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_WFA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_WFA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_INSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_INSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_INSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPDIFRX_CR_INSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPDIFRX_CR_INSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPDIFRX_CR_INSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPDIFRX_CR_INSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPDIFRX_CR_INSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPDIFRX_CR_INSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_CKSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_CKSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_CKSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CR_CKSBKPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CR_CKSBKPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CR_CKSBKPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IMR_RXNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IMR_RXNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IMR_RXNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IMR_CSRNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IMR_CSRNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IMR_CSRNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IMR_PERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IMR_PERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IMR_PERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IMR_OVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IMR_OVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IMR_OVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IMR_SBLKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IMR_SBLKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IMR_SBLKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IMR_SYNCDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IMR_SYNCDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IMR_SYNCDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IMR_IFEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IMR_IFEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IMR_IFEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_RXNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_RXNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_RXNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_CSRNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_CSRNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_CSRNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_PERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_PERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_PERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_SBD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_SBD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_SBD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_SYNCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_SYNCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_SYNCD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_FERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_FERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_FERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_SERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_SERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_SERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_TERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_SR_TERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_SR_TERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SR_WIDTH5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IFCR_PERRCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IFCR_PERRCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IFCR_PERRCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IFCR_OVRCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IFCR_OVRCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IFCR_OVRCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IFCR_SBDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IFCR_SBDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IFCR_SBDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IFCR_SYNCDCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_IFCR_SYNCDCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_IFCR_SYNCDCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_00_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_00_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_00_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_00_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_00_V_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_00_V_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_00_V_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_00_U_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_00_U_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_00_U_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_00_C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_00_C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_00_C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_00_PT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_00_PT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_00_PT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPDIFRX_DR_00_PT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPDIFRX_DR_00_PT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CSR_USR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CSR_CS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_CSR_SOB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_CSR_SOB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_CSR_SOB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DIR_THI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DIR_TLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_VERR_MINREV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SPDIFRX_VERR_MINREV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_VERR_MAJREV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SPDIFRX_VERR_MAJREV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_IDR_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_SIDR_SID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_01_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_01_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_01_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_01_V_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_01_V_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_01_V_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_01_U_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_01_U_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_01_U_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_01_C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_01_C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_01_C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_01_PT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPDIFRX_DR_01_PT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPDIFRX_DR_01_PT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPDIFRX_DR_01_PT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPDIFRX_DR_01_PT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_01_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_10_DRNL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPDIFRX_DR_10_DRNL2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(SPDIFRXENUMS_HPP)
