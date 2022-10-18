/*******************************************************************************
* Filename      : spi5registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPI5REGISTERS_HPP)
#define SPI5REGISTERS_HPP

#include "spi5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI5
{
  struct SPI5CR1Base {} ;

  struct CR1 : public RegisterBase<0x40015000, 32, ReadWriteMode>
  {
    using IOLOCK = SPI5_CR1_IOLOCK_Values<SPI5::CR1, 16, 1, ReadMode, SPI5CR1Base> ;
    using TCRCI = SPI5_CR1_TCRCI_Values<SPI5::CR1, 15, 1, ReadWriteMode, SPI5CR1Base> ;
    using RCRCI = SPI5_CR1_RCRCI_Values<SPI5::CR1, 14, 1, ReadWriteMode, SPI5CR1Base> ;
    using CRC33_17 = SPI5_CR1_CRC33_17_Values<SPI5::CR1, 13, 1, ReadWriteMode, SPI5CR1Base> ;
    using SSI = SPI5_CR1_SSI_Values<SPI5::CR1, 12, 1, ReadWriteMode, SPI5CR1Base> ;
    using HDDIR = SPI5_CR1_HDDIR_Values<SPI5::CR1, 11, 1, ReadWriteMode, SPI5CR1Base> ;
    using CSUSP = SPI5_CR1_CSUSP_Values<SPI5::CR1, 10, 1, WriteMode, SPI5CR1Base> ;
    using CSTART = SPI5_CR1_CSTART_Values<SPI5::CR1, 9, 1, ReadMode, SPI5CR1Base> ;
    using MASRX = SPI5_CR1_MASRX_Values<SPI5::CR1, 8, 1, ReadWriteMode, SPI5CR1Base> ;
    using SPE = SPI5_CR1_SPE_Values<SPI5::CR1, 0, 1, ReadWriteMode, SPI5CR1Base> ;
    using FieldValues = SPI5_CR1_SPE_Values<SPI5::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40015000, 32, ReadWriteMode, SPI5CR1Base, T...> ;

  struct SPI5CR2Base {} ;

  struct CR2 : public RegisterBase<0x40015004, 32, ReadWriteMode>
  {
    using TSER = SPI5_CR2_TSER_Values<SPI5::CR2, 16, 16, ReadMode, SPI5CR2Base> ;
    using TSIZE = SPI5_CR2_TSIZE_Values<SPI5::CR2, 0, 16, ReadWriteMode, SPI5CR2Base> ;
    using FieldValues = SPI5_CR2_TSIZE_Values<SPI5::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40015004, 32, ReadWriteMode, SPI5CR2Base, T...> ;

  struct SPI5CFG1Base {} ;

  struct CFG1 : public RegisterBase<0x40015008, 32, ReadWriteMode>
  {
    using MBR = SPI5_CFG1_MBR_Values<SPI5::CFG1, 28, 3, ReadWriteMode, SPI5CFG1Base> ;
    using CRCEN = SPI5_CFG1_CRCEN_Values<SPI5::CFG1, 22, 1, ReadWriteMode, SPI5CFG1Base> ;
    using CRCSIZE = SPI5_CFG1_CRCSIZE_Values<SPI5::CFG1, 16, 5, ReadWriteMode, SPI5CFG1Base> ;
    using TXDMAEN = SPI5_CFG1_TXDMAEN_Values<SPI5::CFG1, 15, 1, ReadWriteMode, SPI5CFG1Base> ;
    using RXDMAEN = SPI5_CFG1_RXDMAEN_Values<SPI5::CFG1, 14, 1, ReadWriteMode, SPI5CFG1Base> ;
    using UDRDET = SPI5_CFG1_UDRDET_Values<SPI5::CFG1, 11, 2, ReadWriteMode, SPI5CFG1Base> ;
    using UDRCFG = SPI5_CFG1_UDRCFG_Values<SPI5::CFG1, 9, 2, ReadWriteMode, SPI5CFG1Base> ;
    using FTHVL = SPI5_CFG1_FTHVL_Values<SPI5::CFG1, 5, 4, ReadWriteMode, SPI5CFG1Base> ;
    using DSIZE = SPI5_CFG1_DSIZE_Values<SPI5::CFG1, 0, 5, ReadWriteMode, SPI5CFG1Base> ;
    using FieldValues = SPI5_CFG1_DSIZE_Values<SPI5::CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG1Pack  = Register<0x40015008, 32, ReadWriteMode, SPI5CFG1Base, T...> ;

  struct SPI5CFG2Base {} ;

  struct CFG2 : public RegisterBase<0x4001500C, 32, ReadWriteMode>
  {
    using AFCNTR = SPI5_CFG2_AFCNTR_Values<SPI5::CFG2, 31, 1, ReadWriteMode, SPI5CFG2Base> ;
    using SSOM = SPI5_CFG2_SSOM_Values<SPI5::CFG2, 30, 1, ReadWriteMode, SPI5CFG2Base> ;
    using SSOE = SPI5_CFG2_SSOE_Values<SPI5::CFG2, 29, 1, ReadWriteMode, SPI5CFG2Base> ;
    using SSIOP = SPI5_CFG2_SSIOP_Values<SPI5::CFG2, 28, 1, ReadWriteMode, SPI5CFG2Base> ;
    using SSM = SPI5_CFG2_SSM_Values<SPI5::CFG2, 26, 1, ReadWriteMode, SPI5CFG2Base> ;
    using CPOL = SPI5_CFG2_CPOL_Values<SPI5::CFG2, 25, 1, ReadWriteMode, SPI5CFG2Base> ;
    using CPHA = SPI5_CFG2_CPHA_Values<SPI5::CFG2, 24, 1, ReadWriteMode, SPI5CFG2Base> ;
    using LSBFRST = SPI5_CFG2_LSBFRST_Values<SPI5::CFG2, 23, 1, ReadWriteMode, SPI5CFG2Base> ;
    using MASTER = SPI5_CFG2_MASTER_Values<SPI5::CFG2, 22, 1, ReadWriteMode, SPI5CFG2Base> ;
    using SP = SPI5_CFG2_SP_Values<SPI5::CFG2, 19, 3, ReadWriteMode, SPI5CFG2Base> ;
    using COMM = SPI5_CFG2_COMM_Values<SPI5::CFG2, 17, 2, ReadWriteMode, SPI5CFG2Base> ;
    using IOSWP = SPI5_CFG2_IOSWP_Values<SPI5::CFG2, 15, 1, ReadWriteMode, SPI5CFG2Base> ;
    using MIDI = SPI5_CFG2_MIDI_Values<SPI5::CFG2, 4, 4, ReadWriteMode, SPI5CFG2Base> ;
    using MSSI = SPI5_CFG2_MSSI_Values<SPI5::CFG2, 0, 4, ReadWriteMode, SPI5CFG2Base> ;
    using FieldValues = SPI5_CFG2_MSSI_Values<SPI5::CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG2Pack  = Register<0x4001500C, 32, ReadWriteMode, SPI5CFG2Base, T...> ;

  struct SPI5IERBase {} ;

  struct IER : public RegisterBase<0x40015010, 32, ReadWriteMode>
  {
    using TSERFIE = SPI5_IER_TSERFIE_Values<SPI5::IER, 10, 1, ReadWriteMode, SPI5IERBase> ;
    using MODFIE = SPI5_IER_MODFIE_Values<SPI5::IER, 9, 1, ReadWriteMode, SPI5IERBase> ;
    using TIFREIE = SPI5_IER_TIFREIE_Values<SPI5::IER, 8, 1, ReadWriteMode, SPI5IERBase> ;
    using CRCEIE = SPI5_IER_CRCEIE_Values<SPI5::IER, 7, 1, ReadWriteMode, SPI5IERBase> ;
    using OVRIE = SPI5_IER_OVRIE_Values<SPI5::IER, 6, 1, ReadWriteMode, SPI5IERBase> ;
    using UDRIE = SPI5_IER_UDRIE_Values<SPI5::IER, 5, 1, ReadWriteMode, SPI5IERBase> ;
    using TXTFIE = SPI5_IER_TXTFIE_Values<SPI5::IER, 4, 1, ReadWriteMode, SPI5IERBase> ;
    using EOTIE = SPI5_IER_EOTIE_Values<SPI5::IER, 3, 1, ReadWriteMode, SPI5IERBase> ;
    using DPXPIE = SPI5_IER_DPXPIE_Values<SPI5::IER, 2, 1, ReadMode, SPI5IERBase> ;
    using TXPIE = SPI5_IER_TXPIE_Values<SPI5::IER, 1, 1, ReadMode, SPI5IERBase> ;
    using RXPIE = SPI5_IER_RXPIE_Values<SPI5::IER, 0, 1, ReadWriteMode, SPI5IERBase> ;
    using FieldValues = SPI5_IER_RXPIE_Values<SPI5::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40015010, 32, ReadWriteMode, SPI5IERBase, T...> ;

  struct SPI5SRBase {} ;

  struct SR : public RegisterBase<0x40015014, 32, ReadMode>
  {
    using CTSIZE = SPI5_SR_CTSIZE_Values<SPI5::SR, 16, 16, ReadMode, SPI5SRBase> ;
    using RXWNE = SPI5_SR_RXWNE_Values<SPI5::SR, 15, 1, ReadMode, SPI5SRBase> ;
    using RXPLVL = SPI5_SR_RXPLVL_Values<SPI5::SR, 13, 2, ReadMode, SPI5SRBase> ;
    using TXC = SPI5_SR_TXC_Values<SPI5::SR, 12, 1, ReadMode, SPI5SRBase> ;
    using SUSP = SPI5_SR_SUSP_Values<SPI5::SR, 11, 1, ReadMode, SPI5SRBase> ;
    using TSERF = SPI5_SR_TSERF_Values<SPI5::SR, 10, 1, ReadMode, SPI5SRBase> ;
    using MODF = SPI5_SR_MODF_Values<SPI5::SR, 9, 1, ReadMode, SPI5SRBase> ;
    using TIFRE = SPI5_SR_TIFRE_Values<SPI5::SR, 8, 1, ReadMode, SPI5SRBase> ;
    using CRCE = SPI5_SR_CRCE_Values<SPI5::SR, 7, 1, ReadMode, SPI5SRBase> ;
    using OVR = SPI5_SR_OVR_Values<SPI5::SR, 6, 1, ReadMode, SPI5SRBase> ;
    using UDR = SPI5_SR_UDR_Values<SPI5::SR, 5, 1, ReadMode, SPI5SRBase> ;
    using TXTF = SPI5_SR_TXTF_Values<SPI5::SR, 4, 1, ReadMode, SPI5SRBase> ;
    using EOT = SPI5_SR_EOT_Values<SPI5::SR, 3, 1, ReadMode, SPI5SRBase> ;
    using DXP = SPI5_SR_DXP_Values<SPI5::SR, 2, 1, ReadMode, SPI5SRBase> ;
    using TXP = SPI5_SR_TXP_Values<SPI5::SR, 1, 1, ReadMode, SPI5SRBase> ;
    using RXP = SPI5_SR_RXP_Values<SPI5::SR, 0, 1, ReadMode, SPI5SRBase> ;
    using FieldValues = SPI5_SR_RXP_Values<SPI5::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40015014, 32, ReadMode, SPI5SRBase, T...> ;

  struct SPI5IFCRBase {} ;

  struct IFCR : public RegisterBase<0x40015018, 32, WriteMode>
  {
    using SUSPC = SPI5_IFCR_SUSPC_Values<SPI5::IFCR, 11, 1, WriteMode, SPI5IFCRBase> ;
    using TSERFC = SPI5_IFCR_TSERFC_Values<SPI5::IFCR, 10, 1, WriteMode, SPI5IFCRBase> ;
    using MODFC = SPI5_IFCR_MODFC_Values<SPI5::IFCR, 9, 1, WriteMode, SPI5IFCRBase> ;
    using TIFREC = SPI5_IFCR_TIFREC_Values<SPI5::IFCR, 8, 1, WriteMode, SPI5IFCRBase> ;
    using CRCEC = SPI5_IFCR_CRCEC_Values<SPI5::IFCR, 7, 1, WriteMode, SPI5IFCRBase> ;
    using OVRC = SPI5_IFCR_OVRC_Values<SPI5::IFCR, 6, 1, WriteMode, SPI5IFCRBase> ;
    using UDRC = SPI5_IFCR_UDRC_Values<SPI5::IFCR, 5, 1, WriteMode, SPI5IFCRBase> ;
    using TXTFC = SPI5_IFCR_TXTFC_Values<SPI5::IFCR, 4, 1, WriteMode, SPI5IFCRBase> ;
    using EOTC = SPI5_IFCR_EOTC_Values<SPI5::IFCR, 3, 1, WriteMode, SPI5IFCRBase> ;
    using FieldValues = SPI5_IFCR_EOTC_Values<SPI5::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x40015018, 32, WriteMode, SPI5IFCRBase, T...> ;

  struct SPI5TXDRBase {} ;

  struct TXDR : public RegisterBase<0x40015020, 32, WriteMode>
  {
    using TXDRField = SPI5_TXDR_TXDR_Values<SPI5::TXDR, 0, 32, WriteMode, SPI5TXDRBase> ;
    using FieldValues = SPI5_TXDR_TXDR_Values<SPI5::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x40015020, 32, WriteMode, SPI5TXDRBase, T...> ;

  struct SPI5RXDRBase {} ;

  struct RXDR : public RegisterBase<0x40015030, 32, ReadMode>
  {
    using RXDRField = SPI5_RXDR_RXDR_Values<SPI5::RXDR, 0, 32, ReadMode, SPI5RXDRBase> ;
    using FieldValues = SPI5_RXDR_RXDR_Values<SPI5::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x40015030, 32, ReadMode, SPI5RXDRBase, T...> ;

  struct SPI5CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40015040, 32, ReadWriteMode>
  {
    using CRCPOLYField = SPI5_CRCPOLY_CRCPOLY_Values<SPI5::CRCPOLY, 0, 32, ReadWriteMode, SPI5CRCPOLYBase> ;
    using FieldValues = SPI5_CRCPOLY_CRCPOLY_Values<SPI5::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40015040, 32, ReadWriteMode, SPI5CRCPOLYBase, T...> ;

  struct SPI5TXCRCBase {} ;

  struct TXCRC : public RegisterBase<0x40015044, 32, ReadWriteMode>
  {
    using TXCRCField = SPI5_TXCRC_TXCRC_Values<SPI5::TXCRC, 0, 32, ReadWriteMode, SPI5TXCRCBase> ;
    using FieldValues = SPI5_TXCRC_TXCRC_Values<SPI5::TXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCPack  = Register<0x40015044, 32, ReadWriteMode, SPI5TXCRCBase, T...> ;

  struct SPI5RXCRCBase {} ;

  struct RXCRC : public RegisterBase<0x40015048, 32, ReadWriteMode>
  {
    using RXCRCField = SPI5_RXCRC_RXCRC_Values<SPI5::RXCRC, 0, 32, ReadWriteMode, SPI5RXCRCBase> ;
    using FieldValues = SPI5_RXCRC_RXCRC_Values<SPI5::RXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCPack  = Register<0x40015048, 32, ReadWriteMode, SPI5RXCRCBase, T...> ;

  struct SPI5UDRDRBase {} ;

  struct UDRDR : public RegisterBase<0x4001504C, 32, ReadWriteMode>
  {
    using UDRDRField = SPI5_UDRDR_UDRDR_Values<SPI5::UDRDR, 0, 32, ReadWriteMode, SPI5UDRDRBase> ;
    using FieldValues = SPI5_UDRDR_UDRDR_Values<SPI5::UDRDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UDRDRPack  = Register<0x4001504C, 32, ReadWriteMode, SPI5UDRDRBase, T...> ;

  struct SPI5CGFRBase {} ;

  struct CGFR : public RegisterBase<0x40015050, 32, ReadWriteMode>
  {
    using MCKOE = SPI5_CGFR_MCKOE_Values<SPI5::CGFR, 25, 1, ReadWriteMode, SPI5CGFRBase> ;
    using ODD = SPI5_CGFR_ODD_Values<SPI5::CGFR, 24, 1, ReadWriteMode, SPI5CGFRBase> ;
    using I2SDIV = SPI5_CGFR_I2SDIV_Values<SPI5::CGFR, 16, 8, ReadWriteMode, SPI5CGFRBase> ;
    using DATFMT = SPI5_CGFR_DATFMT_Values<SPI5::CGFR, 14, 1, ReadWriteMode, SPI5CGFRBase> ;
    using WSINV = SPI5_CGFR_WSINV_Values<SPI5::CGFR, 13, 1, ReadWriteMode, SPI5CGFRBase> ;
    using FIXCH = SPI5_CGFR_FIXCH_Values<SPI5::CGFR, 12, 1, ReadWriteMode, SPI5CGFRBase> ;
    using CKPOL = SPI5_CGFR_CKPOL_Values<SPI5::CGFR, 11, 1, ReadWriteMode, SPI5CGFRBase> ;
    using CHLEN = SPI5_CGFR_CHLEN_Values<SPI5::CGFR, 10, 1, ReadWriteMode, SPI5CGFRBase> ;
    using DATLEN = SPI5_CGFR_DATLEN_Values<SPI5::CGFR, 8, 2, ReadWriteMode, SPI5CGFRBase> ;
    using PCMSYNC = SPI5_CGFR_PCMSYNC_Values<SPI5::CGFR, 7, 1, ReadWriteMode, SPI5CGFRBase> ;
    using I2SSTD = SPI5_CGFR_I2SSTD_Values<SPI5::CGFR, 4, 2, ReadWriteMode, SPI5CGFRBase> ;
    using I2SCFG = SPI5_CGFR_I2SCFG_Values<SPI5::CGFR, 1, 3, ReadWriteMode, SPI5CGFRBase> ;
    using I2SMOD = SPI5_CGFR_I2SMOD_Values<SPI5::CGFR, 0, 1, ReadWriteMode, SPI5CGFRBase> ;
    using FieldValues = SPI5_CGFR_I2SMOD_Values<SPI5::CGFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CGFRPack  = Register<0x40015050, 32, ReadWriteMode, SPI5CGFRBase, T...> ;

} ;

#endif //#if !defined(SPI5REGISTERS_HPP)
