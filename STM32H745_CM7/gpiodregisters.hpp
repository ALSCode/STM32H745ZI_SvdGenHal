/*******************************************************************************
* Filename      : gpiodregisters.hpp
*
* Details       : GPIO. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(GPIODREGISTERS_HPP)
#define GPIODREGISTERS_HPP

#include "gpiodfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOD
{
  struct GPIODMODERBase {} ;

  struct MODER : public RegisterBase<0x58020C00, 32, ReadWriteMode>
  {
    using MODE0 = GPIOD_MODER_MODE0_Values<GPIOD::MODER, 0, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE1 = GPIOD_MODER_MODE1_Values<GPIOD::MODER, 2, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE2 = GPIOD_MODER_MODE2_Values<GPIOD::MODER, 4, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE3 = GPIOD_MODER_MODE3_Values<GPIOD::MODER, 6, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE4 = GPIOD_MODER_MODE4_Values<GPIOD::MODER, 8, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE5 = GPIOD_MODER_MODE5_Values<GPIOD::MODER, 10, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE6 = GPIOD_MODER_MODE6_Values<GPIOD::MODER, 12, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE7 = GPIOD_MODER_MODE7_Values<GPIOD::MODER, 14, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE8 = GPIOD_MODER_MODE8_Values<GPIOD::MODER, 16, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE9 = GPIOD_MODER_MODE9_Values<GPIOD::MODER, 18, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE10 = GPIOD_MODER_MODE10_Values<GPIOD::MODER, 20, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE11 = GPIOD_MODER_MODE11_Values<GPIOD::MODER, 22, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE12 = GPIOD_MODER_MODE12_Values<GPIOD::MODER, 24, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE13 = GPIOD_MODER_MODE13_Values<GPIOD::MODER, 26, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE14 = GPIOD_MODER_MODE14_Values<GPIOD::MODER, 28, 2, ReadWriteMode, GPIODMODERBase> ;
    using MODE15 = GPIOD_MODER_MODE15_Values<GPIOD::MODER, 30, 2, ReadWriteMode, GPIODMODERBase> ;
    using FieldValues = GPIOD_MODER_MODE15_Values<GPIOD::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x58020C00, 32, ReadWriteMode, GPIODMODERBase, T...> ;

  struct GPIODOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x58020C04, 32, ReadWriteMode>
  {
    using OT0 = GPIOD_OTYPER_OT0_Values<GPIOD::OTYPER, 0, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT1 = GPIOD_OTYPER_OT1_Values<GPIOD::OTYPER, 1, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT2 = GPIOD_OTYPER_OT2_Values<GPIOD::OTYPER, 2, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT3 = GPIOD_OTYPER_OT3_Values<GPIOD::OTYPER, 3, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT4 = GPIOD_OTYPER_OT4_Values<GPIOD::OTYPER, 4, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT5 = GPIOD_OTYPER_OT5_Values<GPIOD::OTYPER, 5, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT6 = GPIOD_OTYPER_OT6_Values<GPIOD::OTYPER, 6, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT7 = GPIOD_OTYPER_OT7_Values<GPIOD::OTYPER, 7, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT8 = GPIOD_OTYPER_OT8_Values<GPIOD::OTYPER, 8, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT9 = GPIOD_OTYPER_OT9_Values<GPIOD::OTYPER, 9, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT10 = GPIOD_OTYPER_OT10_Values<GPIOD::OTYPER, 10, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT11 = GPIOD_OTYPER_OT11_Values<GPIOD::OTYPER, 11, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT12 = GPIOD_OTYPER_OT12_Values<GPIOD::OTYPER, 12, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT13 = GPIOD_OTYPER_OT13_Values<GPIOD::OTYPER, 13, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT14 = GPIOD_OTYPER_OT14_Values<GPIOD::OTYPER, 14, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using OT15 = GPIOD_OTYPER_OT15_Values<GPIOD::OTYPER, 15, 1, ReadWriteMode, GPIODOTYPERBase> ;
    using FieldValues = GPIOD_OTYPER_OT15_Values<GPIOD::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x58020C04, 32, ReadWriteMode, GPIODOTYPERBase, T...> ;

  struct GPIODOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x58020C08, 32, ReadWriteMode>
  {
    using OSPEED0 = GPIOD_OSPEEDR_OSPEED0_Values<GPIOD::OSPEEDR, 0, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED1 = GPIOD_OSPEEDR_OSPEED1_Values<GPIOD::OSPEEDR, 2, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED2 = GPIOD_OSPEEDR_OSPEED2_Values<GPIOD::OSPEEDR, 4, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED3 = GPIOD_OSPEEDR_OSPEED3_Values<GPIOD::OSPEEDR, 6, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED4 = GPIOD_OSPEEDR_OSPEED4_Values<GPIOD::OSPEEDR, 8, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED5 = GPIOD_OSPEEDR_OSPEED5_Values<GPIOD::OSPEEDR, 10, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED6 = GPIOD_OSPEEDR_OSPEED6_Values<GPIOD::OSPEEDR, 12, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED7 = GPIOD_OSPEEDR_OSPEED7_Values<GPIOD::OSPEEDR, 14, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED8 = GPIOD_OSPEEDR_OSPEED8_Values<GPIOD::OSPEEDR, 16, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED9 = GPIOD_OSPEEDR_OSPEED9_Values<GPIOD::OSPEEDR, 18, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED10 = GPIOD_OSPEEDR_OSPEED10_Values<GPIOD::OSPEEDR, 20, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED11 = GPIOD_OSPEEDR_OSPEED11_Values<GPIOD::OSPEEDR, 22, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED12 = GPIOD_OSPEEDR_OSPEED12_Values<GPIOD::OSPEEDR, 24, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED13 = GPIOD_OSPEEDR_OSPEED13_Values<GPIOD::OSPEEDR, 26, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED14 = GPIOD_OSPEEDR_OSPEED14_Values<GPIOD::OSPEEDR, 28, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using OSPEED15 = GPIOD_OSPEEDR_OSPEED15_Values<GPIOD::OSPEEDR, 30, 2, ReadWriteMode, GPIODOSPEEDRBase> ;
    using FieldValues = GPIOD_OSPEEDR_OSPEED15_Values<GPIOD::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x58020C08, 32, ReadWriteMode, GPIODOSPEEDRBase, T...> ;

  struct GPIODPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x58020C0C, 32, ReadWriteMode>
  {
    using PUPD0 = GPIOD_PUPDR_PUPD0_Values<GPIOD::PUPDR, 0, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD1 = GPIOD_PUPDR_PUPD1_Values<GPIOD::PUPDR, 2, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD2 = GPIOD_PUPDR_PUPD2_Values<GPIOD::PUPDR, 4, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD3 = GPIOD_PUPDR_PUPD3_Values<GPIOD::PUPDR, 6, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD4 = GPIOD_PUPDR_PUPD4_Values<GPIOD::PUPDR, 8, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD5 = GPIOD_PUPDR_PUPD5_Values<GPIOD::PUPDR, 10, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD6 = GPIOD_PUPDR_PUPD6_Values<GPIOD::PUPDR, 12, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD7 = GPIOD_PUPDR_PUPD7_Values<GPIOD::PUPDR, 14, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD8 = GPIOD_PUPDR_PUPD8_Values<GPIOD::PUPDR, 16, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD9 = GPIOD_PUPDR_PUPD9_Values<GPIOD::PUPDR, 18, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD10 = GPIOD_PUPDR_PUPD10_Values<GPIOD::PUPDR, 20, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD11 = GPIOD_PUPDR_PUPD11_Values<GPIOD::PUPDR, 22, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD12 = GPIOD_PUPDR_PUPD12_Values<GPIOD::PUPDR, 24, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD13 = GPIOD_PUPDR_PUPD13_Values<GPIOD::PUPDR, 26, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD14 = GPIOD_PUPDR_PUPD14_Values<GPIOD::PUPDR, 28, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using PUPD15 = GPIOD_PUPDR_PUPD15_Values<GPIOD::PUPDR, 30, 2, ReadWriteMode, GPIODPUPDRBase> ;
    using FieldValues = GPIOD_PUPDR_PUPD15_Values<GPIOD::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x58020C0C, 32, ReadWriteMode, GPIODPUPDRBase, T...> ;

  struct GPIODIDRBase {} ;

  struct IDR : public RegisterBase<0x58020C10, 32, ReadMode>
  {
    using ID0 = GPIOD_IDR_ID0_Values<GPIOD::IDR, 0, 1, ReadMode, GPIODIDRBase> ;
    using ID1 = GPIOD_IDR_ID1_Values<GPIOD::IDR, 1, 1, ReadMode, GPIODIDRBase> ;
    using ID2 = GPIOD_IDR_ID2_Values<GPIOD::IDR, 2, 1, ReadMode, GPIODIDRBase> ;
    using ID3 = GPIOD_IDR_ID3_Values<GPIOD::IDR, 3, 1, ReadMode, GPIODIDRBase> ;
    using ID4 = GPIOD_IDR_ID4_Values<GPIOD::IDR, 4, 1, ReadMode, GPIODIDRBase> ;
    using ID5 = GPIOD_IDR_ID5_Values<GPIOD::IDR, 5, 1, ReadMode, GPIODIDRBase> ;
    using ID6 = GPIOD_IDR_ID6_Values<GPIOD::IDR, 6, 1, ReadMode, GPIODIDRBase> ;
    using ID7 = GPIOD_IDR_ID7_Values<GPIOD::IDR, 7, 1, ReadMode, GPIODIDRBase> ;
    using ID8 = GPIOD_IDR_ID8_Values<GPIOD::IDR, 8, 1, ReadMode, GPIODIDRBase> ;
    using ID9 = GPIOD_IDR_ID9_Values<GPIOD::IDR, 9, 1, ReadMode, GPIODIDRBase> ;
    using ID10 = GPIOD_IDR_ID10_Values<GPIOD::IDR, 10, 1, ReadMode, GPIODIDRBase> ;
    using ID11 = GPIOD_IDR_ID11_Values<GPIOD::IDR, 11, 1, ReadMode, GPIODIDRBase> ;
    using ID12 = GPIOD_IDR_ID12_Values<GPIOD::IDR, 12, 1, ReadMode, GPIODIDRBase> ;
    using ID13 = GPIOD_IDR_ID13_Values<GPIOD::IDR, 13, 1, ReadMode, GPIODIDRBase> ;
    using ID14 = GPIOD_IDR_ID14_Values<GPIOD::IDR, 14, 1, ReadMode, GPIODIDRBase> ;
    using ID15 = GPIOD_IDR_ID15_Values<GPIOD::IDR, 15, 1, ReadMode, GPIODIDRBase> ;
    using FieldValues = GPIOD_IDR_ID15_Values<GPIOD::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x58020C10, 32, ReadMode, GPIODIDRBase, T...> ;

  struct GPIODODRBase {} ;

  struct ODR : public RegisterBase<0x58020C14, 32, ReadWriteMode>
  {
    using OD0 = GPIOD_ODR_OD0_Values<GPIOD::ODR, 0, 1, ReadWriteMode, GPIODODRBase> ;
    using OD1 = GPIOD_ODR_OD1_Values<GPIOD::ODR, 1, 1, ReadWriteMode, GPIODODRBase> ;
    using OD2 = GPIOD_ODR_OD2_Values<GPIOD::ODR, 2, 1, ReadWriteMode, GPIODODRBase> ;
    using OD3 = GPIOD_ODR_OD3_Values<GPIOD::ODR, 3, 1, ReadWriteMode, GPIODODRBase> ;
    using OD4 = GPIOD_ODR_OD4_Values<GPIOD::ODR, 4, 1, ReadWriteMode, GPIODODRBase> ;
    using OD5 = GPIOD_ODR_OD5_Values<GPIOD::ODR, 5, 1, ReadWriteMode, GPIODODRBase> ;
    using OD6 = GPIOD_ODR_OD6_Values<GPIOD::ODR, 6, 1, ReadWriteMode, GPIODODRBase> ;
    using OD7 = GPIOD_ODR_OD7_Values<GPIOD::ODR, 7, 1, ReadWriteMode, GPIODODRBase> ;
    using OD8 = GPIOD_ODR_OD8_Values<GPIOD::ODR, 8, 1, ReadWriteMode, GPIODODRBase> ;
    using OD9 = GPIOD_ODR_OD9_Values<GPIOD::ODR, 9, 1, ReadWriteMode, GPIODODRBase> ;
    using OD10 = GPIOD_ODR_OD10_Values<GPIOD::ODR, 10, 1, ReadWriteMode, GPIODODRBase> ;
    using OD11 = GPIOD_ODR_OD11_Values<GPIOD::ODR, 11, 1, ReadWriteMode, GPIODODRBase> ;
    using OD12 = GPIOD_ODR_OD12_Values<GPIOD::ODR, 12, 1, ReadWriteMode, GPIODODRBase> ;
    using OD13 = GPIOD_ODR_OD13_Values<GPIOD::ODR, 13, 1, ReadWriteMode, GPIODODRBase> ;
    using OD14 = GPIOD_ODR_OD14_Values<GPIOD::ODR, 14, 1, ReadWriteMode, GPIODODRBase> ;
    using OD15 = GPIOD_ODR_OD15_Values<GPIOD::ODR, 15, 1, ReadWriteMode, GPIODODRBase> ;
    using FieldValues = GPIOD_ODR_OD15_Values<GPIOD::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x58020C14, 32, ReadWriteMode, GPIODODRBase, T...> ;

  struct GPIODBSRRBase {} ;

  struct BSRR : public RegisterBase<0x58020C18, 32, WriteMode>
  {
    using BS0 = GPIOD_BSRR_BS0_Values<GPIOD::BSRR, 0, 1, WriteMode, GPIODBSRRBase> ;
    using BS1 = GPIOD_BSRR_BS1_Values<GPIOD::BSRR, 1, 1, WriteMode, GPIODBSRRBase> ;
    using BS2 = GPIOD_BSRR_BS2_Values<GPIOD::BSRR, 2, 1, WriteMode, GPIODBSRRBase> ;
    using BS3 = GPIOD_BSRR_BS3_Values<GPIOD::BSRR, 3, 1, WriteMode, GPIODBSRRBase> ;
    using BS4 = GPIOD_BSRR_BS4_Values<GPIOD::BSRR, 4, 1, WriteMode, GPIODBSRRBase> ;
    using BS5 = GPIOD_BSRR_BS5_Values<GPIOD::BSRR, 5, 1, WriteMode, GPIODBSRRBase> ;
    using BS6 = GPIOD_BSRR_BS6_Values<GPIOD::BSRR, 6, 1, WriteMode, GPIODBSRRBase> ;
    using BS7 = GPIOD_BSRR_BS7_Values<GPIOD::BSRR, 7, 1, WriteMode, GPIODBSRRBase> ;
    using BS8 = GPIOD_BSRR_BS8_Values<GPIOD::BSRR, 8, 1, WriteMode, GPIODBSRRBase> ;
    using BS9 = GPIOD_BSRR_BS9_Values<GPIOD::BSRR, 9, 1, WriteMode, GPIODBSRRBase> ;
    using BS10 = GPIOD_BSRR_BS10_Values<GPIOD::BSRR, 10, 1, WriteMode, GPIODBSRRBase> ;
    using BS11 = GPIOD_BSRR_BS11_Values<GPIOD::BSRR, 11, 1, WriteMode, GPIODBSRRBase> ;
    using BS12 = GPIOD_BSRR_BS12_Values<GPIOD::BSRR, 12, 1, WriteMode, GPIODBSRRBase> ;
    using BS13 = GPIOD_BSRR_BS13_Values<GPIOD::BSRR, 13, 1, WriteMode, GPIODBSRRBase> ;
    using BS14 = GPIOD_BSRR_BS14_Values<GPIOD::BSRR, 14, 1, WriteMode, GPIODBSRRBase> ;
    using BS15 = GPIOD_BSRR_BS15_Values<GPIOD::BSRR, 15, 1, WriteMode, GPIODBSRRBase> ;
    using BR0 = GPIOD_BSRR_BR0_Values<GPIOD::BSRR, 16, 1, WriteMode, GPIODBSRRBase> ;
    using BR1 = GPIOD_BSRR_BR1_Values<GPIOD::BSRR, 17, 1, WriteMode, GPIODBSRRBase> ;
    using BR2 = GPIOD_BSRR_BR2_Values<GPIOD::BSRR, 18, 1, WriteMode, GPIODBSRRBase> ;
    using BR3 = GPIOD_BSRR_BR3_Values<GPIOD::BSRR, 19, 1, WriteMode, GPIODBSRRBase> ;
    using BR4 = GPIOD_BSRR_BR4_Values<GPIOD::BSRR, 20, 1, WriteMode, GPIODBSRRBase> ;
    using BR5 = GPIOD_BSRR_BR5_Values<GPIOD::BSRR, 21, 1, WriteMode, GPIODBSRRBase> ;
    using BR6 = GPIOD_BSRR_BR6_Values<GPIOD::BSRR, 22, 1, WriteMode, GPIODBSRRBase> ;
    using BR7 = GPIOD_BSRR_BR7_Values<GPIOD::BSRR, 23, 1, WriteMode, GPIODBSRRBase> ;
    using BR8 = GPIOD_BSRR_BR8_Values<GPIOD::BSRR, 24, 1, WriteMode, GPIODBSRRBase> ;
    using BR9 = GPIOD_BSRR_BR9_Values<GPIOD::BSRR, 25, 1, WriteMode, GPIODBSRRBase> ;
    using BR10 = GPIOD_BSRR_BR10_Values<GPIOD::BSRR, 26, 1, WriteMode, GPIODBSRRBase> ;
    using BR11 = GPIOD_BSRR_BR11_Values<GPIOD::BSRR, 27, 1, WriteMode, GPIODBSRRBase> ;
    using BR12 = GPIOD_BSRR_BR12_Values<GPIOD::BSRR, 28, 1, WriteMode, GPIODBSRRBase> ;
    using BR13 = GPIOD_BSRR_BR13_Values<GPIOD::BSRR, 29, 1, WriteMode, GPIODBSRRBase> ;
    using BR14 = GPIOD_BSRR_BR14_Values<GPIOD::BSRR, 30, 1, WriteMode, GPIODBSRRBase> ;
    using BR15 = GPIOD_BSRR_BR15_Values<GPIOD::BSRR, 31, 1, WriteMode, GPIODBSRRBase> ;
    using FieldValues = GPIOD_BSRR_BR15_Values<GPIOD::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x58020C18, 32, WriteMode, GPIODBSRRBase, T...> ;

  struct GPIODLCKRBase {} ;

  struct LCKR : public RegisterBase<0x58020C1C, 32, ReadWriteMode>
  {
    using LCK0 = GPIOD_LCKR_LCK0_Values<GPIOD::LCKR, 0, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK1 = GPIOD_LCKR_LCK1_Values<GPIOD::LCKR, 1, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK2 = GPIOD_LCKR_LCK2_Values<GPIOD::LCKR, 2, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK3 = GPIOD_LCKR_LCK3_Values<GPIOD::LCKR, 3, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK4 = GPIOD_LCKR_LCK4_Values<GPIOD::LCKR, 4, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK5 = GPIOD_LCKR_LCK5_Values<GPIOD::LCKR, 5, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK6 = GPIOD_LCKR_LCK6_Values<GPIOD::LCKR, 6, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK7 = GPIOD_LCKR_LCK7_Values<GPIOD::LCKR, 7, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK8 = GPIOD_LCKR_LCK8_Values<GPIOD::LCKR, 8, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK9 = GPIOD_LCKR_LCK9_Values<GPIOD::LCKR, 9, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK10 = GPIOD_LCKR_LCK10_Values<GPIOD::LCKR, 10, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK11 = GPIOD_LCKR_LCK11_Values<GPIOD::LCKR, 11, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK12 = GPIOD_LCKR_LCK12_Values<GPIOD::LCKR, 12, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK13 = GPIOD_LCKR_LCK13_Values<GPIOD::LCKR, 13, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK14 = GPIOD_LCKR_LCK14_Values<GPIOD::LCKR, 14, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCK15 = GPIOD_LCKR_LCK15_Values<GPIOD::LCKR, 15, 1, ReadWriteMode, GPIODLCKRBase> ;
    using LCKK = GPIOD_LCKR_LCKK_Values<GPIOD::LCKR, 16, 1, ReadWriteMode, GPIODLCKRBase> ;
    using FieldValues = GPIOD_LCKR_LCKK_Values<GPIOD::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x58020C1C, 32, ReadWriteMode, GPIODLCKRBase, T...> ;

  struct GPIODAFRLBase {} ;

  struct AFRL : public RegisterBase<0x58020C20, 32, ReadWriteMode>
  {
    using AFSEL0 = GPIOD_AFRL_AFSEL0_Values<GPIOD::AFRL, 0, 4, ReadWriteMode, GPIODAFRLBase> ;
    using AFSEL1 = GPIOD_AFRL_AFSEL1_Values<GPIOD::AFRL, 4, 4, ReadWriteMode, GPIODAFRLBase> ;
    using AFSEL2 = GPIOD_AFRL_AFSEL2_Values<GPIOD::AFRL, 8, 4, ReadWriteMode, GPIODAFRLBase> ;
    using AFSEL3 = GPIOD_AFRL_AFSEL3_Values<GPIOD::AFRL, 12, 4, ReadWriteMode, GPIODAFRLBase> ;
    using AFSEL4 = GPIOD_AFRL_AFSEL4_Values<GPIOD::AFRL, 16, 4, ReadWriteMode, GPIODAFRLBase> ;
    using AFSEL5 = GPIOD_AFRL_AFSEL5_Values<GPIOD::AFRL, 20, 4, ReadWriteMode, GPIODAFRLBase> ;
    using AFSEL6 = GPIOD_AFRL_AFSEL6_Values<GPIOD::AFRL, 24, 4, ReadWriteMode, GPIODAFRLBase> ;
    using AFSEL7 = GPIOD_AFRL_AFSEL7_Values<GPIOD::AFRL, 28, 4, ReadWriteMode, GPIODAFRLBase> ;
    using FieldValues = GPIOD_AFRL_AFSEL7_Values<GPIOD::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x58020C20, 32, ReadWriteMode, GPIODAFRLBase, T...> ;

  struct GPIODAFRHBase {} ;

  struct AFRH : public RegisterBase<0x58020C24, 32, ReadWriteMode>
  {
    using AFSEL8 = GPIOD_AFRH_AFSEL8_Values<GPIOD::AFRH, 0, 4, ReadWriteMode, GPIODAFRHBase> ;
    using AFSEL9 = GPIOD_AFRH_AFSEL9_Values<GPIOD::AFRH, 4, 4, ReadWriteMode, GPIODAFRHBase> ;
    using AFSEL10 = GPIOD_AFRH_AFSEL10_Values<GPIOD::AFRH, 8, 4, ReadWriteMode, GPIODAFRHBase> ;
    using AFSEL11 = GPIOD_AFRH_AFSEL11_Values<GPIOD::AFRH, 12, 4, ReadWriteMode, GPIODAFRHBase> ;
    using AFSEL12 = GPIOD_AFRH_AFSEL12_Values<GPIOD::AFRH, 16, 4, ReadWriteMode, GPIODAFRHBase> ;
    using AFSEL13 = GPIOD_AFRH_AFSEL13_Values<GPIOD::AFRH, 20, 4, ReadWriteMode, GPIODAFRHBase> ;
    using AFSEL14 = GPIOD_AFRH_AFSEL14_Values<GPIOD::AFRH, 24, 4, ReadWriteMode, GPIODAFRHBase> ;
    using AFSEL15 = GPIOD_AFRH_AFSEL15_Values<GPIOD::AFRH, 28, 4, ReadWriteMode, GPIODAFRHBase> ;
    using FieldValues = GPIOD_AFRH_AFSEL15_Values<GPIOD::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x58020C24, 32, ReadWriteMode, GPIODAFRHBase, T...> ;

} ;

#endif //#if !defined(GPIODREGISTERS_HPP)
