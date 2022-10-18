/*******************************************************************************
* Filename      : dsihostfieldvalues.hpp
*
* Details       : Enumerations related with DSIHOST peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DSIHOSTENUMS_HPP)
#define DSIHOSTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VR_VERSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CCR_TXECKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CCR_TOCKDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LVCIDR_VCID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LVCIDR_VCID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LVCIDR_VCID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_LVCIDR_VCID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_LVCIDR_VCID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LCOLCR_COLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DSIHOST_DSI_LCOLCR_COLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LCOLCR_LPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LCOLCR_LPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LCOLCR_LPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LPCR_DEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LPCR_DEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LPCR_DEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LPCR_VSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LPCR_VSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LPCR_VSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LPCR_HSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LPCR_HSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LPCR_HSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LPMCR_VLPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LPMCR_LPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCR_ETTXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PCR_ETTXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PCR_ETTXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCR_ETRXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PCR_ETRXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PCR_ETRXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCR_BTAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PCR_BTAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PCR_BTAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCR_ECCRXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PCR_ECCRXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PCR_ECCRXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCR_CRCRXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PCR_CRCRXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PCR_CRCRXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GVCIDR_VCID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GVCIDR_VCID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GVCIDR_VCID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_GVCIDR_VCID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_GVCIDR_VCID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_MCR_CMDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_MCR_CMDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_MCR_CMDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_VMT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_VMT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_VMT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_VMCR_VMT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_VMCR_VMT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_LPVSAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_LPVSAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_LPVSAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_LPVBPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_LPVBPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_LPVBPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_LPVFPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_LPVFPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_LPVFPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_LPVAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_LPVAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_LPVAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_LPHBPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_LPHBPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_LPHBPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_LPHFPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_LPHFPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_LPHFPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_FBTAAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_FBTAAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_FBTAAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_LPCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_LPCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_LPCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_PGE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_PGE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_PGE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_PGM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_PGM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_PGM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCR_PGO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCR_PGO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCR_PGO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VPCR_VPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VCCR_NUMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VNPCR_NPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VHSACR_HSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VHBPCR_HBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VLCR_HLINE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VVSACR_VSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VVBPCR_VBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VVFPCR_VFP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VVACR_VA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LCCR_CMDSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_TEARE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_TEARE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_TEARE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_ARE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_ARE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_ARE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_GSW0TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_GSW0TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_GSW0TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_GSW1TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_GSW1TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_GSW1TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_GSW2TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_GSW2TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_GSW2TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_GSR0TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_GSR0TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_GSR0TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_GSR1TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_GSR1TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_GSR1TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_GSR2TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_GSR2TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_GSR2TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_GLWTX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_GLWTX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_GLWTX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_DSW0TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_DSW0TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_DSW0TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_DSW1TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_DSW1TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_DSW1TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_DSR0TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_DSR0TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_DSR0TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_DLWTX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_DLWTX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_DLWTX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CMCR_MRDPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CMCR_MRDPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CMCR_MRDPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GHCR_DT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GHCR_VCID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GHCR_VCID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GHCR_VCID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_GHCR_VCID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_GHCR_VCID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GHCR_WCLSB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GHCR_WCMSB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPDR_DATA1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPDR_DATA2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPDR_DATA3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPDR_DATA4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPSR_CMDFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GPSR_CMDFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GPSR_CMDFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPSR_CMDFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GPSR_CMDFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GPSR_CMDFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPSR_PWRFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GPSR_PWRFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GPSR_PWRFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPSR_PWRFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GPSR_PWRFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GPSR_PWRFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPSR_PRDFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GPSR_PRDFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GPSR_PRDFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPSR_PRDFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GPSR_PRDFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GPSR_PRDFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_GPSR_RCB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_GPSR_RCB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_GPSR_RCB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_TCCR0_LPRX_TOCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_TCCR0_HSTX_TOCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_TCCR1_HSRD_TOCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_TCCR2_LPRD_TOCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_TCCR3_HSWR_TOCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_TCCR3_PM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_TCCR3_PM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_TCCR3_PM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_TCCR4_LPWR_TOCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_TCCR5_BTA_TOCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CLCR_DPCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CLCR_DPCC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CLCR_DPCC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CLCR_ACR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_CLCR_ACR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_CLCR_ACR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CLTCR_LP2HS_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_CLTCR_HS2LP_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_DLTCR_MRD_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_DLTCR_LP2HS_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_DLTCR_HS2LP_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCTLR_DEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PCTLR_DEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PCTLR_DEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCTLR_CKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PCTLR_CKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PCTLR_CKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCONFR_NL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PCONFR_NL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PCONFR_NL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_PCONFR_NL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_PCONFR_NL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PCONFR_SW_TIME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PUCR_URCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PUCR_URCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PUCR_URCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PUCR_UECL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PUCR_UECL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PUCR_UECL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PUCR_URDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PUCR_URDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PUCR_URDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PUCR_UEDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PUCR_UEDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PUCR_UEDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PTTCR_TX_TRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DSIHOST_DSI_PTTCR_TX_TRIG_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PSR_PD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PSR_PD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PSR_PD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PSR_PSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PSR_PSSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PSR_PSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PSR_UANC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PSR_UANC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PSR_UANC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PSR_PSS0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PSR_PSS0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PSR_PSS0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PSR_UAN0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PSR_UAN0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PSR_UAN0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PSR_RUE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PSR_RUE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PSR_RUE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PSR_PSS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PSR_PSS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PSR_PSS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_PSR_UAN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_PSR_UAN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_PSR_UAN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_AE15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_AE15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_AE15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_PE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_PE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_PE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_PE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_PE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_PE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_PE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_PE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_PE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_PE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_PE3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_PE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR0_PE4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR0_PE4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR0_PE4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_TOHSTX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_TOHSTX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_TOHSTX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_TOLPRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_TOLPRX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_TOLPRX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_ECCSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_ECCSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_ECCSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_ECCME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_ECCME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_ECCME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_CRCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_CRCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_CRCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_PSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_PSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_PSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_EOTPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_EOTPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_EOTPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_LPWRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_LPWRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_LPWRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_GCWRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_GCWRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_GCWRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_GPWRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_GPWRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_GPWRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_GPTXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_GPTXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_GPTXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_GPRDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_GPRDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_GPRDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_ISR1_GPRXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_ISR1_GPRXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_ISR1_GPRXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE0IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE0IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE0IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE2IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE3IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE4IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE4IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE4IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE5IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE5IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE5IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE6IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE6IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE6IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE7IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE7IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE7IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE8IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE8IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE8IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE9IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE9IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE9IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE10IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE10IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE10IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE11IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE11IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE11IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE12IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE12IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE12IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE13IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE13IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE13IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE14IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE14IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE14IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_AE15IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_AE15IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_AE15IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_PE0IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_PE0IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_PE0IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_PE1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_PE1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_PE1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_PE2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_PE2IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_PE2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_PE3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_PE3IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_PE3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER0_PE4IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER0_PE4IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER0_PE4IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_TOHSTXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_TOHSTXIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_TOHSTXIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_TOLPRXIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_TOLPRXIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_TOLPRXIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_ECCSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_ECCSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_ECCSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_ECCMEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_ECCMEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_ECCMEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_CRCEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_CRCEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_CRCEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_PSEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_PSEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_PSEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_EOTPEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_EOTPEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_EOTPEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_LPWREIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_LPWREIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_LPWREIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_GCWREIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_GCWREIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_GCWREIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_GPWREIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_GPWREIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_GPWREIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_GPTXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_GPTXEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_GPTXEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_GPRDEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_GPRDEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_GPRDEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_IER1_GPRXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_IER1_GPRXEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_IER1_GPRXEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FAE15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FAE15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FAE15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FPE0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FPE0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FPE0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FPE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FPE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FPE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FPE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FPE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FPE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FPE3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FPE3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FPE3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR0_FPE4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR0_FPE4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR0_FPE4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FTOHSTX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FTOHSTX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FTOHSTX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FTOLPRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FTOLPRX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FTOLPRX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FECCSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FECCSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FECCSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FECCME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FECCME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FECCME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FCRCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FCRCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FCRCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FPSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FPSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FPSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FEOTPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FEOTPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FEOTPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FLPWRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FLPWRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FLPWRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FGCWRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FGCWRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FGCWRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FGPWRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FGPWRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FGPWRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FGPTXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FGPTXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FGPTXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FGPRDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FGPRDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FGPRDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_FIR1_FGPRXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_FIR1_FGPRXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_FIR1_FGPRXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VSCR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VSCR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VSCR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VSCR_UR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VSCR_UR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VSCR_UR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LCVCIDR_VCID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LCVCIDR_VCID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LCVCIDR_VCID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_LCVCIDR_VCID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_LCVCIDR_VCID_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LCCCR_COLC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DSIHOST_DSI_LCCCR_COLC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LCCCR_LPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_LCCCR_LPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_LCCCR_LPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LPMCCR_VLPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_LPMCCR_LPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_VMT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_VMT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_VMT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_VMCCR_VMT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_VMCCR_VMT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_LPVSAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_LPVSAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_LPVSAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_LPVBPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_LPVBPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_LPVBPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_LPVFPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_LPVFPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_LPVFPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_LPVAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_LPVAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_LPVAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_LPHBPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_LPHBPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_LPHBPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_LPHFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_LPHFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_LPHFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_FBTAAE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_FBTAAE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_FBTAAE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VMCCR_LPCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_VMCCR_LPCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_VMCCR_LPCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VPCCR_VPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VCCCR_NUMC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VNPCCR_NPSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VHSACCR_HSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VHBPCCR_HBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VLCCR_HLINE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VVSACCR_VSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VVBPCCR_VBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VVFPCCR_VFP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_VVACCR_VA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCFGR_DSIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCFGR_DSIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCFGR_DSIM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCFGR_COLMUX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCFGR_COLMUX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCFGR_COLMUX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WCFGR_COLMUX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WCFGR_COLMUX_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DSIHOST_DSI_WCFGR_COLMUX_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DSIHOST_DSI_WCFGR_COLMUX_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DSIHOST_DSI_WCFGR_COLMUX_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DSIHOST_DSI_WCFGR_COLMUX_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCFGR_TESRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCFGR_TESRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCFGR_TESRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCFGR_TEPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCFGR_TEPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCFGR_TEPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCFGR_AR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCFGR_AR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCFGR_AR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCFGR_VSPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCFGR_VSPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCFGR_VSPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCR_COLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCR_COLM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCR_COLM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCR_SHTDN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCR_SHTDN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCR_SHTDN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCR_LTDCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCR_LTDCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCR_LTDCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WCR_DSIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WCR_DSIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WCR_DSIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIER_TEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIER_TEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIER_TEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIER_ERIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIER_ERIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIER_ERIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIER_PLLLIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIER_PLLLIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIER_PLLLIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIER_PLLUIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIER_PLLUIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIER_PLLUIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIER_RRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIER_RRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIER_RRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WISR_TEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WISR_TEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WISR_TEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WISR_ERIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WISR_ERIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WISR_ERIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WISR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WISR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WISR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WISR_PLLLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WISR_PLLLS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WISR_PLLLS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WISR_PLLLIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WISR_PLLLIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WISR_PLLLIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WISR_PLLUIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WISR_PLLUIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WISR_PLLUIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WISR_RRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WISR_RRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WISR_RRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WISR_RRIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WISR_RRIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WISR_RRIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIFCR_CTEIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIFCR_CTEIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIFCR_CTEIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIFCR_CERIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIFCR_CERIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIFCR_CERIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIFCR_CPLLLIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIFCR_CPLLLIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIFCR_CPLLLIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIFCR_CPLLUIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIFCR_CPLLUIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIFCR_CPLLUIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WIFCR_CRRIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WIFCR_CRRIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WIFCR_CRRIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_UIX4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_SWCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_SWCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_SWCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_SWDL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_SWDL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_SWDL0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_SWDL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_SWDL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_SWDL1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_HSICL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_HSICL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_HSICL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_HSIDL0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_HSIDL0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_HSIDL0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_HSIDL1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_HSIDL1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_HSIDL1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_FTXSMCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_FTXSMCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_FTXSMCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_FTXSMDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_FTXSMDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_FTXSMDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_CDOFFDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_CDOFFDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_CDOFFDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_TDDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_TDDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_TDDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_PDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_PDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_PDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_TCLKPREPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_TCLKPREPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_TCLKPREPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_TCLKZEROEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_TCLKZEROEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_TCLKZEROEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_THSPREPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_THSPREPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_THSPREPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_THSTRAILEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_THSTRAILEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_THSTRAILEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_THSZEROEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_THSZEROEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_THSZEROEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_TLPXDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_TLPXDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_TLPXDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_THSEXITEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_THSEXITEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_THSEXITEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_TLPXCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_TLPXCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_TLPXCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR0_TCLKPOSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR0_TCLKPOSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR0_TCLKPOSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_HSTXDCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_HSTXDCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_HSTXDCL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WPCR1_HSTXDCL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WPCR1_HSTXDCL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_HSTXDDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_HSTXDDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_HSTXDDL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WPCR1_HSTXDDL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WPCR1_HSTXDDL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_LPSRCCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_LPSRCCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_LPSRCCL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WPCR1_LPSRCCL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WPCR1_LPSRCCL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_LPSRCDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_LPSRCDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_LPSRCDL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WPCR1_LPSRCDL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WPCR1_LPSRCDL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_SDDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_SDDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_SDDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_HSTXSRCCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_HSTXSRCCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_HSTXSRCCL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WPCR1_HSTXSRCCL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WPCR1_HSTXSRCCL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_HSTXSRCDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_HSTXSRCDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_HSTXSRCDL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WPCR1_HSTXSRCDL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WPCR1_HSTXSRCDL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_FLPRXLPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_FLPRXLPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_FLPRXLPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR1_LPRXFT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WPCR1_LPRXFT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WPCR1_LPRXFT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WPCR1_LPRXFT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WPCR1_LPRXFT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR2_TCLKPREP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR2_TCLKZERO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR2_THSPREP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR2_THSTRAIL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR3_THSZERO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR3_TLPXD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR3_THSEXIT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR3_TLPXC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WPCR4_TCLKPOST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WRPCR_PLLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WRPCR_PLLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WRPCR_PLLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WRPCR_NDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WRPCR_IDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<DSIHOST_DSI_WRPCR_IDF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WRPCR_ODF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WRPCR_ODF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WRPCR_ODF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DSIHOST_DSI_WRPCR_ODF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DSIHOST_DSI_WRPCR_ODF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DSIHOST_DSI_WRPCR_REGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DSIHOST_DSI_WRPCR_REGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DSIHOST_DSI_WRPCR_REGEN_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(DSIHOSTENUMS_HPP)
