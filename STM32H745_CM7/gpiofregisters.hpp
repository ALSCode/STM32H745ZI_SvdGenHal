/*******************************************************************************
* Filename      : gpiofregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIOFREGISTERS_HPP)
#define GPIOFREGISTERS_HPP

#include "gpioffieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOF
{
  struct GPIOFMODERBase {} ;

  struct MODER : public RegisterBase<0x58021400, 32, ReadWriteMode>
  {
    using MODE0 = GPIOF_MODER_MODE0_Values<GPIOF::MODER, 0, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE1 = GPIOF_MODER_MODE1_Values<GPIOF::MODER, 2, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE2 = GPIOF_MODER_MODE2_Values<GPIOF::MODER, 4, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE3 = GPIOF_MODER_MODE3_Values<GPIOF::MODER, 6, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE4 = GPIOF_MODER_MODE4_Values<GPIOF::MODER, 8, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE5 = GPIOF_MODER_MODE5_Values<GPIOF::MODER, 10, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE6 = GPIOF_MODER_MODE6_Values<GPIOF::MODER, 12, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE7 = GPIOF_MODER_MODE7_Values<GPIOF::MODER, 14, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE8 = GPIOF_MODER_MODE8_Values<GPIOF::MODER, 16, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE9 = GPIOF_MODER_MODE9_Values<GPIOF::MODER, 18, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE10 = GPIOF_MODER_MODE10_Values<GPIOF::MODER, 20, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE11 = GPIOF_MODER_MODE11_Values<GPIOF::MODER, 22, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE12 = GPIOF_MODER_MODE12_Values<GPIOF::MODER, 24, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE13 = GPIOF_MODER_MODE13_Values<GPIOF::MODER, 26, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE14 = GPIOF_MODER_MODE14_Values<GPIOF::MODER, 28, 2, ReadWriteMode, GPIOFMODERBase> ;
    using MODE15 = GPIOF_MODER_MODE15_Values<GPIOF::MODER, 30, 2, ReadWriteMode, GPIOFMODERBase> ;
    using FieldValues = GPIOF_MODER_MODE15_Values<GPIOF::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58021400, 32, ReadWriteMode, GPIOFMODERBase, T...> ;

  struct GPIOFOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58021404, 32, ReadWriteMode>
  {
    using OT0 = GPIOF_OTYPER_OT0_Values<GPIOF::OTYPER, 0, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT1 = GPIOF_OTYPER_OT1_Values<GPIOF::OTYPER, 1, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT2 = GPIOF_OTYPER_OT2_Values<GPIOF::OTYPER, 2, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT3 = GPIOF_OTYPER_OT3_Values<GPIOF::OTYPER, 3, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT4 = GPIOF_OTYPER_OT4_Values<GPIOF::OTYPER, 4, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT5 = GPIOF_OTYPER_OT5_Values<GPIOF::OTYPER, 5, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT6 = GPIOF_OTYPER_OT6_Values<GPIOF::OTYPER, 6, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT7 = GPIOF_OTYPER_OT7_Values<GPIOF::OTYPER, 7, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT8 = GPIOF_OTYPER_OT8_Values<GPIOF::OTYPER, 8, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT9 = GPIOF_OTYPER_OT9_Values<GPIOF::OTYPER, 9, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT10 = GPIOF_OTYPER_OT10_Values<GPIOF::OTYPER, 10, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT11 = GPIOF_OTYPER_OT11_Values<GPIOF::OTYPER, 11, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT12 = GPIOF_OTYPER_OT12_Values<GPIOF::OTYPER, 12, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT13 = GPIOF_OTYPER_OT13_Values<GPIOF::OTYPER, 13, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT14 = GPIOF_OTYPER_OT14_Values<GPIOF::OTYPER, 14, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using OT15 = GPIOF_OTYPER_OT15_Values<GPIOF::OTYPER, 15, 1, ReadWriteMode, GPIOFOTYPERBase> ;
    using FieldValues = GPIOF_OTYPER_OT15_Values<GPIOF::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58021404, 32, ReadWriteMode, GPIOFOTYPERBase, T...> ;

  struct GPIOFOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58021408, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOF_OSPEEDR_OSPEED0_Values<GPIOF::OSPEEDR, 0, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED1 = GPIOF_OSPEEDR_OSPEED1_Values<GPIOF::OSPEEDR, 2, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED2 = GPIOF_OSPEEDR_OSPEED2_Values<GPIOF::OSPEEDR, 4, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED3 = GPIOF_OSPEEDR_OSPEED3_Values<GPIOF::OSPEEDR, 6, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED4 = GPIOF_OSPEEDR_OSPEED4_Values<GPIOF::OSPEEDR, 8, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED5 = GPIOF_OSPEEDR_OSPEED5_Values<GPIOF::OSPEEDR, 10, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED6 = GPIOF_OSPEEDR_OSPEED6_Values<GPIOF::OSPEEDR, 12, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED7 = GPIOF_OSPEEDR_OSPEED7_Values<GPIOF::OSPEEDR, 14, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED8 = GPIOF_OSPEEDR_OSPEED8_Values<GPIOF::OSPEEDR, 16, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED9 = GPIOF_OSPEEDR_OSPEED9_Values<GPIOF::OSPEEDR, 18, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED10 = GPIOF_OSPEEDR_OSPEED10_Values<GPIOF::OSPEEDR, 20, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED11 = GPIOF_OSPEEDR_OSPEED11_Values<GPIOF::OSPEEDR, 22, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED12 = GPIOF_OSPEEDR_OSPEED12_Values<GPIOF::OSPEEDR, 24, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED13 = GPIOF_OSPEEDR_OSPEED13_Values<GPIOF::OSPEEDR, 26, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED14 = GPIOF_OSPEEDR_OSPEED14_Values<GPIOF::OSPEEDR, 28, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using OSPEED15 = GPIOF_OSPEEDR_OSPEED15_Values<GPIOF::OSPEEDR, 30, 2, ReadWriteMode, GPIOFOSPEEDRBase> ;
    using FieldValues = GPIOF_OSPEEDR_OSPEED15_Values<GPIOF::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58021408, 32, ReadWriteMode, GPIOFOSPEEDRBase, T...> ;

  struct GPIOFPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x5802140C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOF_PUPDR_PUPD0_Values<GPIOF::PUPDR, 0, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD1 = GPIOF_PUPDR_PUPD1_Values<GPIOF::PUPDR, 2, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD2 = GPIOF_PUPDR_PUPD2_Values<GPIOF::PUPDR, 4, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD3 = GPIOF_PUPDR_PUPD3_Values<GPIOF::PUPDR, 6, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD4 = GPIOF_PUPDR_PUPD4_Values<GPIOF::PUPDR, 8, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD5 = GPIOF_PUPDR_PUPD5_Values<GPIOF::PUPDR, 10, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD6 = GPIOF_PUPDR_PUPD6_Values<GPIOF::PUPDR, 12, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD7 = GPIOF_PUPDR_PUPD7_Values<GPIOF::PUPDR, 14, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD8 = GPIOF_PUPDR_PUPD8_Values<GPIOF::PUPDR, 16, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD9 = GPIOF_PUPDR_PUPD9_Values<GPIOF::PUPDR, 18, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD10 = GPIOF_PUPDR_PUPD10_Values<GPIOF::PUPDR, 20, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD11 = GPIOF_PUPDR_PUPD11_Values<GPIOF::PUPDR, 22, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD12 = GPIOF_PUPDR_PUPD12_Values<GPIOF::PUPDR, 24, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD13 = GPIOF_PUPDR_PUPD13_Values<GPIOF::PUPDR, 26, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD14 = GPIOF_PUPDR_PUPD14_Values<GPIOF::PUPDR, 28, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using PUPD15 = GPIOF_PUPDR_PUPD15_Values<GPIOF::PUPDR, 30, 2, ReadWriteMode, GPIOFPUPDRBase> ;
    using FieldValues = GPIOF_PUPDR_PUPD15_Values<GPIOF::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x5802140C, 32, ReadWriteMode, GPIOFPUPDRBase, T...> ;

  struct GPIOFIDRBase {} ;

  struct IDR : public RegisterBase<0x58021410, 32, ReadMode>
  {
    using ID0 = GPIOF_IDR_ID0_Values<GPIOF::IDR, 0, 1, ReadMode, GPIOFIDRBase> ;
    using ID1 = GPIOF_IDR_ID1_Values<GPIOF::IDR, 1, 1, ReadMode, GPIOFIDRBase> ;
    using ID2 = GPIOF_IDR_ID2_Values<GPIOF::IDR, 2, 1, ReadMode, GPIOFIDRBase> ;
    using ID3 = GPIOF_IDR_ID3_Values<GPIOF::IDR, 3, 1, ReadMode, GPIOFIDRBase> ;
    using ID4 = GPIOF_IDR_ID4_Values<GPIOF::IDR, 4, 1, ReadMode, GPIOFIDRBase> ;
    using ID5 = GPIOF_IDR_ID5_Values<GPIOF::IDR, 5, 1, ReadMode, GPIOFIDRBase> ;
    using ID6 = GPIOF_IDR_ID6_Values<GPIOF::IDR, 6, 1, ReadMode, GPIOFIDRBase> ;
    using ID7 = GPIOF_IDR_ID7_Values<GPIOF::IDR, 7, 1, ReadMode, GPIOFIDRBase> ;
    using ID8 = GPIOF_IDR_ID8_Values<GPIOF::IDR, 8, 1, ReadMode, GPIOFIDRBase> ;
    using ID9 = GPIOF_IDR_ID9_Values<GPIOF::IDR, 9, 1, ReadMode, GPIOFIDRBase> ;
    using ID10 = GPIOF_IDR_ID10_Values<GPIOF::IDR, 10, 1, ReadMode, GPIOFIDRBase> ;
    using ID11 = GPIOF_IDR_ID11_Values<GPIOF::IDR, 11, 1, ReadMode, GPIOFIDRBase> ;
    using ID12 = GPIOF_IDR_ID12_Values<GPIOF::IDR, 12, 1, ReadMode, GPIOFIDRBase> ;
    using ID13 = GPIOF_IDR_ID13_Values<GPIOF::IDR, 13, 1, ReadMode, GPIOFIDRBase> ;
    using ID14 = GPIOF_IDR_ID14_Values<GPIOF::IDR, 14, 1, ReadMode, GPIOFIDRBase> ;
    using ID15 = GPIOF_IDR_ID15_Values<GPIOF::IDR, 15, 1, ReadMode, GPIOFIDRBase> ;
    using FieldValues = GPIOF_IDR_ID15_Values<GPIOF::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58021410, 32, ReadMode, GPIOFIDRBase, T...> ;

  struct GPIOFODRBase {} ;

  struct ODR : public RegisterBase<0x58021414, 32, ReadWriteMode>
  {
    using OD0 = GPIOF_ODR_OD0_Values<GPIOF::ODR, 0, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD1 = GPIOF_ODR_OD1_Values<GPIOF::ODR, 1, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD2 = GPIOF_ODR_OD2_Values<GPIOF::ODR, 2, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD3 = GPIOF_ODR_OD3_Values<GPIOF::ODR, 3, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD4 = GPIOF_ODR_OD4_Values<GPIOF::ODR, 4, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD5 = GPIOF_ODR_OD5_Values<GPIOF::ODR, 5, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD6 = GPIOF_ODR_OD6_Values<GPIOF::ODR, 6, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD7 = GPIOF_ODR_OD7_Values<GPIOF::ODR, 7, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD8 = GPIOF_ODR_OD8_Values<GPIOF::ODR, 8, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD9 = GPIOF_ODR_OD9_Values<GPIOF::ODR, 9, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD10 = GPIOF_ODR_OD10_Values<GPIOF::ODR, 10, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD11 = GPIOF_ODR_OD11_Values<GPIOF::ODR, 11, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD12 = GPIOF_ODR_OD12_Values<GPIOF::ODR, 12, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD13 = GPIOF_ODR_OD13_Values<GPIOF::ODR, 13, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD14 = GPIOF_ODR_OD14_Values<GPIOF::ODR, 14, 1, ReadWriteMode, GPIOFODRBase> ;
    using OD15 = GPIOF_ODR_OD15_Values<GPIOF::ODR, 15, 1, ReadWriteMode, GPIOFODRBase> ;
    using FieldValues = GPIOF_ODR_OD15_Values<GPIOF::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58021414, 32, ReadWriteMode, GPIOFODRBase, T...> ;

  struct GPIOFBSRRBase {} ;

  struct BSRR : public RegisterBase<0x58021418, 32, WriteMode>
  {
    using BS0 = GPIOF_BSRR_BS0_Values<GPIOF::BSRR, 0, 1, WriteMode, GPIOFBSRRBase> ;
    using BS1 = GPIOF_BSRR_BS1_Values<GPIOF::BSRR, 1, 1, WriteMode, GPIOFBSRRBase> ;
    using BS2 = GPIOF_BSRR_BS2_Values<GPIOF::BSRR, 2, 1, WriteMode, GPIOFBSRRBase> ;
    using BS3 = GPIOF_BSRR_BS3_Values<GPIOF::BSRR, 3, 1, WriteMode, GPIOFBSRRBase> ;
    using BS4 = GPIOF_BSRR_BS4_Values<GPIOF::BSRR, 4, 1, WriteMode, GPIOFBSRRBase> ;
    using BS5 = GPIOF_BSRR_BS5_Values<GPIOF::BSRR, 5, 1, WriteMode, GPIOFBSRRBase> ;
    using BS6 = GPIOF_BSRR_BS6_Values<GPIOF::BSRR, 6, 1, WriteMode, GPIOFBSRRBase> ;
    using BS7 = GPIOF_BSRR_BS7_Values<GPIOF::BSRR, 7, 1, WriteMode, GPIOFBSRRBase> ;
    using BS8 = GPIOF_BSRR_BS8_Values<GPIOF::BSRR, 8, 1, WriteMode, GPIOFBSRRBase> ;
    using BS9 = GPIOF_BSRR_BS9_Values<GPIOF::BSRR, 9, 1, WriteMode, GPIOFBSRRBase> ;
    using BS10 = GPIOF_BSRR_BS10_Values<GPIOF::BSRR, 10, 1, WriteMode, GPIOFBSRRBase> ;
    using BS11 = GPIOF_BSRR_BS11_Values<GPIOF::BSRR, 11, 1, WriteMode, GPIOFBSRRBase> ;
    using BS12 = GPIOF_BSRR_BS12_Values<GPIOF::BSRR, 12, 1, WriteMode, GPIOFBSRRBase> ;
    using BS13 = GPIOF_BSRR_BS13_Values<GPIOF::BSRR, 13, 1, WriteMode, GPIOFBSRRBase> ;
    using BS14 = GPIOF_BSRR_BS14_Values<GPIOF::BSRR, 14, 1, WriteMode, GPIOFBSRRBase> ;
    using BS15 = GPIOF_BSRR_BS15_Values<GPIOF::BSRR, 15, 1, WriteMode, GPIOFBSRRBase> ;
    using BR0 = GPIOF_BSRR_BR0_Values<GPIOF::BSRR, 16, 1, WriteMode, GPIOFBSRRBase> ;
    using BR1 = GPIOF_BSRR_BR1_Values<GPIOF::BSRR, 17, 1, WriteMode, GPIOFBSRRBase> ;
    using BR2 = GPIOF_BSRR_BR2_Values<GPIOF::BSRR, 18, 1, WriteMode, GPIOFBSRRBase> ;
    using BR3 = GPIOF_BSRR_BR3_Values<GPIOF::BSRR, 19, 1, WriteMode, GPIOFBSRRBase> ;
    using BR4 = GPIOF_BSRR_BR4_Values<GPIOF::BSRR, 20, 1, WriteMode, GPIOFBSRRBase> ;
    using BR5 = GPIOF_BSRR_BR5_Values<GPIOF::BSRR, 21, 1, WriteMode, GPIOFBSRRBase> ;
    using BR6 = GPIOF_BSRR_BR6_Values<GPIOF::BSRR, 22, 1, WriteMode, GPIOFBSRRBase> ;
    using BR7 = GPIOF_BSRR_BR7_Values<GPIOF::BSRR, 23, 1, WriteMode, GPIOFBSRRBase> ;
    using BR8 = GPIOF_BSRR_BR8_Values<GPIOF::BSRR, 24, 1, WriteMode, GPIOFBSRRBase> ;
    using BR9 = GPIOF_BSRR_BR9_Values<GPIOF::BSRR, 25, 1, WriteMode, GPIOFBSRRBase> ;
    using BR10 = GPIOF_BSRR_BR10_Values<GPIOF::BSRR, 26, 1, WriteMode, GPIOFBSRRBase> ;
    using BR11 = GPIOF_BSRR_BR11_Values<GPIOF::BSRR, 27, 1, WriteMode, GPIOFBSRRBase> ;
    using BR12 = GPIOF_BSRR_BR12_Values<GPIOF::BSRR, 28, 1, WriteMode, GPIOFBSRRBase> ;
    using BR13 = GPIOF_BSRR_BR13_Values<GPIOF::BSRR, 29, 1, WriteMode, GPIOFBSRRBase> ;
    using BR14 = GPIOF_BSRR_BR14_Values<GPIOF::BSRR, 30, 1, WriteMode, GPIOFBSRRBase> ;
    using BR15 = GPIOF_BSRR_BR15_Values<GPIOF::BSRR, 31, 1, WriteMode, GPIOFBSRRBase> ;
    using FieldValues = GPIOF_BSRR_BR15_Values<GPIOF::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58021418, 32, WriteMode, GPIOFBSRRBase, T...> ;

  struct GPIOFLCKRBase {} ;

  struct LCKR : public RegisterBase<0x5802141C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOF_LCKR_LCK0_Values<GPIOF::LCKR, 0, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK1 = GPIOF_LCKR_LCK1_Values<GPIOF::LCKR, 1, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK2 = GPIOF_LCKR_LCK2_Values<GPIOF::LCKR, 2, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK3 = GPIOF_LCKR_LCK3_Values<GPIOF::LCKR, 3, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK4 = GPIOF_LCKR_LCK4_Values<GPIOF::LCKR, 4, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK5 = GPIOF_LCKR_LCK5_Values<GPIOF::LCKR, 5, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK6 = GPIOF_LCKR_LCK6_Values<GPIOF::LCKR, 6, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK7 = GPIOF_LCKR_LCK7_Values<GPIOF::LCKR, 7, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK8 = GPIOF_LCKR_LCK8_Values<GPIOF::LCKR, 8, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK9 = GPIOF_LCKR_LCK9_Values<GPIOF::LCKR, 9, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK10 = GPIOF_LCKR_LCK10_Values<GPIOF::LCKR, 10, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK11 = GPIOF_LCKR_LCK11_Values<GPIOF::LCKR, 11, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK12 = GPIOF_LCKR_LCK12_Values<GPIOF::LCKR, 12, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK13 = GPIOF_LCKR_LCK13_Values<GPIOF::LCKR, 13, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK14 = GPIOF_LCKR_LCK14_Values<GPIOF::LCKR, 14, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCK15 = GPIOF_LCKR_LCK15_Values<GPIOF::LCKR, 15, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using LCKK = GPIOF_LCKR_LCKK_Values<GPIOF::LCKR, 16, 1, ReadWriteMode, GPIOFLCKRBase> ;
    using FieldValues = GPIOF_LCKR_LCKK_Values<GPIOF::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x5802141C, 32, ReadWriteMode, GPIOFLCKRBase, T...> ;

  struct GPIOFAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58021420, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOF_AFRL_AFSEL0_Values<GPIOF::AFRL, 0, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFSEL1 = GPIOF_AFRL_AFSEL1_Values<GPIOF::AFRL, 4, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFSEL2 = GPIOF_AFRL_AFSEL2_Values<GPIOF::AFRL, 8, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFSEL3 = GPIOF_AFRL_AFSEL3_Values<GPIOF::AFRL, 12, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFSEL4 = GPIOF_AFRL_AFSEL4_Values<GPIOF::AFRL, 16, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFSEL5 = GPIOF_AFRL_AFSEL5_Values<GPIOF::AFRL, 20, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFSEL6 = GPIOF_AFRL_AFSEL6_Values<GPIOF::AFRL, 24, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using AFSEL7 = GPIOF_AFRL_AFSEL7_Values<GPIOF::AFRL, 28, 4, ReadWriteMode, GPIOFAFRLBase> ;
    using FieldValues = GPIOF_AFRL_AFSEL7_Values<GPIOF::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58021420, 32, ReadWriteMode, GPIOFAFRLBase, T...> ;

  struct GPIOFAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58021424, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOF_AFRH_AFSEL8_Values<GPIOF::AFRH, 0, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFSEL9 = GPIOF_AFRH_AFSEL9_Values<GPIOF::AFRH, 4, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFSEL10 = GPIOF_AFRH_AFSEL10_Values<GPIOF::AFRH, 8, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFSEL11 = GPIOF_AFRH_AFSEL11_Values<GPIOF::AFRH, 12, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFSEL12 = GPIOF_AFRH_AFSEL12_Values<GPIOF::AFRH, 16, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFSEL13 = GPIOF_AFRH_AFSEL13_Values<GPIOF::AFRH, 20, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFSEL14 = GPIOF_AFRH_AFSEL14_Values<GPIOF::AFRH, 24, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using AFSEL15 = GPIOF_AFRH_AFSEL15_Values<GPIOF::AFRH, 28, 4, ReadWriteMode, GPIOFAFRHBase> ;
    using FieldValues = GPIOF_AFRH_AFSEL15_Values<GPIOF::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58021424, 32, ReadWriteMode, GPIOFAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOFREGISTERS_HPP)
