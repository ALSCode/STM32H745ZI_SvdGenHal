/*******************************************************************************
* Filename      : spdifrxregisters.hpp
*
* Details       : Receiver Interface. This header file is auto-generated for
*                 STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SPDIFRXREGISTERS_HPP)
#define SPDIFRXREGISTERS_HPP

#include "spdifrxfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPDIFRX
{
  struct SPDIFRXCRBase {} ;

  struct CR : public RegisterBase<0x40004000, 32, ReadWriteMode>
  {
    using SPDIFRXEN = SPDIFRX_CR_SPDIFRXEN_Values<SPDIFRX::CR, 0, 2, ReadWriteMode, SPDIFRXCRBase> ;
    using RXDMAEN = SPDIFRX_CR_RXDMAEN_Values<SPDIFRX::CR, 2, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using RXSTEO = SPDIFRX_CR_RXSTEO_Values<SPDIFRX::CR, 3, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using DRFMT = SPDIFRX_CR_DRFMT_Values<SPDIFRX::CR, 4, 2, ReadWriteMode, SPDIFRXCRBase> ;
    using PMSK = SPDIFRX_CR_PMSK_Values<SPDIFRX::CR, 6, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using VMSK = SPDIFRX_CR_VMSK_Values<SPDIFRX::CR, 7, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using CUMSK = SPDIFRX_CR_CUMSK_Values<SPDIFRX::CR, 8, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using PTMSK = SPDIFRX_CR_PTMSK_Values<SPDIFRX::CR, 9, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using CBDMAEN = SPDIFRX_CR_CBDMAEN_Values<SPDIFRX::CR, 10, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using CHSEL = SPDIFRX_CR_CHSEL_Values<SPDIFRX::CR, 11, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using NBTR = SPDIFRX_CR_NBTR_Values<SPDIFRX::CR, 12, 2, ReadWriteMode, SPDIFRXCRBase> ;
    using WFA = SPDIFRX_CR_WFA_Values<SPDIFRX::CR, 14, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using INSEL = SPDIFRX_CR_INSEL_Values<SPDIFRX::CR, 16, 3, ReadWriteMode, SPDIFRXCRBase> ;
    using CKSEN = SPDIFRX_CR_CKSEN_Values<SPDIFRX::CR, 20, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using CKSBKPEN = SPDIFRX_CR_CKSBKPEN_Values<SPDIFRX::CR, 21, 1, ReadWriteMode, SPDIFRXCRBase> ;
    using FieldValues = SPDIFRX_CR_CKSBKPEN_Values<SPDIFRX::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40004000, 32, ReadWriteMode, SPDIFRXCRBase, T...> ;

  struct SPDIFRXIMRBase {} ;

  struct IMR : public RegisterBase<0x40004004, 32, ReadWriteMode>
  {
    using RXNEIE = SPDIFRX_IMR_RXNEIE_Values<SPDIFRX::IMR, 0, 1, ReadWriteMode, SPDIFRXIMRBase> ;
    using CSRNEIE = SPDIFRX_IMR_CSRNEIE_Values<SPDIFRX::IMR, 1, 1, ReadWriteMode, SPDIFRXIMRBase> ;
    using PERRIE = SPDIFRX_IMR_PERRIE_Values<SPDIFRX::IMR, 2, 1, ReadWriteMode, SPDIFRXIMRBase> ;
    using OVRIE = SPDIFRX_IMR_OVRIE_Values<SPDIFRX::IMR, 3, 1, ReadWriteMode, SPDIFRXIMRBase> ;
    using SBLKIE = SPDIFRX_IMR_SBLKIE_Values<SPDIFRX::IMR, 4, 1, ReadWriteMode, SPDIFRXIMRBase> ;
    using SYNCDIE = SPDIFRX_IMR_SYNCDIE_Values<SPDIFRX::IMR, 5, 1, ReadWriteMode, SPDIFRXIMRBase> ;
    using IFEIE = SPDIFRX_IMR_IFEIE_Values<SPDIFRX::IMR, 6, 1, ReadWriteMode, SPDIFRXIMRBase> ;
    using FieldValues = SPDIFRX_IMR_IFEIE_Values<SPDIFRX::IMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMRPack  = Register<0x40004004, 32, ReadWriteMode, SPDIFRXIMRBase, T...> ;

  struct SPDIFRXSRBase {} ;

  struct SR : public RegisterBase<0x40004008, 32, ReadMode>
  {
    using RXNE = SPDIFRX_SR_RXNE_Values<SPDIFRX::SR, 0, 1, ReadMode, SPDIFRXSRBase> ;
    using CSRNE = SPDIFRX_SR_CSRNE_Values<SPDIFRX::SR, 1, 1, ReadMode, SPDIFRXSRBase> ;
    using PERR = SPDIFRX_SR_PERR_Values<SPDIFRX::SR, 2, 1, ReadMode, SPDIFRXSRBase> ;
    using OVR = SPDIFRX_SR_OVR_Values<SPDIFRX::SR, 3, 1, ReadMode, SPDIFRXSRBase> ;
    using SBD = SPDIFRX_SR_SBD_Values<SPDIFRX::SR, 4, 1, ReadMode, SPDIFRXSRBase> ;
    using SYNCD = SPDIFRX_SR_SYNCD_Values<SPDIFRX::SR, 5, 1, ReadMode, SPDIFRXSRBase> ;
    using FERR = SPDIFRX_SR_FERR_Values<SPDIFRX::SR, 6, 1, ReadMode, SPDIFRXSRBase> ;
    using SERR = SPDIFRX_SR_SERR_Values<SPDIFRX::SR, 7, 1, ReadMode, SPDIFRXSRBase> ;
    using TERR = SPDIFRX_SR_TERR_Values<SPDIFRX::SR, 8, 1, ReadMode, SPDIFRXSRBase> ;
    using WIDTH5 = SPDIFRX_SR_WIDTH5_Values<SPDIFRX::SR, 16, 15, ReadMode, SPDIFRXSRBase> ;
    using FieldValues = SPDIFRX_SR_WIDTH5_Values<SPDIFRX::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40004008, 32, ReadMode, SPDIFRXSRBase, T...> ;

  struct SPDIFRXIFCRBase {} ;

  struct IFCR : public RegisterBase<0x4000400C, 32, WriteMode>
  {
    using PERRCF = SPDIFRX_IFCR_PERRCF_Values<SPDIFRX::IFCR, 2, 1, WriteMode, SPDIFRXIFCRBase> ;
    using OVRCF = SPDIFRX_IFCR_OVRCF_Values<SPDIFRX::IFCR, 3, 1, WriteMode, SPDIFRXIFCRBase> ;
    using SBDCF = SPDIFRX_IFCR_SBDCF_Values<SPDIFRX::IFCR, 4, 1, WriteMode, SPDIFRXIFCRBase> ;
    using SYNCDCF = SPDIFRX_IFCR_SYNCDCF_Values<SPDIFRX::IFCR, 5, 1, WriteMode, SPDIFRXIFCRBase> ;
    using FieldValues = SPDIFRX_IFCR_SYNCDCF_Values<SPDIFRX::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x4000400C, 32, WriteMode, SPDIFRXIFCRBase, T...> ;

  struct SPDIFRXDR_00Base {} ;

  struct DR_00 : public RegisterBase<0x40004010, 32, ReadMode>
  {
    using DR = SPDIFRX_DR_00_DR_Values<SPDIFRX::DR_00, 0, 24, ReadMode, SPDIFRXDR_00Base> ;
    using PE = SPDIFRX_DR_00_PE_Values<SPDIFRX::DR_00, 24, 1, ReadMode, SPDIFRXDR_00Base> ;
    using V = SPDIFRX_DR_00_V_Values<SPDIFRX::DR_00, 25, 1, ReadMode, SPDIFRXDR_00Base> ;
    using U = SPDIFRX_DR_00_U_Values<SPDIFRX::DR_00, 26, 1, ReadMode, SPDIFRXDR_00Base> ;
    using C = SPDIFRX_DR_00_C_Values<SPDIFRX::DR_00, 27, 1, ReadMode, SPDIFRXDR_00Base> ;
    using PT = SPDIFRX_DR_00_PT_Values<SPDIFRX::DR_00, 28, 2, ReadMode, SPDIFRXDR_00Base> ;
    using FieldValues = SPDIFRX_DR_00_PT_Values<SPDIFRX::DR_00, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR_00Pack  = Register<0x40004010, 32, ReadMode, SPDIFRXDR_00Base, T...> ;

  struct SPDIFRXCSRBase {} ;

  struct CSR : public RegisterBase<0x40004014, 32, ReadMode>
  {
    using USR = SPDIFRX_CSR_USR_Values<SPDIFRX::CSR, 0, 16, ReadMode, SPDIFRXCSRBase> ;
    using CS = SPDIFRX_CSR_CS_Values<SPDIFRX::CSR, 16, 8, ReadMode, SPDIFRXCSRBase> ;
    using SOB = SPDIFRX_CSR_SOB_Values<SPDIFRX::CSR, 24, 1, ReadMode, SPDIFRXCSRBase> ;
    using FieldValues = SPDIFRX_CSR_SOB_Values<SPDIFRX::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40004014, 32, ReadMode, SPDIFRXCSRBase, T...> ;

  struct SPDIFRXDIRBase {} ;

  struct DIR : public RegisterBase<0x40004018, 32, ReadMode>
  {
    using THI = SPDIFRX_DIR_THI_Values<SPDIFRX::DIR, 0, 13, ReadMode, SPDIFRXDIRBase> ;
    using TLO = SPDIFRX_DIR_TLO_Values<SPDIFRX::DIR, 16, 13, ReadMode, SPDIFRXDIRBase> ;
    using FieldValues = SPDIFRX_DIR_TLO_Values<SPDIFRX::DIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIRPack  = Register<0x40004018, 32, ReadMode, SPDIFRXDIRBase, T...> ;

  struct SPDIFRXVERRBase {} ;

  struct VERR : public RegisterBase<0x400043F4, 32, ReadMode>
  {
    using MINREV = SPDIFRX_VERR_MINREV_Values<SPDIFRX::VERR, 0, 4, ReadMode, SPDIFRXVERRBase> ;
    using MAJREV = SPDIFRX_VERR_MAJREV_Values<SPDIFRX::VERR, 4, 4, ReadMode, SPDIFRXVERRBase> ;
    using FieldValues = SPDIFRX_VERR_MAJREV_Values<SPDIFRX::VERR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VERRPack  = Register<0x400043F4, 32, ReadMode, SPDIFRXVERRBase, T...> ;

  struct SPDIFRXIDRBase {} ;

  struct IDR : public RegisterBase<0x400043F8, 32, ReadMode>
  {
    using ID = SPDIFRX_IDR_ID_Values<SPDIFRX::IDR, 0, 32, ReadMode, SPDIFRXIDRBase> ;
    using FieldValues = SPDIFRX_IDR_ID_Values<SPDIFRX::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x400043F8, 32, ReadMode, SPDIFRXIDRBase, T...> ;

  struct SPDIFRXSIDRBase {} ;

  struct SIDR : public RegisterBase<0x400043FC, 32, ReadMode>
  {
    using SID = SPDIFRX_SIDR_SID_Values<SPDIFRX::SIDR, 0, 32, ReadMode, SPDIFRXSIDRBase> ;
    using FieldValues = SPDIFRX_SIDR_SID_Values<SPDIFRX::SIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SIDRPack  = Register<0x400043FC, 32, ReadMode, SPDIFRXSIDRBase, T...> ;

  struct SPDIFRXDR_01Base {} ;

  struct DR_01 : public RegisterBase<0x40004010, 32, ReadMode>
  {
    using PE = SPDIFRX_DR_01_PE_Values<SPDIFRX::DR_01, 0, 1, ReadMode, SPDIFRXDR_01Base> ;
    using V = SPDIFRX_DR_01_V_Values<SPDIFRX::DR_01, 1, 1, ReadMode, SPDIFRXDR_01Base> ;
    using U = SPDIFRX_DR_01_U_Values<SPDIFRX::DR_01, 2, 1, ReadMode, SPDIFRXDR_01Base> ;
    using C = SPDIFRX_DR_01_C_Values<SPDIFRX::DR_01, 3, 1, ReadMode, SPDIFRXDR_01Base> ;
    using PT = SPDIFRX_DR_01_PT_Values<SPDIFRX::DR_01, 4, 2, ReadMode, SPDIFRXDR_01Base> ;
    using DR = SPDIFRX_DR_01_DR_Values<SPDIFRX::DR_01, 8, 24, ReadMode, SPDIFRXDR_01Base> ;
    using FieldValues = SPDIFRX_DR_01_DR_Values<SPDIFRX::DR_01, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR_01Pack  = Register<0x40004010, 32, ReadMode, SPDIFRXDR_01Base, T...> ;

  struct SPDIFRXDR_10Base {} ;

  struct DR_10 : public RegisterBase<0x40004010, 32, ReadMode>
  {
    using DRNL1 = SPDIFRX_DR_10_DRNL1_Values<SPDIFRX::DR_10, 0, 16, ReadMode, SPDIFRXDR_10Base> ;
    using DRNL2 = SPDIFRX_DR_10_DRNL2_Values<SPDIFRX::DR_10, 16, 16, ReadMode, SPDIFRXDR_10Base> ;
    using FieldValues = SPDIFRX_DR_10_DRNL2_Values<SPDIFRX::DR_10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DR_10Pack  = Register<0x40004010, 32, ReadMode, SPDIFRXDR_10Base, T...> ;

} ;

#endif //#if !defined(SPDIFRXREGISTERS_HPP)
