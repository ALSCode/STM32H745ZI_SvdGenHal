/*******************************************************************************
* Filename      : gpiojregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIOJREGISTERS_HPP)
#define GPIOJREGISTERS_HPP

#include "gpiojfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOJ
{
  struct GPIOJMODERBase {} ;

  struct MODER : public RegisterBase<0x58022400, 32, ReadWriteMode>
  {
    using MODE0 = GPIOJ_MODER_MODE0_Values<GPIOJ::MODER, 0, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE1 = GPIOJ_MODER_MODE1_Values<GPIOJ::MODER, 2, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE2 = GPIOJ_MODER_MODE2_Values<GPIOJ::MODER, 4, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE3 = GPIOJ_MODER_MODE3_Values<GPIOJ::MODER, 6, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE4 = GPIOJ_MODER_MODE4_Values<GPIOJ::MODER, 8, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE5 = GPIOJ_MODER_MODE5_Values<GPIOJ::MODER, 10, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE6 = GPIOJ_MODER_MODE6_Values<GPIOJ::MODER, 12, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE7 = GPIOJ_MODER_MODE7_Values<GPIOJ::MODER, 14, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE8 = GPIOJ_MODER_MODE8_Values<GPIOJ::MODER, 16, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE9 = GPIOJ_MODER_MODE9_Values<GPIOJ::MODER, 18, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE10 = GPIOJ_MODER_MODE10_Values<GPIOJ::MODER, 20, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE11 = GPIOJ_MODER_MODE11_Values<GPIOJ::MODER, 22, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE12 = GPIOJ_MODER_MODE12_Values<GPIOJ::MODER, 24, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE13 = GPIOJ_MODER_MODE13_Values<GPIOJ::MODER, 26, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE14 = GPIOJ_MODER_MODE14_Values<GPIOJ::MODER, 28, 2, ReadWriteMode, GPIOJMODERBase> ;
    using MODE15 = GPIOJ_MODER_MODE15_Values<GPIOJ::MODER, 30, 2, ReadWriteMode, GPIOJMODERBase> ;
    using FieldValues = GPIOJ_MODER_MODE15_Values<GPIOJ::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58022400, 32, ReadWriteMode, GPIOJMODERBase, T...> ;

  struct GPIOJOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58022404, 32, ReadWriteMode>
  {
    using OT0 = GPIOJ_OTYPER_OT0_Values<GPIOJ::OTYPER, 0, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT1 = GPIOJ_OTYPER_OT1_Values<GPIOJ::OTYPER, 1, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT2 = GPIOJ_OTYPER_OT2_Values<GPIOJ::OTYPER, 2, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT3 = GPIOJ_OTYPER_OT3_Values<GPIOJ::OTYPER, 3, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT4 = GPIOJ_OTYPER_OT4_Values<GPIOJ::OTYPER, 4, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT5 = GPIOJ_OTYPER_OT5_Values<GPIOJ::OTYPER, 5, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT6 = GPIOJ_OTYPER_OT6_Values<GPIOJ::OTYPER, 6, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT7 = GPIOJ_OTYPER_OT7_Values<GPIOJ::OTYPER, 7, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT8 = GPIOJ_OTYPER_OT8_Values<GPIOJ::OTYPER, 8, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT9 = GPIOJ_OTYPER_OT9_Values<GPIOJ::OTYPER, 9, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT10 = GPIOJ_OTYPER_OT10_Values<GPIOJ::OTYPER, 10, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT11 = GPIOJ_OTYPER_OT11_Values<GPIOJ::OTYPER, 11, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT12 = GPIOJ_OTYPER_OT12_Values<GPIOJ::OTYPER, 12, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT13 = GPIOJ_OTYPER_OT13_Values<GPIOJ::OTYPER, 13, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT14 = GPIOJ_OTYPER_OT14_Values<GPIOJ::OTYPER, 14, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using OT15 = GPIOJ_OTYPER_OT15_Values<GPIOJ::OTYPER, 15, 1, ReadWriteMode, GPIOJOTYPERBase> ;
    using FieldValues = GPIOJ_OTYPER_OT15_Values<GPIOJ::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58022404, 32, ReadWriteMode, GPIOJOTYPERBase, T...> ;

  struct GPIOJOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58022408, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOJ_OSPEEDR_OSPEED0_Values<GPIOJ::OSPEEDR, 0, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED1 = GPIOJ_OSPEEDR_OSPEED1_Values<GPIOJ::OSPEEDR, 2, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED2 = GPIOJ_OSPEEDR_OSPEED2_Values<GPIOJ::OSPEEDR, 4, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED3 = GPIOJ_OSPEEDR_OSPEED3_Values<GPIOJ::OSPEEDR, 6, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED4 = GPIOJ_OSPEEDR_OSPEED4_Values<GPIOJ::OSPEEDR, 8, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED5 = GPIOJ_OSPEEDR_OSPEED5_Values<GPIOJ::OSPEEDR, 10, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED6 = GPIOJ_OSPEEDR_OSPEED6_Values<GPIOJ::OSPEEDR, 12, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED7 = GPIOJ_OSPEEDR_OSPEED7_Values<GPIOJ::OSPEEDR, 14, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED8 = GPIOJ_OSPEEDR_OSPEED8_Values<GPIOJ::OSPEEDR, 16, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED9 = GPIOJ_OSPEEDR_OSPEED9_Values<GPIOJ::OSPEEDR, 18, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED10 = GPIOJ_OSPEEDR_OSPEED10_Values<GPIOJ::OSPEEDR, 20, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED11 = GPIOJ_OSPEEDR_OSPEED11_Values<GPIOJ::OSPEEDR, 22, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED12 = GPIOJ_OSPEEDR_OSPEED12_Values<GPIOJ::OSPEEDR, 24, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED13 = GPIOJ_OSPEEDR_OSPEED13_Values<GPIOJ::OSPEEDR, 26, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED14 = GPIOJ_OSPEEDR_OSPEED14_Values<GPIOJ::OSPEEDR, 28, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using OSPEED15 = GPIOJ_OSPEEDR_OSPEED15_Values<GPIOJ::OSPEEDR, 30, 2, ReadWriteMode, GPIOJOSPEEDRBase> ;
    using FieldValues = GPIOJ_OSPEEDR_OSPEED15_Values<GPIOJ::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58022408, 32, ReadWriteMode, GPIOJOSPEEDRBase, T...> ;

  struct GPIOJPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x5802240C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOJ_PUPDR_PUPD0_Values<GPIOJ::PUPDR, 0, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD1 = GPIOJ_PUPDR_PUPD1_Values<GPIOJ::PUPDR, 2, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD2 = GPIOJ_PUPDR_PUPD2_Values<GPIOJ::PUPDR, 4, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD3 = GPIOJ_PUPDR_PUPD3_Values<GPIOJ::PUPDR, 6, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD4 = GPIOJ_PUPDR_PUPD4_Values<GPIOJ::PUPDR, 8, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD5 = GPIOJ_PUPDR_PUPD5_Values<GPIOJ::PUPDR, 10, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD6 = GPIOJ_PUPDR_PUPD6_Values<GPIOJ::PUPDR, 12, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD7 = GPIOJ_PUPDR_PUPD7_Values<GPIOJ::PUPDR, 14, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD8 = GPIOJ_PUPDR_PUPD8_Values<GPIOJ::PUPDR, 16, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD9 = GPIOJ_PUPDR_PUPD9_Values<GPIOJ::PUPDR, 18, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD10 = GPIOJ_PUPDR_PUPD10_Values<GPIOJ::PUPDR, 20, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD11 = GPIOJ_PUPDR_PUPD11_Values<GPIOJ::PUPDR, 22, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD12 = GPIOJ_PUPDR_PUPD12_Values<GPIOJ::PUPDR, 24, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD13 = GPIOJ_PUPDR_PUPD13_Values<GPIOJ::PUPDR, 26, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD14 = GPIOJ_PUPDR_PUPD14_Values<GPIOJ::PUPDR, 28, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using PUPD15 = GPIOJ_PUPDR_PUPD15_Values<GPIOJ::PUPDR, 30, 2, ReadWriteMode, GPIOJPUPDRBase> ;
    using FieldValues = GPIOJ_PUPDR_PUPD15_Values<GPIOJ::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x5802240C, 32, ReadWriteMode, GPIOJPUPDRBase, T...> ;

  struct GPIOJIDRBase {} ;

  struct IDR : public RegisterBase<0x58022410, 32, ReadMode>
  {
    using ID0 = GPIOJ_IDR_ID0_Values<GPIOJ::IDR, 0, 1, ReadMode, GPIOJIDRBase> ;
    using ID1 = GPIOJ_IDR_ID1_Values<GPIOJ::IDR, 1, 1, ReadMode, GPIOJIDRBase> ;
    using ID2 = GPIOJ_IDR_ID2_Values<GPIOJ::IDR, 2, 1, ReadMode, GPIOJIDRBase> ;
    using ID3 = GPIOJ_IDR_ID3_Values<GPIOJ::IDR, 3, 1, ReadMode, GPIOJIDRBase> ;
    using ID4 = GPIOJ_IDR_ID4_Values<GPIOJ::IDR, 4, 1, ReadMode, GPIOJIDRBase> ;
    using ID5 = GPIOJ_IDR_ID5_Values<GPIOJ::IDR, 5, 1, ReadMode, GPIOJIDRBase> ;
    using ID6 = GPIOJ_IDR_ID6_Values<GPIOJ::IDR, 6, 1, ReadMode, GPIOJIDRBase> ;
    using ID7 = GPIOJ_IDR_ID7_Values<GPIOJ::IDR, 7, 1, ReadMode, GPIOJIDRBase> ;
    using ID8 = GPIOJ_IDR_ID8_Values<GPIOJ::IDR, 8, 1, ReadMode, GPIOJIDRBase> ;
    using ID9 = GPIOJ_IDR_ID9_Values<GPIOJ::IDR, 9, 1, ReadMode, GPIOJIDRBase> ;
    using ID10 = GPIOJ_IDR_ID10_Values<GPIOJ::IDR, 10, 1, ReadMode, GPIOJIDRBase> ;
    using ID11 = GPIOJ_IDR_ID11_Values<GPIOJ::IDR, 11, 1, ReadMode, GPIOJIDRBase> ;
    using ID12 = GPIOJ_IDR_ID12_Values<GPIOJ::IDR, 12, 1, ReadMode, GPIOJIDRBase> ;
    using ID13 = GPIOJ_IDR_ID13_Values<GPIOJ::IDR, 13, 1, ReadMode, GPIOJIDRBase> ;
    using ID14 = GPIOJ_IDR_ID14_Values<GPIOJ::IDR, 14, 1, ReadMode, GPIOJIDRBase> ;
    using ID15 = GPIOJ_IDR_ID15_Values<GPIOJ::IDR, 15, 1, ReadMode, GPIOJIDRBase> ;
    using FieldValues = GPIOJ_IDR_ID15_Values<GPIOJ::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58022410, 32, ReadMode, GPIOJIDRBase, T...> ;

  struct GPIOJODRBase {} ;

  struct ODR : public RegisterBase<0x58022414, 32, ReadWriteMode>
  {
    using OD0 = GPIOJ_ODR_OD0_Values<GPIOJ::ODR, 0, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD1 = GPIOJ_ODR_OD1_Values<GPIOJ::ODR, 1, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD2 = GPIOJ_ODR_OD2_Values<GPIOJ::ODR, 2, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD3 = GPIOJ_ODR_OD3_Values<GPIOJ::ODR, 3, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD4 = GPIOJ_ODR_OD4_Values<GPIOJ::ODR, 4, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD5 = GPIOJ_ODR_OD5_Values<GPIOJ::ODR, 5, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD6 = GPIOJ_ODR_OD6_Values<GPIOJ::ODR, 6, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD7 = GPIOJ_ODR_OD7_Values<GPIOJ::ODR, 7, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD8 = GPIOJ_ODR_OD8_Values<GPIOJ::ODR, 8, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD9 = GPIOJ_ODR_OD9_Values<GPIOJ::ODR, 9, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD10 = GPIOJ_ODR_OD10_Values<GPIOJ::ODR, 10, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD11 = GPIOJ_ODR_OD11_Values<GPIOJ::ODR, 11, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD12 = GPIOJ_ODR_OD12_Values<GPIOJ::ODR, 12, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD13 = GPIOJ_ODR_OD13_Values<GPIOJ::ODR, 13, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD14 = GPIOJ_ODR_OD14_Values<GPIOJ::ODR, 14, 1, ReadWriteMode, GPIOJODRBase> ;
    using OD15 = GPIOJ_ODR_OD15_Values<GPIOJ::ODR, 15, 1, ReadWriteMode, GPIOJODRBase> ;
    using FieldValues = GPIOJ_ODR_OD15_Values<GPIOJ::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58022414, 32, ReadWriteMode, GPIOJODRBase, T...> ;

  struct GPIOJBSRRBase {} ;

  struct BSRR : public RegisterBase<0x58022418, 32, WriteMode>
  {
    using BS0 = GPIOJ_BSRR_BS0_Values<GPIOJ::BSRR, 0, 1, WriteMode, GPIOJBSRRBase> ;
    using BS1 = GPIOJ_BSRR_BS1_Values<GPIOJ::BSRR, 1, 1, WriteMode, GPIOJBSRRBase> ;
    using BS2 = GPIOJ_BSRR_BS2_Values<GPIOJ::BSRR, 2, 1, WriteMode, GPIOJBSRRBase> ;
    using BS3 = GPIOJ_BSRR_BS3_Values<GPIOJ::BSRR, 3, 1, WriteMode, GPIOJBSRRBase> ;
    using BS4 = GPIOJ_BSRR_BS4_Values<GPIOJ::BSRR, 4, 1, WriteMode, GPIOJBSRRBase> ;
    using BS5 = GPIOJ_BSRR_BS5_Values<GPIOJ::BSRR, 5, 1, WriteMode, GPIOJBSRRBase> ;
    using BS6 = GPIOJ_BSRR_BS6_Values<GPIOJ::BSRR, 6, 1, WriteMode, GPIOJBSRRBase> ;
    using BS7 = GPIOJ_BSRR_BS7_Values<GPIOJ::BSRR, 7, 1, WriteMode, GPIOJBSRRBase> ;
    using BS8 = GPIOJ_BSRR_BS8_Values<GPIOJ::BSRR, 8, 1, WriteMode, GPIOJBSRRBase> ;
    using BS9 = GPIOJ_BSRR_BS9_Values<GPIOJ::BSRR, 9, 1, WriteMode, GPIOJBSRRBase> ;
    using BS10 = GPIOJ_BSRR_BS10_Values<GPIOJ::BSRR, 10, 1, WriteMode, GPIOJBSRRBase> ;
    using BS11 = GPIOJ_BSRR_BS11_Values<GPIOJ::BSRR, 11, 1, WriteMode, GPIOJBSRRBase> ;
    using BS12 = GPIOJ_BSRR_BS12_Values<GPIOJ::BSRR, 12, 1, WriteMode, GPIOJBSRRBase> ;
    using BS13 = GPIOJ_BSRR_BS13_Values<GPIOJ::BSRR, 13, 1, WriteMode, GPIOJBSRRBase> ;
    using BS14 = GPIOJ_BSRR_BS14_Values<GPIOJ::BSRR, 14, 1, WriteMode, GPIOJBSRRBase> ;
    using BS15 = GPIOJ_BSRR_BS15_Values<GPIOJ::BSRR, 15, 1, WriteMode, GPIOJBSRRBase> ;
    using BR0 = GPIOJ_BSRR_BR0_Values<GPIOJ::BSRR, 16, 1, WriteMode, GPIOJBSRRBase> ;
    using BR1 = GPIOJ_BSRR_BR1_Values<GPIOJ::BSRR, 17, 1, WriteMode, GPIOJBSRRBase> ;
    using BR2 = GPIOJ_BSRR_BR2_Values<GPIOJ::BSRR, 18, 1, WriteMode, GPIOJBSRRBase> ;
    using BR3 = GPIOJ_BSRR_BR3_Values<GPIOJ::BSRR, 19, 1, WriteMode, GPIOJBSRRBase> ;
    using BR4 = GPIOJ_BSRR_BR4_Values<GPIOJ::BSRR, 20, 1, WriteMode, GPIOJBSRRBase> ;
    using BR5 = GPIOJ_BSRR_BR5_Values<GPIOJ::BSRR, 21, 1, WriteMode, GPIOJBSRRBase> ;
    using BR6 = GPIOJ_BSRR_BR6_Values<GPIOJ::BSRR, 22, 1, WriteMode, GPIOJBSRRBase> ;
    using BR7 = GPIOJ_BSRR_BR7_Values<GPIOJ::BSRR, 23, 1, WriteMode, GPIOJBSRRBase> ;
    using BR8 = GPIOJ_BSRR_BR8_Values<GPIOJ::BSRR, 24, 1, WriteMode, GPIOJBSRRBase> ;
    using BR9 = GPIOJ_BSRR_BR9_Values<GPIOJ::BSRR, 25, 1, WriteMode, GPIOJBSRRBase> ;
    using BR10 = GPIOJ_BSRR_BR10_Values<GPIOJ::BSRR, 26, 1, WriteMode, GPIOJBSRRBase> ;
    using BR11 = GPIOJ_BSRR_BR11_Values<GPIOJ::BSRR, 27, 1, WriteMode, GPIOJBSRRBase> ;
    using BR12 = GPIOJ_BSRR_BR12_Values<GPIOJ::BSRR, 28, 1, WriteMode, GPIOJBSRRBase> ;
    using BR13 = GPIOJ_BSRR_BR13_Values<GPIOJ::BSRR, 29, 1, WriteMode, GPIOJBSRRBase> ;
    using BR14 = GPIOJ_BSRR_BR14_Values<GPIOJ::BSRR, 30, 1, WriteMode, GPIOJBSRRBase> ;
    using BR15 = GPIOJ_BSRR_BR15_Values<GPIOJ::BSRR, 31, 1, WriteMode, GPIOJBSRRBase> ;
    using FieldValues = GPIOJ_BSRR_BR15_Values<GPIOJ::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58022418, 32, WriteMode, GPIOJBSRRBase, T...> ;

  struct GPIOJLCKRBase {} ;

  struct LCKR : public RegisterBase<0x5802241C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOJ_LCKR_LCK0_Values<GPIOJ::LCKR, 0, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK1 = GPIOJ_LCKR_LCK1_Values<GPIOJ::LCKR, 1, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK2 = GPIOJ_LCKR_LCK2_Values<GPIOJ::LCKR, 2, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK3 = GPIOJ_LCKR_LCK3_Values<GPIOJ::LCKR, 3, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK4 = GPIOJ_LCKR_LCK4_Values<GPIOJ::LCKR, 4, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK5 = GPIOJ_LCKR_LCK5_Values<GPIOJ::LCKR, 5, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK6 = GPIOJ_LCKR_LCK6_Values<GPIOJ::LCKR, 6, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK7 = GPIOJ_LCKR_LCK7_Values<GPIOJ::LCKR, 7, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK8 = GPIOJ_LCKR_LCK8_Values<GPIOJ::LCKR, 8, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK9 = GPIOJ_LCKR_LCK9_Values<GPIOJ::LCKR, 9, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK10 = GPIOJ_LCKR_LCK10_Values<GPIOJ::LCKR, 10, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK11 = GPIOJ_LCKR_LCK11_Values<GPIOJ::LCKR, 11, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK12 = GPIOJ_LCKR_LCK12_Values<GPIOJ::LCKR, 12, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK13 = GPIOJ_LCKR_LCK13_Values<GPIOJ::LCKR, 13, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK14 = GPIOJ_LCKR_LCK14_Values<GPIOJ::LCKR, 14, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCK15 = GPIOJ_LCKR_LCK15_Values<GPIOJ::LCKR, 15, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using LCKK = GPIOJ_LCKR_LCKK_Values<GPIOJ::LCKR, 16, 1, ReadWriteMode, GPIOJLCKRBase> ;
    using FieldValues = GPIOJ_LCKR_LCKK_Values<GPIOJ::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x5802241C, 32, ReadWriteMode, GPIOJLCKRBase, T...> ;

  struct GPIOJAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58022420, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOJ_AFRL_AFSEL0_Values<GPIOJ::AFRL, 0, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFSEL1 = GPIOJ_AFRL_AFSEL1_Values<GPIOJ::AFRL, 4, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFSEL2 = GPIOJ_AFRL_AFSEL2_Values<GPIOJ::AFRL, 8, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFSEL3 = GPIOJ_AFRL_AFSEL3_Values<GPIOJ::AFRL, 12, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFSEL4 = GPIOJ_AFRL_AFSEL4_Values<GPIOJ::AFRL, 16, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFSEL5 = GPIOJ_AFRL_AFSEL5_Values<GPIOJ::AFRL, 20, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFSEL6 = GPIOJ_AFRL_AFSEL6_Values<GPIOJ::AFRL, 24, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using AFSEL7 = GPIOJ_AFRL_AFSEL7_Values<GPIOJ::AFRL, 28, 4, ReadWriteMode, GPIOJAFRLBase> ;
    using FieldValues = GPIOJ_AFRL_AFSEL7_Values<GPIOJ::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58022420, 32, ReadWriteMode, GPIOJAFRLBase, T...> ;

  struct GPIOJAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58022424, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOJ_AFRH_AFSEL8_Values<GPIOJ::AFRH, 0, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFSEL9 = GPIOJ_AFRH_AFSEL9_Values<GPIOJ::AFRH, 4, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFSEL10 = GPIOJ_AFRH_AFSEL10_Values<GPIOJ::AFRH, 8, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFSEL11 = GPIOJ_AFRH_AFSEL11_Values<GPIOJ::AFRH, 12, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFSEL12 = GPIOJ_AFRH_AFSEL12_Values<GPIOJ::AFRH, 16, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFSEL13 = GPIOJ_AFRH_AFSEL13_Values<GPIOJ::AFRH, 20, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFSEL14 = GPIOJ_AFRH_AFSEL14_Values<GPIOJ::AFRH, 24, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using AFSEL15 = GPIOJ_AFRH_AFSEL15_Values<GPIOJ::AFRH, 28, 4, ReadWriteMode, GPIOJAFRHBase> ;
    using FieldValues = GPIOJ_AFRH_AFSEL15_Values<GPIOJ::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58022424, 32, ReadWriteMode, GPIOJAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIOJREGISTERS_HPP)
