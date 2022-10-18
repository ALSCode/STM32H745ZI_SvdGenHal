/*******************************************************************************
* Filename      : uart7registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(UART7REGISTERS_HPP)
#define UART7REGISTERS_HPP

#include "uart7fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART7
{
  struct UART7CR1Base {} ;

  struct CR1 : public RegisterBase<0x40007800, 32, ReadWriteMode>
  {
    using RXFFIE = UART7_CR1_RXFFIE_Values<UART7::CR1, 31, 1, ReadWriteMode, UART7CR1Base> ;
    using TXFEIE = UART7_CR1_TXFEIE_Values<UART7::CR1, 30, 1, ReadWriteMode, UART7CR1Base> ;
    using FIFOEN = UART7_CR1_FIFOEN_Values<UART7::CR1, 29, 1, ReadWriteMode, UART7CR1Base> ;
    using M1 = UART7_CR1_M1_Values<UART7::CR1, 28, 1, ReadWriteMode, UART7CR1Base> ;
    using EOBIE = UART7_CR1_EOBIE_Values<UART7::CR1, 27, 1, ReadWriteMode, UART7CR1Base> ;
    using RTOIE = UART7_CR1_RTOIE_Values<UART7::CR1, 26, 1, ReadWriteMode, UART7CR1Base> ;
    using DEAT4 = UART7_CR1_DEAT4_Values<UART7::CR1, 25, 1, ReadWriteMode, UART7CR1Base> ;
    using DEAT3 = UART7_CR1_DEAT3_Values<UART7::CR1, 24, 1, ReadWriteMode, UART7CR1Base> ;
    using DEAT2 = UART7_CR1_DEAT2_Values<UART7::CR1, 23, 1, ReadWriteMode, UART7CR1Base> ;
    using DEAT1 = UART7_CR1_DEAT1_Values<UART7::CR1, 22, 1, ReadWriteMode, UART7CR1Base> ;
    using DEAT0 = UART7_CR1_DEAT0_Values<UART7::CR1, 21, 1, ReadWriteMode, UART7CR1Base> ;
    using DEDT4 = UART7_CR1_DEDT4_Values<UART7::CR1, 20, 1, ReadWriteMode, UART7CR1Base> ;
    using DEDT3 = UART7_CR1_DEDT3_Values<UART7::CR1, 19, 1, ReadWriteMode, UART7CR1Base> ;
    using DEDT2 = UART7_CR1_DEDT2_Values<UART7::CR1, 18, 1, ReadWriteMode, UART7CR1Base> ;
    using DEDT1 = UART7_CR1_DEDT1_Values<UART7::CR1, 17, 1, ReadWriteMode, UART7CR1Base> ;
    using DEDT0 = UART7_CR1_DEDT0_Values<UART7::CR1, 16, 1, ReadWriteMode, UART7CR1Base> ;
    using OVER8 = UART7_CR1_OVER8_Values<UART7::CR1, 15, 1, ReadWriteMode, UART7CR1Base> ;
    using CMIE = UART7_CR1_CMIE_Values<UART7::CR1, 14, 1, ReadWriteMode, UART7CR1Base> ;
    using MME = UART7_CR1_MME_Values<UART7::CR1, 13, 1, ReadWriteMode, UART7CR1Base> ;
    using M0 = UART7_CR1_M0_Values<UART7::CR1, 12, 1, ReadWriteMode, UART7CR1Base> ;
    using WAKE = UART7_CR1_WAKE_Values<UART7::CR1, 11, 1, ReadWriteMode, UART7CR1Base> ;
    using PCE = UART7_CR1_PCE_Values<UART7::CR1, 10, 1, ReadWriteMode, UART7CR1Base> ;
    using PS = UART7_CR1_PS_Values<UART7::CR1, 9, 1, ReadWriteMode, UART7CR1Base> ;
    using PEIE = UART7_CR1_PEIE_Values<UART7::CR1, 8, 1, ReadWriteMode, UART7CR1Base> ;
    using TXEIE = UART7_CR1_TXEIE_Values<UART7::CR1, 7, 1, ReadWriteMode, UART7CR1Base> ;
    using TCIE = UART7_CR1_TCIE_Values<UART7::CR1, 6, 1, ReadWriteMode, UART7CR1Base> ;
    using RXNEIE = UART7_CR1_RXNEIE_Values<UART7::CR1, 5, 1, ReadWriteMode, UART7CR1Base> ;
    using IDLEIE = UART7_CR1_IDLEIE_Values<UART7::CR1, 4, 1, ReadWriteMode, UART7CR1Base> ;
    using TE = UART7_CR1_TE_Values<UART7::CR1, 3, 1, ReadWriteMode, UART7CR1Base> ;
    using RE = UART7_CR1_RE_Values<UART7::CR1, 2, 1, ReadWriteMode, UART7CR1Base> ;
    using UESM = UART7_CR1_UESM_Values<UART7::CR1, 1, 1, ReadWriteMode, UART7CR1Base> ;
    using UE = UART7_CR1_UE_Values<UART7::CR1, 0, 1, ReadWriteMode, UART7CR1Base> ;
    using FieldValues = UART7_CR1_UE_Values<UART7::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40007800, 32, ReadWriteMode, UART7CR1Base, T...> ;

  struct UART7CR2Base {} ;

  struct CR2 : public RegisterBase<0x40007804, 32, ReadWriteMode>
  {
    using ADD4_7 = UART7_CR2_ADD4_7_Values<UART7::CR2, 28, 4, ReadWriteMode, UART7CR2Base> ;
    using ADD0_3 = UART7_CR2_ADD0_3_Values<UART7::CR2, 24, 4, ReadWriteMode, UART7CR2Base> ;
    using RTOEN = UART7_CR2_RTOEN_Values<UART7::CR2, 23, 1, ReadWriteMode, UART7CR2Base> ;
    using ABRMOD1 = UART7_CR2_ABRMOD1_Values<UART7::CR2, 22, 1, ReadWriteMode, UART7CR2Base> ;
    using ABRMOD0 = UART7_CR2_ABRMOD0_Values<UART7::CR2, 21, 1, ReadWriteMode, UART7CR2Base> ;
    using ABREN = UART7_CR2_ABREN_Values<UART7::CR2, 20, 1, ReadWriteMode, UART7CR2Base> ;
    using MSBFIRST = UART7_CR2_MSBFIRST_Values<UART7::CR2, 19, 1, ReadWriteMode, UART7CR2Base> ;
    using TAINV = UART7_CR2_TAINV_Values<UART7::CR2, 18, 1, ReadWriteMode, UART7CR2Base> ;
    using TXINV = UART7_CR2_TXINV_Values<UART7::CR2, 17, 1, ReadWriteMode, UART7CR2Base> ;
    using RXINV = UART7_CR2_RXINV_Values<UART7::CR2, 16, 1, ReadWriteMode, UART7CR2Base> ;
    using SWAP = UART7_CR2_SWAP_Values<UART7::CR2, 15, 1, ReadWriteMode, UART7CR2Base> ;
    using LINEN = UART7_CR2_LINEN_Values<UART7::CR2, 14, 1, ReadWriteMode, UART7CR2Base> ;
    using STOP = UART7_CR2_STOP_Values<UART7::CR2, 12, 2, ReadWriteMode, UART7CR2Base> ;
    using CLKEN = UART7_CR2_CLKEN_Values<UART7::CR2, 11, 1, ReadWriteMode, UART7CR2Base> ;
    using CPOL = UART7_CR2_CPOL_Values<UART7::CR2, 10, 1, ReadWriteMode, UART7CR2Base> ;
    using CPHA = UART7_CR2_CPHA_Values<UART7::CR2, 9, 1, ReadWriteMode, UART7CR2Base> ;
    using LBCL = UART7_CR2_LBCL_Values<UART7::CR2, 8, 1, ReadWriteMode, UART7CR2Base> ;
    using LBDIE = UART7_CR2_LBDIE_Values<UART7::CR2, 6, 1, ReadWriteMode, UART7CR2Base> ;
    using LBDL = UART7_CR2_LBDL_Values<UART7::CR2, 5, 1, ReadWriteMode, UART7CR2Base> ;
    using ADDM7 = UART7_CR2_ADDM7_Values<UART7::CR2, 4, 1, ReadWriteMode, UART7CR2Base> ;
    using DIS_NSS = UART7_CR2_DIS_NSS_Values<UART7::CR2, 3, 1, ReadWriteMode, UART7CR2Base> ;
    using SLVEN = UART7_CR2_SLVEN_Values<UART7::CR2, 0, 1, ReadWriteMode, UART7CR2Base> ;
    using FieldValues = UART7_CR2_SLVEN_Values<UART7::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40007804, 32, ReadWriteMode, UART7CR2Base, T...> ;

  struct UART7CR3Base {} ;

  struct CR3 : public RegisterBase<0x40007808, 32, ReadWriteMode>
  {
    using TXFTCFG = UART7_CR3_TXFTCFG_Values<UART7::CR3, 29, 3, ReadWriteMode, UART7CR3Base> ;
    using RXFTIE = UART7_CR3_RXFTIE_Values<UART7::CR3, 28, 1, ReadWriteMode, UART7CR3Base> ;
    using RXFTCFG = UART7_CR3_RXFTCFG_Values<UART7::CR3, 25, 3, ReadWriteMode, UART7CR3Base> ;
    using TCBGTIE = UART7_CR3_TCBGTIE_Values<UART7::CR3, 24, 1, ReadWriteMode, UART7CR3Base> ;
    using TXFTIE = UART7_CR3_TXFTIE_Values<UART7::CR3, 23, 1, ReadWriteMode, UART7CR3Base> ;
    using WUFIE = UART7_CR3_WUFIE_Values<UART7::CR3, 22, 1, ReadWriteMode, UART7CR3Base> ;
    using WUS = UART7_CR3_WUS_Values<UART7::CR3, 20, 2, ReadWriteMode, UART7CR3Base> ;
    using SCARCNT = UART7_CR3_SCARCNT_Values<UART7::CR3, 17, 3, ReadWriteMode, UART7CR3Base> ;
    using DEP = UART7_CR3_DEP_Values<UART7::CR3, 15, 1, ReadWriteMode, UART7CR3Base> ;
    using DEM = UART7_CR3_DEM_Values<UART7::CR3, 14, 1, ReadWriteMode, UART7CR3Base> ;
    using DDRE = UART7_CR3_DDRE_Values<UART7::CR3, 13, 1, ReadWriteMode, UART7CR3Base> ;
    using OVRDIS = UART7_CR3_OVRDIS_Values<UART7::CR3, 12, 1, ReadWriteMode, UART7CR3Base> ;
    using ONEBIT = UART7_CR3_ONEBIT_Values<UART7::CR3, 11, 1, ReadWriteMode, UART7CR3Base> ;
    using CTSIE = UART7_CR3_CTSIE_Values<UART7::CR3, 10, 1, ReadWriteMode, UART7CR3Base> ;
    using CTSE = UART7_CR3_CTSE_Values<UART7::CR3, 9, 1, ReadWriteMode, UART7CR3Base> ;
    using RTSE = UART7_CR3_RTSE_Values<UART7::CR3, 8, 1, ReadWriteMode, UART7CR3Base> ;
    using DMAT = UART7_CR3_DMAT_Values<UART7::CR3, 7, 1, ReadWriteMode, UART7CR3Base> ;
    using DMAR = UART7_CR3_DMAR_Values<UART7::CR3, 6, 1, ReadWriteMode, UART7CR3Base> ;
    using SCEN = UART7_CR3_SCEN_Values<UART7::CR3, 5, 1, ReadWriteMode, UART7CR3Base> ;
    using NACK = UART7_CR3_NACK_Values<UART7::CR3, 4, 1, ReadWriteMode, UART7CR3Base> ;
    using HDSEL = UART7_CR3_HDSEL_Values<UART7::CR3, 3, 1, ReadWriteMode, UART7CR3Base> ;
    using IRLP = UART7_CR3_IRLP_Values<UART7::CR3, 2, 1, ReadWriteMode, UART7CR3Base> ;
    using IREN = UART7_CR3_IREN_Values<UART7::CR3, 1, 1, ReadWriteMode, UART7CR3Base> ;
    using EIE = UART7_CR3_EIE_Values<UART7::CR3, 0, 1, ReadWriteMode, UART7CR3Base> ;
    using FieldValues = UART7_CR3_EIE_Values<UART7::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40007808, 32, ReadWriteMode, UART7CR3Base, T...> ;

  struct UART7BRRBase {} ;

  struct BRR : public RegisterBase<0x4000780C, 32, ReadWriteMode>
  {
    using BRR_4_15 = UART7_BRR_BRR_4_15_Values<UART7::BRR, 4, 12, ReadWriteMode, UART7BRRBase> ;
    using BRR_0_3 = UART7_BRR_BRR_0_3_Values<UART7::BRR, 0, 4, ReadWriteMode, UART7BRRBase> ;
    using FieldValues = UART7_BRR_BRR_0_3_Values<UART7::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x4000780C, 32, ReadWriteMode, UART7BRRBase, T...> ;

  struct UART7GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40007810, 32, ReadWriteMode>
  {
    using GT = UART7_GTPR_GT_Values<UART7::GTPR, 8, 8, ReadWriteMode, UART7GTPRBase> ;
    using PSC = UART7_GTPR_PSC_Values<UART7::GTPR, 0, 8, ReadWriteMode, UART7GTPRBase> ;
    using FieldValues = UART7_GTPR_PSC_Values<UART7::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40007810, 32, ReadWriteMode, UART7GTPRBase, T...> ;

  struct UART7RTORBase {} ;

  struct RTOR : public RegisterBase<0x40007814, 32, ReadWriteMode>
  {
    using BLEN = UART7_RTOR_BLEN_Values<UART7::RTOR, 24, 8, ReadWriteMode, UART7RTORBase> ;
    using RTO = UART7_RTOR_RTO_Values<UART7::RTOR, 0, 24, ReadWriteMode, UART7RTORBase> ;
    using FieldValues = UART7_RTOR_RTO_Values<UART7::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40007814, 32, ReadWriteMode, UART7RTORBase, T...> ;

  struct UART7RQRBase {} ;

  struct RQR : public RegisterBase<0x40007818, 32, WriteMode>
  {
    using TXFRQ = UART7_RQR_TXFRQ_Values<UART7::RQR, 4, 1, WriteMode, UART7RQRBase> ;
    using RXFRQ = UART7_RQR_RXFRQ_Values<UART7::RQR, 3, 1, WriteMode, UART7RQRBase> ;
    using MMRQ = UART7_RQR_MMRQ_Values<UART7::RQR, 2, 1, WriteMode, UART7RQRBase> ;
    using SBKRQ = UART7_RQR_SBKRQ_Values<UART7::RQR, 1, 1, WriteMode, UART7RQRBase> ;
    using ABRRQ = UART7_RQR_ABRRQ_Values<UART7::RQR, 0, 1, WriteMode, UART7RQRBase> ;
    using FieldValues = UART7_RQR_ABRRQ_Values<UART7::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40007818, 32, WriteMode, UART7RQRBase, T...> ;

  struct UART7ISRBase {} ;

  struct ISR : public RegisterBase<0x4000781C, 32, ReadMode>
  {
    using TXFT = UART7_ISR_TXFT_Values<UART7::ISR, 27, 1, ReadMode, UART7ISRBase> ;
    using RXFT = UART7_ISR_RXFT_Values<UART7::ISR, 26, 1, ReadMode, UART7ISRBase> ;
    using TCBGT = UART7_ISR_TCBGT_Values<UART7::ISR, 25, 1, ReadMode, UART7ISRBase> ;
    using RXFF = UART7_ISR_RXFF_Values<UART7::ISR, 24, 1, ReadMode, UART7ISRBase> ;
    using TXFE = UART7_ISR_TXFE_Values<UART7::ISR, 23, 1, ReadMode, UART7ISRBase> ;
    using REACK = UART7_ISR_REACK_Values<UART7::ISR, 22, 1, ReadMode, UART7ISRBase> ;
    using TEACK = UART7_ISR_TEACK_Values<UART7::ISR, 21, 1, ReadMode, UART7ISRBase> ;
    using WUF = UART7_ISR_WUF_Values<UART7::ISR, 20, 1, ReadMode, UART7ISRBase> ;
    using RWU = UART7_ISR_RWU_Values<UART7::ISR, 19, 1, ReadMode, UART7ISRBase> ;
    using SBKF = UART7_ISR_SBKF_Values<UART7::ISR, 18, 1, ReadMode, UART7ISRBase> ;
    using CMF = UART7_ISR_CMF_Values<UART7::ISR, 17, 1, ReadMode, UART7ISRBase> ;
    using BUSY = UART7_ISR_BUSY_Values<UART7::ISR, 16, 1, ReadMode, UART7ISRBase> ;
    using ABRF = UART7_ISR_ABRF_Values<UART7::ISR, 15, 1, ReadMode, UART7ISRBase> ;
    using ABRE = UART7_ISR_ABRE_Values<UART7::ISR, 14, 1, ReadMode, UART7ISRBase> ;
    using UDR = UART7_ISR_UDR_Values<UART7::ISR, 13, 1, ReadMode, UART7ISRBase> ;
    using EOBF = UART7_ISR_EOBF_Values<UART7::ISR, 12, 1, ReadMode, UART7ISRBase> ;
    using RTOF = UART7_ISR_RTOF_Values<UART7::ISR, 11, 1, ReadMode, UART7ISRBase> ;
    using CTS = UART7_ISR_CTS_Values<UART7::ISR, 10, 1, ReadMode, UART7ISRBase> ;
    using CTSIF = UART7_ISR_CTSIF_Values<UART7::ISR, 9, 1, ReadMode, UART7ISRBase> ;
    using LBDF = UART7_ISR_LBDF_Values<UART7::ISR, 8, 1, ReadMode, UART7ISRBase> ;
    using TXE = UART7_ISR_TXE_Values<UART7::ISR, 7, 1, ReadMode, UART7ISRBase> ;
    using TC = UART7_ISR_TC_Values<UART7::ISR, 6, 1, ReadMode, UART7ISRBase> ;
    using RXNE = UART7_ISR_RXNE_Values<UART7::ISR, 5, 1, ReadMode, UART7ISRBase> ;
    using IDLE = UART7_ISR_IDLE_Values<UART7::ISR, 4, 1, ReadMode, UART7ISRBase> ;
    using ORE = UART7_ISR_ORE_Values<UART7::ISR, 3, 1, ReadMode, UART7ISRBase> ;
    using NF = UART7_ISR_NF_Values<UART7::ISR, 2, 1, ReadMode, UART7ISRBase> ;
    using FE = UART7_ISR_FE_Values<UART7::ISR, 1, 1, ReadMode, UART7ISRBase> ;
    using PE = UART7_ISR_PE_Values<UART7::ISR, 0, 1, ReadMode, UART7ISRBase> ;
    using FieldValues = UART7_ISR_PE_Values<UART7::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x4000781C, 32, ReadMode, UART7ISRBase, T...> ;

  struct UART7ICRBase {} ;

  struct ICR : public RegisterBase<0x40007820, 32, WriteMode>
  {
    using WUCF = UART7_ICR_WUCF_Values<UART7::ICR, 20, 1, WriteMode, UART7ICRBase> ;
    using CMCF = UART7_ICR_CMCF_Values<UART7::ICR, 17, 1, WriteMode, UART7ICRBase> ;
    using UDRCF = UART7_ICR_UDRCF_Values<UART7::ICR, 13, 1, WriteMode, UART7ICRBase> ;
    using EOBCF = UART7_ICR_EOBCF_Values<UART7::ICR, 12, 1, WriteMode, UART7ICRBase> ;
    using RTOCF = UART7_ICR_RTOCF_Values<UART7::ICR, 11, 1, WriteMode, UART7ICRBase> ;
    using CTSCF = UART7_ICR_CTSCF_Values<UART7::ICR, 9, 1, WriteMode, UART7ICRBase> ;
    using LBDCF = UART7_ICR_LBDCF_Values<UART7::ICR, 8, 1, WriteMode, UART7ICRBase> ;
    using TCBGTC = UART7_ICR_TCBGTC_Values<UART7::ICR, 7, 1, WriteMode, UART7ICRBase> ;
    using TCCF = UART7_ICR_TCCF_Values<UART7::ICR, 6, 1, WriteMode, UART7ICRBase> ;
    using TXFECF = UART7_ICR_TXFECF_Values<UART7::ICR, 5, 1, WriteMode, UART7ICRBase> ;
    using IDLECF = UART7_ICR_IDLECF_Values<UART7::ICR, 4, 1, WriteMode, UART7ICRBase> ;
    using ORECF = UART7_ICR_ORECF_Values<UART7::ICR, 3, 1, WriteMode, UART7ICRBase> ;
    using NCF = UART7_ICR_NCF_Values<UART7::ICR, 2, 1, WriteMode, UART7ICRBase> ;
    using FECF = UART7_ICR_FECF_Values<UART7::ICR, 1, 1, WriteMode, UART7ICRBase> ;
    using PECF = UART7_ICR_PECF_Values<UART7::ICR, 0, 1, WriteMode, UART7ICRBase> ;
    using FieldValues = UART7_ICR_PECF_Values<UART7::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40007820, 32, WriteMode, UART7ICRBase, T...> ;

  struct UART7RDRBase {} ;

  struct RDR : public RegisterBase<0x40007824, 32, ReadMode>
  {
    using RDRField = UART7_RDR_RDR_Values<UART7::RDR, 0, 9, ReadMode, UART7RDRBase> ;
    using FieldValues = UART7_RDR_RDR_Values<UART7::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40007824, 32, ReadMode, UART7RDRBase, T...> ;

  struct UART7TDRBase {} ;

  struct TDR : public RegisterBase<0x40007828, 32, ReadWriteMode>
  {
    using TDRField = UART7_TDR_TDR_Values<UART7::TDR, 0, 9, ReadWriteMode, UART7TDRBase> ;
    using FieldValues = UART7_TDR_TDR_Values<UART7::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40007828, 32, ReadWriteMode, UART7TDRBase, T...> ;

  struct UART7PRESCBase {} ;

  struct PRESC : public RegisterBase<0x4000782C, 32, ReadWriteMode>
  {
    using PRESCALER = UART7_PRESC_PRESCALER_Values<UART7::PRESC, 0, 4, ReadWriteMode, UART7PRESCBase> ;
    using FieldValues = UART7_PRESC_PRESCALER_Values<UART7::PRESC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRESCPack  = Register<0x4000782C, 32, ReadWriteMode, UART7PRESCBase, T...> ;

} ;

#endif //#if !defined(UART7REGISTERS_HPP)
