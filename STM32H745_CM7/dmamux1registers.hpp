/*******************************************************************************
* Filename      : dmamux1registers.hpp
*
* Details       : DMAMUX. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(DMAMUX1REGISTERS_HPP)
#define DMAMUX1REGISTERS_HPP

#include "dmamux1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMAMUX1
{
  struct DMAMUX1C0CRBase {} ;

  struct C0CR : public RegisterBase<0x40020800, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C0CR_DMAREQ_ID_Values<DMAMUX1::C0CR, 0, 8, ReadWriteMode, DMAMUX1C0CRBase> ;
    using SOIE = DMAMUX1_C0CR_SOIE_Values<DMAMUX1::C0CR, 8, 1, ReadWriteMode, DMAMUX1C0CRBase> ;
    using EGE = DMAMUX1_C0CR_EGE_Values<DMAMUX1::C0CR, 9, 1, ReadWriteMode, DMAMUX1C0CRBase> ;
    using SE = DMAMUX1_C0CR_SE_Values<DMAMUX1::C0CR, 16, 1, ReadWriteMode, DMAMUX1C0CRBase> ;
    using SPOL = DMAMUX1_C0CR_SPOL_Values<DMAMUX1::C0CR, 17, 2, ReadWriteMode, DMAMUX1C0CRBase> ;
    using NBREQ = DMAMUX1_C0CR_NBREQ_Values<DMAMUX1::C0CR, 19, 5, ReadWriteMode, DMAMUX1C0CRBase> ;
    using SYNC_ID = DMAMUX1_C0CR_SYNC_ID_Values<DMAMUX1::C0CR, 24, 5, ReadWriteMode, DMAMUX1C0CRBase> ;
    using FieldValues = DMAMUX1_C0CR_SYNC_ID_Values<DMAMUX1::C0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C0CRPack  = Register<0x40020800, 32, ReadWriteMode, DMAMUX1C0CRBase, T...> ;

  struct DMAMUX1C1CRBase {} ;

  struct C1CR : public RegisterBase<0x40020804, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C1CR_DMAREQ_ID_Values<DMAMUX1::C1CR, 0, 8, ReadWriteMode, DMAMUX1C1CRBase> ;
    using SOIE = DMAMUX1_C1CR_SOIE_Values<DMAMUX1::C1CR, 8, 1, ReadWriteMode, DMAMUX1C1CRBase> ;
    using EGE = DMAMUX1_C1CR_EGE_Values<DMAMUX1::C1CR, 9, 1, ReadWriteMode, DMAMUX1C1CRBase> ;
    using SE = DMAMUX1_C1CR_SE_Values<DMAMUX1::C1CR, 16, 1, ReadWriteMode, DMAMUX1C1CRBase> ;
    using SPOL = DMAMUX1_C1CR_SPOL_Values<DMAMUX1::C1CR, 17, 2, ReadWriteMode, DMAMUX1C1CRBase> ;
    using NBREQ = DMAMUX1_C1CR_NBREQ_Values<DMAMUX1::C1CR, 19, 5, ReadWriteMode, DMAMUX1C1CRBase> ;
    using SYNC_ID = DMAMUX1_C1CR_SYNC_ID_Values<DMAMUX1::C1CR, 24, 5, ReadWriteMode, DMAMUX1C1CRBase> ;
    using FieldValues = DMAMUX1_C1CR_SYNC_ID_Values<DMAMUX1::C1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1CRPack  = Register<0x40020804, 32, ReadWriteMode, DMAMUX1C1CRBase, T...> ;

  struct DMAMUX1C2CRBase {} ;

  struct C2CR : public RegisterBase<0x40020808, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C2CR_DMAREQ_ID_Values<DMAMUX1::C2CR, 0, 8, ReadWriteMode, DMAMUX1C2CRBase> ;
    using SOIE = DMAMUX1_C2CR_SOIE_Values<DMAMUX1::C2CR, 8, 1, ReadWriteMode, DMAMUX1C2CRBase> ;
    using EGE = DMAMUX1_C2CR_EGE_Values<DMAMUX1::C2CR, 9, 1, ReadWriteMode, DMAMUX1C2CRBase> ;
    using SE = DMAMUX1_C2CR_SE_Values<DMAMUX1::C2CR, 16, 1, ReadWriteMode, DMAMUX1C2CRBase> ;
    using SPOL = DMAMUX1_C2CR_SPOL_Values<DMAMUX1::C2CR, 17, 2, ReadWriteMode, DMAMUX1C2CRBase> ;
    using NBREQ = DMAMUX1_C2CR_NBREQ_Values<DMAMUX1::C2CR, 19, 5, ReadWriteMode, DMAMUX1C2CRBase> ;
    using SYNC_ID = DMAMUX1_C2CR_SYNC_ID_Values<DMAMUX1::C2CR, 24, 5, ReadWriteMode, DMAMUX1C2CRBase> ;
    using FieldValues = DMAMUX1_C2CR_SYNC_ID_Values<DMAMUX1::C2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2CRPack  = Register<0x40020808, 32, ReadWriteMode, DMAMUX1C2CRBase, T...> ;

  struct DMAMUX1C3CRBase {} ;

  struct C3CR : public RegisterBase<0x4002080C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C3CR_DMAREQ_ID_Values<DMAMUX1::C3CR, 0, 8, ReadWriteMode, DMAMUX1C3CRBase> ;
    using SOIE = DMAMUX1_C3CR_SOIE_Values<DMAMUX1::C3CR, 8, 1, ReadWriteMode, DMAMUX1C3CRBase> ;
    using EGE = DMAMUX1_C3CR_EGE_Values<DMAMUX1::C3CR, 9, 1, ReadWriteMode, DMAMUX1C3CRBase> ;
    using SE = DMAMUX1_C3CR_SE_Values<DMAMUX1::C3CR, 16, 1, ReadWriteMode, DMAMUX1C3CRBase> ;
    using SPOL = DMAMUX1_C3CR_SPOL_Values<DMAMUX1::C3CR, 17, 2, ReadWriteMode, DMAMUX1C3CRBase> ;
    using NBREQ = DMAMUX1_C3CR_NBREQ_Values<DMAMUX1::C3CR, 19, 5, ReadWriteMode, DMAMUX1C3CRBase> ;
    using SYNC_ID = DMAMUX1_C3CR_SYNC_ID_Values<DMAMUX1::C3CR, 24, 5, ReadWriteMode, DMAMUX1C3CRBase> ;
    using FieldValues = DMAMUX1_C3CR_SYNC_ID_Values<DMAMUX1::C3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C3CRPack  = Register<0x4002080C, 32, ReadWriteMode, DMAMUX1C3CRBase, T...> ;

  struct DMAMUX1C4CRBase {} ;

  struct C4CR : public RegisterBase<0x40020810, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C4CR_DMAREQ_ID_Values<DMAMUX1::C4CR, 0, 8, ReadWriteMode, DMAMUX1C4CRBase> ;
    using SOIE = DMAMUX1_C4CR_SOIE_Values<DMAMUX1::C4CR, 8, 1, ReadWriteMode, DMAMUX1C4CRBase> ;
    using EGE = DMAMUX1_C4CR_EGE_Values<DMAMUX1::C4CR, 9, 1, ReadWriteMode, DMAMUX1C4CRBase> ;
    using SE = DMAMUX1_C4CR_SE_Values<DMAMUX1::C4CR, 16, 1, ReadWriteMode, DMAMUX1C4CRBase> ;
    using SPOL = DMAMUX1_C4CR_SPOL_Values<DMAMUX1::C4CR, 17, 2, ReadWriteMode, DMAMUX1C4CRBase> ;
    using NBREQ = DMAMUX1_C4CR_NBREQ_Values<DMAMUX1::C4CR, 19, 5, ReadWriteMode, DMAMUX1C4CRBase> ;
    using SYNC_ID = DMAMUX1_C4CR_SYNC_ID_Values<DMAMUX1::C4CR, 24, 5, ReadWriteMode, DMAMUX1C4CRBase> ;
    using FieldValues = DMAMUX1_C4CR_SYNC_ID_Values<DMAMUX1::C4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C4CRPack  = Register<0x40020810, 32, ReadWriteMode, DMAMUX1C4CRBase, T...> ;

  struct DMAMUX1C5CRBase {} ;

  struct C5CR : public RegisterBase<0x40020814, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C5CR_DMAREQ_ID_Values<DMAMUX1::C5CR, 0, 8, ReadWriteMode, DMAMUX1C5CRBase> ;
    using SOIE = DMAMUX1_C5CR_SOIE_Values<DMAMUX1::C5CR, 8, 1, ReadWriteMode, DMAMUX1C5CRBase> ;
    using EGE = DMAMUX1_C5CR_EGE_Values<DMAMUX1::C5CR, 9, 1, ReadWriteMode, DMAMUX1C5CRBase> ;
    using SE = DMAMUX1_C5CR_SE_Values<DMAMUX1::C5CR, 16, 1, ReadWriteMode, DMAMUX1C5CRBase> ;
    using SPOL = DMAMUX1_C5CR_SPOL_Values<DMAMUX1::C5CR, 17, 2, ReadWriteMode, DMAMUX1C5CRBase> ;
    using NBREQ = DMAMUX1_C5CR_NBREQ_Values<DMAMUX1::C5CR, 19, 5, ReadWriteMode, DMAMUX1C5CRBase> ;
    using SYNC_ID = DMAMUX1_C5CR_SYNC_ID_Values<DMAMUX1::C5CR, 24, 5, ReadWriteMode, DMAMUX1C5CRBase> ;
    using FieldValues = DMAMUX1_C5CR_SYNC_ID_Values<DMAMUX1::C5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C5CRPack  = Register<0x40020814, 32, ReadWriteMode, DMAMUX1C5CRBase, T...> ;

  struct DMAMUX1C6CRBase {} ;

  struct C6CR : public RegisterBase<0x40020818, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C6CR_DMAREQ_ID_Values<DMAMUX1::C6CR, 0, 8, ReadWriteMode, DMAMUX1C6CRBase> ;
    using SOIE = DMAMUX1_C6CR_SOIE_Values<DMAMUX1::C6CR, 8, 1, ReadWriteMode, DMAMUX1C6CRBase> ;
    using EGE = DMAMUX1_C6CR_EGE_Values<DMAMUX1::C6CR, 9, 1, ReadWriteMode, DMAMUX1C6CRBase> ;
    using SE = DMAMUX1_C6CR_SE_Values<DMAMUX1::C6CR, 16, 1, ReadWriteMode, DMAMUX1C6CRBase> ;
    using SPOL = DMAMUX1_C6CR_SPOL_Values<DMAMUX1::C6CR, 17, 2, ReadWriteMode, DMAMUX1C6CRBase> ;
    using NBREQ = DMAMUX1_C6CR_NBREQ_Values<DMAMUX1::C6CR, 19, 5, ReadWriteMode, DMAMUX1C6CRBase> ;
    using SYNC_ID = DMAMUX1_C6CR_SYNC_ID_Values<DMAMUX1::C6CR, 24, 5, ReadWriteMode, DMAMUX1C6CRBase> ;
    using FieldValues = DMAMUX1_C6CR_SYNC_ID_Values<DMAMUX1::C6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C6CRPack  = Register<0x40020818, 32, ReadWriteMode, DMAMUX1C6CRBase, T...> ;

  struct DMAMUX1C7CRBase {} ;

  struct C7CR : public RegisterBase<0x4002081C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C7CR_DMAREQ_ID_Values<DMAMUX1::C7CR, 0, 8, ReadWriteMode, DMAMUX1C7CRBase> ;
    using SOIE = DMAMUX1_C7CR_SOIE_Values<DMAMUX1::C7CR, 8, 1, ReadWriteMode, DMAMUX1C7CRBase> ;
    using EGE = DMAMUX1_C7CR_EGE_Values<DMAMUX1::C7CR, 9, 1, ReadWriteMode, DMAMUX1C7CRBase> ;
    using SE = DMAMUX1_C7CR_SE_Values<DMAMUX1::C7CR, 16, 1, ReadWriteMode, DMAMUX1C7CRBase> ;
    using SPOL = DMAMUX1_C7CR_SPOL_Values<DMAMUX1::C7CR, 17, 2, ReadWriteMode, DMAMUX1C7CRBase> ;
    using NBREQ = DMAMUX1_C7CR_NBREQ_Values<DMAMUX1::C7CR, 19, 5, ReadWriteMode, DMAMUX1C7CRBase> ;
    using SYNC_ID = DMAMUX1_C7CR_SYNC_ID_Values<DMAMUX1::C7CR, 24, 5, ReadWriteMode, DMAMUX1C7CRBase> ;
    using FieldValues = DMAMUX1_C7CR_SYNC_ID_Values<DMAMUX1::C7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C7CRPack  = Register<0x4002081C, 32, ReadWriteMode, DMAMUX1C7CRBase, T...> ;

  struct DMAMUX1C8CRBase {} ;

  struct C8CR : public RegisterBase<0x40020820, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C8CR_DMAREQ_ID_Values<DMAMUX1::C8CR, 0, 8, ReadWriteMode, DMAMUX1C8CRBase> ;
    using SOIE = DMAMUX1_C8CR_SOIE_Values<DMAMUX1::C8CR, 8, 1, ReadWriteMode, DMAMUX1C8CRBase> ;
    using EGE = DMAMUX1_C8CR_EGE_Values<DMAMUX1::C8CR, 9, 1, ReadWriteMode, DMAMUX1C8CRBase> ;
    using SE = DMAMUX1_C8CR_SE_Values<DMAMUX1::C8CR, 16, 1, ReadWriteMode, DMAMUX1C8CRBase> ;
    using SPOL = DMAMUX1_C8CR_SPOL_Values<DMAMUX1::C8CR, 17, 2, ReadWriteMode, DMAMUX1C8CRBase> ;
    using NBREQ = DMAMUX1_C8CR_NBREQ_Values<DMAMUX1::C8CR, 19, 5, ReadWriteMode, DMAMUX1C8CRBase> ;
    using SYNC_ID = DMAMUX1_C8CR_SYNC_ID_Values<DMAMUX1::C8CR, 24, 5, ReadWriteMode, DMAMUX1C8CRBase> ;
    using FieldValues = DMAMUX1_C8CR_SYNC_ID_Values<DMAMUX1::C8CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C8CRPack  = Register<0x40020820, 32, ReadWriteMode, DMAMUX1C8CRBase, T...> ;

  struct DMAMUX1C9CRBase {} ;

  struct C9CR : public RegisterBase<0x40020824, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C9CR_DMAREQ_ID_Values<DMAMUX1::C9CR, 0, 8, ReadWriteMode, DMAMUX1C9CRBase> ;
    using SOIE = DMAMUX1_C9CR_SOIE_Values<DMAMUX1::C9CR, 8, 1, ReadWriteMode, DMAMUX1C9CRBase> ;
    using EGE = DMAMUX1_C9CR_EGE_Values<DMAMUX1::C9CR, 9, 1, ReadWriteMode, DMAMUX1C9CRBase> ;
    using SE = DMAMUX1_C9CR_SE_Values<DMAMUX1::C9CR, 16, 1, ReadWriteMode, DMAMUX1C9CRBase> ;
    using SPOL = DMAMUX1_C9CR_SPOL_Values<DMAMUX1::C9CR, 17, 2, ReadWriteMode, DMAMUX1C9CRBase> ;
    using NBREQ = DMAMUX1_C9CR_NBREQ_Values<DMAMUX1::C9CR, 19, 5, ReadWriteMode, DMAMUX1C9CRBase> ;
    using SYNC_ID = DMAMUX1_C9CR_SYNC_ID_Values<DMAMUX1::C9CR, 24, 5, ReadWriteMode, DMAMUX1C9CRBase> ;
    using FieldValues = DMAMUX1_C9CR_SYNC_ID_Values<DMAMUX1::C9CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C9CRPack  = Register<0x40020824, 32, ReadWriteMode, DMAMUX1C9CRBase, T...> ;

  struct DMAMUX1C10CRBase {} ;

  struct C10CR : public RegisterBase<0x40020828, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C10CR_DMAREQ_ID_Values<DMAMUX1::C10CR, 0, 8, ReadWriteMode, DMAMUX1C10CRBase> ;
    using SOIE = DMAMUX1_C10CR_SOIE_Values<DMAMUX1::C10CR, 8, 1, ReadWriteMode, DMAMUX1C10CRBase> ;
    using EGE = DMAMUX1_C10CR_EGE_Values<DMAMUX1::C10CR, 9, 1, ReadWriteMode, DMAMUX1C10CRBase> ;
    using SE = DMAMUX1_C10CR_SE_Values<DMAMUX1::C10CR, 16, 1, ReadWriteMode, DMAMUX1C10CRBase> ;
    using SPOL = DMAMUX1_C10CR_SPOL_Values<DMAMUX1::C10CR, 17, 2, ReadWriteMode, DMAMUX1C10CRBase> ;
    using NBREQ = DMAMUX1_C10CR_NBREQ_Values<DMAMUX1::C10CR, 19, 5, ReadWriteMode, DMAMUX1C10CRBase> ;
    using SYNC_ID = DMAMUX1_C10CR_SYNC_ID_Values<DMAMUX1::C10CR, 24, 5, ReadWriteMode, DMAMUX1C10CRBase> ;
    using FieldValues = DMAMUX1_C10CR_SYNC_ID_Values<DMAMUX1::C10CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C10CRPack  = Register<0x40020828, 32, ReadWriteMode, DMAMUX1C10CRBase, T...> ;

  struct DMAMUX1C11CRBase {} ;

  struct C11CR : public RegisterBase<0x4002082C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C11CR_DMAREQ_ID_Values<DMAMUX1::C11CR, 0, 8, ReadWriteMode, DMAMUX1C11CRBase> ;
    using SOIE = DMAMUX1_C11CR_SOIE_Values<DMAMUX1::C11CR, 8, 1, ReadWriteMode, DMAMUX1C11CRBase> ;
    using EGE = DMAMUX1_C11CR_EGE_Values<DMAMUX1::C11CR, 9, 1, ReadWriteMode, DMAMUX1C11CRBase> ;
    using SE = DMAMUX1_C11CR_SE_Values<DMAMUX1::C11CR, 16, 1, ReadWriteMode, DMAMUX1C11CRBase> ;
    using SPOL = DMAMUX1_C11CR_SPOL_Values<DMAMUX1::C11CR, 17, 2, ReadWriteMode, DMAMUX1C11CRBase> ;
    using NBREQ = DMAMUX1_C11CR_NBREQ_Values<DMAMUX1::C11CR, 19, 5, ReadWriteMode, DMAMUX1C11CRBase> ;
    using SYNC_ID = DMAMUX1_C11CR_SYNC_ID_Values<DMAMUX1::C11CR, 24, 5, ReadWriteMode, DMAMUX1C11CRBase> ;
    using FieldValues = DMAMUX1_C11CR_SYNC_ID_Values<DMAMUX1::C11CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C11CRPack  = Register<0x4002082C, 32, ReadWriteMode, DMAMUX1C11CRBase, T...> ;

  struct DMAMUX1C12CRBase {} ;

  struct C12CR : public RegisterBase<0x40020830, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C12CR_DMAREQ_ID_Values<DMAMUX1::C12CR, 0, 8, ReadWriteMode, DMAMUX1C12CRBase> ;
    using SOIE = DMAMUX1_C12CR_SOIE_Values<DMAMUX1::C12CR, 8, 1, ReadWriteMode, DMAMUX1C12CRBase> ;
    using EGE = DMAMUX1_C12CR_EGE_Values<DMAMUX1::C12CR, 9, 1, ReadWriteMode, DMAMUX1C12CRBase> ;
    using SE = DMAMUX1_C12CR_SE_Values<DMAMUX1::C12CR, 16, 1, ReadWriteMode, DMAMUX1C12CRBase> ;
    using SPOL = DMAMUX1_C12CR_SPOL_Values<DMAMUX1::C12CR, 17, 2, ReadWriteMode, DMAMUX1C12CRBase> ;
    using NBREQ = DMAMUX1_C12CR_NBREQ_Values<DMAMUX1::C12CR, 19, 5, ReadWriteMode, DMAMUX1C12CRBase> ;
    using SYNC_ID = DMAMUX1_C12CR_SYNC_ID_Values<DMAMUX1::C12CR, 24, 5, ReadWriteMode, DMAMUX1C12CRBase> ;
    using FieldValues = DMAMUX1_C12CR_SYNC_ID_Values<DMAMUX1::C12CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C12CRPack  = Register<0x40020830, 32, ReadWriteMode, DMAMUX1C12CRBase, T...> ;

  struct DMAMUX1C13CRBase {} ;

  struct C13CR : public RegisterBase<0x40020834, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C13CR_DMAREQ_ID_Values<DMAMUX1::C13CR, 0, 8, ReadWriteMode, DMAMUX1C13CRBase> ;
    using SOIE = DMAMUX1_C13CR_SOIE_Values<DMAMUX1::C13CR, 8, 1, ReadWriteMode, DMAMUX1C13CRBase> ;
    using EGE = DMAMUX1_C13CR_EGE_Values<DMAMUX1::C13CR, 9, 1, ReadWriteMode, DMAMUX1C13CRBase> ;
    using SE = DMAMUX1_C13CR_SE_Values<DMAMUX1::C13CR, 16, 1, ReadWriteMode, DMAMUX1C13CRBase> ;
    using SPOL = DMAMUX1_C13CR_SPOL_Values<DMAMUX1::C13CR, 17, 2, ReadWriteMode, DMAMUX1C13CRBase> ;
    using NBREQ = DMAMUX1_C13CR_NBREQ_Values<DMAMUX1::C13CR, 19, 5, ReadWriteMode, DMAMUX1C13CRBase> ;
    using SYNC_ID = DMAMUX1_C13CR_SYNC_ID_Values<DMAMUX1::C13CR, 24, 5, ReadWriteMode, DMAMUX1C13CRBase> ;
    using FieldValues = DMAMUX1_C13CR_SYNC_ID_Values<DMAMUX1::C13CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C13CRPack  = Register<0x40020834, 32, ReadWriteMode, DMAMUX1C13CRBase, T...> ;

  struct DMAMUX1C14CRBase {} ;

  struct C14CR : public RegisterBase<0x40020838, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C14CR_DMAREQ_ID_Values<DMAMUX1::C14CR, 0, 8, ReadWriteMode, DMAMUX1C14CRBase> ;
    using SOIE = DMAMUX1_C14CR_SOIE_Values<DMAMUX1::C14CR, 8, 1, ReadWriteMode, DMAMUX1C14CRBase> ;
    using EGE = DMAMUX1_C14CR_EGE_Values<DMAMUX1::C14CR, 9, 1, ReadWriteMode, DMAMUX1C14CRBase> ;
    using SE = DMAMUX1_C14CR_SE_Values<DMAMUX1::C14CR, 16, 1, ReadWriteMode, DMAMUX1C14CRBase> ;
    using SPOL = DMAMUX1_C14CR_SPOL_Values<DMAMUX1::C14CR, 17, 2, ReadWriteMode, DMAMUX1C14CRBase> ;
    using NBREQ = DMAMUX1_C14CR_NBREQ_Values<DMAMUX1::C14CR, 19, 5, ReadWriteMode, DMAMUX1C14CRBase> ;
    using SYNC_ID = DMAMUX1_C14CR_SYNC_ID_Values<DMAMUX1::C14CR, 24, 5, ReadWriteMode, DMAMUX1C14CRBase> ;
    using FieldValues = DMAMUX1_C14CR_SYNC_ID_Values<DMAMUX1::C14CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C14CRPack  = Register<0x40020838, 32, ReadWriteMode, DMAMUX1C14CRBase, T...> ;

  struct DMAMUX1C15CRBase {} ;

  struct C15CR : public RegisterBase<0x4002083C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX1_C15CR_DMAREQ_ID_Values<DMAMUX1::C15CR, 0, 8, ReadWriteMode, DMAMUX1C15CRBase> ;
    using SOIE = DMAMUX1_C15CR_SOIE_Values<DMAMUX1::C15CR, 8, 1, ReadWriteMode, DMAMUX1C15CRBase> ;
    using EGE = DMAMUX1_C15CR_EGE_Values<DMAMUX1::C15CR, 9, 1, ReadWriteMode, DMAMUX1C15CRBase> ;
    using SE = DMAMUX1_C15CR_SE_Values<DMAMUX1::C15CR, 16, 1, ReadWriteMode, DMAMUX1C15CRBase> ;
    using SPOL = DMAMUX1_C15CR_SPOL_Values<DMAMUX1::C15CR, 17, 2, ReadWriteMode, DMAMUX1C15CRBase> ;
    using NBREQ = DMAMUX1_C15CR_NBREQ_Values<DMAMUX1::C15CR, 19, 5, ReadWriteMode, DMAMUX1C15CRBase> ;
    using SYNC_ID = DMAMUX1_C15CR_SYNC_ID_Values<DMAMUX1::C15CR, 24, 5, ReadWriteMode, DMAMUX1C15CRBase> ;
    using FieldValues = DMAMUX1_C15CR_SYNC_ID_Values<DMAMUX1::C15CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C15CRPack  = Register<0x4002083C, 32, ReadWriteMode, DMAMUX1C15CRBase, T...> ;

  struct DMAMUX1RG0CRBase {} ;

  struct RG0CR : public RegisterBase<0x40020900, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX1_RG0CR_SIG_ID_Values<DMAMUX1::RG0CR, 0, 5, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using OIE = DMAMUX1_RG0CR_OIE_Values<DMAMUX1::RG0CR, 8, 1, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using GE = DMAMUX1_RG0CR_GE_Values<DMAMUX1::RG0CR, 16, 1, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using GPOL = DMAMUX1_RG0CR_GPOL_Values<DMAMUX1::RG0CR, 17, 2, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using GNBREQ = DMAMUX1_RG0CR_GNBREQ_Values<DMAMUX1::RG0CR, 19, 5, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using FieldValues = DMAMUX1_RG0CR_GNBREQ_Values<DMAMUX1::RG0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG0CRPack  = Register<0x40020900, 32, ReadWriteMode, DMAMUX1RG0CRBase, T...> ;

  struct DMAMUX1RG1CRBase {} ;

  struct RG1CR : public RegisterBase<0x40020904, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX1_RG1CR_SIG_ID_Values<DMAMUX1::RG1CR, 0, 5, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using OIE = DMAMUX1_RG1CR_OIE_Values<DMAMUX1::RG1CR, 8, 1, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using GE = DMAMUX1_RG1CR_GE_Values<DMAMUX1::RG1CR, 16, 1, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using GPOL = DMAMUX1_RG1CR_GPOL_Values<DMAMUX1::RG1CR, 17, 2, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using GNBREQ = DMAMUX1_RG1CR_GNBREQ_Values<DMAMUX1::RG1CR, 19, 5, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using FieldValues = DMAMUX1_RG1CR_GNBREQ_Values<DMAMUX1::RG1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG1CRPack  = Register<0x40020904, 32, ReadWriteMode, DMAMUX1RG1CRBase, T...> ;

  struct DMAMUX1RG2CRBase {} ;

  struct RG2CR : public RegisterBase<0x40020908, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX1_RG2CR_SIG_ID_Values<DMAMUX1::RG2CR, 0, 5, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using OIE = DMAMUX1_RG2CR_OIE_Values<DMAMUX1::RG2CR, 8, 1, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using GE = DMAMUX1_RG2CR_GE_Values<DMAMUX1::RG2CR, 16, 1, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using GPOL = DMAMUX1_RG2CR_GPOL_Values<DMAMUX1::RG2CR, 17, 2, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using GNBREQ = DMAMUX1_RG2CR_GNBREQ_Values<DMAMUX1::RG2CR, 19, 5, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using FieldValues = DMAMUX1_RG2CR_GNBREQ_Values<DMAMUX1::RG2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG2CRPack  = Register<0x40020908, 32, ReadWriteMode, DMAMUX1RG2CRBase, T...> ;

  struct DMAMUX1RG3CRBase {} ;

  struct RG3CR : public RegisterBase<0x4002090C, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX1_RG3CR_SIG_ID_Values<DMAMUX1::RG3CR, 0, 5, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using OIE = DMAMUX1_RG3CR_OIE_Values<DMAMUX1::RG3CR, 8, 1, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using GE = DMAMUX1_RG3CR_GE_Values<DMAMUX1::RG3CR, 16, 1, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using GPOL = DMAMUX1_RG3CR_GPOL_Values<DMAMUX1::RG3CR, 17, 2, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using GNBREQ = DMAMUX1_RG3CR_GNBREQ_Values<DMAMUX1::RG3CR, 19, 5, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using FieldValues = DMAMUX1_RG3CR_GNBREQ_Values<DMAMUX1::RG3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG3CRPack  = Register<0x4002090C, 32, ReadWriteMode, DMAMUX1RG3CRBase, T...> ;

  struct DMAMUX1RG4CRBase {} ;

  struct RG4CR : public RegisterBase<0x40020910, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX1_RG4CR_SIG_ID_Values<DMAMUX1::RG4CR, 0, 5, ReadWriteMode, DMAMUX1RG4CRBase> ;
    using OIE = DMAMUX1_RG4CR_OIE_Values<DMAMUX1::RG4CR, 8, 1, ReadWriteMode, DMAMUX1RG4CRBase> ;
    using GE = DMAMUX1_RG4CR_GE_Values<DMAMUX1::RG4CR, 16, 1, ReadWriteMode, DMAMUX1RG4CRBase> ;
    using GPOL = DMAMUX1_RG4CR_GPOL_Values<DMAMUX1::RG4CR, 17, 2, ReadWriteMode, DMAMUX1RG4CRBase> ;
    using GNBREQ = DMAMUX1_RG4CR_GNBREQ_Values<DMAMUX1::RG4CR, 19, 5, ReadWriteMode, DMAMUX1RG4CRBase> ;
    using FieldValues = DMAMUX1_RG4CR_GNBREQ_Values<DMAMUX1::RG4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG4CRPack  = Register<0x40020910, 32, ReadWriteMode, DMAMUX1RG4CRBase, T...> ;

  struct DMAMUX1RG5CRBase {} ;

  struct RG5CR : public RegisterBase<0x40020914, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX1_RG5CR_SIG_ID_Values<DMAMUX1::RG5CR, 0, 5, ReadWriteMode, DMAMUX1RG5CRBase> ;
    using OIE = DMAMUX1_RG5CR_OIE_Values<DMAMUX1::RG5CR, 8, 1, ReadWriteMode, DMAMUX1RG5CRBase> ;
    using GE = DMAMUX1_RG5CR_GE_Values<DMAMUX1::RG5CR, 16, 1, ReadWriteMode, DMAMUX1RG5CRBase> ;
    using GPOL = DMAMUX1_RG5CR_GPOL_Values<DMAMUX1::RG5CR, 17, 2, ReadWriteMode, DMAMUX1RG5CRBase> ;
    using GNBREQ = DMAMUX1_RG5CR_GNBREQ_Values<DMAMUX1::RG5CR, 19, 5, ReadWriteMode, DMAMUX1RG5CRBase> ;
    using FieldValues = DMAMUX1_RG5CR_GNBREQ_Values<DMAMUX1::RG5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG5CRPack  = Register<0x40020914, 32, ReadWriteMode, DMAMUX1RG5CRBase, T...> ;

  struct DMAMUX1RG6CRBase {} ;

  struct RG6CR : public RegisterBase<0x40020918, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX1_RG6CR_SIG_ID_Values<DMAMUX1::RG6CR, 0, 5, ReadWriteMode, DMAMUX1RG6CRBase> ;
    using OIE = DMAMUX1_RG6CR_OIE_Values<DMAMUX1::RG6CR, 8, 1, ReadWriteMode, DMAMUX1RG6CRBase> ;
    using GE = DMAMUX1_RG6CR_GE_Values<DMAMUX1::RG6CR, 16, 1, ReadWriteMode, DMAMUX1RG6CRBase> ;
    using GPOL = DMAMUX1_RG6CR_GPOL_Values<DMAMUX1::RG6CR, 17, 2, ReadWriteMode, DMAMUX1RG6CRBase> ;
    using GNBREQ = DMAMUX1_RG6CR_GNBREQ_Values<DMAMUX1::RG6CR, 19, 5, ReadWriteMode, DMAMUX1RG6CRBase> ;
    using FieldValues = DMAMUX1_RG6CR_GNBREQ_Values<DMAMUX1::RG6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG6CRPack  = Register<0x40020918, 32, ReadWriteMode, DMAMUX1RG6CRBase, T...> ;

  struct DMAMUX1RG7CRBase {} ;

  struct RG7CR : public RegisterBase<0x4002091C, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX1_RG7CR_SIG_ID_Values<DMAMUX1::RG7CR, 0, 5, ReadWriteMode, DMAMUX1RG7CRBase> ;
    using OIE = DMAMUX1_RG7CR_OIE_Values<DMAMUX1::RG7CR, 8, 1, ReadWriteMode, DMAMUX1RG7CRBase> ;
    using GE = DMAMUX1_RG7CR_GE_Values<DMAMUX1::RG7CR, 16, 1, ReadWriteMode, DMAMUX1RG7CRBase> ;
    using GPOL = DMAMUX1_RG7CR_GPOL_Values<DMAMUX1::RG7CR, 17, 2, ReadWriteMode, DMAMUX1RG7CRBase> ;
    using GNBREQ = DMAMUX1_RG7CR_GNBREQ_Values<DMAMUX1::RG7CR, 19, 5, ReadWriteMode, DMAMUX1RG7CRBase> ;
    using FieldValues = DMAMUX1_RG7CR_GNBREQ_Values<DMAMUX1::RG7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG7CRPack  = Register<0x4002091C, 32, ReadWriteMode, DMAMUX1RG7CRBase, T...> ;

  struct DMAMUX1RGSRBase {} ;

  struct RGSR : public RegisterBase<0x40020940, 32, ReadMode>
  {
    using OF = DMAMUX1_RGSR_OF_Values<DMAMUX1::RGSR, 0, 8, ReadMode, DMAMUX1RGSRBase> ;
    using FieldValues = DMAMUX1_RGSR_OF_Values<DMAMUX1::RGSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RGSRPack  = Register<0x40020940, 32, ReadMode, DMAMUX1RGSRBase, T...> ;

  struct DMAMUX1RGCFRBase {} ;

  struct RGCFR : public RegisterBase<0x40020944, 32, WriteMode>
  {
    using COF = DMAMUX1_RGCFR_COF_Values<DMAMUX1::RGCFR, 0, 8, WriteMode, DMAMUX1RGCFRBase> ;
    using FieldValues = DMAMUX1_RGCFR_COF_Values<DMAMUX1::RGCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RGCFRPack  = Register<0x40020944, 32, WriteMode, DMAMUX1RGCFRBase, T...> ;

  struct DMAMUX1CSRBase {} ;

  struct CSR : public RegisterBase<0x40020880, 32, ReadMode>
  {
    using SOF = DMAMUX1_CSR_SOF_Values<DMAMUX1::CSR, 0, 16, ReadMode, DMAMUX1CSRBase> ;
    using FieldValues = DMAMUX1_CSR_SOF_Values<DMAMUX1::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40020880, 32, ReadMode, DMAMUX1CSRBase, T...> ;

  struct DMAMUX1CFRBase {} ;

  struct CFR : public RegisterBase<0x40020884, 32, WriteMode>
  {
    using CSOF = DMAMUX1_CFR_CSOF_Values<DMAMUX1::CFR, 0, 16, WriteMode, DMAMUX1CFRBase> ;
    using FieldValues = DMAMUX1_CFR_CSOF_Values<DMAMUX1::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x40020884, 32, WriteMode, DMAMUX1CFRBase, T...> ;

} ;

#endif //#if !defined(DMAMUX1REGISTERS_HPP)
