/*******************************************************************************
* Filename      : gpioeregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIOEREGISTERS_HPP)
#define GPIOEREGISTERS_HPP

#include "gpioefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOE
{
  struct GPIOEMODERBase {} ;

  struct MODER : public RegisterBase<0x58021000, 32, ReadWriteMode>
  {
    using MODE0 = GPIOE_MODER_MODE0_Values<GPIOE::MODER, 0, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE1 = GPIOE_MODER_MODE1_Values<GPIOE::MODER, 2, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE2 = GPIOE_MODER_MODE2_Values<GPIOE::MODER, 4, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE3 = GPIOE_MODER_MODE3_Values<GPIOE::MODER, 6, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE4 = GPIOE_MODER_MODE4_Values<GPIOE::MODER, 8, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE5 = GPIOE_MODER_MODE5_Values<GPIOE::MODER, 10, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE6 = GPIOE_MODER_MODE6_Values<GPIOE::MODER, 12, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE7 = GPIOE_MODER_MODE7_Values<GPIOE::MODER, 14, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE8 = GPIOE_MODER_MODE8_Values<GPIOE::MODER, 16, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE9 = GPIOE_MODER_MODE9_Values<GPIOE::MODER, 18, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE10 = GPIOE_MODER_MODE10_Values<GPIOE::MODER, 20, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE11 = GPIOE_MODER_MODE11_Values<GPIOE::MODER, 22, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE12 = GPIOE_MODER_MODE12_Values<GPIOE::MODER, 24, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE13 = GPIOE_MODER_MODE13_Values<GPIOE::MODER, 26, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE14 = GPIOE_MODER_MODE14_Values<GPIOE::MODER, 28, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODE15 = GPIOE_MODER_MODE15_Values<GPIOE::MODER, 30, 2, ReadWriteMode, GPIOEMODERBase> ;
    using FieldValues = GPIOE_MODER_MODE15_Values<GPIOE::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58021000, 32, ReadWriteMode, GPIOEMODERBase, T...> ;

  struct GPIOEOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58021004, 32, ReadWriteMode>
  {
    using OT0 = GPIOE_OTYPER_OT0_Values<GPIOE::OTYPER, 0, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT1 = GPIOE_OTYPER_OT1_Values<GPIOE::OTYPER, 1, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT2 = GPIOE_OTYPER_OT2_Values<GPIOE::OTYPER, 2, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT3 = GPIOE_OTYPER_OT3_Values<GPIOE::OTYPER, 3, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT4 = GPIOE_OTYPER_OT4_Values<GPIOE::OTYPER, 4, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT5 = GPIOE_OTYPER_OT5_Values<GPIOE::OTYPER, 5, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT6 = GPIOE_OTYPER_OT6_Values<GPIOE::OTYPER, 6, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT7 = GPIOE_OTYPER_OT7_Values<GPIOE::OTYPER, 7, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT8 = GPIOE_OTYPER_OT8_Values<GPIOE::OTYPER, 8, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT9 = GPIOE_OTYPER_OT9_Values<GPIOE::OTYPER, 9, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT10 = GPIOE_OTYPER_OT10_Values<GPIOE::OTYPER, 10, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT11 = GPIOE_OTYPER_OT11_Values<GPIOE::OTYPER, 11, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT12 = GPIOE_OTYPER_OT12_Values<GPIOE::OTYPER, 12, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT13 = GPIOE_OTYPER_OT13_Values<GPIOE::OTYPER, 13, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT14 = GPIOE_OTYPER_OT14_Values<GPIOE::OTYPER, 14, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT15 = GPIOE_OTYPER_OT15_Values<GPIOE::OTYPER, 15, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using FieldValues = GPIOE_OTYPER_OT15_Values<GPIOE::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58021004, 32, ReadWriteMode, GPIOEOTYPERBase, T...> ;

  struct GPIOEOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58021008, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOE_OSPEEDR_OSPEED0_Values<GPIOE::OSPEEDR, 0, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED1 = GPIOE_OSPEEDR_OSPEED1_Values<GPIOE::OSPEEDR, 2, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED2 = GPIOE_OSPEEDR_OSPEED2_Values<GPIOE::OSPEEDR, 4, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED3 = GPIOE_OSPEEDR_OSPEED3_Values<GPIOE::OSPEEDR, 6, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED4 = GPIOE_OSPEEDR_OSPEED4_Values<GPIOE::OSPEEDR, 8, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED5 = GPIOE_OSPEEDR_OSPEED5_Values<GPIOE::OSPEEDR, 10, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED6 = GPIOE_OSPEEDR_OSPEED6_Values<GPIOE::OSPEEDR, 12, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED7 = GPIOE_OSPEEDR_OSPEED7_Values<GPIOE::OSPEEDR, 14, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED8 = GPIOE_OSPEEDR_OSPEED8_Values<GPIOE::OSPEEDR, 16, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED9 = GPIOE_OSPEEDR_OSPEED9_Values<GPIOE::OSPEEDR, 18, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED10 = GPIOE_OSPEEDR_OSPEED10_Values<GPIOE::OSPEEDR, 20, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED11 = GPIOE_OSPEEDR_OSPEED11_Values<GPIOE::OSPEEDR, 22, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED12 = GPIOE_OSPEEDR_OSPEED12_Values<GPIOE::OSPEEDR, 24, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED13 = GPIOE_OSPEEDR_OSPEED13_Values<GPIOE::OSPEEDR, 26, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED14 = GPIOE_OSPEEDR_OSPEED14_Values<GPIOE::OSPEEDR, 28, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEED15 = GPIOE_OSPEEDR_OSPEED15_Values<GPIOE::OSPEEDR, 30, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using FieldValues = GPIOE_OSPEEDR_OSPEED15_Values<GPIOE::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58021008, 32, ReadWriteMode, GPIOEOSPEEDRBase, T...> ;

  struct GPIOEPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x5802100C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOE_PUPDR_PUPD0_Values<GPIOE::PUPDR, 0, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD1 = GPIOE_PUPDR_PUPD1_Values<GPIOE::PUPDR, 2, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD2 = GPIOE_PUPDR_PUPD2_Values<GPIOE::PUPDR, 4, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD3 = GPIOE_PUPDR_PUPD3_Values<GPIOE::PUPDR, 6, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD4 = GPIOE_PUPDR_PUPD4_Values<GPIOE::PUPDR, 8, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD5 = GPIOE_PUPDR_PUPD5_Values<GPIOE::PUPDR, 10, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD6 = GPIOE_PUPDR_PUPD6_Values<GPIOE::PUPDR, 12, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD7 = GPIOE_PUPDR_PUPD7_Values<GPIOE::PUPDR, 14, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD8 = GPIOE_PUPDR_PUPD8_Values<GPIOE::PUPDR, 16, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD9 = GPIOE_PUPDR_PUPD9_Values<GPIOE::PUPDR, 18, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD10 = GPIOE_PUPDR_PUPD10_Values<GPIOE::PUPDR, 20, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD11 = GPIOE_PUPDR_PUPD11_Values<GPIOE::PUPDR, 22, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD12 = GPIOE_PUPDR_PUPD12_Values<GPIOE::PUPDR, 24, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD13 = GPIOE_PUPDR_PUPD13_Values<GPIOE::PUPDR, 26, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD14 = GPIOE_PUPDR_PUPD14_Values<GPIOE::PUPDR, 28, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPD15 = GPIOE_PUPDR_PUPD15_Values<GPIOE::PUPDR, 30, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using FieldValues = GPIOE_PUPDR_PUPD15_Values<GPIOE::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x5802100C, 32, ReadWriteMode, GPIOEPUPDRBase, T...> ;

  struct GPIOEIDRBase {} ;

  struct IDR : public RegisterBase<0x58021010, 32, ReadMode>
  {
    using ID0 = GPIOE_IDR_ID0_Values<GPIOE::IDR, 0, 1, ReadMode, GPIOEIDRBase> ;
    using ID1 = GPIOE_IDR_ID1_Values<GPIOE::IDR, 1, 1, ReadMode, GPIOEIDRBase> ;
    using ID2 = GPIOE_IDR_ID2_Values<GPIOE::IDR, 2, 1, ReadMode, GPIOEIDRBase> ;
    using ID3 = GPIOE_IDR_ID3_Values<GPIOE::IDR, 3, 1, ReadMode, GPIOEIDRBase> ;
    using ID4 = GPIOE_IDR_ID4_Values<GPIOE::IDR, 4, 1, ReadMode, GPIOEIDRBase> ;
    using ID5 = GPIOE_IDR_ID5_Values<GPIOE::IDR, 5, 1, ReadMode, GPIOEIDRBase> ;
    using ID6 = GPIOE_IDR_ID6_Values<GPIOE::IDR, 6, 1, ReadMode, GPIOEIDRBase> ;
    using ID7 = GPIOE_IDR_ID7_Values<GPIOE::IDR, 7, 1, ReadMode, GPIOEIDRBase> ;
    using ID8 = GPIOE_IDR_ID8_Values<GPIOE::IDR, 8, 1, ReadMode, GPIOEIDRBase> ;
    using ID9 = GPIOE_IDR_ID9_Values<GPIOE::IDR, 9, 1, ReadMode, GPIOEIDRBase> ;
    using ID10 = GPIOE_IDR_ID10_Values<GPIOE::IDR, 10, 1, ReadMode, GPIOEIDRBase> ;
    using ID11 = GPIOE_IDR_ID11_Values<GPIOE::IDR, 11, 1, ReadMode, GPIOEIDRBase> ;
    using ID12 = GPIOE_IDR_ID12_Values<GPIOE::IDR, 12, 1, ReadMode, GPIOEIDRBase> ;
    using ID13 = GPIOE_IDR_ID13_Values<GPIOE::IDR, 13, 1, ReadMode, GPIOEIDRBase> ;
    using ID14 = GPIOE_IDR_ID14_Values<GPIOE::IDR, 14, 1, ReadMode, GPIOEIDRBase> ;
    using ID15 = GPIOE_IDR_ID15_Values<GPIOE::IDR, 15, 1, ReadMode, GPIOEIDRBase> ;
    using FieldValues = GPIOE_IDR_ID15_Values<GPIOE::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58021010, 32, ReadMode, GPIOEIDRBase, T...> ;

  struct GPIOEODRBase {} ;

  struct ODR : public RegisterBase<0x58021014, 32, ReadWriteMode>
  {
    using OD0 = GPIOE_ODR_OD0_Values<GPIOE::ODR, 0, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD1 = GPIOE_ODR_OD1_Values<GPIOE::ODR, 1, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD2 = GPIOE_ODR_OD2_Values<GPIOE::ODR, 2, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD3 = GPIOE_ODR_OD3_Values<GPIOE::ODR, 3, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD4 = GPIOE_ODR_OD4_Values<GPIOE::ODR, 4, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD5 = GPIOE_ODR_OD5_Values<GPIOE::ODR, 5, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD6 = GPIOE_ODR_OD6_Values<GPIOE::ODR, 6, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD7 = GPIOE_ODR_OD7_Values<GPIOE::ODR, 7, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD8 = GPIOE_ODR_OD8_Values<GPIOE::ODR, 8, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD9 = GPIOE_ODR_OD9_Values<GPIOE::ODR, 9, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD10 = GPIOE_ODR_OD10_Values<GPIOE::ODR, 10, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD11 = GPIOE_ODR_OD11_Values<GPIOE::ODR, 11, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD12 = GPIOE_ODR_OD12_Values<GPIOE::ODR, 12, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD13 = GPIOE_ODR_OD13_Values<GPIOE::ODR, 13, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD14 = GPIOE_ODR_OD14_Values<GPIOE::ODR, 14, 1, ReadWriteMode, GPIOEODRBase> ;
    using OD15 = GPIOE_ODR_OD15_Values<GPIOE::ODR, 15, 1, ReadWriteMode, GPIOEODRBase> ;
    using FieldValues = GPIOE_ODR_OD15_Values<GPIOE::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58021014, 32, ReadWriteMode, GPIOEODRBase, T...> ;

  struct GPIOEBSRRBase {} ;

  struct BSRR : public RegisterBase<0x58021018, 32, WriteMode>
  {
    using BS0 = GPIOE_BSRR_BS0_Values<GPIOE::BSRR, 0, 1, WriteMode, GPIOEBSRRBase> ;
    using BS1 = GPIOE_BSRR_BS1_Values<GPIOE::BSRR, 1, 1, WriteMode, GPIOEBSRRBase> ;
    using BS2 = GPIOE_BSRR_BS2_Values<GPIOE::BSRR, 2, 1, WriteMode, GPIOEBSRRBase> ;
    using BS3 = GPIOE_BSRR_BS3_Values<GPIOE::BSRR, 3, 1, WriteMode, GPIOEBSRRBase> ;
    using BS4 = GPIOE_BSRR_BS4_Values<GPIOE::BSRR, 4, 1, WriteMode, GPIOEBSRRBase> ;
    using BS5 = GPIOE_BSRR_BS5_Values<GPIOE::BSRR, 5, 1, WriteMode, GPIOEBSRRBase> ;
    using BS6 = GPIOE_BSRR_BS6_Values<GPIOE::BSRR, 6, 1, WriteMode, GPIOEBSRRBase> ;
    using BS7 = GPIOE_BSRR_BS7_Values<GPIOE::BSRR, 7, 1, WriteMode, GPIOEBSRRBase> ;
    using BS8 = GPIOE_BSRR_BS8_Values<GPIOE::BSRR, 8, 1, WriteMode, GPIOEBSRRBase> ;
    using BS9 = GPIOE_BSRR_BS9_Values<GPIOE::BSRR, 9, 1, WriteMode, GPIOEBSRRBase> ;
    using BS10 = GPIOE_BSRR_BS10_Values<GPIOE::BSRR, 10, 1, WriteMode, GPIOEBSRRBase> ;
    using BS11 = GPIOE_BSRR_BS11_Values<GPIOE::BSRR, 11, 1, WriteMode, GPIOEBSRRBase> ;
    using BS12 = GPIOE_BSRR_BS12_Values<GPIOE::BSRR, 12, 1, WriteMode, GPIOEBSRRBase> ;
    using BS13 = GPIOE_BSRR_BS13_Values<GPIOE::BSRR, 13, 1, WriteMode, GPIOEBSRRBase> ;
    using BS14 = GPIOE_BSRR_BS14_Values<GPIOE::BSRR, 14, 1, WriteMode, GPIOEBSRRBase> ;
    using BS15 = GPIOE_BSRR_BS15_Values<GPIOE::BSRR, 15, 1, WriteMode, GPIOEBSRRBase> ;
    using BR0 = GPIOE_BSRR_BR0_Values<GPIOE::BSRR, 16, 1, WriteMode, GPIOEBSRRBase> ;
    using BR1 = GPIOE_BSRR_BR1_Values<GPIOE::BSRR, 17, 1, WriteMode, GPIOEBSRRBase> ;
    using BR2 = GPIOE_BSRR_BR2_Values<GPIOE::BSRR, 18, 1, WriteMode, GPIOEBSRRBase> ;
    using BR3 = GPIOE_BSRR_BR3_Values<GPIOE::BSRR, 19, 1, WriteMode, GPIOEBSRRBase> ;
    using BR4 = GPIOE_BSRR_BR4_Values<GPIOE::BSRR, 20, 1, WriteMode, GPIOEBSRRBase> ;
    using BR5 = GPIOE_BSRR_BR5_Values<GPIOE::BSRR, 21, 1, WriteMode, GPIOEBSRRBase> ;
    using BR6 = GPIOE_BSRR_BR6_Values<GPIOE::BSRR, 22, 1, WriteMode, GPIOEBSRRBase> ;
    using BR7 = GPIOE_BSRR_BR7_Values<GPIOE::BSRR, 23, 1, WriteMode, GPIOEBSRRBase> ;
    using BR8 = GPIOE_BSRR_BR8_Values<GPIOE::BSRR, 24, 1, WriteMode, GPIOEBSRRBase> ;
    using BR9 = GPIOE_BSRR_BR9_Values<GPIOE::BSRR, 25, 1, WriteMode, GPIOEBSRRBase> ;
    using BR10 = GPIOE_BSRR_BR10_Values<GPIOE::BSRR, 26, 1, WriteMode, GPIOEBSRRBase> ;
    using BR11 = GPIOE_BSRR_BR11_Values<GPIOE::BSRR, 27, 1, WriteMode, GPIOEBSRRBase> ;
    using BR12 = GPIOE_BSRR_BR12_Values<GPIOE::BSRR, 28, 1, WriteMode, GPIOEBSRRBase> ;
    using BR13 = GPIOE_BSRR_BR13_Values<GPIOE::BSRR, 29, 1, WriteMode, GPIOEBSRRBase> ;
    using BR14 = GPIOE_BSRR_BR14_Values<GPIOE::BSRR, 30, 1, WriteMode, GPIOEBSRRBase> ;
    using BR15 = GPIOE_BSRR_BR15_Values<GPIOE::BSRR, 31, 1, WriteMode, GPIOEBSRRBase> ;
    using FieldValues = GPIOE_BSRR_BR15_Values<GPIOE::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58021018, 32, WriteMode, GPIOEBSRRBase, T...> ;

  struct GPIOELCKRBase {} ;

  struct LCKR : public RegisterBase<0x5802101C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOE_LCKR_LCK0_Values<GPIOE::LCKR, 0, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK1 = GPIOE_LCKR_LCK1_Values<GPIOE::LCKR, 1, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK2 = GPIOE_LCKR_LCK2_Values<GPIOE::LCKR, 2, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK3 = GPIOE_LCKR_LCK3_Values<GPIOE::LCKR, 3, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK4 = GPIOE_LCKR_LCK4_Values<GPIOE::LCKR, 4, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK5 = GPIOE_LCKR_LCK5_Values<GPIOE::LCKR, 5, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK6 = GPIOE_LCKR_LCK6_Values<GPIOE::LCKR, 6, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK7 = GPIOE_LCKR_LCK7_Values<GPIOE::LCKR, 7, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK8 = GPIOE_LCKR_LCK8_Values<GPIOE::LCKR, 8, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK9 = GPIOE_LCKR_LCK9_Values<GPIOE::LCKR, 9, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK10 = GPIOE_LCKR_LCK10_Values<GPIOE::LCKR, 10, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK11 = GPIOE_LCKR_LCK11_Values<GPIOE::LCKR, 11, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK12 = GPIOE_LCKR_LCK12_Values<GPIOE::LCKR, 12, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK13 = GPIOE_LCKR_LCK13_Values<GPIOE::LCKR, 13, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK14 = GPIOE_LCKR_LCK14_Values<GPIOE::LCKR, 14, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK15 = GPIOE_LCKR_LCK15_Values<GPIOE::LCKR, 15, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCKK = GPIOE_LCKR_LCKK_Values<GPIOE::LCKR, 16, 1, ReadWriteMode, GPIOELCKRBase> ;
    using FieldValues = GPIOE_LCKR_LCKK_Values<GPIOE::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x5802101C, 32, ReadWriteMode, GPIOELCKRBase, T...> ;

  struct GPIOEAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58021020, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOE_AFRL_AFSEL0_Values<GPIOE::AFRL, 0, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL1 = GPIOE_AFRL_AFSEL1_Values<GPIOE::AFRL, 4, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL2 = GPIOE_AFRL_AFSEL2_Values<GPIOE::AFRL, 8, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL3 = GPIOE_AFRL_AFSEL3_Values<GPIOE::AFRL, 12, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL4 = GPIOE_AFRL_AFSEL4_Values<GPIOE::AFRL, 16, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL5 = GPIOE_AFRL_AFSEL5_Values<GPIOE::AFRL, 20, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL6 = GPIOE_AFRL_AFSEL6_Values<GPIOE::AFRL, 24, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL7 = GPIOE_AFRL_AFSEL7_Values<GPIOE::AFRL, 28, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using FieldValues = GPIOE_AFRL_AFSEL7_Values<GPIOE::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58021020, 32, ReadWriteMode, GPIOEAFRLBase, T...> ;

  struct GPIOEAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58021024, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOE_AFRH_AFSEL8_Values<GPIOE::AFRH, 0, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL9 = GPIOE_AFRH_AFSEL9_Values<GPIOE::AFRH, 4, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL10 = GPIOE_AFRH_AFSEL10_Values<GPIOE::AFRH, 8, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL11 = GPIOE_AFRH_AFSEL11_Values<GPIOE::AFRH, 12, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL12 = GPIOE_AFRH_AFSEL12_Values<GPIOE::AFRH, 16, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL13 = GPIOE_AFRH_AFSEL13_Values<GPIOE::AFRH, 20, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL14 = GPIOE_AFRH_AFSEL14_Values<GPIOE::AFRH, 24, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL15 = GPIOE_AFRH_AFSEL15_Values<GPIOE::AFRH, 28, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using FieldValues = GPIOE_AFRH_AFSEL15_Values<GPIOE::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58021024, 32, ReadWriteMode, GPIOEAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOEREGISTERS_HPP)
