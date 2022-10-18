/*******************************************************************************
* Filename      : spi1registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPI1REGISTERS_HPP)
#define SPI1REGISTERS_HPP

#include "spi1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI1
{
  struct SPI1CR1Base {} ;

  struct CR1 : public RegisterBase<0x40013000, 32, ReadWriteMode>
  {
    using IOLOCK = SPI1_CR1_IOLOCK_Values<SPI1::CR1, 16, 1, ReadMode, SPI1CR1Base> ;
    using TCRCI = SPI1_CR1_TCRCI_Values<SPI1::CR1, 15, 1, ReadWriteMode, SPI1CR1Base> ;
    using RCRCI = SPI1_CR1_RCRCI_Values<SPI1::CR1, 14, 1, ReadWriteMode, SPI1CR1Base> ;
    using CRC33_17 = SPI1_CR1_CRC33_17_Values<SPI1::CR1, 13, 1, ReadWriteMode, SPI1CR1Base> ;
    using SSI = SPI1_CR1_SSI_Values<SPI1::CR1, 12, 1, ReadWriteMode, SPI1CR1Base> ;
    using HDDIR = SPI1_CR1_HDDIR_Values<SPI1::CR1, 11, 1, ReadWriteMode, SPI1CR1Base> ;
    using CSUSP = SPI1_CR1_CSUSP_Values<SPI1::CR1, 10, 1, WriteMode, SPI1CR1Base> ;
    using CSTART = SPI1_CR1_CSTART_Values<SPI1::CR1, 9, 1, ReadMode, SPI1CR1Base> ;
    using MASRX = SPI1_CR1_MASRX_Values<SPI1::CR1, 8, 1, ReadWriteMode, SPI1CR1Base> ;
    using SPE = SPI1_CR1_SPE_Values<SPI1::CR1, 0, 1, ReadWriteMode, SPI1CR1Base> ;
    using FieldValues = SPI1_CR1_SPE_Values<SPI1::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40013000, 32, ReadWriteMode, SPI1CR1Base, T...> ;

  struct SPI1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40013004, 32, ReadWriteMode>
  {
    using TSER = SPI1_CR2_TSER_Values<SPI1::CR2, 16, 16, ReadMode, SPI1CR2Base> ;
    using TSIZE = SPI1_CR2_TSIZE_Values<SPI1::CR2, 0, 16, ReadWriteMode, SPI1CR2Base> ;
    using FieldValues = SPI1_CR2_TSIZE_Values<SPI1::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40013004, 32, ReadWriteMode, SPI1CR2Base, T...> ;

  struct SPI1CFG1Base {} ;

  struct CFG1 : public RegisterBase<0x40013008, 32, ReadWriteMode>
  {
    using MBR = SPI1_CFG1_MBR_Values<SPI1::CFG1, 28, 3, ReadWriteMode, SPI1CFG1Base> ;
    using CRCEN = SPI1_CFG1_CRCEN_Values<SPI1::CFG1, 22, 1, ReadWriteMode, SPI1CFG1Base> ;
    using CRCSIZE = SPI1_CFG1_CRCSIZE_Values<SPI1::CFG1, 16, 5, ReadWriteMode, SPI1CFG1Base> ;
    using TXDMAEN = SPI1_CFG1_TXDMAEN_Values<SPI1::CFG1, 15, 1, ReadWriteMode, SPI1CFG1Base> ;
    using RXDMAEN = SPI1_CFG1_RXDMAEN_Values<SPI1::CFG1, 14, 1, ReadWriteMode, SPI1CFG1Base> ;
    using UDRDET = SPI1_CFG1_UDRDET_Values<SPI1::CFG1, 11, 2, ReadWriteMode, SPI1CFG1Base> ;
    using UDRCFG = SPI1_CFG1_UDRCFG_Values<SPI1::CFG1, 9, 2, ReadWriteMode, SPI1CFG1Base> ;
    using FTHVL = SPI1_CFG1_FTHVL_Values<SPI1::CFG1, 5, 4, ReadWriteMode, SPI1CFG1Base> ;
    using DSIZE = SPI1_CFG1_DSIZE_Values<SPI1::CFG1, 0, 5, ReadWriteMode, SPI1CFG1Base> ;
    using FieldValues = SPI1_CFG1_DSIZE_Values<SPI1::CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG1Pack  = Register<0x40013008, 32, ReadWriteMode, SPI1CFG1Base, T...> ;

  struct SPI1CFG2Base {} ;

  struct CFG2 : public RegisterBase<0x4001300C, 32, ReadWriteMode>
  {
    using AFCNTR = SPI1_CFG2_AFCNTR_Values<SPI1::CFG2, 31, 1, ReadWriteMode, SPI1CFG2Base> ;
    using SSOM = SPI1_CFG2_SSOM_Values<SPI1::CFG2, 30, 1, ReadWriteMode, SPI1CFG2Base> ;
    using SSOE = SPI1_CFG2_SSOE_Values<SPI1::CFG2, 29, 1, ReadWriteMode, SPI1CFG2Base> ;
    using SSIOP = SPI1_CFG2_SSIOP_Values<SPI1::CFG2, 28, 1, ReadWriteMode, SPI1CFG2Base> ;
    using SSM = SPI1_CFG2_SSM_Values<SPI1::CFG2, 26, 1, ReadWriteMode, SPI1CFG2Base> ;
    using CPOL = SPI1_CFG2_CPOL_Values<SPI1::CFG2, 25, 1, ReadWriteMode, SPI1CFG2Base> ;
    using CPHA = SPI1_CFG2_CPHA_Values<SPI1::CFG2, 24, 1, ReadWriteMode, SPI1CFG2Base> ;
    using LSBFRST = SPI1_CFG2_LSBFRST_Values<SPI1::CFG2, 23, 1, ReadWriteMode, SPI1CFG2Base> ;
    using MASTER = SPI1_CFG2_MASTER_Values<SPI1::CFG2, 22, 1, ReadWriteMode, SPI1CFG2Base> ;
    using SP = SPI1_CFG2_SP_Values<SPI1::CFG2, 19, 3, ReadWriteMode, SPI1CFG2Base> ;
    using COMM = SPI1_CFG2_COMM_Values<SPI1::CFG2, 17, 2, ReadWriteMode, SPI1CFG2Base> ;
    using IOSWP = SPI1_CFG2_IOSWP_Values<SPI1::CFG2, 15, 1, ReadWriteMode, SPI1CFG2Base> ;
    using MIDI = SPI1_CFG2_MIDI_Values<SPI1::CFG2, 4, 4, ReadWriteMode, SPI1CFG2Base> ;
    using MSSI = SPI1_CFG2_MSSI_Values<SPI1::CFG2, 0, 4, ReadWriteMode, SPI1CFG2Base> ;
    using FieldValues = SPI1_CFG2_MSSI_Values<SPI1::CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG2Pack  = Register<0x4001300C, 32, ReadWriteMode, SPI1CFG2Base, T...> ;

  struct SPI1IERBase {} ;

  struct IER : public RegisterBase<0x40013010, 32, ReadWriteMode>
  {
    using TSERFIE = SPI1_IER_TSERFIE_Values<SPI1::IER, 10, 1, ReadWriteMode, SPI1IERBase> ;
    using MODFIE = SPI1_IER_MODFIE_Values<SPI1::IER, 9, 1, ReadWriteMode, SPI1IERBase> ;
    using TIFREIE = SPI1_IER_TIFREIE_Values<SPI1::IER, 8, 1, ReadWriteMode, SPI1IERBase> ;
    using CRCEIE = SPI1_IER_CRCEIE_Values<SPI1::IER, 7, 1, ReadWriteMode, SPI1IERBase> ;
    using OVRIE = SPI1_IER_OVRIE_Values<SPI1::IER, 6, 1, ReadWriteMode, SPI1IERBase> ;
    using UDRIE = SPI1_IER_UDRIE_Values<SPI1::IER, 5, 1, ReadWriteMode, SPI1IERBase> ;
    using TXTFIE = SPI1_IER_TXTFIE_Values<SPI1::IER, 4, 1, ReadWriteMode, SPI1IERBase> ;
    using EOTIE = SPI1_IER_EOTIE_Values<SPI1::IER, 3, 1, ReadWriteMode, SPI1IERBase> ;
    using DPXPIE = SPI1_IER_DPXPIE_Values<SPI1::IER, 2, 1, ReadMode, SPI1IERBase> ;
    using TXPIE = SPI1_IER_TXPIE_Values<SPI1::IER, 1, 1, ReadMode, SPI1IERBase> ;
    using RXPIE = SPI1_IER_RXPIE_Values<SPI1::IER, 0, 1, ReadWriteMode, SPI1IERBase> ;
    using FieldValues = SPI1_IER_RXPIE_Values<SPI1::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40013010, 32, ReadWriteMode, SPI1IERBase, T...> ;

  struct SPI1SRBase {} ;

  struct SR : public RegisterBase<0x40013014, 32, ReadMode>
  {
    using CTSIZE = SPI1_SR_CTSIZE_Values<SPI1::SR, 16, 16, ReadMode, SPI1SRBase> ;
    using RXWNE = SPI1_SR_RXWNE_Values<SPI1::SR, 15, 1, ReadMode, SPI1SRBase> ;
    using RXPLVL = SPI1_SR_RXPLVL_Values<SPI1::SR, 13, 2, ReadMode, SPI1SRBase> ;
    using TXC = SPI1_SR_TXC_Values<SPI1::SR, 12, 1, ReadMode, SPI1SRBase> ;
    using SUSP = SPI1_SR_SUSP_Values<SPI1::SR, 11, 1, ReadMode, SPI1SRBase> ;
    using TSERF = SPI1_SR_TSERF_Values<SPI1::SR, 10, 1, ReadMode, SPI1SRBase> ;
    using MODF = SPI1_SR_MODF_Values<SPI1::SR, 9, 1, ReadMode, SPI1SRBase> ;
    using TIFRE = SPI1_SR_TIFRE_Values<SPI1::SR, 8, 1, ReadMode, SPI1SRBase> ;
    using CRCE = SPI1_SR_CRCE_Values<SPI1::SR, 7, 1, ReadMode, SPI1SRBase> ;
    using OVR = SPI1_SR_OVR_Values<SPI1::SR, 6, 1, ReadMode, SPI1SRBase> ;
    using UDR = SPI1_SR_UDR_Values<SPI1::SR, 5, 1, ReadMode, SPI1SRBase> ;
    using TXTF = SPI1_SR_TXTF_Values<SPI1::SR, 4, 1, ReadMode, SPI1SRBase> ;
    using EOT = SPI1_SR_EOT_Values<SPI1::SR, 3, 1, ReadMode, SPI1SRBase> ;
    using DXP = SPI1_SR_DXP_Values<SPI1::SR, 2, 1, ReadMode, SPI1SRBase> ;
    using TXP = SPI1_SR_TXP_Values<SPI1::SR, 1, 1, ReadMode, SPI1SRBase> ;
    using RXP = SPI1_SR_RXP_Values<SPI1::SR, 0, 1, ReadMode, SPI1SRBase> ;
    using FieldValues = SPI1_SR_RXP_Values<SPI1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40013014, 32, ReadMode, SPI1SRBase, T...> ;

  struct SPI1IFCRBase {} ;

  struct IFCR : public RegisterBase<0x40013018, 32, WriteMode>
  {
    using SUSPC = SPI1_IFCR_SUSPC_Values<SPI1::IFCR, 11, 1, WriteMode, SPI1IFCRBase> ;
    using TSERFC = SPI1_IFCR_TSERFC_Values<SPI1::IFCR, 10, 1, WriteMode, SPI1IFCRBase> ;
    using MODFC = SPI1_IFCR_MODFC_Values<SPI1::IFCR, 9, 1, WriteMode, SPI1IFCRBase> ;
    using TIFREC = SPI1_IFCR_TIFREC_Values<SPI1::IFCR, 8, 1, WriteMode, SPI1IFCRBase> ;
    using CRCEC = SPI1_IFCR_CRCEC_Values<SPI1::IFCR, 7, 1, WriteMode, SPI1IFCRBase> ;
    using OVRC = SPI1_IFCR_OVRC_Values<SPI1::IFCR, 6, 1, WriteMode, SPI1IFCRBase> ;
    using UDRC = SPI1_IFCR_UDRC_Values<SPI1::IFCR, 5, 1, WriteMode, SPI1IFCRBase> ;
    using TXTFC = SPI1_IFCR_TXTFC_Values<SPI1::IFCR, 4, 1, WriteMode, SPI1IFCRBase> ;
    using EOTC = SPI1_IFCR_EOTC_Values<SPI1::IFCR, 3, 1, WriteMode, SPI1IFCRBase> ;
    using FieldValues = SPI1_IFCR_EOTC_Values<SPI1::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x40013018, 32, WriteMode, SPI1IFCRBase, T...> ;

  struct SPI1TXDRBase {} ;

  struct TXDR : public RegisterBase<0x40013020, 32, WriteMode>
  {
    using TXDRField = SPI1_TXDR_TXDR_Values<SPI1::TXDR, 0, 32, WriteMode, SPI1TXDRBase> ;
    using FieldValues = SPI1_TXDR_TXDR_Values<SPI1::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x40013020, 32, WriteMode, SPI1TXDRBase, T...> ;

  struct SPI1RXDRBase {} ;

  struct RXDR : public RegisterBase<0x40013030, 32, ReadMode>
  {
    using RXDRField = SPI1_RXDR_RXDR_Values<SPI1::RXDR, 0, 32, ReadMode, SPI1RXDRBase> ;
    using FieldValues = SPI1_RXDR_RXDR_Values<SPI1::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x40013030, 32, ReadMode, SPI1RXDRBase, T...> ;

  struct SPI1CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40013040, 32, ReadWriteMode>
  {
    using CRCPOLYField = SPI1_CRCPOLY_CRCPOLY_Values<SPI1::CRCPOLY, 0, 32, ReadWriteMode, SPI1CRCPOLYBase> ;
    using FieldValues = SPI1_CRCPOLY_CRCPOLY_Values<SPI1::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40013040, 32, ReadWriteMode, SPI1CRCPOLYBase, T...> ;

  struct SPI1TXCRCBase {} ;

  struct TXCRC : public RegisterBase<0x40013044, 32, ReadWriteMode>
  {
    using TXCRCField = SPI1_TXCRC_TXCRC_Values<SPI1::TXCRC, 0, 32, ReadWriteMode, SPI1TXCRCBase> ;
    using FieldValues = SPI1_TXCRC_TXCRC_Values<SPI1::TXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCPack  = Register<0x40013044, 32, ReadWriteMode, SPI1TXCRCBase, T...> ;

  struct SPI1RXCRCBase {} ;

  struct RXCRC : public RegisterBase<0x40013048, 32, ReadWriteMode>
  {
    using RXCRCField = SPI1_RXCRC_RXCRC_Values<SPI1::RXCRC, 0, 32, ReadWriteMode, SPI1RXCRCBase> ;
    using FieldValues = SPI1_RXCRC_RXCRC_Values<SPI1::RXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCPack  = Register<0x40013048, 32, ReadWriteMode, SPI1RXCRCBase, T...> ;

  struct SPI1UDRDRBase {} ;

  struct UDRDR : public RegisterBase<0x4001304C, 32, ReadWriteMode>
  {
    using UDRDRField = SPI1_UDRDR_UDRDR_Values<SPI1::UDRDR, 0, 32, ReadWriteMode, SPI1UDRDRBase> ;
    using FieldValues = SPI1_UDRDR_UDRDR_Values<SPI1::UDRDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UDRDRPack  = Register<0x4001304C, 32, ReadWriteMode, SPI1UDRDRBase, T...> ;

  struct SPI1CGFRBase {} ;

  struct CGFR : public RegisterBase<0x40013050, 32, ReadWriteMode>
  {
    using MCKOE = SPI1_CGFR_MCKOE_Values<SPI1::CGFR, 25, 1, ReadWriteMode, SPI1CGFRBase> ;
    using ODD = SPI1_CGFR_ODD_Values<SPI1::CGFR, 24, 1, ReadWriteMode, SPI1CGFRBase> ;
    using I2SDIV = SPI1_CGFR_I2SDIV_Values<SPI1::CGFR, 16, 8, ReadWriteMode, SPI1CGFRBase> ;
    using DATFMT = SPI1_CGFR_DATFMT_Values<SPI1::CGFR, 14, 1, ReadWriteMode, SPI1CGFRBase> ;
    using WSINV = SPI1_CGFR_WSINV_Values<SPI1::CGFR, 13, 1, ReadWriteMode, SPI1CGFRBase> ;
    using FIXCH = SPI1_CGFR_FIXCH_Values<SPI1::CGFR, 12, 1, ReadWriteMode, SPI1CGFRBase> ;
    using CKPOL = SPI1_CGFR_CKPOL_Values<SPI1::CGFR, 11, 1, ReadWriteMode, SPI1CGFRBase> ;
    using CHLEN = SPI1_CGFR_CHLEN_Values<SPI1::CGFR, 10, 1, ReadWriteMode, SPI1CGFRBase> ;
    using DATLEN = SPI1_CGFR_DATLEN_Values<SPI1::CGFR, 8, 2, ReadWriteMode, SPI1CGFRBase> ;
    using PCMSYNC = SPI1_CGFR_PCMSYNC_Values<SPI1::CGFR, 7, 1, ReadWriteMode, SPI1CGFRBase> ;
    using I2SSTD = SPI1_CGFR_I2SSTD_Values<SPI1::CGFR, 4, 2, ReadWriteMode, SPI1CGFRBase> ;
    using I2SCFG = SPI1_CGFR_I2SCFG_Values<SPI1::CGFR, 1, 3, ReadWriteMode, SPI1CGFRBase> ;
    using I2SMOD = SPI1_CGFR_I2SMOD_Values<SPI1::CGFR, 0, 1, ReadWriteMode, SPI1CGFRBase> ;
    using FieldValues = SPI1_CGFR_I2SMOD_Values<SPI1::CGFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CGFRPack  = Register<0x40013050, 32, ReadWriteMode, SPI1CGFRBase, T...> ;

} ;

#endif //#if !defined(SPI1REGISTERS_HPP)
