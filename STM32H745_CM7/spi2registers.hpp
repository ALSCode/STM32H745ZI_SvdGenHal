/*******************************************************************************
* Filename      : spi2registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPI2REGISTERS_HPP)
#define SPI2REGISTERS_HPP

#include "spi2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI2
{
  struct SPI2CR1Base {} ;

  struct CR1 : public RegisterBase<0x40003800, 32, ReadWriteMode>
  {
    using IOLOCK = SPI2_CR1_IOLOCK_Values<SPI2::CR1, 16, 1, ReadMode, SPI2CR1Base> ;
    using TCRCI = SPI2_CR1_TCRCI_Values<SPI2::CR1, 15, 1, ReadWriteMode, SPI2CR1Base> ;
    using RCRCI = SPI2_CR1_RCRCI_Values<SPI2::CR1, 14, 1, ReadWriteMode, SPI2CR1Base> ;
    using CRC33_17 = SPI2_CR1_CRC33_17_Values<SPI2::CR1, 13, 1, ReadWriteMode, SPI2CR1Base> ;
    using SSI = SPI2_CR1_SSI_Values<SPI2::CR1, 12, 1, ReadWriteMode, SPI2CR1Base> ;
    using HDDIR = SPI2_CR1_HDDIR_Values<SPI2::CR1, 11, 1, ReadWriteMode, SPI2CR1Base> ;
    using CSUSP = SPI2_CR1_CSUSP_Values<SPI2::CR1, 10, 1, WriteMode, SPI2CR1Base> ;
    using CSTART = SPI2_CR1_CSTART_Values<SPI2::CR1, 9, 1, ReadMode, SPI2CR1Base> ;
    using MASRX = SPI2_CR1_MASRX_Values<SPI2::CR1, 8, 1, ReadWriteMode, SPI2CR1Base> ;
    using SPE = SPI2_CR1_SPE_Values<SPI2::CR1, 0, 1, ReadWriteMode, SPI2CR1Base> ;
    using FieldValues = SPI2_CR1_SPE_Values<SPI2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40003800, 32, ReadWriteMode, SPI2CR1Base, T...> ;

  struct SPI2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40003804, 32, ReadWriteMode>
  {
    using TSER = SPI2_CR2_TSER_Values<SPI2::CR2, 16, 16, ReadMode, SPI2CR2Base> ;
    using TSIZE = SPI2_CR2_TSIZE_Values<SPI2::CR2, 0, 16, ReadWriteMode, SPI2CR2Base> ;
    using FieldValues = SPI2_CR2_TSIZE_Values<SPI2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40003804, 32, ReadWriteMode, SPI2CR2Base, T...> ;

  struct SPI2CFG1Base {} ;

  struct CFG1 : public RegisterBase<0x40003808, 32, ReadWriteMode>
  {
    using MBR = SPI2_CFG1_MBR_Values<SPI2::CFG1, 28, 3, ReadWriteMode, SPI2CFG1Base> ;
    using CRCEN = SPI2_CFG1_CRCEN_Values<SPI2::CFG1, 22, 1, ReadWriteMode, SPI2CFG1Base> ;
    using CRCSIZE = SPI2_CFG1_CRCSIZE_Values<SPI2::CFG1, 16, 5, ReadWriteMode, SPI2CFG1Base> ;
    using TXDMAEN = SPI2_CFG1_TXDMAEN_Values<SPI2::CFG1, 15, 1, ReadWriteMode, SPI2CFG1Base> ;
    using RXDMAEN = SPI2_CFG1_RXDMAEN_Values<SPI2::CFG1, 14, 1, ReadWriteMode, SPI2CFG1Base> ;
    using UDRDET = SPI2_CFG1_UDRDET_Values<SPI2::CFG1, 11, 2, ReadWriteMode, SPI2CFG1Base> ;
    using UDRCFG = SPI2_CFG1_UDRCFG_Values<SPI2::CFG1, 9, 2, ReadWriteMode, SPI2CFG1Base> ;
    using FTHVL = SPI2_CFG1_FTHVL_Values<SPI2::CFG1, 5, 4, ReadWriteMode, SPI2CFG1Base> ;
    using DSIZE = SPI2_CFG1_DSIZE_Values<SPI2::CFG1, 0, 5, ReadWriteMode, SPI2CFG1Base> ;
    using FieldValues = SPI2_CFG1_DSIZE_Values<SPI2::CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG1Pack  = Register<0x40003808, 32, ReadWriteMode, SPI2CFG1Base, T...> ;

  struct SPI2CFG2Base {} ;

  struct CFG2 : public RegisterBase<0x4000380C, 32, ReadWriteMode>
  {
    using AFCNTR = SPI2_CFG2_AFCNTR_Values<SPI2::CFG2, 31, 1, ReadWriteMode, SPI2CFG2Base> ;
    using SSOM = SPI2_CFG2_SSOM_Values<SPI2::CFG2, 30, 1, ReadWriteMode, SPI2CFG2Base> ;
    using SSOE = SPI2_CFG2_SSOE_Values<SPI2::CFG2, 29, 1, ReadWriteMode, SPI2CFG2Base> ;
    using SSIOP = SPI2_CFG2_SSIOP_Values<SPI2::CFG2, 28, 1, ReadWriteMode, SPI2CFG2Base> ;
    using SSM = SPI2_CFG2_SSM_Values<SPI2::CFG2, 26, 1, ReadWriteMode, SPI2CFG2Base> ;
    using CPOL = SPI2_CFG2_CPOL_Values<SPI2::CFG2, 25, 1, ReadWriteMode, SPI2CFG2Base> ;
    using CPHA = SPI2_CFG2_CPHA_Values<SPI2::CFG2, 24, 1, ReadWriteMode, SPI2CFG2Base> ;
    using LSBFRST = SPI2_CFG2_LSBFRST_Values<SPI2::CFG2, 23, 1, ReadWriteMode, SPI2CFG2Base> ;
    using MASTER = SPI2_CFG2_MASTER_Values<SPI2::CFG2, 22, 1, ReadWriteMode, SPI2CFG2Base> ;
    using SP = SPI2_CFG2_SP_Values<SPI2::CFG2, 19, 3, ReadWriteMode, SPI2CFG2Base> ;
    using COMM = SPI2_CFG2_COMM_Values<SPI2::CFG2, 17, 2, ReadWriteMode, SPI2CFG2Base> ;
    using IOSWP = SPI2_CFG2_IOSWP_Values<SPI2::CFG2, 15, 1, ReadWriteMode, SPI2CFG2Base> ;
    using MIDI = SPI2_CFG2_MIDI_Values<SPI2::CFG2, 4, 4, ReadWriteMode, SPI2CFG2Base> ;
    using MSSI = SPI2_CFG2_MSSI_Values<SPI2::CFG2, 0, 4, ReadWriteMode, SPI2CFG2Base> ;
    using FieldValues = SPI2_CFG2_MSSI_Values<SPI2::CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG2Pack  = Register<0x4000380C, 32, ReadWriteMode, SPI2CFG2Base, T...> ;

  struct SPI2IERBase {} ;

  struct IER : public RegisterBase<0x40003810, 32, ReadWriteMode>
  {
    using TSERFIE = SPI2_IER_TSERFIE_Values<SPI2::IER, 10, 1, ReadWriteMode, SPI2IERBase> ;
    using MODFIE = SPI2_IER_MODFIE_Values<SPI2::IER, 9, 1, ReadWriteMode, SPI2IERBase> ;
    using TIFREIE = SPI2_IER_TIFREIE_Values<SPI2::IER, 8, 1, ReadWriteMode, SPI2IERBase> ;
    using CRCEIE = SPI2_IER_CRCEIE_Values<SPI2::IER, 7, 1, ReadWriteMode, SPI2IERBase> ;
    using OVRIE = SPI2_IER_OVRIE_Values<SPI2::IER, 6, 1, ReadWriteMode, SPI2IERBase> ;
    using UDRIE = SPI2_IER_UDRIE_Values<SPI2::IER, 5, 1, ReadWriteMode, SPI2IERBase> ;
    using TXTFIE = SPI2_IER_TXTFIE_Values<SPI2::IER, 4, 1, ReadWriteMode, SPI2IERBase> ;
    using EOTIE = SPI2_IER_EOTIE_Values<SPI2::IER, 3, 1, ReadWriteMode, SPI2IERBase> ;
    using DPXPIE = SPI2_IER_DPXPIE_Values<SPI2::IER, 2, 1, ReadMode, SPI2IERBase> ;
    using TXPIE = SPI2_IER_TXPIE_Values<SPI2::IER, 1, 1, ReadMode, SPI2IERBase> ;
    using RXPIE = SPI2_IER_RXPIE_Values<SPI2::IER, 0, 1, ReadWriteMode, SPI2IERBase> ;
    using FieldValues = SPI2_IER_RXPIE_Values<SPI2::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40003810, 32, ReadWriteMode, SPI2IERBase, T...> ;

  struct SPI2SRBase {} ;

  struct SR : public RegisterBase<0x40003814, 32, ReadMode>
  {
    using CTSIZE = SPI2_SR_CTSIZE_Values<SPI2::SR, 16, 16, ReadMode, SPI2SRBase> ;
    using RXWNE = SPI2_SR_RXWNE_Values<SPI2::SR, 15, 1, ReadMode, SPI2SRBase> ;
    using RXPLVL = SPI2_SR_RXPLVL_Values<SPI2::SR, 13, 2, ReadMode, SPI2SRBase> ;
    using TXC = SPI2_SR_TXC_Values<SPI2::SR, 12, 1, ReadMode, SPI2SRBase> ;
    using SUSP = SPI2_SR_SUSP_Values<SPI2::SR, 11, 1, ReadMode, SPI2SRBase> ;
    using TSERF = SPI2_SR_TSERF_Values<SPI2::SR, 10, 1, ReadMode, SPI2SRBase> ;
    using MODF = SPI2_SR_MODF_Values<SPI2::SR, 9, 1, ReadMode, SPI2SRBase> ;
    using TIFRE = SPI2_SR_TIFRE_Values<SPI2::SR, 8, 1, ReadMode, SPI2SRBase> ;
    using CRCE = SPI2_SR_CRCE_Values<SPI2::SR, 7, 1, ReadMode, SPI2SRBase> ;
    using OVR = SPI2_SR_OVR_Values<SPI2::SR, 6, 1, ReadMode, SPI2SRBase> ;
    using UDR = SPI2_SR_UDR_Values<SPI2::SR, 5, 1, ReadMode, SPI2SRBase> ;
    using TXTF = SPI2_SR_TXTF_Values<SPI2::SR, 4, 1, ReadMode, SPI2SRBase> ;
    using EOT = SPI2_SR_EOT_Values<SPI2::SR, 3, 1, ReadMode, SPI2SRBase> ;
    using DXP = SPI2_SR_DXP_Values<SPI2::SR, 2, 1, ReadMode, SPI2SRBase> ;
    using TXP = SPI2_SR_TXP_Values<SPI2::SR, 1, 1, ReadMode, SPI2SRBase> ;
    using RXP = SPI2_SR_RXP_Values<SPI2::SR, 0, 1, ReadMode, SPI2SRBase> ;
    using FieldValues = SPI2_SR_RXP_Values<SPI2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40003814, 32, ReadMode, SPI2SRBase, T...> ;

  struct SPI2IFCRBase {} ;

  struct IFCR : public RegisterBase<0x40003818, 32, WriteMode>
  {
    using SUSPC = SPI2_IFCR_SUSPC_Values<SPI2::IFCR, 11, 1, WriteMode, SPI2IFCRBase> ;
    using TSERFC = SPI2_IFCR_TSERFC_Values<SPI2::IFCR, 10, 1, WriteMode, SPI2IFCRBase> ;
    using MODFC = SPI2_IFCR_MODFC_Values<SPI2::IFCR, 9, 1, WriteMode, SPI2IFCRBase> ;
    using TIFREC = SPI2_IFCR_TIFREC_Values<SPI2::IFCR, 8, 1, WriteMode, SPI2IFCRBase> ;
    using CRCEC = SPI2_IFCR_CRCEC_Values<SPI2::IFCR, 7, 1, WriteMode, SPI2IFCRBase> ;
    using OVRC = SPI2_IFCR_OVRC_Values<SPI2::IFCR, 6, 1, WriteMode, SPI2IFCRBase> ;
    using UDRC = SPI2_IFCR_UDRC_Values<SPI2::IFCR, 5, 1, WriteMode, SPI2IFCRBase> ;
    using TXTFC = SPI2_IFCR_TXTFC_Values<SPI2::IFCR, 4, 1, WriteMode, SPI2IFCRBase> ;
    using EOTC = SPI2_IFCR_EOTC_Values<SPI2::IFCR, 3, 1, WriteMode, SPI2IFCRBase> ;
    using FieldValues = SPI2_IFCR_EOTC_Values<SPI2::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x40003818, 32, WriteMode, SPI2IFCRBase, T...> ;

  struct SPI2TXDRBase {} ;

  struct TXDR : public RegisterBase<0x40003820, 32, WriteMode>
  {
    using TXDRField = SPI2_TXDR_TXDR_Values<SPI2::TXDR, 0, 32, WriteMode, SPI2TXDRBase> ;
    using FieldValues = SPI2_TXDR_TXDR_Values<SPI2::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x40003820, 32, WriteMode, SPI2TXDRBase, T...> ;

  struct SPI2RXDRBase {} ;

  struct RXDR : public RegisterBase<0x40003830, 32, ReadMode>
  {
    using RXDRField = SPI2_RXDR_RXDR_Values<SPI2::RXDR, 0, 32, ReadMode, SPI2RXDRBase> ;
    using FieldValues = SPI2_RXDR_RXDR_Values<SPI2::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x40003830, 32, ReadMode, SPI2RXDRBase, T...> ;

  struct SPI2CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40003840, 32, ReadWriteMode>
  {
    using CRCPOLYField = SPI2_CRCPOLY_CRCPOLY_Values<SPI2::CRCPOLY, 0, 32, ReadWriteMode, SPI2CRCPOLYBase> ;
    using FieldValues = SPI2_CRCPOLY_CRCPOLY_Values<SPI2::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40003840, 32, ReadWriteMode, SPI2CRCPOLYBase, T...> ;

  struct SPI2TXCRCBase {} ;

  struct TXCRC : public RegisterBase<0x40003844, 32, ReadWriteMode>
  {
    using TXCRCField = SPI2_TXCRC_TXCRC_Values<SPI2::TXCRC, 0, 32, ReadWriteMode, SPI2TXCRCBase> ;
    using FieldValues = SPI2_TXCRC_TXCRC_Values<SPI2::TXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCPack  = Register<0x40003844, 32, ReadWriteMode, SPI2TXCRCBase, T...> ;

  struct SPI2RXCRCBase {} ;

  struct RXCRC : public RegisterBase<0x40003848, 32, ReadWriteMode>
  {
    using RXCRCField = SPI2_RXCRC_RXCRC_Values<SPI2::RXCRC, 0, 32, ReadWriteMode, SPI2RXCRCBase> ;
    using FieldValues = SPI2_RXCRC_RXCRC_Values<SPI2::RXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCPack  = Register<0x40003848, 32, ReadWriteMode, SPI2RXCRCBase, T...> ;

  struct SPI2UDRDRBase {} ;

  struct UDRDR : public RegisterBase<0x4000384C, 32, ReadWriteMode>
  {
    using UDRDRField = SPI2_UDRDR_UDRDR_Values<SPI2::UDRDR, 0, 32, ReadWriteMode, SPI2UDRDRBase> ;
    using FieldValues = SPI2_UDRDR_UDRDR_Values<SPI2::UDRDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UDRDRPack  = Register<0x4000384C, 32, ReadWriteMode, SPI2UDRDRBase, T...> ;

  struct SPI2CGFRBase {} ;

  struct CGFR : public RegisterBase<0x40003850, 32, ReadWriteMode>
  {
    using MCKOE = SPI2_CGFR_MCKOE_Values<SPI2::CGFR, 25, 1, ReadWriteMode, SPI2CGFRBase> ;
    using ODD = SPI2_CGFR_ODD_Values<SPI2::CGFR, 24, 1, ReadWriteMode, SPI2CGFRBase> ;
    using I2SDIV = SPI2_CGFR_I2SDIV_Values<SPI2::CGFR, 16, 8, ReadWriteMode, SPI2CGFRBase> ;
    using DATFMT = SPI2_CGFR_DATFMT_Values<SPI2::CGFR, 14, 1, ReadWriteMode, SPI2CGFRBase> ;
    using WSINV = SPI2_CGFR_WSINV_Values<SPI2::CGFR, 13, 1, ReadWriteMode, SPI2CGFRBase> ;
    using FIXCH = SPI2_CGFR_FIXCH_Values<SPI2::CGFR, 12, 1, ReadWriteMode, SPI2CGFRBase> ;
    using CKPOL = SPI2_CGFR_CKPOL_Values<SPI2::CGFR, 11, 1, ReadWriteMode, SPI2CGFRBase> ;
    using CHLEN = SPI2_CGFR_CHLEN_Values<SPI2::CGFR, 10, 1, ReadWriteMode, SPI2CGFRBase> ;
    using DATLEN = SPI2_CGFR_DATLEN_Values<SPI2::CGFR, 8, 2, ReadWriteMode, SPI2CGFRBase> ;
    using PCMSYNC = SPI2_CGFR_PCMSYNC_Values<SPI2::CGFR, 7, 1, ReadWriteMode, SPI2CGFRBase> ;
    using I2SSTD = SPI2_CGFR_I2SSTD_Values<SPI2::CGFR, 4, 2, ReadWriteMode, SPI2CGFRBase> ;
    using I2SCFG = SPI2_CGFR_I2SCFG_Values<SPI2::CGFR, 1, 3, ReadWriteMode, SPI2CGFRBase> ;
    using I2SMOD = SPI2_CGFR_I2SMOD_Values<SPI2::CGFR, 0, 1, ReadWriteMode, SPI2CGFRBase> ;
    using FieldValues = SPI2_CGFR_I2SMOD_Values<SPI2::CGFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CGFRPack  = Register<0x40003850, 32, ReadWriteMode, SPI2CGFRBase, T...> ;

} ;

#endif //#if !defined(SPI2REGISTERS_HPP)
