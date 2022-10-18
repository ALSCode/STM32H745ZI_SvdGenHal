/*******************************************************************************
* Filename      : mdiosregisters.hpp
*
* Details       : Management data input/output slave. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(MDIOSREGISTERS_HPP)
#define MDIOSREGISTERS_HPP

#include "mdiosfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct MDIOS
{
  struct MDIOSMDIOS_CRBase {} ;

  struct MDIOS_CR : public RegisterBase<0x40009400, 32, ReadWriteMode>
  {
    using EN = MDIOS_MDIOS_CR_EN_Values<MDIOS::MDIOS_CR, 0, 1, ReadWriteMode, MDIOSMDIOS_CRBase> ;
    using WRIE = MDIOS_MDIOS_CR_WRIE_Values<MDIOS::MDIOS_CR, 1, 1, ReadWriteMode, MDIOSMDIOS_CRBase> ;
    using RDIE = MDIOS_MDIOS_CR_RDIE_Values<MDIOS::MDIOS_CR, 2, 1, ReadWriteMode, MDIOSMDIOS_CRBase> ;
    using EIE = MDIOS_MDIOS_CR_EIE_Values<MDIOS::MDIOS_CR, 3, 1, ReadWriteMode, MDIOSMDIOS_CRBase> ;
    using DPC = MDIOS_MDIOS_CR_DPC_Values<MDIOS::MDIOS_CR, 7, 1, ReadWriteMode, MDIOSMDIOS_CRBase> ;
    using PORT_ADDRESS = MDIOS_MDIOS_CR_PORT_ADDRESS_Values<MDIOS::MDIOS_CR, 8, 5, ReadWriteMode, MDIOSMDIOS_CRBase> ;
    using FieldValues = MDIOS_MDIOS_CR_PORT_ADDRESS_Values<MDIOS::MDIOS_CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_CRPack  = Register<0x40009400, 32, ReadWriteMode, MDIOSMDIOS_CRBase, T...> ;

  struct MDIOSMDIOS_WRFRBase {} ;

  struct MDIOS_WRFR : public RegisterBase<0x40009404, 32, ReadMode>
  {
    using WRF = MDIOS_MDIOS_WRFR_WRF_Values<MDIOS::MDIOS_WRFR, 0, 32, ReadMode, MDIOSMDIOS_WRFRBase> ;
    using FieldValues = MDIOS_MDIOS_WRFR_WRF_Values<MDIOS::MDIOS_WRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_WRFRPack  = Register<0x40009404, 32, ReadMode, MDIOSMDIOS_WRFRBase, T...> ;

  struct MDIOSMDIOS_CWRFRBase {} ;

  struct MDIOS_CWRFR : public RegisterBase<0x40009408, 32, ReadWriteMode>
  {
    using CWRF = MDIOS_MDIOS_CWRFR_CWRF_Values<MDIOS::MDIOS_CWRFR, 0, 32, ReadWriteMode, MDIOSMDIOS_CWRFRBase> ;
    using FieldValues = MDIOS_MDIOS_CWRFR_CWRF_Values<MDIOS::MDIOS_CWRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_CWRFRPack  = Register<0x40009408, 32, ReadWriteMode, MDIOSMDIOS_CWRFRBase, T...> ;

  struct MDIOSMDIOS_RDFRBase {} ;

  struct MDIOS_RDFR : public RegisterBase<0x4000940C, 32, ReadMode>
  {
    using RDF = MDIOS_MDIOS_RDFR_RDF_Values<MDIOS::MDIOS_RDFR, 0, 32, ReadMode, MDIOSMDIOS_RDFRBase> ;
    using FieldValues = MDIOS_MDIOS_RDFR_RDF_Values<MDIOS::MDIOS_RDFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_RDFRPack  = Register<0x4000940C, 32, ReadMode, MDIOSMDIOS_RDFRBase, T...> ;

  struct MDIOSMDIOS_CRDFRBase {} ;

  struct MDIOS_CRDFR : public RegisterBase<0x40009410, 32, ReadWriteMode>
  {
    using CRDF = MDIOS_MDIOS_CRDFR_CRDF_Values<MDIOS::MDIOS_CRDFR, 0, 32, ReadWriteMode, MDIOSMDIOS_CRDFRBase> ;
    using FieldValues = MDIOS_MDIOS_CRDFR_CRDF_Values<MDIOS::MDIOS_CRDFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_CRDFRPack  = Register<0x40009410, 32, ReadWriteMode, MDIOSMDIOS_CRDFRBase, T...> ;

  struct MDIOSMDIOS_SRBase {} ;

  struct MDIOS_SR : public RegisterBase<0x40009414, 32, ReadMode>
  {
    using PERF = MDIOS_MDIOS_SR_PERF_Values<MDIOS::MDIOS_SR, 0, 1, ReadMode, MDIOSMDIOS_SRBase> ;
    using SERF = MDIOS_MDIOS_SR_SERF_Values<MDIOS::MDIOS_SR, 1, 1, ReadMode, MDIOSMDIOS_SRBase> ;
    using TERF = MDIOS_MDIOS_SR_TERF_Values<MDIOS::MDIOS_SR, 2, 1, ReadMode, MDIOSMDIOS_SRBase> ;
    using FieldValues = MDIOS_MDIOS_SR_TERF_Values<MDIOS::MDIOS_SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_SRPack  = Register<0x40009414, 32, ReadMode, MDIOSMDIOS_SRBase, T...> ;

  struct MDIOSMDIOS_CLRFRBase {} ;

  struct MDIOS_CLRFR : public RegisterBase<0x40009418, 32, ReadWriteMode>
  {
    using CPERF = MDIOS_MDIOS_CLRFR_CPERF_Values<MDIOS::MDIOS_CLRFR, 0, 1, ReadWriteMode, MDIOSMDIOS_CLRFRBase> ;
    using CSERF = MDIOS_MDIOS_CLRFR_CSERF_Values<MDIOS::MDIOS_CLRFR, 1, 1, ReadWriteMode, MDIOSMDIOS_CLRFRBase> ;
    using CTERF = MDIOS_MDIOS_CLRFR_CTERF_Values<MDIOS::MDIOS_CLRFR, 2, 1, ReadWriteMode, MDIOSMDIOS_CLRFRBase> ;
    using FieldValues = MDIOS_MDIOS_CLRFR_CTERF_Values<MDIOS::MDIOS_CLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_CLRFRPack  = Register<0x40009418, 32, ReadWriteMode, MDIOSMDIOS_CLRFRBase, T...> ;

  struct MDIOSMDIOS_DINR0Base {} ;

  struct MDIOS_DINR0 : public RegisterBase<0x4000941C, 32, ReadMode>
  {
    using DIN0 = MDIOS_MDIOS_DINR0_DIN0_Values<MDIOS::MDIOS_DINR0, 0, 16, ReadMode, MDIOSMDIOS_DINR0Base> ;
    using FieldValues = MDIOS_MDIOS_DINR0_DIN0_Values<MDIOS::MDIOS_DINR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR0Pack  = Register<0x4000941C, 32, ReadMode, MDIOSMDIOS_DINR0Base, T...> ;

  struct MDIOSMDIOS_DINR1Base {} ;

  struct MDIOS_DINR1 : public RegisterBase<0x40009420, 32, ReadMode>
  {
    using DIN1 = MDIOS_MDIOS_DINR1_DIN1_Values<MDIOS::MDIOS_DINR1, 0, 16, ReadMode, MDIOSMDIOS_DINR1Base> ;
    using FieldValues = MDIOS_MDIOS_DINR1_DIN1_Values<MDIOS::MDIOS_DINR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR1Pack  = Register<0x40009420, 32, ReadMode, MDIOSMDIOS_DINR1Base, T...> ;

  struct MDIOSMDIOS_DINR2Base {} ;

  struct MDIOS_DINR2 : public RegisterBase<0x40009424, 32, ReadMode>
  {
    using DIN2 = MDIOS_MDIOS_DINR2_DIN2_Values<MDIOS::MDIOS_DINR2, 0, 16, ReadMode, MDIOSMDIOS_DINR2Base> ;
    using FieldValues = MDIOS_MDIOS_DINR2_DIN2_Values<MDIOS::MDIOS_DINR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR2Pack  = Register<0x40009424, 32, ReadMode, MDIOSMDIOS_DINR2Base, T...> ;

  struct MDIOSMDIOS_DINR3Base {} ;

  struct MDIOS_DINR3 : public RegisterBase<0x40009428, 32, ReadMode>
  {
    using DIN3 = MDIOS_MDIOS_DINR3_DIN3_Values<MDIOS::MDIOS_DINR3, 0, 16, ReadMode, MDIOSMDIOS_DINR3Base> ;
    using FieldValues = MDIOS_MDIOS_DINR3_DIN3_Values<MDIOS::MDIOS_DINR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR3Pack  = Register<0x40009428, 32, ReadMode, MDIOSMDIOS_DINR3Base, T...> ;

  struct MDIOSMDIOS_DINR4Base {} ;

  struct MDIOS_DINR4 : public RegisterBase<0x4000942C, 32, ReadMode>
  {
    using DIN4 = MDIOS_MDIOS_DINR4_DIN4_Values<MDIOS::MDIOS_DINR4, 0, 16, ReadMode, MDIOSMDIOS_DINR4Base> ;
    using FieldValues = MDIOS_MDIOS_DINR4_DIN4_Values<MDIOS::MDIOS_DINR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR4Pack  = Register<0x4000942C, 32, ReadMode, MDIOSMDIOS_DINR4Base, T...> ;

  struct MDIOSMDIOS_DINR5Base {} ;

  struct MDIOS_DINR5 : public RegisterBase<0x40009430, 32, ReadMode>
  {
    using DIN5 = MDIOS_MDIOS_DINR5_DIN5_Values<MDIOS::MDIOS_DINR5, 0, 16, ReadMode, MDIOSMDIOS_DINR5Base> ;
    using FieldValues = MDIOS_MDIOS_DINR5_DIN5_Values<MDIOS::MDIOS_DINR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR5Pack  = Register<0x40009430, 32, ReadMode, MDIOSMDIOS_DINR5Base, T...> ;

  struct MDIOSMDIOS_DINR6Base {} ;

  struct MDIOS_DINR6 : public RegisterBase<0x40009434, 32, ReadMode>
  {
    using DIN6 = MDIOS_MDIOS_DINR6_DIN6_Values<MDIOS::MDIOS_DINR6, 0, 16, ReadMode, MDIOSMDIOS_DINR6Base> ;
    using FieldValues = MDIOS_MDIOS_DINR6_DIN6_Values<MDIOS::MDIOS_DINR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR6Pack  = Register<0x40009434, 32, ReadMode, MDIOSMDIOS_DINR6Base, T...> ;

  struct MDIOSMDIOS_DINR7Base {} ;

  struct MDIOS_DINR7 : public RegisterBase<0x40009438, 32, ReadMode>
  {
    using DIN7 = MDIOS_MDIOS_DINR7_DIN7_Values<MDIOS::MDIOS_DINR7, 0, 16, ReadMode, MDIOSMDIOS_DINR7Base> ;
    using FieldValues = MDIOS_MDIOS_DINR7_DIN7_Values<MDIOS::MDIOS_DINR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR7Pack  = Register<0x40009438, 32, ReadMode, MDIOSMDIOS_DINR7Base, T...> ;

  struct MDIOSMDIOS_DINR8Base {} ;

  struct MDIOS_DINR8 : public RegisterBase<0x4000943C, 32, ReadMode>
  {
    using DIN8 = MDIOS_MDIOS_DINR8_DIN8_Values<MDIOS::MDIOS_DINR8, 0, 16, ReadMode, MDIOSMDIOS_DINR8Base> ;
    using FieldValues = MDIOS_MDIOS_DINR8_DIN8_Values<MDIOS::MDIOS_DINR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR8Pack  = Register<0x4000943C, 32, ReadMode, MDIOSMDIOS_DINR8Base, T...> ;

  struct MDIOSMDIOS_DINR9Base {} ;

  struct MDIOS_DINR9 : public RegisterBase<0x40009440, 32, ReadMode>
  {
    using DIN9 = MDIOS_MDIOS_DINR9_DIN9_Values<MDIOS::MDIOS_DINR9, 0, 16, ReadMode, MDIOSMDIOS_DINR9Base> ;
    using FieldValues = MDIOS_MDIOS_DINR9_DIN9_Values<MDIOS::MDIOS_DINR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR9Pack  = Register<0x40009440, 32, ReadMode, MDIOSMDIOS_DINR9Base, T...> ;

  struct MDIOSMDIOS_DINR10Base {} ;

  struct MDIOS_DINR10 : public RegisterBase<0x40009444, 32, ReadMode>
  {
    using DIN10 = MDIOS_MDIOS_DINR10_DIN10_Values<MDIOS::MDIOS_DINR10, 0, 16, ReadMode, MDIOSMDIOS_DINR10Base> ;
    using FieldValues = MDIOS_MDIOS_DINR10_DIN10_Values<MDIOS::MDIOS_DINR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR10Pack  = Register<0x40009444, 32, ReadMode, MDIOSMDIOS_DINR10Base, T...> ;

  struct MDIOSMDIOS_DINR11Base {} ;

  struct MDIOS_DINR11 : public RegisterBase<0x40009448, 32, ReadMode>
  {
    using DIN11 = MDIOS_MDIOS_DINR11_DIN11_Values<MDIOS::MDIOS_DINR11, 0, 16, ReadMode, MDIOSMDIOS_DINR11Base> ;
    using FieldValues = MDIOS_MDIOS_DINR11_DIN11_Values<MDIOS::MDIOS_DINR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR11Pack  = Register<0x40009448, 32, ReadMode, MDIOSMDIOS_DINR11Base, T...> ;

  struct MDIOSMDIOS_DINR12Base {} ;

  struct MDIOS_DINR12 : public RegisterBase<0x4000944C, 32, ReadMode>
  {
    using DIN12 = MDIOS_MDIOS_DINR12_DIN12_Values<MDIOS::MDIOS_DINR12, 0, 16, ReadMode, MDIOSMDIOS_DINR12Base> ;
    using FieldValues = MDIOS_MDIOS_DINR12_DIN12_Values<MDIOS::MDIOS_DINR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR12Pack  = Register<0x4000944C, 32, ReadMode, MDIOSMDIOS_DINR12Base, T...> ;

  struct MDIOSMDIOS_DINR13Base {} ;

  struct MDIOS_DINR13 : public RegisterBase<0x40009450, 32, ReadMode>
  {
    using DIN13 = MDIOS_MDIOS_DINR13_DIN13_Values<MDIOS::MDIOS_DINR13, 0, 16, ReadMode, MDIOSMDIOS_DINR13Base> ;
    using FieldValues = MDIOS_MDIOS_DINR13_DIN13_Values<MDIOS::MDIOS_DINR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR13Pack  = Register<0x40009450, 32, ReadMode, MDIOSMDIOS_DINR13Base, T...> ;

  struct MDIOSMDIOS_DINR14Base {} ;

  struct MDIOS_DINR14 : public RegisterBase<0x40009454, 32, ReadMode>
  {
    using DIN14 = MDIOS_MDIOS_DINR14_DIN14_Values<MDIOS::MDIOS_DINR14, 0, 16, ReadMode, MDIOSMDIOS_DINR14Base> ;
    using FieldValues = MDIOS_MDIOS_DINR14_DIN14_Values<MDIOS::MDIOS_DINR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR14Pack  = Register<0x40009454, 32, ReadMode, MDIOSMDIOS_DINR14Base, T...> ;

  struct MDIOSMDIOS_DINR15Base {} ;

  struct MDIOS_DINR15 : public RegisterBase<0x40009458, 32, ReadMode>
  {
    using DIN15 = MDIOS_MDIOS_DINR15_DIN15_Values<MDIOS::MDIOS_DINR15, 0, 16, ReadMode, MDIOSMDIOS_DINR15Base> ;
    using FieldValues = MDIOS_MDIOS_DINR15_DIN15_Values<MDIOS::MDIOS_DINR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR15Pack  = Register<0x40009458, 32, ReadMode, MDIOSMDIOS_DINR15Base, T...> ;

  struct MDIOSMDIOS_DINR16Base {} ;

  struct MDIOS_DINR16 : public RegisterBase<0x4000945C, 32, ReadMode>
  {
    using DIN16 = MDIOS_MDIOS_DINR16_DIN16_Values<MDIOS::MDIOS_DINR16, 0, 16, ReadMode, MDIOSMDIOS_DINR16Base> ;
    using FieldValues = MDIOS_MDIOS_DINR16_DIN16_Values<MDIOS::MDIOS_DINR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR16Pack  = Register<0x4000945C, 32, ReadMode, MDIOSMDIOS_DINR16Base, T...> ;

  struct MDIOSMDIOS_DINR17Base {} ;

  struct MDIOS_DINR17 : public RegisterBase<0x40009460, 32, ReadMode>
  {
    using DIN17 = MDIOS_MDIOS_DINR17_DIN17_Values<MDIOS::MDIOS_DINR17, 0, 16, ReadMode, MDIOSMDIOS_DINR17Base> ;
    using FieldValues = MDIOS_MDIOS_DINR17_DIN17_Values<MDIOS::MDIOS_DINR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR17Pack  = Register<0x40009460, 32, ReadMode, MDIOSMDIOS_DINR17Base, T...> ;

  struct MDIOSMDIOS_DINR18Base {} ;

  struct MDIOS_DINR18 : public RegisterBase<0x40009464, 32, ReadMode>
  {
    using DIN18 = MDIOS_MDIOS_DINR18_DIN18_Values<MDIOS::MDIOS_DINR18, 0, 16, ReadMode, MDIOSMDIOS_DINR18Base> ;
    using FieldValues = MDIOS_MDIOS_DINR18_DIN18_Values<MDIOS::MDIOS_DINR18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR18Pack  = Register<0x40009464, 32, ReadMode, MDIOSMDIOS_DINR18Base, T...> ;

  struct MDIOSMDIOS_DINR19Base {} ;

  struct MDIOS_DINR19 : public RegisterBase<0x40009468, 32, ReadMode>
  {
    using DIN19 = MDIOS_MDIOS_DINR19_DIN19_Values<MDIOS::MDIOS_DINR19, 0, 16, ReadMode, MDIOSMDIOS_DINR19Base> ;
    using FieldValues = MDIOS_MDIOS_DINR19_DIN19_Values<MDIOS::MDIOS_DINR19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR19Pack  = Register<0x40009468, 32, ReadMode, MDIOSMDIOS_DINR19Base, T...> ;

  struct MDIOSMDIOS_DINR20Base {} ;

  struct MDIOS_DINR20 : public RegisterBase<0x4000946C, 32, ReadMode>
  {
    using DIN20 = MDIOS_MDIOS_DINR20_DIN20_Values<MDIOS::MDIOS_DINR20, 0, 16, ReadMode, MDIOSMDIOS_DINR20Base> ;
    using FieldValues = MDIOS_MDIOS_DINR20_DIN20_Values<MDIOS::MDIOS_DINR20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR20Pack  = Register<0x4000946C, 32, ReadMode, MDIOSMDIOS_DINR20Base, T...> ;

  struct MDIOSMDIOS_DINR21Base {} ;

  struct MDIOS_DINR21 : public RegisterBase<0x40009470, 32, ReadMode>
  {
    using DIN21 = MDIOS_MDIOS_DINR21_DIN21_Values<MDIOS::MDIOS_DINR21, 0, 16, ReadMode, MDIOSMDIOS_DINR21Base> ;
    using FieldValues = MDIOS_MDIOS_DINR21_DIN21_Values<MDIOS::MDIOS_DINR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR21Pack  = Register<0x40009470, 32, ReadMode, MDIOSMDIOS_DINR21Base, T...> ;

  struct MDIOSMDIOS_DINR22Base {} ;

  struct MDIOS_DINR22 : public RegisterBase<0x40009474, 32, ReadMode>
  {
    using DIN22 = MDIOS_MDIOS_DINR22_DIN22_Values<MDIOS::MDIOS_DINR22, 0, 16, ReadMode, MDIOSMDIOS_DINR22Base> ;
    using FieldValues = MDIOS_MDIOS_DINR22_DIN22_Values<MDIOS::MDIOS_DINR22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR22Pack  = Register<0x40009474, 32, ReadMode, MDIOSMDIOS_DINR22Base, T...> ;

  struct MDIOSMDIOS_DINR23Base {} ;

  struct MDIOS_DINR23 : public RegisterBase<0x40009478, 32, ReadMode>
  {
    using DIN23 = MDIOS_MDIOS_DINR23_DIN23_Values<MDIOS::MDIOS_DINR23, 0, 16, ReadMode, MDIOSMDIOS_DINR23Base> ;
    using FieldValues = MDIOS_MDIOS_DINR23_DIN23_Values<MDIOS::MDIOS_DINR23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR23Pack  = Register<0x40009478, 32, ReadMode, MDIOSMDIOS_DINR23Base, T...> ;

  struct MDIOSMDIOS_DINR24Base {} ;

  struct MDIOS_DINR24 : public RegisterBase<0x4000947C, 32, ReadMode>
  {
    using DIN24 = MDIOS_MDIOS_DINR24_DIN24_Values<MDIOS::MDIOS_DINR24, 0, 16, ReadMode, MDIOSMDIOS_DINR24Base> ;
    using FieldValues = MDIOS_MDIOS_DINR24_DIN24_Values<MDIOS::MDIOS_DINR24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR24Pack  = Register<0x4000947C, 32, ReadMode, MDIOSMDIOS_DINR24Base, T...> ;

  struct MDIOSMDIOS_DINR25Base {} ;

  struct MDIOS_DINR25 : public RegisterBase<0x40009480, 32, ReadMode>
  {
    using DIN25 = MDIOS_MDIOS_DINR25_DIN25_Values<MDIOS::MDIOS_DINR25, 0, 16, ReadMode, MDIOSMDIOS_DINR25Base> ;
    using FieldValues = MDIOS_MDIOS_DINR25_DIN25_Values<MDIOS::MDIOS_DINR25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR25Pack  = Register<0x40009480, 32, ReadMode, MDIOSMDIOS_DINR25Base, T...> ;

  struct MDIOSMDIOS_DINR26Base {} ;

  struct MDIOS_DINR26 : public RegisterBase<0x40009484, 32, ReadMode>
  {
    using DIN26 = MDIOS_MDIOS_DINR26_DIN26_Values<MDIOS::MDIOS_DINR26, 0, 16, ReadMode, MDIOSMDIOS_DINR26Base> ;
    using FieldValues = MDIOS_MDIOS_DINR26_DIN26_Values<MDIOS::MDIOS_DINR26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR26Pack  = Register<0x40009484, 32, ReadMode, MDIOSMDIOS_DINR26Base, T...> ;

  struct MDIOSMDIOS_DINR27Base {} ;

  struct MDIOS_DINR27 : public RegisterBase<0x40009488, 32, ReadMode>
  {
    using DIN27 = MDIOS_MDIOS_DINR27_DIN27_Values<MDIOS::MDIOS_DINR27, 0, 16, ReadMode, MDIOSMDIOS_DINR27Base> ;
    using FieldValues = MDIOS_MDIOS_DINR27_DIN27_Values<MDIOS::MDIOS_DINR27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR27Pack  = Register<0x40009488, 32, ReadMode, MDIOSMDIOS_DINR27Base, T...> ;

  struct MDIOSMDIOS_DINR28Base {} ;

  struct MDIOS_DINR28 : public RegisterBase<0x4000948C, 32, ReadMode>
  {
    using DIN28 = MDIOS_MDIOS_DINR28_DIN28_Values<MDIOS::MDIOS_DINR28, 0, 16, ReadMode, MDIOSMDIOS_DINR28Base> ;
    using FieldValues = MDIOS_MDIOS_DINR28_DIN28_Values<MDIOS::MDIOS_DINR28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR28Pack  = Register<0x4000948C, 32, ReadMode, MDIOSMDIOS_DINR28Base, T...> ;

  struct MDIOSMDIOS_DINR29Base {} ;

  struct MDIOS_DINR29 : public RegisterBase<0x40009490, 32, ReadMode>
  {
    using DIN29 = MDIOS_MDIOS_DINR29_DIN29_Values<MDIOS::MDIOS_DINR29, 0, 16, ReadMode, MDIOSMDIOS_DINR29Base> ;
    using FieldValues = MDIOS_MDIOS_DINR29_DIN29_Values<MDIOS::MDIOS_DINR29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR29Pack  = Register<0x40009490, 32, ReadMode, MDIOSMDIOS_DINR29Base, T...> ;

  struct MDIOSMDIOS_DINR30Base {} ;

  struct MDIOS_DINR30 : public RegisterBase<0x40009494, 32, ReadMode>
  {
    using DIN30 = MDIOS_MDIOS_DINR30_DIN30_Values<MDIOS::MDIOS_DINR30, 0, 16, ReadMode, MDIOSMDIOS_DINR30Base> ;
    using FieldValues = MDIOS_MDIOS_DINR30_DIN30_Values<MDIOS::MDIOS_DINR30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR30Pack  = Register<0x40009494, 32, ReadMode, MDIOSMDIOS_DINR30Base, T...> ;

  struct MDIOSMDIOS_DINR31Base {} ;

  struct MDIOS_DINR31 : public RegisterBase<0x40009498, 32, ReadMode>
  {
    using DIN31 = MDIOS_MDIOS_DINR31_DIN31_Values<MDIOS::MDIOS_DINR31, 0, 16, ReadMode, MDIOSMDIOS_DINR31Base> ;
    using FieldValues = MDIOS_MDIOS_DINR31_DIN31_Values<MDIOS::MDIOS_DINR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DINR31Pack  = Register<0x40009498, 32, ReadMode, MDIOSMDIOS_DINR31Base, T...> ;

  struct MDIOSMDIOS_DOUTR0Base {} ;

  struct MDIOS_DOUTR0 : public RegisterBase<0x4000949C, 32, ReadWriteMode>
  {
    using DOUT0 = MDIOS_MDIOS_DOUTR0_DOUT0_Values<MDIOS::MDIOS_DOUTR0, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR0Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR0_DOUT0_Values<MDIOS::MDIOS_DOUTR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR0Pack  = Register<0x4000949C, 32, ReadWriteMode, MDIOSMDIOS_DOUTR0Base, T...> ;

  struct MDIOSMDIOS_DOUTR1Base {} ;

  struct MDIOS_DOUTR1 : public RegisterBase<0x400094A0, 32, ReadWriteMode>
  {
    using DOUT1 = MDIOS_MDIOS_DOUTR1_DOUT1_Values<MDIOS::MDIOS_DOUTR1, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR1Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR1_DOUT1_Values<MDIOS::MDIOS_DOUTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR1Pack  = Register<0x400094A0, 32, ReadWriteMode, MDIOSMDIOS_DOUTR1Base, T...> ;

  struct MDIOSMDIOS_DOUTR2Base {} ;

  struct MDIOS_DOUTR2 : public RegisterBase<0x400094A4, 32, ReadWriteMode>
  {
    using DOUT2 = MDIOS_MDIOS_DOUTR2_DOUT2_Values<MDIOS::MDIOS_DOUTR2, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR2Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR2_DOUT2_Values<MDIOS::MDIOS_DOUTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR2Pack  = Register<0x400094A4, 32, ReadWriteMode, MDIOSMDIOS_DOUTR2Base, T...> ;

  struct MDIOSMDIOS_DOUTR3Base {} ;

  struct MDIOS_DOUTR3 : public RegisterBase<0x400094A8, 32, ReadWriteMode>
  {
    using DOUT3 = MDIOS_MDIOS_DOUTR3_DOUT3_Values<MDIOS::MDIOS_DOUTR3, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR3Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR3_DOUT3_Values<MDIOS::MDIOS_DOUTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR3Pack  = Register<0x400094A8, 32, ReadWriteMode, MDIOSMDIOS_DOUTR3Base, T...> ;

  struct MDIOSMDIOS_DOUTR4Base {} ;

  struct MDIOS_DOUTR4 : public RegisterBase<0x400094AC, 32, ReadWriteMode>
  {
    using DOUT4 = MDIOS_MDIOS_DOUTR4_DOUT4_Values<MDIOS::MDIOS_DOUTR4, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR4Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR4_DOUT4_Values<MDIOS::MDIOS_DOUTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR4Pack  = Register<0x400094AC, 32, ReadWriteMode, MDIOSMDIOS_DOUTR4Base, T...> ;

  struct MDIOSMDIOS_DOUTR5Base {} ;

  struct MDIOS_DOUTR5 : public RegisterBase<0x400094B0, 32, ReadWriteMode>
  {
    using DOUT5 = MDIOS_MDIOS_DOUTR5_DOUT5_Values<MDIOS::MDIOS_DOUTR5, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR5Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR5_DOUT5_Values<MDIOS::MDIOS_DOUTR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR5Pack  = Register<0x400094B0, 32, ReadWriteMode, MDIOSMDIOS_DOUTR5Base, T...> ;

  struct MDIOSMDIOS_DOUTR6Base {} ;

  struct MDIOS_DOUTR6 : public RegisterBase<0x400094B4, 32, ReadWriteMode>
  {
    using DOUT6 = MDIOS_MDIOS_DOUTR6_DOUT6_Values<MDIOS::MDIOS_DOUTR6, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR6Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR6_DOUT6_Values<MDIOS::MDIOS_DOUTR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR6Pack  = Register<0x400094B4, 32, ReadWriteMode, MDIOSMDIOS_DOUTR6Base, T...> ;

  struct MDIOSMDIOS_DOUTR7Base {} ;

  struct MDIOS_DOUTR7 : public RegisterBase<0x400094B8, 32, ReadWriteMode>
  {
    using DOUT7 = MDIOS_MDIOS_DOUTR7_DOUT7_Values<MDIOS::MDIOS_DOUTR7, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR7Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR7_DOUT7_Values<MDIOS::MDIOS_DOUTR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR7Pack  = Register<0x400094B8, 32, ReadWriteMode, MDIOSMDIOS_DOUTR7Base, T...> ;

  struct MDIOSMDIOS_DOUTR8Base {} ;

  struct MDIOS_DOUTR8 : public RegisterBase<0x400094BC, 32, ReadWriteMode>
  {
    using DOUT8 = MDIOS_MDIOS_DOUTR8_DOUT8_Values<MDIOS::MDIOS_DOUTR8, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR8Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR8_DOUT8_Values<MDIOS::MDIOS_DOUTR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR8Pack  = Register<0x400094BC, 32, ReadWriteMode, MDIOSMDIOS_DOUTR8Base, T...> ;

  struct MDIOSMDIOS_DOUTR9Base {} ;

  struct MDIOS_DOUTR9 : public RegisterBase<0x400094C0, 32, ReadWriteMode>
  {
    using DOUT9 = MDIOS_MDIOS_DOUTR9_DOUT9_Values<MDIOS::MDIOS_DOUTR9, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR9Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR9_DOUT9_Values<MDIOS::MDIOS_DOUTR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR9Pack  = Register<0x400094C0, 32, ReadWriteMode, MDIOSMDIOS_DOUTR9Base, T...> ;

  struct MDIOSMDIOS_DOUTR10Base {} ;

  struct MDIOS_DOUTR10 : public RegisterBase<0x400094C4, 32, ReadWriteMode>
  {
    using DOUT10 = MDIOS_MDIOS_DOUTR10_DOUT10_Values<MDIOS::MDIOS_DOUTR10, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR10Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR10_DOUT10_Values<MDIOS::MDIOS_DOUTR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR10Pack  = Register<0x400094C4, 32, ReadWriteMode, MDIOSMDIOS_DOUTR10Base, T...> ;

  struct MDIOSMDIOS_DOUTR11Base {} ;

  struct MDIOS_DOUTR11 : public RegisterBase<0x400094C8, 32, ReadWriteMode>
  {
    using DOUT11 = MDIOS_MDIOS_DOUTR11_DOUT11_Values<MDIOS::MDIOS_DOUTR11, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR11Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR11_DOUT11_Values<MDIOS::MDIOS_DOUTR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR11Pack  = Register<0x400094C8, 32, ReadWriteMode, MDIOSMDIOS_DOUTR11Base, T...> ;

  struct MDIOSMDIOS_DOUTR12Base {} ;

  struct MDIOS_DOUTR12 : public RegisterBase<0x400094CC, 32, ReadWriteMode>
  {
    using DOUT12 = MDIOS_MDIOS_DOUTR12_DOUT12_Values<MDIOS::MDIOS_DOUTR12, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR12Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR12_DOUT12_Values<MDIOS::MDIOS_DOUTR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR12Pack  = Register<0x400094CC, 32, ReadWriteMode, MDIOSMDIOS_DOUTR12Base, T...> ;

  struct MDIOSMDIOS_DOUTR13Base {} ;

  struct MDIOS_DOUTR13 : public RegisterBase<0x400094D0, 32, ReadWriteMode>
  {
    using DOUT13 = MDIOS_MDIOS_DOUTR13_DOUT13_Values<MDIOS::MDIOS_DOUTR13, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR13Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR13_DOUT13_Values<MDIOS::MDIOS_DOUTR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR13Pack  = Register<0x400094D0, 32, ReadWriteMode, MDIOSMDIOS_DOUTR13Base, T...> ;

  struct MDIOSMDIOS_DOUTR14Base {} ;

  struct MDIOS_DOUTR14 : public RegisterBase<0x400094D4, 32, ReadWriteMode>
  {
    using DOUT14 = MDIOS_MDIOS_DOUTR14_DOUT14_Values<MDIOS::MDIOS_DOUTR14, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR14Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR14_DOUT14_Values<MDIOS::MDIOS_DOUTR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR14Pack  = Register<0x400094D4, 32, ReadWriteMode, MDIOSMDIOS_DOUTR14Base, T...> ;

  struct MDIOSMDIOS_DOUTR15Base {} ;

  struct MDIOS_DOUTR15 : public RegisterBase<0x400094D8, 32, ReadWriteMode>
  {
    using DOUT15 = MDIOS_MDIOS_DOUTR15_DOUT15_Values<MDIOS::MDIOS_DOUTR15, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR15Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR15_DOUT15_Values<MDIOS::MDIOS_DOUTR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR15Pack  = Register<0x400094D8, 32, ReadWriteMode, MDIOSMDIOS_DOUTR15Base, T...> ;

  struct MDIOSMDIOS_DOUTR16Base {} ;

  struct MDIOS_DOUTR16 : public RegisterBase<0x400094DC, 32, ReadWriteMode>
  {
    using DOUT16 = MDIOS_MDIOS_DOUTR16_DOUT16_Values<MDIOS::MDIOS_DOUTR16, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR16Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR16_DOUT16_Values<MDIOS::MDIOS_DOUTR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR16Pack  = Register<0x400094DC, 32, ReadWriteMode, MDIOSMDIOS_DOUTR16Base, T...> ;

  struct MDIOSMDIOS_DOUTR17Base {} ;

  struct MDIOS_DOUTR17 : public RegisterBase<0x400094E0, 32, ReadWriteMode>
  {
    using DOUT17 = MDIOS_MDIOS_DOUTR17_DOUT17_Values<MDIOS::MDIOS_DOUTR17, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR17Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR17_DOUT17_Values<MDIOS::MDIOS_DOUTR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR17Pack  = Register<0x400094E0, 32, ReadWriteMode, MDIOSMDIOS_DOUTR17Base, T...> ;

  struct MDIOSMDIOS_DOUTR18Base {} ;

  struct MDIOS_DOUTR18 : public RegisterBase<0x400094E4, 32, ReadWriteMode>
  {
    using DOUT18 = MDIOS_MDIOS_DOUTR18_DOUT18_Values<MDIOS::MDIOS_DOUTR18, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR18Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR18_DOUT18_Values<MDIOS::MDIOS_DOUTR18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR18Pack  = Register<0x400094E4, 32, ReadWriteMode, MDIOSMDIOS_DOUTR18Base, T...> ;

  struct MDIOSMDIOS_DOUTR19Base {} ;

  struct MDIOS_DOUTR19 : public RegisterBase<0x400094E8, 32, ReadWriteMode>
  {
    using DOUT19 = MDIOS_MDIOS_DOUTR19_DOUT19_Values<MDIOS::MDIOS_DOUTR19, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR19Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR19_DOUT19_Values<MDIOS::MDIOS_DOUTR19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR19Pack  = Register<0x400094E8, 32, ReadWriteMode, MDIOSMDIOS_DOUTR19Base, T...> ;

  struct MDIOSMDIOS_DOUTR20Base {} ;

  struct MDIOS_DOUTR20 : public RegisterBase<0x400094EC, 32, ReadWriteMode>
  {
    using DOUT20 = MDIOS_MDIOS_DOUTR20_DOUT20_Values<MDIOS::MDIOS_DOUTR20, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR20Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR20_DOUT20_Values<MDIOS::MDIOS_DOUTR20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR20Pack  = Register<0x400094EC, 32, ReadWriteMode, MDIOSMDIOS_DOUTR20Base, T...> ;

  struct MDIOSMDIOS_DOUTR21Base {} ;

  struct MDIOS_DOUTR21 : public RegisterBase<0x400094F0, 32, ReadWriteMode>
  {
    using DOUT21 = MDIOS_MDIOS_DOUTR21_DOUT21_Values<MDIOS::MDIOS_DOUTR21, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR21Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR21_DOUT21_Values<MDIOS::MDIOS_DOUTR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR21Pack  = Register<0x400094F0, 32, ReadWriteMode, MDIOSMDIOS_DOUTR21Base, T...> ;

  struct MDIOSMDIOS_DOUTR22Base {} ;

  struct MDIOS_DOUTR22 : public RegisterBase<0x400094F4, 32, ReadWriteMode>
  {
    using DOUT22 = MDIOS_MDIOS_DOUTR22_DOUT22_Values<MDIOS::MDIOS_DOUTR22, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR22Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR22_DOUT22_Values<MDIOS::MDIOS_DOUTR22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR22Pack  = Register<0x400094F4, 32, ReadWriteMode, MDIOSMDIOS_DOUTR22Base, T...> ;

  struct MDIOSMDIOS_DOUTR23Base {} ;

  struct MDIOS_DOUTR23 : public RegisterBase<0x400094F8, 32, ReadWriteMode>
  {
    using DOUT23 = MDIOS_MDIOS_DOUTR23_DOUT23_Values<MDIOS::MDIOS_DOUTR23, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR23Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR23_DOUT23_Values<MDIOS::MDIOS_DOUTR23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR23Pack  = Register<0x400094F8, 32, ReadWriteMode, MDIOSMDIOS_DOUTR23Base, T...> ;

  struct MDIOSMDIOS_DOUTR24Base {} ;

  struct MDIOS_DOUTR24 : public RegisterBase<0x400094FC, 32, ReadWriteMode>
  {
    using DOUT24 = MDIOS_MDIOS_DOUTR24_DOUT24_Values<MDIOS::MDIOS_DOUTR24, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR24Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR24_DOUT24_Values<MDIOS::MDIOS_DOUTR24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR24Pack  = Register<0x400094FC, 32, ReadWriteMode, MDIOSMDIOS_DOUTR24Base, T...> ;

  struct MDIOSMDIOS_DOUTR25Base {} ;

  struct MDIOS_DOUTR25 : public RegisterBase<0x40009500, 32, ReadWriteMode>
  {
    using DOUT25 = MDIOS_MDIOS_DOUTR25_DOUT25_Values<MDIOS::MDIOS_DOUTR25, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR25Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR25_DOUT25_Values<MDIOS::MDIOS_DOUTR25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR25Pack  = Register<0x40009500, 32, ReadWriteMode, MDIOSMDIOS_DOUTR25Base, T...> ;

  struct MDIOSMDIOS_DOUTR26Base {} ;

  struct MDIOS_DOUTR26 : public RegisterBase<0x40009504, 32, ReadWriteMode>
  {
    using DOUT26 = MDIOS_MDIOS_DOUTR26_DOUT26_Values<MDIOS::MDIOS_DOUTR26, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR26Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR26_DOUT26_Values<MDIOS::MDIOS_DOUTR26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR26Pack  = Register<0x40009504, 32, ReadWriteMode, MDIOSMDIOS_DOUTR26Base, T...> ;

  struct MDIOSMDIOS_DOUTR27Base {} ;

  struct MDIOS_DOUTR27 : public RegisterBase<0x40009508, 32, ReadWriteMode>
  {
    using DOUT27 = MDIOS_MDIOS_DOUTR27_DOUT27_Values<MDIOS::MDIOS_DOUTR27, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR27Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR27_DOUT27_Values<MDIOS::MDIOS_DOUTR27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR27Pack  = Register<0x40009508, 32, ReadWriteMode, MDIOSMDIOS_DOUTR27Base, T...> ;

  struct MDIOSMDIOS_DOUTR28Base {} ;

  struct MDIOS_DOUTR28 : public RegisterBase<0x4000950C, 32, ReadWriteMode>
  {
    using DOUT28 = MDIOS_MDIOS_DOUTR28_DOUT28_Values<MDIOS::MDIOS_DOUTR28, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR28Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR28_DOUT28_Values<MDIOS::MDIOS_DOUTR28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR28Pack  = Register<0x4000950C, 32, ReadWriteMode, MDIOSMDIOS_DOUTR28Base, T...> ;

  struct MDIOSMDIOS_DOUTR29Base {} ;

  struct MDIOS_DOUTR29 : public RegisterBase<0x40009510, 32, ReadWriteMode>
  {
    using DOUT29 = MDIOS_MDIOS_DOUTR29_DOUT29_Values<MDIOS::MDIOS_DOUTR29, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR29Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR29_DOUT29_Values<MDIOS::MDIOS_DOUTR29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR29Pack  = Register<0x40009510, 32, ReadWriteMode, MDIOSMDIOS_DOUTR29Base, T...> ;

  struct MDIOSMDIOS_DOUTR30Base {} ;

  struct MDIOS_DOUTR30 : public RegisterBase<0x40009514, 32, ReadWriteMode>
  {
    using DOUT30 = MDIOS_MDIOS_DOUTR30_DOUT30_Values<MDIOS::MDIOS_DOUTR30, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR30Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR30_DOUT30_Values<MDIOS::MDIOS_DOUTR30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR30Pack  = Register<0x40009514, 32, ReadWriteMode, MDIOSMDIOS_DOUTR30Base, T...> ;

  struct MDIOSMDIOS_DOUTR31Base {} ;

  struct MDIOS_DOUTR31 : public RegisterBase<0x40009518, 32, ReadWriteMode>
  {
    using DOUT31 = MDIOS_MDIOS_DOUTR31_DOUT31_Values<MDIOS::MDIOS_DOUTR31, 0, 16, ReadWriteMode, MDIOSMDIOS_DOUTR31Base> ;
    using FieldValues = MDIOS_MDIOS_DOUTR31_DOUT31_Values<MDIOS::MDIOS_DOUTR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIOS_DOUTR31Pack  = Register<0x40009518, 32, ReadWriteMode, MDIOSMDIOS_DOUTR31Base, T...> ;

} ;

#endif //#if !defined(MDIOSREGISTERS_HPP)
