/*******************************************************************************
* Filename      : swpmiregisters.hpp
*
* Details       : Single Wire Protocol Master Interface. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SWPMIREGISTERS_HPP)
#define SWPMIREGISTERS_HPP

#include "swpmifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SWPMI
{
  struct SWPMICRBase {} ;

  struct CR : public RegisterBase<0x40008800, 32, ReadWriteMode>
  {
    using RXDMA = SWPMI_CR_RXDMA_Values<SWPMI::CR, 0, 1, ReadWriteMode, SWPMICRBase> ;
    using TXDMA = SWPMI_CR_TXDMA_Values<SWPMI::CR, 1, 1, ReadWriteMode, SWPMICRBase> ;
    using RXMODE = SWPMI_CR_RXMODE_Values<SWPMI::CR, 2, 1, ReadWriteMode, SWPMICRBase> ;
    using TXMODE = SWPMI_CR_TXMODE_Values<SWPMI::CR, 3, 1, ReadWriteMode, SWPMICRBase> ;
    using LPBK = SWPMI_CR_LPBK_Values<SWPMI::CR, 4, 1, ReadWriteMode, SWPMICRBase> ;
    using SWPACT = SWPMI_CR_SWPACT_Values<SWPMI::CR, 5, 1, ReadWriteMode, SWPMICRBase> ;
    using DEACT = SWPMI_CR_DEACT_Values<SWPMI::CR, 10, 1, ReadWriteMode, SWPMICRBase> ;
    using SWPTEN = SWPMI_CR_SWPTEN_Values<SWPMI::CR, 11, 1, ReadWriteMode, SWPMICRBase> ;
    using FieldValues = SWPMI_CR_SWPTEN_Values<SWPMI::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40008800, 32, ReadWriteMode, SWPMICRBase, T...> ;

  struct SWPMIBRRBase {} ;

  struct BRR : public RegisterBase<0x40008804, 32, ReadWriteMode>
  {
    using BR = SWPMI_BRR_BR_Values<SWPMI::BRR, 0, 8, ReadWriteMode, SWPMIBRRBase> ;
    using FieldValues = SWPMI_BRR_BR_Values<SWPMI::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40008804, 32, ReadWriteMode, SWPMIBRRBase, T...> ;

  struct SWPMIISRBase {} ;

  struct ISR : public RegisterBase<0x4000880C, 32, ReadMode>
  {
    using RXBFF = SWPMI_ISR_RXBFF_Values<SWPMI::ISR, 0, 1, ReadMode, SWPMIISRBase> ;
    using TXBEF = SWPMI_ISR_TXBEF_Values<SWPMI::ISR, 1, 1, ReadMode, SWPMIISRBase> ;
    using RXBERF = SWPMI_ISR_RXBERF_Values<SWPMI::ISR, 2, 1, ReadMode, SWPMIISRBase> ;
    using RXOVRF = SWPMI_ISR_RXOVRF_Values<SWPMI::ISR, 3, 1, ReadMode, SWPMIISRBase> ;
    using TXUNRF = SWPMI_ISR_TXUNRF_Values<SWPMI::ISR, 4, 1, ReadMode, SWPMIISRBase> ;
    using RXNE = SWPMI_ISR_RXNE_Values<SWPMI::ISR, 5, 1, ReadMode, SWPMIISRBase> ;
    using TXE = SWPMI_ISR_TXE_Values<SWPMI::ISR, 6, 1, ReadMode, SWPMIISRBase> ;
    using TCF = SWPMI_ISR_TCF_Values<SWPMI::ISR, 7, 1, ReadMode, SWPMIISRBase> ;
    using SRF = SWPMI_ISR_SRF_Values<SWPMI::ISR, 8, 1, ReadMode, SWPMIISRBase> ;
    using SUSP = SWPMI_ISR_SUSP_Values<SWPMI::ISR, 9, 1, ReadMode, SWPMIISRBase> ;
    using DEACTF = SWPMI_ISR_DEACTF_Values<SWPMI::ISR, 10, 1, ReadMode, SWPMIISRBase> ;
    using RDYF = SWPMI_ISR_RDYF_Values<SWPMI::ISR, 11, 1, ReadMode, SWPMIISRBase> ;
    using FieldValues = SWPMI_ISR_RDYF_Values<SWPMI::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000880C, 32, ReadMode, SWPMIISRBase, T...> ;

  struct SWPMIICRBase {} ;

  struct ICR : public RegisterBase<0x40008810, 32, WriteMode>
  {
    using CRXBFF = SWPMI_ICR_CRXBFF_Values<SWPMI::ICR, 0, 1, WriteMode, SWPMIICRBase> ;
    using CTXBEF = SWPMI_ICR_CTXBEF_Values<SWPMI::ICR, 1, 1, WriteMode, SWPMIICRBase> ;
    using CRXBERF = SWPMI_ICR_CRXBERF_Values<SWPMI::ICR, 2, 1, WriteMode, SWPMIICRBase> ;
    using CRXOVRF = SWPMI_ICR_CRXOVRF_Values<SWPMI::ICR, 3, 1, WriteMode, SWPMIICRBase> ;
    using CTXUNRF = SWPMI_ICR_CTXUNRF_Values<SWPMI::ICR, 4, 1, WriteMode, SWPMIICRBase> ;
    using CTCF = SWPMI_ICR_CTCF_Values<SWPMI::ICR, 7, 1, WriteMode, SWPMIICRBase> ;
    using CSRF = SWPMI_ICR_CSRF_Values<SWPMI::ICR, 8, 1, WriteMode, SWPMIICRBase> ;
    using CRDYF = SWPMI_ICR_CRDYF_Values<SWPMI::ICR, 11, 1, WriteMode, SWPMIICRBase> ;
    using FieldValues = SWPMI_ICR_CRDYF_Values<SWPMI::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40008810, 32, WriteMode, SWPMIICRBase, T...> ;

  struct SWPMIIERBase {} ;

  struct IER : public RegisterBase<0x40008814, 32, ReadWriteMode>
  {
    using RXBFIE = SWPMI_IER_RXBFIE_Values<SWPMI::IER, 0, 1, ReadWriteMode, SWPMIIERBase> ;
    using TXBEIE = SWPMI_IER_TXBEIE_Values<SWPMI::IER, 1, 1, ReadWriteMode, SWPMIIERBase> ;
    using RXBERIE = SWPMI_IER_RXBERIE_Values<SWPMI::IER, 2, 1, ReadWriteMode, SWPMIIERBase> ;
    using RXOVRIE = SWPMI_IER_RXOVRIE_Values<SWPMI::IER, 3, 1, ReadWriteMode, SWPMIIERBase> ;
    using TXUNRIE = SWPMI_IER_TXUNRIE_Values<SWPMI::IER, 4, 1, ReadWriteMode, SWPMIIERBase> ;
    using RIE = SWPMI_IER_RIE_Values<SWPMI::IER, 5, 1, ReadWriteMode, SWPMIIERBase> ;
    using TIE = SWPMI_IER_TIE_Values<SWPMI::IER, 6, 1, ReadWriteMode, SWPMIIERBase> ;
    using TCIE = SWPMI_IER_TCIE_Values<SWPMI::IER, 7, 1, ReadWriteMode, SWPMIIERBase> ;
    using SRIE = SWPMI_IER_SRIE_Values<SWPMI::IER, 8, 1, ReadWriteMode, SWPMIIERBase> ;
    using RDYIE = SWPMI_IER_RDYIE_Values<SWPMI::IER, 11, 1, ReadWriteMode, SWPMIIERBase> ;
    using FieldValues = SWPMI_IER_RDYIE_Values<SWPMI::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40008814, 32, ReadWriteMode, SWPMIIERBase, T...> ;

  struct SWPMIRFLBase {} ;

  struct RFL : public RegisterBase<0x40008818, 32, ReadMode>
  {
    using RFLField = SWPMI_RFL_RFL_Values<SWPMI::RFL, 0, 5, ReadMode, SWPMIRFLBase> ;
    using FieldValues = SWPMI_RFL_RFL_Values<SWPMI::RFL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RFLPack  = Register<0x40008818, 32, ReadMode, SWPMIRFLBase, T...> ;

  struct SWPMITDRBase {} ;

  struct TDR : public RegisterBase<0x4000881C, 32, WriteMode>
  {
    using TD = SWPMI_TDR_TD_Values<SWPMI::TDR, 0, 32, WriteMode, SWPMITDRBase> ;
    using FieldValues = SWPMI_TDR_TD_Values<SWPMI::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x4000881C, 32, WriteMode, SWPMITDRBase, T...> ;

  struct SWPMIRDRBase {} ;

  struct RDR : public RegisterBase<0x40008820, 32, ReadMode>
  {
    using RD = SWPMI_RDR_RD_Values<SWPMI::RDR, 0, 32, ReadMode, SWPMIRDRBase> ;
    using FieldValues = SWPMI_RDR_RD_Values<SWPMI::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40008820, 32, ReadMode, SWPMIRDRBase, T...> ;

  struct SWPMIORBase {} ;

  struct OR : public RegisterBase<0x40008824, 32, ReadWriteMode>
  {
    using SWP_TBYP = SWPMI_OR_SWP_TBYP_Values<SWPMI::OR, 0, 1, ReadWriteMode, SWPMIORBase> ;
    using SWP_CLASS = SWPMI_OR_SWP_CLASS_Values<SWPMI::OR, 1, 1, ReadWriteMode, SWPMIORBase> ;
    using FieldValues = SWPMI_OR_SWP_CLASS_Values<SWPMI::OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x40008824, 32, ReadWriteMode, SWPMIORBase, T...> ;

} ;

#endif //#if !defined(SWPMIREGISTERS_HPP)
