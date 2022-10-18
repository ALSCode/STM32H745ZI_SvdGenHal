/*******************************************************************************
* Filename      : dma2dregisters.hpp
*
* Details       : DMA2D. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(DMA2DREGISTERS_HPP)
#define DMA2DREGISTERS_HPP

#include "dma2dfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMA2D
{
  struct DMA2DCRBase {} ;

  struct CR : public RegisterBase<0x52001000, 32, ReadWriteMode>
  {
    using START = DMA2D_CR_START_Values<DMA2D::CR, 0, 1, ReadWriteMode, DMA2DCRBase> ;
    using SUSP = DMA2D_CR_SUSP_Values<DMA2D::CR, 1, 1, ReadWriteMode, DMA2DCRBase> ;
    using ABORT = DMA2D_CR_ABORT_Values<DMA2D::CR, 2, 1, ReadWriteMode, DMA2DCRBase> ;
    using TEIE = DMA2D_CR_TEIE_Values<DMA2D::CR, 8, 1, ReadWriteMode, DMA2DCRBase> ;
    using TCIE = DMA2D_CR_TCIE_Values<DMA2D::CR, 9, 1, ReadWriteMode, DMA2DCRBase> ;
    using TWIE = DMA2D_CR_TWIE_Values<DMA2D::CR, 10, 1, ReadWriteMode, DMA2DCRBase> ;
    using CAEIE = DMA2D_CR_CAEIE_Values<DMA2D::CR, 11, 1, ReadWriteMode, DMA2DCRBase> ;
    using CTCIE = DMA2D_CR_CTCIE_Values<DMA2D::CR, 12, 1, ReadWriteMode, DMA2DCRBase> ;
    using CEIE = DMA2D_CR_CEIE_Values<DMA2D::CR, 13, 1, ReadWriteMode, DMA2DCRBase> ;
    using MODE = DMA2D_CR_MODE_Values<DMA2D::CR, 16, 2, ReadWriteMode, DMA2DCRBase> ;
    using FieldValues = DMA2D_CR_MODE_Values<DMA2D::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x52001000, 32, ReadWriteMode, DMA2DCRBase, T...> ;

  struct DMA2DISRBase {} ;

  struct ISR : public RegisterBase<0x52001004, 32, ReadMode>
  {
    using TEIF = DMA2D_ISR_TEIF_Values<DMA2D::ISR, 0, 1, ReadMode, DMA2DISRBase> ;
    using TCIF = DMA2D_ISR_TCIF_Values<DMA2D::ISR, 1, 1, ReadMode, DMA2DISRBase> ;
    using TWIF = DMA2D_ISR_TWIF_Values<DMA2D::ISR, 2, 1, ReadMode, DMA2DISRBase> ;
    using CAEIF = DMA2D_ISR_CAEIF_Values<DMA2D::ISR, 3, 1, ReadMode, DMA2DISRBase> ;
    using CTCIF = DMA2D_ISR_CTCIF_Values<DMA2D::ISR, 4, 1, ReadMode, DMA2DISRBase> ;
    using CEIF = DMA2D_ISR_CEIF_Values<DMA2D::ISR, 5, 1, ReadMode, DMA2DISRBase> ;
    using FieldValues = DMA2D_ISR_CEIF_Values<DMA2D::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x52001004, 32, ReadMode, DMA2DISRBase, T...> ;

  struct DMA2DIFCRBase {} ;

  struct IFCR : public RegisterBase<0x52001008, 32, ReadWriteMode>
  {
    using CTEIF = DMA2D_IFCR_CTEIF_Values<DMA2D::IFCR, 0, 1, ReadWriteMode, DMA2DIFCRBase> ;
    using CTCIF = DMA2D_IFCR_CTCIF_Values<DMA2D::IFCR, 1, 1, ReadWriteMode, DMA2DIFCRBase> ;
    using CTWIF = DMA2D_IFCR_CTWIF_Values<DMA2D::IFCR, 2, 1, ReadWriteMode, DMA2DIFCRBase> ;
    using CAECIF = DMA2D_IFCR_CAECIF_Values<DMA2D::IFCR, 3, 1, ReadWriteMode, DMA2DIFCRBase> ;
    using CCTCIF = DMA2D_IFCR_CCTCIF_Values<DMA2D::IFCR, 4, 1, ReadWriteMode, DMA2DIFCRBase> ;
    using CCEIF = DMA2D_IFCR_CCEIF_Values<DMA2D::IFCR, 5, 1, ReadWriteMode, DMA2DIFCRBase> ;
    using FieldValues = DMA2D_IFCR_CCEIF_Values<DMA2D::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x52001008, 32, ReadWriteMode, DMA2DIFCRBase, T...> ;

  struct DMA2DFGMARBase {} ;

  struct FGMAR : public RegisterBase<0x5200100C, 32, ReadWriteMode>
  {
    using MA = DMA2D_FGMAR_MA_Values<DMA2D::FGMAR, 0, 32, ReadWriteMode, DMA2DFGMARBase> ;
    using FieldValues = DMA2D_FGMAR_MA_Values<DMA2D::FGMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FGMARPack  = Register<0x5200100C, 32, ReadWriteMode, DMA2DFGMARBase, T...> ;

  struct DMA2DFGORBase {} ;

  struct FGOR : public RegisterBase<0x52001010, 32, ReadWriteMode>
  {
    using LO = DMA2D_FGOR_LO_Values<DMA2D::FGOR, 0, 14, ReadWriteMode, DMA2DFGORBase> ;
    using FieldValues = DMA2D_FGOR_LO_Values<DMA2D::FGOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FGORPack  = Register<0x52001010, 32, ReadWriteMode, DMA2DFGORBase, T...> ;

  struct DMA2DBGMARBase {} ;

  struct BGMAR : public RegisterBase<0x52001014, 32, ReadWriteMode>
  {
    using MA = DMA2D_BGMAR_MA_Values<DMA2D::BGMAR, 0, 32, ReadWriteMode, DMA2DBGMARBase> ;
    using FieldValues = DMA2D_BGMAR_MA_Values<DMA2D::BGMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BGMARPack  = Register<0x52001014, 32, ReadWriteMode, DMA2DBGMARBase, T...> ;

  struct DMA2DBGORBase {} ;

  struct BGOR : public RegisterBase<0x52001018, 32, ReadWriteMode>
  {
    using LO = DMA2D_BGOR_LO_Values<DMA2D::BGOR, 0, 14, ReadWriteMode, DMA2DBGORBase> ;
    using FieldValues = DMA2D_BGOR_LO_Values<DMA2D::BGOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BGORPack  = Register<0x52001018, 32, ReadWriteMode, DMA2DBGORBase, T...> ;

  struct DMA2DFGPFCCRBase {} ;

  struct FGPFCCR : public RegisterBase<0x5200101C, 32, ReadWriteMode>
  {
    using CM = DMA2D_FGPFCCR_CM_Values<DMA2D::FGPFCCR, 0, 4, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using CCM = DMA2D_FGPFCCR_CCM_Values<DMA2D::FGPFCCR, 4, 1, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using START = DMA2D_FGPFCCR_START_Values<DMA2D::FGPFCCR, 5, 1, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using CS = DMA2D_FGPFCCR_CS_Values<DMA2D::FGPFCCR, 8, 8, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using AM = DMA2D_FGPFCCR_AM_Values<DMA2D::FGPFCCR, 16, 2, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using CSS = DMA2D_FGPFCCR_CSS_Values<DMA2D::FGPFCCR, 18, 2, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using AI = DMA2D_FGPFCCR_AI_Values<DMA2D::FGPFCCR, 20, 1, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using RBS = DMA2D_FGPFCCR_RBS_Values<DMA2D::FGPFCCR, 21, 1, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using ALPHA = DMA2D_FGPFCCR_ALPHA_Values<DMA2D::FGPFCCR, 24, 8, ReadWriteMode, DMA2DFGPFCCRBase> ;
    using FieldValues = DMA2D_FGPFCCR_ALPHA_Values<DMA2D::FGPFCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FGPFCCRPack  = Register<0x5200101C, 32, ReadWriteMode, DMA2DFGPFCCRBase, T...> ;

  struct DMA2DFGCOLRBase {} ;

  struct FGCOLR : public RegisterBase<0x52001020, 32, ReadWriteMode>
  {
    using BLUE = DMA2D_FGCOLR_BLUE_Values<DMA2D::FGCOLR, 0, 8, ReadWriteMode, DMA2DFGCOLRBase> ;
    using GREEN = DMA2D_FGCOLR_GREEN_Values<DMA2D::FGCOLR, 8, 8, ReadWriteMode, DMA2DFGCOLRBase> ;
    using RED = DMA2D_FGCOLR_RED_Values<DMA2D::FGCOLR, 16, 8, ReadWriteMode, DMA2DFGCOLRBase> ;
    using FieldValues = DMA2D_FGCOLR_RED_Values<DMA2D::FGCOLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FGCOLRPack  = Register<0x52001020, 32, ReadWriteMode, DMA2DFGCOLRBase, T...> ;

  struct DMA2DBGPFCCRBase {} ;

  struct BGPFCCR : public RegisterBase<0x52001024, 32, ReadWriteMode>
  {
    using CM = DMA2D_BGPFCCR_CM_Values<DMA2D::BGPFCCR, 0, 4, ReadWriteMode, DMA2DBGPFCCRBase> ;
    using CCM = DMA2D_BGPFCCR_CCM_Values<DMA2D::BGPFCCR, 4, 1, ReadWriteMode, DMA2DBGPFCCRBase> ;
    using START = DMA2D_BGPFCCR_START_Values<DMA2D::BGPFCCR, 5, 1, ReadWriteMode, DMA2DBGPFCCRBase> ;
    using CS = DMA2D_BGPFCCR_CS_Values<DMA2D::BGPFCCR, 8, 8, ReadWriteMode, DMA2DBGPFCCRBase> ;
    using AM = DMA2D_BGPFCCR_AM_Values<DMA2D::BGPFCCR, 16, 2, ReadWriteMode, DMA2DBGPFCCRBase> ;
    using AI = DMA2D_BGPFCCR_AI_Values<DMA2D::BGPFCCR, 20, 1, ReadWriteMode, DMA2DBGPFCCRBase> ;
    using RBS = DMA2D_BGPFCCR_RBS_Values<DMA2D::BGPFCCR, 21, 1, ReadWriteMode, DMA2DBGPFCCRBase> ;
    using ALPHA = DMA2D_BGPFCCR_ALPHA_Values<DMA2D::BGPFCCR, 24, 8, ReadWriteMode, DMA2DBGPFCCRBase> ;
    using FieldValues = DMA2D_BGPFCCR_ALPHA_Values<DMA2D::BGPFCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BGPFCCRPack  = Register<0x52001024, 32, ReadWriteMode, DMA2DBGPFCCRBase, T...> ;

  struct DMA2DBGCOLRBase {} ;

  struct BGCOLR : public RegisterBase<0x52001028, 32, ReadWriteMode>
  {
    using BLUE = DMA2D_BGCOLR_BLUE_Values<DMA2D::BGCOLR, 0, 8, ReadWriteMode, DMA2DBGCOLRBase> ;
    using GREEN = DMA2D_BGCOLR_GREEN_Values<DMA2D::BGCOLR, 8, 8, ReadWriteMode, DMA2DBGCOLRBase> ;
    using RED = DMA2D_BGCOLR_RED_Values<DMA2D::BGCOLR, 16, 8, ReadWriteMode, DMA2DBGCOLRBase> ;
    using FieldValues = DMA2D_BGCOLR_RED_Values<DMA2D::BGCOLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BGCOLRPack  = Register<0x52001028, 32, ReadWriteMode, DMA2DBGCOLRBase, T...> ;

  struct DMA2DFGCMARBase {} ;

  struct FGCMAR : public RegisterBase<0x5200102C, 32, ReadWriteMode>
  {
    using MA = DMA2D_FGCMAR_MA_Values<DMA2D::FGCMAR, 0, 32, ReadWriteMode, DMA2DFGCMARBase> ;
    using FieldValues = DMA2D_FGCMAR_MA_Values<DMA2D::FGCMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FGCMARPack  = Register<0x5200102C, 32, ReadWriteMode, DMA2DFGCMARBase, T...> ;

  struct DMA2DBGCMARBase {} ;

  struct BGCMAR : public RegisterBase<0x52001030, 32, ReadWriteMode>
  {
    using MA = DMA2D_BGCMAR_MA_Values<DMA2D::BGCMAR, 0, 32, ReadWriteMode, DMA2DBGCMARBase> ;
    using FieldValues = DMA2D_BGCMAR_MA_Values<DMA2D::BGCMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BGCMARPack  = Register<0x52001030, 32, ReadWriteMode, DMA2DBGCMARBase, T...> ;

  struct DMA2DOPFCCRBase {} ;

  struct OPFCCR : public RegisterBase<0x52001034, 32, ReadWriteMode>
  {
    using CM = DMA2D_OPFCCR_CM_Values<DMA2D::OPFCCR, 0, 3, ReadWriteMode, DMA2DOPFCCRBase> ;
    using AI = DMA2D_OPFCCR_AI_Values<DMA2D::OPFCCR, 20, 1, ReadWriteMode, DMA2DOPFCCRBase> ;
    using RBS = DMA2D_OPFCCR_RBS_Values<DMA2D::OPFCCR, 21, 1, ReadWriteMode, DMA2DOPFCCRBase> ;
    using FieldValues = DMA2D_OPFCCR_RBS_Values<DMA2D::OPFCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPFCCRPack  = Register<0x52001034, 32, ReadWriteMode, DMA2DOPFCCRBase, T...> ;

  struct DMA2DOCOLRBase {} ;

  struct OCOLR : public RegisterBase<0x52001038, 32, ReadWriteMode>
  {
    using BLUE = DMA2D_OCOLR_BLUE_Values<DMA2D::OCOLR, 0, 8, ReadWriteMode, DMA2DOCOLRBase> ;
    using GREEN = DMA2D_OCOLR_GREEN_Values<DMA2D::OCOLR, 8, 8, ReadWriteMode, DMA2DOCOLRBase> ;
    using RED = DMA2D_OCOLR_RED_Values<DMA2D::OCOLR, 16, 8, ReadWriteMode, DMA2DOCOLRBase> ;
    using ALPHA = DMA2D_OCOLR_ALPHA_Values<DMA2D::OCOLR, 24, 8, ReadWriteMode, DMA2DOCOLRBase> ;
    using FieldValues = DMA2D_OCOLR_ALPHA_Values<DMA2D::OCOLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OCOLRPack  = Register<0x52001038, 32, ReadWriteMode, DMA2DOCOLRBase, T...> ;

  struct DMA2DOMARBase {} ;

  struct OMAR : public RegisterBase<0x5200103C, 32, ReadWriteMode>
  {
    using MA = DMA2D_OMAR_MA_Values<DMA2D::OMAR, 0, 32, ReadWriteMode, DMA2DOMARBase> ;
    using FieldValues = DMA2D_OMAR_MA_Values<DMA2D::OMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OMARPack  = Register<0x5200103C, 32, ReadWriteMode, DMA2DOMARBase, T...> ;

  struct DMA2DOORBase {} ;

  struct OOR : public RegisterBase<0x52001040, 32, ReadWriteMode>
  {
    using LO = DMA2D_OOR_LO_Values<DMA2D::OOR, 0, 14, ReadWriteMode, DMA2DOORBase> ;
    using FieldValues = DMA2D_OOR_LO_Values<DMA2D::OOR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OORPack  = Register<0x52001040, 32, ReadWriteMode, DMA2DOORBase, T...> ;

  struct DMA2DNLRBase {} ;

  struct NLR : public RegisterBase<0x52001044, 32, ReadWriteMode>
  {
    using NL = DMA2D_NLR_NL_Values<DMA2D::NLR, 0, 16, ReadWriteMode, DMA2DNLRBase> ;
    using PL = DMA2D_NLR_PL_Values<DMA2D::NLR, 16, 14, ReadWriteMode, DMA2DNLRBase> ;
    using FieldValues = DMA2D_NLR_PL_Values<DMA2D::NLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using NLRPack  = Register<0x52001044, 32, ReadWriteMode, DMA2DNLRBase, T...> ;

  struct DMA2DLWRBase {} ;

  struct LWR : public RegisterBase<0x52001048, 32, ReadWriteMode>
  {
    using LW = DMA2D_LWR_LW_Values<DMA2D::LWR, 0, 16, ReadWriteMode, DMA2DLWRBase> ;
    using FieldValues = DMA2D_LWR_LW_Values<DMA2D::LWR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LWRPack  = Register<0x52001048, 32, ReadWriteMode, DMA2DLWRBase, T...> ;

  struct DMA2DAMTCRBase {} ;

  struct AMTCR : public RegisterBase<0x5200104C, 32, ReadWriteMode>
  {
    using EN = DMA2D_AMTCR_EN_Values<DMA2D::AMTCR, 0, 1, ReadWriteMode, DMA2DAMTCRBase> ;
    using DT = DMA2D_AMTCR_DT_Values<DMA2D::AMTCR, 8, 8, ReadWriteMode, DMA2DAMTCRBase> ;
    using FieldValues = DMA2D_AMTCR_DT_Values<DMA2D::AMTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AMTCRPack  = Register<0x5200104C, 32, ReadWriteMode, DMA2DAMTCRBase, T...> ;

} ;

#endif //#if !defined(DMA2DREGISTERS_HPP)
