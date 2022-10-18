/*******************************************************************************
* Filename      : swpmifieldvalues.hpp
*
* Details       : Enumerations related with SWPMI peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SWPMIENUMS_HPP)
#define SWPMIENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_CR_RXDMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_CR_RXDMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_CR_RXDMA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_CR_TXDMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_CR_TXDMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_CR_TXDMA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_CR_RXMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_CR_RXMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_CR_RXMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_CR_TXMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_CR_TXMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_CR_TXMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_CR_LPBK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_CR_LPBK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_CR_LPBK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_CR_SWPACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_CR_SWPACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_CR_SWPACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_CR_DEACT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_CR_DEACT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_CR_DEACT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_CR_SWPTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_CR_SWPTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_CR_SWPTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_BRR_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_RXBFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_RXBFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_RXBFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_TXBEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_TXBEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_TXBEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_RXBERF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_RXBERF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_RXBERF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_RXOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_RXOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_RXOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_TXUNRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_TXUNRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_TXUNRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_RXNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_RXNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_RXNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_TXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_TXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_TXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_TCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_TCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_TCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_SRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_SRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_SRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_SUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_SUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_SUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_DEACTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_DEACTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_DEACTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ISR_RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ISR_RDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ISR_RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ICR_CRXBFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ICR_CRXBFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ICR_CRXBFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ICR_CTXBEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ICR_CTXBEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ICR_CTXBEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ICR_CRXBERF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ICR_CRXBERF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ICR_CRXBERF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ICR_CRXOVRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ICR_CRXOVRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ICR_CRXOVRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ICR_CTXUNRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ICR_CTXUNRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ICR_CTXUNRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ICR_CTCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ICR_CTCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ICR_CTCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ICR_CSRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ICR_CSRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ICR_CSRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_ICR_CRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_ICR_CRDYF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_ICR_CRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_RXBFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_RXBFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_RXBFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_TXBEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_TXBEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_TXBEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_RXBERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_RXBERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_RXBERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_RXOVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_RXOVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_RXOVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_TXUNRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_TXUNRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_TXUNRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_RIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_RIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_RIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_TIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_TIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_TIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_SRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_SRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_SRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_IER_RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_IER_RDYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_IER_RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_RFL_RFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<SWPMI_RFL_RFL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_TDR_TD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_RDR_RD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_OR_SWP_TBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_OR_SWP_TBYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_OR_SWP_TBYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SWPMI_OR_SWP_CLASS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SWPMI_OR_SWP_CLASS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SWPMI_OR_SWP_CLASS_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SWPMIENUMS_HPP)
