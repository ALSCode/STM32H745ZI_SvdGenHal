/*******************************************************************************
* Filename      : spi1fieldvalues.hpp
*
* Details       : Enumerations related with SPI1 peripheral. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPI1ENUMS_HPP)
#define SPI1ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_IOLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_IOLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_IOLOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_TCRCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_TCRCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_TCRCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_RCRCI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_RCRCI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_RCRCI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_CRC33_17_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_CRC33_17_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_CRC33_17_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_SSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_SSI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_SSI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_HDDIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_HDDIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_HDDIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_CSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_CSUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_CSUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_CSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_CSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_CSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_MASRX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_MASRX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_MASRX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR1_SPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CR1_SPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CR1_SPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR2_TSER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CR2_TSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_MBR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_MBR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_MBR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG1_MBR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG1_MBR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_CFG1_MBR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_CFG1_MBR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_CFG1_MBR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_CFG1_MBR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_CRCSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 15U> ;
  using Value16 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 16U> ;
  using Value17 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 17U> ;
  using Value18 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 18U> ;
  using Value19 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 19U> ;
  using Value20 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 20U> ;
  using Value21 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 21U> ;
  using Value22 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 22U> ;
  using Value23 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 23U> ;
  using Value24 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 24U> ;
  using Value25 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 25U> ;
  using Value26 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 26U> ;
  using Value27 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 27U> ;
  using Value28 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 28U> ;
  using Value29 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 29U> ;
  using Value30 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 30U> ;
  using Value31 = FieldValue<SPI1_CFG1_CRCSIZE_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_TXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_TXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_TXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_RXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_RXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_RXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_UDRDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_UDRDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_UDRDET_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG1_UDRDET_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG1_UDRDET_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_UDRCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_UDRCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_UDRCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG1_UDRCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG1_UDRCFG_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_FTHVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SPI1_CFG1_FTHVL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG1_DSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 15U> ;
  using Value16 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 16U> ;
  using Value17 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 17U> ;
  using Value18 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 18U> ;
  using Value19 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 19U> ;
  using Value20 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 20U> ;
  using Value21 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 21U> ;
  using Value22 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 22U> ;
  using Value23 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 23U> ;
  using Value24 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 24U> ;
  using Value25 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 25U> ;
  using Value26 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 26U> ;
  using Value27 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 27U> ;
  using Value28 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 28U> ;
  using Value29 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 29U> ;
  using Value30 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 30U> ;
  using Value31 = FieldValue<SPI1_CFG1_DSIZE_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_AFCNTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_AFCNTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_AFCNTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_SSOM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_SSOM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_SSOM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_SSOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_SSOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_SSOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_SSIOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_SSIOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_SSIOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_SSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_SSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_SSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_CPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_CPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_CPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_CPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_CPHA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_CPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_LSBFRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_LSBFRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_LSBFRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_MASTER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_MASTER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_MASTER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_SP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_SP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_SP_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG2_SP_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG2_SP_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_CFG2_SP_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_CFG2_SP_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_CFG2_SP_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_CFG2_SP_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_COMM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_COMM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_COMM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG2_COMM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG2_COMM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_IOSWP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_IOSWP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_IOSWP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_MIDI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SPI1_CFG2_MIDI_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CFG2_MSSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SPI1_CFG2_MSSI_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_TSERFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_TSERFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_TSERFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_MODFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_MODFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_MODFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_TIFREIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_TIFREIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_TIFREIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_CRCEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_CRCEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_CRCEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_OVRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_OVRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_OVRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_UDRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_UDRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_UDRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_TXTFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_TXTFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_TXTFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_EOTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_EOTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_EOTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_DPXPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_DPXPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_DPXPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_TXPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_TXPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_TXPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IER_RXPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IER_RXPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IER_RXPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_CTSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_RXWNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_RXWNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_RXWNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_RXPLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_RXPLVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_RXPLVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_SR_RXPLVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_SR_RXPLVL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_TXC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_TXC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_TXC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_SUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_SUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_SUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_TSERF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_TSERF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_TSERF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_MODF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_MODF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_MODF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_TIFRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_TIFRE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_TIFRE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_CRCE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_CRCE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_CRCE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_UDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_UDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_UDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_TXTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_TXTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_TXTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_EOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_EOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_EOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_DXP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_DXP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_DXP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_TXP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_TXP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_TXP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_SR_RXP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_SR_RXP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_SR_RXP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_SUSPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_SUSPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_SUSPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_TSERFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_TSERFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_TSERFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_MODFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_MODFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_MODFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_TIFREC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_TIFREC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_TIFREC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_CRCEC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_CRCEC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_CRCEC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_OVRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_OVRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_OVRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_UDRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_UDRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_UDRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_TXTFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_TXTFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_TXTFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_IFCR_EOTC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_IFCR_EOTC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_IFCR_EOTC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_TXDR_TXDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_RXDR_RXDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CRCPOLY_CRCPOLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_TXCRC_TXCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_RXCRC_RXCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_UDRDR_UDRDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_MCKOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_MCKOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_MCKOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_ODD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_ODD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_ODD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_I2SDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_DATFMT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_DATFMT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_DATFMT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_WSINV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_WSINV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_WSINV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_FIXCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_FIXCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_FIXCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_CKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_CKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_CKPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_CHLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_CHLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_CHLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_DATLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_DATLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_DATLEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CGFR_DATLEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CGFR_DATLEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_PCMSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_PCMSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_PCMSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_I2SSTD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_I2SSTD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_I2SSTD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CGFR_I2SSTD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CGFR_I2SSTD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_I2SCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_I2SCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_I2SCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SPI1_CGFR_I2SCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SPI1_CGFR_I2SCFG_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SPI1_CGFR_I2SCFG_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SPI1_CGFR_I2SCFG_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SPI1_CGFR_I2SCFG_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SPI1_CGFR_I2SCFG_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SPI1_CGFR_I2SMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SPI1_CGFR_I2SMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SPI1_CGFR_I2SMOD_Values, BaseType, 1U> ;
} ;

#endif //#if !defined(SPI1ENUMS_HPP)
