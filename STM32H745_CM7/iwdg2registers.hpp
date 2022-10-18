/*******************************************************************************
* Filename      : iwdg2registers.hpp
*
* Details       : IWDG. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(IWDG2REGISTERS_HPP)
#define IWDG2REGISTERS_HPP

#include "iwdg2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct IWDG2
{
  struct IWDG2KRBase {} ;

  struct KR : public RegisterBase<0x58004C00, 32, WriteMode>
  {
    using KEY = IWDG2_KR_KEY_Values<IWDG2::KR, 0, 16, WriteMode, IWDG2KRBase> ;
    using FieldValues = IWDG2_KR_KEY_Values<IWDG2::KR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KRPack  = Register<0x58004C00, 32, WriteMode, IWDG2KRBase, T...> ;

  struct IWDG2PRBase {} ;

  struct PR : public RegisterBase<0x58004C04, 32, ReadWriteMode>
  {
    using PRField = IWDG2_PR_PR_Values<IWDG2::PR, 0, 3, ReadWriteMode, IWDG2PRBase> ;
    using FieldValues = IWDG2_PR_PR_Values<IWDG2::PR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRPack  = Register<0x58004C04, 32, ReadWriteMode, IWDG2PRBase, T...> ;

  struct IWDG2RLRBase {} ;

  struct RLR : public RegisterBase<0x58004C08, 32, ReadWriteMode>
  {
    using RL = IWDG2_RLR_RL_Values<IWDG2::RLR, 0, 12, ReadWriteMode, IWDG2RLRBase> ;
    using FieldValues = IWDG2_RLR_RL_Values<IWDG2::RLR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLRPack  = Register<0x58004C08, 32, ReadWriteMode, IWDG2RLRBase, T...> ;

  struct IWDG2SRBase {} ;

  struct SR : public RegisterBase<0x58004C0C, 32, ReadMode>
  {
    using PVU = IWDG2_SR_PVU_Values<IWDG2::SR, 0, 1, ReadMode, IWDG2SRBase> ;
    using RVU = IWDG2_SR_RVU_Values<IWDG2::SR, 1, 1, ReadMode, IWDG2SRBase> ;
    using WVU = IWDG2_SR_WVU_Values<IWDG2::SR, 2, 1, ReadMode, IWDG2SRBase> ;
    using FieldValues = IWDG2_SR_WVU_Values<IWDG2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x58004C0C, 32, ReadMode, IWDG2SRBase, T...> ;

  struct IWDG2WINRBase {} ;

  struct WINR : public RegisterBase<0x58004C10, 32, ReadWriteMode>
  {
    using WIN = IWDG2_WINR_WIN_Values<IWDG2::WINR, 0, 12, ReadWriteMode, IWDG2WINRBase> ;
    using FieldValues = IWDG2_WINR_WIN_Values<IWDG2::WINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WINRPack  = Register<0x58004C10, 32, ReadWriteMode, IWDG2WINRBase, T...> ;

} ;

#endif //#if !defined(IWDG2REGISTERS_HPP)
