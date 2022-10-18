/*******************************************************************************
* Filename      : gpioiregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIOIREGISTERS_HPP)
#define GPIOIREGISTERS_HPP

#include "gpioifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOI
{
  struct GPIOIMODERBase {} ;

  struct MODER : public RegisterBase<0x58022000, 32, ReadWriteMode>
  {
    using MODE0 = GPIOI_MODER_MODE0_Values<GPIOI::MODER, 0, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE1 = GPIOI_MODER_MODE1_Values<GPIOI::MODER, 2, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE2 = GPIOI_MODER_MODE2_Values<GPIOI::MODER, 4, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE3 = GPIOI_MODER_MODE3_Values<GPIOI::MODER, 6, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE4 = GPIOI_MODER_MODE4_Values<GPIOI::MODER, 8, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE5 = GPIOI_MODER_MODE5_Values<GPIOI::MODER, 10, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE6 = GPIOI_MODER_MODE6_Values<GPIOI::MODER, 12, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE7 = GPIOI_MODER_MODE7_Values<GPIOI::MODER, 14, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE8 = GPIOI_MODER_MODE8_Values<GPIOI::MODER, 16, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE9 = GPIOI_MODER_MODE9_Values<GPIOI::MODER, 18, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE10 = GPIOI_MODER_MODE10_Values<GPIOI::MODER, 20, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE11 = GPIOI_MODER_MODE11_Values<GPIOI::MODER, 22, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE12 = GPIOI_MODER_MODE12_Values<GPIOI::MODER, 24, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE13 = GPIOI_MODER_MODE13_Values<GPIOI::MODER, 26, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE14 = GPIOI_MODER_MODE14_Values<GPIOI::MODER, 28, 2, ReadWriteMode, GPIOIMODERBase> ;
    using MODE15 = GPIOI_MODER_MODE15_Values<GPIOI::MODER, 30, 2, ReadWriteMode, GPIOIMODERBase> ;
    using FieldValues = GPIOI_MODER_MODE15_Values<GPIOI::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58022000, 32, ReadWriteMode, GPIOIMODERBase, T...> ;

  struct GPIOIOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58022004, 32, ReadWriteMode>
  {
    using OT0 = GPIOI_OTYPER_OT0_Values<GPIOI::OTYPER, 0, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT1 = GPIOI_OTYPER_OT1_Values<GPIOI::OTYPER, 1, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT2 = GPIOI_OTYPER_OT2_Values<GPIOI::OTYPER, 2, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT3 = GPIOI_OTYPER_OT3_Values<GPIOI::OTYPER, 3, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT4 = GPIOI_OTYPER_OT4_Values<GPIOI::OTYPER, 4, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT5 = GPIOI_OTYPER_OT5_Values<GPIOI::OTYPER, 5, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT6 = GPIOI_OTYPER_OT6_Values<GPIOI::OTYPER, 6, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT7 = GPIOI_OTYPER_OT7_Values<GPIOI::OTYPER, 7, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT8 = GPIOI_OTYPER_OT8_Values<GPIOI::OTYPER, 8, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT9 = GPIOI_OTYPER_OT9_Values<GPIOI::OTYPER, 9, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT10 = GPIOI_OTYPER_OT10_Values<GPIOI::OTYPER, 10, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT11 = GPIOI_OTYPER_OT11_Values<GPIOI::OTYPER, 11, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT12 = GPIOI_OTYPER_OT12_Values<GPIOI::OTYPER, 12, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT13 = GPIOI_OTYPER_OT13_Values<GPIOI::OTYPER, 13, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT14 = GPIOI_OTYPER_OT14_Values<GPIOI::OTYPER, 14, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using OT15 = GPIOI_OTYPER_OT15_Values<GPIOI::OTYPER, 15, 1, ReadWriteMode, GPIOIOTYPERBase> ;
    using FieldValues = GPIOI_OTYPER_OT15_Values<GPIOI::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58022004, 32, ReadWriteMode, GPIOIOTYPERBase, T...> ;

  struct GPIOIOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58022008, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOI_OSPEEDR_OSPEED0_Values<GPIOI::OSPEEDR, 0, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED1 = GPIOI_OSPEEDR_OSPEED1_Values<GPIOI::OSPEEDR, 2, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED2 = GPIOI_OSPEEDR_OSPEED2_Values<GPIOI::OSPEEDR, 4, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED3 = GPIOI_OSPEEDR_OSPEED3_Values<GPIOI::OSPEEDR, 6, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED4 = GPIOI_OSPEEDR_OSPEED4_Values<GPIOI::OSPEEDR, 8, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED5 = GPIOI_OSPEEDR_OSPEED5_Values<GPIOI::OSPEEDR, 10, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED6 = GPIOI_OSPEEDR_OSPEED6_Values<GPIOI::OSPEEDR, 12, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED7 = GPIOI_OSPEEDR_OSPEED7_Values<GPIOI::OSPEEDR, 14, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED8 = GPIOI_OSPEEDR_OSPEED8_Values<GPIOI::OSPEEDR, 16, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED9 = GPIOI_OSPEEDR_OSPEED9_Values<GPIOI::OSPEEDR, 18, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED10 = GPIOI_OSPEEDR_OSPEED10_Values<GPIOI::OSPEEDR, 20, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED11 = GPIOI_OSPEEDR_OSPEED11_Values<GPIOI::OSPEEDR, 22, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED12 = GPIOI_OSPEEDR_OSPEED12_Values<GPIOI::OSPEEDR, 24, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED13 = GPIOI_OSPEEDR_OSPEED13_Values<GPIOI::OSPEEDR, 26, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED14 = GPIOI_OSPEEDR_OSPEED14_Values<GPIOI::OSPEEDR, 28, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using OSPEED15 = GPIOI_OSPEEDR_OSPEED15_Values<GPIOI::OSPEEDR, 30, 2, ReadWriteMode, GPIOIOSPEEDRBase> ;
    using FieldValues = GPIOI_OSPEEDR_OSPEED15_Values<GPIOI::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58022008, 32, ReadWriteMode, GPIOIOSPEEDRBase, T...> ;

  struct GPIOIPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x5802200C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOI_PUPDR_PUPD0_Values<GPIOI::PUPDR, 0, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD1 = GPIOI_PUPDR_PUPD1_Values<GPIOI::PUPDR, 2, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD2 = GPIOI_PUPDR_PUPD2_Values<GPIOI::PUPDR, 4, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD3 = GPIOI_PUPDR_PUPD3_Values<GPIOI::PUPDR, 6, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD4 = GPIOI_PUPDR_PUPD4_Values<GPIOI::PUPDR, 8, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD5 = GPIOI_PUPDR_PUPD5_Values<GPIOI::PUPDR, 10, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD6 = GPIOI_PUPDR_PUPD6_Values<GPIOI::PUPDR, 12, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD7 = GPIOI_PUPDR_PUPD7_Values<GPIOI::PUPDR, 14, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD8 = GPIOI_PUPDR_PUPD8_Values<GPIOI::PUPDR, 16, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD9 = GPIOI_PUPDR_PUPD9_Values<GPIOI::PUPDR, 18, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD10 = GPIOI_PUPDR_PUPD10_Values<GPIOI::PUPDR, 20, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD11 = GPIOI_PUPDR_PUPD11_Values<GPIOI::PUPDR, 22, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD12 = GPIOI_PUPDR_PUPD12_Values<GPIOI::PUPDR, 24, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD13 = GPIOI_PUPDR_PUPD13_Values<GPIOI::PUPDR, 26, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD14 = GPIOI_PUPDR_PUPD14_Values<GPIOI::PUPDR, 28, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using PUPD15 = GPIOI_PUPDR_PUPD15_Values<GPIOI::PUPDR, 30, 2, ReadWriteMode, GPIOIPUPDRBase> ;
    using FieldValues = GPIOI_PUPDR_PUPD15_Values<GPIOI::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x5802200C, 32, ReadWriteMode, GPIOIPUPDRBase, T...> ;

  struct GPIOIIDRBase {} ;

  struct IDR : public RegisterBase<0x58022010, 32, ReadMode>
  {
    using ID0 = GPIOI_IDR_ID0_Values<GPIOI::IDR, 0, 1, ReadMode, GPIOIIDRBase> ;
    using ID1 = GPIOI_IDR_ID1_Values<GPIOI::IDR, 1, 1, ReadMode, GPIOIIDRBase> ;
    using ID2 = GPIOI_IDR_ID2_Values<GPIOI::IDR, 2, 1, ReadMode, GPIOIIDRBase> ;
    using ID3 = GPIOI_IDR_ID3_Values<GPIOI::IDR, 3, 1, ReadMode, GPIOIIDRBase> ;
    using ID4 = GPIOI_IDR_ID4_Values<GPIOI::IDR, 4, 1, ReadMode, GPIOIIDRBase> ;
    using ID5 = GPIOI_IDR_ID5_Values<GPIOI::IDR, 5, 1, ReadMode, GPIOIIDRBase> ;
    using ID6 = GPIOI_IDR_ID6_Values<GPIOI::IDR, 6, 1, ReadMode, GPIOIIDRBase> ;
    using ID7 = GPIOI_IDR_ID7_Values<GPIOI::IDR, 7, 1, ReadMode, GPIOIIDRBase> ;
    using ID8 = GPIOI_IDR_ID8_Values<GPIOI::IDR, 8, 1, ReadMode, GPIOIIDRBase> ;
    using ID9 = GPIOI_IDR_ID9_Values<GPIOI::IDR, 9, 1, ReadMode, GPIOIIDRBase> ;
    using ID10 = GPIOI_IDR_ID10_Values<GPIOI::IDR, 10, 1, ReadMode, GPIOIIDRBase> ;
    using ID11 = GPIOI_IDR_ID11_Values<GPIOI::IDR, 11, 1, ReadMode, GPIOIIDRBase> ;
    using ID12 = GPIOI_IDR_ID12_Values<GPIOI::IDR, 12, 1, ReadMode, GPIOIIDRBase> ;
    using ID13 = GPIOI_IDR_ID13_Values<GPIOI::IDR, 13, 1, ReadMode, GPIOIIDRBase> ;
    using ID14 = GPIOI_IDR_ID14_Values<GPIOI::IDR, 14, 1, ReadMode, GPIOIIDRBase> ;
    using ID15 = GPIOI_IDR_ID15_Values<GPIOI::IDR, 15, 1, ReadMode, GPIOIIDRBase> ;
    using FieldValues = GPIOI_IDR_ID15_Values<GPIOI::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58022010, 32, ReadMode, GPIOIIDRBase, T...> ;

  struct GPIOIODRBase {} ;

  struct ODR : public RegisterBase<0x58022014, 32, ReadWriteMode>
  {
    using OD0 = GPIOI_ODR_OD0_Values<GPIOI::ODR, 0, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD1 = GPIOI_ODR_OD1_Values<GPIOI::ODR, 1, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD2 = GPIOI_ODR_OD2_Values<GPIOI::ODR, 2, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD3 = GPIOI_ODR_OD3_Values<GPIOI::ODR, 3, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD4 = GPIOI_ODR_OD4_Values<GPIOI::ODR, 4, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD5 = GPIOI_ODR_OD5_Values<GPIOI::ODR, 5, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD6 = GPIOI_ODR_OD6_Values<GPIOI::ODR, 6, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD7 = GPIOI_ODR_OD7_Values<GPIOI::ODR, 7, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD8 = GPIOI_ODR_OD8_Values<GPIOI::ODR, 8, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD9 = GPIOI_ODR_OD9_Values<GPIOI::ODR, 9, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD10 = GPIOI_ODR_OD10_Values<GPIOI::ODR, 10, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD11 = GPIOI_ODR_OD11_Values<GPIOI::ODR, 11, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD12 = GPIOI_ODR_OD12_Values<GPIOI::ODR, 12, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD13 = GPIOI_ODR_OD13_Values<GPIOI::ODR, 13, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD14 = GPIOI_ODR_OD14_Values<GPIOI::ODR, 14, 1, ReadWriteMode, GPIOIODRBase> ;
    using OD15 = GPIOI_ODR_OD15_Values<GPIOI::ODR, 15, 1, ReadWriteMode, GPIOIODRBase> ;
    using FieldValues = GPIOI_ODR_OD15_Values<GPIOI::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58022014, 32, ReadWriteMode, GPIOIODRBase, T...> ;

  struct GPIOIBSRRBase {} ;

  struct BSRR : public RegisterBase<0x58022018, 32, WriteMode>
  {
    using BS0 = GPIOI_BSRR_BS0_Values<GPIOI::BSRR, 0, 1, WriteMode, GPIOIBSRRBase> ;
    using BS1 = GPIOI_BSRR_BS1_Values<GPIOI::BSRR, 1, 1, WriteMode, GPIOIBSRRBase> ;
    using BS2 = GPIOI_BSRR_BS2_Values<GPIOI::BSRR, 2, 1, WriteMode, GPIOIBSRRBase> ;
    using BS3 = GPIOI_BSRR_BS3_Values<GPIOI::BSRR, 3, 1, WriteMode, GPIOIBSRRBase> ;
    using BS4 = GPIOI_BSRR_BS4_Values<GPIOI::BSRR, 4, 1, WriteMode, GPIOIBSRRBase> ;
    using BS5 = GPIOI_BSRR_BS5_Values<GPIOI::BSRR, 5, 1, WriteMode, GPIOIBSRRBase> ;
    using BS6 = GPIOI_BSRR_BS6_Values<GPIOI::BSRR, 6, 1, WriteMode, GPIOIBSRRBase> ;
    using BS7 = GPIOI_BSRR_BS7_Values<GPIOI::BSRR, 7, 1, WriteMode, GPIOIBSRRBase> ;
    using BS8 = GPIOI_BSRR_BS8_Values<GPIOI::BSRR, 8, 1, WriteMode, GPIOIBSRRBase> ;
    using BS9 = GPIOI_BSRR_BS9_Values<GPIOI::BSRR, 9, 1, WriteMode, GPIOIBSRRBase> ;
    using BS10 = GPIOI_BSRR_BS10_Values<GPIOI::BSRR, 10, 1, WriteMode, GPIOIBSRRBase> ;
    using BS11 = GPIOI_BSRR_BS11_Values<GPIOI::BSRR, 11, 1, WriteMode, GPIOIBSRRBase> ;
    using BS12 = GPIOI_BSRR_BS12_Values<GPIOI::BSRR, 12, 1, WriteMode, GPIOIBSRRBase> ;
    using BS13 = GPIOI_BSRR_BS13_Values<GPIOI::BSRR, 13, 1, WriteMode, GPIOIBSRRBase> ;
    using BS14 = GPIOI_BSRR_BS14_Values<GPIOI::BSRR, 14, 1, WriteMode, GPIOIBSRRBase> ;
    using BS15 = GPIOI_BSRR_BS15_Values<GPIOI::BSRR, 15, 1, WriteMode, GPIOIBSRRBase> ;
    using BR0 = GPIOI_BSRR_BR0_Values<GPIOI::BSRR, 16, 1, WriteMode, GPIOIBSRRBase> ;
    using BR1 = GPIOI_BSRR_BR1_Values<GPIOI::BSRR, 17, 1, WriteMode, GPIOIBSRRBase> ;
    using BR2 = GPIOI_BSRR_BR2_Values<GPIOI::BSRR, 18, 1, WriteMode, GPIOIBSRRBase> ;
    using BR3 = GPIOI_BSRR_BR3_Values<GPIOI::BSRR, 19, 1, WriteMode, GPIOIBSRRBase> ;
    using BR4 = GPIOI_BSRR_BR4_Values<GPIOI::BSRR, 20, 1, WriteMode, GPIOIBSRRBase> ;
    using BR5 = GPIOI_BSRR_BR5_Values<GPIOI::BSRR, 21, 1, WriteMode, GPIOIBSRRBase> ;
    using BR6 = GPIOI_BSRR_BR6_Values<GPIOI::BSRR, 22, 1, WriteMode, GPIOIBSRRBase> ;
    using BR7 = GPIOI_BSRR_BR7_Values<GPIOI::BSRR, 23, 1, WriteMode, GPIOIBSRRBase> ;
    using BR8 = GPIOI_BSRR_BR8_Values<GPIOI::BSRR, 24, 1, WriteMode, GPIOIBSRRBase> ;
    using BR9 = GPIOI_BSRR_BR9_Values<GPIOI::BSRR, 25, 1, WriteMode, GPIOIBSRRBase> ;
    using BR10 = GPIOI_BSRR_BR10_Values<GPIOI::BSRR, 26, 1, WriteMode, GPIOIBSRRBase> ;
    using BR11 = GPIOI_BSRR_BR11_Values<GPIOI::BSRR, 27, 1, WriteMode, GPIOIBSRRBase> ;
    using BR12 = GPIOI_BSRR_BR12_Values<GPIOI::BSRR, 28, 1, WriteMode, GPIOIBSRRBase> ;
    using BR13 = GPIOI_BSRR_BR13_Values<GPIOI::BSRR, 29, 1, WriteMode, GPIOIBSRRBase> ;
    using BR14 = GPIOI_BSRR_BR14_Values<GPIOI::BSRR, 30, 1, WriteMode, GPIOIBSRRBase> ;
    using BR15 = GPIOI_BSRR_BR15_Values<GPIOI::BSRR, 31, 1, WriteMode, GPIOIBSRRBase> ;
    using FieldValues = GPIOI_BSRR_BR15_Values<GPIOI::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58022018, 32, WriteMode, GPIOIBSRRBase, T...> ;

  struct GPIOILCKRBase {} ;

  struct LCKR : public RegisterBase<0x5802201C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOI_LCKR_LCK0_Values<GPIOI::LCKR, 0, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK1 = GPIOI_LCKR_LCK1_Values<GPIOI::LCKR, 1, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK2 = GPIOI_LCKR_LCK2_Values<GPIOI::LCKR, 2, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK3 = GPIOI_LCKR_LCK3_Values<GPIOI::LCKR, 3, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK4 = GPIOI_LCKR_LCK4_Values<GPIOI::LCKR, 4, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK5 = GPIOI_LCKR_LCK5_Values<GPIOI::LCKR, 5, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK6 = GPIOI_LCKR_LCK6_Values<GPIOI::LCKR, 6, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK7 = GPIOI_LCKR_LCK7_Values<GPIOI::LCKR, 7, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK8 = GPIOI_LCKR_LCK8_Values<GPIOI::LCKR, 8, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK9 = GPIOI_LCKR_LCK9_Values<GPIOI::LCKR, 9, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK10 = GPIOI_LCKR_LCK10_Values<GPIOI::LCKR, 10, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK11 = GPIOI_LCKR_LCK11_Values<GPIOI::LCKR, 11, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK12 = GPIOI_LCKR_LCK12_Values<GPIOI::LCKR, 12, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK13 = GPIOI_LCKR_LCK13_Values<GPIOI::LCKR, 13, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK14 = GPIOI_LCKR_LCK14_Values<GPIOI::LCKR, 14, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCK15 = GPIOI_LCKR_LCK15_Values<GPIOI::LCKR, 15, 1, ReadWriteMode, GPIOILCKRBase> ;
    using LCKK = GPIOI_LCKR_LCKK_Values<GPIOI::LCKR, 16, 1, ReadWriteMode, GPIOILCKRBase> ;
    using FieldValues = GPIOI_LCKR_LCKK_Values<GPIOI::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x5802201C, 32, ReadWriteMode, GPIOILCKRBase, T...> ;

  struct GPIOIAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58022020, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOI_AFRL_AFSEL0_Values<GPIOI::AFRL, 0, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFSEL1 = GPIOI_AFRL_AFSEL1_Values<GPIOI::AFRL, 4, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFSEL2 = GPIOI_AFRL_AFSEL2_Values<GPIOI::AFRL, 8, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFSEL3 = GPIOI_AFRL_AFSEL3_Values<GPIOI::AFRL, 12, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFSEL4 = GPIOI_AFRL_AFSEL4_Values<GPIOI::AFRL, 16, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFSEL5 = GPIOI_AFRL_AFSEL5_Values<GPIOI::AFRL, 20, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFSEL6 = GPIOI_AFRL_AFSEL6_Values<GPIOI::AFRL, 24, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using AFSEL7 = GPIOI_AFRL_AFSEL7_Values<GPIOI::AFRL, 28, 4, ReadWriteMode, GPIOIAFRLBase> ;
    using FieldValues = GPIOI_AFRL_AFSEL7_Values<GPIOI::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58022020, 32, ReadWriteMode, GPIOIAFRLBase, T...> ;

  struct GPIOIAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58022024, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOI_AFRH_AFSEL8_Values<GPIOI::AFRH, 0, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFSEL9 = GPIOI_AFRH_AFSEL9_Values<GPIOI::AFRH, 4, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFSEL10 = GPIOI_AFRH_AFSEL10_Values<GPIOI::AFRH, 8, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFSEL11 = GPIOI_AFRH_AFSEL11_Values<GPIOI::AFRH, 12, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFSEL12 = GPIOI_AFRH_AFSEL12_Values<GPIOI::AFRH, 16, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFSEL13 = GPIOI_AFRH_AFSEL13_Values<GPIOI::AFRH, 20, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFSEL14 = GPIOI_AFRH_AFSEL14_Values<GPIOI::AFRH, 24, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using AFSEL15 = GPIOI_AFRH_AFSEL15_Values<GPIOI::AFRH, 28, 4, ReadWriteMode, GPIOIAFRHBase> ;
    using FieldValues = GPIOI_AFRH_AFSEL15_Values<GPIOI::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58022024, 32, ReadWriteMode, GPIOIAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOIREGISTERS_HPP)
