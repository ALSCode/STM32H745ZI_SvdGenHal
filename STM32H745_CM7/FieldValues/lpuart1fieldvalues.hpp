/*******************************************************************************
* Filename      : lpuart1fieldvalues.hpp
*
* Details       : Enumerations related with LPUART1 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(LPUART1ENUMS_HPP)
#define LPUART1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_RXFFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_RXFFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_RXFFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_TXFEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_TXFEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_TXFEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_FIFOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_FIFOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_FIFOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_M1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_M1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_M1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_DEAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 15U> ;
  using Value16 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 16U> ;
  using Value17 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 17U> ;
  using Value18 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 18U> ;
  using Value19 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 19U> ;
  using Value20 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 20U> ;
  using Value21 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 21U> ;
  using Value22 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 22U> ;
  using Value23 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 23U> ;
  using Value24 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 24U> ;
  using Value25 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 25U> ;
  using Value26 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 26U> ;
  using Value27 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 27U> ;
  using Value28 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 28U> ;
  using Value29 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 29U> ;
  using Value30 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 30U> ;
  using Value31 = FieldValue<LPUART1_CR1_DEAT_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_DEDT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 7U> ;
  using Value8 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 8U> ;
  using Value9 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 9U> ;
  using Value10 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 10U> ;
  using Value11 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 11U> ;
  using Value12 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 12U> ;
  using Value13 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 13U> ;
  using Value14 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 14U> ;
  using Value15 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 15U> ;
  using Value16 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 16U> ;
  using Value17 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 17U> ;
  using Value18 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 18U> ;
  using Value19 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 19U> ;
  using Value20 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 20U> ;
  using Value21 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 21U> ;
  using Value22 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 22U> ;
  using Value23 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 23U> ;
  using Value24 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 24U> ;
  using Value25 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 25U> ;
  using Value26 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 26U> ;
  using Value27 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 27U> ;
  using Value28 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 28U> ;
  using Value29 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 29U> ;
  using Value30 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 30U> ;
  using Value31 = FieldValue<LPUART1_CR1_DEDT_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_CMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_CMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_CMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_MME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_MME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_MME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_M0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_M0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_M0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_WAKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_WAKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_WAKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_PCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_PCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_PCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_PS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_PS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_PS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_PEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_PEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_PEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_TXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_TXEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_TXEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_TCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_TCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_TCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_RXNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_RXNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_RXNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_IDLEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_IDLEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_IDLEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_TE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_TE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_TE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_RE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_RE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_RE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_UESM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_UESM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_UESM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR1_UE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR1_UE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR1_UE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR2_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR2_MSBFIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR2_MSBFIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR2_MSBFIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR2_DATAINV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR2_DATAINV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR2_DATAINV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR2_TXINV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR2_TXINV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR2_TXINV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR2_RXINV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR2_RXINV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR2_RXINV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR2_SWAP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR2_SWAP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR2_SWAP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR2_STOP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART1_CR2_STOP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART1_CR2_STOP_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR2_ADDM7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR2_ADDM7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR2_ADDM7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_TXFTCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_TXFTCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_TXFTCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART1_CR3_TXFTCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART1_CR3_TXFTCFG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPUART1_CR3_TXFTCFG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPUART1_CR3_TXFTCFG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPUART1_CR3_TXFTCFG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPUART1_CR3_TXFTCFG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_RXFTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_RXFTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_RXFTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_RXFTCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_RXFTCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_RXFTCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART1_CR3_RXFTCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART1_CR3_RXFTCFG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPUART1_CR3_RXFTCFG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPUART1_CR3_RXFTCFG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPUART1_CR3_RXFTCFG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPUART1_CR3_RXFTCFG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_TXFTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_TXFTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_TXFTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_WUFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_WUFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_WUFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_WUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_WUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_WUS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART1_CR3_WUS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART1_CR3_WUS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_DEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_DEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_DEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_DEM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_DEM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_DEM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_DDRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_DDRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_DDRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_OVRDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_OVRDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_OVRDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_CTSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_CTSIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_CTSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_CTSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_CTSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_CTSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_RTSE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_RTSE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_RTSE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_DMAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_DMAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_DMAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_DMAR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_DMAR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_DMAR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_HDSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_HDSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_HDSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_CR3_EIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_CR3_EIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_CR3_EIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_BRR_BRR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_GTPR_GT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_GTPR_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_RTOR_BLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_RTOR_RTO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_RQR_TXFRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_RQR_TXFRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_RQR_TXFRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_RQR_RXFRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_RQR_RXFRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_RQR_RXFRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_RQR_MMRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_RQR_MMRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_RQR_MMRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_RQR_SBKRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_RQR_SBKRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_RQR_SBKRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_RQR_ABRRQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_RQR_ABRRQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_RQR_ABRRQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_TXFT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_TXFT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_TXFT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_RXFT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_RXFT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_RXFT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_RXFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_RXFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_RXFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_TXFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_TXFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_TXFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_REACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_REACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_REACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_TEACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_TEACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_TEACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_WUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_WUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_WUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_RWU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_RWU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_RWU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_SBKF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_SBKF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_SBKF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_CMF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_CMF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_CMF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_CTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_CTS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_CTS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_CTSIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_CTSIF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_CTSIF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_TXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_TXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_TXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_TC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_TC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_TC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_RXNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_RXNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_RXNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_IDLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_IDLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_IDLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_ORE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_ORE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_ORE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_NE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_NE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_NE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_FE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_FE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_FE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ISR_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ISR_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ISR_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_WUCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_WUCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_WUCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_CMCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_CMCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_CMCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_CTSCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_CTSCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_CTSCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_TCCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_TCCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_TCCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_IDLECF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_IDLECF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_IDLECF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_ORECF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_ORECF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_ORECF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_NCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_NCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_NCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_FECF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_FECF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_FECF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_ICR_PECF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_ICR_PECF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_ICR_PECF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_RDR_RDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_TDR_TDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPUART1_PRESC_PRESCALER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 7U> ;
  using Value8 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 8U> ;
  using Value9 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 9U> ;
  using Value10 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 10U> ;
  using Value11 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 11U> ;
  using Value12 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 12U> ;
  using Value13 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 13U> ;
  using Value14 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 14U> ;
  using Value15 = FieldValue<LPUART1_PRESC_PRESCALER_Values, BaseType, 15U> ;
} ;

#endif //#if !defined(LPUART1ENUMS_HPP)
