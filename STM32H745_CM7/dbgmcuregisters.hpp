/*******************************************************************************
* Filename      : dbgmcuregisters.hpp
*
* Details       : Microcontroller Debug Unit. This header file is auto-generated
*                 for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DBGMCUREGISTERS_HPP)
#define DBGMCUREGISTERS_HPP

#include "dbgmcufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DBGMCU
{
  struct DBGMCUIDCBase {} ;

  struct IDC : public RegisterBase<0x5C001000, 32, ReadMode>
  {
    using DEV_ID = DBGMCU_IDC_DEV_ID_Values<DBGMCU::IDC, 0, 12, ReadMode, DBGMCUIDCBase> ;
    using REV_ID = DBGMCU_IDC_REV_ID_Values<DBGMCU::IDC, 16, 16, ReadMode, DBGMCUIDCBase> ;
    using FieldValues = DBGMCU_IDC_REV_ID_Values<DBGMCU::IDC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDCPack  = Register<0x5C001000, 32, ReadMode, DBGMCUIDCBase, T...> ;

  struct DBGMCUCRBase {} ;

  struct CR : public RegisterBase<0x5C001004, 32, ReadWriteMode>
  {
    using DBGSLPD1 = DBGMCU_CR_DBGSLPD1_Values<DBGMCU::CR, 0, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBGSTPD1 = DBGMCU_CR_DBGSTPD1_Values<DBGMCU::CR, 1, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBGSTBD1 = DBGMCU_CR_DBGSTBD1_Values<DBGMCU::CR, 2, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBGSLPD2 = DBGMCU_CR_DBGSLPD2_Values<DBGMCU::CR, 3, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBGSTPD2 = DBGMCU_CR_DBGSTPD2_Values<DBGMCU::CR, 4, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBGSTBD2 = DBGMCU_CR_DBGSTBD2_Values<DBGMCU::CR, 5, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBGSTPD3 = DBGMCU_CR_DBGSTPD3_Values<DBGMCU::CR, 7, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBGSTBD3 = DBGMCU_CR_DBGSTBD3_Values<DBGMCU::CR, 8, 1, ReadWriteMode, DBGMCUCRBase> ;
    using TRACECLKEN = DBGMCU_CR_TRACECLKEN_Values<DBGMCU::CR, 20, 1, ReadWriteMode, DBGMCUCRBase> ;
    using D1DBGCKEN = DBGMCU_CR_D1DBGCKEN_Values<DBGMCU::CR, 21, 1, ReadWriteMode, DBGMCUCRBase> ;
    using D3DBGCKEN = DBGMCU_CR_D3DBGCKEN_Values<DBGMCU::CR, 22, 1, ReadWriteMode, DBGMCUCRBase> ;
    using TRGOEN = DBGMCU_CR_TRGOEN_Values<DBGMCU::CR, 28, 1, ReadWriteMode, DBGMCUCRBase> ;
    using FieldValues = DBGMCU_CR_TRGOEN_Values<DBGMCU::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x5C001004, 32, ReadWriteMode, DBGMCUCRBase, T...> ;

  struct DBGMCUAPB3FZ1Base {} ;

  struct APB3FZ1 : public RegisterBase<0x5C001034, 32, ReadWriteMode>
  {
    using WWDG1 = DBGMCU_APB3FZ1_WWDG1_Values<DBGMCU::APB3FZ1, 6, 1, ReadWriteMode, DBGMCUAPB3FZ1Base> ;
    using FieldValues = DBGMCU_APB3FZ1_WWDG1_Values<DBGMCU::APB3FZ1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB3FZ1Pack  = Register<0x5C001034, 32, ReadWriteMode, DBGMCUAPB3FZ1Base, T...> ;

  struct DBGMCUAPB3FZ2Base {} ;

  struct APB3FZ2 : public RegisterBase<0x5C001038, 32, ReadWriteMode>
  {
    using WWDG1 = DBGMCU_APB3FZ2_WWDG1_Values<DBGMCU::APB3FZ2, 6, 1, ReadWriteMode, DBGMCUAPB3FZ2Base> ;
    using FieldValues = DBGMCU_APB3FZ2_WWDG1_Values<DBGMCU::APB3FZ2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB3FZ2Pack  = Register<0x5C001038, 32, ReadWriteMode, DBGMCUAPB3FZ2Base, T...> ;

  struct DBGMCUAPB1LFZ1Base {} ;

  struct APB1LFZ1 : public RegisterBase<0x5C00103C, 32, ReadWriteMode>
  {
    using DBG_TIM2 = DBGMCU_APB1LFZ1_DBG_TIM2_Values<DBGMCU::APB1LFZ1, 0, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_TIM3 = DBGMCU_APB1LFZ1_DBG_TIM3_Values<DBGMCU::APB1LFZ1, 1, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_TIM4 = DBGMCU_APB1LFZ1_DBG_TIM4_Values<DBGMCU::APB1LFZ1, 2, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_TIM5 = DBGMCU_APB1LFZ1_DBG_TIM5_Values<DBGMCU::APB1LFZ1, 3, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_TIM6 = DBGMCU_APB1LFZ1_DBG_TIM6_Values<DBGMCU::APB1LFZ1, 4, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_TIM7 = DBGMCU_APB1LFZ1_DBG_TIM7_Values<DBGMCU::APB1LFZ1, 5, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_TIM12 = DBGMCU_APB1LFZ1_DBG_TIM12_Values<DBGMCU::APB1LFZ1, 6, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_TIM13 = DBGMCU_APB1LFZ1_DBG_TIM13_Values<DBGMCU::APB1LFZ1, 7, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_TIM14 = DBGMCU_APB1LFZ1_DBG_TIM14_Values<DBGMCU::APB1LFZ1, 8, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_LPTIM1 = DBGMCU_APB1LFZ1_DBG_LPTIM1_Values<DBGMCU::APB1LFZ1, 9, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_WWDG2 = DBGMCU_APB1LFZ1_DBG_WWDG2_Values<DBGMCU::APB1LFZ1, 11, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_I2C1 = DBGMCU_APB1LFZ1_DBG_I2C1_Values<DBGMCU::APB1LFZ1, 21, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_I2C2 = DBGMCU_APB1LFZ1_DBG_I2C2_Values<DBGMCU::APB1LFZ1, 22, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using DBG_I2C3 = DBGMCU_APB1LFZ1_DBG_I2C3_Values<DBGMCU::APB1LFZ1, 23, 1, ReadWriteMode, DBGMCUAPB1LFZ1Base> ;
    using FieldValues = DBGMCU_APB1LFZ1_DBG_I2C3_Values<DBGMCU::APB1LFZ1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1LFZ1Pack  = Register<0x5C00103C, 32, ReadWriteMode, DBGMCUAPB1LFZ1Base, T...> ;

  struct DBGMCUAPB1LFZ2Base {} ;

  struct APB1LFZ2 : public RegisterBase<0x5C001040, 32, ReadWriteMode>
  {
    using DBG_TIM2 = DBGMCU_APB1LFZ2_DBG_TIM2_Values<DBGMCU::APB1LFZ2, 0, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_TIM3 = DBGMCU_APB1LFZ2_DBG_TIM3_Values<DBGMCU::APB1LFZ2, 1, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_TIM4 = DBGMCU_APB1LFZ2_DBG_TIM4_Values<DBGMCU::APB1LFZ2, 2, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_TIM5 = DBGMCU_APB1LFZ2_DBG_TIM5_Values<DBGMCU::APB1LFZ2, 3, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_TIM6 = DBGMCU_APB1LFZ2_DBG_TIM6_Values<DBGMCU::APB1LFZ2, 4, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_TIM7 = DBGMCU_APB1LFZ2_DBG_TIM7_Values<DBGMCU::APB1LFZ2, 5, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_TIM12 = DBGMCU_APB1LFZ2_DBG_TIM12_Values<DBGMCU::APB1LFZ2, 6, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_TIM13 = DBGMCU_APB1LFZ2_DBG_TIM13_Values<DBGMCU::APB1LFZ2, 7, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_TIM14 = DBGMCU_APB1LFZ2_DBG_TIM14_Values<DBGMCU::APB1LFZ2, 8, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_LPTIM1 = DBGMCU_APB1LFZ2_DBG_LPTIM1_Values<DBGMCU::APB1LFZ2, 9, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_WWDG2 = DBGMCU_APB1LFZ2_DBG_WWDG2_Values<DBGMCU::APB1LFZ2, 11, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_I2C1 = DBGMCU_APB1LFZ2_DBG_I2C1_Values<DBGMCU::APB1LFZ2, 21, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_I2C2 = DBGMCU_APB1LFZ2_DBG_I2C2_Values<DBGMCU::APB1LFZ2, 22, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using DBG_I2C3 = DBGMCU_APB1LFZ2_DBG_I2C3_Values<DBGMCU::APB1LFZ2, 23, 1, ReadWriteMode, DBGMCUAPB1LFZ2Base> ;
    using FieldValues = DBGMCU_APB1LFZ2_DBG_I2C3_Values<DBGMCU::APB1LFZ2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1LFZ2Pack  = Register<0x5C001040, 32, ReadWriteMode, DBGMCUAPB1LFZ2Base, T...> ;

  struct DBGMCUAPB2FZ1Base {} ;

  struct APB2FZ1 : public RegisterBase<0x5C00104C, 32, ReadWriteMode>
  {
    using DBG_TIM1 = DBGMCU_APB2FZ1_DBG_TIM1_Values<DBGMCU::APB2FZ1, 0, 1, ReadWriteMode, DBGMCUAPB2FZ1Base> ;
    using DBG_TIM8 = DBGMCU_APB2FZ1_DBG_TIM8_Values<DBGMCU::APB2FZ1, 1, 1, ReadWriteMode, DBGMCUAPB2FZ1Base> ;
    using DBG_TIM15 = DBGMCU_APB2FZ1_DBG_TIM15_Values<DBGMCU::APB2FZ1, 16, 1, ReadWriteMode, DBGMCUAPB2FZ1Base> ;
    using DBG_TIM16 = DBGMCU_APB2FZ1_DBG_TIM16_Values<DBGMCU::APB2FZ1, 17, 1, ReadWriteMode, DBGMCUAPB2FZ1Base> ;
    using DBG_TIM17 = DBGMCU_APB2FZ1_DBG_TIM17_Values<DBGMCU::APB2FZ1, 18, 1, ReadWriteMode, DBGMCUAPB2FZ1Base> ;
    using DBG_HRTIM = DBGMCU_APB2FZ1_DBG_HRTIM_Values<DBGMCU::APB2FZ1, 29, 1, ReadWriteMode, DBGMCUAPB2FZ1Base> ;
    using FieldValues = DBGMCU_APB2FZ1_DBG_HRTIM_Values<DBGMCU::APB2FZ1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2FZ1Pack  = Register<0x5C00104C, 32, ReadWriteMode, DBGMCUAPB2FZ1Base, T...> ;

  struct DBGMCUAPB2FZ2Base {} ;

  struct APB2FZ2 : public RegisterBase<0x5C001050, 32, ReadWriteMode>
  {
    using DBG_TIM1 = DBGMCU_APB2FZ2_DBG_TIM1_Values<DBGMCU::APB2FZ2, 0, 1, ReadWriteMode, DBGMCUAPB2FZ2Base> ;
    using DBG_TIM8 = DBGMCU_APB2FZ2_DBG_TIM8_Values<DBGMCU::APB2FZ2, 1, 1, ReadWriteMode, DBGMCUAPB2FZ2Base> ;
    using DBG_TIM15 = DBGMCU_APB2FZ2_DBG_TIM15_Values<DBGMCU::APB2FZ2, 16, 1, ReadWriteMode, DBGMCUAPB2FZ2Base> ;
    using DBG_TIM16 = DBGMCU_APB2FZ2_DBG_TIM16_Values<DBGMCU::APB2FZ2, 17, 1, ReadWriteMode, DBGMCUAPB2FZ2Base> ;
    using DBG_TIM17 = DBGMCU_APB2FZ2_DBG_TIM17_Values<DBGMCU::APB2FZ2, 18, 1, ReadWriteMode, DBGMCUAPB2FZ2Base> ;
    using DBG_HRTIM = DBGMCU_APB2FZ2_DBG_HRTIM_Values<DBGMCU::APB2FZ2, 29, 1, ReadWriteMode, DBGMCUAPB2FZ2Base> ;
    using FieldValues = DBGMCU_APB2FZ2_DBG_HRTIM_Values<DBGMCU::APB2FZ2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2FZ2Pack  = Register<0x5C001050, 32, ReadWriteMode, DBGMCUAPB2FZ2Base, T...> ;

  struct DBGMCUAPB4FZ1Base {} ;

  struct APB4FZ1 : public RegisterBase<0x5C001054, 32, ReadWriteMode>
  {
    using DBG_I2C4 = DBGMCU_APB4FZ1_DBG_I2C4_Values<DBGMCU::APB4FZ1, 7, 1, ReadWriteMode, DBGMCUAPB4FZ1Base> ;
    using DBG_LPTIM2 = DBGMCU_APB4FZ1_DBG_LPTIM2_Values<DBGMCU::APB4FZ1, 9, 1, ReadWriteMode, DBGMCUAPB4FZ1Base> ;
    using DBG_LPTIM3 = DBGMCU_APB4FZ1_DBG_LPTIM3_Values<DBGMCU::APB4FZ1, 10, 1, ReadWriteMode, DBGMCUAPB4FZ1Base> ;
    using DBG_LPTIM4 = DBGMCU_APB4FZ1_DBG_LPTIM4_Values<DBGMCU::APB4FZ1, 11, 1, ReadWriteMode, DBGMCUAPB4FZ1Base> ;
    using DBG_LPTIM5 = DBGMCU_APB4FZ1_DBG_LPTIM5_Values<DBGMCU::APB4FZ1, 12, 1, ReadWriteMode, DBGMCUAPB4FZ1Base> ;
    using DBG_RTC = DBGMCU_APB4FZ1_DBG_RTC_Values<DBGMCU::APB4FZ1, 16, 1, ReadWriteMode, DBGMCUAPB4FZ1Base> ;
    using DBG_WDGLSD1 = DBGMCU_APB4FZ1_DBG_WDGLSD1_Values<DBGMCU::APB4FZ1, 18, 1, ReadWriteMode, DBGMCUAPB4FZ1Base> ;
    using DBG_WDGLSD2 = DBGMCU_APB4FZ1_DBG_WDGLSD2_Values<DBGMCU::APB4FZ1, 19, 1, ReadWriteMode, DBGMCUAPB4FZ1Base> ;
    using FieldValues = DBGMCU_APB4FZ1_DBG_WDGLSD2_Values<DBGMCU::APB4FZ1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB4FZ1Pack  = Register<0x5C001054, 32, ReadWriteMode, DBGMCUAPB4FZ1Base, T...> ;

  struct DBGMCUAPB4FZ2Base {} ;

  struct APB4FZ2 : public RegisterBase<0x5C001058, 32, ReadWriteMode>
  {
    using DBG_I2C4 = DBGMCU_APB4FZ2_DBG_I2C4_Values<DBGMCU::APB4FZ2, 7, 1, ReadWriteMode, DBGMCUAPB4FZ2Base> ;
    using DBG_LPTIM2 = DBGMCU_APB4FZ2_DBG_LPTIM2_Values<DBGMCU::APB4FZ2, 9, 1, ReadWriteMode, DBGMCUAPB4FZ2Base> ;
    using DBG_LPTIM3 = DBGMCU_APB4FZ2_DBG_LPTIM3_Values<DBGMCU::APB4FZ2, 10, 1, ReadWriteMode, DBGMCUAPB4FZ2Base> ;
    using DBG_LPTIM4 = DBGMCU_APB4FZ2_DBG_LPTIM4_Values<DBGMCU::APB4FZ2, 11, 1, ReadWriteMode, DBGMCUAPB4FZ2Base> ;
    using DBG_LPTIM5 = DBGMCU_APB4FZ2_DBG_LPTIM5_Values<DBGMCU::APB4FZ2, 12, 1, ReadWriteMode, DBGMCUAPB4FZ2Base> ;
    using DBG_RTC = DBGMCU_APB4FZ2_DBG_RTC_Values<DBGMCU::APB4FZ2, 16, 1, ReadWriteMode, DBGMCUAPB4FZ2Base> ;
    using DBG_WDGLSD1 = DBGMCU_APB4FZ2_DBG_WDGLSD1_Values<DBGMCU::APB4FZ2, 18, 1, ReadWriteMode, DBGMCUAPB4FZ2Base> ;
    using DBG_WDGLSD2 = DBGMCU_APB4FZ2_DBG_WDGLSD2_Values<DBGMCU::APB4FZ2, 19, 1, ReadWriteMode, DBGMCUAPB4FZ2Base> ;
    using FieldValues = DBGMCU_APB4FZ2_DBG_WDGLSD2_Values<DBGMCU::APB4FZ2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB4FZ2Pack  = Register<0x5C001058, 32, ReadWriteMode, DBGMCUAPB4FZ2Base, T...> ;

} ;

#endif //#if !defined(DBGMCUREGISTERS_HPP)
