/*******************************************************************************
* Filename      : bdmaregisters.hpp
*
* Details       : BDMA. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(BDMAREGISTERS_HPP)
#define BDMAREGISTERS_HPP

#include "bdmafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct BDMA
{
  struct BDMAISRBase {} ;

  struct ISR : public RegisterBase<0x58025400, 32, ReadMode>
  {
    using GIF1 = BDMA_ISR_GIF1_Values<BDMA::ISR, 0, 1, ReadMode, BDMAISRBase> ;
    using TCIF1 = BDMA_ISR_TCIF1_Values<BDMA::ISR, 1, 1, ReadMode, BDMAISRBase> ;
    using HTIF1 = BDMA_ISR_HTIF1_Values<BDMA::ISR, 2, 1, ReadMode, BDMAISRBase> ;
    using TEIF1 = BDMA_ISR_TEIF1_Values<BDMA::ISR, 3, 1, ReadMode, BDMAISRBase> ;
    using GIF2 = BDMA_ISR_GIF2_Values<BDMA::ISR, 4, 1, ReadMode, BDMAISRBase> ;
    using TCIF2 = BDMA_ISR_TCIF2_Values<BDMA::ISR, 5, 1, ReadMode, BDMAISRBase> ;
    using HTIF2 = BDMA_ISR_HTIF2_Values<BDMA::ISR, 6, 1, ReadMode, BDMAISRBase> ;
    using TEIF2 = BDMA_ISR_TEIF2_Values<BDMA::ISR, 7, 1, ReadMode, BDMAISRBase> ;
    using GIF3 = BDMA_ISR_GIF3_Values<BDMA::ISR, 8, 1, ReadMode, BDMAISRBase> ;
    using TCIF3 = BDMA_ISR_TCIF3_Values<BDMA::ISR, 9, 1, ReadMode, BDMAISRBase> ;
    using HTIF3 = BDMA_ISR_HTIF3_Values<BDMA::ISR, 10, 1, ReadMode, BDMAISRBase> ;
    using TEIF3 = BDMA_ISR_TEIF3_Values<BDMA::ISR, 11, 1, ReadMode, BDMAISRBase> ;
    using GIF4 = BDMA_ISR_GIF4_Values<BDMA::ISR, 12, 1, ReadMode, BDMAISRBase> ;
    using TCIF4 = BDMA_ISR_TCIF4_Values<BDMA::ISR, 13, 1, ReadMode, BDMAISRBase> ;
    using HTIF4 = BDMA_ISR_HTIF4_Values<BDMA::ISR, 14, 1, ReadMode, BDMAISRBase> ;
    using TEIF4 = BDMA_ISR_TEIF4_Values<BDMA::ISR, 15, 1, ReadMode, BDMAISRBase> ;
    using GIF5 = BDMA_ISR_GIF5_Values<BDMA::ISR, 16, 1, ReadMode, BDMAISRBase> ;
    using TCIF5 = BDMA_ISR_TCIF5_Values<BDMA::ISR, 17, 1, ReadMode, BDMAISRBase> ;
    using HTIF5 = BDMA_ISR_HTIF5_Values<BDMA::ISR, 18, 1, ReadMode, BDMAISRBase> ;
    using TEIF5 = BDMA_ISR_TEIF5_Values<BDMA::ISR, 19, 1, ReadMode, BDMAISRBase> ;
    using GIF6 = BDMA_ISR_GIF6_Values<BDMA::ISR, 20, 1, ReadMode, BDMAISRBase> ;
    using TCIF6 = BDMA_ISR_TCIF6_Values<BDMA::ISR, 21, 1, ReadMode, BDMAISRBase> ;
    using HTIF6 = BDMA_ISR_HTIF6_Values<BDMA::ISR, 22, 1, ReadMode, BDMAISRBase> ;
    using TEIF6 = BDMA_ISR_TEIF6_Values<BDMA::ISR, 23, 1, ReadMode, BDMAISRBase> ;
    using GIF7 = BDMA_ISR_GIF7_Values<BDMA::ISR, 24, 1, ReadMode, BDMAISRBase> ;
    using TCIF7 = BDMA_ISR_TCIF7_Values<BDMA::ISR, 25, 1, ReadMode, BDMAISRBase> ;
    using HTIF7 = BDMA_ISR_HTIF7_Values<BDMA::ISR, 26, 1, ReadMode, BDMAISRBase> ;
    using TEIF7 = BDMA_ISR_TEIF7_Values<BDMA::ISR, 27, 1, ReadMode, BDMAISRBase> ;
    using GIF8 = BDMA_ISR_GIF8_Values<BDMA::ISR, 28, 1, ReadMode, BDMAISRBase> ;
    using TCIF8 = BDMA_ISR_TCIF8_Values<BDMA::ISR, 29, 1, ReadMode, BDMAISRBase> ;
    using HTIF8 = BDMA_ISR_HTIF8_Values<BDMA::ISR, 30, 1, ReadMode, BDMAISRBase> ;
    using TEIF8 = BDMA_ISR_TEIF8_Values<BDMA::ISR, 31, 1, ReadMode, BDMAISRBase> ;
    using FieldValues = BDMA_ISR_TEIF8_Values<BDMA::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x58025400, 32, ReadMode, BDMAISRBase, T...> ;

  struct BDMAIFCRBase {} ;

  struct IFCR : public RegisterBase<0x58025404, 32, WriteMode>
  {
    using CGIF1 = BDMA_IFCR_CGIF1_Values<BDMA::IFCR, 0, 1, WriteMode, BDMAIFCRBase> ;
    using CTCIF1 = BDMA_IFCR_CTCIF1_Values<BDMA::IFCR, 1, 1, WriteMode, BDMAIFCRBase> ;
    using CHTIF1 = BDMA_IFCR_CHTIF1_Values<BDMA::IFCR, 2, 1, WriteMode, BDMAIFCRBase> ;
    using CTEIF1 = BDMA_IFCR_CTEIF1_Values<BDMA::IFCR, 3, 1, WriteMode, BDMAIFCRBase> ;
    using CGIF2 = BDMA_IFCR_CGIF2_Values<BDMA::IFCR, 4, 1, WriteMode, BDMAIFCRBase> ;
    using CTCIF2 = BDMA_IFCR_CTCIF2_Values<BDMA::IFCR, 5, 1, WriteMode, BDMAIFCRBase> ;
    using CHTIF2 = BDMA_IFCR_CHTIF2_Values<BDMA::IFCR, 6, 1, WriteMode, BDMAIFCRBase> ;
    using CTEIF2 = BDMA_IFCR_CTEIF2_Values<BDMA::IFCR, 7, 1, WriteMode, BDMAIFCRBase> ;
    using CGIF3 = BDMA_IFCR_CGIF3_Values<BDMA::IFCR, 8, 1, WriteMode, BDMAIFCRBase> ;
    using CTCIF3 = BDMA_IFCR_CTCIF3_Values<BDMA::IFCR, 9, 1, WriteMode, BDMAIFCRBase> ;
    using CHTIF3 = BDMA_IFCR_CHTIF3_Values<BDMA::IFCR, 10, 1, WriteMode, BDMAIFCRBase> ;
    using CTEIF3 = BDMA_IFCR_CTEIF3_Values<BDMA::IFCR, 11, 1, WriteMode, BDMAIFCRBase> ;
    using CGIF4 = BDMA_IFCR_CGIF4_Values<BDMA::IFCR, 12, 1, WriteMode, BDMAIFCRBase> ;
    using CTCIF4 = BDMA_IFCR_CTCIF4_Values<BDMA::IFCR, 13, 1, WriteMode, BDMAIFCRBase> ;
    using CHTIF4 = BDMA_IFCR_CHTIF4_Values<BDMA::IFCR, 14, 1, WriteMode, BDMAIFCRBase> ;
    using CTEIF4 = BDMA_IFCR_CTEIF4_Values<BDMA::IFCR, 15, 1, WriteMode, BDMAIFCRBase> ;
    using CGIF5 = BDMA_IFCR_CGIF5_Values<BDMA::IFCR, 16, 1, WriteMode, BDMAIFCRBase> ;
    using CTCIF5 = BDMA_IFCR_CTCIF5_Values<BDMA::IFCR, 17, 1, WriteMode, BDMAIFCRBase> ;
    using CHTIF5 = BDMA_IFCR_CHTIF5_Values<BDMA::IFCR, 18, 1, WriteMode, BDMAIFCRBase> ;
    using CTEIF5 = BDMA_IFCR_CTEIF5_Values<BDMA::IFCR, 19, 1, WriteMode, BDMAIFCRBase> ;
    using CGIF6 = BDMA_IFCR_CGIF6_Values<BDMA::IFCR, 20, 1, WriteMode, BDMAIFCRBase> ;
    using CTCIF6 = BDMA_IFCR_CTCIF6_Values<BDMA::IFCR, 21, 1, WriteMode, BDMAIFCRBase> ;
    using CHTIF6 = BDMA_IFCR_CHTIF6_Values<BDMA::IFCR, 22, 1, WriteMode, BDMAIFCRBase> ;
    using CTEIF6 = BDMA_IFCR_CTEIF6_Values<BDMA::IFCR, 23, 1, WriteMode, BDMAIFCRBase> ;
    using CGIF7 = BDMA_IFCR_CGIF7_Values<BDMA::IFCR, 24, 1, WriteMode, BDMAIFCRBase> ;
    using CTCIF7 = BDMA_IFCR_CTCIF7_Values<BDMA::IFCR, 25, 1, WriteMode, BDMAIFCRBase> ;
    using CHTIF7 = BDMA_IFCR_CHTIF7_Values<BDMA::IFCR, 26, 1, WriteMode, BDMAIFCRBase> ;
    using CTEIF7 = BDMA_IFCR_CTEIF7_Values<BDMA::IFCR, 27, 1, WriteMode, BDMAIFCRBase> ;
    using CGIF8 = BDMA_IFCR_CGIF8_Values<BDMA::IFCR, 28, 1, WriteMode, BDMAIFCRBase> ;
    using CTCIF8 = BDMA_IFCR_CTCIF8_Values<BDMA::IFCR, 29, 1, WriteMode, BDMAIFCRBase> ;
    using CHTIF8 = BDMA_IFCR_CHTIF8_Values<BDMA::IFCR, 30, 1, WriteMode, BDMAIFCRBase> ;
    using CTEIF8 = BDMA_IFCR_CTEIF8_Values<BDMA::IFCR, 31, 1, WriteMode, BDMAIFCRBase> ;
    using FieldValues = BDMA_IFCR_CTEIF8_Values<BDMA::IFCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IFCRPack  = Register<0x58025404, 32, WriteMode, BDMAIFCRBase, T...> ;

  struct BDMACCR1Base {} ;

  struct CCR1 : public RegisterBase<0x58025408, 32, ReadWriteMode>
  {
    using EN = BDMA_CCR1_EN_Values<BDMA::CCR1, 0, 1, ReadWriteMode, BDMACCR1Base> ;
    using TCIE = BDMA_CCR1_TCIE_Values<BDMA::CCR1, 1, 1, ReadWriteMode, BDMACCR1Base> ;
    using HTIE = BDMA_CCR1_HTIE_Values<BDMA::CCR1, 2, 1, ReadWriteMode, BDMACCR1Base> ;
    using TEIE = BDMA_CCR1_TEIE_Values<BDMA::CCR1, 3, 1, ReadWriteMode, BDMACCR1Base> ;
    using DIR = BDMA_CCR1_DIR_Values<BDMA::CCR1, 4, 1, ReadWriteMode, BDMACCR1Base> ;
    using CIRC = BDMA_CCR1_CIRC_Values<BDMA::CCR1, 5, 1, ReadWriteMode, BDMACCR1Base> ;
    using PINC = BDMA_CCR1_PINC_Values<BDMA::CCR1, 6, 1, ReadWriteMode, BDMACCR1Base> ;
    using MINC = BDMA_CCR1_MINC_Values<BDMA::CCR1, 7, 1, ReadWriteMode, BDMACCR1Base> ;
    using PSIZE = BDMA_CCR1_PSIZE_Values<BDMA::CCR1, 8, 2, ReadWriteMode, BDMACCR1Base> ;
    using MSIZE = BDMA_CCR1_MSIZE_Values<BDMA::CCR1, 10, 2, ReadWriteMode, BDMACCR1Base> ;
    using PL = BDMA_CCR1_PL_Values<BDMA::CCR1, 12, 2, ReadWriteMode, BDMACCR1Base> ;
    using MEM2MEM = BDMA_CCR1_MEM2MEM_Values<BDMA::CCR1, 14, 1, ReadWriteMode, BDMACCR1Base> ;
    using FieldValues = BDMA_CCR1_MEM2MEM_Values<BDMA::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x58025408, 32, ReadWriteMode, BDMACCR1Base, T...> ;

  struct BDMACNDTR1Base {} ;

  struct CNDTR1 : public RegisterBase<0x5802540C, 32, ReadWriteMode>
  {
    using NDT = BDMA_CNDTR1_NDT_Values<BDMA::CNDTR1, 0, 16, ReadWriteMode, BDMACNDTR1Base> ;
    using FieldValues = BDMA_CNDTR1_NDT_Values<BDMA::CNDTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR1Pack  = Register<0x5802540C, 32, ReadWriteMode, BDMACNDTR1Base, T...> ;

  struct BDMACPAR1Base {} ;

  struct CPAR1 : public RegisterBase<0x58025410, 32, ReadWriteMode>
  {
    using PA = BDMA_CPAR1_PA_Values<BDMA::CPAR1, 0, 32, ReadWriteMode, BDMACPAR1Base> ;
    using FieldValues = BDMA_CPAR1_PA_Values<BDMA::CPAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR1Pack  = Register<0x58025410, 32, ReadWriteMode, BDMACPAR1Base, T...> ;

  struct BDMACMAR1Base {} ;

  struct CMAR1 : public RegisterBase<0x58025414, 32, ReadWriteMode>
  {
    using MA = BDMA_CMAR1_MA_Values<BDMA::CMAR1, 0, 32, ReadWriteMode, BDMACMAR1Base> ;
    using FieldValues = BDMA_CMAR1_MA_Values<BDMA::CMAR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR1Pack  = Register<0x58025414, 32, ReadWriteMode, BDMACMAR1Base, T...> ;

  struct BDMACCR2Base {} ;

  struct CCR2 : public RegisterBase<0x5802541C, 32, ReadWriteMode>
  {
    using EN = BDMA_CCR2_EN_Values<BDMA::CCR2, 0, 1, ReadWriteMode, BDMACCR2Base> ;
    using TCIE = BDMA_CCR2_TCIE_Values<BDMA::CCR2, 1, 1, ReadWriteMode, BDMACCR2Base> ;
    using HTIE = BDMA_CCR2_HTIE_Values<BDMA::CCR2, 2, 1, ReadWriteMode, BDMACCR2Base> ;
    using TEIE = BDMA_CCR2_TEIE_Values<BDMA::CCR2, 3, 1, ReadWriteMode, BDMACCR2Base> ;
    using DIR = BDMA_CCR2_DIR_Values<BDMA::CCR2, 4, 1, ReadWriteMode, BDMACCR2Base> ;
    using CIRC = BDMA_CCR2_CIRC_Values<BDMA::CCR2, 5, 1, ReadWriteMode, BDMACCR2Base> ;
    using PINC = BDMA_CCR2_PINC_Values<BDMA::CCR2, 6, 1, ReadWriteMode, BDMACCR2Base> ;
    using MINC = BDMA_CCR2_MINC_Values<BDMA::CCR2, 7, 1, ReadWriteMode, BDMACCR2Base> ;
    using PSIZE = BDMA_CCR2_PSIZE_Values<BDMA::CCR2, 8, 2, ReadWriteMode, BDMACCR2Base> ;
    using MSIZE = BDMA_CCR2_MSIZE_Values<BDMA::CCR2, 10, 2, ReadWriteMode, BDMACCR2Base> ;
    using PL = BDMA_CCR2_PL_Values<BDMA::CCR2, 12, 2, ReadWriteMode, BDMACCR2Base> ;
    using MEM2MEM = BDMA_CCR2_MEM2MEM_Values<BDMA::CCR2, 14, 1, ReadWriteMode, BDMACCR2Base> ;
    using FieldValues = BDMA_CCR2_MEM2MEM_Values<BDMA::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x5802541C, 32, ReadWriteMode, BDMACCR2Base, T...> ;

  struct BDMACNDTR2Base {} ;

  struct CNDTR2 : public RegisterBase<0x58025420, 32, ReadWriteMode>
  {
    using NDT = BDMA_CNDTR2_NDT_Values<BDMA::CNDTR2, 0, 16, ReadWriteMode, BDMACNDTR2Base> ;
    using FieldValues = BDMA_CNDTR2_NDT_Values<BDMA::CNDTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR2Pack  = Register<0x58025420, 32, ReadWriteMode, BDMACNDTR2Base, T...> ;

  struct BDMACPAR2Base {} ;

  struct CPAR2 : public RegisterBase<0x58025424, 32, ReadWriteMode>
  {
    using PA = BDMA_CPAR2_PA_Values<BDMA::CPAR2, 0, 32, ReadWriteMode, BDMACPAR2Base> ;
    using FieldValues = BDMA_CPAR2_PA_Values<BDMA::CPAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR2Pack  = Register<0x58025424, 32, ReadWriteMode, BDMACPAR2Base, T...> ;

  struct BDMACMAR2Base {} ;

  struct CMAR2 : public RegisterBase<0x58025428, 32, ReadWriteMode>
  {
    using MA = BDMA_CMAR2_MA_Values<BDMA::CMAR2, 0, 32, ReadWriteMode, BDMACMAR2Base> ;
    using FieldValues = BDMA_CMAR2_MA_Values<BDMA::CMAR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR2Pack  = Register<0x58025428, 32, ReadWriteMode, BDMACMAR2Base, T...> ;

  struct BDMACCR3Base {} ;

  struct CCR3 : public RegisterBase<0x58025430, 32, ReadWriteMode>
  {
    using EN = BDMA_CCR3_EN_Values<BDMA::CCR3, 0, 1, ReadWriteMode, BDMACCR3Base> ;
    using TCIE = BDMA_CCR3_TCIE_Values<BDMA::CCR3, 1, 1, ReadWriteMode, BDMACCR3Base> ;
    using HTIE = BDMA_CCR3_HTIE_Values<BDMA::CCR3, 2, 1, ReadWriteMode, BDMACCR3Base> ;
    using TEIE = BDMA_CCR3_TEIE_Values<BDMA::CCR3, 3, 1, ReadWriteMode, BDMACCR3Base> ;
    using DIR = BDMA_CCR3_DIR_Values<BDMA::CCR3, 4, 1, ReadWriteMode, BDMACCR3Base> ;
    using CIRC = BDMA_CCR3_CIRC_Values<BDMA::CCR3, 5, 1, ReadWriteMode, BDMACCR3Base> ;
    using PINC = BDMA_CCR3_PINC_Values<BDMA::CCR3, 6, 1, ReadWriteMode, BDMACCR3Base> ;
    using MINC = BDMA_CCR3_MINC_Values<BDMA::CCR3, 7, 1, ReadWriteMode, BDMACCR3Base> ;
    using PSIZE = BDMA_CCR3_PSIZE_Values<BDMA::CCR3, 8, 2, ReadWriteMode, BDMACCR3Base> ;
    using MSIZE = BDMA_CCR3_MSIZE_Values<BDMA::CCR3, 10, 2, ReadWriteMode, BDMACCR3Base> ;
    using PL = BDMA_CCR3_PL_Values<BDMA::CCR3, 12, 2, ReadWriteMode, BDMACCR3Base> ;
    using MEM2MEM = BDMA_CCR3_MEM2MEM_Values<BDMA::CCR3, 14, 1, ReadWriteMode, BDMACCR3Base> ;
    using FieldValues = BDMA_CCR3_MEM2MEM_Values<BDMA::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x58025430, 32, ReadWriteMode, BDMACCR3Base, T...> ;

  struct BDMACNDTR3Base {} ;

  struct CNDTR3 : public RegisterBase<0x58025434, 32, ReadWriteMode>
  {
    using NDT = BDMA_CNDTR3_NDT_Values<BDMA::CNDTR3, 0, 16, ReadWriteMode, BDMACNDTR3Base> ;
    using FieldValues = BDMA_CNDTR3_NDT_Values<BDMA::CNDTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR3Pack  = Register<0x58025434, 32, ReadWriteMode, BDMACNDTR3Base, T...> ;

  struct BDMACPAR3Base {} ;

  struct CPAR3 : public RegisterBase<0x58025438, 32, ReadWriteMode>
  {
    using PA = BDMA_CPAR3_PA_Values<BDMA::CPAR3, 0, 32, ReadWriteMode, BDMACPAR3Base> ;
    using FieldValues = BDMA_CPAR3_PA_Values<BDMA::CPAR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR3Pack  = Register<0x58025438, 32, ReadWriteMode, BDMACPAR3Base, T...> ;

  struct BDMACMAR3Base {} ;

  struct CMAR3 : public RegisterBase<0x5802543C, 32, ReadWriteMode>
  {
    using MA = BDMA_CMAR3_MA_Values<BDMA::CMAR3, 0, 32, ReadWriteMode, BDMACMAR3Base> ;
    using FieldValues = BDMA_CMAR3_MA_Values<BDMA::CMAR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR3Pack  = Register<0x5802543C, 32, ReadWriteMode, BDMACMAR3Base, T...> ;

  struct BDMACCR4Base {} ;

  struct CCR4 : public RegisterBase<0x58025444, 32, ReadWriteMode>
  {
    using EN = BDMA_CCR4_EN_Values<BDMA::CCR4, 0, 1, ReadWriteMode, BDMACCR4Base> ;
    using TCIE = BDMA_CCR4_TCIE_Values<BDMA::CCR4, 1, 1, ReadWriteMode, BDMACCR4Base> ;
    using HTIE = BDMA_CCR4_HTIE_Values<BDMA::CCR4, 2, 1, ReadWriteMode, BDMACCR4Base> ;
    using TEIE = BDMA_CCR4_TEIE_Values<BDMA::CCR4, 3, 1, ReadWriteMode, BDMACCR4Base> ;
    using DIR = BDMA_CCR4_DIR_Values<BDMA::CCR4, 4, 1, ReadWriteMode, BDMACCR4Base> ;
    using CIRC = BDMA_CCR4_CIRC_Values<BDMA::CCR4, 5, 1, ReadWriteMode, BDMACCR4Base> ;
    using PINC = BDMA_CCR4_PINC_Values<BDMA::CCR4, 6, 1, ReadWriteMode, BDMACCR4Base> ;
    using MINC = BDMA_CCR4_MINC_Values<BDMA::CCR4, 7, 1, ReadWriteMode, BDMACCR4Base> ;
    using PSIZE = BDMA_CCR4_PSIZE_Values<BDMA::CCR4, 8, 2, ReadWriteMode, BDMACCR4Base> ;
    using MSIZE = BDMA_CCR4_MSIZE_Values<BDMA::CCR4, 10, 2, ReadWriteMode, BDMACCR4Base> ;
    using PL = BDMA_CCR4_PL_Values<BDMA::CCR4, 12, 2, ReadWriteMode, BDMACCR4Base> ;
    using MEM2MEM = BDMA_CCR4_MEM2MEM_Values<BDMA::CCR4, 14, 1, ReadWriteMode, BDMACCR4Base> ;
    using FieldValues = BDMA_CCR4_MEM2MEM_Values<BDMA::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x58025444, 32, ReadWriteMode, BDMACCR4Base, T...> ;

  struct BDMACNDTR4Base {} ;

  struct CNDTR4 : public RegisterBase<0x58025448, 32, ReadWriteMode>
  {
    using NDT = BDMA_CNDTR4_NDT_Values<BDMA::CNDTR4, 0, 16, ReadWriteMode, BDMACNDTR4Base> ;
    using FieldValues = BDMA_CNDTR4_NDT_Values<BDMA::CNDTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR4Pack  = Register<0x58025448, 32, ReadWriteMode, BDMACNDTR4Base, T...> ;

  struct BDMACPAR4Base {} ;

  struct CPAR4 : public RegisterBase<0x5802544C, 32, ReadWriteMode>
  {
    using PA = BDMA_CPAR4_PA_Values<BDMA::CPAR4, 0, 32, ReadWriteMode, BDMACPAR4Base> ;
    using FieldValues = BDMA_CPAR4_PA_Values<BDMA::CPAR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR4Pack  = Register<0x5802544C, 32, ReadWriteMode, BDMACPAR4Base, T...> ;

  struct BDMACMAR4Base {} ;

  struct CMAR4 : public RegisterBase<0x58025450, 32, ReadWriteMode>
  {
    using MA = BDMA_CMAR4_MA_Values<BDMA::CMAR4, 0, 32, ReadWriteMode, BDMACMAR4Base> ;
    using FieldValues = BDMA_CMAR4_MA_Values<BDMA::CMAR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR4Pack  = Register<0x58025450, 32, ReadWriteMode, BDMACMAR4Base, T...> ;

  struct BDMACCR5Base {} ;

  struct CCR5 : public RegisterBase<0x58025458, 32, ReadWriteMode>
  {
    using EN = BDMA_CCR5_EN_Values<BDMA::CCR5, 0, 1, ReadWriteMode, BDMACCR5Base> ;
    using TCIE = BDMA_CCR5_TCIE_Values<BDMA::CCR5, 1, 1, ReadWriteMode, BDMACCR5Base> ;
    using HTIE = BDMA_CCR5_HTIE_Values<BDMA::CCR5, 2, 1, ReadWriteMode, BDMACCR5Base> ;
    using TEIE = BDMA_CCR5_TEIE_Values<BDMA::CCR5, 3, 1, ReadWriteMode, BDMACCR5Base> ;
    using DIR = BDMA_CCR5_DIR_Values<BDMA::CCR5, 4, 1, ReadWriteMode, BDMACCR5Base> ;
    using CIRC = BDMA_CCR5_CIRC_Values<BDMA::CCR5, 5, 1, ReadWriteMode, BDMACCR5Base> ;
    using PINC = BDMA_CCR5_PINC_Values<BDMA::CCR5, 6, 1, ReadWriteMode, BDMACCR5Base> ;
    using MINC = BDMA_CCR5_MINC_Values<BDMA::CCR5, 7, 1, ReadWriteMode, BDMACCR5Base> ;
    using PSIZE = BDMA_CCR5_PSIZE_Values<BDMA::CCR5, 8, 2, ReadWriteMode, BDMACCR5Base> ;
    using MSIZE = BDMA_CCR5_MSIZE_Values<BDMA::CCR5, 10, 2, ReadWriteMode, BDMACCR5Base> ;
    using PL = BDMA_CCR5_PL_Values<BDMA::CCR5, 12, 2, ReadWriteMode, BDMACCR5Base> ;
    using MEM2MEM = BDMA_CCR5_MEM2MEM_Values<BDMA::CCR5, 14, 1, ReadWriteMode, BDMACCR5Base> ;
    using FieldValues = BDMA_CCR5_MEM2MEM_Values<BDMA::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x58025458, 32, ReadWriteMode, BDMACCR5Base, T...> ;

  struct BDMACNDTR5Base {} ;

  struct CNDTR5 : public RegisterBase<0x5802545C, 32, ReadWriteMode>
  {
    using NDT = BDMA_CNDTR5_NDT_Values<BDMA::CNDTR5, 0, 16, ReadWriteMode, BDMACNDTR5Base> ;
    using FieldValues = BDMA_CNDTR5_NDT_Values<BDMA::CNDTR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR5Pack  = Register<0x5802545C, 32, ReadWriteMode, BDMACNDTR5Base, T...> ;

  struct BDMACPAR5Base {} ;

  struct CPAR5 : public RegisterBase<0x58025460, 32, ReadWriteMode>
  {
    using PA = BDMA_CPAR5_PA_Values<BDMA::CPAR5, 0, 32, ReadWriteMode, BDMACPAR5Base> ;
    using FieldValues = BDMA_CPAR5_PA_Values<BDMA::CPAR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR5Pack  = Register<0x58025460, 32, ReadWriteMode, BDMACPAR5Base, T...> ;

  struct BDMACMAR5Base {} ;

  struct CMAR5 : public RegisterBase<0x58025464, 32, ReadWriteMode>
  {
    using MA = BDMA_CMAR5_MA_Values<BDMA::CMAR5, 0, 32, ReadWriteMode, BDMACMAR5Base> ;
    using FieldValues = BDMA_CMAR5_MA_Values<BDMA::CMAR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR5Pack  = Register<0x58025464, 32, ReadWriteMode, BDMACMAR5Base, T...> ;

  struct BDMACCR6Base {} ;

  struct CCR6 : public RegisterBase<0x5802546C, 32, ReadWriteMode>
  {
    using EN = BDMA_CCR6_EN_Values<BDMA::CCR6, 0, 1, ReadWriteMode, BDMACCR6Base> ;
    using TCIE = BDMA_CCR6_TCIE_Values<BDMA::CCR6, 1, 1, ReadWriteMode, BDMACCR6Base> ;
    using HTIE = BDMA_CCR6_HTIE_Values<BDMA::CCR6, 2, 1, ReadWriteMode, BDMACCR6Base> ;
    using TEIE = BDMA_CCR6_TEIE_Values<BDMA::CCR6, 3, 1, ReadWriteMode, BDMACCR6Base> ;
    using DIR = BDMA_CCR6_DIR_Values<BDMA::CCR6, 4, 1, ReadWriteMode, BDMACCR6Base> ;
    using CIRC = BDMA_CCR6_CIRC_Values<BDMA::CCR6, 5, 1, ReadWriteMode, BDMACCR6Base> ;
    using PINC = BDMA_CCR6_PINC_Values<BDMA::CCR6, 6, 1, ReadWriteMode, BDMACCR6Base> ;
    using MINC = BDMA_CCR6_MINC_Values<BDMA::CCR6, 7, 1, ReadWriteMode, BDMACCR6Base> ;
    using PSIZE = BDMA_CCR6_PSIZE_Values<BDMA::CCR6, 8, 2, ReadWriteMode, BDMACCR6Base> ;
    using MSIZE = BDMA_CCR6_MSIZE_Values<BDMA::CCR6, 10, 2, ReadWriteMode, BDMACCR6Base> ;
    using PL = BDMA_CCR6_PL_Values<BDMA::CCR6, 12, 2, ReadWriteMode, BDMACCR6Base> ;
    using MEM2MEM = BDMA_CCR6_MEM2MEM_Values<BDMA::CCR6, 14, 1, ReadWriteMode, BDMACCR6Base> ;
    using FieldValues = BDMA_CCR6_MEM2MEM_Values<BDMA::CCR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR6Pack  = Register<0x5802546C, 32, ReadWriteMode, BDMACCR6Base, T...> ;

  struct BDMACNDTR6Base {} ;

  struct CNDTR6 : public RegisterBase<0x58025470, 32, ReadWriteMode>
  {
    using NDT = BDMA_CNDTR6_NDT_Values<BDMA::CNDTR6, 0, 16, ReadWriteMode, BDMACNDTR6Base> ;
    using FieldValues = BDMA_CNDTR6_NDT_Values<BDMA::CNDTR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR6Pack  = Register<0x58025470, 32, ReadWriteMode, BDMACNDTR6Base, T...> ;

  struct BDMACPAR6Base {} ;

  struct CPAR6 : public RegisterBase<0x58025474, 32, ReadWriteMode>
  {
    using PA = BDMA_CPAR6_PA_Values<BDMA::CPAR6, 0, 32, ReadWriteMode, BDMACPAR6Base> ;
    using FieldValues = BDMA_CPAR6_PA_Values<BDMA::CPAR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR6Pack  = Register<0x58025474, 32, ReadWriteMode, BDMACPAR6Base, T...> ;

  struct BDMACMAR6Base {} ;

  struct CMAR6 : public RegisterBase<0x58025478, 32, ReadWriteMode>
  {
    using MA = BDMA_CMAR6_MA_Values<BDMA::CMAR6, 0, 32, ReadWriteMode, BDMACMAR6Base> ;
    using FieldValues = BDMA_CMAR6_MA_Values<BDMA::CMAR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR6Pack  = Register<0x58025478, 32, ReadWriteMode, BDMACMAR6Base, T...> ;

  struct BDMACCR7Base {} ;

  struct CCR7 : public RegisterBase<0x58025480, 32, ReadWriteMode>
  {
    using EN = BDMA_CCR7_EN_Values<BDMA::CCR7, 0, 1, ReadWriteMode, BDMACCR7Base> ;
    using TCIE = BDMA_CCR7_TCIE_Values<BDMA::CCR7, 1, 1, ReadWriteMode, BDMACCR7Base> ;
    using HTIE = BDMA_CCR7_HTIE_Values<BDMA::CCR7, 2, 1, ReadWriteMode, BDMACCR7Base> ;
    using TEIE = BDMA_CCR7_TEIE_Values<BDMA::CCR7, 3, 1, ReadWriteMode, BDMACCR7Base> ;
    using DIR = BDMA_CCR7_DIR_Values<BDMA::CCR7, 4, 1, ReadWriteMode, BDMACCR7Base> ;
    using CIRC = BDMA_CCR7_CIRC_Values<BDMA::CCR7, 5, 1, ReadWriteMode, BDMACCR7Base> ;
    using PINC = BDMA_CCR7_PINC_Values<BDMA::CCR7, 6, 1, ReadWriteMode, BDMACCR7Base> ;
    using MINC = BDMA_CCR7_MINC_Values<BDMA::CCR7, 7, 1, ReadWriteMode, BDMACCR7Base> ;
    using PSIZE = BDMA_CCR7_PSIZE_Values<BDMA::CCR7, 8, 2, ReadWriteMode, BDMACCR7Base> ;
    using MSIZE = BDMA_CCR7_MSIZE_Values<BDMA::CCR7, 10, 2, ReadWriteMode, BDMACCR7Base> ;
    using PL = BDMA_CCR7_PL_Values<BDMA::CCR7, 12, 2, ReadWriteMode, BDMACCR7Base> ;
    using MEM2MEM = BDMA_CCR7_MEM2MEM_Values<BDMA::CCR7, 14, 1, ReadWriteMode, BDMACCR7Base> ;
    using FieldValues = BDMA_CCR7_MEM2MEM_Values<BDMA::CCR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR7Pack  = Register<0x58025480, 32, ReadWriteMode, BDMACCR7Base, T...> ;

  struct BDMACNDTR7Base {} ;

  struct CNDTR7 : public RegisterBase<0x58025484, 32, ReadWriteMode>
  {
    using NDT = BDMA_CNDTR7_NDT_Values<BDMA::CNDTR7, 0, 16, ReadWriteMode, BDMACNDTR7Base> ;
    using FieldValues = BDMA_CNDTR7_NDT_Values<BDMA::CNDTR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR7Pack  = Register<0x58025484, 32, ReadWriteMode, BDMACNDTR7Base, T...> ;

  struct BDMACPAR7Base {} ;

  struct CPAR7 : public RegisterBase<0x58025488, 32, ReadWriteMode>
  {
    using PA = BDMA_CPAR7_PA_Values<BDMA::CPAR7, 0, 32, ReadWriteMode, BDMACPAR7Base> ;
    using FieldValues = BDMA_CPAR7_PA_Values<BDMA::CPAR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR7Pack  = Register<0x58025488, 32, ReadWriteMode, BDMACPAR7Base, T...> ;

  struct BDMACMAR7Base {} ;

  struct CMAR7 : public RegisterBase<0x5802548C, 32, ReadWriteMode>
  {
    using MA = BDMA_CMAR7_MA_Values<BDMA::CMAR7, 0, 32, ReadWriteMode, BDMACMAR7Base> ;
    using FieldValues = BDMA_CMAR7_MA_Values<BDMA::CMAR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR7Pack  = Register<0x5802548C, 32, ReadWriteMode, BDMACMAR7Base, T...> ;

  struct BDMACCR8Base {} ;

  struct CCR8 : public RegisterBase<0x58025494, 32, ReadWriteMode>
  {
    using EN = BDMA_CCR8_EN_Values<BDMA::CCR8, 0, 1, ReadWriteMode, BDMACCR8Base> ;
    using TCIE = BDMA_CCR8_TCIE_Values<BDMA::CCR8, 1, 1, ReadWriteMode, BDMACCR8Base> ;
    using HTIE = BDMA_CCR8_HTIE_Values<BDMA::CCR8, 2, 1, ReadWriteMode, BDMACCR8Base> ;
    using TEIE = BDMA_CCR8_TEIE_Values<BDMA::CCR8, 3, 1, ReadWriteMode, BDMACCR8Base> ;
    using DIR = BDMA_CCR8_DIR_Values<BDMA::CCR8, 4, 1, ReadWriteMode, BDMACCR8Base> ;
    using CIRC = BDMA_CCR8_CIRC_Values<BDMA::CCR8, 5, 1, ReadWriteMode, BDMACCR8Base> ;
    using PINC = BDMA_CCR8_PINC_Values<BDMA::CCR8, 6, 1, ReadWriteMode, BDMACCR8Base> ;
    using MINC = BDMA_CCR8_MINC_Values<BDMA::CCR8, 7, 1, ReadWriteMode, BDMACCR8Base> ;
    using PSIZE = BDMA_CCR8_PSIZE_Values<BDMA::CCR8, 8, 2, ReadWriteMode, BDMACCR8Base> ;
    using MSIZE = BDMA_CCR8_MSIZE_Values<BDMA::CCR8, 10, 2, ReadWriteMode, BDMACCR8Base> ;
    using PL = BDMA_CCR8_PL_Values<BDMA::CCR8, 12, 2, ReadWriteMode, BDMACCR8Base> ;
    using MEM2MEM = BDMA_CCR8_MEM2MEM_Values<BDMA::CCR8, 14, 1, ReadWriteMode, BDMACCR8Base> ;
    using FieldValues = BDMA_CCR8_MEM2MEM_Values<BDMA::CCR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR8Pack  = Register<0x58025494, 32, ReadWriteMode, BDMACCR8Base, T...> ;

  struct BDMACNDTR8Base {} ;

  struct CNDTR8 : public RegisterBase<0x58025498, 32, ReadWriteMode>
  {
    using NDT = BDMA_CNDTR8_NDT_Values<BDMA::CNDTR8, 0, 16, ReadWriteMode, BDMACNDTR8Base> ;
    using FieldValues = BDMA_CNDTR8_NDT_Values<BDMA::CNDTR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNDTR8Pack  = Register<0x58025498, 32, ReadWriteMode, BDMACNDTR8Base, T...> ;

  struct BDMACPAR8Base {} ;

  struct CPAR8 : public RegisterBase<0x5802549C, 32, ReadWriteMode>
  {
    using PA = BDMA_CPAR8_PA_Values<BDMA::CPAR8, 0, 32, ReadWriteMode, BDMACPAR8Base> ;
    using FieldValues = BDMA_CPAR8_PA_Values<BDMA::CPAR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPAR8Pack  = Register<0x5802549C, 32, ReadWriteMode, BDMACPAR8Base, T...> ;

  struct BDMACMAR8Base {} ;

  struct CMAR8 : public RegisterBase<0x580254A0, 32, ReadWriteMode>
  {
    using MA = BDMA_CMAR8_MA_Values<BDMA::CMAR8, 0, 32, ReadWriteMode, BDMACMAR8Base> ;
    using FieldValues = BDMA_CMAR8_MA_Values<BDMA::CMAR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMAR8Pack  = Register<0x580254A0, 32, ReadWriteMode, BDMACMAR8Base, T...> ;

} ;

#endif //#if !defined(BDMAREGISTERS_HPP)
