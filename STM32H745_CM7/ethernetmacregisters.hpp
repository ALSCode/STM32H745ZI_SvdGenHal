/*******************************************************************************
* Filename      : ethernetmacregisters.hpp
*
* Details       : Ethernet: media access control (MAC). This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETMACREGISTERS_HPP)
#define ETHERNETMACREGISTERS_HPP

#include "ethernetmacfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Ethernet_MAC
{
  struct Ethernet_MACDMAMRBase {} ;

  struct DMAMR : public RegisterBase<0x40029000, 32, ReadWriteMode>
  {
    using SWR = Ethernet_MAC_DMAMR_SWR_Values<Ethernet_MAC::DMAMR, 0, 1, ReadWriteMode, Ethernet_MACDMAMRBase> ;
    using DA = Ethernet_MAC_DMAMR_DA_Values<Ethernet_MAC::DMAMR, 1, 1, ReadMode, Ethernet_MACDMAMRBase> ;
    using TXPR = Ethernet_MAC_DMAMR_TXPR_Values<Ethernet_MAC::DMAMR, 11, 1, ReadMode, Ethernet_MACDMAMRBase> ;
    using PR = Ethernet_MAC_DMAMR_PR_Values<Ethernet_MAC::DMAMR, 12, 3, ReadMode, Ethernet_MACDMAMRBase> ;
    using INTM = Ethernet_MAC_DMAMR_INTM_Values<Ethernet_MAC::DMAMR, 16, 1, ReadWriteMode, Ethernet_MACDMAMRBase> ;
    using FieldValues = Ethernet_MAC_DMAMR_INTM_Values<Ethernet_MAC::DMAMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAMRPack  = Register<0x40029000, 32, ReadWriteMode, Ethernet_MACDMAMRBase, T...> ;

  struct Ethernet_MACDMASBMRBase {} ;

  struct DMASBMR : public RegisterBase<0x40029004, 32, ReadWriteMode>
  {
    using FB = Ethernet_MAC_DMASBMR_FB_Values<Ethernet_MAC::DMASBMR, 0, 1, ReadWriteMode, Ethernet_MACDMASBMRBase> ;
    using AAL = Ethernet_MAC_DMASBMR_AAL_Values<Ethernet_MAC::DMASBMR, 12, 1, ReadWriteMode, Ethernet_MACDMASBMRBase> ;
    using MB = Ethernet_MAC_DMASBMR_MB_Values<Ethernet_MAC::DMASBMR, 14, 1, ReadMode, Ethernet_MACDMASBMRBase> ;
    using RB = Ethernet_MAC_DMASBMR_RB_Values<Ethernet_MAC::DMASBMR, 15, 1, ReadMode, Ethernet_MACDMASBMRBase> ;
    using FieldValues = Ethernet_MAC_DMASBMR_RB_Values<Ethernet_MAC::DMASBMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMASBMRPack  = Register<0x40029004, 32, ReadWriteMode, Ethernet_MACDMASBMRBase, T...> ;

  struct Ethernet_MACDMAISRBase {} ;

  struct DMAISR : public RegisterBase<0x40029008, 32, ReadMode>
  {
    using DC0IS = Ethernet_MAC_DMAISR_DC0IS_Values<Ethernet_MAC::DMAISR, 0, 1, ReadMode, Ethernet_MACDMAISRBase> ;
    using MTLIS = Ethernet_MAC_DMAISR_MTLIS_Values<Ethernet_MAC::DMAISR, 16, 1, ReadMode, Ethernet_MACDMAISRBase> ;
    using MACIS = Ethernet_MAC_DMAISR_MACIS_Values<Ethernet_MAC::DMAISR, 17, 1, ReadMode, Ethernet_MACDMAISRBase> ;
    using FieldValues = Ethernet_MAC_DMAISR_MACIS_Values<Ethernet_MAC::DMAISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMAISRPack  = Register<0x40029008, 32, ReadMode, Ethernet_MACDMAISRBase, T...> ;

  struct Ethernet_MACDMADSRBase {} ;

  struct DMADSR : public RegisterBase<0x4002900C, 32, ReadMode>
  {
    using AXWHSTS = Ethernet_MAC_DMADSR_AXWHSTS_Values<Ethernet_MAC::DMADSR, 0, 1, ReadMode, Ethernet_MACDMADSRBase> ;
    using RPS0 = Ethernet_MAC_DMADSR_RPS0_Values<Ethernet_MAC::DMADSR, 8, 4, ReadMode, Ethernet_MACDMADSRBase> ;
    using TPS0 = Ethernet_MAC_DMADSR_TPS0_Values<Ethernet_MAC::DMADSR, 12, 4, ReadMode, Ethernet_MACDMADSRBase> ;
    using FieldValues = Ethernet_MAC_DMADSR_TPS0_Values<Ethernet_MAC::DMADSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMADSRPack  = Register<0x4002900C, 32, ReadMode, Ethernet_MACDMADSRBase, T...> ;

  struct Ethernet_MACDMACCRBase {} ;

  struct DMACCR : public RegisterBase<0x40029100, 32, ReadWriteMode>
  {
    using MSS = Ethernet_MAC_DMACCR_MSS_Values<Ethernet_MAC::DMACCR, 0, 14, ReadWriteMode, Ethernet_MACDMACCRBase> ;
    using PBLX8 = Ethernet_MAC_DMACCR_PBLX8_Values<Ethernet_MAC::DMACCR, 16, 1, ReadWriteMode, Ethernet_MACDMACCRBase> ;
    using DSL = Ethernet_MAC_DMACCR_DSL_Values<Ethernet_MAC::DMACCR, 18, 3, ReadWriteMode, Ethernet_MACDMACCRBase> ;
    using FieldValues = Ethernet_MAC_DMACCR_DSL_Values<Ethernet_MAC::DMACCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACCRPack  = Register<0x40029100, 32, ReadWriteMode, Ethernet_MACDMACCRBase, T...> ;

  struct Ethernet_MACDMACTxCRBase {} ;

  struct DMACTxCR : public RegisterBase<0x40029104, 32, ReadWriteMode>
  {
    using ST = Ethernet_MAC_DMACTxCR_ST_Values<Ethernet_MAC::DMACTxCR, 0, 1, ReadWriteMode, Ethernet_MACDMACTxCRBase> ;
    using OSF = Ethernet_MAC_DMACTxCR_OSF_Values<Ethernet_MAC::DMACTxCR, 4, 1, ReadWriteMode, Ethernet_MACDMACTxCRBase> ;
    using TSE = Ethernet_MAC_DMACTxCR_TSE_Values<Ethernet_MAC::DMACTxCR, 12, 1, ReadWriteMode, Ethernet_MACDMACTxCRBase> ;
    using TXPBL = Ethernet_MAC_DMACTxCR_TXPBL_Values<Ethernet_MAC::DMACTxCR, 16, 6, ReadWriteMode, Ethernet_MACDMACTxCRBase> ;
    using FieldValues = Ethernet_MAC_DMACTxCR_TXPBL_Values<Ethernet_MAC::DMACTxCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACTxCRPack  = Register<0x40029104, 32, ReadWriteMode, Ethernet_MACDMACTxCRBase, T...> ;

  struct Ethernet_MACDMACRxCRBase {} ;

  struct DMACRxCR : public RegisterBase<0x40029108, 32, ReadWriteMode>
  {
    using SR = Ethernet_MAC_DMACRxCR_SR_Values<Ethernet_MAC::DMACRxCR, 0, 1, ReadWriteMode, Ethernet_MACDMACRxCRBase> ;
    using RBSZ = Ethernet_MAC_DMACRxCR_RBSZ_Values<Ethernet_MAC::DMACRxCR, 1, 14, ReadWriteMode, Ethernet_MACDMACRxCRBase> ;
    using RXPBL = Ethernet_MAC_DMACRxCR_RXPBL_Values<Ethernet_MAC::DMACRxCR, 16, 6, ReadWriteMode, Ethernet_MACDMACRxCRBase> ;
    using RPF = Ethernet_MAC_DMACRxCR_RPF_Values<Ethernet_MAC::DMACRxCR, 31, 1, ReadWriteMode, Ethernet_MACDMACRxCRBase> ;
    using FieldValues = Ethernet_MAC_DMACRxCR_RPF_Values<Ethernet_MAC::DMACRxCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRxCRPack  = Register<0x40029108, 32, ReadWriteMode, Ethernet_MACDMACRxCRBase, T...> ;

  struct Ethernet_MACDMACTxDLARBase {} ;

  struct DMACTxDLAR : public RegisterBase<0x40029114, 32, ReadWriteMode>
  {
    using TDESLA = Ethernet_MAC_DMACTxDLAR_TDESLA_Values<Ethernet_MAC::DMACTxDLAR, 2, 30, ReadWriteMode, Ethernet_MACDMACTxDLARBase> ;
    using FieldValues = Ethernet_MAC_DMACTxDLAR_TDESLA_Values<Ethernet_MAC::DMACTxDLAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACTxDLARPack  = Register<0x40029114, 32, ReadWriteMode, Ethernet_MACDMACTxDLARBase, T...> ;

  struct Ethernet_MACDMACRxDLARBase {} ;

  struct DMACRxDLAR : public RegisterBase<0x4002911C, 32, ReadWriteMode>
  {
    using RDESLA = Ethernet_MAC_DMACRxDLAR_RDESLA_Values<Ethernet_MAC::DMACRxDLAR, 2, 30, ReadWriteMode, Ethernet_MACDMACRxDLARBase> ;
    using FieldValues = Ethernet_MAC_DMACRxDLAR_RDESLA_Values<Ethernet_MAC::DMACRxDLAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRxDLARPack  = Register<0x4002911C, 32, ReadWriteMode, Ethernet_MACDMACRxDLARBase, T...> ;

  struct Ethernet_MACDMACTxDTPRBase {} ;

  struct DMACTxDTPR : public RegisterBase<0x40029120, 32, ReadWriteMode>
  {
    using TDT = Ethernet_MAC_DMACTxDTPR_TDT_Values<Ethernet_MAC::DMACTxDTPR, 2, 30, ReadWriteMode, Ethernet_MACDMACTxDTPRBase> ;
    using FieldValues = Ethernet_MAC_DMACTxDTPR_TDT_Values<Ethernet_MAC::DMACTxDTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACTxDTPRPack  = Register<0x40029120, 32, ReadWriteMode, Ethernet_MACDMACTxDTPRBase, T...> ;

  struct Ethernet_MACDMACRxDTPRBase {} ;

  struct DMACRxDTPR : public RegisterBase<0x40029128, 32, ReadWriteMode>
  {
    using RDT = Ethernet_MAC_DMACRxDTPR_RDT_Values<Ethernet_MAC::DMACRxDTPR, 2, 30, ReadWriteMode, Ethernet_MACDMACRxDTPRBase> ;
    using FieldValues = Ethernet_MAC_DMACRxDTPR_RDT_Values<Ethernet_MAC::DMACRxDTPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRxDTPRPack  = Register<0x40029128, 32, ReadWriteMode, Ethernet_MACDMACRxDTPRBase, T...> ;

  struct Ethernet_MACDMACTxRLRBase {} ;

  struct DMACTxRLR : public RegisterBase<0x4002912C, 32, ReadWriteMode>
  {
    using TDRL = Ethernet_MAC_DMACTxRLR_TDRL_Values<Ethernet_MAC::DMACTxRLR, 0, 10, ReadWriteMode, Ethernet_MACDMACTxRLRBase> ;
    using FieldValues = Ethernet_MAC_DMACTxRLR_TDRL_Values<Ethernet_MAC::DMACTxRLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACTxRLRPack  = Register<0x4002912C, 32, ReadWriteMode, Ethernet_MACDMACTxRLRBase, T...> ;

  struct Ethernet_MACDMACRxRLRBase {} ;

  struct DMACRxRLR : public RegisterBase<0x40029130, 32, ReadWriteMode>
  {
    using RDRL = Ethernet_MAC_DMACRxRLR_RDRL_Values<Ethernet_MAC::DMACRxRLR, 0, 10, ReadWriteMode, Ethernet_MACDMACRxRLRBase> ;
    using FieldValues = Ethernet_MAC_DMACRxRLR_RDRL_Values<Ethernet_MAC::DMACRxRLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRxRLRPack  = Register<0x40029130, 32, ReadWriteMode, Ethernet_MACDMACRxRLRBase, T...> ;

  struct Ethernet_MACDMACIERBase {} ;

  struct DMACIER : public RegisterBase<0x40029134, 32, ReadWriteMode>
  {
    using TIE = Ethernet_MAC_DMACIER_TIE_Values<Ethernet_MAC::DMACIER, 0, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using TXSE = Ethernet_MAC_DMACIER_TXSE_Values<Ethernet_MAC::DMACIER, 1, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using TBUE = Ethernet_MAC_DMACIER_TBUE_Values<Ethernet_MAC::DMACIER, 2, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using RIE = Ethernet_MAC_DMACIER_RIE_Values<Ethernet_MAC::DMACIER, 6, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using RBUE = Ethernet_MAC_DMACIER_RBUE_Values<Ethernet_MAC::DMACIER, 7, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using RSE = Ethernet_MAC_DMACIER_RSE_Values<Ethernet_MAC::DMACIER, 8, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using RWTE = Ethernet_MAC_DMACIER_RWTE_Values<Ethernet_MAC::DMACIER, 9, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using ETIE = Ethernet_MAC_DMACIER_ETIE_Values<Ethernet_MAC::DMACIER, 10, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using ERIE = Ethernet_MAC_DMACIER_ERIE_Values<Ethernet_MAC::DMACIER, 11, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using FBEE = Ethernet_MAC_DMACIER_FBEE_Values<Ethernet_MAC::DMACIER, 12, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using CDEE = Ethernet_MAC_DMACIER_CDEE_Values<Ethernet_MAC::DMACIER, 13, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using AIE = Ethernet_MAC_DMACIER_AIE_Values<Ethernet_MAC::DMACIER, 14, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using NIE = Ethernet_MAC_DMACIER_NIE_Values<Ethernet_MAC::DMACIER, 15, 1, ReadWriteMode, Ethernet_MACDMACIERBase> ;
    using FieldValues = Ethernet_MAC_DMACIER_NIE_Values<Ethernet_MAC::DMACIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACIERPack  = Register<0x40029134, 32, ReadWriteMode, Ethernet_MACDMACIERBase, T...> ;

  struct Ethernet_MACDMACRxIWTRBase {} ;

  struct DMACRxIWTR : public RegisterBase<0x40029138, 32, ReadWriteMode>
  {
    using RWT = Ethernet_MAC_DMACRxIWTR_RWT_Values<Ethernet_MAC::DMACRxIWTR, 0, 8, ReadWriteMode, Ethernet_MACDMACRxIWTRBase> ;
    using FieldValues = Ethernet_MAC_DMACRxIWTR_RWT_Values<Ethernet_MAC::DMACRxIWTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACRxIWTRPack  = Register<0x40029138, 32, ReadWriteMode, Ethernet_MACDMACRxIWTRBase, T...> ;

  struct Ethernet_MACDMACCATxDRBase {} ;

  struct DMACCATxDR : public RegisterBase<0x40029144, 32, ReadMode>
  {
    using CURTDESAPTR = Ethernet_MAC_DMACCATxDR_CURTDESAPTR_Values<Ethernet_MAC::DMACCATxDR, 0, 32, ReadMode, Ethernet_MACDMACCATxDRBase> ;
    using FieldValues = Ethernet_MAC_DMACCATxDR_CURTDESAPTR_Values<Ethernet_MAC::DMACCATxDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACCATxDRPack  = Register<0x40029144, 32, ReadMode, Ethernet_MACDMACCATxDRBase, T...> ;

  struct Ethernet_MACDMACCARxDRBase {} ;

  struct DMACCARxDR : public RegisterBase<0x4002914C, 32, ReadMode>
  {
    using CURRDESAPTR = Ethernet_MAC_DMACCARxDR_CURRDESAPTR_Values<Ethernet_MAC::DMACCARxDR, 0, 32, ReadMode, Ethernet_MACDMACCARxDRBase> ;
    using FieldValues = Ethernet_MAC_DMACCARxDR_CURRDESAPTR_Values<Ethernet_MAC::DMACCARxDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACCARxDRPack  = Register<0x4002914C, 32, ReadMode, Ethernet_MACDMACCARxDRBase, T...> ;

  struct Ethernet_MACDMACCATxBRBase {} ;

  struct DMACCATxBR : public RegisterBase<0x40029154, 32, ReadMode>
  {
    using CURTBUFAPTR = Ethernet_MAC_DMACCATxBR_CURTBUFAPTR_Values<Ethernet_MAC::DMACCATxBR, 0, 32, ReadMode, Ethernet_MACDMACCATxBRBase> ;
    using FieldValues = Ethernet_MAC_DMACCATxBR_CURTBUFAPTR_Values<Ethernet_MAC::DMACCATxBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACCATxBRPack  = Register<0x40029154, 32, ReadMode, Ethernet_MACDMACCATxBRBase, T...> ;

  struct Ethernet_MACDMACCARxBRBase {} ;

  struct DMACCARxBR : public RegisterBase<0x4002915C, 32, ReadMode>
  {
    using CURRBUFAPTR = Ethernet_MAC_DMACCARxBR_CURRBUFAPTR_Values<Ethernet_MAC::DMACCARxBR, 0, 32, ReadMode, Ethernet_MACDMACCARxBRBase> ;
    using FieldValues = Ethernet_MAC_DMACCARxBR_CURRBUFAPTR_Values<Ethernet_MAC::DMACCARxBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACCARxBRPack  = Register<0x4002915C, 32, ReadMode, Ethernet_MACDMACCARxBRBase, T...> ;

  struct Ethernet_MACDMACSRBase {} ;

  struct DMACSR : public RegisterBase<0x40029160, 32, ReadWriteMode>
  {
    using TI = Ethernet_MAC_DMACSR_TI_Values<Ethernet_MAC::DMACSR, 0, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using TPS = Ethernet_MAC_DMACSR_TPS_Values<Ethernet_MAC::DMACSR, 1, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using TBU = Ethernet_MAC_DMACSR_TBU_Values<Ethernet_MAC::DMACSR, 2, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using RI = Ethernet_MAC_DMACSR_RI_Values<Ethernet_MAC::DMACSR, 6, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using RBU = Ethernet_MAC_DMACSR_RBU_Values<Ethernet_MAC::DMACSR, 7, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using RPS = Ethernet_MAC_DMACSR_RPS_Values<Ethernet_MAC::DMACSR, 8, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using RWT = Ethernet_MAC_DMACSR_RWT_Values<Ethernet_MAC::DMACSR, 9, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using ET = Ethernet_MAC_DMACSR_ET_Values<Ethernet_MAC::DMACSR, 10, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using ER = Ethernet_MAC_DMACSR_ER_Values<Ethernet_MAC::DMACSR, 11, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using FBE = Ethernet_MAC_DMACSR_FBE_Values<Ethernet_MAC::DMACSR, 12, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using CDE = Ethernet_MAC_DMACSR_CDE_Values<Ethernet_MAC::DMACSR, 13, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using AIS = Ethernet_MAC_DMACSR_AIS_Values<Ethernet_MAC::DMACSR, 14, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using NIS = Ethernet_MAC_DMACSR_NIS_Values<Ethernet_MAC::DMACSR, 15, 1, ReadWriteMode, Ethernet_MACDMACSRBase> ;
    using TEB = Ethernet_MAC_DMACSR_TEB_Values<Ethernet_MAC::DMACSR, 16, 3, ReadMode, Ethernet_MACDMACSRBase> ;
    using REB = Ethernet_MAC_DMACSR_REB_Values<Ethernet_MAC::DMACSR, 19, 3, ReadMode, Ethernet_MACDMACSRBase> ;
    using FieldValues = Ethernet_MAC_DMACSR_REB_Values<Ethernet_MAC::DMACSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACSRPack  = Register<0x40029160, 32, ReadWriteMode, Ethernet_MACDMACSRBase, T...> ;

  struct Ethernet_MACDMACMFCRBase {} ;

  struct DMACMFCR : public RegisterBase<0x4002916C, 32, ReadMode>
  {
    using MFC = Ethernet_MAC_DMACMFCR_MFC_Values<Ethernet_MAC::DMACMFCR, 0, 11, ReadMode, Ethernet_MACDMACMFCRBase> ;
    using MFCO = Ethernet_MAC_DMACMFCR_MFCO_Values<Ethernet_MAC::DMACMFCR, 15, 1, ReadMode, Ethernet_MACDMACMFCRBase> ;
    using FieldValues = Ethernet_MAC_DMACMFCR_MFCO_Values<Ethernet_MAC::DMACMFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMACMFCRPack  = Register<0x4002916C, 32, ReadMode, Ethernet_MACDMACMFCRBase, T...> ;

  struct Ethernet_MACMTLOMRBase {} ;

  struct MTLOMR : public RegisterBase<0x40028C00, 32, ReadWriteMode>
  {
    using DTXSTS = Ethernet_MAC_MTLOMR_DTXSTS_Values<Ethernet_MAC::MTLOMR, 1, 1, ReadWriteMode, Ethernet_MACMTLOMRBase> ;
    using CNTPRST = Ethernet_MAC_MTLOMR_CNTPRST_Values<Ethernet_MAC::MTLOMR, 8, 1, ReadWriteMode, Ethernet_MACMTLOMRBase> ;
    using CNTCLR = Ethernet_MAC_MTLOMR_CNTCLR_Values<Ethernet_MAC::MTLOMR, 9, 1, ReadWriteMode, Ethernet_MACMTLOMRBase> ;
    using FieldValues = Ethernet_MAC_MTLOMR_CNTCLR_Values<Ethernet_MAC::MTLOMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLOMRPack  = Register<0x40028C00, 32, ReadWriteMode, Ethernet_MACMTLOMRBase, T...> ;

  struct Ethernet_MACMTLISRBase {} ;

  struct MTLISR : public RegisterBase<0x40028C20, 32, ReadMode>
  {
    using Q0IS = Ethernet_MAC_MTLISR_Q0IS_Values<Ethernet_MAC::MTLISR, 0, 1, ReadMode, Ethernet_MACMTLISRBase> ;
    using FieldValues = Ethernet_MAC_MTLISR_Q0IS_Values<Ethernet_MAC::MTLISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLISRPack  = Register<0x40028C20, 32, ReadMode, Ethernet_MACMTLISRBase, T...> ;

  struct Ethernet_MACMTLTxQOMRBase {} ;

  struct MTLTxQOMR : public RegisterBase<0x40028D00, 32, ReadWriteMode>
  {
    using FTQ = Ethernet_MAC_MTLTxQOMR_FTQ_Values<Ethernet_MAC::MTLTxQOMR, 0, 1, ReadWriteMode, Ethernet_MACMTLTxQOMRBase> ;
    using TSF = Ethernet_MAC_MTLTxQOMR_TSF_Values<Ethernet_MAC::MTLTxQOMR, 1, 1, ReadWriteMode, Ethernet_MACMTLTxQOMRBase> ;
    using TXQEN = Ethernet_MAC_MTLTxQOMR_TXQEN_Values<Ethernet_MAC::MTLTxQOMR, 2, 2, ReadMode, Ethernet_MACMTLTxQOMRBase> ;
    using TTC = Ethernet_MAC_MTLTxQOMR_TTC_Values<Ethernet_MAC::MTLTxQOMR, 4, 3, ReadWriteMode, Ethernet_MACMTLTxQOMRBase> ;
    using TQS = Ethernet_MAC_MTLTxQOMR_TQS_Values<Ethernet_MAC::MTLTxQOMR, 16, 9, ReadWriteMode, Ethernet_MACMTLTxQOMRBase> ;
    using FieldValues = Ethernet_MAC_MTLTxQOMR_TQS_Values<Ethernet_MAC::MTLTxQOMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLTxQOMRPack  = Register<0x40028D00, 32, ReadWriteMode, Ethernet_MACMTLTxQOMRBase, T...> ;

  struct Ethernet_MACMTLTxQURBase {} ;

  struct MTLTxQUR : public RegisterBase<0x40028D04, 32, ReadMode>
  {
    using UFFRMCNT = Ethernet_MAC_MTLTxQUR_UFFRMCNT_Values<Ethernet_MAC::MTLTxQUR, 0, 11, ReadMode, Ethernet_MACMTLTxQURBase> ;
    using UFCNTOVF = Ethernet_MAC_MTLTxQUR_UFCNTOVF_Values<Ethernet_MAC::MTLTxQUR, 11, 1, ReadMode, Ethernet_MACMTLTxQURBase> ;
    using FieldValues = Ethernet_MAC_MTLTxQUR_UFCNTOVF_Values<Ethernet_MAC::MTLTxQUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLTxQURPack  = Register<0x40028D04, 32, ReadMode, Ethernet_MACMTLTxQURBase, T...> ;

  struct Ethernet_MACMTLTxQDRBase {} ;

  struct MTLTxQDR : public RegisterBase<0x40028D08, 32, ReadMode>
  {
    using TXQPAUSED = Ethernet_MAC_MTLTxQDR_TXQPAUSED_Values<Ethernet_MAC::MTLTxQDR, 0, 1, ReadMode, Ethernet_MACMTLTxQDRBase> ;
    using TRCSTS = Ethernet_MAC_MTLTxQDR_TRCSTS_Values<Ethernet_MAC::MTLTxQDR, 1, 2, ReadMode, Ethernet_MACMTLTxQDRBase> ;
    using TWCSTS = Ethernet_MAC_MTLTxQDR_TWCSTS_Values<Ethernet_MAC::MTLTxQDR, 3, 1, ReadMode, Ethernet_MACMTLTxQDRBase> ;
    using TXQSTS = Ethernet_MAC_MTLTxQDR_TXQSTS_Values<Ethernet_MAC::MTLTxQDR, 4, 1, ReadMode, Ethernet_MACMTLTxQDRBase> ;
    using TXSTSFSTS = Ethernet_MAC_MTLTxQDR_TXSTSFSTS_Values<Ethernet_MAC::MTLTxQDR, 5, 1, ReadMode, Ethernet_MACMTLTxQDRBase> ;
    using PTXQ = Ethernet_MAC_MTLTxQDR_PTXQ_Values<Ethernet_MAC::MTLTxQDR, 16, 3, ReadMode, Ethernet_MACMTLTxQDRBase> ;
    using STXSTSF = Ethernet_MAC_MTLTxQDR_STXSTSF_Values<Ethernet_MAC::MTLTxQDR, 20, 3, ReadMode, Ethernet_MACMTLTxQDRBase> ;
    using FieldValues = Ethernet_MAC_MTLTxQDR_STXSTSF_Values<Ethernet_MAC::MTLTxQDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLTxQDRPack  = Register<0x40028D08, 32, ReadMode, Ethernet_MACMTLTxQDRBase, T...> ;

  struct Ethernet_MACMTLQICSRBase {} ;

  struct MTLQICSR : public RegisterBase<0x40028D2C, 32, ReadWriteMode>
  {
    using TXUNFIS = Ethernet_MAC_MTLQICSR_TXUNFIS_Values<Ethernet_MAC::MTLQICSR, 0, 1, ReadWriteMode, Ethernet_MACMTLQICSRBase> ;
    using TXUIE = Ethernet_MAC_MTLQICSR_TXUIE_Values<Ethernet_MAC::MTLQICSR, 8, 1, ReadWriteMode, Ethernet_MACMTLQICSRBase> ;
    using RXOVFIS = Ethernet_MAC_MTLQICSR_RXOVFIS_Values<Ethernet_MAC::MTLQICSR, 16, 1, ReadWriteMode, Ethernet_MACMTLQICSRBase> ;
    using RXOIE = Ethernet_MAC_MTLQICSR_RXOIE_Values<Ethernet_MAC::MTLQICSR, 24, 1, ReadWriteMode, Ethernet_MACMTLQICSRBase> ;
    using FieldValues = Ethernet_MAC_MTLQICSR_RXOIE_Values<Ethernet_MAC::MTLQICSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLQICSRPack  = Register<0x40028D2C, 32, ReadWriteMode, Ethernet_MACMTLQICSRBase, T...> ;

  struct Ethernet_MACMTLRxQOMRBase {} ;

  struct MTLRxQOMR : public RegisterBase<0x40028D30, 32, ReadWriteMode>
  {
    using RTC = Ethernet_MAC_MTLRxQOMR_RTC_Values<Ethernet_MAC::MTLRxQOMR, 0, 2, ReadWriteMode, Ethernet_MACMTLRxQOMRBase> ;
    using FUP = Ethernet_MAC_MTLRxQOMR_FUP_Values<Ethernet_MAC::MTLRxQOMR, 3, 1, ReadWriteMode, Ethernet_MACMTLRxQOMRBase> ;
    using FEP = Ethernet_MAC_MTLRxQOMR_FEP_Values<Ethernet_MAC::MTLRxQOMR, 4, 1, ReadWriteMode, Ethernet_MACMTLRxQOMRBase> ;
    using RSF = Ethernet_MAC_MTLRxQOMR_RSF_Values<Ethernet_MAC::MTLRxQOMR, 5, 1, ReadWriteMode, Ethernet_MACMTLRxQOMRBase> ;
    using DIS_TCP_EF = Ethernet_MAC_MTLRxQOMR_DIS_TCP_EF_Values<Ethernet_MAC::MTLRxQOMR, 6, 1, ReadWriteMode, Ethernet_MACMTLRxQOMRBase> ;
    using EHFC = Ethernet_MAC_MTLRxQOMR_EHFC_Values<Ethernet_MAC::MTLRxQOMR, 7, 1, ReadWriteMode, Ethernet_MACMTLRxQOMRBase> ;
    using RFA = Ethernet_MAC_MTLRxQOMR_RFA_Values<Ethernet_MAC::MTLRxQOMR, 8, 3, ReadWriteMode, Ethernet_MACMTLRxQOMRBase> ;
    using RFD = Ethernet_MAC_MTLRxQOMR_RFD_Values<Ethernet_MAC::MTLRxQOMR, 14, 3, ReadWriteMode, Ethernet_MACMTLRxQOMRBase> ;
    using RQS = Ethernet_MAC_MTLRxQOMR_RQS_Values<Ethernet_MAC::MTLRxQOMR, 20, 3, ReadMode, Ethernet_MACMTLRxQOMRBase> ;
    using FieldValues = Ethernet_MAC_MTLRxQOMR_RQS_Values<Ethernet_MAC::MTLRxQOMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLRxQOMRPack  = Register<0x40028D30, 32, ReadWriteMode, Ethernet_MACMTLRxQOMRBase, T...> ;

  struct Ethernet_MACMTLRxQMPOCRBase {} ;

  struct MTLRxQMPOCR : public RegisterBase<0x40028D34, 32, ReadMode>
  {
    using OVFPKTCNT = Ethernet_MAC_MTLRxQMPOCR_OVFPKTCNT_Values<Ethernet_MAC::MTLRxQMPOCR, 0, 11, ReadMode, Ethernet_MACMTLRxQMPOCRBase> ;
    using OVFCNTOVF = Ethernet_MAC_MTLRxQMPOCR_OVFCNTOVF_Values<Ethernet_MAC::MTLRxQMPOCR, 11, 1, ReadMode, Ethernet_MACMTLRxQMPOCRBase> ;
    using MISPKTCNT = Ethernet_MAC_MTLRxQMPOCR_MISPKTCNT_Values<Ethernet_MAC::MTLRxQMPOCR, 16, 11, ReadMode, Ethernet_MACMTLRxQMPOCRBase> ;
    using MISCNTOVF = Ethernet_MAC_MTLRxQMPOCR_MISCNTOVF_Values<Ethernet_MAC::MTLRxQMPOCR, 27, 1, ReadMode, Ethernet_MACMTLRxQMPOCRBase> ;
    using FieldValues = Ethernet_MAC_MTLRxQMPOCR_MISCNTOVF_Values<Ethernet_MAC::MTLRxQMPOCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLRxQMPOCRPack  = Register<0x40028D34, 32, ReadMode, Ethernet_MACMTLRxQMPOCRBase, T...> ;

  struct Ethernet_MACMTLRxQDRBase {} ;

  struct MTLRxQDR : public RegisterBase<0x40028D38, 32, ReadMode>
  {
    using RWCSTS = Ethernet_MAC_MTLRxQDR_RWCSTS_Values<Ethernet_MAC::MTLRxQDR, 0, 1, ReadMode, Ethernet_MACMTLRxQDRBase> ;
    using RRCSTS = Ethernet_MAC_MTLRxQDR_RRCSTS_Values<Ethernet_MAC::MTLRxQDR, 1, 2, ReadMode, Ethernet_MACMTLRxQDRBase> ;
    using RXQSTS = Ethernet_MAC_MTLRxQDR_RXQSTS_Values<Ethernet_MAC::MTLRxQDR, 4, 2, ReadMode, Ethernet_MACMTLRxQDRBase> ;
    using PRXQ = Ethernet_MAC_MTLRxQDR_PRXQ_Values<Ethernet_MAC::MTLRxQDR, 16, 14, ReadMode, Ethernet_MACMTLRxQDRBase> ;
    using FieldValues = Ethernet_MAC_MTLRxQDR_PRXQ_Values<Ethernet_MAC::MTLRxQDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MTLRxQDRPack  = Register<0x40028D38, 32, ReadMode, Ethernet_MACMTLRxQDRBase, T...> ;

  struct Ethernet_MACMACCRBase {} ;

  struct MACCR : public RegisterBase<0x40028000, 32, ReadWriteMode>
  {
    using RE = Ethernet_MAC_MACCR_RE_Values<Ethernet_MAC::MACCR, 0, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using TE = Ethernet_MAC_MACCR_TE_Values<Ethernet_MAC::MACCR, 1, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using PRELEN = Ethernet_MAC_MACCR_PRELEN_Values<Ethernet_MAC::MACCR, 2, 2, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using DC = Ethernet_MAC_MACCR_DC_Values<Ethernet_MAC::MACCR, 4, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using BL = Ethernet_MAC_MACCR_BL_Values<Ethernet_MAC::MACCR, 5, 2, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using DR = Ethernet_MAC_MACCR_DR_Values<Ethernet_MAC::MACCR, 8, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using DCRS = Ethernet_MAC_MACCR_DCRS_Values<Ethernet_MAC::MACCR, 9, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using DO = Ethernet_MAC_MACCR_DO_Values<Ethernet_MAC::MACCR, 10, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using ECRSFD = Ethernet_MAC_MACCR_ECRSFD_Values<Ethernet_MAC::MACCR, 11, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using LM = Ethernet_MAC_MACCR_LM_Values<Ethernet_MAC::MACCR, 12, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using DM = Ethernet_MAC_MACCR_DM_Values<Ethernet_MAC::MACCR, 13, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using FES = Ethernet_MAC_MACCR_FES_Values<Ethernet_MAC::MACCR, 14, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using JE = Ethernet_MAC_MACCR_JE_Values<Ethernet_MAC::MACCR, 16, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using JD = Ethernet_MAC_MACCR_JD_Values<Ethernet_MAC::MACCR, 17, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using WD = Ethernet_MAC_MACCR_WD_Values<Ethernet_MAC::MACCR, 19, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using ACS = Ethernet_MAC_MACCR_ACS_Values<Ethernet_MAC::MACCR, 20, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using CST = Ethernet_MAC_MACCR_CST_Values<Ethernet_MAC::MACCR, 21, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using S2KP = Ethernet_MAC_MACCR_S2KP_Values<Ethernet_MAC::MACCR, 22, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using GPSLCE = Ethernet_MAC_MACCR_GPSLCE_Values<Ethernet_MAC::MACCR, 23, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using IPG = Ethernet_MAC_MACCR_IPG_Values<Ethernet_MAC::MACCR, 24, 3, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using IPC = Ethernet_MAC_MACCR_IPC_Values<Ethernet_MAC::MACCR, 27, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using SARC = Ethernet_MAC_MACCR_SARC_Values<Ethernet_MAC::MACCR, 28, 3, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using ARPEN = Ethernet_MAC_MACCR_ARPEN_Values<Ethernet_MAC::MACCR, 31, 1, ReadWriteMode, Ethernet_MACMACCRBase> ;
    using FieldValues = Ethernet_MAC_MACCR_ARPEN_Values<Ethernet_MAC::MACCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACCRPack  = Register<0x40028000, 32, ReadWriteMode, Ethernet_MACMACCRBase, T...> ;

  struct Ethernet_MACMACECRBase {} ;

  struct MACECR : public RegisterBase<0x40028004, 32, ReadWriteMode>
  {
    using GPSL = Ethernet_MAC_MACECR_GPSL_Values<Ethernet_MAC::MACECR, 0, 14, ReadWriteMode, Ethernet_MACMACECRBase> ;
    using DCRCC = Ethernet_MAC_MACECR_DCRCC_Values<Ethernet_MAC::MACECR, 16, 1, ReadWriteMode, Ethernet_MACMACECRBase> ;
    using SPEN = Ethernet_MAC_MACECR_SPEN_Values<Ethernet_MAC::MACECR, 17, 1, ReadWriteMode, Ethernet_MACMACECRBase> ;
    using USP = Ethernet_MAC_MACECR_USP_Values<Ethernet_MAC::MACECR, 18, 1, ReadWriteMode, Ethernet_MACMACECRBase> ;
    using EIPGEN = Ethernet_MAC_MACECR_EIPGEN_Values<Ethernet_MAC::MACECR, 24, 1, ReadWriteMode, Ethernet_MACMACECRBase> ;
    using EIPG = Ethernet_MAC_MACECR_EIPG_Values<Ethernet_MAC::MACECR, 25, 5, ReadWriteMode, Ethernet_MACMACECRBase> ;
    using FieldValues = Ethernet_MAC_MACECR_EIPG_Values<Ethernet_MAC::MACECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACECRPack  = Register<0x40028004, 32, ReadWriteMode, Ethernet_MACMACECRBase, T...> ;

  struct Ethernet_MACMACPFRBase {} ;

  struct MACPFR : public RegisterBase<0x40028008, 32, ReadWriteMode>
  {
    using PR = Ethernet_MAC_MACPFR_PR_Values<Ethernet_MAC::MACPFR, 0, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using HUC = Ethernet_MAC_MACPFR_HUC_Values<Ethernet_MAC::MACPFR, 1, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using HMC = Ethernet_MAC_MACPFR_HMC_Values<Ethernet_MAC::MACPFR, 2, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using DAIF = Ethernet_MAC_MACPFR_DAIF_Values<Ethernet_MAC::MACPFR, 3, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using PM = Ethernet_MAC_MACPFR_PM_Values<Ethernet_MAC::MACPFR, 4, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using DBF = Ethernet_MAC_MACPFR_DBF_Values<Ethernet_MAC::MACPFR, 5, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using PCF = Ethernet_MAC_MACPFR_PCF_Values<Ethernet_MAC::MACPFR, 6, 2, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using SAIF = Ethernet_MAC_MACPFR_SAIF_Values<Ethernet_MAC::MACPFR, 8, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using SAF = Ethernet_MAC_MACPFR_SAF_Values<Ethernet_MAC::MACPFR, 9, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using HPF = Ethernet_MAC_MACPFR_HPF_Values<Ethernet_MAC::MACPFR, 10, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using VTFE = Ethernet_MAC_MACPFR_VTFE_Values<Ethernet_MAC::MACPFR, 16, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using IPFE = Ethernet_MAC_MACPFR_IPFE_Values<Ethernet_MAC::MACPFR, 20, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using DNTU = Ethernet_MAC_MACPFR_DNTU_Values<Ethernet_MAC::MACPFR, 21, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using RA = Ethernet_MAC_MACPFR_RA_Values<Ethernet_MAC::MACPFR, 31, 1, ReadWriteMode, Ethernet_MACMACPFRBase> ;
    using FieldValues = Ethernet_MAC_MACPFR_RA_Values<Ethernet_MAC::MACPFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPFRPack  = Register<0x40028008, 32, ReadWriteMode, Ethernet_MACMACPFRBase, T...> ;

  struct Ethernet_MACMACWTRBase {} ;

  struct MACWTR : public RegisterBase<0x4002800C, 32, ReadWriteMode>
  {
    using WTO = Ethernet_MAC_MACWTR_WTO_Values<Ethernet_MAC::MACWTR, 0, 4, ReadWriteMode, Ethernet_MACMACWTRBase> ;
    using PWE = Ethernet_MAC_MACWTR_PWE_Values<Ethernet_MAC::MACWTR, 8, 1, ReadWriteMode, Ethernet_MACMACWTRBase> ;
    using FieldValues = Ethernet_MAC_MACWTR_PWE_Values<Ethernet_MAC::MACWTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACWTRPack  = Register<0x4002800C, 32, ReadWriteMode, Ethernet_MACMACWTRBase, T...> ;

  struct Ethernet_MACMACHT0RBase {} ;

  struct MACHT0R : public RegisterBase<0x40028010, 32, ReadWriteMode>
  {
    using HT31T0 = Ethernet_MAC_MACHT0R_HT31T0_Values<Ethernet_MAC::MACHT0R, 0, 32, ReadWriteMode, Ethernet_MACMACHT0RBase> ;
    using FieldValues = Ethernet_MAC_MACHT0R_HT31T0_Values<Ethernet_MAC::MACHT0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACHT0RPack  = Register<0x40028010, 32, ReadWriteMode, Ethernet_MACMACHT0RBase, T...> ;

  struct Ethernet_MACMACHT1RBase {} ;

  struct MACHT1R : public RegisterBase<0x40028014, 32, ReadWriteMode>
  {
    using HT63T32 = Ethernet_MAC_MACHT1R_HT63T32_Values<Ethernet_MAC::MACHT1R, 0, 32, ReadWriteMode, Ethernet_MACMACHT1RBase> ;
    using FieldValues = Ethernet_MAC_MACHT1R_HT63T32_Values<Ethernet_MAC::MACHT1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACHT1RPack  = Register<0x40028014, 32, ReadWriteMode, Ethernet_MACMACHT1RBase, T...> ;

  struct Ethernet_MACMACVTRBase {} ;

  struct MACVTR : public RegisterBase<0x40028050, 32, ReadWriteMode>
  {
    using VL = Ethernet_MAC_MACVTR_VL_Values<Ethernet_MAC::MACVTR, 0, 16, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using ETV = Ethernet_MAC_MACVTR_ETV_Values<Ethernet_MAC::MACVTR, 16, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using VTIM = Ethernet_MAC_MACVTR_VTIM_Values<Ethernet_MAC::MACVTR, 17, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using ESVL = Ethernet_MAC_MACVTR_ESVL_Values<Ethernet_MAC::MACVTR, 18, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using ERSVLM = Ethernet_MAC_MACVTR_ERSVLM_Values<Ethernet_MAC::MACVTR, 19, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using DOVLTC = Ethernet_MAC_MACVTR_DOVLTC_Values<Ethernet_MAC::MACVTR, 20, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using EVLS = Ethernet_MAC_MACVTR_EVLS_Values<Ethernet_MAC::MACVTR, 21, 2, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using EVLRXS = Ethernet_MAC_MACVTR_EVLRXS_Values<Ethernet_MAC::MACVTR, 24, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using VTHM = Ethernet_MAC_MACVTR_VTHM_Values<Ethernet_MAC::MACVTR, 25, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using EDVLP = Ethernet_MAC_MACVTR_EDVLP_Values<Ethernet_MAC::MACVTR, 26, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using ERIVLT = Ethernet_MAC_MACVTR_ERIVLT_Values<Ethernet_MAC::MACVTR, 27, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using EIVLS = Ethernet_MAC_MACVTR_EIVLS_Values<Ethernet_MAC::MACVTR, 28, 2, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using EIVLRXS = Ethernet_MAC_MACVTR_EIVLRXS_Values<Ethernet_MAC::MACVTR, 31, 1, ReadWriteMode, Ethernet_MACMACVTRBase> ;
    using FieldValues = Ethernet_MAC_MACVTR_EIVLRXS_Values<Ethernet_MAC::MACVTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACVTRPack  = Register<0x40028050, 32, ReadWriteMode, Ethernet_MACMACVTRBase, T...> ;

  struct Ethernet_MACMACVHTRBase {} ;

  struct MACVHTR : public RegisterBase<0x40028058, 32, ReadWriteMode>
  {
    using VLHT = Ethernet_MAC_MACVHTR_VLHT_Values<Ethernet_MAC::MACVHTR, 0, 16, ReadWriteMode, Ethernet_MACMACVHTRBase> ;
    using FieldValues = Ethernet_MAC_MACVHTR_VLHT_Values<Ethernet_MAC::MACVHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACVHTRPack  = Register<0x40028058, 32, ReadWriteMode, Ethernet_MACMACVHTRBase, T...> ;

  struct Ethernet_MACMACVIRBase {} ;

  struct MACVIR : public RegisterBase<0x40028060, 32, ReadWriteMode>
  {
    using VLT = Ethernet_MAC_MACVIR_VLT_Values<Ethernet_MAC::MACVIR, 0, 16, ReadWriteMode, Ethernet_MACMACVIRBase> ;
    using VLC = Ethernet_MAC_MACVIR_VLC_Values<Ethernet_MAC::MACVIR, 16, 2, ReadWriteMode, Ethernet_MACMACVIRBase> ;
    using VLP = Ethernet_MAC_MACVIR_VLP_Values<Ethernet_MAC::MACVIR, 18, 1, ReadWriteMode, Ethernet_MACMACVIRBase> ;
    using CSVL = Ethernet_MAC_MACVIR_CSVL_Values<Ethernet_MAC::MACVIR, 19, 1, ReadWriteMode, Ethernet_MACMACVIRBase> ;
    using VLTI = Ethernet_MAC_MACVIR_VLTI_Values<Ethernet_MAC::MACVIR, 20, 1, ReadWriteMode, Ethernet_MACMACVIRBase> ;
    using FieldValues = Ethernet_MAC_MACVIR_VLTI_Values<Ethernet_MAC::MACVIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACVIRPack  = Register<0x40028060, 32, ReadWriteMode, Ethernet_MACMACVIRBase, T...> ;

  struct Ethernet_MACMACIVIRBase {} ;

  struct MACIVIR : public RegisterBase<0x40028064, 32, ReadWriteMode>
  {
    using VLT = Ethernet_MAC_MACIVIR_VLT_Values<Ethernet_MAC::MACIVIR, 0, 16, ReadWriteMode, Ethernet_MACMACIVIRBase> ;
    using VLC = Ethernet_MAC_MACIVIR_VLC_Values<Ethernet_MAC::MACIVIR, 16, 2, ReadWriteMode, Ethernet_MACMACIVIRBase> ;
    using VLP = Ethernet_MAC_MACIVIR_VLP_Values<Ethernet_MAC::MACIVIR, 18, 1, ReadWriteMode, Ethernet_MACMACIVIRBase> ;
    using CSVL = Ethernet_MAC_MACIVIR_CSVL_Values<Ethernet_MAC::MACIVIR, 19, 1, ReadWriteMode, Ethernet_MACMACIVIRBase> ;
    using VLTI = Ethernet_MAC_MACIVIR_VLTI_Values<Ethernet_MAC::MACIVIR, 20, 1, ReadWriteMode, Ethernet_MACMACIVIRBase> ;
    using FieldValues = Ethernet_MAC_MACIVIR_VLTI_Values<Ethernet_MAC::MACIVIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACIVIRPack  = Register<0x40028064, 32, ReadWriteMode, Ethernet_MACMACIVIRBase, T...> ;

  struct Ethernet_MACMACQTxFCRBase {} ;

  struct MACQTxFCR : public RegisterBase<0x40028070, 32, ReadWriteMode>
  {
    using FCB_BPA = Ethernet_MAC_MACQTxFCR_FCB_BPA_Values<Ethernet_MAC::MACQTxFCR, 0, 1, ReadWriteMode, Ethernet_MACMACQTxFCRBase> ;
    using TFE = Ethernet_MAC_MACQTxFCR_TFE_Values<Ethernet_MAC::MACQTxFCR, 1, 1, ReadWriteMode, Ethernet_MACMACQTxFCRBase> ;
    using PLT = Ethernet_MAC_MACQTxFCR_PLT_Values<Ethernet_MAC::MACQTxFCR, 4, 3, ReadWriteMode, Ethernet_MACMACQTxFCRBase> ;
    using DZPQ = Ethernet_MAC_MACQTxFCR_DZPQ_Values<Ethernet_MAC::MACQTxFCR, 7, 1, ReadWriteMode, Ethernet_MACMACQTxFCRBase> ;
    using PT = Ethernet_MAC_MACQTxFCR_PT_Values<Ethernet_MAC::MACQTxFCR, 16, 16, ReadWriteMode, Ethernet_MACMACQTxFCRBase> ;
    using FieldValues = Ethernet_MAC_MACQTxFCR_PT_Values<Ethernet_MAC::MACQTxFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACQTxFCRPack  = Register<0x40028070, 32, ReadWriteMode, Ethernet_MACMACQTxFCRBase, T...> ;

  struct Ethernet_MACMACRxFCRBase {} ;

  struct MACRxFCR : public RegisterBase<0x40028090, 32, ReadWriteMode>
  {
    using RFE = Ethernet_MAC_MACRxFCR_RFE_Values<Ethernet_MAC::MACRxFCR, 0, 1, ReadWriteMode, Ethernet_MACMACRxFCRBase> ;
    using UP = Ethernet_MAC_MACRxFCR_UP_Values<Ethernet_MAC::MACRxFCR, 1, 1, ReadWriteMode, Ethernet_MACMACRxFCRBase> ;
    using FieldValues = Ethernet_MAC_MACRxFCR_UP_Values<Ethernet_MAC::MACRxFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACRxFCRPack  = Register<0x40028090, 32, ReadWriteMode, Ethernet_MACMACRxFCRBase, T...> ;

  struct Ethernet_MACMACISRBase {} ;

  struct MACISR : public RegisterBase<0x400280B0, 32, ReadMode>
  {
    using PHYIS = Ethernet_MAC_MACISR_PHYIS_Values<Ethernet_MAC::MACISR, 3, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using PMTIS = Ethernet_MAC_MACISR_PMTIS_Values<Ethernet_MAC::MACISR, 4, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using LPIIS = Ethernet_MAC_MACISR_LPIIS_Values<Ethernet_MAC::MACISR, 5, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using MMCIS = Ethernet_MAC_MACISR_MMCIS_Values<Ethernet_MAC::MACISR, 8, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using MMCRXIS = Ethernet_MAC_MACISR_MMCRXIS_Values<Ethernet_MAC::MACISR, 9, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using MMCTXIS = Ethernet_MAC_MACISR_MMCTXIS_Values<Ethernet_MAC::MACISR, 10, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using TSIS = Ethernet_MAC_MACISR_TSIS_Values<Ethernet_MAC::MACISR, 12, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using TXSTSIS = Ethernet_MAC_MACISR_TXSTSIS_Values<Ethernet_MAC::MACISR, 13, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using RXSTSIS = Ethernet_MAC_MACISR_RXSTSIS_Values<Ethernet_MAC::MACISR, 14, 1, ReadMode, Ethernet_MACMACISRBase> ;
    using FieldValues = Ethernet_MAC_MACISR_RXSTSIS_Values<Ethernet_MAC::MACISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACISRPack  = Register<0x400280B0, 32, ReadMode, Ethernet_MACMACISRBase, T...> ;

  struct Ethernet_MACMACIERBase {} ;

  struct MACIER : public RegisterBase<0x400280B4, 32, ReadWriteMode>
  {
    using PHYIE = Ethernet_MAC_MACIER_PHYIE_Values<Ethernet_MAC::MACIER, 3, 1, ReadWriteMode, Ethernet_MACMACIERBase> ;
    using PMTIE = Ethernet_MAC_MACIER_PMTIE_Values<Ethernet_MAC::MACIER, 4, 1, ReadWriteMode, Ethernet_MACMACIERBase> ;
    using LPIIE = Ethernet_MAC_MACIER_LPIIE_Values<Ethernet_MAC::MACIER, 5, 1, ReadWriteMode, Ethernet_MACMACIERBase> ;
    using TSIE = Ethernet_MAC_MACIER_TSIE_Values<Ethernet_MAC::MACIER, 12, 1, ReadWriteMode, Ethernet_MACMACIERBase> ;
    using TXSTSIE = Ethernet_MAC_MACIER_TXSTSIE_Values<Ethernet_MAC::MACIER, 13, 1, ReadWriteMode, Ethernet_MACMACIERBase> ;
    using RXSTSIE = Ethernet_MAC_MACIER_RXSTSIE_Values<Ethernet_MAC::MACIER, 14, 1, ReadWriteMode, Ethernet_MACMACIERBase> ;
    using FieldValues = Ethernet_MAC_MACIER_RXSTSIE_Values<Ethernet_MAC::MACIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACIERPack  = Register<0x400280B4, 32, ReadWriteMode, Ethernet_MACMACIERBase, T...> ;

  struct Ethernet_MACMACRxTxSRBase {} ;

  struct MACRxTxSR : public RegisterBase<0x400280B8, 32, ReadMode>
  {
    using TJT = Ethernet_MAC_MACRxTxSR_TJT_Values<Ethernet_MAC::MACRxTxSR, 0, 1, ReadMode, Ethernet_MACMACRxTxSRBase> ;
    using NCARR = Ethernet_MAC_MACRxTxSR_NCARR_Values<Ethernet_MAC::MACRxTxSR, 1, 1, ReadMode, Ethernet_MACMACRxTxSRBase> ;
    using LCARR = Ethernet_MAC_MACRxTxSR_LCARR_Values<Ethernet_MAC::MACRxTxSR, 2, 1, ReadMode, Ethernet_MACMACRxTxSRBase> ;
    using EXDEF = Ethernet_MAC_MACRxTxSR_EXDEF_Values<Ethernet_MAC::MACRxTxSR, 3, 1, ReadMode, Ethernet_MACMACRxTxSRBase> ;
    using LCOL = Ethernet_MAC_MACRxTxSR_LCOL_Values<Ethernet_MAC::MACRxTxSR, 4, 1, ReadMode, Ethernet_MACMACRxTxSRBase> ;
    using EXCOL = Ethernet_MAC_MACRxTxSR_EXCOL_Values<Ethernet_MAC::MACRxTxSR, 5, 1, ReadMode, Ethernet_MACMACRxTxSRBase> ;
    using RWT = Ethernet_MAC_MACRxTxSR_RWT_Values<Ethernet_MAC::MACRxTxSR, 8, 1, ReadMode, Ethernet_MACMACRxTxSRBase> ;
    using FieldValues = Ethernet_MAC_MACRxTxSR_RWT_Values<Ethernet_MAC::MACRxTxSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACRxTxSRPack  = Register<0x400280B8, 32, ReadMode, Ethernet_MACMACRxTxSRBase, T...> ;

  struct Ethernet_MACMACPCSRBase {} ;

  struct MACPCSR : public RegisterBase<0x400280C0, 32, ReadWriteMode>
  {
    using PWRDWN = Ethernet_MAC_MACPCSR_PWRDWN_Values<Ethernet_MAC::MACPCSR, 0, 1, ReadWriteMode, Ethernet_MACMACPCSRBase> ;
    using MGKPKTEN = Ethernet_MAC_MACPCSR_MGKPKTEN_Values<Ethernet_MAC::MACPCSR, 1, 1, ReadWriteMode, Ethernet_MACMACPCSRBase> ;
    using RWKPKTEN = Ethernet_MAC_MACPCSR_RWKPKTEN_Values<Ethernet_MAC::MACPCSR, 2, 1, ReadWriteMode, Ethernet_MACMACPCSRBase> ;
    using MGKPRCVD = Ethernet_MAC_MACPCSR_MGKPRCVD_Values<Ethernet_MAC::MACPCSR, 5, 1, ReadMode, Ethernet_MACMACPCSRBase> ;
    using RWKPRCVD = Ethernet_MAC_MACPCSR_RWKPRCVD_Values<Ethernet_MAC::MACPCSR, 6, 1, ReadMode, Ethernet_MACMACPCSRBase> ;
    using GLBLUCAST = Ethernet_MAC_MACPCSR_GLBLUCAST_Values<Ethernet_MAC::MACPCSR, 9, 1, ReadWriteMode, Ethernet_MACMACPCSRBase> ;
    using RWKPFE = Ethernet_MAC_MACPCSR_RWKPFE_Values<Ethernet_MAC::MACPCSR, 10, 1, ReadWriteMode, Ethernet_MACMACPCSRBase> ;
    using RWKPTR = Ethernet_MAC_MACPCSR_RWKPTR_Values<Ethernet_MAC::MACPCSR, 24, 5, ReadWriteMode, Ethernet_MACMACPCSRBase> ;
    using RWKFILTRST = Ethernet_MAC_MACPCSR_RWKFILTRST_Values<Ethernet_MAC::MACPCSR, 31, 1, ReadWriteMode, Ethernet_MACMACPCSRBase> ;
    using FieldValues = Ethernet_MAC_MACPCSR_RWKFILTRST_Values<Ethernet_MAC::MACPCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPCSRPack  = Register<0x400280C0, 32, ReadWriteMode, Ethernet_MACMACPCSRBase, T...> ;

  struct Ethernet_MACMACRWKPFRBase {} ;

  struct MACRWKPFR : public RegisterBase<0x400280C4, 32, ReadWriteMode>
  {
    using WKUPFRMFTR = Ethernet_MAC_MACRWKPFR_WKUPFRMFTR_Values<Ethernet_MAC::MACRWKPFR, 0, 32, ReadWriteMode, Ethernet_MACMACRWKPFRBase> ;
    using FieldValues = Ethernet_MAC_MACRWKPFR_WKUPFRMFTR_Values<Ethernet_MAC::MACRWKPFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACRWKPFRPack  = Register<0x400280C4, 32, ReadWriteMode, Ethernet_MACMACRWKPFRBase, T...> ;

  struct Ethernet_MACMACLCSRBase {} ;

  struct MACLCSR : public RegisterBase<0x400280D0, 32, ReadWriteMode>
  {
    using TLPIEN = Ethernet_MAC_MACLCSR_TLPIEN_Values<Ethernet_MAC::MACLCSR, 0, 1, ReadMode, Ethernet_MACMACLCSRBase> ;
    using TLPIEX = Ethernet_MAC_MACLCSR_TLPIEX_Values<Ethernet_MAC::MACLCSR, 1, 1, ReadMode, Ethernet_MACMACLCSRBase> ;
    using RLPIEN = Ethernet_MAC_MACLCSR_RLPIEN_Values<Ethernet_MAC::MACLCSR, 2, 1, ReadMode, Ethernet_MACMACLCSRBase> ;
    using RLPIEX = Ethernet_MAC_MACLCSR_RLPIEX_Values<Ethernet_MAC::MACLCSR, 3, 1, ReadMode, Ethernet_MACMACLCSRBase> ;
    using TLPIST = Ethernet_MAC_MACLCSR_TLPIST_Values<Ethernet_MAC::MACLCSR, 8, 1, ReadMode, Ethernet_MACMACLCSRBase> ;
    using RLPIST = Ethernet_MAC_MACLCSR_RLPIST_Values<Ethernet_MAC::MACLCSR, 9, 1, ReadMode, Ethernet_MACMACLCSRBase> ;
    using LPIEN = Ethernet_MAC_MACLCSR_LPIEN_Values<Ethernet_MAC::MACLCSR, 16, 1, ReadWriteMode, Ethernet_MACMACLCSRBase> ;
    using PLS = Ethernet_MAC_MACLCSR_PLS_Values<Ethernet_MAC::MACLCSR, 17, 1, ReadWriteMode, Ethernet_MACMACLCSRBase> ;
    using PLSEN = Ethernet_MAC_MACLCSR_PLSEN_Values<Ethernet_MAC::MACLCSR, 18, 1, ReadWriteMode, Ethernet_MACMACLCSRBase> ;
    using LPITXA = Ethernet_MAC_MACLCSR_LPITXA_Values<Ethernet_MAC::MACLCSR, 19, 1, ReadWriteMode, Ethernet_MACMACLCSRBase> ;
    using LPITE = Ethernet_MAC_MACLCSR_LPITE_Values<Ethernet_MAC::MACLCSR, 20, 1, ReadWriteMode, Ethernet_MACMACLCSRBase> ;
    using LPITCSE = Ethernet_MAC_MACLCSR_LPITCSE_Values<Ethernet_MAC::MACLCSR, 21, 1, ReadWriteMode, Ethernet_MACMACLCSRBase> ;
    using FieldValues = Ethernet_MAC_MACLCSR_LPITCSE_Values<Ethernet_MAC::MACLCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACLCSRPack  = Register<0x400280D0, 32, ReadWriteMode, Ethernet_MACMACLCSRBase, T...> ;

  struct Ethernet_MACMACLTCRBase {} ;

  struct MACLTCR : public RegisterBase<0x400280D4, 32, ReadWriteMode>
  {
    using TWT = Ethernet_MAC_MACLTCR_TWT_Values<Ethernet_MAC::MACLTCR, 0, 16, ReadWriteMode, Ethernet_MACMACLTCRBase> ;
    using LST = Ethernet_MAC_MACLTCR_LST_Values<Ethernet_MAC::MACLTCR, 16, 10, ReadWriteMode, Ethernet_MACMACLTCRBase> ;
    using FieldValues = Ethernet_MAC_MACLTCR_LST_Values<Ethernet_MAC::MACLTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACLTCRPack  = Register<0x400280D4, 32, ReadWriteMode, Ethernet_MACMACLTCRBase, T...> ;

  struct Ethernet_MACMACLETRBase {} ;

  struct MACLETR : public RegisterBase<0x400280D8, 32, ReadWriteMode>
  {
    using LPIET = Ethernet_MAC_MACLETR_LPIET_Values<Ethernet_MAC::MACLETR, 0, 17, ReadWriteMode, Ethernet_MACMACLETRBase> ;
    using FieldValues = Ethernet_MAC_MACLETR_LPIET_Values<Ethernet_MAC::MACLETR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACLETRPack  = Register<0x400280D8, 32, ReadWriteMode, Ethernet_MACMACLETRBase, T...> ;

  struct Ethernet_MACMAC1USTCRBase {} ;

  struct MAC1USTCR : public RegisterBase<0x400280DC, 32, ReadWriteMode>
  {
    using TIC_1US_CNTR = Ethernet_MAC_MAC1USTCR_TIC_1US_CNTR_Values<Ethernet_MAC::MAC1USTCR, 0, 12, ReadWriteMode, Ethernet_MACMAC1USTCRBase> ;
    using FieldValues = Ethernet_MAC_MAC1USTCR_TIC_1US_CNTR_Values<Ethernet_MAC::MAC1USTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MAC1USTCRPack  = Register<0x400280DC, 32, ReadWriteMode, Ethernet_MACMAC1USTCRBase, T...> ;

  struct Ethernet_MACMACVRBase {} ;

  struct MACVR : public RegisterBase<0x40028110, 32, ReadMode>
  {
    using SNPSVER = Ethernet_MAC_MACVR_SNPSVER_Values<Ethernet_MAC::MACVR, 0, 8, ReadMode, Ethernet_MACMACVRBase> ;
    using USERVER = Ethernet_MAC_MACVR_USERVER_Values<Ethernet_MAC::MACVR, 8, 8, ReadMode, Ethernet_MACMACVRBase> ;
    using FieldValues = Ethernet_MAC_MACVR_USERVER_Values<Ethernet_MAC::MACVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACVRPack  = Register<0x40028110, 32, ReadMode, Ethernet_MACMACVRBase, T...> ;

  struct Ethernet_MACMACHWF1RBase {} ;

  struct MACHWF1R : public RegisterBase<0x40028120, 32, ReadMode>
  {
    using RXFIFOSIZE = Ethernet_MAC_MACHWF1R_RXFIFOSIZE_Values<Ethernet_MAC::MACHWF1R, 0, 5, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using TXFIFOSIZE = Ethernet_MAC_MACHWF1R_TXFIFOSIZE_Values<Ethernet_MAC::MACHWF1R, 6, 5, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using OSTEN = Ethernet_MAC_MACHWF1R_OSTEN_Values<Ethernet_MAC::MACHWF1R, 11, 1, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using PTOEN = Ethernet_MAC_MACHWF1R_PTOEN_Values<Ethernet_MAC::MACHWF1R, 12, 1, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using ADVTHWORD = Ethernet_MAC_MACHWF1R_ADVTHWORD_Values<Ethernet_MAC::MACHWF1R, 13, 1, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using DCBEN = Ethernet_MAC_MACHWF1R_DCBEN_Values<Ethernet_MAC::MACHWF1R, 16, 1, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using SPHEN = Ethernet_MAC_MACHWF1R_SPHEN_Values<Ethernet_MAC::MACHWF1R, 17, 1, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using TSOEN = Ethernet_MAC_MACHWF1R_TSOEN_Values<Ethernet_MAC::MACHWF1R, 18, 1, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using DBGMEMA = Ethernet_MAC_MACHWF1R_DBGMEMA_Values<Ethernet_MAC::MACHWF1R, 19, 1, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using AVSEL = Ethernet_MAC_MACHWF1R_AVSEL_Values<Ethernet_MAC::MACHWF1R, 20, 1, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using HASHTBLSZ = Ethernet_MAC_MACHWF1R_HASHTBLSZ_Values<Ethernet_MAC::MACHWF1R, 24, 2, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using L3L4FNUM = Ethernet_MAC_MACHWF1R_L3L4FNUM_Values<Ethernet_MAC::MACHWF1R, 27, 4, ReadMode, Ethernet_MACMACHWF1RBase> ;
    using FieldValues = Ethernet_MAC_MACHWF1R_L3L4FNUM_Values<Ethernet_MAC::MACHWF1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACHWF1RPack  = Register<0x40028120, 32, ReadMode, Ethernet_MACMACHWF1RBase, T...> ;

  struct Ethernet_MACMACHWF2RBase {} ;

  struct MACHWF2R : public RegisterBase<0x40028124, 32, ReadMode>
  {
    using RXQCNT = Ethernet_MAC_MACHWF2R_RXQCNT_Values<Ethernet_MAC::MACHWF2R, 0, 4, ReadMode, Ethernet_MACMACHWF2RBase> ;
    using TXQCNT = Ethernet_MAC_MACHWF2R_TXQCNT_Values<Ethernet_MAC::MACHWF2R, 6, 4, ReadMode, Ethernet_MACMACHWF2RBase> ;
    using RXCHCNT = Ethernet_MAC_MACHWF2R_RXCHCNT_Values<Ethernet_MAC::MACHWF2R, 12, 4, ReadMode, Ethernet_MACMACHWF2RBase> ;
    using TXCHCNT = Ethernet_MAC_MACHWF2R_TXCHCNT_Values<Ethernet_MAC::MACHWF2R, 18, 4, ReadMode, Ethernet_MACMACHWF2RBase> ;
    using PPSOUTNUM = Ethernet_MAC_MACHWF2R_PPSOUTNUM_Values<Ethernet_MAC::MACHWF2R, 24, 3, ReadMode, Ethernet_MACMACHWF2RBase> ;
    using AUXSNAPNUM = Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values<Ethernet_MAC::MACHWF2R, 28, 3, ReadMode, Ethernet_MACMACHWF2RBase> ;
    using FieldValues = Ethernet_MAC_MACHWF2R_AUXSNAPNUM_Values<Ethernet_MAC::MACHWF2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACHWF2RPack  = Register<0x40028124, 32, ReadMode, Ethernet_MACMACHWF2RBase, T...> ;

  struct Ethernet_MACMACMDIOARBase {} ;

  struct MACMDIOAR : public RegisterBase<0x40028200, 32, ReadWriteMode>
  {
    using MB = Ethernet_MAC_MACMDIOAR_MB_Values<Ethernet_MAC::MACMDIOAR, 0, 1, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using C45E = Ethernet_MAC_MACMDIOAR_C45E_Values<Ethernet_MAC::MACMDIOAR, 1, 1, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using GOC = Ethernet_MAC_MACMDIOAR_GOC_Values<Ethernet_MAC::MACMDIOAR, 2, 2, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using SKAP = Ethernet_MAC_MACMDIOAR_SKAP_Values<Ethernet_MAC::MACMDIOAR, 4, 1, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using CR = Ethernet_MAC_MACMDIOAR_CR_Values<Ethernet_MAC::MACMDIOAR, 8, 4, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using NTC = Ethernet_MAC_MACMDIOAR_NTC_Values<Ethernet_MAC::MACMDIOAR, 12, 3, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using RDA = Ethernet_MAC_MACMDIOAR_RDA_Values<Ethernet_MAC::MACMDIOAR, 16, 5, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using PA = Ethernet_MAC_MACMDIOAR_PA_Values<Ethernet_MAC::MACMDIOAR, 21, 5, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using BTB = Ethernet_MAC_MACMDIOAR_BTB_Values<Ethernet_MAC::MACMDIOAR, 26, 1, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using PSE = Ethernet_MAC_MACMDIOAR_PSE_Values<Ethernet_MAC::MACMDIOAR, 27, 1, ReadWriteMode, Ethernet_MACMACMDIOARBase> ;
    using FieldValues = Ethernet_MAC_MACMDIOAR_PSE_Values<Ethernet_MAC::MACMDIOAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACMDIOARPack  = Register<0x40028200, 32, ReadWriteMode, Ethernet_MACMACMDIOARBase, T...> ;

  struct Ethernet_MACMACMDIODRBase {} ;

  struct MACMDIODR : public RegisterBase<0x40028204, 32, ReadWriteMode>
  {
    using MD = Ethernet_MAC_MACMDIODR_MD_Values<Ethernet_MAC::MACMDIODR, 0, 16, ReadWriteMode, Ethernet_MACMACMDIODRBase> ;
    using RA = Ethernet_MAC_MACMDIODR_RA_Values<Ethernet_MAC::MACMDIODR, 16, 16, ReadWriteMode, Ethernet_MACMACMDIODRBase> ;
    using FieldValues = Ethernet_MAC_MACMDIODR_RA_Values<Ethernet_MAC::MACMDIODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACMDIODRPack  = Register<0x40028204, 32, ReadWriteMode, Ethernet_MACMACMDIODRBase, T...> ;

  struct Ethernet_MACMACARPARBase {} ;

  struct MACARPAR : public RegisterBase<0x40028AE0, 32, ReadWriteMode>
  {
    using ARPPA = Ethernet_MAC_MACARPAR_ARPPA_Values<Ethernet_MAC::MACARPAR, 0, 32, ReadWriteMode, Ethernet_MACMACARPARBase> ;
    using FieldValues = Ethernet_MAC_MACARPAR_ARPPA_Values<Ethernet_MAC::MACARPAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACARPARPack  = Register<0x40028AE0, 32, ReadWriteMode, Ethernet_MACMACARPARBase, T...> ;

  struct Ethernet_MACMACA0HRBase {} ;

  struct MACA0HR : public RegisterBase<0x40028300, 32, ReadWriteMode>
  {
    using ADDRHI = Ethernet_MAC_MACA0HR_ADDRHI_Values<Ethernet_MAC::MACA0HR, 0, 16, ReadWriteMode, Ethernet_MACMACA0HRBase> ;
    using AE = Ethernet_MAC_MACA0HR_AE_Values<Ethernet_MAC::MACA0HR, 31, 1, ReadMode, Ethernet_MACMACA0HRBase> ;
    using FieldValues = Ethernet_MAC_MACA0HR_AE_Values<Ethernet_MAC::MACA0HR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA0HRPack  = Register<0x40028300, 32, ReadWriteMode, Ethernet_MACMACA0HRBase, T...> ;

  struct Ethernet_MACMACA0LRBase {} ;

  struct MACA0LR : public RegisterBase<0x40028304, 32, ReadWriteMode>
  {
    using ADDRLO = Ethernet_MAC_MACA0LR_ADDRLO_Values<Ethernet_MAC::MACA0LR, 0, 32, ReadWriteMode, Ethernet_MACMACA0LRBase> ;
    using FieldValues = Ethernet_MAC_MACA0LR_ADDRLO_Values<Ethernet_MAC::MACA0LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA0LRPack  = Register<0x40028304, 32, ReadWriteMode, Ethernet_MACMACA0LRBase, T...> ;

  struct Ethernet_MACMACA1LRBase {} ;

  struct MACA1LR : public RegisterBase<0x4002830C, 32, ReadWriteMode>
  {
    using ADDRLO = Ethernet_MAC_MACA1LR_ADDRLO_Values<Ethernet_MAC::MACA1LR, 0, 32, ReadWriteMode, Ethernet_MACMACA1LRBase> ;
    using FieldValues = Ethernet_MAC_MACA1LR_ADDRLO_Values<Ethernet_MAC::MACA1LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA1LRPack  = Register<0x4002830C, 32, ReadWriteMode, Ethernet_MACMACA1LRBase, T...> ;

  struct Ethernet_MACMACA2LRBase {} ;

  struct MACA2LR : public RegisterBase<0x40028314, 32, ReadWriteMode>
  {
    using ADDRLO = Ethernet_MAC_MACA2LR_ADDRLO_Values<Ethernet_MAC::MACA2LR, 0, 32, ReadWriteMode, Ethernet_MACMACA2LRBase> ;
    using FieldValues = Ethernet_MAC_MACA2LR_ADDRLO_Values<Ethernet_MAC::MACA2LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA2LRPack  = Register<0x40028314, 32, ReadWriteMode, Ethernet_MACMACA2LRBase, T...> ;

  struct Ethernet_MACMACA3LRBase {} ;

  struct MACA3LR : public RegisterBase<0x4002831C, 32, ReadWriteMode>
  {
    using ADDRLO = Ethernet_MAC_MACA3LR_ADDRLO_Values<Ethernet_MAC::MACA3LR, 0, 32, ReadWriteMode, Ethernet_MACMACA3LRBase> ;
    using FieldValues = Ethernet_MAC_MACA3LR_ADDRLO_Values<Ethernet_MAC::MACA3LR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA3LRPack  = Register<0x4002831C, 32, ReadWriteMode, Ethernet_MACMACA3LRBase, T...> ;

  struct Ethernet_MACMACA1HRBase {} ;

  struct MACA1HR : public RegisterBase<0x40028308, 32, ReadWriteMode>
  {
    using ADDRHI = Ethernet_MAC_MACA1HR_ADDRHI_Values<Ethernet_MAC::MACA1HR, 0, 16, ReadWriteMode, Ethernet_MACMACA1HRBase> ;
    using MBC = Ethernet_MAC_MACA1HR_MBC_Values<Ethernet_MAC::MACA1HR, 24, 6, ReadWriteMode, Ethernet_MACMACA1HRBase> ;
    using SA = Ethernet_MAC_MACA1HR_SA_Values<Ethernet_MAC::MACA1HR, 30, 1, ReadWriteMode, Ethernet_MACMACA1HRBase> ;
    using AE = Ethernet_MAC_MACA1HR_AE_Values<Ethernet_MAC::MACA1HR, 31, 1, ReadWriteMode, Ethernet_MACMACA1HRBase> ;
    using FieldValues = Ethernet_MAC_MACA1HR_AE_Values<Ethernet_MAC::MACA1HR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA1HRPack  = Register<0x40028308, 32, ReadWriteMode, Ethernet_MACMACA1HRBase, T...> ;

  struct Ethernet_MACMACA2HRBase {} ;

  struct MACA2HR : public RegisterBase<0x40028310, 32, ReadWriteMode>
  {
    using ADDRHI = Ethernet_MAC_MACA2HR_ADDRHI_Values<Ethernet_MAC::MACA2HR, 0, 16, ReadWriteMode, Ethernet_MACMACA2HRBase> ;
    using MBC = Ethernet_MAC_MACA2HR_MBC_Values<Ethernet_MAC::MACA2HR, 24, 6, ReadWriteMode, Ethernet_MACMACA2HRBase> ;
    using SA = Ethernet_MAC_MACA2HR_SA_Values<Ethernet_MAC::MACA2HR, 30, 1, ReadWriteMode, Ethernet_MACMACA2HRBase> ;
    using AE = Ethernet_MAC_MACA2HR_AE_Values<Ethernet_MAC::MACA2HR, 31, 1, ReadWriteMode, Ethernet_MACMACA2HRBase> ;
    using FieldValues = Ethernet_MAC_MACA2HR_AE_Values<Ethernet_MAC::MACA2HR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA2HRPack  = Register<0x40028310, 32, ReadWriteMode, Ethernet_MACMACA2HRBase, T...> ;

  struct Ethernet_MACMACA3HRBase {} ;

  struct MACA3HR : public RegisterBase<0x40028318, 32, ReadWriteMode>
  {
    using ADDRHI = Ethernet_MAC_MACA3HR_ADDRHI_Values<Ethernet_MAC::MACA3HR, 0, 16, ReadWriteMode, Ethernet_MACMACA3HRBase> ;
    using MBC = Ethernet_MAC_MACA3HR_MBC_Values<Ethernet_MAC::MACA3HR, 24, 6, ReadWriteMode, Ethernet_MACMACA3HRBase> ;
    using SA = Ethernet_MAC_MACA3HR_SA_Values<Ethernet_MAC::MACA3HR, 30, 1, ReadWriteMode, Ethernet_MACMACA3HRBase> ;
    using AE = Ethernet_MAC_MACA3HR_AE_Values<Ethernet_MAC::MACA3HR, 31, 1, ReadWriteMode, Ethernet_MACMACA3HRBase> ;
    using FieldValues = Ethernet_MAC_MACA3HR_AE_Values<Ethernet_MAC::MACA3HR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACA3HRPack  = Register<0x40028318, 32, ReadWriteMode, Ethernet_MACMACA3HRBase, T...> ;

  struct Ethernet_MACMMC_CONTROLBase {} ;

  struct MMC_CONTROL : public RegisterBase<0x40028700, 32, ReadWriteMode>
  {
    using CNTRST = Ethernet_MAC_MMC_CONTROL_CNTRST_Values<Ethernet_MAC::MMC_CONTROL, 0, 1, ReadWriteMode, Ethernet_MACMMC_CONTROLBase> ;
    using CNTSTOPRO = Ethernet_MAC_MMC_CONTROL_CNTSTOPRO_Values<Ethernet_MAC::MMC_CONTROL, 1, 1, ReadWriteMode, Ethernet_MACMMC_CONTROLBase> ;
    using RSTONRD = Ethernet_MAC_MMC_CONTROL_RSTONRD_Values<Ethernet_MAC::MMC_CONTROL, 2, 1, ReadWriteMode, Ethernet_MACMMC_CONTROLBase> ;
    using CNTFREEZ = Ethernet_MAC_MMC_CONTROL_CNTFREEZ_Values<Ethernet_MAC::MMC_CONTROL, 3, 1, ReadWriteMode, Ethernet_MACMMC_CONTROLBase> ;
    using CNTPRST = Ethernet_MAC_MMC_CONTROL_CNTPRST_Values<Ethernet_MAC::MMC_CONTROL, 4, 1, ReadWriteMode, Ethernet_MACMMC_CONTROLBase> ;
    using CNTPRSTLVL = Ethernet_MAC_MMC_CONTROL_CNTPRSTLVL_Values<Ethernet_MAC::MMC_CONTROL, 5, 1, ReadWriteMode, Ethernet_MACMMC_CONTROLBase> ;
    using UCDBC = Ethernet_MAC_MMC_CONTROL_UCDBC_Values<Ethernet_MAC::MMC_CONTROL, 8, 1, ReadWriteMode, Ethernet_MACMMC_CONTROLBase> ;
    using FieldValues = Ethernet_MAC_MMC_CONTROL_UCDBC_Values<Ethernet_MAC::MMC_CONTROL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMC_CONTROLPack  = Register<0x40028700, 32, ReadWriteMode, Ethernet_MACMMC_CONTROLBase, T...> ;

  struct Ethernet_MACMMC_RX_INTERRUPTBase {} ;

  struct MMC_RX_INTERRUPT : public RegisterBase<0x40028704, 32, ReadMode>
  {
    using RXCRCERPIS = Ethernet_MAC_MMC_RX_INTERRUPT_RXCRCERPIS_Values<Ethernet_MAC::MMC_RX_INTERRUPT, 5, 1, ReadMode, Ethernet_MACMMC_RX_INTERRUPTBase> ;
    using RXALGNERPIS = Ethernet_MAC_MMC_RX_INTERRUPT_RXALGNERPIS_Values<Ethernet_MAC::MMC_RX_INTERRUPT, 6, 1, ReadMode, Ethernet_MACMMC_RX_INTERRUPTBase> ;
    using RXUCGPIS = Ethernet_MAC_MMC_RX_INTERRUPT_RXUCGPIS_Values<Ethernet_MAC::MMC_RX_INTERRUPT, 17, 1, ReadMode, Ethernet_MACMMC_RX_INTERRUPTBase> ;
    using RXLPIUSCIS = Ethernet_MAC_MMC_RX_INTERRUPT_RXLPIUSCIS_Values<Ethernet_MAC::MMC_RX_INTERRUPT, 26, 1, ReadMode, Ethernet_MACMMC_RX_INTERRUPTBase> ;
    using RXLPITRCIS = Ethernet_MAC_MMC_RX_INTERRUPT_RXLPITRCIS_Values<Ethernet_MAC::MMC_RX_INTERRUPT, 27, 1, ReadMode, Ethernet_MACMMC_RX_INTERRUPTBase> ;
    using FieldValues = Ethernet_MAC_MMC_RX_INTERRUPT_RXLPITRCIS_Values<Ethernet_MAC::MMC_RX_INTERRUPT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMC_RX_INTERRUPTPack  = Register<0x40028704, 32, ReadMode, Ethernet_MACMMC_RX_INTERRUPTBase, T...> ;

  struct Ethernet_MACMMC_TX_INTERRUPTBase {} ;

  struct MMC_TX_INTERRUPT : public RegisterBase<0x40028708, 32, ReadMode>
  {
    using TXSCOLGPIS = Ethernet_MAC_MMC_TX_INTERRUPT_TXSCOLGPIS_Values<Ethernet_MAC::MMC_TX_INTERRUPT, 14, 1, ReadMode, Ethernet_MACMMC_TX_INTERRUPTBase> ;
    using TXMCOLGPIS = Ethernet_MAC_MMC_TX_INTERRUPT_TXMCOLGPIS_Values<Ethernet_MAC::MMC_TX_INTERRUPT, 15, 1, ReadMode, Ethernet_MACMMC_TX_INTERRUPTBase> ;
    using TXGPKTIS = Ethernet_MAC_MMC_TX_INTERRUPT_TXGPKTIS_Values<Ethernet_MAC::MMC_TX_INTERRUPT, 21, 1, ReadMode, Ethernet_MACMMC_TX_INTERRUPTBase> ;
    using TXLPIUSCIS = Ethernet_MAC_MMC_TX_INTERRUPT_TXLPIUSCIS_Values<Ethernet_MAC::MMC_TX_INTERRUPT, 26, 1, ReadMode, Ethernet_MACMMC_TX_INTERRUPTBase> ;
    using TXLPITRCIS = Ethernet_MAC_MMC_TX_INTERRUPT_TXLPITRCIS_Values<Ethernet_MAC::MMC_TX_INTERRUPT, 27, 1, ReadMode, Ethernet_MACMMC_TX_INTERRUPTBase> ;
    using FieldValues = Ethernet_MAC_MMC_TX_INTERRUPT_TXLPITRCIS_Values<Ethernet_MAC::MMC_TX_INTERRUPT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMC_TX_INTERRUPTPack  = Register<0x40028708, 32, ReadMode, Ethernet_MACMMC_TX_INTERRUPTBase, T...> ;

  struct Ethernet_MACMMC_RX_INTERRUPT_MASKBase {} ;

  struct MMC_RX_INTERRUPT_MASK : public RegisterBase<0x4002870C, 32, ReadWriteMode>
  {
    using RXCRCERPIM = Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXCRCERPIM_Values<Ethernet_MAC::MMC_RX_INTERRUPT_MASK, 5, 1, ReadWriteMode, Ethernet_MACMMC_RX_INTERRUPT_MASKBase> ;
    using RXALGNERPIM = Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXALGNERPIM_Values<Ethernet_MAC::MMC_RX_INTERRUPT_MASK, 6, 1, ReadWriteMode, Ethernet_MACMMC_RX_INTERRUPT_MASKBase> ;
    using RXUCGPIM = Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXUCGPIM_Values<Ethernet_MAC::MMC_RX_INTERRUPT_MASK, 17, 1, ReadWriteMode, Ethernet_MACMMC_RX_INTERRUPT_MASKBase> ;
    using RXLPIUSCIM = Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPIUSCIM_Values<Ethernet_MAC::MMC_RX_INTERRUPT_MASK, 26, 1, ReadWriteMode, Ethernet_MACMMC_RX_INTERRUPT_MASKBase> ;
    using RXLPITRCIM = Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPITRCIM_Values<Ethernet_MAC::MMC_RX_INTERRUPT_MASK, 27, 1, ReadMode, Ethernet_MACMMC_RX_INTERRUPT_MASKBase> ;
    using FieldValues = Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPITRCIM_Values<Ethernet_MAC::MMC_RX_INTERRUPT_MASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMC_RX_INTERRUPT_MASKPack  = Register<0x4002870C, 32, ReadWriteMode, Ethernet_MACMMC_RX_INTERRUPT_MASKBase, T...> ;

  struct Ethernet_MACMMC_TX_INTERRUPT_MASKBase {} ;

  struct MMC_TX_INTERRUPT_MASK : public RegisterBase<0x40028710, 32, ReadWriteMode>
  {
    using TXSCOLGPIM = Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXSCOLGPIM_Values<Ethernet_MAC::MMC_TX_INTERRUPT_MASK, 14, 1, ReadWriteMode, Ethernet_MACMMC_TX_INTERRUPT_MASKBase> ;
    using TXMCOLGPIM = Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXMCOLGPIM_Values<Ethernet_MAC::MMC_TX_INTERRUPT_MASK, 15, 1, ReadWriteMode, Ethernet_MACMMC_TX_INTERRUPT_MASKBase> ;
    using TXGPKTIM = Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXGPKTIM_Values<Ethernet_MAC::MMC_TX_INTERRUPT_MASK, 21, 1, ReadWriteMode, Ethernet_MACMMC_TX_INTERRUPT_MASKBase> ;
    using TXLPIUSCIM = Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPIUSCIM_Values<Ethernet_MAC::MMC_TX_INTERRUPT_MASK, 26, 1, ReadWriteMode, Ethernet_MACMMC_TX_INTERRUPT_MASKBase> ;
    using TXLPITRCIM = Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPITRCIM_Values<Ethernet_MAC::MMC_TX_INTERRUPT_MASK, 27, 1, ReadMode, Ethernet_MACMMC_TX_INTERRUPT_MASKBase> ;
    using FieldValues = Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPITRCIM_Values<Ethernet_MAC::MMC_TX_INTERRUPT_MASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MMC_TX_INTERRUPT_MASKPack  = Register<0x40028710, 32, ReadWriteMode, Ethernet_MACMMC_TX_INTERRUPT_MASKBase, T...> ;

  struct Ethernet_MACTX_SINGLE_COLLISION_GOOD_PACKETSBase {} ;

  struct TX_SINGLE_COLLISION_GOOD_PACKETS : public RegisterBase<0x4002874C, 32, ReadMode>
  {
    using TXSNGLCOLG = Ethernet_MAC_TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG_Values<Ethernet_MAC::TX_SINGLE_COLLISION_GOOD_PACKETS, 0, 32, ReadMode, Ethernet_MACTX_SINGLE_COLLISION_GOOD_PACKETSBase> ;
    using FieldValues = Ethernet_MAC_TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG_Values<Ethernet_MAC::TX_SINGLE_COLLISION_GOOD_PACKETS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TX_SINGLE_COLLISION_GOOD_PACKETSPack  = Register<0x4002874C, 32, ReadMode, Ethernet_MACTX_SINGLE_COLLISION_GOOD_PACKETSBase, T...> ;

  struct Ethernet_MACTX_MULTIPLE_COLLISION_GOOD_PACKETSBase {} ;

  struct TX_MULTIPLE_COLLISION_GOOD_PACKETS : public RegisterBase<0x40028750, 32, ReadMode>
  {
    using TXMULTCOLG = Ethernet_MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG_Values<Ethernet_MAC::TX_MULTIPLE_COLLISION_GOOD_PACKETS, 0, 32, ReadMode, Ethernet_MACTX_MULTIPLE_COLLISION_GOOD_PACKETSBase> ;
    using FieldValues = Ethernet_MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG_Values<Ethernet_MAC::TX_MULTIPLE_COLLISION_GOOD_PACKETS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TX_MULTIPLE_COLLISION_GOOD_PACKETSPack  = Register<0x40028750, 32, ReadMode, Ethernet_MACTX_MULTIPLE_COLLISION_GOOD_PACKETSBase, T...> ;

  struct Ethernet_MACTX_PACKET_COUNT_GOODBase {} ;

  struct TX_PACKET_COUNT_GOOD : public RegisterBase<0x40028768, 32, ReadMode>
  {
    using TXPKTG = Ethernet_MAC_TX_PACKET_COUNT_GOOD_TXPKTG_Values<Ethernet_MAC::TX_PACKET_COUNT_GOOD, 0, 32, ReadMode, Ethernet_MACTX_PACKET_COUNT_GOODBase> ;
    using FieldValues = Ethernet_MAC_TX_PACKET_COUNT_GOOD_TXPKTG_Values<Ethernet_MAC::TX_PACKET_COUNT_GOOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TX_PACKET_COUNT_GOODPack  = Register<0x40028768, 32, ReadMode, Ethernet_MACTX_PACKET_COUNT_GOODBase, T...> ;

  struct Ethernet_MACRX_CRC_ERROR_PACKETSBase {} ;

  struct RX_CRC_ERROR_PACKETS : public RegisterBase<0x40028794, 32, ReadMode>
  {
    using RXCRCERR = Ethernet_MAC_RX_CRC_ERROR_PACKETS_RXCRCERR_Values<Ethernet_MAC::RX_CRC_ERROR_PACKETS, 0, 32, ReadMode, Ethernet_MACRX_CRC_ERROR_PACKETSBase> ;
    using FieldValues = Ethernet_MAC_RX_CRC_ERROR_PACKETS_RXCRCERR_Values<Ethernet_MAC::RX_CRC_ERROR_PACKETS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_CRC_ERROR_PACKETSPack  = Register<0x40028794, 32, ReadMode, Ethernet_MACRX_CRC_ERROR_PACKETSBase, T...> ;

  struct Ethernet_MACRX_ALIGNMENT_ERROR_PACKETSBase {} ;

  struct RX_ALIGNMENT_ERROR_PACKETS : public RegisterBase<0x40028798, 32, ReadMode>
  {
    using RXALGNERR = Ethernet_MAC_RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR_Values<Ethernet_MAC::RX_ALIGNMENT_ERROR_PACKETS, 0, 32, ReadMode, Ethernet_MACRX_ALIGNMENT_ERROR_PACKETSBase> ;
    using FieldValues = Ethernet_MAC_RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR_Values<Ethernet_MAC::RX_ALIGNMENT_ERROR_PACKETS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_ALIGNMENT_ERROR_PACKETSPack  = Register<0x40028798, 32, ReadMode, Ethernet_MACRX_ALIGNMENT_ERROR_PACKETSBase, T...> ;

  struct Ethernet_MACRX_UNICAST_PACKETS_GOODBase {} ;

  struct RX_UNICAST_PACKETS_GOOD : public RegisterBase<0x400287C4, 32, ReadMode>
  {
    using RXUCASTG = Ethernet_MAC_RX_UNICAST_PACKETS_GOOD_RXUCASTG_Values<Ethernet_MAC::RX_UNICAST_PACKETS_GOOD, 0, 32, ReadMode, Ethernet_MACRX_UNICAST_PACKETS_GOODBase> ;
    using FieldValues = Ethernet_MAC_RX_UNICAST_PACKETS_GOOD_RXUCASTG_Values<Ethernet_MAC::RX_UNICAST_PACKETS_GOOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_UNICAST_PACKETS_GOODPack  = Register<0x400287C4, 32, ReadMode, Ethernet_MACRX_UNICAST_PACKETS_GOODBase, T...> ;

  struct Ethernet_MACTX_LPI_USEC_CNTRBase {} ;

  struct TX_LPI_USEC_CNTR : public RegisterBase<0x400287EC, 32, ReadMode>
  {
    using TXLPIUSC = Ethernet_MAC_TX_LPI_USEC_CNTR_TXLPIUSC_Values<Ethernet_MAC::TX_LPI_USEC_CNTR, 0, 32, ReadMode, Ethernet_MACTX_LPI_USEC_CNTRBase> ;
    using FieldValues = Ethernet_MAC_TX_LPI_USEC_CNTR_TXLPIUSC_Values<Ethernet_MAC::TX_LPI_USEC_CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TX_LPI_USEC_CNTRPack  = Register<0x400287EC, 32, ReadMode, Ethernet_MACTX_LPI_USEC_CNTRBase, T...> ;

  struct Ethernet_MACTX_LPI_TRAN_CNTRBase {} ;

  struct TX_LPI_TRAN_CNTR : public RegisterBase<0x400287F0, 32, ReadMode>
  {
    using TXLPITRC = Ethernet_MAC_TX_LPI_TRAN_CNTR_TXLPITRC_Values<Ethernet_MAC::TX_LPI_TRAN_CNTR, 0, 32, ReadMode, Ethernet_MACTX_LPI_TRAN_CNTRBase> ;
    using FieldValues = Ethernet_MAC_TX_LPI_TRAN_CNTR_TXLPITRC_Values<Ethernet_MAC::TX_LPI_TRAN_CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TX_LPI_TRAN_CNTRPack  = Register<0x400287F0, 32, ReadMode, Ethernet_MACTX_LPI_TRAN_CNTRBase, T...> ;

  struct Ethernet_MACRX_LPI_USEC_CNTRBase {} ;

  struct RX_LPI_USEC_CNTR : public RegisterBase<0x400287F4, 32, ReadMode>
  {
    using RXLPIUSC = Ethernet_MAC_RX_LPI_USEC_CNTR_RXLPIUSC_Values<Ethernet_MAC::RX_LPI_USEC_CNTR, 0, 32, ReadMode, Ethernet_MACRX_LPI_USEC_CNTRBase> ;
    using FieldValues = Ethernet_MAC_RX_LPI_USEC_CNTR_RXLPIUSC_Values<Ethernet_MAC::RX_LPI_USEC_CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_LPI_USEC_CNTRPack  = Register<0x400287F4, 32, ReadMode, Ethernet_MACRX_LPI_USEC_CNTRBase, T...> ;

  struct Ethernet_MACRX_LPI_TRAN_CNTRBase {} ;

  struct RX_LPI_TRAN_CNTR : public RegisterBase<0x400287F8, 32, ReadMode>
  {
    using RXLPITRC = Ethernet_MAC_RX_LPI_TRAN_CNTR_RXLPITRC_Values<Ethernet_MAC::RX_LPI_TRAN_CNTR, 0, 32, ReadMode, Ethernet_MACRX_LPI_TRAN_CNTRBase> ;
    using FieldValues = Ethernet_MAC_RX_LPI_TRAN_CNTR_RXLPITRC_Values<Ethernet_MAC::RX_LPI_TRAN_CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_LPI_TRAN_CNTRPack  = Register<0x400287F8, 32, ReadMode, Ethernet_MACRX_LPI_TRAN_CNTRBase, T...> ;

  struct Ethernet_MACMACL3L4C0RBase {} ;

  struct MACL3L4C0R : public RegisterBase<0x40028900, 32, ReadWriteMode>
  {
    using L3PEN0 = Ethernet_MAC_MACL3L4C0R_L3PEN0_Values<Ethernet_MAC::MACL3L4C0R, 0, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L3SAM0 = Ethernet_MAC_MACL3L4C0R_L3SAM0_Values<Ethernet_MAC::MACL3L4C0R, 2, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L3SAIM0 = Ethernet_MAC_MACL3L4C0R_L3SAIM0_Values<Ethernet_MAC::MACL3L4C0R, 3, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L3DAM0 = Ethernet_MAC_MACL3L4C0R_L3DAM0_Values<Ethernet_MAC::MACL3L4C0R, 4, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L3DAIM0 = Ethernet_MAC_MACL3L4C0R_L3DAIM0_Values<Ethernet_MAC::MACL3L4C0R, 5, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L3HSBM0 = Ethernet_MAC_MACL3L4C0R_L3HSBM0_Values<Ethernet_MAC::MACL3L4C0R, 6, 5, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L3HDBM0 = Ethernet_MAC_MACL3L4C0R_L3HDBM0_Values<Ethernet_MAC::MACL3L4C0R, 11, 5, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L4PEN0 = Ethernet_MAC_MACL3L4C0R_L4PEN0_Values<Ethernet_MAC::MACL3L4C0R, 16, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L4SPM0 = Ethernet_MAC_MACL3L4C0R_L4SPM0_Values<Ethernet_MAC::MACL3L4C0R, 18, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L4SPIM0 = Ethernet_MAC_MACL3L4C0R_L4SPIM0_Values<Ethernet_MAC::MACL3L4C0R, 19, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L4DPM0 = Ethernet_MAC_MACL3L4C0R_L4DPM0_Values<Ethernet_MAC::MACL3L4C0R, 20, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using L4DPIM0 = Ethernet_MAC_MACL3L4C0R_L4DPIM0_Values<Ethernet_MAC::MACL3L4C0R, 21, 1, ReadWriteMode, Ethernet_MACMACL3L4C0RBase> ;
    using FieldValues = Ethernet_MAC_MACL3L4C0R_L4DPIM0_Values<Ethernet_MAC::MACL3L4C0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3L4C0RPack  = Register<0x40028900, 32, ReadWriteMode, Ethernet_MACMACL3L4C0RBase, T...> ;

  struct Ethernet_MACMACL4A0RBase {} ;

  struct MACL4A0R : public RegisterBase<0x40028904, 32, ReadWriteMode>
  {
    using L4SP0 = Ethernet_MAC_MACL4A0R_L4SP0_Values<Ethernet_MAC::MACL4A0R, 0, 16, ReadWriteMode, Ethernet_MACMACL4A0RBase> ;
    using L4DP0 = Ethernet_MAC_MACL4A0R_L4DP0_Values<Ethernet_MAC::MACL4A0R, 16, 16, ReadWriteMode, Ethernet_MACMACL4A0RBase> ;
    using FieldValues = Ethernet_MAC_MACL4A0R_L4DP0_Values<Ethernet_MAC::MACL4A0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL4A0RPack  = Register<0x40028904, 32, ReadWriteMode, Ethernet_MACMACL4A0RBase, T...> ;

  struct Ethernet_MACMACDRBase {} ;

  struct MACDR : public RegisterBase<0x40028114, 32, ReadMode>
  {
    using RPESTS = Ethernet_MAC_MACDR_RPESTS_Values<Ethernet_MAC::MACDR, 0, 1, ReadMode, Ethernet_MACMACDRBase> ;
    using RFCFCSTS = Ethernet_MAC_MACDR_RFCFCSTS_Values<Ethernet_MAC::MACDR, 1, 2, ReadMode, Ethernet_MACMACDRBase> ;
    using TPESTS = Ethernet_MAC_MACDR_TPESTS_Values<Ethernet_MAC::MACDR, 16, 1, ReadMode, Ethernet_MACMACDRBase> ;
    using TFCSTS = Ethernet_MAC_MACDR_TFCSTS_Values<Ethernet_MAC::MACDR, 17, 2, ReadMode, Ethernet_MACMACDRBase> ;
    using FieldValues = Ethernet_MAC_MACDR_TFCSTS_Values<Ethernet_MAC::MACDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACDRPack  = Register<0x40028114, 32, ReadMode, Ethernet_MACMACDRBase, T...> ;

  struct Ethernet_MACMACL3A00RBase {} ;

  struct MACL3A00R : public RegisterBase<0x40028910, 32, ReadWriteMode>
  {
    using L3A00 = Ethernet_MAC_MACL3A00R_L3A00_Values<Ethernet_MAC::MACL3A00R, 0, 32, ReadWriteMode, Ethernet_MACMACL3A00RBase> ;
    using FieldValues = Ethernet_MAC_MACL3A00R_L3A00_Values<Ethernet_MAC::MACL3A00R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3A00RPack  = Register<0x40028910, 32, ReadWriteMode, Ethernet_MACMACL3A00RBase, T...> ;

  struct Ethernet_MACMACL3A10RBase {} ;

  struct MACL3A10R : public RegisterBase<0x40028914, 32, ReadWriteMode>
  {
    using L3A10 = Ethernet_MAC_MACL3A10R_L3A10_Values<Ethernet_MAC::MACL3A10R, 0, 32, ReadWriteMode, Ethernet_MACMACL3A10RBase> ;
    using FieldValues = Ethernet_MAC_MACL3A10R_L3A10_Values<Ethernet_MAC::MACL3A10R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3A10RPack  = Register<0x40028914, 32, ReadWriteMode, Ethernet_MACMACL3A10RBase, T...> ;

  struct Ethernet_MACMACL3A20Base {} ;

  struct MACL3A20 : public RegisterBase<0x40028918, 32, ReadWriteMode>
  {
    using L3A20 = Ethernet_MAC_MACL3A20_L3A20_Values<Ethernet_MAC::MACL3A20, 0, 32, ReadWriteMode, Ethernet_MACMACL3A20Base> ;
    using FieldValues = Ethernet_MAC_MACL3A20_L3A20_Values<Ethernet_MAC::MACL3A20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3A20Pack  = Register<0x40028918, 32, ReadWriteMode, Ethernet_MACMACL3A20Base, T...> ;

  struct Ethernet_MACMACL3A30Base {} ;

  struct MACL3A30 : public RegisterBase<0x4002891C, 32, ReadWriteMode>
  {
    using L3A30 = Ethernet_MAC_MACL3A30_L3A30_Values<Ethernet_MAC::MACL3A30, 0, 32, ReadWriteMode, Ethernet_MACMACL3A30Base> ;
    using FieldValues = Ethernet_MAC_MACL3A30_L3A30_Values<Ethernet_MAC::MACL3A30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3A30Pack  = Register<0x4002891C, 32, ReadWriteMode, Ethernet_MACMACL3A30Base, T...> ;

  struct Ethernet_MACMACL3L4C1RBase {} ;

  struct MACL3L4C1R : public RegisterBase<0x40028930, 32, ReadWriteMode>
  {
    using L3PEN1 = Ethernet_MAC_MACL3L4C1R_L3PEN1_Values<Ethernet_MAC::MACL3L4C1R, 0, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L3SAM1 = Ethernet_MAC_MACL3L4C1R_L3SAM1_Values<Ethernet_MAC::MACL3L4C1R, 2, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L3SAIM1 = Ethernet_MAC_MACL3L4C1R_L3SAIM1_Values<Ethernet_MAC::MACL3L4C1R, 3, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L3DAM1 = Ethernet_MAC_MACL3L4C1R_L3DAM1_Values<Ethernet_MAC::MACL3L4C1R, 4, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L3DAIM1 = Ethernet_MAC_MACL3L4C1R_L3DAIM1_Values<Ethernet_MAC::MACL3L4C1R, 5, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L3HSBM1 = Ethernet_MAC_MACL3L4C1R_L3HSBM1_Values<Ethernet_MAC::MACL3L4C1R, 6, 5, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L3HDBM1 = Ethernet_MAC_MACL3L4C1R_L3HDBM1_Values<Ethernet_MAC::MACL3L4C1R, 11, 5, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L4PEN1 = Ethernet_MAC_MACL3L4C1R_L4PEN1_Values<Ethernet_MAC::MACL3L4C1R, 16, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L4SPM1 = Ethernet_MAC_MACL3L4C1R_L4SPM1_Values<Ethernet_MAC::MACL3L4C1R, 18, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L4SPIM1 = Ethernet_MAC_MACL3L4C1R_L4SPIM1_Values<Ethernet_MAC::MACL3L4C1R, 19, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L4DPM1 = Ethernet_MAC_MACL3L4C1R_L4DPM1_Values<Ethernet_MAC::MACL3L4C1R, 20, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using L4DPIM1 = Ethernet_MAC_MACL3L4C1R_L4DPIM1_Values<Ethernet_MAC::MACL3L4C1R, 21, 1, ReadWriteMode, Ethernet_MACMACL3L4C1RBase> ;
    using FieldValues = Ethernet_MAC_MACL3L4C1R_L4DPIM1_Values<Ethernet_MAC::MACL3L4C1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3L4C1RPack  = Register<0x40028930, 32, ReadWriteMode, Ethernet_MACMACL3L4C1RBase, T...> ;

  struct Ethernet_MACMACL4A1RBase {} ;

  struct MACL4A1R : public RegisterBase<0x40028934, 32, ReadWriteMode>
  {
    using L4SP1 = Ethernet_MAC_MACL4A1R_L4SP1_Values<Ethernet_MAC::MACL4A1R, 0, 16, ReadWriteMode, Ethernet_MACMACL4A1RBase> ;
    using L4DP1 = Ethernet_MAC_MACL4A1R_L4DP1_Values<Ethernet_MAC::MACL4A1R, 16, 16, ReadWriteMode, Ethernet_MACMACL4A1RBase> ;
    using FieldValues = Ethernet_MAC_MACL4A1R_L4DP1_Values<Ethernet_MAC::MACL4A1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL4A1RPack  = Register<0x40028934, 32, ReadWriteMode, Ethernet_MACMACL4A1RBase, T...> ;

  struct Ethernet_MACMACL3A01RBase {} ;

  struct MACL3A01R : public RegisterBase<0x40028940, 32, ReadWriteMode>
  {
    using L3A01 = Ethernet_MAC_MACL3A01R_L3A01_Values<Ethernet_MAC::MACL3A01R, 0, 32, ReadWriteMode, Ethernet_MACMACL3A01RBase> ;
    using FieldValues = Ethernet_MAC_MACL3A01R_L3A01_Values<Ethernet_MAC::MACL3A01R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3A01RPack  = Register<0x40028940, 32, ReadWriteMode, Ethernet_MACMACL3A01RBase, T...> ;

  struct Ethernet_MACMACL3A11RBase {} ;

  struct MACL3A11R : public RegisterBase<0x40028944, 32, ReadWriteMode>
  {
    using L3A11 = Ethernet_MAC_MACL3A11R_L3A11_Values<Ethernet_MAC::MACL3A11R, 0, 32, ReadWriteMode, Ethernet_MACMACL3A11RBase> ;
    using FieldValues = Ethernet_MAC_MACL3A11R_L3A11_Values<Ethernet_MAC::MACL3A11R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3A11RPack  = Register<0x40028944, 32, ReadWriteMode, Ethernet_MACMACL3A11RBase, T...> ;

  struct Ethernet_MACMACL3A21RBase {} ;

  struct MACL3A21R : public RegisterBase<0x40028948, 32, ReadWriteMode>
  {
    using L3A21 = Ethernet_MAC_MACL3A21R_L3A21_Values<Ethernet_MAC::MACL3A21R, 0, 32, ReadWriteMode, Ethernet_MACMACL3A21RBase> ;
    using FieldValues = Ethernet_MAC_MACL3A21R_L3A21_Values<Ethernet_MAC::MACL3A21R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3A21RPack  = Register<0x40028948, 32, ReadWriteMode, Ethernet_MACMACL3A21RBase, T...> ;

  struct Ethernet_MACMACL3A31RBase {} ;

  struct MACL3A31R : public RegisterBase<0x4002894C, 32, ReadWriteMode>
  {
    using L3A31 = Ethernet_MAC_MACL3A31R_L3A31_Values<Ethernet_MAC::MACL3A31R, 0, 32, ReadWriteMode, Ethernet_MACMACL3A31RBase> ;
    using FieldValues = Ethernet_MAC_MACL3A31R_L3A31_Values<Ethernet_MAC::MACL3A31R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACL3A31RPack  = Register<0x4002894C, 32, ReadWriteMode, Ethernet_MACMACL3A31RBase, T...> ;

  struct Ethernet_MACMACTSCRBase {} ;

  struct MACTSCR : public RegisterBase<0x40028B00, 32, ReadWriteMode>
  {
    using TSENA = Ethernet_MAC_MACTSCR_TSENA_Values<Ethernet_MAC::MACTSCR, 0, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSCFUPDT = Ethernet_MAC_MACTSCR_TSCFUPDT_Values<Ethernet_MAC::MACTSCR, 1, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSINIT = Ethernet_MAC_MACTSCR_TSINIT_Values<Ethernet_MAC::MACTSCR, 2, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSUPDT = Ethernet_MAC_MACTSCR_TSUPDT_Values<Ethernet_MAC::MACTSCR, 3, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSADDREG = Ethernet_MAC_MACTSCR_TSADDREG_Values<Ethernet_MAC::MACTSCR, 5, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSENALL = Ethernet_MAC_MACTSCR_TSENALL_Values<Ethernet_MAC::MACTSCR, 8, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSCTRLSSR = Ethernet_MAC_MACTSCR_TSCTRLSSR_Values<Ethernet_MAC::MACTSCR, 9, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSVER2ENA = Ethernet_MAC_MACTSCR_TSVER2ENA_Values<Ethernet_MAC::MACTSCR, 10, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSIPENA = Ethernet_MAC_MACTSCR_TSIPENA_Values<Ethernet_MAC::MACTSCR, 11, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSIPV6ENA = Ethernet_MAC_MACTSCR_TSIPV6ENA_Values<Ethernet_MAC::MACTSCR, 12, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSIPV4ENA = Ethernet_MAC_MACTSCR_TSIPV4ENA_Values<Ethernet_MAC::MACTSCR, 13, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSEVNTENA = Ethernet_MAC_MACTSCR_TSEVNTENA_Values<Ethernet_MAC::MACTSCR, 14, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSMSTRENA = Ethernet_MAC_MACTSCR_TSMSTRENA_Values<Ethernet_MAC::MACTSCR, 15, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using SNAPTYPSEL = Ethernet_MAC_MACTSCR_SNAPTYPSEL_Values<Ethernet_MAC::MACTSCR, 16, 2, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using TSENMACADDR = Ethernet_MAC_MACTSCR_TSENMACADDR_Values<Ethernet_MAC::MACTSCR, 18, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using CSC = Ethernet_MAC_MACTSCR_CSC_Values<Ethernet_MAC::MACTSCR, 19, 1, ReadMode, Ethernet_MACMACTSCRBase> ;
    using TXTSSTSM = Ethernet_MAC_MACTSCR_TXTSSTSM_Values<Ethernet_MAC::MACTSCR, 24, 1, ReadWriteMode, Ethernet_MACMACTSCRBase> ;
    using FieldValues = Ethernet_MAC_MACTSCR_TXTSSTSM_Values<Ethernet_MAC::MACTSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTSCRPack  = Register<0x40028B00, 32, ReadWriteMode, Ethernet_MACMACTSCRBase, T...> ;

  struct Ethernet_MACMACSSIRBase {} ;

  struct MACSSIR : public RegisterBase<0x40028B04, 32, ReadWriteMode>
  {
    using SNSINC = Ethernet_MAC_MACSSIR_SNSINC_Values<Ethernet_MAC::MACSSIR, 8, 8, ReadWriteMode, Ethernet_MACMACSSIRBase> ;
    using SSINC = Ethernet_MAC_MACSSIR_SSINC_Values<Ethernet_MAC::MACSSIR, 16, 8, ReadWriteMode, Ethernet_MACMACSSIRBase> ;
    using FieldValues = Ethernet_MAC_MACSSIR_SSINC_Values<Ethernet_MAC::MACSSIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSSIRPack  = Register<0x40028B04, 32, ReadWriteMode, Ethernet_MACMACSSIRBase, T...> ;

  struct Ethernet_MACMACSTSRBase {} ;

  struct MACSTSR : public RegisterBase<0x40028B08, 32, ReadMode>
  {
    using TSS = Ethernet_MAC_MACSTSR_TSS_Values<Ethernet_MAC::MACSTSR, 0, 32, ReadMode, Ethernet_MACMACSTSRBase> ;
    using FieldValues = Ethernet_MAC_MACSTSR_TSS_Values<Ethernet_MAC::MACSTSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSTSRPack  = Register<0x40028B08, 32, ReadMode, Ethernet_MACMACSTSRBase, T...> ;

  struct Ethernet_MACMACSTNRBase {} ;

  struct MACSTNR : public RegisterBase<0x40028B0C, 32, ReadMode>
  {
    using TSSS = Ethernet_MAC_MACSTNR_TSSS_Values<Ethernet_MAC::MACSTNR, 0, 31, ReadMode, Ethernet_MACMACSTNRBase> ;
    using FieldValues = Ethernet_MAC_MACSTNR_TSSS_Values<Ethernet_MAC::MACSTNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSTNRPack  = Register<0x40028B0C, 32, ReadMode, Ethernet_MACMACSTNRBase, T...> ;

  struct Ethernet_MACMACSTSURBase {} ;

  struct MACSTSUR : public RegisterBase<0x40028B10, 32, ReadWriteMode>
  {
    using TSS = Ethernet_MAC_MACSTSUR_TSS_Values<Ethernet_MAC::MACSTSUR, 0, 32, ReadWriteMode, Ethernet_MACMACSTSURBase> ;
    using FieldValues = Ethernet_MAC_MACSTSUR_TSS_Values<Ethernet_MAC::MACSTSUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSTSURPack  = Register<0x40028B10, 32, ReadWriteMode, Ethernet_MACMACSTSURBase, T...> ;

  struct Ethernet_MACMACSTNURBase {} ;

  struct MACSTNUR : public RegisterBase<0x40028B14, 32, ReadWriteMode>
  {
    using TSSS = Ethernet_MAC_MACSTNUR_TSSS_Values<Ethernet_MAC::MACSTNUR, 0, 31, ReadWriteMode, Ethernet_MACMACSTNURBase> ;
    using ADDSUB = Ethernet_MAC_MACSTNUR_ADDSUB_Values<Ethernet_MAC::MACSTNUR, 31, 1, ReadWriteMode, Ethernet_MACMACSTNURBase> ;
    using FieldValues = Ethernet_MAC_MACSTNUR_ADDSUB_Values<Ethernet_MAC::MACSTNUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSTNURPack  = Register<0x40028B14, 32, ReadWriteMode, Ethernet_MACMACSTNURBase, T...> ;

  struct Ethernet_MACMACTSARBase {} ;

  struct MACTSAR : public RegisterBase<0x40028B18, 32, ReadWriteMode>
  {
    using TSAR = Ethernet_MAC_MACTSAR_TSAR_Values<Ethernet_MAC::MACTSAR, 0, 32, ReadWriteMode, Ethernet_MACMACTSARBase> ;
    using FieldValues = Ethernet_MAC_MACTSAR_TSAR_Values<Ethernet_MAC::MACTSAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTSARPack  = Register<0x40028B18, 32, ReadWriteMode, Ethernet_MACMACTSARBase, T...> ;

  struct Ethernet_MACMACTSSRBase {} ;

  struct MACTSSR : public RegisterBase<0x40028B20, 32, ReadMode>
  {
    using TSSOVF = Ethernet_MAC_MACTSSR_TSSOVF_Values<Ethernet_MAC::MACTSSR, 0, 1, ReadMode, Ethernet_MACMACTSSRBase> ;
    using TSTARGT0 = Ethernet_MAC_MACTSSR_TSTARGT0_Values<Ethernet_MAC::MACTSSR, 1, 1, ReadMode, Ethernet_MACMACTSSRBase> ;
    using AUXTSTRIG = Ethernet_MAC_MACTSSR_AUXTSTRIG_Values<Ethernet_MAC::MACTSSR, 2, 1, ReadMode, Ethernet_MACMACTSSRBase> ;
    using TSTRGTERR0 = Ethernet_MAC_MACTSSR_TSTRGTERR0_Values<Ethernet_MAC::MACTSSR, 3, 1, ReadMode, Ethernet_MACMACTSSRBase> ;
    using TXTSSIS = Ethernet_MAC_MACTSSR_TXTSSIS_Values<Ethernet_MAC::MACTSSR, 15, 1, ReadMode, Ethernet_MACMACTSSRBase> ;
    using ATSSTN = Ethernet_MAC_MACTSSR_ATSSTN_Values<Ethernet_MAC::MACTSSR, 16, 4, ReadMode, Ethernet_MACMACTSSRBase> ;
    using ATSSTM = Ethernet_MAC_MACTSSR_ATSSTM_Values<Ethernet_MAC::MACTSSR, 24, 1, ReadMode, Ethernet_MACMACTSSRBase> ;
    using ATSNS = Ethernet_MAC_MACTSSR_ATSNS_Values<Ethernet_MAC::MACTSSR, 25, 5, ReadMode, Ethernet_MACMACTSSRBase> ;
    using FieldValues = Ethernet_MAC_MACTSSR_ATSNS_Values<Ethernet_MAC::MACTSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTSSRPack  = Register<0x40028B20, 32, ReadMode, Ethernet_MACMACTSSRBase, T...> ;

  struct Ethernet_MACMACTxTSSNRBase {} ;

  struct MACTxTSSNR : public RegisterBase<0x40028B30, 32, ReadMode>
  {
    using TXTSSLO = Ethernet_MAC_MACTxTSSNR_TXTSSLO_Values<Ethernet_MAC::MACTxTSSNR, 0, 31, ReadMode, Ethernet_MACMACTxTSSNRBase> ;
    using TXTSSMIS = Ethernet_MAC_MACTxTSSNR_TXTSSMIS_Values<Ethernet_MAC::MACTxTSSNR, 31, 1, ReadMode, Ethernet_MACMACTxTSSNRBase> ;
    using FieldValues = Ethernet_MAC_MACTxTSSNR_TXTSSMIS_Values<Ethernet_MAC::MACTxTSSNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTxTSSNRPack  = Register<0x40028B30, 32, ReadMode, Ethernet_MACMACTxTSSNRBase, T...> ;

  struct Ethernet_MACMACTxTSSSRBase {} ;

  struct MACTxTSSSR : public RegisterBase<0x40028B34, 32, ReadMode>
  {
    using TXTSSHI = Ethernet_MAC_MACTxTSSSR_TXTSSHI_Values<Ethernet_MAC::MACTxTSSSR, 0, 32, ReadMode, Ethernet_MACMACTxTSSSRBase> ;
    using FieldValues = Ethernet_MAC_MACTxTSSSR_TXTSSHI_Values<Ethernet_MAC::MACTxTSSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTxTSSSRPack  = Register<0x40028B34, 32, ReadMode, Ethernet_MACMACTxTSSSRBase, T...> ;

  struct Ethernet_MACMACACRBase {} ;

  struct MACACR : public RegisterBase<0x40028B40, 32, ReadWriteMode>
  {
    using ATSFC = Ethernet_MAC_MACACR_ATSFC_Values<Ethernet_MAC::MACACR, 0, 1, ReadWriteMode, Ethernet_MACMACACRBase> ;
    using ATSEN0 = Ethernet_MAC_MACACR_ATSEN0_Values<Ethernet_MAC::MACACR, 4, 1, ReadWriteMode, Ethernet_MACMACACRBase> ;
    using ATSEN1 = Ethernet_MAC_MACACR_ATSEN1_Values<Ethernet_MAC::MACACR, 5, 1, ReadWriteMode, Ethernet_MACMACACRBase> ;
    using ATSEN2 = Ethernet_MAC_MACACR_ATSEN2_Values<Ethernet_MAC::MACACR, 6, 1, ReadWriteMode, Ethernet_MACMACACRBase> ;
    using ATSEN3 = Ethernet_MAC_MACACR_ATSEN3_Values<Ethernet_MAC::MACACR, 7, 1, ReadWriteMode, Ethernet_MACMACACRBase> ;
    using FieldValues = Ethernet_MAC_MACACR_ATSEN3_Values<Ethernet_MAC::MACACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACACRPack  = Register<0x40028B40, 32, ReadWriteMode, Ethernet_MACMACACRBase, T...> ;

  struct Ethernet_MACMACATSNRBase {} ;

  struct MACATSNR : public RegisterBase<0x40028B48, 32, ReadMode>
  {
    using AUXTSLO = Ethernet_MAC_MACATSNR_AUXTSLO_Values<Ethernet_MAC::MACATSNR, 0, 31, ReadMode, Ethernet_MACMACATSNRBase> ;
    using FieldValues = Ethernet_MAC_MACATSNR_AUXTSLO_Values<Ethernet_MAC::MACATSNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACATSNRPack  = Register<0x40028B48, 32, ReadMode, Ethernet_MACMACATSNRBase, T...> ;

  struct Ethernet_MACMACATSSRBase {} ;

  struct MACATSSR : public RegisterBase<0x40028B4C, 32, ReadMode>
  {
    using AUXTSHI = Ethernet_MAC_MACATSSR_AUXTSHI_Values<Ethernet_MAC::MACATSSR, 0, 32, ReadMode, Ethernet_MACMACATSSRBase> ;
    using FieldValues = Ethernet_MAC_MACATSSR_AUXTSHI_Values<Ethernet_MAC::MACATSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACATSSRPack  = Register<0x40028B4C, 32, ReadMode, Ethernet_MACMACATSSRBase, T...> ;

  struct Ethernet_MACMACTSIACRBase {} ;

  struct MACTSIACR : public RegisterBase<0x40028B50, 32, ReadWriteMode>
  {
    using OSTIAC = Ethernet_MAC_MACTSIACR_OSTIAC_Values<Ethernet_MAC::MACTSIACR, 0, 32, ReadWriteMode, Ethernet_MACMACTSIACRBase> ;
    using FieldValues = Ethernet_MAC_MACTSIACR_OSTIAC_Values<Ethernet_MAC::MACTSIACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTSIACRPack  = Register<0x40028B50, 32, ReadWriteMode, Ethernet_MACMACTSIACRBase, T...> ;

  struct Ethernet_MACMACTSEACRBase {} ;

  struct MACTSEACR : public RegisterBase<0x40028B54, 32, ReadWriteMode>
  {
    using OSTEAC = Ethernet_MAC_MACTSEACR_OSTEAC_Values<Ethernet_MAC::MACTSEACR, 0, 32, ReadWriteMode, Ethernet_MACMACTSEACRBase> ;
    using FieldValues = Ethernet_MAC_MACTSEACR_OSTEAC_Values<Ethernet_MAC::MACTSEACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTSEACRPack  = Register<0x40028B54, 32, ReadWriteMode, Ethernet_MACMACTSEACRBase, T...> ;

  struct Ethernet_MACMACTSICNRBase {} ;

  struct MACTSICNR : public RegisterBase<0x40028B58, 32, ReadWriteMode>
  {
    using TSIC = Ethernet_MAC_MACTSICNR_TSIC_Values<Ethernet_MAC::MACTSICNR, 0, 32, ReadWriteMode, Ethernet_MACMACTSICNRBase> ;
    using FieldValues = Ethernet_MAC_MACTSICNR_TSIC_Values<Ethernet_MAC::MACTSICNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTSICNRPack  = Register<0x40028B58, 32, ReadWriteMode, Ethernet_MACMACTSICNRBase, T...> ;

  struct Ethernet_MACMACTSECNRBase {} ;

  struct MACTSECNR : public RegisterBase<0x40028B5C, 32, ReadWriteMode>
  {
    using TSEC = Ethernet_MAC_MACTSECNR_TSEC_Values<Ethernet_MAC::MACTSECNR, 0, 32, ReadWriteMode, Ethernet_MACMACTSECNRBase> ;
    using FieldValues = Ethernet_MAC_MACTSECNR_TSEC_Values<Ethernet_MAC::MACTSECNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACTSECNRPack  = Register<0x40028B5C, 32, ReadWriteMode, Ethernet_MACMACTSECNRBase, T...> ;

  struct Ethernet_MACMACPPSCRBase {} ;

  struct MACPPSCR : public RegisterBase<0x40028B70, 32, ReadWriteMode>
  {
    using PPSCTRL = Ethernet_MAC_MACPPSCR_PPSCTRL_Values<Ethernet_MAC::MACPPSCR, 0, 4, ReadWriteMode, Ethernet_MACMACPPSCRBase> ;
    using PPSEN0 = Ethernet_MAC_MACPPSCR_PPSEN0_Values<Ethernet_MAC::MACPPSCR, 4, 1, ReadWriteMode, Ethernet_MACMACPPSCRBase> ;
    using TRGTMODSEL0 = Ethernet_MAC_MACPPSCR_TRGTMODSEL0_Values<Ethernet_MAC::MACPPSCR, 5, 2, ReadWriteMode, Ethernet_MACMACPPSCRBase> ;
    using FieldValues = Ethernet_MAC_MACPPSCR_TRGTMODSEL0_Values<Ethernet_MAC::MACPPSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPPSCRPack  = Register<0x40028B70, 32, ReadWriteMode, Ethernet_MACMACPPSCRBase, T...> ;

  struct Ethernet_MACMACPPSTTSRBase {} ;

  struct MACPPSTTSR : public RegisterBase<0x40028B80, 32, ReadWriteMode>
  {
    using TSTRH0 = Ethernet_MAC_MACPPSTTSR_TSTRH0_Values<Ethernet_MAC::MACPPSTTSR, 0, 31, ReadWriteMode, Ethernet_MACMACPPSTTSRBase> ;
    using FieldValues = Ethernet_MAC_MACPPSTTSR_TSTRH0_Values<Ethernet_MAC::MACPPSTTSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPPSTTSRPack  = Register<0x40028B80, 32, ReadWriteMode, Ethernet_MACMACPPSTTSRBase, T...> ;

  struct Ethernet_MACMACPPSTTNRBase {} ;

  struct MACPPSTTNR : public RegisterBase<0x40028B84, 32, ReadWriteMode>
  {
    using TTSL0 = Ethernet_MAC_MACPPSTTNR_TTSL0_Values<Ethernet_MAC::MACPPSTTNR, 0, 31, ReadWriteMode, Ethernet_MACMACPPSTTNRBase> ;
    using TRGTBUSY0 = Ethernet_MAC_MACPPSTTNR_TRGTBUSY0_Values<Ethernet_MAC::MACPPSTTNR, 31, 1, ReadWriteMode, Ethernet_MACMACPPSTTNRBase> ;
    using FieldValues = Ethernet_MAC_MACPPSTTNR_TRGTBUSY0_Values<Ethernet_MAC::MACPPSTTNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPPSTTNRPack  = Register<0x40028B84, 32, ReadWriteMode, Ethernet_MACMACPPSTTNRBase, T...> ;

  struct Ethernet_MACMACPPSIRBase {} ;

  struct MACPPSIR : public RegisterBase<0x40028B88, 32, ReadWriteMode>
  {
    using PPSINT0 = Ethernet_MAC_MACPPSIR_PPSINT0_Values<Ethernet_MAC::MACPPSIR, 0, 32, ReadWriteMode, Ethernet_MACMACPPSIRBase> ;
    using FieldValues = Ethernet_MAC_MACPPSIR_PPSINT0_Values<Ethernet_MAC::MACPPSIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPPSIRPack  = Register<0x40028B88, 32, ReadWriteMode, Ethernet_MACMACPPSIRBase, T...> ;

  struct Ethernet_MACMACPPSWRBase {} ;

  struct MACPPSWR : public RegisterBase<0x40028B8C, 32, ReadWriteMode>
  {
    using PPSWIDTH0 = Ethernet_MAC_MACPPSWR_PPSWIDTH0_Values<Ethernet_MAC::MACPPSWR, 0, 32, ReadWriteMode, Ethernet_MACMACPPSWRBase> ;
    using FieldValues = Ethernet_MAC_MACPPSWR_PPSWIDTH0_Values<Ethernet_MAC::MACPPSWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPPSWRPack  = Register<0x40028B8C, 32, ReadWriteMode, Ethernet_MACMACPPSWRBase, T...> ;

  struct Ethernet_MACMACPOCRBase {} ;

  struct MACPOCR : public RegisterBase<0x40028BC0, 32, ReadWriteMode>
  {
    using PTOEN = Ethernet_MAC_MACPOCR_PTOEN_Values<Ethernet_MAC::MACPOCR, 0, 1, ReadWriteMode, Ethernet_MACMACPOCRBase> ;
    using ASYNCEN = Ethernet_MAC_MACPOCR_ASYNCEN_Values<Ethernet_MAC::MACPOCR, 1, 1, ReadWriteMode, Ethernet_MACMACPOCRBase> ;
    using APDREQEN = Ethernet_MAC_MACPOCR_APDREQEN_Values<Ethernet_MAC::MACPOCR, 2, 1, ReadWriteMode, Ethernet_MACMACPOCRBase> ;
    using ASYNCTRIG = Ethernet_MAC_MACPOCR_ASYNCTRIG_Values<Ethernet_MAC::MACPOCR, 4, 1, ReadWriteMode, Ethernet_MACMACPOCRBase> ;
    using APDREQTRIG = Ethernet_MAC_MACPOCR_APDREQTRIG_Values<Ethernet_MAC::MACPOCR, 5, 1, ReadWriteMode, Ethernet_MACMACPOCRBase> ;
    using DRRDIS = Ethernet_MAC_MACPOCR_DRRDIS_Values<Ethernet_MAC::MACPOCR, 6, 1, ReadWriteMode, Ethernet_MACMACPOCRBase> ;
    using DN = Ethernet_MAC_MACPOCR_DN_Values<Ethernet_MAC::MACPOCR, 8, 8, ReadWriteMode, Ethernet_MACMACPOCRBase> ;
    using FieldValues = Ethernet_MAC_MACPOCR_DN_Values<Ethernet_MAC::MACPOCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACPOCRPack  = Register<0x40028BC0, 32, ReadWriteMode, Ethernet_MACMACPOCRBase, T...> ;

  struct Ethernet_MACMACSPI0RBase {} ;

  struct MACSPI0R : public RegisterBase<0x40028BC4, 32, ReadWriteMode>
  {
    using SPI0 = Ethernet_MAC_MACSPI0R_SPI0_Values<Ethernet_MAC::MACSPI0R, 0, 32, ReadWriteMode, Ethernet_MACMACSPI0RBase> ;
    using FieldValues = Ethernet_MAC_MACSPI0R_SPI0_Values<Ethernet_MAC::MACSPI0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSPI0RPack  = Register<0x40028BC4, 32, ReadWriteMode, Ethernet_MACMACSPI0RBase, T...> ;

  struct Ethernet_MACMACSPI1RBase {} ;

  struct MACSPI1R : public RegisterBase<0x40028BC8, 32, ReadWriteMode>
  {
    using SPI1 = Ethernet_MAC_MACSPI1R_SPI1_Values<Ethernet_MAC::MACSPI1R, 0, 32, ReadWriteMode, Ethernet_MACMACSPI1RBase> ;
    using FieldValues = Ethernet_MAC_MACSPI1R_SPI1_Values<Ethernet_MAC::MACSPI1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSPI1RPack  = Register<0x40028BC8, 32, ReadWriteMode, Ethernet_MACMACSPI1RBase, T...> ;

  struct Ethernet_MACMACSPI2RBase {} ;

  struct MACSPI2R : public RegisterBase<0x40028BCC, 32, ReadWriteMode>
  {
    using SPI2 = Ethernet_MAC_MACSPI2R_SPI2_Values<Ethernet_MAC::MACSPI2R, 0, 16, ReadWriteMode, Ethernet_MACMACSPI2RBase> ;
    using FieldValues = Ethernet_MAC_MACSPI2R_SPI2_Values<Ethernet_MAC::MACSPI2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACSPI2RPack  = Register<0x40028BCC, 32, ReadWriteMode, Ethernet_MACMACSPI2RBase, T...> ;

  struct Ethernet_MACMACLMIRBase {} ;

  struct MACLMIR : public RegisterBase<0x40028BD0, 32, ReadWriteMode>
  {
    using LSI = Ethernet_MAC_MACLMIR_LSI_Values<Ethernet_MAC::MACLMIR, 0, 8, ReadWriteMode, Ethernet_MACMACLMIRBase> ;
    using DRSYNCR = Ethernet_MAC_MACLMIR_DRSYNCR_Values<Ethernet_MAC::MACLMIR, 8, 3, ReadWriteMode, Ethernet_MACMACLMIRBase> ;
    using LMPDRI = Ethernet_MAC_MACLMIR_LMPDRI_Values<Ethernet_MAC::MACLMIR, 24, 8, ReadWriteMode, Ethernet_MACMACLMIRBase> ;
    using FieldValues = Ethernet_MAC_MACLMIR_LMPDRI_Values<Ethernet_MAC::MACLMIR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MACLMIRPack  = Register<0x40028BD0, 32, ReadWriteMode, Ethernet_MACMACLMIRBase, T...> ;

} ;

#endif //#if !defined(ETHERNETMACREGISTERS_HPP)
