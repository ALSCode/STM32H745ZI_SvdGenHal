/*******************************************************************************
* Filename      : gpiohregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIOHREGISTERS_HPP)
#define GPIOHREGISTERS_HPP

#include "gpiohfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOH
{
  struct GPIOHMODERBase {} ;

  struct MODER : public RegisterBase<0x58021C00, 32, ReadWriteMode>
  {
    using MODE0 = GPIOH_MODER_MODE0_Values<GPIOH::MODER, 0, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE1 = GPIOH_MODER_MODE1_Values<GPIOH::MODER, 2, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE2 = GPIOH_MODER_MODE2_Values<GPIOH::MODER, 4, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE3 = GPIOH_MODER_MODE3_Values<GPIOH::MODER, 6, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE4 = GPIOH_MODER_MODE4_Values<GPIOH::MODER, 8, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE5 = GPIOH_MODER_MODE5_Values<GPIOH::MODER, 10, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE6 = GPIOH_MODER_MODE6_Values<GPIOH::MODER, 12, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE7 = GPIOH_MODER_MODE7_Values<GPIOH::MODER, 14, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE8 = GPIOH_MODER_MODE8_Values<GPIOH::MODER, 16, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE9 = GPIOH_MODER_MODE9_Values<GPIOH::MODER, 18, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE10 = GPIOH_MODER_MODE10_Values<GPIOH::MODER, 20, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE11 = GPIOH_MODER_MODE11_Values<GPIOH::MODER, 22, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE12 = GPIOH_MODER_MODE12_Values<GPIOH::MODER, 24, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE13 = GPIOH_MODER_MODE13_Values<GPIOH::MODER, 26, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE14 = GPIOH_MODER_MODE14_Values<GPIOH::MODER, 28, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODE15 = GPIOH_MODER_MODE15_Values<GPIOH::MODER, 30, 2, ReadWriteMode, GPIOHMODERBase> ;
    using FieldValues = GPIOH_MODER_MODE15_Values<GPIOH::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58021C00, 32, ReadWriteMode, GPIOHMODERBase, T...> ;

  struct GPIOHOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58021C04, 32, ReadWriteMode>
  {
    using OT0 = GPIOH_OTYPER_OT0_Values<GPIOH::OTYPER, 0, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT1 = GPIOH_OTYPER_OT1_Values<GPIOH::OTYPER, 1, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT2 = GPIOH_OTYPER_OT2_Values<GPIOH::OTYPER, 2, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT3 = GPIOH_OTYPER_OT3_Values<GPIOH::OTYPER, 3, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT4 = GPIOH_OTYPER_OT4_Values<GPIOH::OTYPER, 4, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT5 = GPIOH_OTYPER_OT5_Values<GPIOH::OTYPER, 5, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT6 = GPIOH_OTYPER_OT6_Values<GPIOH::OTYPER, 6, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT7 = GPIOH_OTYPER_OT7_Values<GPIOH::OTYPER, 7, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT8 = GPIOH_OTYPER_OT8_Values<GPIOH::OTYPER, 8, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT9 = GPIOH_OTYPER_OT9_Values<GPIOH::OTYPER, 9, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT10 = GPIOH_OTYPER_OT10_Values<GPIOH::OTYPER, 10, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT11 = GPIOH_OTYPER_OT11_Values<GPIOH::OTYPER, 11, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT12 = GPIOH_OTYPER_OT12_Values<GPIOH::OTYPER, 12, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT13 = GPIOH_OTYPER_OT13_Values<GPIOH::OTYPER, 13, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT14 = GPIOH_OTYPER_OT14_Values<GPIOH::OTYPER, 14, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT15 = GPIOH_OTYPER_OT15_Values<GPIOH::OTYPER, 15, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using FieldValues = GPIOH_OTYPER_OT15_Values<GPIOH::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58021C04, 32, ReadWriteMode, GPIOHOTYPERBase, T...> ;

  struct GPIOHOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58021C08, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOH_OSPEEDR_OSPEED0_Values<GPIOH::OSPEEDR, 0, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED1 = GPIOH_OSPEEDR_OSPEED1_Values<GPIOH::OSPEEDR, 2, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED2 = GPIOH_OSPEEDR_OSPEED2_Values<GPIOH::OSPEEDR, 4, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED3 = GPIOH_OSPEEDR_OSPEED3_Values<GPIOH::OSPEEDR, 6, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED4 = GPIOH_OSPEEDR_OSPEED4_Values<GPIOH::OSPEEDR, 8, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED5 = GPIOH_OSPEEDR_OSPEED5_Values<GPIOH::OSPEEDR, 10, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED6 = GPIOH_OSPEEDR_OSPEED6_Values<GPIOH::OSPEEDR, 12, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED7 = GPIOH_OSPEEDR_OSPEED7_Values<GPIOH::OSPEEDR, 14, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED8 = GPIOH_OSPEEDR_OSPEED8_Values<GPIOH::OSPEEDR, 16, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED9 = GPIOH_OSPEEDR_OSPEED9_Values<GPIOH::OSPEEDR, 18, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED10 = GPIOH_OSPEEDR_OSPEED10_Values<GPIOH::OSPEEDR, 20, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED11 = GPIOH_OSPEEDR_OSPEED11_Values<GPIOH::OSPEEDR, 22, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED12 = GPIOH_OSPEEDR_OSPEED12_Values<GPIOH::OSPEEDR, 24, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED13 = GPIOH_OSPEEDR_OSPEED13_Values<GPIOH::OSPEEDR, 26, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED14 = GPIOH_OSPEEDR_OSPEED14_Values<GPIOH::OSPEEDR, 28, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEED15 = GPIOH_OSPEEDR_OSPEED15_Values<GPIOH::OSPEEDR, 30, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using FieldValues = GPIOH_OSPEEDR_OSPEED15_Values<GPIOH::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58021C08, 32, ReadWriteMode, GPIOHOSPEEDRBase, T...> ;

  struct GPIOHPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x58021C0C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOH_PUPDR_PUPD0_Values<GPIOH::PUPDR, 0, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD1 = GPIOH_PUPDR_PUPD1_Values<GPIOH::PUPDR, 2, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD2 = GPIOH_PUPDR_PUPD2_Values<GPIOH::PUPDR, 4, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD3 = GPIOH_PUPDR_PUPD3_Values<GPIOH::PUPDR, 6, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD4 = GPIOH_PUPDR_PUPD4_Values<GPIOH::PUPDR, 8, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD5 = GPIOH_PUPDR_PUPD5_Values<GPIOH::PUPDR, 10, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD6 = GPIOH_PUPDR_PUPD6_Values<GPIOH::PUPDR, 12, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD7 = GPIOH_PUPDR_PUPD7_Values<GPIOH::PUPDR, 14, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD8 = GPIOH_PUPDR_PUPD8_Values<GPIOH::PUPDR, 16, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD9 = GPIOH_PUPDR_PUPD9_Values<GPIOH::PUPDR, 18, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD10 = GPIOH_PUPDR_PUPD10_Values<GPIOH::PUPDR, 20, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD11 = GPIOH_PUPDR_PUPD11_Values<GPIOH::PUPDR, 22, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD12 = GPIOH_PUPDR_PUPD12_Values<GPIOH::PUPDR, 24, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD13 = GPIOH_PUPDR_PUPD13_Values<GPIOH::PUPDR, 26, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD14 = GPIOH_PUPDR_PUPD14_Values<GPIOH::PUPDR, 28, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPD15 = GPIOH_PUPDR_PUPD15_Values<GPIOH::PUPDR, 30, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using FieldValues = GPIOH_PUPDR_PUPD15_Values<GPIOH::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x58021C0C, 32, ReadWriteMode, GPIOHPUPDRBase, T...> ;

  struct GPIOHIDRBase {} ;

  struct IDR : public RegisterBase<0x58021C10, 32, ReadMode>
  {
    using ID0 = GPIOH_IDR_ID0_Values<GPIOH::IDR, 0, 1, ReadMode, GPIOHIDRBase> ;
    using ID1 = GPIOH_IDR_ID1_Values<GPIOH::IDR, 1, 1, ReadMode, GPIOHIDRBase> ;
    using ID2 = GPIOH_IDR_ID2_Values<GPIOH::IDR, 2, 1, ReadMode, GPIOHIDRBase> ;
    using ID3 = GPIOH_IDR_ID3_Values<GPIOH::IDR, 3, 1, ReadMode, GPIOHIDRBase> ;
    using ID4 = GPIOH_IDR_ID4_Values<GPIOH::IDR, 4, 1, ReadMode, GPIOHIDRBase> ;
    using ID5 = GPIOH_IDR_ID5_Values<GPIOH::IDR, 5, 1, ReadMode, GPIOHIDRBase> ;
    using ID6 = GPIOH_IDR_ID6_Values<GPIOH::IDR, 6, 1, ReadMode, GPIOHIDRBase> ;
    using ID7 = GPIOH_IDR_ID7_Values<GPIOH::IDR, 7, 1, ReadMode, GPIOHIDRBase> ;
    using ID8 = GPIOH_IDR_ID8_Values<GPIOH::IDR, 8, 1, ReadMode, GPIOHIDRBase> ;
    using ID9 = GPIOH_IDR_ID9_Values<GPIOH::IDR, 9, 1, ReadMode, GPIOHIDRBase> ;
    using ID10 = GPIOH_IDR_ID10_Values<GPIOH::IDR, 10, 1, ReadMode, GPIOHIDRBase> ;
    using ID11 = GPIOH_IDR_ID11_Values<GPIOH::IDR, 11, 1, ReadMode, GPIOHIDRBase> ;
    using ID12 = GPIOH_IDR_ID12_Values<GPIOH::IDR, 12, 1, ReadMode, GPIOHIDRBase> ;
    using ID13 = GPIOH_IDR_ID13_Values<GPIOH::IDR, 13, 1, ReadMode, GPIOHIDRBase> ;
    using ID14 = GPIOH_IDR_ID14_Values<GPIOH::IDR, 14, 1, ReadMode, GPIOHIDRBase> ;
    using ID15 = GPIOH_IDR_ID15_Values<GPIOH::IDR, 15, 1, ReadMode, GPIOHIDRBase> ;
    using FieldValues = GPIOH_IDR_ID15_Values<GPIOH::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58021C10, 32, ReadMode, GPIOHIDRBase, T...> ;

  struct GPIOHODRBase {} ;

  struct ODR : public RegisterBase<0x58021C14, 32, ReadWriteMode>
  {
    using OD0 = GPIOH_ODR_OD0_Values<GPIOH::ODR, 0, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD1 = GPIOH_ODR_OD1_Values<GPIOH::ODR, 1, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD2 = GPIOH_ODR_OD2_Values<GPIOH::ODR, 2, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD3 = GPIOH_ODR_OD3_Values<GPIOH::ODR, 3, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD4 = GPIOH_ODR_OD4_Values<GPIOH::ODR, 4, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD5 = GPIOH_ODR_OD5_Values<GPIOH::ODR, 5, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD6 = GPIOH_ODR_OD6_Values<GPIOH::ODR, 6, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD7 = GPIOH_ODR_OD7_Values<GPIOH::ODR, 7, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD8 = GPIOH_ODR_OD8_Values<GPIOH::ODR, 8, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD9 = GPIOH_ODR_OD9_Values<GPIOH::ODR, 9, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD10 = GPIOH_ODR_OD10_Values<GPIOH::ODR, 10, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD11 = GPIOH_ODR_OD11_Values<GPIOH::ODR, 11, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD12 = GPIOH_ODR_OD12_Values<GPIOH::ODR, 12, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD13 = GPIOH_ODR_OD13_Values<GPIOH::ODR, 13, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD14 = GPIOH_ODR_OD14_Values<GPIOH::ODR, 14, 1, ReadWriteMode, GPIOHODRBase> ;
    using OD15 = GPIOH_ODR_OD15_Values<GPIOH::ODR, 15, 1, ReadWriteMode, GPIOHODRBase> ;
    using FieldValues = GPIOH_ODR_OD15_Values<GPIOH::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58021C14, 32, ReadWriteMode, GPIOHODRBase, T...> ;

  struct GPIOHBSRRBase {} ;

  struct BSRR : public RegisterBase<0x58021C18, 32, WriteMode>
  {
    using BS0 = GPIOH_BSRR_BS0_Values<GPIOH::BSRR, 0, 1, WriteMode, GPIOHBSRRBase> ;
    using BS1 = GPIOH_BSRR_BS1_Values<GPIOH::BSRR, 1, 1, WriteMode, GPIOHBSRRBase> ;
    using BS2 = GPIOH_BSRR_BS2_Values<GPIOH::BSRR, 2, 1, WriteMode, GPIOHBSRRBase> ;
    using BS3 = GPIOH_BSRR_BS3_Values<GPIOH::BSRR, 3, 1, WriteMode, GPIOHBSRRBase> ;
    using BS4 = GPIOH_BSRR_BS4_Values<GPIOH::BSRR, 4, 1, WriteMode, GPIOHBSRRBase> ;
    using BS5 = GPIOH_BSRR_BS5_Values<GPIOH::BSRR, 5, 1, WriteMode, GPIOHBSRRBase> ;
    using BS6 = GPIOH_BSRR_BS6_Values<GPIOH::BSRR, 6, 1, WriteMode, GPIOHBSRRBase> ;
    using BS7 = GPIOH_BSRR_BS7_Values<GPIOH::BSRR, 7, 1, WriteMode, GPIOHBSRRBase> ;
    using BS8 = GPIOH_BSRR_BS8_Values<GPIOH::BSRR, 8, 1, WriteMode, GPIOHBSRRBase> ;
    using BS9 = GPIOH_BSRR_BS9_Values<GPIOH::BSRR, 9, 1, WriteMode, GPIOHBSRRBase> ;
    using BS10 = GPIOH_BSRR_BS10_Values<GPIOH::BSRR, 10, 1, WriteMode, GPIOHBSRRBase> ;
    using BS11 = GPIOH_BSRR_BS11_Values<GPIOH::BSRR, 11, 1, WriteMode, GPIOHBSRRBase> ;
    using BS12 = GPIOH_BSRR_BS12_Values<GPIOH::BSRR, 12, 1, WriteMode, GPIOHBSRRBase> ;
    using BS13 = GPIOH_BSRR_BS13_Values<GPIOH::BSRR, 13, 1, WriteMode, GPIOHBSRRBase> ;
    using BS14 = GPIOH_BSRR_BS14_Values<GPIOH::BSRR, 14, 1, WriteMode, GPIOHBSRRBase> ;
    using BS15 = GPIOH_BSRR_BS15_Values<GPIOH::BSRR, 15, 1, WriteMode, GPIOHBSRRBase> ;
    using BR0 = GPIOH_BSRR_BR0_Values<GPIOH::BSRR, 16, 1, WriteMode, GPIOHBSRRBase> ;
    using BR1 = GPIOH_BSRR_BR1_Values<GPIOH::BSRR, 17, 1, WriteMode, GPIOHBSRRBase> ;
    using BR2 = GPIOH_BSRR_BR2_Values<GPIOH::BSRR, 18, 1, WriteMode, GPIOHBSRRBase> ;
    using BR3 = GPIOH_BSRR_BR3_Values<GPIOH::BSRR, 19, 1, WriteMode, GPIOHBSRRBase> ;
    using BR4 = GPIOH_BSRR_BR4_Values<GPIOH::BSRR, 20, 1, WriteMode, GPIOHBSRRBase> ;
    using BR5 = GPIOH_BSRR_BR5_Values<GPIOH::BSRR, 21, 1, WriteMode, GPIOHBSRRBase> ;
    using BR6 = GPIOH_BSRR_BR6_Values<GPIOH::BSRR, 22, 1, WriteMode, GPIOHBSRRBase> ;
    using BR7 = GPIOH_BSRR_BR7_Values<GPIOH::BSRR, 23, 1, WriteMode, GPIOHBSRRBase> ;
    using BR8 = GPIOH_BSRR_BR8_Values<GPIOH::BSRR, 24, 1, WriteMode, GPIOHBSRRBase> ;
    using BR9 = GPIOH_BSRR_BR9_Values<GPIOH::BSRR, 25, 1, WriteMode, GPIOHBSRRBase> ;
    using BR10 = GPIOH_BSRR_BR10_Values<GPIOH::BSRR, 26, 1, WriteMode, GPIOHBSRRBase> ;
    using BR11 = GPIOH_BSRR_BR11_Values<GPIOH::BSRR, 27, 1, WriteMode, GPIOHBSRRBase> ;
    using BR12 = GPIOH_BSRR_BR12_Values<GPIOH::BSRR, 28, 1, WriteMode, GPIOHBSRRBase> ;
    using BR13 = GPIOH_BSRR_BR13_Values<GPIOH::BSRR, 29, 1, WriteMode, GPIOHBSRRBase> ;
    using BR14 = GPIOH_BSRR_BR14_Values<GPIOH::BSRR, 30, 1, WriteMode, GPIOHBSRRBase> ;
    using BR15 = GPIOH_BSRR_BR15_Values<GPIOH::BSRR, 31, 1, WriteMode, GPIOHBSRRBase> ;
    using FieldValues = GPIOH_BSRR_BR15_Values<GPIOH::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58021C18, 32, WriteMode, GPIOHBSRRBase, T...> ;

  struct GPIOHLCKRBase {} ;

  struct LCKR : public RegisterBase<0x58021C1C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOH_LCKR_LCK0_Values<GPIOH::LCKR, 0, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK1 = GPIOH_LCKR_LCK1_Values<GPIOH::LCKR, 1, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK2 = GPIOH_LCKR_LCK2_Values<GPIOH::LCKR, 2, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK3 = GPIOH_LCKR_LCK3_Values<GPIOH::LCKR, 3, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK4 = GPIOH_LCKR_LCK4_Values<GPIOH::LCKR, 4, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK5 = GPIOH_LCKR_LCK5_Values<GPIOH::LCKR, 5, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK6 = GPIOH_LCKR_LCK6_Values<GPIOH::LCKR, 6, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK7 = GPIOH_LCKR_LCK7_Values<GPIOH::LCKR, 7, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK8 = GPIOH_LCKR_LCK8_Values<GPIOH::LCKR, 8, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK9 = GPIOH_LCKR_LCK9_Values<GPIOH::LCKR, 9, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK10 = GPIOH_LCKR_LCK10_Values<GPIOH::LCKR, 10, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK11 = GPIOH_LCKR_LCK11_Values<GPIOH::LCKR, 11, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK12 = GPIOH_LCKR_LCK12_Values<GPIOH::LCKR, 12, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK13 = GPIOH_LCKR_LCK13_Values<GPIOH::LCKR, 13, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK14 = GPIOH_LCKR_LCK14_Values<GPIOH::LCKR, 14, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK15 = GPIOH_LCKR_LCK15_Values<GPIOH::LCKR, 15, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCKK = GPIOH_LCKR_LCKK_Values<GPIOH::LCKR, 16, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using FieldValues = GPIOH_LCKR_LCKK_Values<GPIOH::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x58021C1C, 32, ReadWriteMode, GPIOHLCKRBase, T...> ;

  struct GPIOHAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58021C20, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOH_AFRL_AFSEL0_Values<GPIOH::AFRL, 0, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL1 = GPIOH_AFRL_AFSEL1_Values<GPIOH::AFRL, 4, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL2 = GPIOH_AFRL_AFSEL2_Values<GPIOH::AFRL, 8, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL3 = GPIOH_AFRL_AFSEL3_Values<GPIOH::AFRL, 12, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL4 = GPIOH_AFRL_AFSEL4_Values<GPIOH::AFRL, 16, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL5 = GPIOH_AFRL_AFSEL5_Values<GPIOH::AFRL, 20, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL6 = GPIOH_AFRL_AFSEL6_Values<GPIOH::AFRL, 24, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL7 = GPIOH_AFRL_AFSEL7_Values<GPIOH::AFRL, 28, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using FieldValues = GPIOH_AFRL_AFSEL7_Values<GPIOH::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58021C20, 32, ReadWriteMode, GPIOHAFRLBase, T...> ;

  struct GPIOHAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58021C24, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOH_AFRH_AFSEL8_Values<GPIOH::AFRH, 0, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL9 = GPIOH_AFRH_AFSEL9_Values<GPIOH::AFRH, 4, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL10 = GPIOH_AFRH_AFSEL10_Values<GPIOH::AFRH, 8, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL11 = GPIOH_AFRH_AFSEL11_Values<GPIOH::AFRH, 12, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL12 = GPIOH_AFRH_AFSEL12_Values<GPIOH::AFRH, 16, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL13 = GPIOH_AFRH_AFSEL13_Values<GPIOH::AFRH, 20, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL14 = GPIOH_AFRH_AFSEL14_Values<GPIOH::AFRH, 24, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL15 = GPIOH_AFRH_AFSEL15_Values<GPIOH::AFRH, 28, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using FieldValues = GPIOH_AFRH_AFSEL15_Values<GPIOH::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58021C24, 32, ReadWriteMode, GPIOHAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOHREGISTERS_HPP)
