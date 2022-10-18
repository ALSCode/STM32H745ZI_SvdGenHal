/*******************************************************************************
* Filename      : ethernetmacfieldvalues.hpp
*
* Details       : Enumerations related with Ethernet_MAC peripheral. This header
*                 file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETMACENUMS_HPP)
#define ETHERNETMACENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMAMR_SWR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMAMR_SWR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMAMR_SWR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMAMR_DA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMAMR_DA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMAMR_DA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMAMR_TXPR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMAMR_TXPR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMAMR_TXPR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMAMR_PR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMAMR_PR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMAMR_PR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_DMAMR_PR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_DMAMR_PR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_DMAMR_PR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_DMAMR_PR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_DMAMR_PR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_DMAMR_PR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMAMR_INTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMAMR_INTM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMAMR_INTM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMASBMR_FB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMASBMR_FB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMASBMR_FB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMASBMR_AAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMASBMR_AAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMASBMR_AAL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMASBMR_MB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMASBMR_MB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMASBMR_MB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMASBMR_RB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMASBMR_RB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMASBMR_RB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMAISR_DC0IS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMAISR_DC0IS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMAISR_DC0IS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMAISR_MTLIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMAISR_MTLIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMAISR_MTLIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMAISR_MACIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMAISR_MACIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMAISR_MACIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMADSR_AXWHSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMADSR_AXWHSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMADSR_AXWHSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMADSR_RPS0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_DMADSR_RPS0_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMADSR_TPS0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_DMADSR_TPS0_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACCR_MSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACCR_PBLX8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACCR_PBLX8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACCR_PBLX8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACCR_DSL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACCR_DSL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACCR_DSL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_DMACCR_DSL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_DMACCR_DSL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_DMACCR_DSL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_DMACCR_DSL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_DMACCR_DSL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_DMACCR_DSL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACTxCR_ST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACTxCR_ST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACTxCR_ST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACTxCR_OSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACTxCR_OSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACTxCR_OSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACTxCR_TSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACTxCR_TSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACTxCR_TSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACTxCR_TXPBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACRxCR_SR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACRxCR_SR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACRxCR_SR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACRxCR_RBSZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACRxCR_RXPBL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACRxCR_RPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACRxCR_RPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACRxCR_RPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACTxDLAR_TDESLA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACRxDLAR_RDESLA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACTxDTPR_TDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACRxDTPR_RDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACTxRLR_TDRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACRxRLR_RDRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_TIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_TIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_TIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_TXSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_TXSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_TXSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_TBUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_TBUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_TBUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_RIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_RIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_RIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_RBUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_RBUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_RBUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_RSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_RSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_RSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_RWTE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_RWTE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_RWTE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_ETIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_ETIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_ETIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_ERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_ERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_ERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_FBEE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_FBEE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_FBEE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_CDEE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_CDEE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_CDEE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_AIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_AIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_AIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACIER_NIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACIER_NIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACIER_NIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACRxIWTR_RWT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACCATxDR_CURTDESAPTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACCARxDR_CURRDESAPTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACCATxBR_CURTBUFAPTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACCARxBR_CURRBUFAPTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_TI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_TI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_TI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_TPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_TPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_TPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_TBU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_TBU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_TBU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_RI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_RI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_RI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_RBU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_RBU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_RBU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_RPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_RPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_RPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_RWT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_RWT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_RWT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_ET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_ET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_ET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_ER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_ER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_ER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_FBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_FBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_FBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_CDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_CDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_CDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_AIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_AIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_AIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_NIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_NIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_NIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_TEB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_TEB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_TEB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_DMACSR_TEB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_DMACSR_TEB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_DMACSR_TEB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_DMACSR_TEB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_DMACSR_TEB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_DMACSR_TEB_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACSR_REB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACSR_REB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACSR_REB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_DMACSR_REB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_DMACSR_REB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_DMACSR_REB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_DMACSR_REB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_DMACSR_REB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_DMACSR_REB_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACMFCR_MFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_DMACMFCR_MFCO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_DMACMFCR_MFCO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_DMACMFCR_MFCO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLOMR_DTXSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLOMR_DTXSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLOMR_DTXSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLOMR_CNTPRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLOMR_CNTPRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLOMR_CNTPRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLOMR_CNTCLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLOMR_CNTCLR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLOMR_CNTCLR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLISR_Q0IS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLISR_Q0IS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLISR_Q0IS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQOMR_FTQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQOMR_FTQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQOMR_FTQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQOMR_TSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQOMR_TSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQOMR_TSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQOMR_TXQEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQOMR_TXQEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQOMR_TXQEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLTxQOMR_TXQEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLTxQOMR_TXQEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQOMR_TTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQOMR_TTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQOMR_TTC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLTxQOMR_TTC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLTxQOMR_TTC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MTLTxQOMR_TTC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MTLTxQOMR_TTC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MTLTxQOMR_TTC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MTLTxQOMR_TTC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQOMR_TQS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQUR_UFFRMCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQUR_UFCNTOVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQUR_UFCNTOVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQUR_UFCNTOVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQDR_TXQPAUSED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQDR_TXQPAUSED_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQDR_TXQPAUSED_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQDR_TRCSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQDR_TRCSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQDR_TRCSTS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLTxQDR_TRCSTS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLTxQDR_TRCSTS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQDR_TWCSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQDR_TWCSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQDR_TWCSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQDR_TXQSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQDR_TXQSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQDR_TXQSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQDR_TXSTSFSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQDR_TXSTSFSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQDR_TXSTSFSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQDR_PTXQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQDR_PTXQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQDR_PTXQ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLTxQDR_PTXQ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLTxQDR_PTXQ_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MTLTxQDR_PTXQ_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MTLTxQDR_PTXQ_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MTLTxQDR_PTXQ_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MTLTxQDR_PTXQ_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLTxQDR_STXSTSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLTxQDR_STXSTSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLTxQDR_STXSTSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLTxQDR_STXSTSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLTxQDR_STXSTSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MTLTxQDR_STXSTSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MTLTxQDR_STXSTSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MTLTxQDR_STXSTSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MTLTxQDR_STXSTSF_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLQICSR_TXUNFIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLQICSR_TXUNFIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLQICSR_TXUNFIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLQICSR_TXUIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLQICSR_TXUIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLQICSR_TXUIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLQICSR_RXOVFIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLQICSR_RXOVFIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLQICSR_RXOVFIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLQICSR_RXOIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLQICSR_RXOIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLQICSR_RXOIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_RTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_RTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_RTC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLRxQOMR_RTC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLRxQOMR_RTC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_FUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_FUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_FUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_FEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_FEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_FEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_RSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_RSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_RSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_DIS_TCP_EF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_DIS_TCP_EF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_DIS_TCP_EF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_EHFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_EHFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_EHFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_RFA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFA_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_RFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFD_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFD_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFD_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFD_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MTLRxQOMR_RFD_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQOMR_RQS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQOMR_RQS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQOMR_RQS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLRxQOMR_RQS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLRxQOMR_RQS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MTLRxQOMR_RQS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MTLRxQOMR_RQS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MTLRxQOMR_RQS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MTLRxQOMR_RQS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQMPOCR_OVFPKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQMPOCR_OVFCNTOVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQMPOCR_OVFCNTOVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQMPOCR_OVFCNTOVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQMPOCR_MISPKTCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQMPOCR_MISCNTOVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQMPOCR_MISCNTOVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQMPOCR_MISCNTOVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQDR_RWCSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQDR_RWCSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQDR_RWCSTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQDR_RRCSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQDR_RRCSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQDR_RRCSTS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLRxQDR_RRCSTS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLRxQDR_RRCSTS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQDR_RXQSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MTLRxQDR_RXQSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MTLRxQDR_RXQSTS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MTLRxQDR_RXQSTS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MTLRxQDR_RXQSTS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MTLRxQDR_PRXQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_RE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_RE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_RE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_TE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_TE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_TE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_PRELEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_PRELEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_PRELEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACCR_PRELEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACCR_PRELEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_DC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_DC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_DC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_BL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_BL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_BL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACCR_BL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACCR_BL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_DR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_DR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_DCRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_DCRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_DCRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_DO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_DO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_DO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_ECRSFD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_ECRSFD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_ECRSFD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_LM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_LM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_LM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_DM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_DM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_DM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_FES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_FES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_FES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_JE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_JE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_JE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_JD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_JD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_JD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_WD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_WD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_WD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_ACS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_ACS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_ACS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_CST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_CST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_CST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_S2KP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_S2KP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_S2KP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_GPSLCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_GPSLCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_GPSLCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_IPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_IPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_IPG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACCR_IPG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACCR_IPG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACCR_IPG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACCR_IPG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACCR_IPG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACCR_IPG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_IPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_IPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_IPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_SARC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_SARC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_SARC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACCR_SARC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACCR_SARC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACCR_SARC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACCR_SARC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACCR_SARC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACCR_SARC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACCR_ARPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACCR_ARPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACCR_ARPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACECR_GPSL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACECR_DCRCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACECR_DCRCC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACECR_DCRCC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACECR_SPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACECR_SPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACECR_SPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACECR_USP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACECR_USP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACECR_USP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACECR_EIPGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACECR_EIPGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACECR_EIPGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACECR_EIPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACECR_EIPG_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_PR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_PR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_PR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_HUC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_HUC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_HUC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_HMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_HMC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_HMC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_DAIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_DAIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_DAIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_PM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_PM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_PM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_DBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_DBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_DBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_PCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_PCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_PCF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACPFR_PCF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACPFR_PCF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_SAIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_SAIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_SAIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_SAF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_SAF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_SAF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_HPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_HPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_HPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_VTFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_VTFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_VTFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_IPFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_IPFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_IPFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_DNTU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_DNTU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_DNTU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPFR_RA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPFR_RA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPFR_RA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACWTR_WTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACWTR_WTO_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACWTR_PWE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACWTR_PWE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACWTR_PWE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHT0R_HT31T0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHT1R_HT63T32_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_VL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_ETV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_ETV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_ETV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_VTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_VTIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_VTIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_ESVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_ESVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_ESVL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_ERSVLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_ERSVLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_ERSVLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_DOVLTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_DOVLTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_DOVLTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_EVLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_EVLS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_EVLS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACVTR_EVLS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACVTR_EVLS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_EVLRXS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_EVLRXS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_EVLRXS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_VTHM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_VTHM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_VTHM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_EDVLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_EDVLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_EDVLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_ERIVLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_ERIVLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_ERIVLT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_EIVLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_EIVLS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_EIVLS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACVTR_EIVLS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACVTR_EIVLS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVTR_EIVLRXS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVTR_EIVLRXS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVTR_EIVLRXS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVHTR_VLHT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVIR_VLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVIR_VLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVIR_VLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVIR_VLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACVIR_VLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACVIR_VLC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVIR_VLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVIR_VLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVIR_VLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVIR_CSVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVIR_CSVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVIR_CSVL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVIR_VLTI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACVIR_VLTI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACVIR_VLTI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIVIR_VLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIVIR_VLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIVIR_VLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIVIR_VLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACIVIR_VLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACIVIR_VLC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIVIR_VLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIVIR_VLP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIVIR_VLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIVIR_CSVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIVIR_CSVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIVIR_CSVL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIVIR_VLTI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIVIR_VLTI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIVIR_VLTI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACQTxFCR_FCB_BPA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACQTxFCR_FCB_BPA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACQTxFCR_FCB_BPA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACQTxFCR_TFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACQTxFCR_TFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACQTxFCR_TFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACQTxFCR_PLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACQTxFCR_PLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACQTxFCR_PLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACQTxFCR_PLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACQTxFCR_PLT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACQTxFCR_PLT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACQTxFCR_PLT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACQTxFCR_PLT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACQTxFCR_PLT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACQTxFCR_DZPQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACQTxFCR_DZPQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACQTxFCR_DZPQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACQTxFCR_PT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxFCR_RFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxFCR_RFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxFCR_RFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxFCR_UP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxFCR_UP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxFCR_UP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_PHYIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_PHYIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_PHYIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_PMTIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_PMTIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_PMTIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_LPIIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_LPIIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_LPIIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_MMCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_MMCIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_MMCIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_MMCRXIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_MMCRXIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_MMCRXIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_MMCTXIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_MMCTXIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_MMCTXIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_TSIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_TSIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_TSIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_TXSTSIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_TXSTSIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_TXSTSIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACISR_RXSTSIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACISR_RXSTSIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACISR_RXSTSIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIER_PHYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIER_PHYIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIER_PHYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIER_PMTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIER_PMTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIER_PMTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIER_LPIIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIER_LPIIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIER_LPIIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIER_TSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIER_TSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIER_TSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIER_TXSTSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIER_TXSTSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIER_TXSTSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACIER_RXSTSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACIER_RXSTSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACIER_RXSTSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxTxSR_TJT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxTxSR_TJT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxTxSR_TJT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxTxSR_NCARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxTxSR_NCARR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxTxSR_NCARR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxTxSR_LCARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxTxSR_LCARR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxTxSR_LCARR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxTxSR_EXDEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxTxSR_EXDEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxTxSR_EXDEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxTxSR_LCOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxTxSR_LCOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxTxSR_LCOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxTxSR_EXCOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxTxSR_EXCOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxTxSR_EXCOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRxTxSR_RWT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACRxTxSR_RWT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACRxTxSR_RWT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_PWRDWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_PWRDWN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_PWRDWN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_MGKPKTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_MGKPKTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_MGKPKTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_RWKPKTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_RWKPKTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_RWKPKTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_MGKPRCVD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_MGKPRCVD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_MGKPRCVD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_RWKPRCVD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_RWKPRCVD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_RWKPRCVD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_GLBLUCAST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_GLBLUCAST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_GLBLUCAST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_RWKPFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_RWKPFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_RWKPFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_RWKPTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACPCSR_RWKPTR_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPCSR_RWKFILTRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPCSR_RWKFILTRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPCSR_RWKFILTRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACRWKPFR_WKUPFRMFTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_TLPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_TLPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_TLPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_TLPIEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_TLPIEX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_TLPIEX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_RLPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_RLPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_RLPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_RLPIEX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_RLPIEX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_RLPIEX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_TLPIST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_TLPIST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_TLPIST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_RLPIST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_RLPIST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_RLPIST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_LPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_LPIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_LPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_PLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_PLS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_PLS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_PLSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_PLSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_PLSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_LPITXA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_LPITXA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_LPITXA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_LPITE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_LPITE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_LPITE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLCSR_LPITCSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLCSR_LPITCSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLCSR_LPITCSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLTCR_TWT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLTCR_LST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLETR_LPIET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MAC1USTCR_TIC_1US_CNTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVR_SNPSVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACVR_USERVER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_OSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_OSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_OSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_PTOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_PTOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_PTOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_ADVTHWORD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_ADVTHWORD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_ADVTHWORD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_DCBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_DCBEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_DCBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_SPHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_SPHEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_SPHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_TSOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_TSOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_TSOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_DBGMEMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_DBGMEMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_DBGMEMA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_AVSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_AVSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_AVSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_HASHTBLSZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_HASHTBLSZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_HASHTBLSZ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF1R_HASHTBLSZ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF1R_HASHTBLSZ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF1R_L3L4FNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACHWF1R_L3L4FNUM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF2R_RXQCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACHWF2R_RXQCNT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF2R_TXQCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACHWF2R_TXQCNT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF2R_RXCHCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACHWF2R_RXCHCNT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF2R_TXCHCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACHWF2R_TXCHCNT_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_MB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_MB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_MB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_C45E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_C45E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_C45E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_GOC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_GOC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_GOC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACMDIOAR_GOC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACMDIOAR_GOC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_SKAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_SKAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_SKAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_CR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACMDIOAR_CR_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_NTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_NTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_NTC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACMDIOAR_NTC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACMDIOAR_NTC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACMDIOAR_NTC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACMDIOAR_NTC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACMDIOAR_NTC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACMDIOAR_NTC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_RDA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACMDIOAR_RDA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_PA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACMDIOAR_PA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_BTB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_BTB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_BTB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIOAR_PSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACMDIOAR_PSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACMDIOAR_PSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIODR_MD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACMDIODR_RA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACARPAR_ARPPA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA0HR_ADDRHI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA0HR_AE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACA0HR_AE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACA0HR_AE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA0LR_ADDRLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA1LR_ADDRLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA2LR_ADDRLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA3LR_ADDRLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA1HR_ADDRHI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA1HR_MBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA1HR_SA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACA1HR_SA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACA1HR_SA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA1HR_AE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACA1HR_AE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACA1HR_AE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA2HR_ADDRHI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA2HR_MBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA2HR_SA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACA2HR_SA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACA2HR_SA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA2HR_AE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACA2HR_AE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACA2HR_AE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA3HR_ADDRHI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA3HR_MBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA3HR_SA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACA3HR_SA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACA3HR_SA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACA3HR_AE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACA3HR_AE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACA3HR_AE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_CONTROL_CNTRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_CONTROL_CNTSTOPRO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTSTOPRO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTSTOPRO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_CONTROL_RSTONRD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_CONTROL_RSTONRD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_CONTROL_RSTONRD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_CONTROL_CNTFREEZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTFREEZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTFREEZ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_CONTROL_CNTPRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTPRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTPRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_CONTROL_CNTPRSTLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTPRSTLVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_CONTROL_CNTPRSTLVL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_CONTROL_UCDBC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_CONTROL_UCDBC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_CONTROL_UCDBC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_RXCRCERPIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXCRCERPIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXCRCERPIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_RXALGNERPIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXALGNERPIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXALGNERPIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_RXUCGPIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXUCGPIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXUCGPIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_RXLPIUSCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXLPIUSCIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXLPIUSCIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_RXLPITRCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXLPITRCIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_RXLPITRCIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_TXSCOLGPIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXSCOLGPIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXSCOLGPIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_TXMCOLGPIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXMCOLGPIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXMCOLGPIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_TXGPKTIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXGPKTIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXGPKTIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_TXLPIUSCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXLPIUSCIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXLPIUSCIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_TXLPITRCIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXLPITRCIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_TXLPITRCIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXCRCERPIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXCRCERPIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXCRCERPIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXALGNERPIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXALGNERPIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXALGNERPIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXUCGPIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXUCGPIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXUCGPIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPIUSCIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPIUSCIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPIUSCIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPITRCIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPITRCIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPITRCIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXSCOLGPIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXSCOLGPIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXSCOLGPIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXMCOLGPIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXMCOLGPIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXMCOLGPIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXGPKTIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXGPKTIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXGPKTIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPIUSCIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPIUSCIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPIUSCIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPITRCIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPITRCIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPITRCIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_TX_PACKET_COUNT_GOOD_TXPKTG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_RX_CRC_ERROR_PACKETS_RXCRCERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_RX_UNICAST_PACKETS_GOOD_RXUCASTG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_TX_LPI_USEC_CNTR_TXLPIUSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_TX_LPI_TRAN_CNTR_TXLPITRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_RX_LPI_USEC_CNTR_RXLPIUSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_RX_LPI_TRAN_CNTR_RXLPITRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L3PEN0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3PEN0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3PEN0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L3SAM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3SAM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3SAM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L3SAIM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3SAIM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3SAIM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L3DAM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3DAM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3DAM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L3DAIM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3DAIM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3DAIM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L4PEN0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4PEN0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4PEN0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L4SPM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4SPM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4SPM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L4SPIM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4SPIM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4SPIM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L4DPM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4DPM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4DPM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C0R_L4DPIM0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4DPIM0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C0R_L4DPIM0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL4A0R_L4SP0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL4A0R_L4DP0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACDR_RPESTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACDR_RPESTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACDR_RPESTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACDR_RFCFCSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACDR_RFCFCSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACDR_RFCFCSTS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACDR_RFCFCSTS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACDR_RFCFCSTS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACDR_TPESTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACDR_TPESTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACDR_TPESTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACDR_TFCSTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACDR_TFCSTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACDR_TFCSTS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACDR_TFCSTS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACDR_TFCSTS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3A00R_L3A00_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3A10R_L3A10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3A20_L3A20_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3A30_L3A30_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L3PEN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3PEN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3PEN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L3SAM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3SAM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3SAM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L3SAIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3SAIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3SAIM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L3DAM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3DAM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3DAM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L3DAIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3DAIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3DAIM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L4PEN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4PEN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4PEN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L4SPM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4SPM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4SPM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L4SPIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4SPIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4SPIM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L4DPM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4DPM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4DPM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3L4C1R_L4DPIM1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4DPIM1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACL3L4C1R_L4DPIM1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL4A1R_L4SP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL4A1R_L4DP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3A01R_L3A01_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3A11R_L3A11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3A21R_L3A21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACL3A31R_L3A31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSCFUPDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSCFUPDT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSCFUPDT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSINIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSINIT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSINIT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSUPDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSUPDT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSUPDT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSADDREG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSADDREG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSADDREG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSENALL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSENALL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSENALL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSCTRLSSR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSCTRLSSR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSCTRLSSR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSVER2ENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSVER2ENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSVER2ENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSIPENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSIPENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSIPENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSIPV6ENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSIPV6ENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSIPV6ENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSIPV4ENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSIPV4ENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSIPV4ENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSEVNTENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSEVNTENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSEVNTENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSMSTRENA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSMSTRENA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSMSTRENA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_SNAPTYPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_SNAPTYPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_SNAPTYPSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACTSCR_SNAPTYPSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACTSCR_SNAPTYPSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TSENMACADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TSENMACADDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TSENMACADDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_CSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_CSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_CSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSCR_TXTSSTSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSCR_TXTSSTSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSCR_TXTSSTSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSSIR_SNSINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSSIR_SSINC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSTSR_TSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSTNR_TSSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSTSUR_TSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSTNUR_TSSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSTNUR_ADDSUB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACSTNUR_ADDSUB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACSTNUR_ADDSUB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSAR_TSAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSSR_TSSOVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSSR_TSSOVF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSSR_TSSOVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSSR_TSTARGT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSSR_TSTARGT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSSR_TSTARGT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSSR_AUXTSTRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSSR_AUXTSTRIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSSR_AUXTSTRIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSSR_TSTRGTERR0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSSR_TSTRGTERR0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSSR_TSTRGTERR0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSSR_TXTSSIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSSR_TXTSSIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSSR_TXTSSIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSSR_ATSSTN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSSR_ATSSTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSSR_ATSSTM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSSR_ATSNS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Ethernet_MAC_MACTSSR_ATSNS_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTxTSSNR_TXTSSLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTxTSSNR_TXTSSMIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACTxTSSNR_TXTSSMIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACTxTSSNR_TXTSSMIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTxTSSSR_TXTSSHI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACACR_ATSFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACACR_ATSFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACACR_ATSFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACACR_ATSEN0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACACR_ATSEN0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACACR_ATSEN0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACACR_ATSEN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACACR_ATSEN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACACR_ATSEN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACACR_ATSEN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACACR_ATSEN2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACACR_ATSEN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACACR_ATSEN3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACACR_ATSEN3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACACR_ATSEN3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACATSNR_AUXTSLO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACATSSR_AUXTSHI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSIACR_OSTIAC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSEACR_OSTEAC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSICNR_TSIC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACTSECNR_TSEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPPSCR_PPSCTRL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Ethernet_MAC_MACPPSCR_PPSCTRL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPPSCR_PPSEN0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPPSCR_PPSEN0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPPSCR_PPSEN0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPPSCR_TRGTMODSEL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPPSCR_TRGTMODSEL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPPSCR_TRGTMODSEL0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACPPSCR_TRGTMODSEL0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACPPSCR_TRGTMODSEL0_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPPSTTSR_TSTRH0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPPSTTNR_TTSL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPPSTTNR_TRGTBUSY0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPPSTTNR_TRGTBUSY0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPPSTTNR_TRGTBUSY0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPPSIR_PPSINT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPPSWR_PPSWIDTH0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPOCR_PTOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPOCR_PTOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPOCR_PTOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPOCR_ASYNCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPOCR_ASYNCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPOCR_ASYNCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPOCR_APDREQEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPOCR_APDREQEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPOCR_APDREQEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPOCR_ASYNCTRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPOCR_ASYNCTRIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPOCR_ASYNCTRIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPOCR_APDREQTRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPOCR_APDREQTRIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPOCR_APDREQTRIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPOCR_DRRDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACPOCR_DRRDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACPOCR_DRRDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACPOCR_DN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSPI0R_SPI0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSPI1R_SPI1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACSPI2R_SPI2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLMIR_LSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLMIR_DRSYNCR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Ethernet_MAC_MACLMIR_DRSYNCR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Ethernet_MAC_MACLMIR_DRSYNCR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Ethernet_MAC_MACLMIR_DRSYNCR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Ethernet_MAC_MACLMIR_DRSYNCR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Ethernet_MAC_MACLMIR_DRSYNCR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Ethernet_MAC_MACLMIR_DRSYNCR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Ethernet_MAC_MACLMIR_DRSYNCR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Ethernet_MAC_MACLMIR_DRSYNCR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Ethernet_MAC_MACLMIR_LMPDRI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ETHERNETMACENUMS_HPP)
