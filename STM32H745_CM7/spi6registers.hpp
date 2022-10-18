/*******************************************************************************
* Filename      : spi6registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPI6REGISTERS_HPP)
#define SPI6REGISTERS_HPP

#include "spi6fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI6
{
  struct SPI6CR1Base {} ;

  struct CR1 : public RegisterBase<0x58001400, 32, ReadWriteMode>
  {
    using IOLOCK = SPI6_CR1_IOLOCK_Values<SPI6::CR1, 16, 1, ReadMode, SPI6CR1Base> ;
    using TCRCI = SPI6_CR1_TCRCI_Values<SPI6::CR1, 15, 1, ReadWriteMode, SPI6CR1Base> ;
    using RCRCI = SPI6_CR1_RCRCI_Values<SPI6::CR1, 14, 1, ReadWriteMode, SPI6CR1Base> ;
    using CRC33_17 = SPI6_CR1_CRC33_17_Values<SPI6::CR1, 13, 1, ReadWriteMode, SPI6CR1Base> ;
    using SSI = SPI6_CR1_SSI_Values<SPI6::CR1, 12, 1, ReadWriteMode, SPI6CR1Base> ;
    using HDDIR = SPI6_CR1_HDDIR_Values<SPI6::CR1, 11, 1, ReadWriteMode, SPI6CR1Base> ;
    using CSUSP = SPI6_CR1_CSUSP_Values<SPI6::CR1, 10, 1, WriteMode, SPI6CR1Base> ;
    using CSTART = SPI6_CR1_CSTART_Values<SPI6::CR1, 9, 1, ReadMode, SPI6CR1Base> ;
    using MASRX = SPI6_CR1_MASRX_Values<SPI6::CR1, 8, 1, ReadWriteMode, SPI6CR1Base> ;
    using SPE = SPI6_CR1_SPE_Values<SPI6::CR1, 0, 1, ReadWriteMode, SPI6CR1Base> ;
    using FieldValues = SPI6_CR1_SPE_Values<SPI6::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x58001400, 32, ReadWriteMode, SPI6CR1Base, T...> ;

  struct SPI6CR2Base {} ;

  struct CR2 : public RegisterBase<0x58001404, 32, ReadWriteMode>
  {
    using TSER = SPI6_CR2_TSER_Values<SPI6::CR2, 16, 16, ReadMode, SPI6CR2Base> ;
    using TSIZE = SPI6_CR2_TSIZE_Values<SPI6::CR2, 0, 16, ReadWriteMode, SPI6CR2Base> ;
    using FieldValues = SPI6_CR2_TSIZE_Values<SPI6::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x58001404, 32, ReadWriteMode, SPI6CR2Base, T...> ;

  struct SPI6CFG1Base {} ;

  struct CFG1 : public RegisterBase<0x58001408, 32, ReadWriteMode>
  {
    using MBR = SPI6_CFG1_MBR_Values<SPI6::CFG1, 28, 3, ReadWriteMode, SPI6CFG1Base> ;
    using CRCEN = SPI6_CFG1_CRCEN_Values<SPI6::CFG1, 22, 1, ReadWriteMode, SPI6CFG1Base> ;
    using CRCSIZE = SPI6_CFG1_CRCSIZE_Values<SPI6::CFG1, 16, 5, ReadWriteMode, SPI6CFG1Base> ;
    using TXDMAEN = SPI6_CFG1_TXDMAEN_Values<SPI6::CFG1, 15, 1, ReadWriteMode, SPI6CFG1Base> ;
    using RXDMAEN = SPI6_CFG1_RXDMAEN_Values<SPI6::CFG1, 14, 1, ReadWriteMode, SPI6CFG1Base> ;
    using UDRDET = SPI6_CFG1_UDRDET_Values<SPI6::CFG1, 11, 2, ReadWriteMode, SPI6CFG1Base> ;
    using UDRCFG = SPI6_CFG1_UDRCFG_Values<SPI6::CFG1, 9, 2, ReadWriteMode, SPI6CFG1Base> ;
    using FTHVL = SPI6_CFG1_FTHVL_Values<SPI6::CFG1, 5, 4, ReadWriteMode, SPI6CFG1Base> ;
    using DSIZE = SPI6_CFG1_DSIZE_Values<SPI6::CFG1, 0, 5, ReadWriteMode, SPI6CFG1Base> ;
    using FieldValues = SPI6_CFG1_DSIZE_Values<SPI6::CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG1Pack  = Register<0x58001408, 32, ReadWriteMode, SPI6CFG1Base, T...> ;

  struct SPI6CFG2Base {} ;

  struct CFG2 : public RegisterBase<0x5800140C, 32, ReadWriteMode>
  {
    using AFCNTR = SPI6_CFG2_AFCNTR_Values<SPI6::CFG2, 31, 1, ReadWriteMode, SPI6CFG2Base> ;
    using SSOM = SPI6_CFG2_SSOM_Values<SPI6::CFG2, 30, 1, ReadWriteMode, SPI6CFG2Base> ;
    using SSOE = SPI6_CFG2_SSOE_Values<SPI6::CFG2, 29, 1, ReadWriteMode, SPI6CFG2Base> ;
    using SSIOP = SPI6_CFG2_SSIOP_Values<SPI6::CFG2, 28, 1, ReadWriteMode, SPI6CFG2Base> ;
    using SSM = SPI6_CFG2_SSM_Values<SPI6::CFG2, 26, 1, ReadWriteMode, SPI6CFG2Base> ;
    using CPOL = SPI6_CFG2_CPOL_Values<SPI6::CFG2, 25, 1, ReadWriteMode, SPI6CFG2Base> ;
    using CPHA = SPI6_CFG2_CPHA_Values<SPI6::CFG2, 24, 1, ReadWriteMode, SPI6CFG2Base> ;
    using LSBFRST = SPI6_CFG2_LSBFRST_Values<SPI6::CFG2, 23, 1, ReadWriteMode, SPI6CFG2Base> ;
    using MASTER = SPI6_CFG2_MASTER_Values<SPI6::CFG2, 22, 1, ReadWriteMode, SPI6CFG2Base> ;
    using SP = SPI6_CFG2_SP_Values<SPI6::CFG2, 19, 3, ReadWriteMode, SPI6CFG2Base> ;
    using COMM = SPI6_CFG2_COMM_Values<SPI6::CFG2, 17, 2, ReadWriteMode, SPI6CFG2Base> ;
    using IOSWP = SPI6_CFG2_IOSWP_Values<SPI6::CFG2, 15, 1, ReadWriteMode, SPI6CFG2Base> ;
    using MIDI = SPI6_CFG2_MIDI_Values<SPI6::CFG2, 4, 4, ReadWriteMode, SPI6CFG2Base> ;
    using MSSI = SPI6_CFG2_MSSI_Values<SPI6::CFG2, 0, 4, ReadWriteMode, SPI6CFG2Base> ;
    using FieldValues = SPI6_CFG2_MSSI_Values<SPI6::CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG2Pack  = Register<0x5800140C, 32, ReadWriteMode, SPI6CFG2Base, T...> ;

  struct SPI6IERBase {} ;

  struct IER : public RegisterBase<0x58001410, 32, ReadWriteMode>
  {
    using TSERFIE = SPI6_IER_TSERFIE_Values<SPI6::IER, 10, 1, ReadWriteMode, SPI6IERBase> ;
    using MODFIE = SPI6_IER_MODFIE_Values<SPI6::IER, 9, 1, ReadWriteMode, SPI6IERBase> ;
    using TIFREIE = SPI6_IER_TIFREIE_Values<SPI6::IER, 8, 1, ReadWriteMode, SPI6IERBase> ;
    using CRCEIE = SPI6_IER_CRCEIE_Values<SPI6::IER, 7, 1, ReadWriteMode, SPI6IERBase> ;
    using OVRIE = SPI6_IER_OVRIE_Values<SPI6::IER, 6, 1, ReadWriteMode, SPI6IERBase> ;
    using UDRIE = SPI6_IER_UDRIE_Values<SPI6::IER, 5, 1, ReadWriteMode, SPI6IERBase> ;
    using TXTFIE = SPI6_IER_TXTFIE_Values<SPI6::IER, 4, 1, ReadWriteMode, SPI6IERBase> ;
    using EOTIE = SPI6_IER_EOTIE_Values<SPI6::IER, 3, 1, ReadWriteMode, SPI6IERBase> ;
    using DPXPIE = SPI6_IER_DPXPIE_Values<SPI6::IER, 2, 1, ReadMode, SPI6IERBase> ;
    using TXPIE = SPI6_IER_TXPIE_Values<SPI6::IER, 1, 1, ReadMode, SPI6IERBase> ;
    using RXPIE = SPI6_IER_RXPIE_Values<SPI6::IER, 0, 1, ReadWriteMode, SPI6IERBase> ;
    using FieldValues = SPI6_IER_RXPIE_Values<SPI6::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x58001410, 32, ReadWriteMode, SPI6IERBase, T...> ;

  struct SPI6SRBase {} ;

  struct SR : public RegisterBase<0x58001414, 32, ReadMode>
  {
    using CTSIZE = SPI6_SR_CTSIZE_Values<SPI6::SR, 16, 16, ReadMode, SPI6SRBase> ;
    using RXWNE = SPI6_SR_RXWNE_Values<SPI6::SR, 15, 1, ReadMode, SPI6SRBase> ;
    using RXPLVL = SPI6_SR_RXPLVL_Values<SPI6::SR, 13, 2, ReadMode, SPI6SRBase> ;
    using TXC = SPI6_SR_TXC_Values<SPI6::SR, 12, 1, ReadMode, SPI6SRBase> ;
    using SUSP = SPI6_SR_SUSP_Values<SPI6::SR, 11, 1, ReadMode, SPI6SRBase> ;
    using TSERF = SPI6_SR_TSERF_Values<SPI6::SR, 10, 1, ReadMode, SPI6SRBase> ;
    using MODF = SPI6_SR_MODF_Values<SPI6::SR, 9, 1, ReadMode, SPI6SRBase> ;
    using TIFRE = SPI6_SR_TIFRE_Values<SPI6::SR, 8, 1, ReadMode, SPI6SRBase> ;
    using CRCE = SPI6_SR_CRCE_Values<SPI6::SR, 7, 1, ReadMode, SPI6SRBase> ;
    using OVR = SPI6_SR_OVR_Values<SPI6::SR, 6, 1, ReadMode, SPI6SRBase> ;
    using UDR = SPI6_SR_UDR_Values<SPI6::SR, 5, 1, ReadMode, SPI6SRBase> ;
    using TXTF = SPI6_SR_TXTF_Values<SPI6::SR, 4, 1, ReadMode, SPI6SRBase> ;
    using EOT = SPI6_SR_EOT_Values<SPI6::SR, 3, 1, ReadMode, SPI6SRBase> ;
    using DXP = SPI6_SR_DXP_Values<SPI6::SR, 2, 1, ReadMode, SPI6SRBase> ;
    using TXP = SPI6_SR_TXP_Values<SPI6::SR, 1, 1, ReadMode, SPI6SRBase> ;
    using RXP = SPI6_SR_RXP_Values<SPI6::SR, 0, 1, ReadMode, SPI6SRBase> ;
    using FieldValues = SPI6_SR_RXP_Values<SPI6::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x58001414, 32, ReadMode, SPI6SRBase, T...> ;

  struct SPI6IFCRBase {} ;

  struct IFCR : public RegisterBase<0x58001418, 32, WriteMode>
  {
    using SUSPC = SPI6_IFCR_SUSPC_Values<SPI6::IFCR, 11, 1, WriteMode, SPI6IFCRBase> ;
    using TSERFC = SPI6_IFCR_TSERFC_Values<SPI6::IFCR, 10, 1, WriteMode, SPI6IFCRBase> ;
    using MODFC = SPI6_IFCR_MODFC_Values<SPI6::IFCR, 9, 1, WriteMode, SPI6IFCRBase> ;
    using TIFREC = SPI6_IFCR_TIFREC_Values<SPI6::IFCR, 8, 1, WriteMode, SPI6IFCRBase> ;
    using CRCEC = SPI6_IFCR_CRCEC_Values<SPI6::IFCR, 7, 1, WriteMode, SPI6IFCRBase> ;
    using OVRC = SPI6_IFCR_OVRC_Values<SPI6::IFCR, 6, 1, WriteMode, SPI6IFCRBase> ;
    using UDRC = SPI6_IFCR_UDRC_Values<SPI6::IFCR, 5, 1, WriteMode, SPI6IFCRBase> ;
    using TXTFC = SPI6_IFCR_TXTFC_Values<SPI6::IFCR, 4, 1, WriteMode, SPI6IFCRBase> ;
    using EOTC = SPI6_IFCR_EOTC_Values<SPI6::IFCR, 3, 1, WriteMode, SPI6IFCRBase> ;
    using FieldValues = SPI6_IFCR_EOTC_Values<SPI6::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x58001418, 32, WriteMode, SPI6IFCRBase, T...> ;

  struct SPI6TXDRBase {} ;

  struct TXDR : public RegisterBase<0x58001420, 32, WriteMode>
  {
    using TXDRField = SPI6_TXDR_TXDR_Values<SPI6::TXDR, 0, 32, WriteMode, SPI6TXDRBase> ;
    using FieldValues = SPI6_TXDR_TXDR_Values<SPI6::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x58001420, 32, WriteMode, SPI6TXDRBase, T...> ;

  struct SPI6RXDRBase {} ;

  struct RXDR : public RegisterBase<0x58001430, 32, ReadMode>
  {
    using RXDRField = SPI6_RXDR_RXDR_Values<SPI6::RXDR, 0, 32, ReadMode, SPI6RXDRBase> ;
    using FieldValues = SPI6_RXDR_RXDR_Values<SPI6::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x58001430, 32, ReadMode, SPI6RXDRBase, T...> ;

  struct SPI6CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x58001440, 32, ReadWriteMode>
  {
    using CRCPOLYField = SPI6_CRCPOLY_CRCPOLY_Values<SPI6::CRCPOLY, 0, 32, ReadWriteMode, SPI6CRCPOLYBase> ;
    using FieldValues = SPI6_CRCPOLY_CRCPOLY_Values<SPI6::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x58001440, 32, ReadWriteMode, SPI6CRCPOLYBase, T...> ;

  struct SPI6TXCRCBase {} ;

  struct TXCRC : public RegisterBase<0x58001444, 32, ReadWriteMode>
  {
    using TXCRCField = SPI6_TXCRC_TXCRC_Values<SPI6::TXCRC, 0, 32, ReadWriteMode, SPI6TXCRCBase> ;
    using FieldValues = SPI6_TXCRC_TXCRC_Values<SPI6::TXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCPack  = Register<0x58001444, 32, ReadWriteMode, SPI6TXCRCBase, T...> ;

  struct SPI6RXCRCBase {} ;

  struct RXCRC : public RegisterBase<0x58001448, 32, ReadWriteMode>
  {
    using RXCRCField = SPI6_RXCRC_RXCRC_Values<SPI6::RXCRC, 0, 32, ReadWriteMode, SPI6RXCRCBase> ;
    using FieldValues = SPI6_RXCRC_RXCRC_Values<SPI6::RXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCPack  = Register<0x58001448, 32, ReadWriteMode, SPI6RXCRCBase, T...> ;

  struct SPI6UDRDRBase {} ;

  struct UDRDR : public RegisterBase<0x5800144C, 32, ReadWriteMode>
  {
    using UDRDRField = SPI6_UDRDR_UDRDR_Values<SPI6::UDRDR, 0, 32, ReadWriteMode, SPI6UDRDRBase> ;
    using FieldValues = SPI6_UDRDR_UDRDR_Values<SPI6::UDRDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UDRDRPack  = Register<0x5800144C, 32, ReadWriteMode, SPI6UDRDRBase, T...> ;

  struct SPI6CGFRBase {} ;

  struct CGFR : public RegisterBase<0x58001450, 32, ReadWriteMode>
  {
    using MCKOE = SPI6_CGFR_MCKOE_Values<SPI6::CGFR, 25, 1, ReadWriteMode, SPI6CGFRBase> ;
    using ODD = SPI6_CGFR_ODD_Values<SPI6::CGFR, 24, 1, ReadWriteMode, SPI6CGFRBase> ;
    using I2SDIV = SPI6_CGFR_I2SDIV_Values<SPI6::CGFR, 16, 8, ReadWriteMode, SPI6CGFRBase> ;
    using DATFMT = SPI6_CGFR_DATFMT_Values<SPI6::CGFR, 14, 1, ReadWriteMode, SPI6CGFRBase> ;
    using WSINV = SPI6_CGFR_WSINV_Values<SPI6::CGFR, 13, 1, ReadWriteMode, SPI6CGFRBase> ;
    using FIXCH = SPI6_CGFR_FIXCH_Values<SPI6::CGFR, 12, 1, ReadWriteMode, SPI6CGFRBase> ;
    using CKPOL = SPI6_CGFR_CKPOL_Values<SPI6::CGFR, 11, 1, ReadWriteMode, SPI6CGFRBase> ;
    using CHLEN = SPI6_CGFR_CHLEN_Values<SPI6::CGFR, 10, 1, ReadWriteMode, SPI6CGFRBase> ;
    using DATLEN = SPI6_CGFR_DATLEN_Values<SPI6::CGFR, 8, 2, ReadWriteMode, SPI6CGFRBase> ;
    using PCMSYNC = SPI6_CGFR_PCMSYNC_Values<SPI6::CGFR, 7, 1, ReadWriteMode, SPI6CGFRBase> ;
    using I2SSTD = SPI6_CGFR_I2SSTD_Values<SPI6::CGFR, 4, 2, ReadWriteMode, SPI6CGFRBase> ;
    using I2SCFG = SPI6_CGFR_I2SCFG_Values<SPI6::CGFR, 1, 3, ReadWriteMode, SPI6CGFRBase> ;
    using I2SMOD = SPI6_CGFR_I2SMOD_Values<SPI6::CGFR, 0, 1, ReadWriteMode, SPI6CGFRBase> ;
    using FieldValues = SPI6_CGFR_I2SMOD_Values<SPI6::CGFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CGFRPack  = Register<0x58001450, 32, ReadWriteMode, SPI6CGFRBase, T...> ;

} ;

#endif //#if !defined(SPI6REGISTERS_HPP)
