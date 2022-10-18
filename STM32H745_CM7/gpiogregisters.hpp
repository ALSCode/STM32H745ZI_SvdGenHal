/*******************************************************************************
* Filename      : gpiogregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIOGREGISTERS_HPP)
#define GPIOGREGISTERS_HPP

#include "gpiogfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOG
{
  struct GPIOGMODERBase {} ;

  struct MODER : public RegisterBase<0x58021800, 32, ReadWriteMode>
  {
    using MODE0 = GPIOG_MODER_MODE0_Values<GPIOG::MODER, 0, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE1 = GPIOG_MODER_MODE1_Values<GPIOG::MODER, 2, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE2 = GPIOG_MODER_MODE2_Values<GPIOG::MODER, 4, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE3 = GPIOG_MODER_MODE3_Values<GPIOG::MODER, 6, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE4 = GPIOG_MODER_MODE4_Values<GPIOG::MODER, 8, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE5 = GPIOG_MODER_MODE5_Values<GPIOG::MODER, 10, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE6 = GPIOG_MODER_MODE6_Values<GPIOG::MODER, 12, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE7 = GPIOG_MODER_MODE7_Values<GPIOG::MODER, 14, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE8 = GPIOG_MODER_MODE8_Values<GPIOG::MODER, 16, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE9 = GPIOG_MODER_MODE9_Values<GPIOG::MODER, 18, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE10 = GPIOG_MODER_MODE10_Values<GPIOG::MODER, 20, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE11 = GPIOG_MODER_MODE11_Values<GPIOG::MODER, 22, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE12 = GPIOG_MODER_MODE12_Values<GPIOG::MODER, 24, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE13 = GPIOG_MODER_MODE13_Values<GPIOG::MODER, 26, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE14 = GPIOG_MODER_MODE14_Values<GPIOG::MODER, 28, 2, ReadWriteMode, GPIOGMODERBase> ;
    using MODE15 = GPIOG_MODER_MODE15_Values<GPIOG::MODER, 30, 2, ReadWriteMode, GPIOGMODERBase> ;
    using FieldValues = GPIOG_MODER_MODE15_Values<GPIOG::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58021800, 32, ReadWriteMode, GPIOGMODERBase, T...> ;

  struct GPIOGOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58021804, 32, ReadWriteMode>
  {
    using OT0 = GPIOG_OTYPER_OT0_Values<GPIOG::OTYPER, 0, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT1 = GPIOG_OTYPER_OT1_Values<GPIOG::OTYPER, 1, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT2 = GPIOG_OTYPER_OT2_Values<GPIOG::OTYPER, 2, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT3 = GPIOG_OTYPER_OT3_Values<GPIOG::OTYPER, 3, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT4 = GPIOG_OTYPER_OT4_Values<GPIOG::OTYPER, 4, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT5 = GPIOG_OTYPER_OT5_Values<GPIOG::OTYPER, 5, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT6 = GPIOG_OTYPER_OT6_Values<GPIOG::OTYPER, 6, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT7 = GPIOG_OTYPER_OT7_Values<GPIOG::OTYPER, 7, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT8 = GPIOG_OTYPER_OT8_Values<GPIOG::OTYPER, 8, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT9 = GPIOG_OTYPER_OT9_Values<GPIOG::OTYPER, 9, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT10 = GPIOG_OTYPER_OT10_Values<GPIOG::OTYPER, 10, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT11 = GPIOG_OTYPER_OT11_Values<GPIOG::OTYPER, 11, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT12 = GPIOG_OTYPER_OT12_Values<GPIOG::OTYPER, 12, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT13 = GPIOG_OTYPER_OT13_Values<GPIOG::OTYPER, 13, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT14 = GPIOG_OTYPER_OT14_Values<GPIOG::OTYPER, 14, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using OT15 = GPIOG_OTYPER_OT15_Values<GPIOG::OTYPER, 15, 1, ReadWriteMode, GPIOGOTYPERBase> ;
    using FieldValues = GPIOG_OTYPER_OT15_Values<GPIOG::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58021804, 32, ReadWriteMode, GPIOGOTYPERBase, T...> ;

  struct GPIOGOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58021808, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOG_OSPEEDR_OSPEED0_Values<GPIOG::OSPEEDR, 0, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED1 = GPIOG_OSPEEDR_OSPEED1_Values<GPIOG::OSPEEDR, 2, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED2 = GPIOG_OSPEEDR_OSPEED2_Values<GPIOG::OSPEEDR, 4, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED3 = GPIOG_OSPEEDR_OSPEED3_Values<GPIOG::OSPEEDR, 6, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED4 = GPIOG_OSPEEDR_OSPEED4_Values<GPIOG::OSPEEDR, 8, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED5 = GPIOG_OSPEEDR_OSPEED5_Values<GPIOG::OSPEEDR, 10, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED6 = GPIOG_OSPEEDR_OSPEED6_Values<GPIOG::OSPEEDR, 12, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED7 = GPIOG_OSPEEDR_OSPEED7_Values<GPIOG::OSPEEDR, 14, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED8 = GPIOG_OSPEEDR_OSPEED8_Values<GPIOG::OSPEEDR, 16, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED9 = GPIOG_OSPEEDR_OSPEED9_Values<GPIOG::OSPEEDR, 18, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED10 = GPIOG_OSPEEDR_OSPEED10_Values<GPIOG::OSPEEDR, 20, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED11 = GPIOG_OSPEEDR_OSPEED11_Values<GPIOG::OSPEEDR, 22, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED12 = GPIOG_OSPEEDR_OSPEED12_Values<GPIOG::OSPEEDR, 24, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED13 = GPIOG_OSPEEDR_OSPEED13_Values<GPIOG::OSPEEDR, 26, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED14 = GPIOG_OSPEEDR_OSPEED14_Values<GPIOG::OSPEEDR, 28, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using OSPEED15 = GPIOG_OSPEEDR_OSPEED15_Values<GPIOG::OSPEEDR, 30, 2, ReadWriteMode, GPIOGOSPEEDRBase> ;
    using FieldValues = GPIOG_OSPEEDR_OSPEED15_Values<GPIOG::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58021808, 32, ReadWriteMode, GPIOGOSPEEDRBase, T...> ;

  struct GPIOGPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x5802180C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOG_PUPDR_PUPD0_Values<GPIOG::PUPDR, 0, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD1 = GPIOG_PUPDR_PUPD1_Values<GPIOG::PUPDR, 2, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD2 = GPIOG_PUPDR_PUPD2_Values<GPIOG::PUPDR, 4, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD3 = GPIOG_PUPDR_PUPD3_Values<GPIOG::PUPDR, 6, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD4 = GPIOG_PUPDR_PUPD4_Values<GPIOG::PUPDR, 8, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD5 = GPIOG_PUPDR_PUPD5_Values<GPIOG::PUPDR, 10, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD6 = GPIOG_PUPDR_PUPD6_Values<GPIOG::PUPDR, 12, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD7 = GPIOG_PUPDR_PUPD7_Values<GPIOG::PUPDR, 14, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD8 = GPIOG_PUPDR_PUPD8_Values<GPIOG::PUPDR, 16, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD9 = GPIOG_PUPDR_PUPD9_Values<GPIOG::PUPDR, 18, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD10 = GPIOG_PUPDR_PUPD10_Values<GPIOG::PUPDR, 20, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD11 = GPIOG_PUPDR_PUPD11_Values<GPIOG::PUPDR, 22, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD12 = GPIOG_PUPDR_PUPD12_Values<GPIOG::PUPDR, 24, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD13 = GPIOG_PUPDR_PUPD13_Values<GPIOG::PUPDR, 26, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD14 = GPIOG_PUPDR_PUPD14_Values<GPIOG::PUPDR, 28, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using PUPD15 = GPIOG_PUPDR_PUPD15_Values<GPIOG::PUPDR, 30, 2, ReadWriteMode, GPIOGPUPDRBase> ;
    using FieldValues = GPIOG_PUPDR_PUPD15_Values<GPIOG::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x5802180C, 32, ReadWriteMode, GPIOGPUPDRBase, T...> ;

  struct GPIOGIDRBase {} ;

  struct IDR : public RegisterBase<0x58021810, 32, ReadMode>
  {
    using ID0 = GPIOG_IDR_ID0_Values<GPIOG::IDR, 0, 1, ReadMode, GPIOGIDRBase> ;
    using ID1 = GPIOG_IDR_ID1_Values<GPIOG::IDR, 1, 1, ReadMode, GPIOGIDRBase> ;
    using ID2 = GPIOG_IDR_ID2_Values<GPIOG::IDR, 2, 1, ReadMode, GPIOGIDRBase> ;
    using ID3 = GPIOG_IDR_ID3_Values<GPIOG::IDR, 3, 1, ReadMode, GPIOGIDRBase> ;
    using ID4 = GPIOG_IDR_ID4_Values<GPIOG::IDR, 4, 1, ReadMode, GPIOGIDRBase> ;
    using ID5 = GPIOG_IDR_ID5_Values<GPIOG::IDR, 5, 1, ReadMode, GPIOGIDRBase> ;
    using ID6 = GPIOG_IDR_ID6_Values<GPIOG::IDR, 6, 1, ReadMode, GPIOGIDRBase> ;
    using ID7 = GPIOG_IDR_ID7_Values<GPIOG::IDR, 7, 1, ReadMode, GPIOGIDRBase> ;
    using ID8 = GPIOG_IDR_ID8_Values<GPIOG::IDR, 8, 1, ReadMode, GPIOGIDRBase> ;
    using ID9 = GPIOG_IDR_ID9_Values<GPIOG::IDR, 9, 1, ReadMode, GPIOGIDRBase> ;
    using ID10 = GPIOG_IDR_ID10_Values<GPIOG::IDR, 10, 1, ReadMode, GPIOGIDRBase> ;
    using ID11 = GPIOG_IDR_ID11_Values<GPIOG::IDR, 11, 1, ReadMode, GPIOGIDRBase> ;
    using ID12 = GPIOG_IDR_ID12_Values<GPIOG::IDR, 12, 1, ReadMode, GPIOGIDRBase> ;
    using ID13 = GPIOG_IDR_ID13_Values<GPIOG::IDR, 13, 1, ReadMode, GPIOGIDRBase> ;
    using ID14 = GPIOG_IDR_ID14_Values<GPIOG::IDR, 14, 1, ReadMode, GPIOGIDRBase> ;
    using ID15 = GPIOG_IDR_ID15_Values<GPIOG::IDR, 15, 1, ReadMode, GPIOGIDRBase> ;
    using FieldValues = GPIOG_IDR_ID15_Values<GPIOG::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58021810, 32, ReadMode, GPIOGIDRBase, T...> ;

  struct GPIOGODRBase {} ;

  struct ODR : public RegisterBase<0x58021814, 32, ReadWriteMode>
  {
    using OD0 = GPIOG_ODR_OD0_Values<GPIOG::ODR, 0, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD1 = GPIOG_ODR_OD1_Values<GPIOG::ODR, 1, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD2 = GPIOG_ODR_OD2_Values<GPIOG::ODR, 2, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD3 = GPIOG_ODR_OD3_Values<GPIOG::ODR, 3, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD4 = GPIOG_ODR_OD4_Values<GPIOG::ODR, 4, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD5 = GPIOG_ODR_OD5_Values<GPIOG::ODR, 5, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD6 = GPIOG_ODR_OD6_Values<GPIOG::ODR, 6, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD7 = GPIOG_ODR_OD7_Values<GPIOG::ODR, 7, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD8 = GPIOG_ODR_OD8_Values<GPIOG::ODR, 8, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD9 = GPIOG_ODR_OD9_Values<GPIOG::ODR, 9, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD10 = GPIOG_ODR_OD10_Values<GPIOG::ODR, 10, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD11 = GPIOG_ODR_OD11_Values<GPIOG::ODR, 11, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD12 = GPIOG_ODR_OD12_Values<GPIOG::ODR, 12, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD13 = GPIOG_ODR_OD13_Values<GPIOG::ODR, 13, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD14 = GPIOG_ODR_OD14_Values<GPIOG::ODR, 14, 1, ReadWriteMode, GPIOGODRBase> ;
    using OD15 = GPIOG_ODR_OD15_Values<GPIOG::ODR, 15, 1, ReadWriteMode, GPIOGODRBase> ;
    using FieldValues = GPIOG_ODR_OD15_Values<GPIOG::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58021814, 32, ReadWriteMode, GPIOGODRBase, T...> ;

  struct GPIOGBSRRBase {} ;

  struct BSRR : public RegisterBase<0x58021818, 32, WriteMode>
  {
    using BS0 = GPIOG_BSRR_BS0_Values<GPIOG::BSRR, 0, 1, WriteMode, GPIOGBSRRBase> ;
    using BS1 = GPIOG_BSRR_BS1_Values<GPIOG::BSRR, 1, 1, WriteMode, GPIOGBSRRBase> ;
    using BS2 = GPIOG_BSRR_BS2_Values<GPIOG::BSRR, 2, 1, WriteMode, GPIOGBSRRBase> ;
    using BS3 = GPIOG_BSRR_BS3_Values<GPIOG::BSRR, 3, 1, WriteMode, GPIOGBSRRBase> ;
    using BS4 = GPIOG_BSRR_BS4_Values<GPIOG::BSRR, 4, 1, WriteMode, GPIOGBSRRBase> ;
    using BS5 = GPIOG_BSRR_BS5_Values<GPIOG::BSRR, 5, 1, WriteMode, GPIOGBSRRBase> ;
    using BS6 = GPIOG_BSRR_BS6_Values<GPIOG::BSRR, 6, 1, WriteMode, GPIOGBSRRBase> ;
    using BS7 = GPIOG_BSRR_BS7_Values<GPIOG::BSRR, 7, 1, WriteMode, GPIOGBSRRBase> ;
    using BS8 = GPIOG_BSRR_BS8_Values<GPIOG::BSRR, 8, 1, WriteMode, GPIOGBSRRBase> ;
    using BS9 = GPIOG_BSRR_BS9_Values<GPIOG::BSRR, 9, 1, WriteMode, GPIOGBSRRBase> ;
    using BS10 = GPIOG_BSRR_BS10_Values<GPIOG::BSRR, 10, 1, WriteMode, GPIOGBSRRBase> ;
    using BS11 = GPIOG_BSRR_BS11_Values<GPIOG::BSRR, 11, 1, WriteMode, GPIOGBSRRBase> ;
    using BS12 = GPIOG_BSRR_BS12_Values<GPIOG::BSRR, 12, 1, WriteMode, GPIOGBSRRBase> ;
    using BS13 = GPIOG_BSRR_BS13_Values<GPIOG::BSRR, 13, 1, WriteMode, GPIOGBSRRBase> ;
    using BS14 = GPIOG_BSRR_BS14_Values<GPIOG::BSRR, 14, 1, WriteMode, GPIOGBSRRBase> ;
    using BS15 = GPIOG_BSRR_BS15_Values<GPIOG::BSRR, 15, 1, WriteMode, GPIOGBSRRBase> ;
    using BR0 = GPIOG_BSRR_BR0_Values<GPIOG::BSRR, 16, 1, WriteMode, GPIOGBSRRBase> ;
    using BR1 = GPIOG_BSRR_BR1_Values<GPIOG::BSRR, 17, 1, WriteMode, GPIOGBSRRBase> ;
    using BR2 = GPIOG_BSRR_BR2_Values<GPIOG::BSRR, 18, 1, WriteMode, GPIOGBSRRBase> ;
    using BR3 = GPIOG_BSRR_BR3_Values<GPIOG::BSRR, 19, 1, WriteMode, GPIOGBSRRBase> ;
    using BR4 = GPIOG_BSRR_BR4_Values<GPIOG::BSRR, 20, 1, WriteMode, GPIOGBSRRBase> ;
    using BR5 = GPIOG_BSRR_BR5_Values<GPIOG::BSRR, 21, 1, WriteMode, GPIOGBSRRBase> ;
    using BR6 = GPIOG_BSRR_BR6_Values<GPIOG::BSRR, 22, 1, WriteMode, GPIOGBSRRBase> ;
    using BR7 = GPIOG_BSRR_BR7_Values<GPIOG::BSRR, 23, 1, WriteMode, GPIOGBSRRBase> ;
    using BR8 = GPIOG_BSRR_BR8_Values<GPIOG::BSRR, 24, 1, WriteMode, GPIOGBSRRBase> ;
    using BR9 = GPIOG_BSRR_BR9_Values<GPIOG::BSRR, 25, 1, WriteMode, GPIOGBSRRBase> ;
    using BR10 = GPIOG_BSRR_BR10_Values<GPIOG::BSRR, 26, 1, WriteMode, GPIOGBSRRBase> ;
    using BR11 = GPIOG_BSRR_BR11_Values<GPIOG::BSRR, 27, 1, WriteMode, GPIOGBSRRBase> ;
    using BR12 = GPIOG_BSRR_BR12_Values<GPIOG::BSRR, 28, 1, WriteMode, GPIOGBSRRBase> ;
    using BR13 = GPIOG_BSRR_BR13_Values<GPIOG::BSRR, 29, 1, WriteMode, GPIOGBSRRBase> ;
    using BR14 = GPIOG_BSRR_BR14_Values<GPIOG::BSRR, 30, 1, WriteMode, GPIOGBSRRBase> ;
    using BR15 = GPIOG_BSRR_BR15_Values<GPIOG::BSRR, 31, 1, WriteMode, GPIOGBSRRBase> ;
    using FieldValues = GPIOG_BSRR_BR15_Values<GPIOG::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58021818, 32, WriteMode, GPIOGBSRRBase, T...> ;

  struct GPIOGLCKRBase {} ;

  struct LCKR : public RegisterBase<0x5802181C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOG_LCKR_LCK0_Values<GPIOG::LCKR, 0, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK1 = GPIOG_LCKR_LCK1_Values<GPIOG::LCKR, 1, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK2 = GPIOG_LCKR_LCK2_Values<GPIOG::LCKR, 2, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK3 = GPIOG_LCKR_LCK3_Values<GPIOG::LCKR, 3, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK4 = GPIOG_LCKR_LCK4_Values<GPIOG::LCKR, 4, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK5 = GPIOG_LCKR_LCK5_Values<GPIOG::LCKR, 5, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK6 = GPIOG_LCKR_LCK6_Values<GPIOG::LCKR, 6, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK7 = GPIOG_LCKR_LCK7_Values<GPIOG::LCKR, 7, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK8 = GPIOG_LCKR_LCK8_Values<GPIOG::LCKR, 8, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK9 = GPIOG_LCKR_LCK9_Values<GPIOG::LCKR, 9, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK10 = GPIOG_LCKR_LCK10_Values<GPIOG::LCKR, 10, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK11 = GPIOG_LCKR_LCK11_Values<GPIOG::LCKR, 11, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK12 = GPIOG_LCKR_LCK12_Values<GPIOG::LCKR, 12, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK13 = GPIOG_LCKR_LCK13_Values<GPIOG::LCKR, 13, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK14 = GPIOG_LCKR_LCK14_Values<GPIOG::LCKR, 14, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCK15 = GPIOG_LCKR_LCK15_Values<GPIOG::LCKR, 15, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using LCKK = GPIOG_LCKR_LCKK_Values<GPIOG::LCKR, 16, 1, ReadWriteMode, GPIOGLCKRBase> ;
    using FieldValues = GPIOG_LCKR_LCKK_Values<GPIOG::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x5802181C, 32, ReadWriteMode, GPIOGLCKRBase, T...> ;

  struct GPIOGAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58021820, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOG_AFRL_AFSEL0_Values<GPIOG::AFRL, 0, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFSEL1 = GPIOG_AFRL_AFSEL1_Values<GPIOG::AFRL, 4, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFSEL2 = GPIOG_AFRL_AFSEL2_Values<GPIOG::AFRL, 8, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFSEL3 = GPIOG_AFRL_AFSEL3_Values<GPIOG::AFRL, 12, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFSEL4 = GPIOG_AFRL_AFSEL4_Values<GPIOG::AFRL, 16, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFSEL5 = GPIOG_AFRL_AFSEL5_Values<GPIOG::AFRL, 20, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFSEL6 = GPIOG_AFRL_AFSEL6_Values<GPIOG::AFRL, 24, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using AFSEL7 = GPIOG_AFRL_AFSEL7_Values<GPIOG::AFRL, 28, 4, ReadWriteMode, GPIOGAFRLBase> ;
    using FieldValues = GPIOG_AFRL_AFSEL7_Values<GPIOG::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58021820, 32, ReadWriteMode, GPIOGAFRLBase, T...> ;

  struct GPIOGAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58021824, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOG_AFRH_AFSEL8_Values<GPIOG::AFRH, 0, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFSEL9 = GPIOG_AFRH_AFSEL9_Values<GPIOG::AFRH, 4, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFSEL10 = GPIOG_AFRH_AFSEL10_Values<GPIOG::AFRH, 8, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFSEL11 = GPIOG_AFRH_AFSEL11_Values<GPIOG::AFRH, 12, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFSEL12 = GPIOG_AFRH_AFSEL12_Values<GPIOG::AFRH, 16, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFSEL13 = GPIOG_AFRH_AFSEL13_Values<GPIOG::AFRH, 20, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFSEL14 = GPIOG_AFRH_AFSEL14_Values<GPIOG::AFRH, 24, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using AFSEL15 = GPIOG_AFRH_AFSEL15_Values<GPIOG::AFRH, 28, 4, ReadWriteMode, GPIOGAFRHBase> ;
    using FieldValues = GPIOG_AFRH_AFSEL15_Values<GPIOG::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58021824, 32, ReadWriteMode, GPIOGAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOGREGISTERS_HPP)
