/*******************************************************************************
* Filename      : spi4registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPI4REGISTERS_HPP)
#define SPI4REGISTERS_HPP

#include "spi4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI4
{
  struct SPI4CR1Base {} ;

  struct CR1 : public RegisterBase<0x40013400, 32, ReadWriteMode>
  {
    using IOLOCK = SPI4_CR1_IOLOCK_Values<SPI4::CR1, 16, 1, ReadMode, SPI4CR1Base> ;
    using TCRCI = SPI4_CR1_TCRCI_Values<SPI4::CR1, 15, 1, ReadWriteMode, SPI4CR1Base> ;
    using RCRCI = SPI4_CR1_RCRCI_Values<SPI4::CR1, 14, 1, ReadWriteMode, SPI4CR1Base> ;
    using CRC33_17 = SPI4_CR1_CRC33_17_Values<SPI4::CR1, 13, 1, ReadWriteMode, SPI4CR1Base> ;
    using SSI = SPI4_CR1_SSI_Values<SPI4::CR1, 12, 1, ReadWriteMode, SPI4CR1Base> ;
    using HDDIR = SPI4_CR1_HDDIR_Values<SPI4::CR1, 11, 1, ReadWriteMode, SPI4CR1Base> ;
    using CSUSP = SPI4_CR1_CSUSP_Values<SPI4::CR1, 10, 1, WriteMode, SPI4CR1Base> ;
    using CSTART = SPI4_CR1_CSTART_Values<SPI4::CR1, 9, 1, ReadMode, SPI4CR1Base> ;
    using MASRX = SPI4_CR1_MASRX_Values<SPI4::CR1, 8, 1, ReadWriteMode, SPI4CR1Base> ;
    using SPE = SPI4_CR1_SPE_Values<SPI4::CR1, 0, 1, ReadWriteMode, SPI4CR1Base> ;
    using FieldValues = SPI4_CR1_SPE_Values<SPI4::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40013400, 32, ReadWriteMode, SPI4CR1Base, T...> ;

  struct SPI4CR2Base {} ;

  struct CR2 : public RegisterBase<0x40013404, 32, ReadWriteMode>
  {
    using TSER = SPI4_CR2_TSER_Values<SPI4::CR2, 16, 16, ReadMode, SPI4CR2Base> ;
    using TSIZE = SPI4_CR2_TSIZE_Values<SPI4::CR2, 0, 16, ReadWriteMode, SPI4CR2Base> ;
    using FieldValues = SPI4_CR2_TSIZE_Values<SPI4::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40013404, 32, ReadWriteMode, SPI4CR2Base, T...> ;

  struct SPI4CFG1Base {} ;

  struct CFG1 : public RegisterBase<0x40013408, 32, ReadWriteMode>
  {
    using MBR = SPI4_CFG1_MBR_Values<SPI4::CFG1, 28, 3, ReadWriteMode, SPI4CFG1Base> ;
    using CRCEN = SPI4_CFG1_CRCEN_Values<SPI4::CFG1, 22, 1, ReadWriteMode, SPI4CFG1Base> ;
    using CRCSIZE = SPI4_CFG1_CRCSIZE_Values<SPI4::CFG1, 16, 5, ReadWriteMode, SPI4CFG1Base> ;
    using TXDMAEN = SPI4_CFG1_TXDMAEN_Values<SPI4::CFG1, 15, 1, ReadWriteMode, SPI4CFG1Base> ;
    using RXDMAEN = SPI4_CFG1_RXDMAEN_Values<SPI4::CFG1, 14, 1, ReadWriteMode, SPI4CFG1Base> ;
    using UDRDET = SPI4_CFG1_UDRDET_Values<SPI4::CFG1, 11, 2, ReadWriteMode, SPI4CFG1Base> ;
    using UDRCFG = SPI4_CFG1_UDRCFG_Values<SPI4::CFG1, 9, 2, ReadWriteMode, SPI4CFG1Base> ;
    using FTHVL = SPI4_CFG1_FTHVL_Values<SPI4::CFG1, 5, 4, ReadWriteMode, SPI4CFG1Base> ;
    using DSIZE = SPI4_CFG1_DSIZE_Values<SPI4::CFG1, 0, 5, ReadWriteMode, SPI4CFG1Base> ;
    using FieldValues = SPI4_CFG1_DSIZE_Values<SPI4::CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG1Pack  = Register<0x40013408, 32, ReadWriteMode, SPI4CFG1Base, T...> ;

  struct SPI4CFG2Base {} ;

  struct CFG2 : public RegisterBase<0x4001340C, 32, ReadWriteMode>
  {
    using AFCNTR = SPI4_CFG2_AFCNTR_Values<SPI4::CFG2, 31, 1, ReadWriteMode, SPI4CFG2Base> ;
    using SSOM = SPI4_CFG2_SSOM_Values<SPI4::CFG2, 30, 1, ReadWriteMode, SPI4CFG2Base> ;
    using SSOE = SPI4_CFG2_SSOE_Values<SPI4::CFG2, 29, 1, ReadWriteMode, SPI4CFG2Base> ;
    using SSIOP = SPI4_CFG2_SSIOP_Values<SPI4::CFG2, 28, 1, ReadWriteMode, SPI4CFG2Base> ;
    using SSM = SPI4_CFG2_SSM_Values<SPI4::CFG2, 26, 1, ReadWriteMode, SPI4CFG2Base> ;
    using CPOL = SPI4_CFG2_CPOL_Values<SPI4::CFG2, 25, 1, ReadWriteMode, SPI4CFG2Base> ;
    using CPHA = SPI4_CFG2_CPHA_Values<SPI4::CFG2, 24, 1, ReadWriteMode, SPI4CFG2Base> ;
    using LSBFRST = SPI4_CFG2_LSBFRST_Values<SPI4::CFG2, 23, 1, ReadWriteMode, SPI4CFG2Base> ;
    using MASTER = SPI4_CFG2_MASTER_Values<SPI4::CFG2, 22, 1, ReadWriteMode, SPI4CFG2Base> ;
    using SP = SPI4_CFG2_SP_Values<SPI4::CFG2, 19, 3, ReadWriteMode, SPI4CFG2Base> ;
    using COMM = SPI4_CFG2_COMM_Values<SPI4::CFG2, 17, 2, ReadWriteMode, SPI4CFG2Base> ;
    using IOSWP = SPI4_CFG2_IOSWP_Values<SPI4::CFG2, 15, 1, ReadWriteMode, SPI4CFG2Base> ;
    using MIDI = SPI4_CFG2_MIDI_Values<SPI4::CFG2, 4, 4, ReadWriteMode, SPI4CFG2Base> ;
    using MSSI = SPI4_CFG2_MSSI_Values<SPI4::CFG2, 0, 4, ReadWriteMode, SPI4CFG2Base> ;
    using FieldValues = SPI4_CFG2_MSSI_Values<SPI4::CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG2Pack  = Register<0x4001340C, 32, ReadWriteMode, SPI4CFG2Base, T...> ;

  struct SPI4IERBase {} ;

  struct IER : public RegisterBase<0x40013410, 32, ReadWriteMode>
  {
    using TSERFIE = SPI4_IER_TSERFIE_Values<SPI4::IER, 10, 1, ReadWriteMode, SPI4IERBase> ;
    using MODFIE = SPI4_IER_MODFIE_Values<SPI4::IER, 9, 1, ReadWriteMode, SPI4IERBase> ;
    using TIFREIE = SPI4_IER_TIFREIE_Values<SPI4::IER, 8, 1, ReadWriteMode, SPI4IERBase> ;
    using CRCEIE = SPI4_IER_CRCEIE_Values<SPI4::IER, 7, 1, ReadWriteMode, SPI4IERBase> ;
    using OVRIE = SPI4_IER_OVRIE_Values<SPI4::IER, 6, 1, ReadWriteMode, SPI4IERBase> ;
    using UDRIE = SPI4_IER_UDRIE_Values<SPI4::IER, 5, 1, ReadWriteMode, SPI4IERBase> ;
    using TXTFIE = SPI4_IER_TXTFIE_Values<SPI4::IER, 4, 1, ReadWriteMode, SPI4IERBase> ;
    using EOTIE = SPI4_IER_EOTIE_Values<SPI4::IER, 3, 1, ReadWriteMode, SPI4IERBase> ;
    using DPXPIE = SPI4_IER_DPXPIE_Values<SPI4::IER, 2, 1, ReadMode, SPI4IERBase> ;
    using TXPIE = SPI4_IER_TXPIE_Values<SPI4::IER, 1, 1, ReadMode, SPI4IERBase> ;
    using RXPIE = SPI4_IER_RXPIE_Values<SPI4::IER, 0, 1, ReadWriteMode, SPI4IERBase> ;
    using FieldValues = SPI4_IER_RXPIE_Values<SPI4::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40013410, 32, ReadWriteMode, SPI4IERBase, T...> ;

  struct SPI4SRBase {} ;

  struct SR : public RegisterBase<0x40013414, 32, ReadMode>
  {
    using CTSIZE = SPI4_SR_CTSIZE_Values<SPI4::SR, 16, 16, ReadMode, SPI4SRBase> ;
    using RXWNE = SPI4_SR_RXWNE_Values<SPI4::SR, 15, 1, ReadMode, SPI4SRBase> ;
    using RXPLVL = SPI4_SR_RXPLVL_Values<SPI4::SR, 13, 2, ReadMode, SPI4SRBase> ;
    using TXC = SPI4_SR_TXC_Values<SPI4::SR, 12, 1, ReadMode, SPI4SRBase> ;
    using SUSP = SPI4_SR_SUSP_Values<SPI4::SR, 11, 1, ReadMode, SPI4SRBase> ;
    using TSERF = SPI4_SR_TSERF_Values<SPI4::SR, 10, 1, ReadMode, SPI4SRBase> ;
    using MODF = SPI4_SR_MODF_Values<SPI4::SR, 9, 1, ReadMode, SPI4SRBase> ;
    using TIFRE = SPI4_SR_TIFRE_Values<SPI4::SR, 8, 1, ReadMode, SPI4SRBase> ;
    using CRCE = SPI4_SR_CRCE_Values<SPI4::SR, 7, 1, ReadMode, SPI4SRBase> ;
    using OVR = SPI4_SR_OVR_Values<SPI4::SR, 6, 1, ReadMode, SPI4SRBase> ;
    using UDR = SPI4_SR_UDR_Values<SPI4::SR, 5, 1, ReadMode, SPI4SRBase> ;
    using TXTF = SPI4_SR_TXTF_Values<SPI4::SR, 4, 1, ReadMode, SPI4SRBase> ;
    using EOT = SPI4_SR_EOT_Values<SPI4::SR, 3, 1, ReadMode, SPI4SRBase> ;
    using DXP = SPI4_SR_DXP_Values<SPI4::SR, 2, 1, ReadMode, SPI4SRBase> ;
    using TXP = SPI4_SR_TXP_Values<SPI4::SR, 1, 1, ReadMode, SPI4SRBase> ;
    using RXP = SPI4_SR_RXP_Values<SPI4::SR, 0, 1, ReadMode, SPI4SRBase> ;
    using FieldValues = SPI4_SR_RXP_Values<SPI4::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40013414, 32, ReadMode, SPI4SRBase, T...> ;

  struct SPI4IFCRBase {} ;

  struct IFCR : public RegisterBase<0x40013418, 32, WriteMode>
  {
    using SUSPC = SPI4_IFCR_SUSPC_Values<SPI4::IFCR, 11, 1, WriteMode, SPI4IFCRBase> ;
    using TSERFC = SPI4_IFCR_TSERFC_Values<SPI4::IFCR, 10, 1, WriteMode, SPI4IFCRBase> ;
    using MODFC = SPI4_IFCR_MODFC_Values<SPI4::IFCR, 9, 1, WriteMode, SPI4IFCRBase> ;
    using TIFREC = SPI4_IFCR_TIFREC_Values<SPI4::IFCR, 8, 1, WriteMode, SPI4IFCRBase> ;
    using CRCEC = SPI4_IFCR_CRCEC_Values<SPI4::IFCR, 7, 1, WriteMode, SPI4IFCRBase> ;
    using OVRC = SPI4_IFCR_OVRC_Values<SPI4::IFCR, 6, 1, WriteMode, SPI4IFCRBase> ;
    using UDRC = SPI4_IFCR_UDRC_Values<SPI4::IFCR, 5, 1, WriteMode, SPI4IFCRBase> ;
    using TXTFC = SPI4_IFCR_TXTFC_Values<SPI4::IFCR, 4, 1, WriteMode, SPI4IFCRBase> ;
    using EOTC = SPI4_IFCR_EOTC_Values<SPI4::IFCR, 3, 1, WriteMode, SPI4IFCRBase> ;
    using FieldValues = SPI4_IFCR_EOTC_Values<SPI4::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x40013418, 32, WriteMode, SPI4IFCRBase, T...> ;

  struct SPI4TXDRBase {} ;

  struct TXDR : public RegisterBase<0x40013420, 32, WriteMode>
  {
    using TXDRField = SPI4_TXDR_TXDR_Values<SPI4::TXDR, 0, 32, WriteMode, SPI4TXDRBase> ;
    using FieldValues = SPI4_TXDR_TXDR_Values<SPI4::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x40013420, 32, WriteMode, SPI4TXDRBase, T...> ;

  struct SPI4RXDRBase {} ;

  struct RXDR : public RegisterBase<0x40013430, 32, ReadMode>
  {
    using RXDRField = SPI4_RXDR_RXDR_Values<SPI4::RXDR, 0, 32, ReadMode, SPI4RXDRBase> ;
    using FieldValues = SPI4_RXDR_RXDR_Values<SPI4::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x40013430, 32, ReadMode, SPI4RXDRBase, T...> ;

  struct SPI4CRCPOLYBase {} ;

  struct CRCPOLY : public RegisterBase<0x40013440, 32, ReadWriteMode>
  {
    using CRCPOLYField = SPI4_CRCPOLY_CRCPOLY_Values<SPI4::CRCPOLY, 0, 32, ReadWriteMode, SPI4CRCPOLYBase> ;
    using FieldValues = SPI4_CRCPOLY_CRCPOLY_Values<SPI4::CRCPOLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCPOLYPack  = Register<0x40013440, 32, ReadWriteMode, SPI4CRCPOLYBase, T...> ;

  struct SPI4TXCRCBase {} ;

  struct TXCRC : public RegisterBase<0x40013444, 32, ReadWriteMode>
  {
    using TXCRCField = SPI4_TXCRC_TXCRC_Values<SPI4::TXCRC, 0, 32, ReadWriteMode, SPI4TXCRCBase> ;
    using FieldValues = SPI4_TXCRC_TXCRC_Values<SPI4::TXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXCRCPack  = Register<0x40013444, 32, ReadWriteMode, SPI4TXCRCBase, T...> ;

  struct SPI4RXCRCBase {} ;

  struct RXCRC : public RegisterBase<0x40013448, 32, ReadWriteMode>
  {
    using RXCRCField = SPI4_RXCRC_RXCRC_Values<SPI4::RXCRC, 0, 32, ReadWriteMode, SPI4RXCRCBase> ;
    using FieldValues = SPI4_RXCRC_RXCRC_Values<SPI4::RXCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXCRCPack  = Register<0x40013448, 32, ReadWriteMode, SPI4RXCRCBase, T...> ;

  struct SPI4UDRDRBase {} ;

  struct UDRDR : public RegisterBase<0x4001344C, 32, ReadWriteMode>
  {
    using UDRDRField = SPI4_UDRDR_UDRDR_Values<SPI4::UDRDR, 0, 32, ReadWriteMode, SPI4UDRDRBase> ;
    using FieldValues = SPI4_UDRDR_UDRDR_Values<SPI4::UDRDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UDRDRPack  = Register<0x4001344C, 32, ReadWriteMode, SPI4UDRDRBase, T...> ;

  struct SPI4CGFRBase {} ;

  struct CGFR : public RegisterBase<0x40013450, 32, ReadWriteMode>
  {
    using MCKOE = SPI4_CGFR_MCKOE_Values<SPI4::CGFR, 25, 1, ReadWriteMode, SPI4CGFRBase> ;
    using ODD = SPI4_CGFR_ODD_Values<SPI4::CGFR, 24, 1, ReadWriteMode, SPI4CGFRBase> ;
    using I2SDIV = SPI4_CGFR_I2SDIV_Values<SPI4::CGFR, 16, 8, ReadWriteMode, SPI4CGFRBase> ;
    using DATFMT = SPI4_CGFR_DATFMT_Values<SPI4::CGFR, 14, 1, ReadWriteMode, SPI4CGFRBase> ;
    using WSINV = SPI4_CGFR_WSINV_Values<SPI4::CGFR, 13, 1, ReadWriteMode, SPI4CGFRBase> ;
    using FIXCH = SPI4_CGFR_FIXCH_Values<SPI4::CGFR, 12, 1, ReadWriteMode, SPI4CGFRBase> ;
    using CKPOL = SPI4_CGFR_CKPOL_Values<SPI4::CGFR, 11, 1, ReadWriteMode, SPI4CGFRBase> ;
    using CHLEN = SPI4_CGFR_CHLEN_Values<SPI4::CGFR, 10, 1, ReadWriteMode, SPI4CGFRBase> ;
    using DATLEN = SPI4_CGFR_DATLEN_Values<SPI4::CGFR, 8, 2, ReadWriteMode, SPI4CGFRBase> ;
    using PCMSYNC = SPI4_CGFR_PCMSYNC_Values<SPI4::CGFR, 7, 1, ReadWriteMode, SPI4CGFRBase> ;
    using I2SSTD = SPI4_CGFR_I2SSTD_Values<SPI4::CGFR, 4, 2, ReadWriteMode, SPI4CGFRBase> ;
    using I2SCFG = SPI4_CGFR_I2SCFG_Values<SPI4::CGFR, 1, 3, ReadWriteMode, SPI4CGFRBase> ;
    using I2SMOD = SPI4_CGFR_I2SMOD_Values<SPI4::CGFR, 0, 1, ReadWriteMode, SPI4CGFRBase> ;
    using FieldValues = SPI4_CGFR_I2SMOD_Values<SPI4::CGFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CGFRPack  = Register<0x40013450, 32, ReadWriteMode, SPI4CGFRBase, T...> ;

} ;

#endif //#if !defined(SPI4REGISTERS_HPP)
