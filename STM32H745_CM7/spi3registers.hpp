/*******************************************************************************
* Filename      : spi3registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPI3REGISTERS_HPP)
#define SPI3REGISTERS_HPP

#include "spi3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI3
{
  struct SPI3CR1Base {} ;

  struct CR1 : public RegisterBase<0x40003C00, 32, ReadWriteMode>
  {
    using IOLOCK = SPI3_CR1_IOLOCK_Values<SPI3::CR1, 16, 1, ReadMode, SPI3CR1Base> ;
    using TCRCI = SPI3_CR1_TCRCI_Values<SPI3::CR1, 15, 1, ReadWriteMode, SPI3CR1Base> ;
    using RCRCI = SPI3_CR1_RCRCI_Values<SPI3::CR1, 14, 1, ReadWriteMode, SPI3CR1Base> ;
    using CRC33_17 = SPI3_CR1_CRC33_17_Values<SPI3::CR1, 13, 1, ReadWriteMode, SPI3CR1Base> ;
    using SSI = SPI3_CR1_SSI_Values<SPI3::CR1, 12, 1, ReadWriteMode, SPI3CR1Base> ;
    using HDDIR = SPI3_CR1_HDDIR_Values<SPI3::CR1, 11, 1, ReadWriteMode, SPI3CR1Base> ;
    using CSUSP = SPI3_CR1_CSUSP_Values<SPI3::CR1, 10, 1, WriteMode, SPI3CR1Base> ;
    using CSTART = SPI3_CR1_CSTART_Values<SPI3::CR1, 9, 1, ReadMode, SPI3CR1Base> ;
    using MASRX = SPI3_CR1_MASRX_Values<SPI3::CR1, 8, 1, ReadWriteMode, SPI3CR1Base> ;
    using SPE = SPI3_CR1_SPE_Values<SPI3::CR1, 0, 1, ReadWriteMode, SPI3CR1Base> ;
    using FieldValues = SPI3_CR1_SPE_Values<SPI3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40003C00, 32, ReadWriteMode, SPI3CR1Base, T...> ;

  struct SPI3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40003C04, 32, ReadWriteMode>
  {
    using TSER = SPI3_CR2_TSER_Values<SPI3::CR2, 16, 16, ReadMode, SPI3CR2Base> ;
    using TSIZE = SPI3_CR2_TSIZE_Values<SPI3::CR2, 0, 16, ReadWriteMode, SPI3CR2Base> ;
    using FieldValues = SPI3_CR2_TSIZE_Values<SPI3::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40003C04, 32, ReadWriteMode, SPI3CR2Base, T...> ;

  struct SPI3CFG1Base {} ;

  struct CFG1 : public RegisterBase<0x40003C08, 32, ReadWriteMode>
  {
    using MBR = SPI3_CFG1_MBR_Values<SPI3::CFG1, 28, 3, ReadWriteMode, SPI3CFG1Base> ;
    using CRCEN = SPI3_CFG1_CRCEN_Values<SPI3::CFG1, 22, 1, ReadWriteMode, SPI3CFG1Base> ;
    using CRCSIZE = SPI3_CFG1_CRCSIZE_Values<SPI3::CFG1, 16, 5, ReadWriteMode, SPI3CFG1Base> ;
    using TXDMAEN = SPI3_CFG1_TXDMAEN_Values<SPI3::CFG1, 15, 1, ReadWriteMode, SPI3CFG1Base> ;
    using RXDMAEN = SPI3_CFG1_RXDMAEN_Values<SPI3::CFG1, 14, 1, ReadWriteMode, SPI3CFG1Base> ;
    using UDRDET = SPI3_CFG1_UDRDET_Values<SPI3::CFG1, 11, 2, ReadWriteMode, SPI3CFG1Base> ;
    using UDRCFG = SPI3_CFG1_UDRCFG_Values<SPI3::CFG1, 9, 2, ReadWriteMode, SPI3CFG1Base> ;
    using FTHVL = SPI3_CFG1_FTHVL_Values<SPI3::CFG1, 5, 4, ReadWriteMode, SPI3CFG1Base> ;
    using DSIZE = SPI3_CFG1_DSIZE_Values<SPI3::CFG1, 0, 5, ReadWriteMode, SPI3CFG1Base> ;
    using FieldValues = SPI3_CFG1_DSIZE_Values<SPI3::CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG1Pack  = Register<0x40003C08, 32, ReadWriteMode, SPI3CFG1Base, T...> ;

  struct SPI3CFG2Base {} ;

  struct CFG2 : public RegisterBase<0x40003C0C, 32, ReadWriteMode>
  {
    using AFCNTR = SPI3_CFG2_AFCNTR_Values<SPI3::CFG2, 31, 1, ReadWriteMode, SPI3CFG2Base> ;
    using SSOM = SPI3_CFG2_SSOM_Values<SPI3::CFG2, 30, 1, ReadWriteMode, SPI3CFG2Base> ;
    using SSOE = SPI3_CFG2_SSOE_Values<SPI3::CFG2, 29, 1, ReadWriteMode, SPI3CFG2Base> ;
    using SSIOP = SPI3_CFG2_SSIOP_Values<SPI3::CFG2, 28, 1, ReadWriteMode, SPI3CFG2Base> ;
    using SSM = SPI3_CFG2_SSM_Values<SPI3::CFG2, 26, 1, ReadWriteMode, SPI3CFG2Base> ;
    using CPOL = SPI3_CFG2_CPOL_Values<SPI3::CFG2, 25, 1, ReadWriteMode, SPI3CFG2Base> ;
    using CPHA = SPI3_CFG2_CPHA_Values<SPI3::CFG2, 24, 1, ReadWriteMode, SPI3CFG2Base> ;
    using LSBFRST = SPI3_CFG2_LSBFRST_Values<SPI3::CFG2, 23, 1, ReadWriteMode, SPI3CFG2Base> ;
    using MASTER = SPI3_CFG2_MASTER_Values<SPI3::CFG2, 22, 1, ReadWriteMode, SPI3CFG2Base> ;
    using SP = SPI3_CFG2_SP_Values<SPI3::CFG2, 19, 3, ReadWriteMode, SPI3CFG2Base> ;
    using COMM = SPI3_CFG2_COMM_Values<SPI3::CFG2, 17, 2, ReadWriteMode, SPI3CFG2Base> ;
    using IOSWP = SPI3_CFG2_IOSWP_Values<SPI3::CFG2, 15, 1, ReadWriteMode, SPI3CFG2Base> ;
    using MIDI = SPI3_CFG2_MIDI_Values<SPI3::CFG2, 4, 4, ReadWriteMode, SPI3CFG2Base> ;
    using MSSI = SPI3_CFG2_MSSI_Values<SPI3::CFG2, 0, 4, ReadWriteMode, SPI3CFG2Base> ;
    using FieldValues = SPI3_CFG2_MSSI_Values<SPI3::CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG2Pack  = Register<0x40003C0C, 32, ReadWriteMode, SPI3CFG2Base, T...> ;

  struct SPI3IERBase {} ;

  struct IER : public RegisterBase<0x40003C10, 32, ReadWriteMode>
  {
    using TSERFIE = SPI3_IER_TSERFIE_Values<SPI3::IER, 10, 1, ReadWriteMode, SPI3IERBase> ;
    using MODFIE = SPI3_IER_MODFIE_Values<SPI3::IER, 9, 1, ReadWriteMode, SPI3IERBase> ;
    using TIFREIE = SPI3_IER_TIFREIE_Values<SPI3::IER, 8, 1, ReadWriteMode, SPI3IERBase> ;
    using CRCEIE = SPI3_IER_CRCEIE_Values<SPI3::IER, 7, 1, ReadWriteMode, SPI3IERBase> ;
    using OVRIE = SPI3_IER_OVRIE_Values<SPI3::IER, 6, 1, ReadWriteMode, SPI3IERBase> ;
    using UDRIE = SPI3_IER_UDRIE_Values<SPI3::IER, 5, 1, ReadWriteMode, SPI3IERBase> ;
    using TXTFIE = SPI3_IER_TXTFIE_Values<SPI3::IER, 4, 1, ReadWriteMode, SPI3IERBase> ;
    using EOTIE = SPI3_IER_EOTIE_Values<SPI3::IER, 3, 1, ReadWriteMode, SPI3IERBase> ;
    using DPXPIE = SPI3_IER_DPXPIE_Values<SPI3::IER, 2, 1, ReadMode, SPI3IERBase> ;
    using TXPIE = SPI3_IER_TXPIE_Values<SPI3::IER, 1, 1, ReadMode, SPI3IERBase> ;
    using RXPIE = SPI3_IER_RXPIE_Values<SPI3::IER, 0, 1, ReadWriteMode, SPI3IERBase> ;
    using FieldValues = SPI3_IER_RXPIE_Values<SPI3::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40003C10, 32, ReadWriteMode, SPI3IERBase, T...> ;

  struct SPI3SRBase {} ;

  struct SR : public RegisterBase<0x40003C14, 32, ReadMode>
  {
    using CTSIZE = SPI3_SR_CTSIZE_Values<SPI3::SR, 16, 16, ReadMode, SPI3SRBase> ;
    using RXWNE = SPI3_SR_RXWNE_Values<SPI3::SR, 15, 1, ReadMode, SPI3SRBase> ;
    using RXPLVL = SPI3_SR_RXPLVL_Values<SPI3::SR, 13, 2, ReadMode, SPI3SRBase> ;
    using TXC = SPI3_SR_TXC_Values<SPI3::SR, 12, 1, ReadMode, SPI3SRBase> ;
    using SUSP = SPI3_SR_SUSP_Values<SPI3::SR, 11, 1, ReadMode, SPI3SRBase> ;
    using TSERF = SPI3_SR_TSERF_Values<SPI3::SR, 10, 1, ReadMode, SPI3SRBase> ;
    using MODF = SPI3_SR_MODF_Values<SPI3::SR, 9, 1, ReadMode, SPI3SRBase> ;
    using TIFRE = SPI3_SR_TIFRE_Values<SPI3::SR, 8, 1, ReadMode, SPI3SRBase> ;
    using CRCE = SPI3_SR_CRCE_Values<SPI3::SR, 7, 1, ReadMode, SPI3SRBase> ;
    using OVR = SPI3_SR_OVR_Values<SPI3::SR, 6, 1, ReadMode, SPI3SRBase> ;
    using UDR = SPI3_SR_UDR_Values<SPI3::SR, 5, 1, ReadMode, SPI3SRBase> ;
    using TXTF = SPI3_SR_TXTF_Values<SPI3::SR, 4, 1, ReadMode, SPI3SRBase> ;
    using EOT = SPI3_SR_EOT_Values<SPI3::SR, 3, 1, ReadMode, SPI3SRBase> ;
    using DXP = SPI3_SR_DXP_Values<SPI3::SR, 2, 1, ReadMode, SPI3SRBase> ;
    using TXP = SPI3_SR_TXP_Values<SPI3::SR, 1, 1, ReadMode, SPI3SRBase> ;
    using RXP = SPI3_SR_RXP_Values<SPI3::SR, 0, 1, ReadMode, SPI3SRBase> ;
    using FieldValues = SPI3_SR_RXP_Values<SPI3::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40003C14, 32, ReadMode, SPI3SRBase, T...> ;

  struct SPI3IFCRBase {} ;

  struct IFCR : public RegisterBase<0x40003C18, 32, WriteMode>
  {
    using SUSPC = SPI3_IFCR_SUSPC_Values<SPI3::IFCR, 11, 1, WriteMode, SPI3IFCRBase> ;
    using TSERFC = SPI3_IFCR_TSERFC_Values<SPI3::IFCR, 10, 1, WriteMode, SPI3IFCRBase> ;
    using MODFC = SPI3_IFCR_MODFC_Values<SPI3::IFCR, 9, 1, WriteMode, SPI3IFCRBase> ;
    using TIFREC = SPI3_IFCR_TIFREC_Values<SPI3::IFCR, 8, 1, WriteMode, SPI3IFCRBase> ;
    using CRCEC = SPI3_IFCR_CRCEC_Values<SPI3::IFCR, 7, 1, WriteMode, SPI3IFCRBase> ;
    using OVRC = SPI3_IFCR_OVRC_Values<SPI3::IFCR, 6, 1, WriteMode, SPI3IFCRBase> ;
    using UDRC = SPI3_IFCR_UDRC_Values<SPI3::IFCR, 5, 1, WriteMode, SPI3IFCRBase> ;
    using TXTFC = SPI3_IFCR_TXTFC_Values<SPI3::IFCR, 4, 1, WriteMode, SPI3IFCRBase> ;
    using EOTC = SPI3_IFCR_EOTC_Values<SPI3::IFCR, 3, 1, WriteMode, SPI3IFCRBase> ;
    using FieldValues = SPI3_IFCR_EOTC_Values<SPI3::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x40003C18, 32, WriteMode, SPI3IFCRBase, T...> ;

  struct SPI3TXDRBase {} ;

  struct TXDR : public RegisterBase<0x40003C20, 32, WriteMode>
  {
    using TXDRField = SPI3_TXDR_TXDR_Values<SPI3::TXDR, 0, 32, WriteMode, SPI3TXDRBase> ;
    using FieldValues = SPI3_TXDR_TXDR_Values<SPI3::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x40003C20, 32, WriteMode, SPI3TXDRBase, T...> ;

  struct SPI3RXDRBase {} ;

  struct RXDR : public RegisterBase<0x40003C30, 32, ReadMode>
  {
    using RXDRField = SPI3_RXDR_RXDR_Values<SPI3::RXDR, 0, 32, ReadMode, SPI3RXDRBase> ;
    using FieldValues = SPI3_RXDR_RXDR_Values<SPI3::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x40003C30, 32, ReadMode, SPI3RXDRBase, T...> ;

  struct SPI3CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40003C40, 32, ReadWriteMode>
  {
    using CRCPOLYField = SPI3_CRCPOLY_CRCPOLY_Values<SPI3::CRCPOLY, 0, 32, ReadWriteMode, SPI3CRCPOLYBase> ;
    using FieldValues = SPI3_CRCPOLY_CRCPOLY_Values<SPI3::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40003C40, 32, ReadWriteMode, SPI3CRCPOLYBase, T...> ;

  struct SPI3TXCRCBase {} ;

  struct TXCRC : public RegisterBase<0x40003C44, 32, ReadWriteMode>
  {
    using TXCRCField = SPI3_TXCRC_TXCRC_Values<SPI3::TXCRC, 0, 32, ReadWriteMode, SPI3TXCRCBase> ;
    using FieldValues = SPI3_TXCRC_TXCRC_Values<SPI3::TXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCPack  = Register<0x40003C44, 32, ReadWriteMode, SPI3TXCRCBase, T...> ;

  struct SPI3RXCRCBase {} ;

  struct RXCRC : public RegisterBase<0x40003C48, 32, ReadWriteMode>
  {
    using RXCRCField = SPI3_RXCRC_RXCRC_Values<SPI3::RXCRC, 0, 32, ReadWriteMode, SPI3RXCRCBase> ;
    using FieldValues = SPI3_RXCRC_RXCRC_Values<SPI3::RXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCPack  = Register<0x40003C48, 32, ReadWriteMode, SPI3RXCRCBase, T...> ;

  struct SPI3UDRDRBase {} ;

  struct UDRDR : public RegisterBase<0x40003C4C, 32, ReadWriteMode>
  {
    using UDRDRField = SPI3_UDRDR_UDRDR_Values<SPI3::UDRDR, 0, 32, ReadWriteMode, SPI3UDRDRBase> ;
    using FieldValues = SPI3_UDRDR_UDRDR_Values<SPI3::UDRDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UDRDRPack  = Register<0x40003C4C, 32, ReadWriteMode, SPI3UDRDRBase, T...> ;

  struct SPI3CGFRBase {} ;

  struct CGFR : public RegisterBase<0x40003C50, 32, ReadWriteMode>
  {
    using MCKOE = SPI3_CGFR_MCKOE_Values<SPI3::CGFR, 25, 1, ReadWriteMode, SPI3CGFRBase> ;
    using ODD = SPI3_CGFR_ODD_Values<SPI3::CGFR, 24, 1, ReadWriteMode, SPI3CGFRBase> ;
    using I2SDIV = SPI3_CGFR_I2SDIV_Values<SPI3::CGFR, 16, 8, ReadWriteMode, SPI3CGFRBase> ;
    using DATFMT = SPI3_CGFR_DATFMT_Values<SPI3::CGFR, 14, 1, ReadWriteMode, SPI3CGFRBase> ;
    using WSINV = SPI3_CGFR_WSINV_Values<SPI3::CGFR, 13, 1, ReadWriteMode, SPI3CGFRBase> ;
    using FIXCH = SPI3_CGFR_FIXCH_Values<SPI3::CGFR, 12, 1, ReadWriteMode, SPI3CGFRBase> ;
    using CKPOL = SPI3_CGFR_CKPOL_Values<SPI3::CGFR, 11, 1, ReadWriteMode, SPI3CGFRBase> ;
    using CHLEN = SPI3_CGFR_CHLEN_Values<SPI3::CGFR, 10, 1, ReadWriteMode, SPI3CGFRBase> ;
    using DATLEN = SPI3_CGFR_DATLEN_Values<SPI3::CGFR, 8, 2, ReadWriteMode, SPI3CGFRBase> ;
    using PCMSYNC = SPI3_CGFR_PCMSYNC_Values<SPI3::CGFR, 7, 1, ReadWriteMode, SPI3CGFRBase> ;
    using I2SSTD = SPI3_CGFR_I2SSTD_Values<SPI3::CGFR, 4, 2, ReadWriteMode, SPI3CGFRBase> ;
    using I2SCFG = SPI3_CGFR_I2SCFG_Values<SPI3::CGFR, 1, 3, ReadWriteMode, SPI3CGFRBase> ;
    using I2SMOD = SPI3_CGFR_I2SMOD_Values<SPI3::CGFR, 0, 1, ReadWriteMode, SPI3CGFRBase> ;
    using FieldValues = SPI3_CGFR_I2SMOD_Values<SPI3::CGFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CGFRPack  = Register<0x40003C50, 32, ReadWriteMode, SPI3CGFRBase, T...> ;

} ;

#endif //#if !defined(SPI3REGISTERS_HPP)
