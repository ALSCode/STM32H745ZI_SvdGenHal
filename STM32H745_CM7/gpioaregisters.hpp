/*******************************************************************************
* Filename      : gpioaregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIOAREGISTERS_HPP)
#define GPIOAREGISTERS_HPP

#include "gpioafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOA
{
  struct GPIOAMODERBase {} ;

  struct MODER : public RegisterBase<0x58020000, 32, ReadWriteMode>
  {
    using MODE0 = GPIOA_MODER_MODE0_Values<GPIOA::MODER, 0, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE1 = GPIOA_MODER_MODE1_Values<GPIOA::MODER, 2, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE2 = GPIOA_MODER_MODE2_Values<GPIOA::MODER, 4, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE3 = GPIOA_MODER_MODE3_Values<GPIOA::MODER, 6, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE4 = GPIOA_MODER_MODE4_Values<GPIOA::MODER, 8, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE5 = GPIOA_MODER_MODE5_Values<GPIOA::MODER, 10, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE6 = GPIOA_MODER_MODE6_Values<GPIOA::MODER, 12, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE7 = GPIOA_MODER_MODE7_Values<GPIOA::MODER, 14, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE8 = GPIOA_MODER_MODE8_Values<GPIOA::MODER, 16, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE9 = GPIOA_MODER_MODE9_Values<GPIOA::MODER, 18, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE10 = GPIOA_MODER_MODE10_Values<GPIOA::MODER, 20, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE11 = GPIOA_MODER_MODE11_Values<GPIOA::MODER, 22, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE12 = GPIOA_MODER_MODE12_Values<GPIOA::MODER, 24, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE13 = GPIOA_MODER_MODE13_Values<GPIOA::MODER, 26, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE14 = GPIOA_MODER_MODE14_Values<GPIOA::MODER, 28, 2, ReadWriteMode, GPIOAMODERBase> ;
    using MODE15 = GPIOA_MODER_MODE15_Values<GPIOA::MODER, 30, 2, ReadWriteMode, GPIOAMODERBase> ;
    using FieldValues = GPIOA_MODER_MODE15_Values<GPIOA::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58020000, 32, ReadWriteMode, GPIOAMODERBase, T...> ;

  struct GPIOAOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58020004, 32, ReadWriteMode>
  {
    using OT0 = GPIOA_OTYPER_OT0_Values<GPIOA::OTYPER, 0, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT1 = GPIOA_OTYPER_OT1_Values<GPIOA::OTYPER, 1, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT2 = GPIOA_OTYPER_OT2_Values<GPIOA::OTYPER, 2, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT3 = GPIOA_OTYPER_OT3_Values<GPIOA::OTYPER, 3, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT4 = GPIOA_OTYPER_OT4_Values<GPIOA::OTYPER, 4, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT5 = GPIOA_OTYPER_OT5_Values<GPIOA::OTYPER, 5, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT6 = GPIOA_OTYPER_OT6_Values<GPIOA::OTYPER, 6, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT7 = GPIOA_OTYPER_OT7_Values<GPIOA::OTYPER, 7, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT8 = GPIOA_OTYPER_OT8_Values<GPIOA::OTYPER, 8, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT9 = GPIOA_OTYPER_OT9_Values<GPIOA::OTYPER, 9, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT10 = GPIOA_OTYPER_OT10_Values<GPIOA::OTYPER, 10, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT11 = GPIOA_OTYPER_OT11_Values<GPIOA::OTYPER, 11, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT12 = GPIOA_OTYPER_OT12_Values<GPIOA::OTYPER, 12, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT13 = GPIOA_OTYPER_OT13_Values<GPIOA::OTYPER, 13, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT14 = GPIOA_OTYPER_OT14_Values<GPIOA::OTYPER, 14, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using OT15 = GPIOA_OTYPER_OT15_Values<GPIOA::OTYPER, 15, 1, ReadWriteMode, GPIOAOTYPERBase> ;
    using FieldValues = GPIOA_OTYPER_OT15_Values<GPIOA::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58020004, 32, ReadWriteMode, GPIOAOTYPERBase, T...> ;

  struct GPIOAOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58020008, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOA_OSPEEDR_OSPEED0_Values<GPIOA::OSPEEDR, 0, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED1 = GPIOA_OSPEEDR_OSPEED1_Values<GPIOA::OSPEEDR, 2, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED2 = GPIOA_OSPEEDR_OSPEED2_Values<GPIOA::OSPEEDR, 4, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED3 = GPIOA_OSPEEDR_OSPEED3_Values<GPIOA::OSPEEDR, 6, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED4 = GPIOA_OSPEEDR_OSPEED4_Values<GPIOA::OSPEEDR, 8, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED5 = GPIOA_OSPEEDR_OSPEED5_Values<GPIOA::OSPEEDR, 10, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED6 = GPIOA_OSPEEDR_OSPEED6_Values<GPIOA::OSPEEDR, 12, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED7 = GPIOA_OSPEEDR_OSPEED7_Values<GPIOA::OSPEEDR, 14, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED8 = GPIOA_OSPEEDR_OSPEED8_Values<GPIOA::OSPEEDR, 16, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED9 = GPIOA_OSPEEDR_OSPEED9_Values<GPIOA::OSPEEDR, 18, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED10 = GPIOA_OSPEEDR_OSPEED10_Values<GPIOA::OSPEEDR, 20, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED11 = GPIOA_OSPEEDR_OSPEED11_Values<GPIOA::OSPEEDR, 22, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED12 = GPIOA_OSPEEDR_OSPEED12_Values<GPIOA::OSPEEDR, 24, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED13 = GPIOA_OSPEEDR_OSPEED13_Values<GPIOA::OSPEEDR, 26, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED14 = GPIOA_OSPEEDR_OSPEED14_Values<GPIOA::OSPEEDR, 28, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using OSPEED15 = GPIOA_OSPEEDR_OSPEED15_Values<GPIOA::OSPEEDR, 30, 2, ReadWriteMode, GPIOAOSPEEDRBase> ;
    using FieldValues = GPIOA_OSPEEDR_OSPEED15_Values<GPIOA::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58020008, 32, ReadWriteMode, GPIOAOSPEEDRBase, T...> ;

  struct GPIOAPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x5802000C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOA_PUPDR_PUPD0_Values<GPIOA::PUPDR, 0, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD1 = GPIOA_PUPDR_PUPD1_Values<GPIOA::PUPDR, 2, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD2 = GPIOA_PUPDR_PUPD2_Values<GPIOA::PUPDR, 4, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD3 = GPIOA_PUPDR_PUPD3_Values<GPIOA::PUPDR, 6, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD4 = GPIOA_PUPDR_PUPD4_Values<GPIOA::PUPDR, 8, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD5 = GPIOA_PUPDR_PUPD5_Values<GPIOA::PUPDR, 10, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD6 = GPIOA_PUPDR_PUPD6_Values<GPIOA::PUPDR, 12, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD7 = GPIOA_PUPDR_PUPD7_Values<GPIOA::PUPDR, 14, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD8 = GPIOA_PUPDR_PUPD8_Values<GPIOA::PUPDR, 16, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD9 = GPIOA_PUPDR_PUPD9_Values<GPIOA::PUPDR, 18, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD10 = GPIOA_PUPDR_PUPD10_Values<GPIOA::PUPDR, 20, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD11 = GPIOA_PUPDR_PUPD11_Values<GPIOA::PUPDR, 22, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD12 = GPIOA_PUPDR_PUPD12_Values<GPIOA::PUPDR, 24, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD13 = GPIOA_PUPDR_PUPD13_Values<GPIOA::PUPDR, 26, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD14 = GPIOA_PUPDR_PUPD14_Values<GPIOA::PUPDR, 28, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using PUPD15 = GPIOA_PUPDR_PUPD15_Values<GPIOA::PUPDR, 30, 2, ReadWriteMode, GPIOAPUPDRBase> ;
    using FieldValues = GPIOA_PUPDR_PUPD15_Values<GPIOA::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x5802000C, 32, ReadWriteMode, GPIOAPUPDRBase, T...> ;

  struct GPIOAIDRBase {} ;

  struct IDR : public RegisterBase<0x58020010, 32, ReadMode>
  {
    using ID0 = GPIOA_IDR_ID0_Values<GPIOA::IDR, 0, 1, ReadMode, GPIOAIDRBase> ;
    using ID1 = GPIOA_IDR_ID1_Values<GPIOA::IDR, 1, 1, ReadMode, GPIOAIDRBase> ;
    using ID2 = GPIOA_IDR_ID2_Values<GPIOA::IDR, 2, 1, ReadMode, GPIOAIDRBase> ;
    using ID3 = GPIOA_IDR_ID3_Values<GPIOA::IDR, 3, 1, ReadMode, GPIOAIDRBase> ;
    using ID4 = GPIOA_IDR_ID4_Values<GPIOA::IDR, 4, 1, ReadMode, GPIOAIDRBase> ;
    using ID5 = GPIOA_IDR_ID5_Values<GPIOA::IDR, 5, 1, ReadMode, GPIOAIDRBase> ;
    using ID6 = GPIOA_IDR_ID6_Values<GPIOA::IDR, 6, 1, ReadMode, GPIOAIDRBase> ;
    using ID7 = GPIOA_IDR_ID7_Values<GPIOA::IDR, 7, 1, ReadMode, GPIOAIDRBase> ;
    using ID8 = GPIOA_IDR_ID8_Values<GPIOA::IDR, 8, 1, ReadMode, GPIOAIDRBase> ;
    using ID9 = GPIOA_IDR_ID9_Values<GPIOA::IDR, 9, 1, ReadMode, GPIOAIDRBase> ;
    using ID10 = GPIOA_IDR_ID10_Values<GPIOA::IDR, 10, 1, ReadMode, GPIOAIDRBase> ;
    using ID11 = GPIOA_IDR_ID11_Values<GPIOA::IDR, 11, 1, ReadMode, GPIOAIDRBase> ;
    using ID12 = GPIOA_IDR_ID12_Values<GPIOA::IDR, 12, 1, ReadMode, GPIOAIDRBase> ;
    using ID13 = GPIOA_IDR_ID13_Values<GPIOA::IDR, 13, 1, ReadMode, GPIOAIDRBase> ;
    using ID14 = GPIOA_IDR_ID14_Values<GPIOA::IDR, 14, 1, ReadMode, GPIOAIDRBase> ;
    using ID15 = GPIOA_IDR_ID15_Values<GPIOA::IDR, 15, 1, ReadMode, GPIOAIDRBase> ;
    using FieldValues = GPIOA_IDR_ID15_Values<GPIOA::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58020010, 32, ReadMode, GPIOAIDRBase, T...> ;

  struct GPIOAODRBase {} ;

  struct ODR : public RegisterBase<0x58020014, 32, ReadWriteMode>
  {
    using OD0 = GPIOA_ODR_OD0_Values<GPIOA::ODR, 0, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD1 = GPIOA_ODR_OD1_Values<GPIOA::ODR, 1, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD2 = GPIOA_ODR_OD2_Values<GPIOA::ODR, 2, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD3 = GPIOA_ODR_OD3_Values<GPIOA::ODR, 3, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD4 = GPIOA_ODR_OD4_Values<GPIOA::ODR, 4, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD5 = GPIOA_ODR_OD5_Values<GPIOA::ODR, 5, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD6 = GPIOA_ODR_OD6_Values<GPIOA::ODR, 6, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD7 = GPIOA_ODR_OD7_Values<GPIOA::ODR, 7, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD8 = GPIOA_ODR_OD8_Values<GPIOA::ODR, 8, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD9 = GPIOA_ODR_OD9_Values<GPIOA::ODR, 9, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD10 = GPIOA_ODR_OD10_Values<GPIOA::ODR, 10, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD11 = GPIOA_ODR_OD11_Values<GPIOA::ODR, 11, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD12 = GPIOA_ODR_OD12_Values<GPIOA::ODR, 12, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD13 = GPIOA_ODR_OD13_Values<GPIOA::ODR, 13, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD14 = GPIOA_ODR_OD14_Values<GPIOA::ODR, 14, 1, ReadWriteMode, GPIOAODRBase> ;
    using OD15 = GPIOA_ODR_OD15_Values<GPIOA::ODR, 15, 1, ReadWriteMode, GPIOAODRBase> ;
    using FieldValues = GPIOA_ODR_OD15_Values<GPIOA::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58020014, 32, ReadWriteMode, GPIOAODRBase, T...> ;

  struct GPIOABSRRBase {} ;

  struct BSRR : public RegisterBase<0x58020018, 32, WriteMode>
  {
    using BS0 = GPIOA_BSRR_BS0_Values<GPIOA::BSRR, 0, 1, WriteMode, GPIOABSRRBase> ;
    using BS1 = GPIOA_BSRR_BS1_Values<GPIOA::BSRR, 1, 1, WriteMode, GPIOABSRRBase> ;
    using BS2 = GPIOA_BSRR_BS2_Values<GPIOA::BSRR, 2, 1, WriteMode, GPIOABSRRBase> ;
    using BS3 = GPIOA_BSRR_BS3_Values<GPIOA::BSRR, 3, 1, WriteMode, GPIOABSRRBase> ;
    using BS4 = GPIOA_BSRR_BS4_Values<GPIOA::BSRR, 4, 1, WriteMode, GPIOABSRRBase> ;
    using BS5 = GPIOA_BSRR_BS5_Values<GPIOA::BSRR, 5, 1, WriteMode, GPIOABSRRBase> ;
    using BS6 = GPIOA_BSRR_BS6_Values<GPIOA::BSRR, 6, 1, WriteMode, GPIOABSRRBase> ;
    using BS7 = GPIOA_BSRR_BS7_Values<GPIOA::BSRR, 7, 1, WriteMode, GPIOABSRRBase> ;
    using BS8 = GPIOA_BSRR_BS8_Values<GPIOA::BSRR, 8, 1, WriteMode, GPIOABSRRBase> ;
    using BS9 = GPIOA_BSRR_BS9_Values<GPIOA::BSRR, 9, 1, WriteMode, GPIOABSRRBase> ;
    using BS10 = GPIOA_BSRR_BS10_Values<GPIOA::BSRR, 10, 1, WriteMode, GPIOABSRRBase> ;
    using BS11 = GPIOA_BSRR_BS11_Values<GPIOA::BSRR, 11, 1, WriteMode, GPIOABSRRBase> ;
    using BS12 = GPIOA_BSRR_BS12_Values<GPIOA::BSRR, 12, 1, WriteMode, GPIOABSRRBase> ;
    using BS13 = GPIOA_BSRR_BS13_Values<GPIOA::BSRR, 13, 1, WriteMode, GPIOABSRRBase> ;
    using BS14 = GPIOA_BSRR_BS14_Values<GPIOA::BSRR, 14, 1, WriteMode, GPIOABSRRBase> ;
    using BS15 = GPIOA_BSRR_BS15_Values<GPIOA::BSRR, 15, 1, WriteMode, GPIOABSRRBase> ;
    using BR0 = GPIOA_BSRR_BR0_Values<GPIOA::BSRR, 16, 1, WriteMode, GPIOABSRRBase> ;
    using BR1 = GPIOA_BSRR_BR1_Values<GPIOA::BSRR, 17, 1, WriteMode, GPIOABSRRBase> ;
    using BR2 = GPIOA_BSRR_BR2_Values<GPIOA::BSRR, 18, 1, WriteMode, GPIOABSRRBase> ;
    using BR3 = GPIOA_BSRR_BR3_Values<GPIOA::BSRR, 19, 1, WriteMode, GPIOABSRRBase> ;
    using BR4 = GPIOA_BSRR_BR4_Values<GPIOA::BSRR, 20, 1, WriteMode, GPIOABSRRBase> ;
    using BR5 = GPIOA_BSRR_BR5_Values<GPIOA::BSRR, 21, 1, WriteMode, GPIOABSRRBase> ;
    using BR6 = GPIOA_BSRR_BR6_Values<GPIOA::BSRR, 22, 1, WriteMode, GPIOABSRRBase> ;
    using BR7 = GPIOA_BSRR_BR7_Values<GPIOA::BSRR, 23, 1, WriteMode, GPIOABSRRBase> ;
    using BR8 = GPIOA_BSRR_BR8_Values<GPIOA::BSRR, 24, 1, WriteMode, GPIOABSRRBase> ;
    using BR9 = GPIOA_BSRR_BR9_Values<GPIOA::BSRR, 25, 1, WriteMode, GPIOABSRRBase> ;
    using BR10 = GPIOA_BSRR_BR10_Values<GPIOA::BSRR, 26, 1, WriteMode, GPIOABSRRBase> ;
    using BR11 = GPIOA_BSRR_BR11_Values<GPIOA::BSRR, 27, 1, WriteMode, GPIOABSRRBase> ;
    using BR12 = GPIOA_BSRR_BR12_Values<GPIOA::BSRR, 28, 1, WriteMode, GPIOABSRRBase> ;
    using BR13 = GPIOA_BSRR_BR13_Values<GPIOA::BSRR, 29, 1, WriteMode, GPIOABSRRBase> ;
    using BR14 = GPIOA_BSRR_BR14_Values<GPIOA::BSRR, 30, 1, WriteMode, GPIOABSRRBase> ;
    using BR15 = GPIOA_BSRR_BR15_Values<GPIOA::BSRR, 31, 1, WriteMode, GPIOABSRRBase> ;
    using FieldValues = GPIOA_BSRR_BR15_Values<GPIOA::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58020018, 32, WriteMode, GPIOABSRRBase, T...> ;

  struct GPIOALCKRBase {} ;

  struct LCKR : public RegisterBase<0x5802001C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOA_LCKR_LCK0_Values<GPIOA::LCKR, 0, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK1 = GPIOA_LCKR_LCK1_Values<GPIOA::LCKR, 1, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK2 = GPIOA_LCKR_LCK2_Values<GPIOA::LCKR, 2, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK3 = GPIOA_LCKR_LCK3_Values<GPIOA::LCKR, 3, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK4 = GPIOA_LCKR_LCK4_Values<GPIOA::LCKR, 4, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK5 = GPIOA_LCKR_LCK5_Values<GPIOA::LCKR, 5, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK6 = GPIOA_LCKR_LCK6_Values<GPIOA::LCKR, 6, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK7 = GPIOA_LCKR_LCK7_Values<GPIOA::LCKR, 7, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK8 = GPIOA_LCKR_LCK8_Values<GPIOA::LCKR, 8, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK9 = GPIOA_LCKR_LCK9_Values<GPIOA::LCKR, 9, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK10 = GPIOA_LCKR_LCK10_Values<GPIOA::LCKR, 10, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK11 = GPIOA_LCKR_LCK11_Values<GPIOA::LCKR, 11, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK12 = GPIOA_LCKR_LCK12_Values<GPIOA::LCKR, 12, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK13 = GPIOA_LCKR_LCK13_Values<GPIOA::LCKR, 13, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK14 = GPIOA_LCKR_LCK14_Values<GPIOA::LCKR, 14, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCK15 = GPIOA_LCKR_LCK15_Values<GPIOA::LCKR, 15, 1, ReadWriteMode, GPIOALCKRBase> ;
    using LCKK = GPIOA_LCKR_LCKK_Values<GPIOA::LCKR, 16, 1, ReadWriteMode, GPIOALCKRBase> ;
    using FieldValues = GPIOA_LCKR_LCKK_Values<GPIOA::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x5802001C, 32, ReadWriteMode, GPIOALCKRBase, T...> ;

  struct GPIOAAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58020020, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOA_AFRL_AFSEL0_Values<GPIOA::AFRL, 0, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFSEL1 = GPIOA_AFRL_AFSEL1_Values<GPIOA::AFRL, 4, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFSEL2 = GPIOA_AFRL_AFSEL2_Values<GPIOA::AFRL, 8, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFSEL3 = GPIOA_AFRL_AFSEL3_Values<GPIOA::AFRL, 12, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFSEL4 = GPIOA_AFRL_AFSEL4_Values<GPIOA::AFRL, 16, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFSEL5 = GPIOA_AFRL_AFSEL5_Values<GPIOA::AFRL, 20, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFSEL6 = GPIOA_AFRL_AFSEL6_Values<GPIOA::AFRL, 24, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using AFSEL7 = GPIOA_AFRL_AFSEL7_Values<GPIOA::AFRL, 28, 4, ReadWriteMode, GPIOAAFRLBase> ;
    using FieldValues = GPIOA_AFRL_AFSEL7_Values<GPIOA::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58020020, 32, ReadWriteMode, GPIOAAFRLBase, T...> ;

  struct GPIOAAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58020024, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOA_AFRH_AFSEL8_Values<GPIOA::AFRH, 0, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFSEL9 = GPIOA_AFRH_AFSEL9_Values<GPIOA::AFRH, 4, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFSEL10 = GPIOA_AFRH_AFSEL10_Values<GPIOA::AFRH, 8, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFSEL11 = GPIOA_AFRH_AFSEL11_Values<GPIOA::AFRH, 12, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFSEL12 = GPIOA_AFRH_AFSEL12_Values<GPIOA::AFRH, 16, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFSEL13 = GPIOA_AFRH_AFSEL13_Values<GPIOA::AFRH, 20, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFSEL14 = GPIOA_AFRH_AFSEL14_Values<GPIOA::AFRH, 24, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using AFSEL15 = GPIOA_AFRH_AFSEL15_Values<GPIOA::AFRH, 28, 4, ReadWriteMode, GPIOAAFRHBase> ;
    using FieldValues = GPIOA_AFRH_AFSEL15_Values<GPIOA::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58020024, 32, ReadWriteMode, GPIOAAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOAREGISTERS_HPP)
