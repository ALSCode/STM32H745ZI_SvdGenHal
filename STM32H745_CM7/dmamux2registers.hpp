/*******************************************************************************
* Filename      : dmamux2registers.hpp
*
* Details       : DMAMUX. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(DMAMUX2REGISTERS_HPP)
#define DMAMUX2REGISTERS_HPP

#include "dmamux2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMAMUX2
{
  struct DMAMUX2C0CRBase {} ;

  struct C0CR : public RegisterBase<0x58025800, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX2_C0CR_DMAREQ_ID_Values<DMAMUX2::C0CR, 0, 8, ReadWriteMode, DMAMUX2C0CRBase> ;
    using SOIE = DMAMUX2_C0CR_SOIE_Values<DMAMUX2::C0CR, 8, 1, ReadWriteMode, DMAMUX2C0CRBase> ;
    using EGE = DMAMUX2_C0CR_EGE_Values<DMAMUX2::C0CR, 9, 1, ReadWriteMode, DMAMUX2C0CRBase> ;
    using SE = DMAMUX2_C0CR_SE_Values<DMAMUX2::C0CR, 16, 1, ReadWriteMode, DMAMUX2C0CRBase> ;
    using SPOL = DMAMUX2_C0CR_SPOL_Values<DMAMUX2::C0CR, 17, 2, ReadWriteMode, DMAMUX2C0CRBase> ;
    using NBREQ = DMAMUX2_C0CR_NBREQ_Values<DMAMUX2::C0CR, 19, 5, ReadWriteMode, DMAMUX2C0CRBase> ;
    using SYNC_ID = DMAMUX2_C0CR_SYNC_ID_Values<DMAMUX2::C0CR, 24, 5, ReadWriteMode, DMAMUX2C0CRBase> ;
    using FieldValues = DMAMUX2_C0CR_SYNC_ID_Values<DMAMUX2::C0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C0CRPack  = Register<0x58025800, 32, ReadWriteMode, DMAMUX2C0CRBase, T...> ;

  struct DMAMUX2C1CRBase {} ;

  struct C1CR : public RegisterBase<0x58025804, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX2_C1CR_DMAREQ_ID_Values<DMAMUX2::C1CR, 0, 8, ReadWriteMode, DMAMUX2C1CRBase> ;
    using SOIE = DMAMUX2_C1CR_SOIE_Values<DMAMUX2::C1CR, 8, 1, ReadWriteMode, DMAMUX2C1CRBase> ;
    using EGE = DMAMUX2_C1CR_EGE_Values<DMAMUX2::C1CR, 9, 1, ReadWriteMode, DMAMUX2C1CRBase> ;
    using SE = DMAMUX2_C1CR_SE_Values<DMAMUX2::C1CR, 16, 1, ReadWriteMode, DMAMUX2C1CRBase> ;
    using SPOL = DMAMUX2_C1CR_SPOL_Values<DMAMUX2::C1CR, 17, 2, ReadWriteMode, DMAMUX2C1CRBase> ;
    using NBREQ = DMAMUX2_C1CR_NBREQ_Values<DMAMUX2::C1CR, 19, 5, ReadWriteMode, DMAMUX2C1CRBase> ;
    using SYNC_ID = DMAMUX2_C1CR_SYNC_ID_Values<DMAMUX2::C1CR, 24, 5, ReadWriteMode, DMAMUX2C1CRBase> ;
    using FieldValues = DMAMUX2_C1CR_SYNC_ID_Values<DMAMUX2::C1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1CRPack  = Register<0x58025804, 32, ReadWriteMode, DMAMUX2C1CRBase, T...> ;

  struct DMAMUX2C2CRBase {} ;

  struct C2CR : public RegisterBase<0x58025808, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX2_C2CR_DMAREQ_ID_Values<DMAMUX2::C2CR, 0, 8, ReadWriteMode, DMAMUX2C2CRBase> ;
    using SOIE = DMAMUX2_C2CR_SOIE_Values<DMAMUX2::C2CR, 8, 1, ReadWriteMode, DMAMUX2C2CRBase> ;
    using EGE = DMAMUX2_C2CR_EGE_Values<DMAMUX2::C2CR, 9, 1, ReadWriteMode, DMAMUX2C2CRBase> ;
    using SE = DMAMUX2_C2CR_SE_Values<DMAMUX2::C2CR, 16, 1, ReadWriteMode, DMAMUX2C2CRBase> ;
    using SPOL = DMAMUX2_C2CR_SPOL_Values<DMAMUX2::C2CR, 17, 2, ReadWriteMode, DMAMUX2C2CRBase> ;
    using NBREQ = DMAMUX2_C2CR_NBREQ_Values<DMAMUX2::C2CR, 19, 5, ReadWriteMode, DMAMUX2C2CRBase> ;
    using SYNC_ID = DMAMUX2_C2CR_SYNC_ID_Values<DMAMUX2::C2CR, 24, 5, ReadWriteMode, DMAMUX2C2CRBase> ;
    using FieldValues = DMAMUX2_C2CR_SYNC_ID_Values<DMAMUX2::C2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2CRPack  = Register<0x58025808, 32, ReadWriteMode, DMAMUX2C2CRBase, T...> ;

  struct DMAMUX2C3CRBase {} ;

  struct C3CR : public RegisterBase<0x5802580C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX2_C3CR_DMAREQ_ID_Values<DMAMUX2::C3CR, 0, 8, ReadWriteMode, DMAMUX2C3CRBase> ;
    using SOIE = DMAMUX2_C3CR_SOIE_Values<DMAMUX2::C3CR, 8, 1, ReadWriteMode, DMAMUX2C3CRBase> ;
    using EGE = DMAMUX2_C3CR_EGE_Values<DMAMUX2::C3CR, 9, 1, ReadWriteMode, DMAMUX2C3CRBase> ;
    using SE = DMAMUX2_C3CR_SE_Values<DMAMUX2::C3CR, 16, 1, ReadWriteMode, DMAMUX2C3CRBase> ;
    using SPOL = DMAMUX2_C3CR_SPOL_Values<DMAMUX2::C3CR, 17, 2, ReadWriteMode, DMAMUX2C3CRBase> ;
    using NBREQ = DMAMUX2_C3CR_NBREQ_Values<DMAMUX2::C3CR, 19, 5, ReadWriteMode, DMAMUX2C3CRBase> ;
    using SYNC_ID = DMAMUX2_C3CR_SYNC_ID_Values<DMAMUX2::C3CR, 24, 5, ReadWriteMode, DMAMUX2C3CRBase> ;
    using FieldValues = DMAMUX2_C3CR_SYNC_ID_Values<DMAMUX2::C3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C3CRPack  = Register<0x5802580C, 32, ReadWriteMode, DMAMUX2C3CRBase, T...> ;

  struct DMAMUX2C4CRBase {} ;

  struct C4CR : public RegisterBase<0x58025810, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX2_C4CR_DMAREQ_ID_Values<DMAMUX2::C4CR, 0, 8, ReadWriteMode, DMAMUX2C4CRBase> ;
    using SOIE = DMAMUX2_C4CR_SOIE_Values<DMAMUX2::C4CR, 8, 1, ReadWriteMode, DMAMUX2C4CRBase> ;
    using EGE = DMAMUX2_C4CR_EGE_Values<DMAMUX2::C4CR, 9, 1, ReadWriteMode, DMAMUX2C4CRBase> ;
    using SE = DMAMUX2_C4CR_SE_Values<DMAMUX2::C4CR, 16, 1, ReadWriteMode, DMAMUX2C4CRBase> ;
    using SPOL = DMAMUX2_C4CR_SPOL_Values<DMAMUX2::C4CR, 17, 2, ReadWriteMode, DMAMUX2C4CRBase> ;
    using NBREQ = DMAMUX2_C4CR_NBREQ_Values<DMAMUX2::C4CR, 19, 5, ReadWriteMode, DMAMUX2C4CRBase> ;
    using SYNC_ID = DMAMUX2_C4CR_SYNC_ID_Values<DMAMUX2::C4CR, 24, 5, ReadWriteMode, DMAMUX2C4CRBase> ;
    using FieldValues = DMAMUX2_C4CR_SYNC_ID_Values<DMAMUX2::C4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C4CRPack  = Register<0x58025810, 32, ReadWriteMode, DMAMUX2C4CRBase, T...> ;

  struct DMAMUX2C5CRBase {} ;

  struct C5CR : public RegisterBase<0x58025814, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX2_C5CR_DMAREQ_ID_Values<DMAMUX2::C5CR, 0, 8, ReadWriteMode, DMAMUX2C5CRBase> ;
    using SOIE = DMAMUX2_C5CR_SOIE_Values<DMAMUX2::C5CR, 8, 1, ReadWriteMode, DMAMUX2C5CRBase> ;
    using EGE = DMAMUX2_C5CR_EGE_Values<DMAMUX2::C5CR, 9, 1, ReadWriteMode, DMAMUX2C5CRBase> ;
    using SE = DMAMUX2_C5CR_SE_Values<DMAMUX2::C5CR, 16, 1, ReadWriteMode, DMAMUX2C5CRBase> ;
    using SPOL = DMAMUX2_C5CR_SPOL_Values<DMAMUX2::C5CR, 17, 2, ReadWriteMode, DMAMUX2C5CRBase> ;
    using NBREQ = DMAMUX2_C5CR_NBREQ_Values<DMAMUX2::C5CR, 19, 5, ReadWriteMode, DMAMUX2C5CRBase> ;
    using SYNC_ID = DMAMUX2_C5CR_SYNC_ID_Values<DMAMUX2::C5CR, 24, 5, ReadWriteMode, DMAMUX2C5CRBase> ;
    using FieldValues = DMAMUX2_C5CR_SYNC_ID_Values<DMAMUX2::C5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C5CRPack  = Register<0x58025814, 32, ReadWriteMode, DMAMUX2C5CRBase, T...> ;

  struct DMAMUX2C6CRBase {} ;

  struct C6CR : public RegisterBase<0x58025818, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX2_C6CR_DMAREQ_ID_Values<DMAMUX2::C6CR, 0, 8, ReadWriteMode, DMAMUX2C6CRBase> ;
    using SOIE = DMAMUX2_C6CR_SOIE_Values<DMAMUX2::C6CR, 8, 1, ReadWriteMode, DMAMUX2C6CRBase> ;
    using EGE = DMAMUX2_C6CR_EGE_Values<DMAMUX2::C6CR, 9, 1, ReadWriteMode, DMAMUX2C6CRBase> ;
    using SE = DMAMUX2_C6CR_SE_Values<DMAMUX2::C6CR, 16, 1, ReadWriteMode, DMAMUX2C6CRBase> ;
    using SPOL = DMAMUX2_C6CR_SPOL_Values<DMAMUX2::C6CR, 17, 2, ReadWriteMode, DMAMUX2C6CRBase> ;
    using NBREQ = DMAMUX2_C6CR_NBREQ_Values<DMAMUX2::C6CR, 19, 5, ReadWriteMode, DMAMUX2C6CRBase> ;
    using SYNC_ID = DMAMUX2_C6CR_SYNC_ID_Values<DMAMUX2::C6CR, 24, 5, ReadWriteMode, DMAMUX2C6CRBase> ;
    using FieldValues = DMAMUX2_C6CR_SYNC_ID_Values<DMAMUX2::C6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C6CRPack  = Register<0x58025818, 32, ReadWriteMode, DMAMUX2C6CRBase, T...> ;

  struct DMAMUX2C7CRBase {} ;

  struct C7CR : public RegisterBase<0x5802581C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX2_C7CR_DMAREQ_ID_Values<DMAMUX2::C7CR, 0, 8, ReadWriteMode, DMAMUX2C7CRBase> ;
    using SOIE = DMAMUX2_C7CR_SOIE_Values<DMAMUX2::C7CR, 8, 1, ReadWriteMode, DMAMUX2C7CRBase> ;
    using EGE = DMAMUX2_C7CR_EGE_Values<DMAMUX2::C7CR, 9, 1, ReadWriteMode, DMAMUX2C7CRBase> ;
    using SE = DMAMUX2_C7CR_SE_Values<DMAMUX2::C7CR, 16, 1, ReadWriteMode, DMAMUX2C7CRBase> ;
    using SPOL = DMAMUX2_C7CR_SPOL_Values<DMAMUX2::C7CR, 17, 2, ReadWriteMode, DMAMUX2C7CRBase> ;
    using NBREQ = DMAMUX2_C7CR_NBREQ_Values<DMAMUX2::C7CR, 19, 5, ReadWriteMode, DMAMUX2C7CRBase> ;
    using SYNC_ID = DMAMUX2_C7CR_SYNC_ID_Values<DMAMUX2::C7CR, 24, 5, ReadWriteMode, DMAMUX2C7CRBase> ;
    using FieldValues = DMAMUX2_C7CR_SYNC_ID_Values<DMAMUX2::C7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C7CRPack  = Register<0x5802581C, 32, ReadWriteMode, DMAMUX2C7CRBase, T...> ;

  struct DMAMUX2RG0CRBase {} ;

  struct RG0CR : public RegisterBase<0x58025900, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX2_RG0CR_SIG_ID_Values<DMAMUX2::RG0CR, 0, 5, ReadWriteMode, DMAMUX2RG0CRBase> ;
    using OIE = DMAMUX2_RG0CR_OIE_Values<DMAMUX2::RG0CR, 8, 1, ReadWriteMode, DMAMUX2RG0CRBase> ;
    using GE = DMAMUX2_RG0CR_GE_Values<DMAMUX2::RG0CR, 16, 1, ReadWriteMode, DMAMUX2RG0CRBase> ;
    using GPOL = DMAMUX2_RG0CR_GPOL_Values<DMAMUX2::RG0CR, 17, 2, ReadWriteMode, DMAMUX2RG0CRBase> ;
    using GNBREQ = DMAMUX2_RG0CR_GNBREQ_Values<DMAMUX2::RG0CR, 19, 5, ReadWriteMode, DMAMUX2RG0CRBase> ;
    using FieldValues = DMAMUX2_RG0CR_GNBREQ_Values<DMAMUX2::RG0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG0CRPack  = Register<0x58025900, 32, ReadWriteMode, DMAMUX2RG0CRBase, T...> ;

  struct DMAMUX2RG1CRBase {} ;

  struct RG1CR : public RegisterBase<0x58025904, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX2_RG1CR_SIG_ID_Values<DMAMUX2::RG1CR, 0, 5, ReadWriteMode, DMAMUX2RG1CRBase> ;
    using OIE = DMAMUX2_RG1CR_OIE_Values<DMAMUX2::RG1CR, 8, 1, ReadWriteMode, DMAMUX2RG1CRBase> ;
    using GE = DMAMUX2_RG1CR_GE_Values<DMAMUX2::RG1CR, 16, 1, ReadWriteMode, DMAMUX2RG1CRBase> ;
    using GPOL = DMAMUX2_RG1CR_GPOL_Values<DMAMUX2::RG1CR, 17, 2, ReadWriteMode, DMAMUX2RG1CRBase> ;
    using GNBREQ = DMAMUX2_RG1CR_GNBREQ_Values<DMAMUX2::RG1CR, 19, 5, ReadWriteMode, DMAMUX2RG1CRBase> ;
    using FieldValues = DMAMUX2_RG1CR_GNBREQ_Values<DMAMUX2::RG1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG1CRPack  = Register<0x58025904, 32, ReadWriteMode, DMAMUX2RG1CRBase, T...> ;

  struct DMAMUX2RG2CRBase {} ;

  struct RG2CR : public RegisterBase<0x58025908, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX2_RG2CR_SIG_ID_Values<DMAMUX2::RG2CR, 0, 5, ReadWriteMode, DMAMUX2RG2CRBase> ;
    using OIE = DMAMUX2_RG2CR_OIE_Values<DMAMUX2::RG2CR, 8, 1, ReadWriteMode, DMAMUX2RG2CRBase> ;
    using GE = DMAMUX2_RG2CR_GE_Values<DMAMUX2::RG2CR, 16, 1, ReadWriteMode, DMAMUX2RG2CRBase> ;
    using GPOL = DMAMUX2_RG2CR_GPOL_Values<DMAMUX2::RG2CR, 17, 2, ReadWriteMode, DMAMUX2RG2CRBase> ;
    using GNBREQ = DMAMUX2_RG2CR_GNBREQ_Values<DMAMUX2::RG2CR, 19, 5, ReadWriteMode, DMAMUX2RG2CRBase> ;
    using FieldValues = DMAMUX2_RG2CR_GNBREQ_Values<DMAMUX2::RG2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG2CRPack  = Register<0x58025908, 32, ReadWriteMode, DMAMUX2RG2CRBase, T...> ;

  struct DMAMUX2RG3CRBase {} ;

  struct RG3CR : public RegisterBase<0x5802590C, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX2_RG3CR_SIG_ID_Values<DMAMUX2::RG3CR, 0, 5, ReadWriteMode, DMAMUX2RG3CRBase> ;
    using OIE = DMAMUX2_RG3CR_OIE_Values<DMAMUX2::RG3CR, 8, 1, ReadWriteMode, DMAMUX2RG3CRBase> ;
    using GE = DMAMUX2_RG3CR_GE_Values<DMAMUX2::RG3CR, 16, 1, ReadWriteMode, DMAMUX2RG3CRBase> ;
    using GPOL = DMAMUX2_RG3CR_GPOL_Values<DMAMUX2::RG3CR, 17, 2, ReadWriteMode, DMAMUX2RG3CRBase> ;
    using GNBREQ = DMAMUX2_RG3CR_GNBREQ_Values<DMAMUX2::RG3CR, 19, 5, ReadWriteMode, DMAMUX2RG3CRBase> ;
    using FieldValues = DMAMUX2_RG3CR_GNBREQ_Values<DMAMUX2::RG3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG3CRPack  = Register<0x5802590C, 32, ReadWriteMode, DMAMUX2RG3CRBase, T...> ;

  struct DMAMUX2RG4CRBase {} ;

  struct RG4CR : public RegisterBase<0x58025910, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX2_RG4CR_SIG_ID_Values<DMAMUX2::RG4CR, 0, 5, ReadWriteMode, DMAMUX2RG4CRBase> ;
    using OIE = DMAMUX2_RG4CR_OIE_Values<DMAMUX2::RG4CR, 8, 1, ReadWriteMode, DMAMUX2RG4CRBase> ;
    using GE = DMAMUX2_RG4CR_GE_Values<DMAMUX2::RG4CR, 16, 1, ReadWriteMode, DMAMUX2RG4CRBase> ;
    using GPOL = DMAMUX2_RG4CR_GPOL_Values<DMAMUX2::RG4CR, 17, 2, ReadWriteMode, DMAMUX2RG4CRBase> ;
    using GNBREQ = DMAMUX2_RG4CR_GNBREQ_Values<DMAMUX2::RG4CR, 19, 5, ReadWriteMode, DMAMUX2RG4CRBase> ;
    using FieldValues = DMAMUX2_RG4CR_GNBREQ_Values<DMAMUX2::RG4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG4CRPack  = Register<0x58025910, 32, ReadWriteMode, DMAMUX2RG4CRBase, T...> ;

  struct DMAMUX2RG5CRBase {} ;

  struct RG5CR : public RegisterBase<0x58025914, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX2_RG5CR_SIG_ID_Values<DMAMUX2::RG5CR, 0, 5, ReadWriteMode, DMAMUX2RG5CRBase> ;
    using OIE = DMAMUX2_RG5CR_OIE_Values<DMAMUX2::RG5CR, 8, 1, ReadWriteMode, DMAMUX2RG5CRBase> ;
    using GE = DMAMUX2_RG5CR_GE_Values<DMAMUX2::RG5CR, 16, 1, ReadWriteMode, DMAMUX2RG5CRBase> ;
    using GPOL = DMAMUX2_RG5CR_GPOL_Values<DMAMUX2::RG5CR, 17, 2, ReadWriteMode, DMAMUX2RG5CRBase> ;
    using GNBREQ = DMAMUX2_RG5CR_GNBREQ_Values<DMAMUX2::RG5CR, 19, 5, ReadWriteMode, DMAMUX2RG5CRBase> ;
    using FieldValues = DMAMUX2_RG5CR_GNBREQ_Values<DMAMUX2::RG5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG5CRPack  = Register<0x58025914, 32, ReadWriteMode, DMAMUX2RG5CRBase, T...> ;

  struct DMAMUX2RG6CRBase {} ;

  struct RG6CR : public RegisterBase<0x58025918, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX2_RG6CR_SIG_ID_Values<DMAMUX2::RG6CR, 0, 5, ReadWriteMode, DMAMUX2RG6CRBase> ;
    using OIE = DMAMUX2_RG6CR_OIE_Values<DMAMUX2::RG6CR, 8, 1, ReadWriteMode, DMAMUX2RG6CRBase> ;
    using GE = DMAMUX2_RG6CR_GE_Values<DMAMUX2::RG6CR, 16, 1, ReadWriteMode, DMAMUX2RG6CRBase> ;
    using GPOL = DMAMUX2_RG6CR_GPOL_Values<DMAMUX2::RG6CR, 17, 2, ReadWriteMode, DMAMUX2RG6CRBase> ;
    using GNBREQ = DMAMUX2_RG6CR_GNBREQ_Values<DMAMUX2::RG6CR, 19, 5, ReadWriteMode, DMAMUX2RG6CRBase> ;
    using FieldValues = DMAMUX2_RG6CR_GNBREQ_Values<DMAMUX2::RG6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG6CRPack  = Register<0x58025918, 32, ReadWriteMode, DMAMUX2RG6CRBase, T...> ;

  struct DMAMUX2RG7CRBase {} ;

  struct RG7CR : public RegisterBase<0x5802591C, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX2_RG7CR_SIG_ID_Values<DMAMUX2::RG7CR, 0, 5, ReadWriteMode, DMAMUX2RG7CRBase> ;
    using OIE = DMAMUX2_RG7CR_OIE_Values<DMAMUX2::RG7CR, 8, 1, ReadWriteMode, DMAMUX2RG7CRBase> ;
    using GE = DMAMUX2_RG7CR_GE_Values<DMAMUX2::RG7CR, 16, 1, ReadWriteMode, DMAMUX2RG7CRBase> ;
    using GPOL = DMAMUX2_RG7CR_GPOL_Values<DMAMUX2::RG7CR, 17, 2, ReadWriteMode, DMAMUX2RG7CRBase> ;
    using GNBREQ = DMAMUX2_RG7CR_GNBREQ_Values<DMAMUX2::RG7CR, 19, 5, ReadWriteMode, DMAMUX2RG7CRBase> ;
    using FieldValues = DMAMUX2_RG7CR_GNBREQ_Values<DMAMUX2::RG7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG7CRPack  = Register<0x5802591C, 32, ReadWriteMode, DMAMUX2RG7CRBase, T...> ;

  struct DMAMUX2RGSRBase {} ;

  struct RGSR : public RegisterBase<0x58025940, 32, ReadMode>
  {
    using OF = DMAMUX2_RGSR_OF_Values<DMAMUX2::RGSR, 0, 8, ReadMode, DMAMUX2RGSRBase> ;
    using FieldValues = DMAMUX2_RGSR_OF_Values<DMAMUX2::RGSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RGSRPack  = Register<0x58025940, 32, ReadMode, DMAMUX2RGSRBase, T...> ;

  struct DMAMUX2RGCFRBase {} ;

  struct RGCFR : public RegisterBase<0x58025944, 32, WriteMode>
  {
    using COF = DMAMUX2_RGCFR_COF_Values<DMAMUX2::RGCFR, 0, 8, WriteMode, DMAMUX2RGCFRBase> ;
    using FieldValues = DMAMUX2_RGCFR_COF_Values<DMAMUX2::RGCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RGCFRPack  = Register<0x58025944, 32, WriteMode, DMAMUX2RGCFRBase, T...> ;

  struct DMAMUX2CSRBase {} ;

  struct CSR : public RegisterBase<0x58025880, 32, ReadMode>
  {
    using SOF = DMAMUX2_CSR_SOF_Values<DMAMUX2::CSR, 0, 16, ReadMode, DMAMUX2CSRBase> ;
    using FieldValues = DMAMUX2_CSR_SOF_Values<DMAMUX2::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x58025880, 32, ReadMode, DMAMUX2CSRBase, T...> ;

  struct DMAMUX2CFRBase {} ;

  struct CFR : public RegisterBase<0x58025884, 32, WriteMode>
  {
    using CSOF = DMAMUX2_CFR_CSOF_Values<DMAMUX2::CFR, 0, 16, WriteMode, DMAMUX2CFRBase> ;
    using FieldValues = DMAMUX2_CFR_CSOF_Values<DMAMUX2::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x58025884, 32, WriteMode, DMAMUX2CFRBase, T...> ;

} ;

#endif //#if !defined(DMAMUX2REGISTERS_HPP)
