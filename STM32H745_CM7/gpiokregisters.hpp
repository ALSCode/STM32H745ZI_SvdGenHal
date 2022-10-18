/*******************************************************************************
* Filename      : gpiokregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIOKREGISTERS_HPP)
#define GPIOKREGISTERS_HPP

#include "gpiokfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOK
{
  struct GPIOKMODERBase {} ;

  struct MODER : public RegisterBase<0x58022800, 32, ReadWriteMode>
  {
    using MODE0 = GPIOK_MODER_MODE0_Values<GPIOK::MODER, 0, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE1 = GPIOK_MODER_MODE1_Values<GPIOK::MODER, 2, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE2 = GPIOK_MODER_MODE2_Values<GPIOK::MODER, 4, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE3 = GPIOK_MODER_MODE3_Values<GPIOK::MODER, 6, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE4 = GPIOK_MODER_MODE4_Values<GPIOK::MODER, 8, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE5 = GPIOK_MODER_MODE5_Values<GPIOK::MODER, 10, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE6 = GPIOK_MODER_MODE6_Values<GPIOK::MODER, 12, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE7 = GPIOK_MODER_MODE7_Values<GPIOK::MODER, 14, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE8 = GPIOK_MODER_MODE8_Values<GPIOK::MODER, 16, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE9 = GPIOK_MODER_MODE9_Values<GPIOK::MODER, 18, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE10 = GPIOK_MODER_MODE10_Values<GPIOK::MODER, 20, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE11 = GPIOK_MODER_MODE11_Values<GPIOK::MODER, 22, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE12 = GPIOK_MODER_MODE12_Values<GPIOK::MODER, 24, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE13 = GPIOK_MODER_MODE13_Values<GPIOK::MODER, 26, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE14 = GPIOK_MODER_MODE14_Values<GPIOK::MODER, 28, 2, ReadWriteMode, GPIOKMODERBase> ;
    using MODE15 = GPIOK_MODER_MODE15_Values<GPIOK::MODER, 30, 2, ReadWriteMode, GPIOKMODERBase> ;
    using FieldValues = GPIOK_MODER_MODE15_Values<GPIOK::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58022800, 32, ReadWriteMode, GPIOKMODERBase, T...> ;

  struct GPIOKOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58022804, 32, ReadWriteMode>
  {
    using OT0 = GPIOK_OTYPER_OT0_Values<GPIOK::OTYPER, 0, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT1 = GPIOK_OTYPER_OT1_Values<GPIOK::OTYPER, 1, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT2 = GPIOK_OTYPER_OT2_Values<GPIOK::OTYPER, 2, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT3 = GPIOK_OTYPER_OT3_Values<GPIOK::OTYPER, 3, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT4 = GPIOK_OTYPER_OT4_Values<GPIOK::OTYPER, 4, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT5 = GPIOK_OTYPER_OT5_Values<GPIOK::OTYPER, 5, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT6 = GPIOK_OTYPER_OT6_Values<GPIOK::OTYPER, 6, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT7 = GPIOK_OTYPER_OT7_Values<GPIOK::OTYPER, 7, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT8 = GPIOK_OTYPER_OT8_Values<GPIOK::OTYPER, 8, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT9 = GPIOK_OTYPER_OT9_Values<GPIOK::OTYPER, 9, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT10 = GPIOK_OTYPER_OT10_Values<GPIOK::OTYPER, 10, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT11 = GPIOK_OTYPER_OT11_Values<GPIOK::OTYPER, 11, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT12 = GPIOK_OTYPER_OT12_Values<GPIOK::OTYPER, 12, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT13 = GPIOK_OTYPER_OT13_Values<GPIOK::OTYPER, 13, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT14 = GPIOK_OTYPER_OT14_Values<GPIOK::OTYPER, 14, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using OT15 = GPIOK_OTYPER_OT15_Values<GPIOK::OTYPER, 15, 1, ReadWriteMode, GPIOKOTYPERBase> ;
    using FieldValues = GPIOK_OTYPER_OT15_Values<GPIOK::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58022804, 32, ReadWriteMode, GPIOKOTYPERBase, T...> ;

  struct GPIOKOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58022808, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOK_OSPEEDR_OSPEED0_Values<GPIOK::OSPEEDR, 0, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED1 = GPIOK_OSPEEDR_OSPEED1_Values<GPIOK::OSPEEDR, 2, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED2 = GPIOK_OSPEEDR_OSPEED2_Values<GPIOK::OSPEEDR, 4, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED3 = GPIOK_OSPEEDR_OSPEED3_Values<GPIOK::OSPEEDR, 6, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED4 = GPIOK_OSPEEDR_OSPEED4_Values<GPIOK::OSPEEDR, 8, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED5 = GPIOK_OSPEEDR_OSPEED5_Values<GPIOK::OSPEEDR, 10, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED6 = GPIOK_OSPEEDR_OSPEED6_Values<GPIOK::OSPEEDR, 12, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED7 = GPIOK_OSPEEDR_OSPEED7_Values<GPIOK::OSPEEDR, 14, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED8 = GPIOK_OSPEEDR_OSPEED8_Values<GPIOK::OSPEEDR, 16, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED9 = GPIOK_OSPEEDR_OSPEED9_Values<GPIOK::OSPEEDR, 18, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED10 = GPIOK_OSPEEDR_OSPEED10_Values<GPIOK::OSPEEDR, 20, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED11 = GPIOK_OSPEEDR_OSPEED11_Values<GPIOK::OSPEEDR, 22, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED12 = GPIOK_OSPEEDR_OSPEED12_Values<GPIOK::OSPEEDR, 24, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED13 = GPIOK_OSPEEDR_OSPEED13_Values<GPIOK::OSPEEDR, 26, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED14 = GPIOK_OSPEEDR_OSPEED14_Values<GPIOK::OSPEEDR, 28, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using OSPEED15 = GPIOK_OSPEEDR_OSPEED15_Values<GPIOK::OSPEEDR, 30, 2, ReadWriteMode, GPIOKOSPEEDRBase> ;
    using FieldValues = GPIOK_OSPEEDR_OSPEED15_Values<GPIOK::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58022808, 32, ReadWriteMode, GPIOKOSPEEDRBase, T...> ;

  struct GPIOKPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x5802280C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOK_PUPDR_PUPD0_Values<GPIOK::PUPDR, 0, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD1 = GPIOK_PUPDR_PUPD1_Values<GPIOK::PUPDR, 2, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD2 = GPIOK_PUPDR_PUPD2_Values<GPIOK::PUPDR, 4, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD3 = GPIOK_PUPDR_PUPD3_Values<GPIOK::PUPDR, 6, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD4 = GPIOK_PUPDR_PUPD4_Values<GPIOK::PUPDR, 8, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD5 = GPIOK_PUPDR_PUPD5_Values<GPIOK::PUPDR, 10, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD6 = GPIOK_PUPDR_PUPD6_Values<GPIOK::PUPDR, 12, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD7 = GPIOK_PUPDR_PUPD7_Values<GPIOK::PUPDR, 14, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD8 = GPIOK_PUPDR_PUPD8_Values<GPIOK::PUPDR, 16, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD9 = GPIOK_PUPDR_PUPD9_Values<GPIOK::PUPDR, 18, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD10 = GPIOK_PUPDR_PUPD10_Values<GPIOK::PUPDR, 20, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD11 = GPIOK_PUPDR_PUPD11_Values<GPIOK::PUPDR, 22, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD12 = GPIOK_PUPDR_PUPD12_Values<GPIOK::PUPDR, 24, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD13 = GPIOK_PUPDR_PUPD13_Values<GPIOK::PUPDR, 26, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD14 = GPIOK_PUPDR_PUPD14_Values<GPIOK::PUPDR, 28, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using PUPD15 = GPIOK_PUPDR_PUPD15_Values<GPIOK::PUPDR, 30, 2, ReadWriteMode, GPIOKPUPDRBase> ;
    using FieldValues = GPIOK_PUPDR_PUPD15_Values<GPIOK::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x5802280C, 32, ReadWriteMode, GPIOKPUPDRBase, T...> ;

  struct GPIOKIDRBase {} ;

  struct IDR : public RegisterBase<0x58022810, 32, ReadMode>
  {
    using ID0 = GPIOK_IDR_ID0_Values<GPIOK::IDR, 0, 1, ReadMode, GPIOKIDRBase> ;
    using ID1 = GPIOK_IDR_ID1_Values<GPIOK::IDR, 1, 1, ReadMode, GPIOKIDRBase> ;
    using ID2 = GPIOK_IDR_ID2_Values<GPIOK::IDR, 2, 1, ReadMode, GPIOKIDRBase> ;
    using ID3 = GPIOK_IDR_ID3_Values<GPIOK::IDR, 3, 1, ReadMode, GPIOKIDRBase> ;
    using ID4 = GPIOK_IDR_ID4_Values<GPIOK::IDR, 4, 1, ReadMode, GPIOKIDRBase> ;
    using ID5 = GPIOK_IDR_ID5_Values<GPIOK::IDR, 5, 1, ReadMode, GPIOKIDRBase> ;
    using ID6 = GPIOK_IDR_ID6_Values<GPIOK::IDR, 6, 1, ReadMode, GPIOKIDRBase> ;
    using ID7 = GPIOK_IDR_ID7_Values<GPIOK::IDR, 7, 1, ReadMode, GPIOKIDRBase> ;
    using ID8 = GPIOK_IDR_ID8_Values<GPIOK::IDR, 8, 1, ReadMode, GPIOKIDRBase> ;
    using ID9 = GPIOK_IDR_ID9_Values<GPIOK::IDR, 9, 1, ReadMode, GPIOKIDRBase> ;
    using ID10 = GPIOK_IDR_ID10_Values<GPIOK::IDR, 10, 1, ReadMode, GPIOKIDRBase> ;
    using ID11 = GPIOK_IDR_ID11_Values<GPIOK::IDR, 11, 1, ReadMode, GPIOKIDRBase> ;
    using ID12 = GPIOK_IDR_ID12_Values<GPIOK::IDR, 12, 1, ReadMode, GPIOKIDRBase> ;
    using ID13 = GPIOK_IDR_ID13_Values<GPIOK::IDR, 13, 1, ReadMode, GPIOKIDRBase> ;
    using ID14 = GPIOK_IDR_ID14_Values<GPIOK::IDR, 14, 1, ReadMode, GPIOKIDRBase> ;
    using ID15 = GPIOK_IDR_ID15_Values<GPIOK::IDR, 15, 1, ReadMode, GPIOKIDRBase> ;
    using FieldValues = GPIOK_IDR_ID15_Values<GPIOK::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58022810, 32, ReadMode, GPIOKIDRBase, T...> ;

  struct GPIOKODRBase {} ;

  struct ODR : public RegisterBase<0x58022814, 32, ReadWriteMode>
  {
    using OD0 = GPIOK_ODR_OD0_Values<GPIOK::ODR, 0, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD1 = GPIOK_ODR_OD1_Values<GPIOK::ODR, 1, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD2 = GPIOK_ODR_OD2_Values<GPIOK::ODR, 2, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD3 = GPIOK_ODR_OD3_Values<GPIOK::ODR, 3, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD4 = GPIOK_ODR_OD4_Values<GPIOK::ODR, 4, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD5 = GPIOK_ODR_OD5_Values<GPIOK::ODR, 5, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD6 = GPIOK_ODR_OD6_Values<GPIOK::ODR, 6, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD7 = GPIOK_ODR_OD7_Values<GPIOK::ODR, 7, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD8 = GPIOK_ODR_OD8_Values<GPIOK::ODR, 8, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD9 = GPIOK_ODR_OD9_Values<GPIOK::ODR, 9, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD10 = GPIOK_ODR_OD10_Values<GPIOK::ODR, 10, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD11 = GPIOK_ODR_OD11_Values<GPIOK::ODR, 11, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD12 = GPIOK_ODR_OD12_Values<GPIOK::ODR, 12, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD13 = GPIOK_ODR_OD13_Values<GPIOK::ODR, 13, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD14 = GPIOK_ODR_OD14_Values<GPIOK::ODR, 14, 1, ReadWriteMode, GPIOKODRBase> ;
    using OD15 = GPIOK_ODR_OD15_Values<GPIOK::ODR, 15, 1, ReadWriteMode, GPIOKODRBase> ;
    using FieldValues = GPIOK_ODR_OD15_Values<GPIOK::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58022814, 32, ReadWriteMode, GPIOKODRBase, T...> ;

  struct GPIOKBSRRBase {} ;

  struct BSRR : public RegisterBase<0x58022818, 32, WriteMode>
  {
    using BS0 = GPIOK_BSRR_BS0_Values<GPIOK::BSRR, 0, 1, WriteMode, GPIOKBSRRBase> ;
    using BS1 = GPIOK_BSRR_BS1_Values<GPIOK::BSRR, 1, 1, WriteMode, GPIOKBSRRBase> ;
    using BS2 = GPIOK_BSRR_BS2_Values<GPIOK::BSRR, 2, 1, WriteMode, GPIOKBSRRBase> ;
    using BS3 = GPIOK_BSRR_BS3_Values<GPIOK::BSRR, 3, 1, WriteMode, GPIOKBSRRBase> ;
    using BS4 = GPIOK_BSRR_BS4_Values<GPIOK::BSRR, 4, 1, WriteMode, GPIOKBSRRBase> ;
    using BS5 = GPIOK_BSRR_BS5_Values<GPIOK::BSRR, 5, 1, WriteMode, GPIOKBSRRBase> ;
    using BS6 = GPIOK_BSRR_BS6_Values<GPIOK::BSRR, 6, 1, WriteMode, GPIOKBSRRBase> ;
    using BS7 = GPIOK_BSRR_BS7_Values<GPIOK::BSRR, 7, 1, WriteMode, GPIOKBSRRBase> ;
    using BS8 = GPIOK_BSRR_BS8_Values<GPIOK::BSRR, 8, 1, WriteMode, GPIOKBSRRBase> ;
    using BS9 = GPIOK_BSRR_BS9_Values<GPIOK::BSRR, 9, 1, WriteMode, GPIOKBSRRBase> ;
    using BS10 = GPIOK_BSRR_BS10_Values<GPIOK::BSRR, 10, 1, WriteMode, GPIOKBSRRBase> ;
    using BS11 = GPIOK_BSRR_BS11_Values<GPIOK::BSRR, 11, 1, WriteMode, GPIOKBSRRBase> ;
    using BS12 = GPIOK_BSRR_BS12_Values<GPIOK::BSRR, 12, 1, WriteMode, GPIOKBSRRBase> ;
    using BS13 = GPIOK_BSRR_BS13_Values<GPIOK::BSRR, 13, 1, WriteMode, GPIOKBSRRBase> ;
    using BS14 = GPIOK_BSRR_BS14_Values<GPIOK::BSRR, 14, 1, WriteMode, GPIOKBSRRBase> ;
    using BS15 = GPIOK_BSRR_BS15_Values<GPIOK::BSRR, 15, 1, WriteMode, GPIOKBSRRBase> ;
    using BR0 = GPIOK_BSRR_BR0_Values<GPIOK::BSRR, 16, 1, WriteMode, GPIOKBSRRBase> ;
    using BR1 = GPIOK_BSRR_BR1_Values<GPIOK::BSRR, 17, 1, WriteMode, GPIOKBSRRBase> ;
    using BR2 = GPIOK_BSRR_BR2_Values<GPIOK::BSRR, 18, 1, WriteMode, GPIOKBSRRBase> ;
    using BR3 = GPIOK_BSRR_BR3_Values<GPIOK::BSRR, 19, 1, WriteMode, GPIOKBSRRBase> ;
    using BR4 = GPIOK_BSRR_BR4_Values<GPIOK::BSRR, 20, 1, WriteMode, GPIOKBSRRBase> ;
    using BR5 = GPIOK_BSRR_BR5_Values<GPIOK::BSRR, 21, 1, WriteMode, GPIOKBSRRBase> ;
    using BR6 = GPIOK_BSRR_BR6_Values<GPIOK::BSRR, 22, 1, WriteMode, GPIOKBSRRBase> ;
    using BR7 = GPIOK_BSRR_BR7_Values<GPIOK::BSRR, 23, 1, WriteMode, GPIOKBSRRBase> ;
    using BR8 = GPIOK_BSRR_BR8_Values<GPIOK::BSRR, 24, 1, WriteMode, GPIOKBSRRBase> ;
    using BR9 = GPIOK_BSRR_BR9_Values<GPIOK::BSRR, 25, 1, WriteMode, GPIOKBSRRBase> ;
    using BR10 = GPIOK_BSRR_BR10_Values<GPIOK::BSRR, 26, 1, WriteMode, GPIOKBSRRBase> ;
    using BR11 = GPIOK_BSRR_BR11_Values<GPIOK::BSRR, 27, 1, WriteMode, GPIOKBSRRBase> ;
    using BR12 = GPIOK_BSRR_BR12_Values<GPIOK::BSRR, 28, 1, WriteMode, GPIOKBSRRBase> ;
    using BR13 = GPIOK_BSRR_BR13_Values<GPIOK::BSRR, 29, 1, WriteMode, GPIOKBSRRBase> ;
    using BR14 = GPIOK_BSRR_BR14_Values<GPIOK::BSRR, 30, 1, WriteMode, GPIOKBSRRBase> ;
    using BR15 = GPIOK_BSRR_BR15_Values<GPIOK::BSRR, 31, 1, WriteMode, GPIOKBSRRBase> ;
    using FieldValues = GPIOK_BSRR_BR15_Values<GPIOK::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58022818, 32, WriteMode, GPIOKBSRRBase, T...> ;

  struct GPIOKLCKRBase {} ;

  struct LCKR : public RegisterBase<0x5802281C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOK_LCKR_LCK0_Values<GPIOK::LCKR, 0, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK1 = GPIOK_LCKR_LCK1_Values<GPIOK::LCKR, 1, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK2 = GPIOK_LCKR_LCK2_Values<GPIOK::LCKR, 2, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK3 = GPIOK_LCKR_LCK3_Values<GPIOK::LCKR, 3, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK4 = GPIOK_LCKR_LCK4_Values<GPIOK::LCKR, 4, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK5 = GPIOK_LCKR_LCK5_Values<GPIOK::LCKR, 5, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK6 = GPIOK_LCKR_LCK6_Values<GPIOK::LCKR, 6, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK7 = GPIOK_LCKR_LCK7_Values<GPIOK::LCKR, 7, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK8 = GPIOK_LCKR_LCK8_Values<GPIOK::LCKR, 8, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK9 = GPIOK_LCKR_LCK9_Values<GPIOK::LCKR, 9, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK10 = GPIOK_LCKR_LCK10_Values<GPIOK::LCKR, 10, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK11 = GPIOK_LCKR_LCK11_Values<GPIOK::LCKR, 11, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK12 = GPIOK_LCKR_LCK12_Values<GPIOK::LCKR, 12, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK13 = GPIOK_LCKR_LCK13_Values<GPIOK::LCKR, 13, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK14 = GPIOK_LCKR_LCK14_Values<GPIOK::LCKR, 14, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCK15 = GPIOK_LCKR_LCK15_Values<GPIOK::LCKR, 15, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using LCKK = GPIOK_LCKR_LCKK_Values<GPIOK::LCKR, 16, 1, ReadWriteMode, GPIOKLCKRBase> ;
    using FieldValues = GPIOK_LCKR_LCKK_Values<GPIOK::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x5802281C, 32, ReadWriteMode, GPIOKLCKRBase, T...> ;

  struct GPIOKAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58022820, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOK_AFRL_AFSEL0_Values<GPIOK::AFRL, 0, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFSEL1 = GPIOK_AFRL_AFSEL1_Values<GPIOK::AFRL, 4, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFSEL2 = GPIOK_AFRL_AFSEL2_Values<GPIOK::AFRL, 8, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFSEL3 = GPIOK_AFRL_AFSEL3_Values<GPIOK::AFRL, 12, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFSEL4 = GPIOK_AFRL_AFSEL4_Values<GPIOK::AFRL, 16, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFSEL5 = GPIOK_AFRL_AFSEL5_Values<GPIOK::AFRL, 20, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFSEL6 = GPIOK_AFRL_AFSEL6_Values<GPIOK::AFRL, 24, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using AFSEL7 = GPIOK_AFRL_AFSEL7_Values<GPIOK::AFRL, 28, 4, ReadWriteMode, GPIOKAFRLBase> ;
    using FieldValues = GPIOK_AFRL_AFSEL7_Values<GPIOK::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58022820, 32, ReadWriteMode, GPIOKAFRLBase, T...> ;

  struct GPIOKAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58022824, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOK_AFRH_AFSEL8_Values<GPIOK::AFRH, 0, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFSEL9 = GPIOK_AFRH_AFSEL9_Values<GPIOK::AFRH, 4, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFSEL10 = GPIOK_AFRH_AFSEL10_Values<GPIOK::AFRH, 8, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFSEL11 = GPIOK_AFRH_AFSEL11_Values<GPIOK::AFRH, 12, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFSEL12 = GPIOK_AFRH_AFSEL12_Values<GPIOK::AFRH, 16, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFSEL13 = GPIOK_AFRH_AFSEL13_Values<GPIOK::AFRH, 20, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFSEL14 = GPIOK_AFRH_AFSEL14_Values<GPIOK::AFRH, 24, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using AFSEL15 = GPIOK_AFRH_AFSEL15_Values<GPIOK::AFRH, 28, 4, ReadWriteMode, GPIOKAFRHBase> ;
    using FieldValues = GPIOK_AFRH_AFSEL15_Values<GPIOK::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58022824, 32, ReadWriteMode, GPIOKAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOKREGISTERS_HPP)
