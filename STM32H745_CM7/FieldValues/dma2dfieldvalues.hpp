/*******************************************************************************
* Filename      : dma2dfieldvalues.hpp
*
* Details       : Enumerations related with DMA2D peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DMA2DENUMS_HPP)
#define DMA2DENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_SUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_SUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_SUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_ABORT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_ABORT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_ABORT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_TEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_TEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_TEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_TWIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_TWIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_TWIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_CAEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_CAEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_CAEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_CTCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_CTCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_CTCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_CEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_CEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_CEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_CR_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_CR_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_CR_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA2D_CR_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA2D_CR_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_ISR_TEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_ISR_TEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_ISR_TEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_ISR_TCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_ISR_TCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_ISR_TCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_ISR_TWIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_ISR_TWIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_ISR_TWIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_ISR_CAEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_ISR_CAEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_ISR_CAEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_ISR_CTCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_ISR_CTCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_ISR_CTCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_ISR_CEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_ISR_CEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_ISR_CEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_IFCR_CTEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_IFCR_CTEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_IFCR_CTEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_IFCR_CTCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_IFCR_CTCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_IFCR_CTCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_IFCR_CTWIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_IFCR_CTWIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_IFCR_CTWIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_IFCR_CAECIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_IFCR_CAECIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_IFCR_CAECIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_IFCR_CCTCIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_IFCR_CCTCIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_IFCR_CCTCIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_IFCR_CCEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_IFCR_CCEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_IFCR_CCEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGMAR_MA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGOR_LO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGMAR_MA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGOR_LO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DMA2D_FGPFCCR_CM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_CCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_FGPFCCR_CCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_FGPFCCR_CCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_FGPFCCR_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_FGPFCCR_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_CS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_AM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_FGPFCCR_AM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_FGPFCCR_AM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA2D_FGPFCCR_AM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA2D_FGPFCCR_AM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_CSS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_FGPFCCR_CSS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_FGPFCCR_CSS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA2D_FGPFCCR_CSS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA2D_FGPFCCR_CSS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_AI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_FGPFCCR_AI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_FGPFCCR_AI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_RBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_FGPFCCR_RBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_FGPFCCR_RBS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGPFCCR_ALPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGCOLR_BLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGCOLR_GREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGCOLR_RED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGPFCCR_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DMA2D_BGPFCCR_CM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGPFCCR_CCM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_BGPFCCR_CCM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_BGPFCCR_CCM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGPFCCR_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_BGPFCCR_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_BGPFCCR_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGPFCCR_CS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGPFCCR_AM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_BGPFCCR_AM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_BGPFCCR_AM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA2D_BGPFCCR_AM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA2D_BGPFCCR_AM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGPFCCR_AI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_BGPFCCR_AI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_BGPFCCR_AI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGPFCCR_RBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_BGPFCCR_RBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_BGPFCCR_RBS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGPFCCR_ALPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGCOLR_BLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGCOLR_GREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGCOLR_RED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_FGCMAR_MA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_BGCMAR_MA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OPFCCR_CM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_OPFCCR_CM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_OPFCCR_CM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DMA2D_OPFCCR_CM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DMA2D_OPFCCR_CM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DMA2D_OPFCCR_CM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DMA2D_OPFCCR_CM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DMA2D_OPFCCR_CM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DMA2D_OPFCCR_CM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OPFCCR_AI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_OPFCCR_AI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_OPFCCR_AI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OPFCCR_RBS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_OPFCCR_RBS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_OPFCCR_RBS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OCOLR_BLUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OCOLR_GREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OCOLR_RED_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OCOLR_ALPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OMAR_MA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_OOR_LO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_NLR_NL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_NLR_PL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_LWR_LW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_AMTCR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DMA2D_AMTCR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DMA2D_AMTCR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DMA2D_AMTCR_DT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(DMA2DENUMS_HPP)
