/*******************************************************************************
* Filename      : extiregisters.hpp
*
* Details       : External interrupt/event controller. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(EXTIREGISTERS_HPP)
#define EXTIREGISTERS_HPP

#include "extifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EXTI
{
  struct EXTIRTSR1Base {} ;

  struct RTSR1 : public RegisterBase<0x58000000, 32, ReadWriteMode>
  {
    using TR0 = EXTI_RTSR1_TR0_Values<EXTI::RTSR1, 0, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR1 = EXTI_RTSR1_TR1_Values<EXTI::RTSR1, 1, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR2 = EXTI_RTSR1_TR2_Values<EXTI::RTSR1, 2, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR3 = EXTI_RTSR1_TR3_Values<EXTI::RTSR1, 3, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR4 = EXTI_RTSR1_TR4_Values<EXTI::RTSR1, 4, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR5 = EXTI_RTSR1_TR5_Values<EXTI::RTSR1, 5, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR6 = EXTI_RTSR1_TR6_Values<EXTI::RTSR1, 6, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR7 = EXTI_RTSR1_TR7_Values<EXTI::RTSR1, 7, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR8 = EXTI_RTSR1_TR8_Values<EXTI::RTSR1, 8, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR9 = EXTI_RTSR1_TR9_Values<EXTI::RTSR1, 9, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR10 = EXTI_RTSR1_TR10_Values<EXTI::RTSR1, 10, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR11 = EXTI_RTSR1_TR11_Values<EXTI::RTSR1, 11, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR12 = EXTI_RTSR1_TR12_Values<EXTI::RTSR1, 12, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR13 = EXTI_RTSR1_TR13_Values<EXTI::RTSR1, 13, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR14 = EXTI_RTSR1_TR14_Values<EXTI::RTSR1, 14, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR15 = EXTI_RTSR1_TR15_Values<EXTI::RTSR1, 15, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR16 = EXTI_RTSR1_TR16_Values<EXTI::RTSR1, 16, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR17 = EXTI_RTSR1_TR17_Values<EXTI::RTSR1, 17, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR18 = EXTI_RTSR1_TR18_Values<EXTI::RTSR1, 18, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR19 = EXTI_RTSR1_TR19_Values<EXTI::RTSR1, 19, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR20 = EXTI_RTSR1_TR20_Values<EXTI::RTSR1, 20, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using TR21 = EXTI_RTSR1_TR21_Values<EXTI::RTSR1, 21, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using FieldValues = EXTI_RTSR1_TR21_Values<EXTI::RTSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR1Pack  = Register<0x58000000, 32, ReadWriteMode, EXTIRTSR1Base, T...> ;

  struct EXTIFTSR1Base {} ;

  struct FTSR1 : public RegisterBase<0x58000004, 32, ReadWriteMode>
  {
    using TR0 = EXTI_FTSR1_TR0_Values<EXTI::FTSR1, 0, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR1 = EXTI_FTSR1_TR1_Values<EXTI::FTSR1, 1, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR2 = EXTI_FTSR1_TR2_Values<EXTI::FTSR1, 2, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR3 = EXTI_FTSR1_TR3_Values<EXTI::FTSR1, 3, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR4 = EXTI_FTSR1_TR4_Values<EXTI::FTSR1, 4, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR5 = EXTI_FTSR1_TR5_Values<EXTI::FTSR1, 5, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR6 = EXTI_FTSR1_TR6_Values<EXTI::FTSR1, 6, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR7 = EXTI_FTSR1_TR7_Values<EXTI::FTSR1, 7, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR8 = EXTI_FTSR1_TR8_Values<EXTI::FTSR1, 8, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR9 = EXTI_FTSR1_TR9_Values<EXTI::FTSR1, 9, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR10 = EXTI_FTSR1_TR10_Values<EXTI::FTSR1, 10, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR11 = EXTI_FTSR1_TR11_Values<EXTI::FTSR1, 11, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR12 = EXTI_FTSR1_TR12_Values<EXTI::FTSR1, 12, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR13 = EXTI_FTSR1_TR13_Values<EXTI::FTSR1, 13, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR14 = EXTI_FTSR1_TR14_Values<EXTI::FTSR1, 14, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR15 = EXTI_FTSR1_TR15_Values<EXTI::FTSR1, 15, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR16 = EXTI_FTSR1_TR16_Values<EXTI::FTSR1, 16, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR17 = EXTI_FTSR1_TR17_Values<EXTI::FTSR1, 17, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR18 = EXTI_FTSR1_TR18_Values<EXTI::FTSR1, 18, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR19 = EXTI_FTSR1_TR19_Values<EXTI::FTSR1, 19, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR20 = EXTI_FTSR1_TR20_Values<EXTI::FTSR1, 20, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using TR21 = EXTI_FTSR1_TR21_Values<EXTI::FTSR1, 21, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FieldValues = EXTI_FTSR1_TR21_Values<EXTI::FTSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR1Pack  = Register<0x58000004, 32, ReadWriteMode, EXTIFTSR1Base, T...> ;

  struct EXTISWIER1Base {} ;

  struct SWIER1 : public RegisterBase<0x58000008, 32, ReadWriteMode>
  {
    using SWIER0 = EXTI_SWIER1_SWIER0_Values<EXTI::SWIER1, 0, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER1Field = EXTI_SWIER1_SWIER1_Values<EXTI::SWIER1, 1, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER2 = EXTI_SWIER1_SWIER2_Values<EXTI::SWIER1, 2, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER3 = EXTI_SWIER1_SWIER3_Values<EXTI::SWIER1, 3, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER4 = EXTI_SWIER1_SWIER4_Values<EXTI::SWIER1, 4, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER5 = EXTI_SWIER1_SWIER5_Values<EXTI::SWIER1, 5, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER6 = EXTI_SWIER1_SWIER6_Values<EXTI::SWIER1, 6, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER7 = EXTI_SWIER1_SWIER7_Values<EXTI::SWIER1, 7, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER8 = EXTI_SWIER1_SWIER8_Values<EXTI::SWIER1, 8, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER9 = EXTI_SWIER1_SWIER9_Values<EXTI::SWIER1, 9, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER10 = EXTI_SWIER1_SWIER10_Values<EXTI::SWIER1, 10, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER11 = EXTI_SWIER1_SWIER11_Values<EXTI::SWIER1, 11, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER12 = EXTI_SWIER1_SWIER12_Values<EXTI::SWIER1, 12, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER13 = EXTI_SWIER1_SWIER13_Values<EXTI::SWIER1, 13, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER14 = EXTI_SWIER1_SWIER14_Values<EXTI::SWIER1, 14, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER15 = EXTI_SWIER1_SWIER15_Values<EXTI::SWIER1, 15, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER16 = EXTI_SWIER1_SWIER16_Values<EXTI::SWIER1, 16, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER17 = EXTI_SWIER1_SWIER17_Values<EXTI::SWIER1, 17, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER18 = EXTI_SWIER1_SWIER18_Values<EXTI::SWIER1, 18, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER19 = EXTI_SWIER1_SWIER19_Values<EXTI::SWIER1, 19, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER20 = EXTI_SWIER1_SWIER20_Values<EXTI::SWIER1, 20, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWIER21 = EXTI_SWIER1_SWIER21_Values<EXTI::SWIER1, 21, 1, ReadWriteMode, EXTISWIER1Base> ;
    using FieldValues = EXTI_SWIER1_SWIER21_Values<EXTI::SWIER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER1Pack  = Register<0x58000008, 32, ReadWriteMode, EXTISWIER1Base, T...> ;

  struct EXTID3PMR1Base {} ;

  struct D3PMR1 : public RegisterBase<0x5800000C, 32, ReadWriteMode>
  {
    using MR0 = EXTI_D3PMR1_MR0_Values<EXTI::D3PMR1, 0, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR1 = EXTI_D3PMR1_MR1_Values<EXTI::D3PMR1, 1, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR2 = EXTI_D3PMR1_MR2_Values<EXTI::D3PMR1, 2, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR3 = EXTI_D3PMR1_MR3_Values<EXTI::D3PMR1, 3, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR4 = EXTI_D3PMR1_MR4_Values<EXTI::D3PMR1, 4, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR5 = EXTI_D3PMR1_MR5_Values<EXTI::D3PMR1, 5, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR6 = EXTI_D3PMR1_MR6_Values<EXTI::D3PMR1, 6, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR7 = EXTI_D3PMR1_MR7_Values<EXTI::D3PMR1, 7, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR8 = EXTI_D3PMR1_MR8_Values<EXTI::D3PMR1, 8, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR9 = EXTI_D3PMR1_MR9_Values<EXTI::D3PMR1, 9, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR10 = EXTI_D3PMR1_MR10_Values<EXTI::D3PMR1, 10, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR11 = EXTI_D3PMR1_MR11_Values<EXTI::D3PMR1, 11, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR12 = EXTI_D3PMR1_MR12_Values<EXTI::D3PMR1, 12, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR13 = EXTI_D3PMR1_MR13_Values<EXTI::D3PMR1, 13, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR14 = EXTI_D3PMR1_MR14_Values<EXTI::D3PMR1, 14, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR15 = EXTI_D3PMR1_MR15_Values<EXTI::D3PMR1, 15, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR19 = EXTI_D3PMR1_MR19_Values<EXTI::D3PMR1, 19, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR20 = EXTI_D3PMR1_MR20_Values<EXTI::D3PMR1, 20, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR21 = EXTI_D3PMR1_MR21_Values<EXTI::D3PMR1, 21, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using MR25 = EXTI_D3PMR1_MR25_Values<EXTI::D3PMR1, 25, 1, ReadWriteMode, EXTID3PMR1Base> ;
    using FieldValues = EXTI_D3PMR1_MR25_Values<EXTI::D3PMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3PMR1Pack  = Register<0x5800000C, 32, ReadWriteMode, EXTID3PMR1Base, T...> ;

  struct EXTID3PCR1LBase {} ;

  struct D3PCR1L : public RegisterBase<0x58000010, 32, ReadWriteMode>
  {
    using PCS0 = EXTI_D3PCR1L_PCS0_Values<EXTI::D3PCR1L, 0, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS1 = EXTI_D3PCR1L_PCS1_Values<EXTI::D3PCR1L, 2, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS2 = EXTI_D3PCR1L_PCS2_Values<EXTI::D3PCR1L, 4, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS3 = EXTI_D3PCR1L_PCS3_Values<EXTI::D3PCR1L, 6, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS4 = EXTI_D3PCR1L_PCS4_Values<EXTI::D3PCR1L, 8, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS5 = EXTI_D3PCR1L_PCS5_Values<EXTI::D3PCR1L, 10, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS6 = EXTI_D3PCR1L_PCS6_Values<EXTI::D3PCR1L, 12, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS7 = EXTI_D3PCR1L_PCS7_Values<EXTI::D3PCR1L, 14, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS8 = EXTI_D3PCR1L_PCS8_Values<EXTI::D3PCR1L, 16, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS9 = EXTI_D3PCR1L_PCS9_Values<EXTI::D3PCR1L, 18, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS10 = EXTI_D3PCR1L_PCS10_Values<EXTI::D3PCR1L, 20, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS11 = EXTI_D3PCR1L_PCS11_Values<EXTI::D3PCR1L, 22, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS12 = EXTI_D3PCR1L_PCS12_Values<EXTI::D3PCR1L, 24, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS13 = EXTI_D3PCR1L_PCS13_Values<EXTI::D3PCR1L, 26, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS14 = EXTI_D3PCR1L_PCS14_Values<EXTI::D3PCR1L, 28, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using PCS15 = EXTI_D3PCR1L_PCS15_Values<EXTI::D3PCR1L, 30, 2, ReadWriteMode, EXTID3PCR1LBase> ;
    using FieldValues = EXTI_D3PCR1L_PCS15_Values<EXTI::D3PCR1L, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3PCR1LPack  = Register<0x58000010, 32, ReadWriteMode, EXTID3PCR1LBase, T...> ;

  struct EXTID3PCR1HBase {} ;

  struct D3PCR1H : public RegisterBase<0x58000014, 32, ReadWriteMode>
  {
    using PCS19 = EXTI_D3PCR1H_PCS19_Values<EXTI::D3PCR1H, 6, 2, ReadWriteMode, EXTID3PCR1HBase> ;
    using PCS20 = EXTI_D3PCR1H_PCS20_Values<EXTI::D3PCR1H, 8, 2, ReadWriteMode, EXTID3PCR1HBase> ;
    using PCS21 = EXTI_D3PCR1H_PCS21_Values<EXTI::D3PCR1H, 10, 2, ReadWriteMode, EXTID3PCR1HBase> ;
    using PCS25 = EXTI_D3PCR1H_PCS25_Values<EXTI::D3PCR1H, 18, 2, ReadWriteMode, EXTID3PCR1HBase> ;
    using FieldValues = EXTI_D3PCR1H_PCS25_Values<EXTI::D3PCR1H, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3PCR1HPack  = Register<0x58000014, 32, ReadWriteMode, EXTID3PCR1HBase, T...> ;

  struct EXTIRTSR2Base {} ;

  struct RTSR2 : public RegisterBase<0x58000020, 32, ReadWriteMode>
  {
    using TR49 = EXTI_RTSR2_TR49_Values<EXTI::RTSR2, 17, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using TR51 = EXTI_RTSR2_TR51_Values<EXTI::RTSR2, 19, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using FieldValues = EXTI_RTSR2_TR51_Values<EXTI::RTSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR2Pack  = Register<0x58000020, 32, ReadWriteMode, EXTIRTSR2Base, T...> ;

  struct EXTIFTSR2Base {} ;

  struct FTSR2 : public RegisterBase<0x58000024, 32, ReadWriteMode>
  {
    using TR49 = EXTI_FTSR2_TR49_Values<EXTI::FTSR2, 17, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using TR51 = EXTI_FTSR2_TR51_Values<EXTI::FTSR2, 19, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using FieldValues = EXTI_FTSR2_TR51_Values<EXTI::FTSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR2Pack  = Register<0x58000024, 32, ReadWriteMode, EXTIFTSR2Base, T...> ;

  struct EXTISWIER2Base {} ;

  struct SWIER2 : public RegisterBase<0x58000028, 32, ReadWriteMode>
  {
    using SWIER49 = EXTI_SWIER2_SWIER49_Values<EXTI::SWIER2, 17, 1, ReadWriteMode, EXTISWIER2Base> ;
    using SWIER51 = EXTI_SWIER2_SWIER51_Values<EXTI::SWIER2, 19, 1, ReadWriteMode, EXTISWIER2Base> ;
    using FieldValues = EXTI_SWIER2_SWIER51_Values<EXTI::SWIER2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER2Pack  = Register<0x58000028, 32, ReadWriteMode, EXTISWIER2Base, T...> ;

  struct EXTID3PMR2Base {} ;

  struct D3PMR2 : public RegisterBase<0x5800002C, 32, ReadWriteMode>
  {
    using MR34 = EXTI_D3PMR2_MR34_Values<EXTI::D3PMR2, 2, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using MR35 = EXTI_D3PMR2_MR35_Values<EXTI::D3PMR2, 3, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using MR41 = EXTI_D3PMR2_MR41_Values<EXTI::D3PMR2, 9, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using MR48 = EXTI_D3PMR2_MR48_Values<EXTI::D3PMR2, 16, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using MR49 = EXTI_D3PMR2_MR49_Values<EXTI::D3PMR2, 17, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using MR50 = EXTI_D3PMR2_MR50_Values<EXTI::D3PMR2, 18, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using MR51 = EXTI_D3PMR2_MR51_Values<EXTI::D3PMR2, 19, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using MR52 = EXTI_D3PMR2_MR52_Values<EXTI::D3PMR2, 20, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using MR53 = EXTI_D3PMR2_MR53_Values<EXTI::D3PMR2, 21, 1, ReadWriteMode, EXTID3PMR2Base> ;
    using FieldValues = EXTI_D3PMR2_MR53_Values<EXTI::D3PMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3PMR2Pack  = Register<0x5800002C, 32, ReadWriteMode, EXTID3PMR2Base, T...> ;

  struct EXTID3PCR2LBase {} ;

  struct D3PCR2L : public RegisterBase<0x58000030, 32, ReadWriteMode>
  {
    using PCS35 = EXTI_D3PCR2L_PCS35_Values<EXTI::D3PCR2L, 6, 2, ReadWriteMode, EXTID3PCR2LBase> ;
    using PCS34 = EXTI_D3PCR2L_PCS34_Values<EXTI::D3PCR2L, 4, 2, ReadWriteMode, EXTID3PCR2LBase> ;
    using PCS41 = EXTI_D3PCR2L_PCS41_Values<EXTI::D3PCR2L, 18, 2, ReadWriteMode, EXTID3PCR2LBase> ;
    using FieldValues = EXTI_D3PCR2L_PCS41_Values<EXTI::D3PCR2L, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3PCR2LPack  = Register<0x58000030, 32, ReadWriteMode, EXTID3PCR2LBase, T...> ;

  struct EXTID3PCR2HBase {} ;

  struct D3PCR2H : public RegisterBase<0x58000034, 32, ReadWriteMode>
  {
    using PCS48 = EXTI_D3PCR2H_PCS48_Values<EXTI::D3PCR2H, 0, 2, ReadWriteMode, EXTID3PCR2HBase> ;
    using PCS49 = EXTI_D3PCR2H_PCS49_Values<EXTI::D3PCR2H, 2, 2, ReadWriteMode, EXTID3PCR2HBase> ;
    using PCS50 = EXTI_D3PCR2H_PCS50_Values<EXTI::D3PCR2H, 4, 2, ReadWriteMode, EXTID3PCR2HBase> ;
    using PCS51 = EXTI_D3PCR2H_PCS51_Values<EXTI::D3PCR2H, 6, 2, ReadWriteMode, EXTID3PCR2HBase> ;
    using PCS52 = EXTI_D3PCR2H_PCS52_Values<EXTI::D3PCR2H, 8, 2, ReadWriteMode, EXTID3PCR2HBase> ;
    using PCS53 = EXTI_D3PCR2H_PCS53_Values<EXTI::D3PCR2H, 10, 2, ReadWriteMode, EXTID3PCR2HBase> ;
    using FieldValues = EXTI_D3PCR2H_PCS53_Values<EXTI::D3PCR2H, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3PCR2HPack  = Register<0x58000034, 32, ReadWriteMode, EXTID3PCR2HBase, T...> ;

  struct EXTIRTSR3Base {} ;

  struct RTSR3 : public RegisterBase<0x58000040, 32, ReadWriteMode>
  {
    using TR82 = EXTI_RTSR3_TR82_Values<EXTI::RTSR3, 18, 1, ReadWriteMode, EXTIRTSR3Base> ;
    using TR84 = EXTI_RTSR3_TR84_Values<EXTI::RTSR3, 20, 1, ReadWriteMode, EXTIRTSR3Base> ;
    using TR85 = EXTI_RTSR3_TR85_Values<EXTI::RTSR3, 21, 1, ReadWriteMode, EXTIRTSR3Base> ;
    using TR86 = EXTI_RTSR3_TR86_Values<EXTI::RTSR3, 22, 1, ReadWriteMode, EXTIRTSR3Base> ;
    using FieldValues = EXTI_RTSR3_TR86_Values<EXTI::RTSR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR3Pack  = Register<0x58000040, 32, ReadWriteMode, EXTIRTSR3Base, T...> ;

  struct EXTIFTSR3Base {} ;

  struct FTSR3 : public RegisterBase<0x58000044, 32, ReadWriteMode>
  {
    using TR82 = EXTI_FTSR3_TR82_Values<EXTI::FTSR3, 18, 1, ReadWriteMode, EXTIFTSR3Base> ;
    using TR84 = EXTI_FTSR3_TR84_Values<EXTI::FTSR3, 20, 1, ReadWriteMode, EXTIFTSR3Base> ;
    using TR85 = EXTI_FTSR3_TR85_Values<EXTI::FTSR3, 21, 1, ReadWriteMode, EXTIFTSR3Base> ;
    using TR86 = EXTI_FTSR3_TR86_Values<EXTI::FTSR3, 22, 1, ReadWriteMode, EXTIFTSR3Base> ;
    using FieldValues = EXTI_FTSR3_TR86_Values<EXTI::FTSR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR3Pack  = Register<0x58000044, 32, ReadWriteMode, EXTIFTSR3Base, T...> ;

  struct EXTISWIER3Base {} ;

  struct SWIER3 : public RegisterBase<0x58000048, 32, ReadWriteMode>
  {
    using SWIER82 = EXTI_SWIER3_SWIER82_Values<EXTI::SWIER3, 18, 1, ReadWriteMode, EXTISWIER3Base> ;
    using SWIER84 = EXTI_SWIER3_SWIER84_Values<EXTI::SWIER3, 20, 1, ReadWriteMode, EXTISWIER3Base> ;
    using SWIER85 = EXTI_SWIER3_SWIER85_Values<EXTI::SWIER3, 21, 1, ReadWriteMode, EXTISWIER3Base> ;
    using SWIER86 = EXTI_SWIER3_SWIER86_Values<EXTI::SWIER3, 22, 1, ReadWriteMode, EXTISWIER3Base> ;
    using FieldValues = EXTI_SWIER3_SWIER86_Values<EXTI::SWIER3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER3Pack  = Register<0x58000048, 32, ReadWriteMode, EXTISWIER3Base, T...> ;

  struct EXTID3PMR3Base {} ;

  struct D3PMR3 : public RegisterBase<0x5800004C, 32, ReadWriteMode>
  {
    using MR88 = EXTI_D3PMR3_MR88_Values<EXTI::D3PMR3, 24, 1, ReadWriteMode, EXTID3PMR3Base> ;
    using FieldValues = EXTI_D3PMR3_MR88_Values<EXTI::D3PMR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3PMR3Pack  = Register<0x5800004C, 32, ReadWriteMode, EXTID3PMR3Base, T...> ;

  struct EXTID3PCR3HBase {} ;

  struct D3PCR3H : public RegisterBase<0x58000054, 32, ReadWriteMode>
  {
    using PCS88 = EXTI_D3PCR3H_PCS88_Values<EXTI::D3PCR3H, 18, 2, ReadWriteMode, EXTID3PCR3HBase> ;
    using FieldValues = EXTI_D3PCR3H_PCS88_Values<EXTI::D3PCR3H, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using D3PCR3HPack  = Register<0x58000054, 32, ReadWriteMode, EXTID3PCR3HBase, T...> ;

  struct EXTICPUIMR1Base {} ;

  struct CPUIMR1 : public RegisterBase<0x58000080, 32, ReadWriteMode>
  {
    using MR0 = EXTI_CPUIMR1_MR0_Values<EXTI::CPUIMR1, 0, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR1 = EXTI_CPUIMR1_MR1_Values<EXTI::CPUIMR1, 1, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR2 = EXTI_CPUIMR1_MR2_Values<EXTI::CPUIMR1, 2, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR3 = EXTI_CPUIMR1_MR3_Values<EXTI::CPUIMR1, 3, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR4 = EXTI_CPUIMR1_MR4_Values<EXTI::CPUIMR1, 4, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR5 = EXTI_CPUIMR1_MR5_Values<EXTI::CPUIMR1, 5, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR6 = EXTI_CPUIMR1_MR6_Values<EXTI::CPUIMR1, 6, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR7 = EXTI_CPUIMR1_MR7_Values<EXTI::CPUIMR1, 7, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR8 = EXTI_CPUIMR1_MR8_Values<EXTI::CPUIMR1, 8, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR9 = EXTI_CPUIMR1_MR9_Values<EXTI::CPUIMR1, 9, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR10 = EXTI_CPUIMR1_MR10_Values<EXTI::CPUIMR1, 10, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR11 = EXTI_CPUIMR1_MR11_Values<EXTI::CPUIMR1, 11, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR12 = EXTI_CPUIMR1_MR12_Values<EXTI::CPUIMR1, 12, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR13 = EXTI_CPUIMR1_MR13_Values<EXTI::CPUIMR1, 13, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR14 = EXTI_CPUIMR1_MR14_Values<EXTI::CPUIMR1, 14, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR15 = EXTI_CPUIMR1_MR15_Values<EXTI::CPUIMR1, 15, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR16 = EXTI_CPUIMR1_MR16_Values<EXTI::CPUIMR1, 16, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR17 = EXTI_CPUIMR1_MR17_Values<EXTI::CPUIMR1, 17, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR18 = EXTI_CPUIMR1_MR18_Values<EXTI::CPUIMR1, 18, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR19 = EXTI_CPUIMR1_MR19_Values<EXTI::CPUIMR1, 19, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR20 = EXTI_CPUIMR1_MR20_Values<EXTI::CPUIMR1, 20, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR21 = EXTI_CPUIMR1_MR21_Values<EXTI::CPUIMR1, 21, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR22 = EXTI_CPUIMR1_MR22_Values<EXTI::CPUIMR1, 22, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR23 = EXTI_CPUIMR1_MR23_Values<EXTI::CPUIMR1, 23, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR24 = EXTI_CPUIMR1_MR24_Values<EXTI::CPUIMR1, 24, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR25 = EXTI_CPUIMR1_MR25_Values<EXTI::CPUIMR1, 25, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR26 = EXTI_CPUIMR1_MR26_Values<EXTI::CPUIMR1, 26, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR27 = EXTI_CPUIMR1_MR27_Values<EXTI::CPUIMR1, 27, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR28 = EXTI_CPUIMR1_MR28_Values<EXTI::CPUIMR1, 28, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR29 = EXTI_CPUIMR1_MR29_Values<EXTI::CPUIMR1, 29, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR30 = EXTI_CPUIMR1_MR30_Values<EXTI::CPUIMR1, 30, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using MR31 = EXTI_CPUIMR1_MR31_Values<EXTI::CPUIMR1, 31, 1, ReadWriteMode, EXTICPUIMR1Base> ;
    using FieldValues = EXTI_CPUIMR1_MR31_Values<EXTI::CPUIMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUIMR1Pack  = Register<0x58000080, 32, ReadWriteMode, EXTICPUIMR1Base, T...> ;

  struct EXTICPUEMR1Base {} ;

  struct CPUEMR1 : public RegisterBase<0x58000084, 32, ReadWriteMode>
  {
    using MR0 = EXTI_CPUEMR1_MR0_Values<EXTI::CPUEMR1, 0, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR1 = EXTI_CPUEMR1_MR1_Values<EXTI::CPUEMR1, 1, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR2 = EXTI_CPUEMR1_MR2_Values<EXTI::CPUEMR1, 2, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR3 = EXTI_CPUEMR1_MR3_Values<EXTI::CPUEMR1, 3, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR4 = EXTI_CPUEMR1_MR4_Values<EXTI::CPUEMR1, 4, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR5 = EXTI_CPUEMR1_MR5_Values<EXTI::CPUEMR1, 5, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR6 = EXTI_CPUEMR1_MR6_Values<EXTI::CPUEMR1, 6, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR7 = EXTI_CPUEMR1_MR7_Values<EXTI::CPUEMR1, 7, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR8 = EXTI_CPUEMR1_MR8_Values<EXTI::CPUEMR1, 8, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR9 = EXTI_CPUEMR1_MR9_Values<EXTI::CPUEMR1, 9, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR10 = EXTI_CPUEMR1_MR10_Values<EXTI::CPUEMR1, 10, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR11 = EXTI_CPUEMR1_MR11_Values<EXTI::CPUEMR1, 11, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR12 = EXTI_CPUEMR1_MR12_Values<EXTI::CPUEMR1, 12, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR13 = EXTI_CPUEMR1_MR13_Values<EXTI::CPUEMR1, 13, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR14 = EXTI_CPUEMR1_MR14_Values<EXTI::CPUEMR1, 14, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR15 = EXTI_CPUEMR1_MR15_Values<EXTI::CPUEMR1, 15, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR16 = EXTI_CPUEMR1_MR16_Values<EXTI::CPUEMR1, 16, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR17 = EXTI_CPUEMR1_MR17_Values<EXTI::CPUEMR1, 17, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR18 = EXTI_CPUEMR1_MR18_Values<EXTI::CPUEMR1, 18, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR19 = EXTI_CPUEMR1_MR19_Values<EXTI::CPUEMR1, 19, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR20 = EXTI_CPUEMR1_MR20_Values<EXTI::CPUEMR1, 20, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR21 = EXTI_CPUEMR1_MR21_Values<EXTI::CPUEMR1, 21, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR22 = EXTI_CPUEMR1_MR22_Values<EXTI::CPUEMR1, 22, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR23 = EXTI_CPUEMR1_MR23_Values<EXTI::CPUEMR1, 23, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR24 = EXTI_CPUEMR1_MR24_Values<EXTI::CPUEMR1, 24, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR25 = EXTI_CPUEMR1_MR25_Values<EXTI::CPUEMR1, 25, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR26 = EXTI_CPUEMR1_MR26_Values<EXTI::CPUEMR1, 26, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR27 = EXTI_CPUEMR1_MR27_Values<EXTI::CPUEMR1, 27, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR28 = EXTI_CPUEMR1_MR28_Values<EXTI::CPUEMR1, 28, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR29 = EXTI_CPUEMR1_MR29_Values<EXTI::CPUEMR1, 29, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR30 = EXTI_CPUEMR1_MR30_Values<EXTI::CPUEMR1, 30, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using MR31 = EXTI_CPUEMR1_MR31_Values<EXTI::CPUEMR1, 31, 1, ReadWriteMode, EXTICPUEMR1Base> ;
    using FieldValues = EXTI_CPUEMR1_MR31_Values<EXTI::CPUEMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUEMR1Pack  = Register<0x58000084, 32, ReadWriteMode, EXTICPUEMR1Base, T...> ;

  struct EXTICPUPR1Base {} ;

  struct CPUPR1 : public RegisterBase<0x58000088, 32, ReadWriteMode>
  {
    using PR0 = EXTI_CPUPR1_PR0_Values<EXTI::CPUPR1, 0, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR1 = EXTI_CPUPR1_PR1_Values<EXTI::CPUPR1, 1, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR2 = EXTI_CPUPR1_PR2_Values<EXTI::CPUPR1, 2, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR3 = EXTI_CPUPR1_PR3_Values<EXTI::CPUPR1, 3, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR4 = EXTI_CPUPR1_PR4_Values<EXTI::CPUPR1, 4, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR5 = EXTI_CPUPR1_PR5_Values<EXTI::CPUPR1, 5, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR6 = EXTI_CPUPR1_PR6_Values<EXTI::CPUPR1, 6, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR7 = EXTI_CPUPR1_PR7_Values<EXTI::CPUPR1, 7, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR8 = EXTI_CPUPR1_PR8_Values<EXTI::CPUPR1, 8, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR9 = EXTI_CPUPR1_PR9_Values<EXTI::CPUPR1, 9, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR10 = EXTI_CPUPR1_PR10_Values<EXTI::CPUPR1, 10, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR11 = EXTI_CPUPR1_PR11_Values<EXTI::CPUPR1, 11, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR12 = EXTI_CPUPR1_PR12_Values<EXTI::CPUPR1, 12, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR13 = EXTI_CPUPR1_PR13_Values<EXTI::CPUPR1, 13, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR14 = EXTI_CPUPR1_PR14_Values<EXTI::CPUPR1, 14, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR15 = EXTI_CPUPR1_PR15_Values<EXTI::CPUPR1, 15, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR16 = EXTI_CPUPR1_PR16_Values<EXTI::CPUPR1, 16, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR17 = EXTI_CPUPR1_PR17_Values<EXTI::CPUPR1, 17, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR18 = EXTI_CPUPR1_PR18_Values<EXTI::CPUPR1, 18, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR19 = EXTI_CPUPR1_PR19_Values<EXTI::CPUPR1, 19, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR20 = EXTI_CPUPR1_PR20_Values<EXTI::CPUPR1, 20, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using PR21 = EXTI_CPUPR1_PR21_Values<EXTI::CPUPR1, 21, 1, ReadWriteMode, EXTICPUPR1Base> ;
    using FieldValues = EXTI_CPUPR1_PR21_Values<EXTI::CPUPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUPR1Pack  = Register<0x58000088, 32, ReadWriteMode, EXTICPUPR1Base, T...> ;

  struct EXTICPUIMR2Base {} ;

  struct CPUIMR2 : public RegisterBase<0x58000090, 32, ReadWriteMode>
  {
    using MR0 = EXTI_CPUIMR2_MR0_Values<EXTI::CPUIMR2, 0, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR1 = EXTI_CPUIMR2_MR1_Values<EXTI::CPUIMR2, 1, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR2 = EXTI_CPUIMR2_MR2_Values<EXTI::CPUIMR2, 2, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR3 = EXTI_CPUIMR2_MR3_Values<EXTI::CPUIMR2, 3, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR4 = EXTI_CPUIMR2_MR4_Values<EXTI::CPUIMR2, 4, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR5 = EXTI_CPUIMR2_MR5_Values<EXTI::CPUIMR2, 5, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR6 = EXTI_CPUIMR2_MR6_Values<EXTI::CPUIMR2, 6, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR7 = EXTI_CPUIMR2_MR7_Values<EXTI::CPUIMR2, 7, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR8 = EXTI_CPUIMR2_MR8_Values<EXTI::CPUIMR2, 8, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR9 = EXTI_CPUIMR2_MR9_Values<EXTI::CPUIMR2, 9, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR10 = EXTI_CPUIMR2_MR10_Values<EXTI::CPUIMR2, 10, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR11 = EXTI_CPUIMR2_MR11_Values<EXTI::CPUIMR2, 11, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR12 = EXTI_CPUIMR2_MR12_Values<EXTI::CPUIMR2, 12, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR14 = EXTI_CPUIMR2_MR14_Values<EXTI::CPUIMR2, 14, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR15 = EXTI_CPUIMR2_MR15_Values<EXTI::CPUIMR2, 15, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR16 = EXTI_CPUIMR2_MR16_Values<EXTI::CPUIMR2, 16, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR17 = EXTI_CPUIMR2_MR17_Values<EXTI::CPUIMR2, 17, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR18 = EXTI_CPUIMR2_MR18_Values<EXTI::CPUIMR2, 18, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR19 = EXTI_CPUIMR2_MR19_Values<EXTI::CPUIMR2, 19, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR20 = EXTI_CPUIMR2_MR20_Values<EXTI::CPUIMR2, 20, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR21 = EXTI_CPUIMR2_MR21_Values<EXTI::CPUIMR2, 21, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR22 = EXTI_CPUIMR2_MR22_Values<EXTI::CPUIMR2, 22, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR23 = EXTI_CPUIMR2_MR23_Values<EXTI::CPUIMR2, 23, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR24 = EXTI_CPUIMR2_MR24_Values<EXTI::CPUIMR2, 24, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR25 = EXTI_CPUIMR2_MR25_Values<EXTI::CPUIMR2, 25, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR26 = EXTI_CPUIMR2_MR26_Values<EXTI::CPUIMR2, 26, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR27 = EXTI_CPUIMR2_MR27_Values<EXTI::CPUIMR2, 27, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR28 = EXTI_CPUIMR2_MR28_Values<EXTI::CPUIMR2, 28, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR29 = EXTI_CPUIMR2_MR29_Values<EXTI::CPUIMR2, 29, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR30 = EXTI_CPUIMR2_MR30_Values<EXTI::CPUIMR2, 30, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using MR31 = EXTI_CPUIMR2_MR31_Values<EXTI::CPUIMR2, 31, 1, ReadWriteMode, EXTICPUIMR2Base> ;
    using FieldValues = EXTI_CPUIMR2_MR31_Values<EXTI::CPUIMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUIMR2Pack  = Register<0x58000090, 32, ReadWriteMode, EXTICPUIMR2Base, T...> ;

  struct EXTICPUEMR2Base {} ;

  struct CPUEMR2 : public RegisterBase<0x58000094, 32, ReadWriteMode>
  {
    using MR32 = EXTI_CPUEMR2_MR32_Values<EXTI::CPUEMR2, 0, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR33 = EXTI_CPUEMR2_MR33_Values<EXTI::CPUEMR2, 1, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR34 = EXTI_CPUEMR2_MR34_Values<EXTI::CPUEMR2, 2, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR35 = EXTI_CPUEMR2_MR35_Values<EXTI::CPUEMR2, 3, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR36 = EXTI_CPUEMR2_MR36_Values<EXTI::CPUEMR2, 4, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR37 = EXTI_CPUEMR2_MR37_Values<EXTI::CPUEMR2, 5, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR38 = EXTI_CPUEMR2_MR38_Values<EXTI::CPUEMR2, 6, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR39 = EXTI_CPUEMR2_MR39_Values<EXTI::CPUEMR2, 7, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR40 = EXTI_CPUEMR2_MR40_Values<EXTI::CPUEMR2, 8, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR41 = EXTI_CPUEMR2_MR41_Values<EXTI::CPUEMR2, 9, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR42 = EXTI_CPUEMR2_MR42_Values<EXTI::CPUEMR2, 10, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR43 = EXTI_CPUEMR2_MR43_Values<EXTI::CPUEMR2, 11, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR44 = EXTI_CPUEMR2_MR44_Values<EXTI::CPUEMR2, 12, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR46 = EXTI_CPUEMR2_MR46_Values<EXTI::CPUEMR2, 14, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR47 = EXTI_CPUEMR2_MR47_Values<EXTI::CPUEMR2, 15, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR48 = EXTI_CPUEMR2_MR48_Values<EXTI::CPUEMR2, 16, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR49 = EXTI_CPUEMR2_MR49_Values<EXTI::CPUEMR2, 17, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR50 = EXTI_CPUEMR2_MR50_Values<EXTI::CPUEMR2, 18, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR51 = EXTI_CPUEMR2_MR51_Values<EXTI::CPUEMR2, 19, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR52 = EXTI_CPUEMR2_MR52_Values<EXTI::CPUEMR2, 20, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR53 = EXTI_CPUEMR2_MR53_Values<EXTI::CPUEMR2, 21, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR54 = EXTI_CPUEMR2_MR54_Values<EXTI::CPUEMR2, 22, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR55 = EXTI_CPUEMR2_MR55_Values<EXTI::CPUEMR2, 23, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR56 = EXTI_CPUEMR2_MR56_Values<EXTI::CPUEMR2, 24, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR57 = EXTI_CPUEMR2_MR57_Values<EXTI::CPUEMR2, 25, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR58 = EXTI_CPUEMR2_MR58_Values<EXTI::CPUEMR2, 26, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR59 = EXTI_CPUEMR2_MR59_Values<EXTI::CPUEMR2, 27, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR60 = EXTI_CPUEMR2_MR60_Values<EXTI::CPUEMR2, 28, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR61 = EXTI_CPUEMR2_MR61_Values<EXTI::CPUEMR2, 29, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR62 = EXTI_CPUEMR2_MR62_Values<EXTI::CPUEMR2, 30, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using MR63 = EXTI_CPUEMR2_MR63_Values<EXTI::CPUEMR2, 31, 1, ReadWriteMode, EXTICPUEMR2Base> ;
    using FieldValues = EXTI_CPUEMR2_MR63_Values<EXTI::CPUEMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUEMR2Pack  = Register<0x58000094, 32, ReadWriteMode, EXTICPUEMR2Base, T...> ;

  struct EXTICPUPR2Base {} ;

  struct CPUPR2 : public RegisterBase<0x58000098, 32, ReadMode>
  {
    using PR49 = EXTI_CPUPR2_PR49_Values<EXTI::CPUPR2, 17, 1, ReadMode, EXTICPUPR2Base> ;
    using PR51 = EXTI_CPUPR2_PR51_Values<EXTI::CPUPR2, 19, 1, ReadMode, EXTICPUPR2Base> ;
    using FieldValues = EXTI_CPUPR2_PR51_Values<EXTI::CPUPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUPR2Pack  = Register<0x58000098, 32, ReadMode, EXTICPUPR2Base, T...> ;

  struct EXTICPUIMR3Base {} ;

  struct CPUIMR3 : public RegisterBase<0x580000A0, 32, ReadWriteMode>
  {
    using MR64 = EXTI_CPUIMR3_MR64_Values<EXTI::CPUIMR3, 0, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR65 = EXTI_CPUIMR3_MR65_Values<EXTI::CPUIMR3, 1, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR66 = EXTI_CPUIMR3_MR66_Values<EXTI::CPUIMR3, 2, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR67 = EXTI_CPUIMR3_MR67_Values<EXTI::CPUIMR3, 3, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR68 = EXTI_CPUIMR3_MR68_Values<EXTI::CPUIMR3, 4, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR69 = EXTI_CPUIMR3_MR69_Values<EXTI::CPUIMR3, 5, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR70 = EXTI_CPUIMR3_MR70_Values<EXTI::CPUIMR3, 6, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR71 = EXTI_CPUIMR3_MR71_Values<EXTI::CPUIMR3, 7, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR72 = EXTI_CPUIMR3_MR72_Values<EXTI::CPUIMR3, 8, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR73 = EXTI_CPUIMR3_MR73_Values<EXTI::CPUIMR3, 9, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR74 = EXTI_CPUIMR3_MR74_Values<EXTI::CPUIMR3, 10, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR75 = EXTI_CPUIMR3_MR75_Values<EXTI::CPUIMR3, 11, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR76 = EXTI_CPUIMR3_MR76_Values<EXTI::CPUIMR3, 12, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR77 = EXTI_CPUIMR3_MR77_Values<EXTI::CPUIMR3, 13, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR78 = EXTI_CPUIMR3_MR78_Values<EXTI::CPUIMR3, 14, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR79 = EXTI_CPUIMR3_MR79_Values<EXTI::CPUIMR3, 15, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR80 = EXTI_CPUIMR3_MR80_Values<EXTI::CPUIMR3, 16, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR82 = EXTI_CPUIMR3_MR82_Values<EXTI::CPUIMR3, 18, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR84 = EXTI_CPUIMR3_MR84_Values<EXTI::CPUIMR3, 20, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR85 = EXTI_CPUIMR3_MR85_Values<EXTI::CPUIMR3, 21, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR86 = EXTI_CPUIMR3_MR86_Values<EXTI::CPUIMR3, 22, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR87 = EXTI_CPUIMR3_MR87_Values<EXTI::CPUIMR3, 23, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using MR88 = EXTI_CPUIMR3_MR88_Values<EXTI::CPUIMR3, 24, 1, ReadWriteMode, EXTICPUIMR3Base> ;
    using FieldValues = EXTI_CPUIMR3_MR88_Values<EXTI::CPUIMR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUIMR3Pack  = Register<0x580000A0, 32, ReadWriteMode, EXTICPUIMR3Base, T...> ;

  struct EXTICPUEMR3Base {} ;

  struct CPUEMR3 : public RegisterBase<0x580000A4, 32, ReadWriteMode>
  {
    using MR64 = EXTI_CPUEMR3_MR64_Values<EXTI::CPUEMR3, 0, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR65 = EXTI_CPUEMR3_MR65_Values<EXTI::CPUEMR3, 1, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR66 = EXTI_CPUEMR3_MR66_Values<EXTI::CPUEMR3, 2, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR67 = EXTI_CPUEMR3_MR67_Values<EXTI::CPUEMR3, 3, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR68 = EXTI_CPUEMR3_MR68_Values<EXTI::CPUEMR3, 4, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR69 = EXTI_CPUEMR3_MR69_Values<EXTI::CPUEMR3, 5, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR70 = EXTI_CPUEMR3_MR70_Values<EXTI::CPUEMR3, 6, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR71 = EXTI_CPUEMR3_MR71_Values<EXTI::CPUEMR3, 7, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR72 = EXTI_CPUEMR3_MR72_Values<EXTI::CPUEMR3, 8, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR73 = EXTI_CPUEMR3_MR73_Values<EXTI::CPUEMR3, 9, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR74 = EXTI_CPUEMR3_MR74_Values<EXTI::CPUEMR3, 10, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR75 = EXTI_CPUEMR3_MR75_Values<EXTI::CPUEMR3, 11, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR76 = EXTI_CPUEMR3_MR76_Values<EXTI::CPUEMR3, 12, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR77 = EXTI_CPUEMR3_MR77_Values<EXTI::CPUEMR3, 13, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR78 = EXTI_CPUEMR3_MR78_Values<EXTI::CPUEMR3, 14, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR79 = EXTI_CPUEMR3_MR79_Values<EXTI::CPUEMR3, 15, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR80 = EXTI_CPUEMR3_MR80_Values<EXTI::CPUEMR3, 16, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR82 = EXTI_CPUEMR3_MR82_Values<EXTI::CPUEMR3, 18, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR84 = EXTI_CPUEMR3_MR84_Values<EXTI::CPUEMR3, 20, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR85 = EXTI_CPUEMR3_MR85_Values<EXTI::CPUEMR3, 21, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR86 = EXTI_CPUEMR3_MR86_Values<EXTI::CPUEMR3, 22, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR87 = EXTI_CPUEMR3_MR87_Values<EXTI::CPUEMR3, 23, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using MR88 = EXTI_CPUEMR3_MR88_Values<EXTI::CPUEMR3, 24, 1, ReadWriteMode, EXTICPUEMR3Base> ;
    using FieldValues = EXTI_CPUEMR3_MR88_Values<EXTI::CPUEMR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUEMR3Pack  = Register<0x580000A4, 32, ReadWriteMode, EXTICPUEMR3Base, T...> ;

  struct EXTICPUPR3Base {} ;

  struct CPUPR3 : public RegisterBase<0x580000A8, 32, ReadMode>
  {
    using PR82 = EXTI_CPUPR3_PR82_Values<EXTI::CPUPR3, 18, 1, ReadMode, EXTICPUPR3Base> ;
    using PR84 = EXTI_CPUPR3_PR84_Values<EXTI::CPUPR3, 20, 1, ReadMode, EXTICPUPR3Base> ;
    using PR85 = EXTI_CPUPR3_PR85_Values<EXTI::CPUPR3, 21, 1, ReadMode, EXTICPUPR3Base> ;
    using PR86 = EXTI_CPUPR3_PR86_Values<EXTI::CPUPR3, 22, 1, ReadMode, EXTICPUPR3Base> ;
    using FieldValues = EXTI_CPUPR3_PR86_Values<EXTI::CPUPR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CPUPR3Pack  = Register<0x580000A8, 32, ReadMode, EXTICPUPR3Base, T...> ;

} ;

#endif //#if !defined(EXTIREGISTERS_HPP)
