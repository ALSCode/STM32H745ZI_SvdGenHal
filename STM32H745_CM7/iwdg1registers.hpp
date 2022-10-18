/*******************************************************************************
* Filename      : iwdg1registers.hpp
*
* Details       : IWDG. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(IWDG1REGISTERS_HPP)
#define IWDG1REGISTERS_HPP

#include "iwdg1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct IWDG1
{
  struct IWDG1KRBase {} ;

  struct KR : public RegisterBase<0x58004800, 32, WriteMode>
  {
    using KEY = IWDG1_KR_KEY_Values<IWDG1::KR, 0, 16, WriteMode, IWDG1KRBase> ;
    using FieldValues = IWDG1_KR_KEY_Values<IWDG1::KR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KRPack  = Register<0x58004800, 32, WriteMode, IWDG1KRBase, T...> ;

  struct IWDG1PRBase {} ;

  struct PR : public RegisterBase<0x58004804, 32, ReadWriteMode>
  {
    using PRField = IWDG1_PR_PR_Values<IWDG1::PR, 0, 3, ReadWriteMode, IWDG1PRBase> ;
    using FieldValues = IWDG1_PR_PR_Values<IWDG1::PR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRPack  = Register<0x58004804, 32, ReadWriteMode, IWDG1PRBase, T...> ;

  struct IWDG1RLRBase {} ;

  struct RLR : public RegisterBase<0x58004808, 32, ReadWriteMode>
  {
    using RL = IWDG1_RLR_RL_Values<IWDG1::RLR, 0, 12, ReadWriteMode, IWDG1RLRBase> ;
    using FieldValues = IWDG1_RLR_RL_Values<IWDG1::RLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLRPack  = Register<0x58004808, 32, ReadWriteMode, IWDG1RLRBase, T...> ;

  struct IWDG1SRBase {} ;

  struct SR : public RegisterBase<0x5800480C, 32, ReadMode>
  {
    using PVU = IWDG1_SR_PVU_Values<IWDG1::SR, 0, 1, ReadMode, IWDG1SRBase> ;
    using RVU = IWDG1_SR_RVU_Values<IWDG1::SR, 1, 1, ReadMode, IWDG1SRBase> ;
    using WVU = IWDG1_SR_WVU_Values<IWDG1::SR, 2, 1, ReadMode, IWDG1SRBase> ;
    using FieldValues = IWDG1_SR_WVU_Values<IWDG1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x5800480C, 32, ReadMode, IWDG1SRBase, T...> ;

  struct IWDG1WINRBase {} ;

  struct WINR : public RegisterBase<0x58004810, 32, ReadWriteMode>
  {
    using WIN = IWDG1_WINR_WIN_Values<IWDG1::WINR, 0, 12, ReadWriteMode, IWDG1WINRBase> ;
    using FieldValues = IWDG1_WINR_WIN_Values<IWDG1::WINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WINRPack  = Register<0x58004810, 32, ReadWriteMode, IWDG1WINRBase, T...> ;

} ;

#endif //#if !defined(IWDG1REGISTERS_HPP)
