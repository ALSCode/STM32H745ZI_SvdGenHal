/*******************************************************************************
* Filename      : uart8registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(UART8REGISTERS_HPP)
#define UART8REGISTERS_HPP

#include "uart8fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UART8
{
  struct UART8CR1Base {} ;

  struct CR1 : public RegisterBase<0x40007C00, 32, ReadWriteMode>
  {
    using RXFFIE = UART8_CR1_RXFFIE_Values<UART8::CR1, 31, 1, ReadWriteMode, UART8CR1Base> ;
    using TXFEIE = UART8_CR1_TXFEIE_Values<UART8::CR1, 30, 1, ReadWriteMode, UART8CR1Base> ;
    using FIFOEN = UART8_CR1_FIFOEN_Values<UART8::CR1, 29, 1, ReadWriteMode, UART8CR1Base> ;
    using M1 = UART8_CR1_M1_Values<UART8::CR1, 28, 1, ReadWriteMode, UART8CR1Base> ;
    using EOBIE = UART8_CR1_EOBIE_Values<UART8::CR1, 27, 1, ReadWriteMode, UART8CR1Base> ;
    using RTOIE = UART8_CR1_RTOIE_Values<UART8::CR1, 26, 1, ReadWriteMode, UART8CR1Base> ;
    using DEAT4 = UART8_CR1_DEAT4_Values<UART8::CR1, 25, 1, ReadWriteMode, UART8CR1Base> ;
    using DEAT3 = UART8_CR1_DEAT3_Values<UART8::CR1, 24, 1, ReadWriteMode, UART8CR1Base> ;
    using DEAT2 = UART8_CR1_DEAT2_Values<UART8::CR1, 23, 1, ReadWriteMode, UART8CR1Base> ;
    using DEAT1 = UART8_CR1_DEAT1_Values<UART8::CR1, 22, 1, ReadWriteMode, UART8CR1Base> ;
    using DEAT0 = UART8_CR1_DEAT0_Values<UART8::CR1, 21, 1, ReadWriteMode, UART8CR1Base> ;
    using DEDT4 = UART8_CR1_DEDT4_Values<UART8::CR1, 20, 1, ReadWriteMode, UART8CR1Base> ;
    using DEDT3 = UART8_CR1_DEDT3_Values<UART8::CR1, 19, 1, ReadWriteMode, UART8CR1Base> ;
    using DEDT2 = UART8_CR1_DEDT2_Values<UART8::CR1, 18, 1, ReadWriteMode, UART8CR1Base> ;
    using DEDT1 = UART8_CR1_DEDT1_Values<UART8::CR1, 17, 1, ReadWriteMode, UART8CR1Base> ;
    using DEDT0 = UART8_CR1_DEDT0_Values<UART8::CR1, 16, 1, ReadWriteMode, UART8CR1Base> ;
    using OVER8 = UART8_CR1_OVER8_Values<UART8::CR1, 15, 1, ReadWriteMode, UART8CR1Base> ;
    using CMIE = UART8_CR1_CMIE_Values<UART8::CR1, 14, 1, ReadWriteMode, UART8CR1Base> ;
    using MME = UART8_CR1_MME_Values<UART8::CR1, 13, 1, ReadWriteMode, UART8CR1Base> ;
    using M0 = UART8_CR1_M0_Values<UART8::CR1, 12, 1, ReadWriteMode, UART8CR1Base> ;
    using WAKE = UART8_CR1_WAKE_Values<UART8::CR1, 11, 1, ReadWriteMode, UART8CR1Base> ;
    using PCE = UART8_CR1_PCE_Values<UART8::CR1, 10, 1, ReadWriteMode, UART8CR1Base> ;
    using PS = UART8_CR1_PS_Values<UART8::CR1, 9, 1, ReadWriteMode, UART8CR1Base> ;
    using PEIE = UART8_CR1_PEIE_Values<UART8::CR1, 8, 1, ReadWriteMode, UART8CR1Base> ;
    using TXEIE = UART8_CR1_TXEIE_Values<UART8::CR1, 7, 1, ReadWriteMode, UART8CR1Base> ;
    using TCIE = UART8_CR1_TCIE_Values<UART8::CR1, 6, 1, ReadWriteMode, UART8CR1Base> ;
    using RXNEIE = UART8_CR1_RXNEIE_Values<UART8::CR1, 5, 1, ReadWriteMode, UART8CR1Base> ;
    using IDLEIE = UART8_CR1_IDLEIE_Values<UART8::CR1, 4, 1, ReadWriteMode, UART8CR1Base> ;
    using TE = UART8_CR1_TE_Values<UART8::CR1, 3, 1, ReadWriteMode, UART8CR1Base> ;
    using RE = UART8_CR1_RE_Values<UART8::CR1, 2, 1, ReadWriteMode, UART8CR1Base> ;
    using UESM = UART8_CR1_UESM_Values<UART8::CR1, 1, 1, ReadWriteMode, UART8CR1Base> ;
    using UE = UART8_CR1_UE_Values<UART8::CR1, 0, 1, ReadWriteMode, UART8CR1Base> ;
    using FieldValues = UART8_CR1_UE_Values<UART8::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40007C00, 32, ReadWriteMode, UART8CR1Base, T...> ;

  struct UART8CR2Base {} ;

  struct CR2 : public RegisterBase<0x40007C04, 32, ReadWriteMode>
  {
    using ADD4_7 = UART8_CR2_ADD4_7_Values<UART8::CR2, 28, 4, ReadWriteMode, UART8CR2Base> ;
    using ADD0_3 = UART8_CR2_ADD0_3_Values<UART8::CR2, 24, 4, ReadWriteMode, UART8CR2Base> ;
    using RTOEN = UART8_CR2_RTOEN_Values<UART8::CR2, 23, 1, ReadWriteMode, UART8CR2Base> ;
    using ABRMOD1 = UART8_CR2_ABRMOD1_Values<UART8::CR2, 22, 1, ReadWriteMode, UART8CR2Base> ;
    using ABRMOD0 = UART8_CR2_ABRMOD0_Values<UART8::CR2, 21, 1, ReadWriteMode, UART8CR2Base> ;
    using ABREN = UART8_CR2_ABREN_Values<UART8::CR2, 20, 1, ReadWriteMode, UART8CR2Base> ;
    using MSBFIRST = UART8_CR2_MSBFIRST_Values<UART8::CR2, 19, 1, ReadWriteMode, UART8CR2Base> ;
    using TAINV = UART8_CR2_TAINV_Values<UART8::CR2, 18, 1, ReadWriteMode, UART8CR2Base> ;
    using TXINV = UART8_CR2_TXINV_Values<UART8::CR2, 17, 1, ReadWriteMode, UART8CR2Base> ;
    using RXINV = UART8_CR2_RXINV_Values<UART8::CR2, 16, 1, ReadWriteMode, UART8CR2Base> ;
    using SWAP = UART8_CR2_SWAP_Values<UART8::CR2, 15, 1, ReadWriteMode, UART8CR2Base> ;
    using LINEN = UART8_CR2_LINEN_Values<UART8::CR2, 14, 1, ReadWriteMode, UART8CR2Base> ;
    using STOP = UART8_CR2_STOP_Values<UART8::CR2, 12, 2, ReadWriteMode, UART8CR2Base> ;
    using CLKEN = UART8_CR2_CLKEN_Values<UART8::CR2, 11, 1, ReadWriteMode, UART8CR2Base> ;
    using CPOL = UART8_CR2_CPOL_Values<UART8::CR2, 10, 1, ReadWriteMode, UART8CR2Base> ;
    using CPHA = UART8_CR2_CPHA_Values<UART8::CR2, 9, 1, ReadWriteMode, UART8CR2Base> ;
    using LBCL = UART8_CR2_LBCL_Values<UART8::CR2, 8, 1, ReadWriteMode, UART8CR2Base> ;
    using LBDIE = UART8_CR2_LBDIE_Values<UART8::CR2, 6, 1, ReadWriteMode, UART8CR2Base> ;
    using LBDL = UART8_CR2_LBDL_Values<UART8::CR2, 5, 1, ReadWriteMode, UART8CR2Base> ;
    using ADDM7 = UART8_CR2_ADDM7_Values<UART8::CR2, 4, 1, ReadWriteMode, UART8CR2Base> ;
    using DIS_NSS = UART8_CR2_DIS_NSS_Values<UART8::CR2, 3, 1, ReadWriteMode, UART8CR2Base> ;
    using SLVEN = UART8_CR2_SLVEN_Values<UART8::CR2, 0, 1, ReadWriteMode, UART8CR2Base> ;
    using FieldValues = UART8_CR2_SLVEN_Values<UART8::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40007C04, 32, ReadWriteMode, UART8CR2Base, T...> ;

  struct UART8CR3Base {} ;

  struct CR3 : public RegisterBase<0x40007C08, 32, ReadWriteMode>
  {
    using TXFTCFG = UART8_CR3_TXFTCFG_Values<UART8::CR3, 29, 3, ReadWriteMode, UART8CR3Base> ;
    using RXFTIE = UART8_CR3_RXFTIE_Values<UART8::CR3, 28, 1, ReadWriteMode, UART8CR3Base> ;
    using RXFTCFG = UART8_CR3_RXFTCFG_Values<UART8::CR3, 25, 3, ReadWriteMode, UART8CR3Base> ;
    using TCBGTIE = UART8_CR3_TCBGTIE_Values<UART8::CR3, 24, 1, ReadWriteMode, UART8CR3Base> ;
    using TXFTIE = UART8_CR3_TXFTIE_Values<UART8::CR3, 23, 1, ReadWriteMode, UART8CR3Base> ;
    using WUFIE = UART8_CR3_WUFIE_Values<UART8::CR3, 22, 1, ReadWriteMode, UART8CR3Base> ;
    using WUS = UART8_CR3_WUS_Values<UART8::CR3, 20, 2, ReadWriteMode, UART8CR3Base> ;
    using SCARCNT = UART8_CR3_SCARCNT_Values<UART8::CR3, 17, 3, ReadWriteMode, UART8CR3Base> ;
    using DEP = UART8_CR3_DEP_Values<UART8::CR3, 15, 1, ReadWriteMode, UART8CR3Base> ;
    using DEM = UART8_CR3_DEM_Values<UART8::CR3, 14, 1, ReadWriteMode, UART8CR3Base> ;
    using DDRE = UART8_CR3_DDRE_Values<UART8::CR3, 13, 1, ReadWriteMode, UART8CR3Base> ;
    using OVRDIS = UART8_CR3_OVRDIS_Values<UART8::CR3, 12, 1, ReadWriteMode, UART8CR3Base> ;
    using ONEBIT = UART8_CR3_ONEBIT_Values<UART8::CR3, 11, 1, ReadWriteMode, UART8CR3Base> ;
    using CTSIE = UART8_CR3_CTSIE_Values<UART8::CR3, 10, 1, ReadWriteMode, UART8CR3Base> ;
    using CTSE = UART8_CR3_CTSE_Values<UART8::CR3, 9, 1, ReadWriteMode, UART8CR3Base> ;
    using RTSE = UART8_CR3_RTSE_Values<UART8::CR3, 8, 1, ReadWriteMode, UART8CR3Base> ;
    using DMAT = UART8_CR3_DMAT_Values<UART8::CR3, 7, 1, ReadWriteMode, UART8CR3Base> ;
    using DMAR = UART8_CR3_DMAR_Values<UART8::CR3, 6, 1, ReadWriteMode, UART8CR3Base> ;
    using SCEN = UART8_CR3_SCEN_Values<UART8::CR3, 5, 1, ReadWriteMode, UART8CR3Base> ;
    using NACK = UART8_CR3_NACK_Values<UART8::CR3, 4, 1, ReadWriteMode, UART8CR3Base> ;
    using HDSEL = UART8_CR3_HDSEL_Values<UART8::CR3, 3, 1, ReadWriteMode, UART8CR3Base> ;
    using IRLP = UART8_CR3_IRLP_Values<UART8::CR3, 2, 1, ReadWriteMode, UART8CR3Base> ;
    using IREN = UART8_CR3_IREN_Values<UART8::CR3, 1, 1, ReadWriteMode, UART8CR3Base> ;
    using EIE = UART8_CR3_EIE_Values<UART8::CR3, 0, 1, ReadWriteMode, UART8CR3Base> ;
    using FieldValues = UART8_CR3_EIE_Values<UART8::CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40007C08, 32, ReadWriteMode, UART8CR3Base, T...> ;

  struct UART8BRRBase {} ;

  struct BRR : public RegisterBase<0x40007C0C, 32, ReadWriteMode>
  {
    using BRR_4_15 = UART8_BRR_BRR_4_15_Values<UART8::BRR, 4, 12, ReadWriteMode, UART8BRRBase> ;
    using BRR_0_3 = UART8_BRR_BRR_0_3_Values<UART8::BRR, 0, 4, ReadWriteMode, UART8BRRBase> ;
    using FieldValues = UART8_BRR_BRR_0_3_Values<UART8::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40007C0C, 32, ReadWriteMode, UART8BRRBase, T...> ;

  struct UART8GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40007C10, 32, ReadWriteMode>
  {
    using GT = UART8_GTPR_GT_Values<UART8::GTPR, 8, 8, ReadWriteMode, UART8GTPRBase> ;
    using PSC = UART8_GTPR_PSC_Values<UART8::GTPR, 0, 8, ReadWriteMode, UART8GTPRBase> ;
    using FieldValues = UART8_GTPR_PSC_Values<UART8::GTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40007C10, 32, ReadWriteMode, UART8GTPRBase, T...> ;

  struct UART8RTORBase {} ;

  struct RTOR : public RegisterBase<0x40007C14, 32, ReadWriteMode>
  {
    using BLEN = UART8_RTOR_BLEN_Values<UART8::RTOR, 24, 8, ReadWriteMode, UART8RTORBase> ;
    using RTO = UART8_RTOR_RTO_Values<UART8::RTOR, 0, 24, ReadWriteMode, UART8RTORBase> ;
    using FieldValues = UART8_RTOR_RTO_Values<UART8::RTOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTORPack  = Register<0x40007C14, 32, ReadWriteMode, UART8RTORBase, T...> ;

  struct UART8RQRBase {} ;

  struct RQR : public RegisterBase<0x40007C18, 32, WriteMode>
  {
    using TXFRQ = UART8_RQR_TXFRQ_Values<UART8::RQR, 4, 1, WriteMode, UART8RQRBase> ;
    using RXFRQ = UART8_RQR_RXFRQ_Values<UART8::RQR, 3, 1, WriteMode, UART8RQRBase> ;
    using MMRQ = UART8_RQR_MMRQ_Values<UART8::RQR, 2, 1, WriteMode, UART8RQRBase> ;
    using SBKRQ = UART8_RQR_SBKRQ_Values<UART8::RQR, 1, 1, WriteMode, UART8RQRBase> ;
    using ABRRQ = UART8_RQR_ABRRQ_Values<UART8::RQR, 0, 1, WriteMode, UART8RQRBase> ;
    using FieldValues = UART8_RQR_ABRRQ_Values<UART8::RQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RQRPack  = Register<0x40007C18, 32, WriteMode, UART8RQRBase, T...> ;

  struct UART8ISRBase {} ;

  struct ISR : public RegisterBase<0x40007C1C, 32, ReadMode>
  {
    using TXFT = UART8_ISR_TXFT_Values<UART8::ISR, 27, 1, ReadMode, UART8ISRBase> ;
    using RXFT = UART8_ISR_RXFT_Values<UART8::ISR, 26, 1, ReadMode, UART8ISRBase> ;
    using TCBGT = UART8_ISR_TCBGT_Values<UART8::ISR, 25, 1, ReadMode, UART8ISRBase> ;
    using RXFF = UART8_ISR_RXFF_Values<UART8::ISR, 24, 1, ReadMode, UART8ISRBase> ;
    using TXFE = UART8_ISR_TXFE_Values<UART8::ISR, 23, 1, ReadMode, UART8ISRBase> ;
    using REACK = UART8_ISR_REACK_Values<UART8::ISR, 22, 1, ReadMode, UART8ISRBase> ;
    using TEACK = UART8_ISR_TEACK_Values<UART8::ISR, 21, 1, ReadMode, UART8ISRBase> ;
    using WUF = UART8_ISR_WUF_Values<UART8::ISR, 20, 1, ReadMode, UART8ISRBase> ;
    using RWU = UART8_ISR_RWU_Values<UART8::ISR, 19, 1, ReadMode, UART8ISRBase> ;
    using SBKF = UART8_ISR_SBKF_Values<UART8::ISR, 18, 1, ReadMode, UART8ISRBase> ;
    using CMF = UART8_ISR_CMF_Values<UART8::ISR, 17, 1, ReadMode, UART8ISRBase> ;
    using BUSY = UART8_ISR_BUSY_Values<UART8::ISR, 16, 1, ReadMode, UART8ISRBase> ;
    using ABRF = UART8_ISR_ABRF_Values<UART8::ISR, 15, 1, ReadMode, UART8ISRBase> ;
    using ABRE = UART8_ISR_ABRE_Values<UART8::ISR, 14, 1, ReadMode, UART8ISRBase> ;
    using UDR = UART8_ISR_UDR_Values<UART8::ISR, 13, 1, ReadMode, UART8ISRBase> ;
    using EOBF = UART8_ISR_EOBF_Values<UART8::ISR, 12, 1, ReadMode, UART8ISRBase> ;
    using RTOF = UART8_ISR_RTOF_Values<UART8::ISR, 11, 1, ReadMode, UART8ISRBase> ;
    using CTS = UART8_ISR_CTS_Values<UART8::ISR, 10, 1, ReadMode, UART8ISRBase> ;
    using CTSIF = UART8_ISR_CTSIF_Values<UART8::ISR, 9, 1, ReadMode, UART8ISRBase> ;
    using LBDF = UART8_ISR_LBDF_Values<UART8::ISR, 8, 1, ReadMode, UART8ISRBase> ;
    using TXE = UART8_ISR_TXE_Values<UART8::ISR, 7, 1, ReadMode, UART8ISRBase> ;
    using TC = UART8_ISR_TC_Values<UART8::ISR, 6, 1, ReadMode, UART8ISRBase> ;
    using RXNE = UART8_ISR_RXNE_Values<UART8::ISR, 5, 1, ReadMode, UART8ISRBase> ;
    using IDLE = UART8_ISR_IDLE_Values<UART8::ISR, 4, 1, ReadMode, UART8ISRBase> ;
    using ORE = UART8_ISR_ORE_Values<UART8::ISR, 3, 1, ReadMode, UART8ISRBase> ;
    using NF = UART8_ISR_NF_Values<UART8::ISR, 2, 1, ReadMode, UART8ISRBase> ;
    using FE = UART8_ISR_FE_Values<UART8::ISR, 1, 1, ReadMode, UART8ISRBase> ;
    using PE = UART8_ISR_PE_Values<UART8::ISR, 0, 1, ReadMode, UART8ISRBase> ;
    using FieldValues = UART8_ISR_PE_Values<UART8::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40007C1C, 32, ReadMode, UART8ISRBase, T...> ;

  struct UART8ICRBase {} ;

  struct ICR : public RegisterBase<0x40007C20, 32, WriteMode>
  {
    using WUCF = UART8_ICR_WUCF_Values<UART8::ICR, 20, 1, WriteMode, UART8ICRBase> ;
    using CMCF = UART8_ICR_CMCF_Values<UART8::ICR, 17, 1, WriteMode, UART8ICRBase> ;
    using UDRCF = UART8_ICR_UDRCF_Values<UART8::ICR, 13, 1, WriteMode, UART8ICRBase> ;
    using EOBCF = UART8_ICR_EOBCF_Values<UART8::ICR, 12, 1, WriteMode, UART8ICRBase> ;
    using RTOCF = UART8_ICR_RTOCF_Values<UART8::ICR, 11, 1, WriteMode, UART8ICRBase> ;
    using CTSCF = UART8_ICR_CTSCF_Values<UART8::ICR, 9, 1, WriteMode, UART8ICRBase> ;
    using LBDCF = UART8_ICR_LBDCF_Values<UART8::ICR, 8, 1, WriteMode, UART8ICRBase> ;
    using TCBGTC = UART8_ICR_TCBGTC_Values<UART8::ICR, 7, 1, WriteMode, UART8ICRBase> ;
    using TCCF = UART8_ICR_TCCF_Values<UART8::ICR, 6, 1, WriteMode, UART8ICRBase> ;
    using TXFECF = UART8_ICR_TXFECF_Values<UART8::ICR, 5, 1, WriteMode, UART8ICRBase> ;
    using IDLECF = UART8_ICR_IDLECF_Values<UART8::ICR, 4, 1, WriteMode, UART8ICRBase> ;
    using ORECF = UART8_ICR_ORECF_Values<UART8::ICR, 3, 1, WriteMode, UART8ICRBase> ;
    using NCF = UART8_ICR_NCF_Values<UART8::ICR, 2, 1, WriteMode, UART8ICRBase> ;
    using FECF = UART8_ICR_FECF_Values<UART8::ICR, 1, 1, WriteMode, UART8ICRBase> ;
    using PECF = UART8_ICR_PECF_Values<UART8::ICR, 0, 1, WriteMode, UART8ICRBase> ;
    using FieldValues = UART8_ICR_PECF_Values<UART8::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40007C20, 32, WriteMode, UART8ICRBase, T...> ;

  struct UART8RDRBase {} ;

  struct RDR : public RegisterBase<0x40007C24, 32, ReadMode>
  {
    using RDRField = UART8_RDR_RDR_Values<UART8::RDR, 0, 9, ReadMode, UART8RDRBase> ;
    using FieldValues = UART8_RDR_RDR_Values<UART8::RDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDRPack  = Register<0x40007C24, 32, ReadMode, UART8RDRBase, T...> ;

  struct UART8TDRBase {} ;

  struct TDR : public RegisterBase<0x40007C28, 32, ReadWriteMode>
  {
    using TDRField = UART8_TDR_TDR_Values<UART8::TDR, 0, 9, ReadWriteMode, UART8TDRBase> ;
    using FieldValues = UART8_TDR_TDR_Values<UART8::TDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TDRPack  = Register<0x40007C28, 32, ReadWriteMode, UART8TDRBase, T...> ;

  struct UART8PRESCBase {} ;

  struct PRESC : public RegisterBase<0x40007C2C, 32, ReadWriteMode>
  {
    using PRESCALER = UART8_PRESC_PRESCALER_Values<UART8::PRESC, 0, 4, ReadWriteMode, UART8PRESCBase> ;
    using FieldValues = UART8_PRESC_PRESCALER_Values<UART8::PRESC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRESCPack  = Register<0x40007C2C, 32, ReadWriteMode, UART8PRESCBase, T...> ;

} ;

#endif //#if !defined(UART8REGISTERS_HPP)
