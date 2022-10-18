/*******************************************************************************
* Filename      : hsemregisters.hpp
*
* Details       : HSEM. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(HSEMREGISTERS_HPP)
#define HSEMREGISTERS_HPP

#include "hsemfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct HSEM
{
  struct HSEMHSEM_R0Base {} ;

  struct HSEM_R0 : public RegisterBase<0x58026400, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R0_PROCID_Values<HSEM::HSEM_R0, 0, 8, ReadWriteMode, HSEMHSEM_R0Base> ;
    using COREID = HSEM_HSEM_R0_COREID_Values<HSEM::HSEM_R0, 8, 4, ReadWriteMode, HSEMHSEM_R0Base> ;
    using LOCK = HSEM_HSEM_R0_LOCK_Values<HSEM::HSEM_R0, 31, 1, ReadWriteMode, HSEMHSEM_R0Base> ;
    using FieldValues = HSEM_HSEM_R0_LOCK_Values<HSEM::HSEM_R0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R0Pack  = Register<0x58026400, 32, ReadWriteMode, HSEMHSEM_R0Base, T...> ;

  struct HSEMHSEM_R1Base {} ;

  struct HSEM_R1 : public RegisterBase<0x58026404, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R1_PROCID_Values<HSEM::HSEM_R1, 0, 8, ReadWriteMode, HSEMHSEM_R1Base> ;
    using COREID = HSEM_HSEM_R1_COREID_Values<HSEM::HSEM_R1, 8, 4, ReadWriteMode, HSEMHSEM_R1Base> ;
    using LOCK = HSEM_HSEM_R1_LOCK_Values<HSEM::HSEM_R1, 31, 1, ReadWriteMode, HSEMHSEM_R1Base> ;
    using FieldValues = HSEM_HSEM_R1_LOCK_Values<HSEM::HSEM_R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R1Pack  = Register<0x58026404, 32, ReadWriteMode, HSEMHSEM_R1Base, T...> ;

  struct HSEMHSEM_R2Base {} ;

  struct HSEM_R2 : public RegisterBase<0x58026408, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R2_PROCID_Values<HSEM::HSEM_R2, 0, 8, ReadWriteMode, HSEMHSEM_R2Base> ;
    using COREID = HSEM_HSEM_R2_COREID_Values<HSEM::HSEM_R2, 8, 4, ReadWriteMode, HSEMHSEM_R2Base> ;
    using LOCK = HSEM_HSEM_R2_LOCK_Values<HSEM::HSEM_R2, 31, 1, ReadWriteMode, HSEMHSEM_R2Base> ;
    using FieldValues = HSEM_HSEM_R2_LOCK_Values<HSEM::HSEM_R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R2Pack  = Register<0x58026408, 32, ReadWriteMode, HSEMHSEM_R2Base, T...> ;

  struct HSEMHSEM_R3Base {} ;

  struct HSEM_R3 : public RegisterBase<0x5802640C, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R3_PROCID_Values<HSEM::HSEM_R3, 0, 8, ReadWriteMode, HSEMHSEM_R3Base> ;
    using COREID = HSEM_HSEM_R3_COREID_Values<HSEM::HSEM_R3, 8, 4, ReadWriteMode, HSEMHSEM_R3Base> ;
    using LOCK = HSEM_HSEM_R3_LOCK_Values<HSEM::HSEM_R3, 31, 1, ReadWriteMode, HSEMHSEM_R3Base> ;
    using FieldValues = HSEM_HSEM_R3_LOCK_Values<HSEM::HSEM_R3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R3Pack  = Register<0x5802640C, 32, ReadWriteMode, HSEMHSEM_R3Base, T...> ;

  struct HSEMHSEM_R4Base {} ;

  struct HSEM_R4 : public RegisterBase<0x58026410, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R4_PROCID_Values<HSEM::HSEM_R4, 0, 8, ReadWriteMode, HSEMHSEM_R4Base> ;
    using COREID = HSEM_HSEM_R4_COREID_Values<HSEM::HSEM_R4, 8, 4, ReadWriteMode, HSEMHSEM_R4Base> ;
    using LOCK = HSEM_HSEM_R4_LOCK_Values<HSEM::HSEM_R4, 31, 1, ReadWriteMode, HSEMHSEM_R4Base> ;
    using FieldValues = HSEM_HSEM_R4_LOCK_Values<HSEM::HSEM_R4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R4Pack  = Register<0x58026410, 32, ReadWriteMode, HSEMHSEM_R4Base, T...> ;

  struct HSEMHSEM_R5Base {} ;

  struct HSEM_R5 : public RegisterBase<0x58026414, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R5_PROCID_Values<HSEM::HSEM_R5, 0, 8, ReadWriteMode, HSEMHSEM_R5Base> ;
    using COREID = HSEM_HSEM_R5_COREID_Values<HSEM::HSEM_R5, 8, 4, ReadWriteMode, HSEMHSEM_R5Base> ;
    using LOCK = HSEM_HSEM_R5_LOCK_Values<HSEM::HSEM_R5, 31, 1, ReadWriteMode, HSEMHSEM_R5Base> ;
    using FieldValues = HSEM_HSEM_R5_LOCK_Values<HSEM::HSEM_R5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R5Pack  = Register<0x58026414, 32, ReadWriteMode, HSEMHSEM_R5Base, T...> ;

  struct HSEMHSEM_R6Base {} ;

  struct HSEM_R6 : public RegisterBase<0x58026418, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R6_PROCID_Values<HSEM::HSEM_R6, 0, 8, ReadWriteMode, HSEMHSEM_R6Base> ;
    using COREID = HSEM_HSEM_R6_COREID_Values<HSEM::HSEM_R6, 8, 4, ReadWriteMode, HSEMHSEM_R6Base> ;
    using LOCK = HSEM_HSEM_R6_LOCK_Values<HSEM::HSEM_R6, 31, 1, ReadWriteMode, HSEMHSEM_R6Base> ;
    using FieldValues = HSEM_HSEM_R6_LOCK_Values<HSEM::HSEM_R6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R6Pack  = Register<0x58026418, 32, ReadWriteMode, HSEMHSEM_R6Base, T...> ;

  struct HSEMHSEM_R7Base {} ;

  struct HSEM_R7 : public RegisterBase<0x5802641C, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R7_PROCID_Values<HSEM::HSEM_R7, 0, 8, ReadWriteMode, HSEMHSEM_R7Base> ;
    using COREID = HSEM_HSEM_R7_COREID_Values<HSEM::HSEM_R7, 8, 4, ReadWriteMode, HSEMHSEM_R7Base> ;
    using LOCK = HSEM_HSEM_R7_LOCK_Values<HSEM::HSEM_R7, 31, 1, ReadWriteMode, HSEMHSEM_R7Base> ;
    using FieldValues = HSEM_HSEM_R7_LOCK_Values<HSEM::HSEM_R7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R7Pack  = Register<0x5802641C, 32, ReadWriteMode, HSEMHSEM_R7Base, T...> ;

  struct HSEMHSEM_R8Base {} ;

  struct HSEM_R8 : public RegisterBase<0x58026420, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R8_PROCID_Values<HSEM::HSEM_R8, 0, 8, ReadWriteMode, HSEMHSEM_R8Base> ;
    using COREID = HSEM_HSEM_R8_COREID_Values<HSEM::HSEM_R8, 8, 4, ReadWriteMode, HSEMHSEM_R8Base> ;
    using LOCK = HSEM_HSEM_R8_LOCK_Values<HSEM::HSEM_R8, 31, 1, ReadWriteMode, HSEMHSEM_R8Base> ;
    using FieldValues = HSEM_HSEM_R8_LOCK_Values<HSEM::HSEM_R8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R8Pack  = Register<0x58026420, 32, ReadWriteMode, HSEMHSEM_R8Base, T...> ;

  struct HSEMHSEM_R9Base {} ;

  struct HSEM_R9 : public RegisterBase<0x58026424, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R9_PROCID_Values<HSEM::HSEM_R9, 0, 8, ReadWriteMode, HSEMHSEM_R9Base> ;
    using COREID = HSEM_HSEM_R9_COREID_Values<HSEM::HSEM_R9, 8, 4, ReadWriteMode, HSEMHSEM_R9Base> ;
    using LOCK = HSEM_HSEM_R9_LOCK_Values<HSEM::HSEM_R9, 31, 1, ReadWriteMode, HSEMHSEM_R9Base> ;
    using FieldValues = HSEM_HSEM_R9_LOCK_Values<HSEM::HSEM_R9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R9Pack  = Register<0x58026424, 32, ReadWriteMode, HSEMHSEM_R9Base, T...> ;

  struct HSEMHSEM_R10Base {} ;

  struct HSEM_R10 : public RegisterBase<0x58026428, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R10_PROCID_Values<HSEM::HSEM_R10, 0, 8, ReadWriteMode, HSEMHSEM_R10Base> ;
    using COREID = HSEM_HSEM_R10_COREID_Values<HSEM::HSEM_R10, 8, 4, ReadWriteMode, HSEMHSEM_R10Base> ;
    using LOCK = HSEM_HSEM_R10_LOCK_Values<HSEM::HSEM_R10, 31, 1, ReadWriteMode, HSEMHSEM_R10Base> ;
    using FieldValues = HSEM_HSEM_R10_LOCK_Values<HSEM::HSEM_R10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R10Pack  = Register<0x58026428, 32, ReadWriteMode, HSEMHSEM_R10Base, T...> ;

  struct HSEMHSEM_R11Base {} ;

  struct HSEM_R11 : public RegisterBase<0x5802642C, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R11_PROCID_Values<HSEM::HSEM_R11, 0, 8, ReadWriteMode, HSEMHSEM_R11Base> ;
    using COREID = HSEM_HSEM_R11_COREID_Values<HSEM::HSEM_R11, 8, 4, ReadWriteMode, HSEMHSEM_R11Base> ;
    using LOCK = HSEM_HSEM_R11_LOCK_Values<HSEM::HSEM_R11, 31, 1, ReadWriteMode, HSEMHSEM_R11Base> ;
    using FieldValues = HSEM_HSEM_R11_LOCK_Values<HSEM::HSEM_R11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R11Pack  = Register<0x5802642C, 32, ReadWriteMode, HSEMHSEM_R11Base, T...> ;

  struct HSEMHSEM_R12Base {} ;

  struct HSEM_R12 : public RegisterBase<0x58026430, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R12_PROCID_Values<HSEM::HSEM_R12, 0, 8, ReadWriteMode, HSEMHSEM_R12Base> ;
    using COREID = HSEM_HSEM_R12_COREID_Values<HSEM::HSEM_R12, 8, 4, ReadWriteMode, HSEMHSEM_R12Base> ;
    using LOCK = HSEM_HSEM_R12_LOCK_Values<HSEM::HSEM_R12, 31, 1, ReadWriteMode, HSEMHSEM_R12Base> ;
    using FieldValues = HSEM_HSEM_R12_LOCK_Values<HSEM::HSEM_R12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R12Pack  = Register<0x58026430, 32, ReadWriteMode, HSEMHSEM_R12Base, T...> ;

  struct HSEMHSEM_R13Base {} ;

  struct HSEM_R13 : public RegisterBase<0x58026434, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R13_PROCID_Values<HSEM::HSEM_R13, 0, 8, ReadWriteMode, HSEMHSEM_R13Base> ;
    using COREID = HSEM_HSEM_R13_COREID_Values<HSEM::HSEM_R13, 8, 4, ReadWriteMode, HSEMHSEM_R13Base> ;
    using LOCK = HSEM_HSEM_R13_LOCK_Values<HSEM::HSEM_R13, 31, 1, ReadWriteMode, HSEMHSEM_R13Base> ;
    using FieldValues = HSEM_HSEM_R13_LOCK_Values<HSEM::HSEM_R13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R13Pack  = Register<0x58026434, 32, ReadWriteMode, HSEMHSEM_R13Base, T...> ;

  struct HSEMHSEM_R14Base {} ;

  struct HSEM_R14 : public RegisterBase<0x58026438, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R14_PROCID_Values<HSEM::HSEM_R14, 0, 8, ReadWriteMode, HSEMHSEM_R14Base> ;
    using COREID = HSEM_HSEM_R14_COREID_Values<HSEM::HSEM_R14, 8, 4, ReadWriteMode, HSEMHSEM_R14Base> ;
    using LOCK = HSEM_HSEM_R14_LOCK_Values<HSEM::HSEM_R14, 31, 1, ReadWriteMode, HSEMHSEM_R14Base> ;
    using FieldValues = HSEM_HSEM_R14_LOCK_Values<HSEM::HSEM_R14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R14Pack  = Register<0x58026438, 32, ReadWriteMode, HSEMHSEM_R14Base, T...> ;

  struct HSEMHSEM_R15Base {} ;

  struct HSEM_R15 : public RegisterBase<0x5802643C, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R15_PROCID_Values<HSEM::HSEM_R15, 0, 8, ReadWriteMode, HSEMHSEM_R15Base> ;
    using COREID = HSEM_HSEM_R15_COREID_Values<HSEM::HSEM_R15, 8, 4, ReadWriteMode, HSEMHSEM_R15Base> ;
    using LOCK = HSEM_HSEM_R15_LOCK_Values<HSEM::HSEM_R15, 31, 1, ReadWriteMode, HSEMHSEM_R15Base> ;
    using FieldValues = HSEM_HSEM_R15_LOCK_Values<HSEM::HSEM_R15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R15Pack  = Register<0x5802643C, 32, ReadWriteMode, HSEMHSEM_R15Base, T...> ;

  struct HSEMHSEM_R16Base {} ;

  struct HSEM_R16 : public RegisterBase<0x58026440, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R16_PROCID_Values<HSEM::HSEM_R16, 0, 8, ReadWriteMode, HSEMHSEM_R16Base> ;
    using COREID = HSEM_HSEM_R16_COREID_Values<HSEM::HSEM_R16, 8, 4, ReadWriteMode, HSEMHSEM_R16Base> ;
    using LOCK = HSEM_HSEM_R16_LOCK_Values<HSEM::HSEM_R16, 31, 1, ReadWriteMode, HSEMHSEM_R16Base> ;
    using FieldValues = HSEM_HSEM_R16_LOCK_Values<HSEM::HSEM_R16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R16Pack  = Register<0x58026440, 32, ReadWriteMode, HSEMHSEM_R16Base, T...> ;

  struct HSEMHSEM_R17Base {} ;

  struct HSEM_R17 : public RegisterBase<0x58026444, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R17_PROCID_Values<HSEM::HSEM_R17, 0, 8, ReadWriteMode, HSEMHSEM_R17Base> ;
    using COREID = HSEM_HSEM_R17_COREID_Values<HSEM::HSEM_R17, 8, 4, ReadWriteMode, HSEMHSEM_R17Base> ;
    using LOCK = HSEM_HSEM_R17_LOCK_Values<HSEM::HSEM_R17, 31, 1, ReadWriteMode, HSEMHSEM_R17Base> ;
    using FieldValues = HSEM_HSEM_R17_LOCK_Values<HSEM::HSEM_R17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R17Pack  = Register<0x58026444, 32, ReadWriteMode, HSEMHSEM_R17Base, T...> ;

  struct HSEMHSEM_R18Base {} ;

  struct HSEM_R18 : public RegisterBase<0x58026448, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R18_PROCID_Values<HSEM::HSEM_R18, 0, 8, ReadWriteMode, HSEMHSEM_R18Base> ;
    using COREID = HSEM_HSEM_R18_COREID_Values<HSEM::HSEM_R18, 8, 4, ReadWriteMode, HSEMHSEM_R18Base> ;
    using LOCK = HSEM_HSEM_R18_LOCK_Values<HSEM::HSEM_R18, 31, 1, ReadWriteMode, HSEMHSEM_R18Base> ;
    using FieldValues = HSEM_HSEM_R18_LOCK_Values<HSEM::HSEM_R18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R18Pack  = Register<0x58026448, 32, ReadWriteMode, HSEMHSEM_R18Base, T...> ;

  struct HSEMHSEM_R19Base {} ;

  struct HSEM_R19 : public RegisterBase<0x5802644C, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R19_PROCID_Values<HSEM::HSEM_R19, 0, 8, ReadWriteMode, HSEMHSEM_R19Base> ;
    using COREID = HSEM_HSEM_R19_COREID_Values<HSEM::HSEM_R19, 8, 4, ReadWriteMode, HSEMHSEM_R19Base> ;
    using LOCK = HSEM_HSEM_R19_LOCK_Values<HSEM::HSEM_R19, 31, 1, ReadWriteMode, HSEMHSEM_R19Base> ;
    using FieldValues = HSEM_HSEM_R19_LOCK_Values<HSEM::HSEM_R19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R19Pack  = Register<0x5802644C, 32, ReadWriteMode, HSEMHSEM_R19Base, T...> ;

  struct HSEMHSEM_R20Base {} ;

  struct HSEM_R20 : public RegisterBase<0x58026450, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R20_PROCID_Values<HSEM::HSEM_R20, 0, 8, ReadWriteMode, HSEMHSEM_R20Base> ;
    using COREID = HSEM_HSEM_R20_COREID_Values<HSEM::HSEM_R20, 8, 4, ReadWriteMode, HSEMHSEM_R20Base> ;
    using LOCK = HSEM_HSEM_R20_LOCK_Values<HSEM::HSEM_R20, 31, 1, ReadWriteMode, HSEMHSEM_R20Base> ;
    using FieldValues = HSEM_HSEM_R20_LOCK_Values<HSEM::HSEM_R20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R20Pack  = Register<0x58026450, 32, ReadWriteMode, HSEMHSEM_R20Base, T...> ;

  struct HSEMHSEM_R21Base {} ;

  struct HSEM_R21 : public RegisterBase<0x58026454, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R21_PROCID_Values<HSEM::HSEM_R21, 0, 8, ReadWriteMode, HSEMHSEM_R21Base> ;
    using COREID = HSEM_HSEM_R21_COREID_Values<HSEM::HSEM_R21, 8, 4, ReadWriteMode, HSEMHSEM_R21Base> ;
    using LOCK = HSEM_HSEM_R21_LOCK_Values<HSEM::HSEM_R21, 31, 1, ReadWriteMode, HSEMHSEM_R21Base> ;
    using FieldValues = HSEM_HSEM_R21_LOCK_Values<HSEM::HSEM_R21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R21Pack  = Register<0x58026454, 32, ReadWriteMode, HSEMHSEM_R21Base, T...> ;

  struct HSEMHSEM_R22Base {} ;

  struct HSEM_R22 : public RegisterBase<0x58026458, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R22_PROCID_Values<HSEM::HSEM_R22, 0, 8, ReadWriteMode, HSEMHSEM_R22Base> ;
    using COREID = HSEM_HSEM_R22_COREID_Values<HSEM::HSEM_R22, 8, 4, ReadWriteMode, HSEMHSEM_R22Base> ;
    using LOCK = HSEM_HSEM_R22_LOCK_Values<HSEM::HSEM_R22, 31, 1, ReadWriteMode, HSEMHSEM_R22Base> ;
    using FieldValues = HSEM_HSEM_R22_LOCK_Values<HSEM::HSEM_R22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R22Pack  = Register<0x58026458, 32, ReadWriteMode, HSEMHSEM_R22Base, T...> ;

  struct HSEMHSEM_R23Base {} ;

  struct HSEM_R23 : public RegisterBase<0x5802645C, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R23_PROCID_Values<HSEM::HSEM_R23, 0, 8, ReadWriteMode, HSEMHSEM_R23Base> ;
    using COREID = HSEM_HSEM_R23_COREID_Values<HSEM::HSEM_R23, 8, 4, ReadWriteMode, HSEMHSEM_R23Base> ;
    using LOCK = HSEM_HSEM_R23_LOCK_Values<HSEM::HSEM_R23, 31, 1, ReadWriteMode, HSEMHSEM_R23Base> ;
    using FieldValues = HSEM_HSEM_R23_LOCK_Values<HSEM::HSEM_R23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R23Pack  = Register<0x5802645C, 32, ReadWriteMode, HSEMHSEM_R23Base, T...> ;

  struct HSEMHSEM_R24Base {} ;

  struct HSEM_R24 : public RegisterBase<0x58026460, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R24_PROCID_Values<HSEM::HSEM_R24, 0, 8, ReadWriteMode, HSEMHSEM_R24Base> ;
    using COREID = HSEM_HSEM_R24_COREID_Values<HSEM::HSEM_R24, 8, 4, ReadWriteMode, HSEMHSEM_R24Base> ;
    using LOCK = HSEM_HSEM_R24_LOCK_Values<HSEM::HSEM_R24, 31, 1, ReadWriteMode, HSEMHSEM_R24Base> ;
    using FieldValues = HSEM_HSEM_R24_LOCK_Values<HSEM::HSEM_R24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R24Pack  = Register<0x58026460, 32, ReadWriteMode, HSEMHSEM_R24Base, T...> ;

  struct HSEMHSEM_R25Base {} ;

  struct HSEM_R25 : public RegisterBase<0x58026464, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R25_PROCID_Values<HSEM::HSEM_R25, 0, 8, ReadWriteMode, HSEMHSEM_R25Base> ;
    using COREID = HSEM_HSEM_R25_COREID_Values<HSEM::HSEM_R25, 8, 4, ReadWriteMode, HSEMHSEM_R25Base> ;
    using LOCK = HSEM_HSEM_R25_LOCK_Values<HSEM::HSEM_R25, 31, 1, ReadWriteMode, HSEMHSEM_R25Base> ;
    using FieldValues = HSEM_HSEM_R25_LOCK_Values<HSEM::HSEM_R25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R25Pack  = Register<0x58026464, 32, ReadWriteMode, HSEMHSEM_R25Base, T...> ;

  struct HSEMHSEM_R26Base {} ;

  struct HSEM_R26 : public RegisterBase<0x58026468, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R26_PROCID_Values<HSEM::HSEM_R26, 0, 8, ReadWriteMode, HSEMHSEM_R26Base> ;
    using COREID = HSEM_HSEM_R26_COREID_Values<HSEM::HSEM_R26, 8, 4, ReadWriteMode, HSEMHSEM_R26Base> ;
    using LOCK = HSEM_HSEM_R26_LOCK_Values<HSEM::HSEM_R26, 31, 1, ReadWriteMode, HSEMHSEM_R26Base> ;
    using FieldValues = HSEM_HSEM_R26_LOCK_Values<HSEM::HSEM_R26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R26Pack  = Register<0x58026468, 32, ReadWriteMode, HSEMHSEM_R26Base, T...> ;

  struct HSEMHSEM_R27Base {} ;

  struct HSEM_R27 : public RegisterBase<0x5802646C, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R27_PROCID_Values<HSEM::HSEM_R27, 0, 8, ReadWriteMode, HSEMHSEM_R27Base> ;
    using COREID = HSEM_HSEM_R27_COREID_Values<HSEM::HSEM_R27, 8, 4, ReadWriteMode, HSEMHSEM_R27Base> ;
    using LOCK = HSEM_HSEM_R27_LOCK_Values<HSEM::HSEM_R27, 31, 1, ReadWriteMode, HSEMHSEM_R27Base> ;
    using FieldValues = HSEM_HSEM_R27_LOCK_Values<HSEM::HSEM_R27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R27Pack  = Register<0x5802646C, 32, ReadWriteMode, HSEMHSEM_R27Base, T...> ;

  struct HSEMHSEM_R28Base {} ;

  struct HSEM_R28 : public RegisterBase<0x58026470, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R28_PROCID_Values<HSEM::HSEM_R28, 0, 8, ReadWriteMode, HSEMHSEM_R28Base> ;
    using COREID = HSEM_HSEM_R28_COREID_Values<HSEM::HSEM_R28, 8, 4, ReadWriteMode, HSEMHSEM_R28Base> ;
    using LOCK = HSEM_HSEM_R28_LOCK_Values<HSEM::HSEM_R28, 31, 1, ReadWriteMode, HSEMHSEM_R28Base> ;
    using FieldValues = HSEM_HSEM_R28_LOCK_Values<HSEM::HSEM_R28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R28Pack  = Register<0x58026470, 32, ReadWriteMode, HSEMHSEM_R28Base, T...> ;

  struct HSEMHSEM_R29Base {} ;

  struct HSEM_R29 : public RegisterBase<0x58026474, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R29_PROCID_Values<HSEM::HSEM_R29, 0, 8, ReadWriteMode, HSEMHSEM_R29Base> ;
    using COREID = HSEM_HSEM_R29_COREID_Values<HSEM::HSEM_R29, 8, 4, ReadWriteMode, HSEMHSEM_R29Base> ;
    using LOCK = HSEM_HSEM_R29_LOCK_Values<HSEM::HSEM_R29, 31, 1, ReadWriteMode, HSEMHSEM_R29Base> ;
    using FieldValues = HSEM_HSEM_R29_LOCK_Values<HSEM::HSEM_R29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R29Pack  = Register<0x58026474, 32, ReadWriteMode, HSEMHSEM_R29Base, T...> ;

  struct HSEMHSEM_R30Base {} ;

  struct HSEM_R30 : public RegisterBase<0x58026478, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R30_PROCID_Values<HSEM::HSEM_R30, 0, 8, ReadWriteMode, HSEMHSEM_R30Base> ;
    using COREID = HSEM_HSEM_R30_COREID_Values<HSEM::HSEM_R30, 8, 4, ReadWriteMode, HSEMHSEM_R30Base> ;
    using LOCK = HSEM_HSEM_R30_LOCK_Values<HSEM::HSEM_R30, 31, 1, ReadWriteMode, HSEMHSEM_R30Base> ;
    using FieldValues = HSEM_HSEM_R30_LOCK_Values<HSEM::HSEM_R30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R30Pack  = Register<0x58026478, 32, ReadWriteMode, HSEMHSEM_R30Base, T...> ;

  struct HSEMHSEM_R31Base {} ;

  struct HSEM_R31 : public RegisterBase<0x5802647C, 32, ReadWriteMode>
  {
    using PROCID = HSEM_HSEM_R31_PROCID_Values<HSEM::HSEM_R31, 0, 8, ReadWriteMode, HSEMHSEM_R31Base> ;
    using COREID = HSEM_HSEM_R31_COREID_Values<HSEM::HSEM_R31, 8, 4, ReadWriteMode, HSEMHSEM_R31Base> ;
    using LOCK = HSEM_HSEM_R31_LOCK_Values<HSEM::HSEM_R31, 31, 1, ReadWriteMode, HSEMHSEM_R31Base> ;
    using FieldValues = HSEM_HSEM_R31_LOCK_Values<HSEM::HSEM_R31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_R31Pack  = Register<0x5802647C, 32, ReadWriteMode, HSEMHSEM_R31Base, T...> ;

  struct HSEMHSEM_RLR0Base {} ;

  struct HSEM_RLR0 : public RegisterBase<0x58026480, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR0_PROCID_Values<HSEM::HSEM_RLR0, 0, 8, ReadMode, HSEMHSEM_RLR0Base> ;
    using COREID = HSEM_HSEM_RLR0_COREID_Values<HSEM::HSEM_RLR0, 8, 4, ReadMode, HSEMHSEM_RLR0Base> ;
    using LOCK = HSEM_HSEM_RLR0_LOCK_Values<HSEM::HSEM_RLR0, 31, 1, ReadMode, HSEMHSEM_RLR0Base> ;
    using FieldValues = HSEM_HSEM_RLR0_LOCK_Values<HSEM::HSEM_RLR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR0Pack  = Register<0x58026480, 32, ReadMode, HSEMHSEM_RLR0Base, T...> ;

  struct HSEMHSEM_RLR1Base {} ;

  struct HSEM_RLR1 : public RegisterBase<0x58026484, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR1_PROCID_Values<HSEM::HSEM_RLR1, 0, 8, ReadMode, HSEMHSEM_RLR1Base> ;
    using COREID = HSEM_HSEM_RLR1_COREID_Values<HSEM::HSEM_RLR1, 8, 4, ReadMode, HSEMHSEM_RLR1Base> ;
    using LOCK = HSEM_HSEM_RLR1_LOCK_Values<HSEM::HSEM_RLR1, 31, 1, ReadMode, HSEMHSEM_RLR1Base> ;
    using FieldValues = HSEM_HSEM_RLR1_LOCK_Values<HSEM::HSEM_RLR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR1Pack  = Register<0x58026484, 32, ReadMode, HSEMHSEM_RLR1Base, T...> ;

  struct HSEMHSEM_RLR2Base {} ;

  struct HSEM_RLR2 : public RegisterBase<0x58026488, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR2_PROCID_Values<HSEM::HSEM_RLR2, 0, 8, ReadMode, HSEMHSEM_RLR2Base> ;
    using COREID = HSEM_HSEM_RLR2_COREID_Values<HSEM::HSEM_RLR2, 8, 4, ReadMode, HSEMHSEM_RLR2Base> ;
    using LOCK = HSEM_HSEM_RLR2_LOCK_Values<HSEM::HSEM_RLR2, 31, 1, ReadMode, HSEMHSEM_RLR2Base> ;
    using FieldValues = HSEM_HSEM_RLR2_LOCK_Values<HSEM::HSEM_RLR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR2Pack  = Register<0x58026488, 32, ReadMode, HSEMHSEM_RLR2Base, T...> ;

  struct HSEMHSEM_RLR3Base {} ;

  struct HSEM_RLR3 : public RegisterBase<0x5802648C, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR3_PROCID_Values<HSEM::HSEM_RLR3, 0, 8, ReadMode, HSEMHSEM_RLR3Base> ;
    using COREID = HSEM_HSEM_RLR3_COREID_Values<HSEM::HSEM_RLR3, 8, 4, ReadMode, HSEMHSEM_RLR3Base> ;
    using LOCK = HSEM_HSEM_RLR3_LOCK_Values<HSEM::HSEM_RLR3, 31, 1, ReadMode, HSEMHSEM_RLR3Base> ;
    using FieldValues = HSEM_HSEM_RLR3_LOCK_Values<HSEM::HSEM_RLR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR3Pack  = Register<0x5802648C, 32, ReadMode, HSEMHSEM_RLR3Base, T...> ;

  struct HSEMHSEM_RLR4Base {} ;

  struct HSEM_RLR4 : public RegisterBase<0x58026490, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR4_PROCID_Values<HSEM::HSEM_RLR4, 0, 8, ReadMode, HSEMHSEM_RLR4Base> ;
    using COREID = HSEM_HSEM_RLR4_COREID_Values<HSEM::HSEM_RLR4, 8, 4, ReadMode, HSEMHSEM_RLR4Base> ;
    using LOCK = HSEM_HSEM_RLR4_LOCK_Values<HSEM::HSEM_RLR4, 31, 1, ReadMode, HSEMHSEM_RLR4Base> ;
    using FieldValues = HSEM_HSEM_RLR4_LOCK_Values<HSEM::HSEM_RLR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR4Pack  = Register<0x58026490, 32, ReadMode, HSEMHSEM_RLR4Base, T...> ;

  struct HSEMHSEM_RLR5Base {} ;

  struct HSEM_RLR5 : public RegisterBase<0x58026494, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR5_PROCID_Values<HSEM::HSEM_RLR5, 0, 8, ReadMode, HSEMHSEM_RLR5Base> ;
    using COREID = HSEM_HSEM_RLR5_COREID_Values<HSEM::HSEM_RLR5, 8, 4, ReadMode, HSEMHSEM_RLR5Base> ;
    using LOCK = HSEM_HSEM_RLR5_LOCK_Values<HSEM::HSEM_RLR5, 31, 1, ReadMode, HSEMHSEM_RLR5Base> ;
    using FieldValues = HSEM_HSEM_RLR5_LOCK_Values<HSEM::HSEM_RLR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR5Pack  = Register<0x58026494, 32, ReadMode, HSEMHSEM_RLR5Base, T...> ;

  struct HSEMHSEM_RLR6Base {} ;

  struct HSEM_RLR6 : public RegisterBase<0x58026498, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR6_PROCID_Values<HSEM::HSEM_RLR6, 0, 8, ReadMode, HSEMHSEM_RLR6Base> ;
    using COREID = HSEM_HSEM_RLR6_COREID_Values<HSEM::HSEM_RLR6, 8, 4, ReadMode, HSEMHSEM_RLR6Base> ;
    using LOCK = HSEM_HSEM_RLR6_LOCK_Values<HSEM::HSEM_RLR6, 31, 1, ReadMode, HSEMHSEM_RLR6Base> ;
    using FieldValues = HSEM_HSEM_RLR6_LOCK_Values<HSEM::HSEM_RLR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR6Pack  = Register<0x58026498, 32, ReadMode, HSEMHSEM_RLR6Base, T...> ;

  struct HSEMHSEM_RLR7Base {} ;

  struct HSEM_RLR7 : public RegisterBase<0x5802649C, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR7_PROCID_Values<HSEM::HSEM_RLR7, 0, 8, ReadMode, HSEMHSEM_RLR7Base> ;
    using COREID = HSEM_HSEM_RLR7_COREID_Values<HSEM::HSEM_RLR7, 8, 4, ReadMode, HSEMHSEM_RLR7Base> ;
    using LOCK = HSEM_HSEM_RLR7_LOCK_Values<HSEM::HSEM_RLR7, 31, 1, ReadMode, HSEMHSEM_RLR7Base> ;
    using FieldValues = HSEM_HSEM_RLR7_LOCK_Values<HSEM::HSEM_RLR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR7Pack  = Register<0x5802649C, 32, ReadMode, HSEMHSEM_RLR7Base, T...> ;

  struct HSEMHSEM_RLR8Base {} ;

  struct HSEM_RLR8 : public RegisterBase<0x580264A0, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR8_PROCID_Values<HSEM::HSEM_RLR8, 0, 8, ReadMode, HSEMHSEM_RLR8Base> ;
    using COREID = HSEM_HSEM_RLR8_COREID_Values<HSEM::HSEM_RLR8, 8, 4, ReadMode, HSEMHSEM_RLR8Base> ;
    using LOCK = HSEM_HSEM_RLR8_LOCK_Values<HSEM::HSEM_RLR8, 31, 1, ReadMode, HSEMHSEM_RLR8Base> ;
    using FieldValues = HSEM_HSEM_RLR8_LOCK_Values<HSEM::HSEM_RLR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR8Pack  = Register<0x580264A0, 32, ReadMode, HSEMHSEM_RLR8Base, T...> ;

  struct HSEMHSEM_RLR9Base {} ;

  struct HSEM_RLR9 : public RegisterBase<0x580264A4, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR9_PROCID_Values<HSEM::HSEM_RLR9, 0, 8, ReadMode, HSEMHSEM_RLR9Base> ;
    using COREID = HSEM_HSEM_RLR9_COREID_Values<HSEM::HSEM_RLR9, 8, 4, ReadMode, HSEMHSEM_RLR9Base> ;
    using LOCK = HSEM_HSEM_RLR9_LOCK_Values<HSEM::HSEM_RLR9, 31, 1, ReadMode, HSEMHSEM_RLR9Base> ;
    using FieldValues = HSEM_HSEM_RLR9_LOCK_Values<HSEM::HSEM_RLR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR9Pack  = Register<0x580264A4, 32, ReadMode, HSEMHSEM_RLR9Base, T...> ;

  struct HSEMHSEM_RLR10Base {} ;

  struct HSEM_RLR10 : public RegisterBase<0x580264A8, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR10_PROCID_Values<HSEM::HSEM_RLR10, 0, 8, ReadMode, HSEMHSEM_RLR10Base> ;
    using COREID = HSEM_HSEM_RLR10_COREID_Values<HSEM::HSEM_RLR10, 8, 4, ReadMode, HSEMHSEM_RLR10Base> ;
    using LOCK = HSEM_HSEM_RLR10_LOCK_Values<HSEM::HSEM_RLR10, 31, 1, ReadMode, HSEMHSEM_RLR10Base> ;
    using FieldValues = HSEM_HSEM_RLR10_LOCK_Values<HSEM::HSEM_RLR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR10Pack  = Register<0x580264A8, 32, ReadMode, HSEMHSEM_RLR10Base, T...> ;

  struct HSEMHSEM_RLR11Base {} ;

  struct HSEM_RLR11 : public RegisterBase<0x580264AC, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR11_PROCID_Values<HSEM::HSEM_RLR11, 0, 8, ReadMode, HSEMHSEM_RLR11Base> ;
    using COREID = HSEM_HSEM_RLR11_COREID_Values<HSEM::HSEM_RLR11, 8, 4, ReadMode, HSEMHSEM_RLR11Base> ;
    using LOCK = HSEM_HSEM_RLR11_LOCK_Values<HSEM::HSEM_RLR11, 31, 1, ReadMode, HSEMHSEM_RLR11Base> ;
    using FieldValues = HSEM_HSEM_RLR11_LOCK_Values<HSEM::HSEM_RLR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR11Pack  = Register<0x580264AC, 32, ReadMode, HSEMHSEM_RLR11Base, T...> ;

  struct HSEMHSEM_RLR12Base {} ;

  struct HSEM_RLR12 : public RegisterBase<0x580264B0, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR12_PROCID_Values<HSEM::HSEM_RLR12, 0, 8, ReadMode, HSEMHSEM_RLR12Base> ;
    using COREID = HSEM_HSEM_RLR12_COREID_Values<HSEM::HSEM_RLR12, 8, 4, ReadMode, HSEMHSEM_RLR12Base> ;
    using LOCK = HSEM_HSEM_RLR12_LOCK_Values<HSEM::HSEM_RLR12, 31, 1, ReadMode, HSEMHSEM_RLR12Base> ;
    using FieldValues = HSEM_HSEM_RLR12_LOCK_Values<HSEM::HSEM_RLR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR12Pack  = Register<0x580264B0, 32, ReadMode, HSEMHSEM_RLR12Base, T...> ;

  struct HSEMHSEM_RLR13Base {} ;

  struct HSEM_RLR13 : public RegisterBase<0x580264B4, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR13_PROCID_Values<HSEM::HSEM_RLR13, 0, 8, ReadMode, HSEMHSEM_RLR13Base> ;
    using COREID = HSEM_HSEM_RLR13_COREID_Values<HSEM::HSEM_RLR13, 8, 4, ReadMode, HSEMHSEM_RLR13Base> ;
    using LOCK = HSEM_HSEM_RLR13_LOCK_Values<HSEM::HSEM_RLR13, 31, 1, ReadMode, HSEMHSEM_RLR13Base> ;
    using FieldValues = HSEM_HSEM_RLR13_LOCK_Values<HSEM::HSEM_RLR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR13Pack  = Register<0x580264B4, 32, ReadMode, HSEMHSEM_RLR13Base, T...> ;

  struct HSEMHSEM_RLR14Base {} ;

  struct HSEM_RLR14 : public RegisterBase<0x580264B8, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR14_PROCID_Values<HSEM::HSEM_RLR14, 0, 8, ReadMode, HSEMHSEM_RLR14Base> ;
    using COREID = HSEM_HSEM_RLR14_COREID_Values<HSEM::HSEM_RLR14, 8, 4, ReadMode, HSEMHSEM_RLR14Base> ;
    using LOCK = HSEM_HSEM_RLR14_LOCK_Values<HSEM::HSEM_RLR14, 31, 1, ReadMode, HSEMHSEM_RLR14Base> ;
    using FieldValues = HSEM_HSEM_RLR14_LOCK_Values<HSEM::HSEM_RLR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR14Pack  = Register<0x580264B8, 32, ReadMode, HSEMHSEM_RLR14Base, T...> ;

  struct HSEMHSEM_RLR15Base {} ;

  struct HSEM_RLR15 : public RegisterBase<0x580264BC, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR15_PROCID_Values<HSEM::HSEM_RLR15, 0, 8, ReadMode, HSEMHSEM_RLR15Base> ;
    using COREID = HSEM_HSEM_RLR15_COREID_Values<HSEM::HSEM_RLR15, 8, 4, ReadMode, HSEMHSEM_RLR15Base> ;
    using LOCK = HSEM_HSEM_RLR15_LOCK_Values<HSEM::HSEM_RLR15, 31, 1, ReadMode, HSEMHSEM_RLR15Base> ;
    using FieldValues = HSEM_HSEM_RLR15_LOCK_Values<HSEM::HSEM_RLR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR15Pack  = Register<0x580264BC, 32, ReadMode, HSEMHSEM_RLR15Base, T...> ;

  struct HSEMHSEM_RLR16Base {} ;

  struct HSEM_RLR16 : public RegisterBase<0x580264C0, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR16_PROCID_Values<HSEM::HSEM_RLR16, 0, 8, ReadMode, HSEMHSEM_RLR16Base> ;
    using COREID = HSEM_HSEM_RLR16_COREID_Values<HSEM::HSEM_RLR16, 8, 4, ReadMode, HSEMHSEM_RLR16Base> ;
    using LOCK = HSEM_HSEM_RLR16_LOCK_Values<HSEM::HSEM_RLR16, 31, 1, ReadMode, HSEMHSEM_RLR16Base> ;
    using FieldValues = HSEM_HSEM_RLR16_LOCK_Values<HSEM::HSEM_RLR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR16Pack  = Register<0x580264C0, 32, ReadMode, HSEMHSEM_RLR16Base, T...> ;

  struct HSEMHSEM_RLR17Base {} ;

  struct HSEM_RLR17 : public RegisterBase<0x580264C4, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR17_PROCID_Values<HSEM::HSEM_RLR17, 0, 8, ReadMode, HSEMHSEM_RLR17Base> ;
    using COREID = HSEM_HSEM_RLR17_COREID_Values<HSEM::HSEM_RLR17, 8, 4, ReadMode, HSEMHSEM_RLR17Base> ;
    using LOCK = HSEM_HSEM_RLR17_LOCK_Values<HSEM::HSEM_RLR17, 31, 1, ReadMode, HSEMHSEM_RLR17Base> ;
    using FieldValues = HSEM_HSEM_RLR17_LOCK_Values<HSEM::HSEM_RLR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR17Pack  = Register<0x580264C4, 32, ReadMode, HSEMHSEM_RLR17Base, T...> ;

  struct HSEMHSEM_RLR18Base {} ;

  struct HSEM_RLR18 : public RegisterBase<0x580264C8, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR18_PROCID_Values<HSEM::HSEM_RLR18, 0, 8, ReadMode, HSEMHSEM_RLR18Base> ;
    using COREID = HSEM_HSEM_RLR18_COREID_Values<HSEM::HSEM_RLR18, 8, 4, ReadMode, HSEMHSEM_RLR18Base> ;
    using LOCK = HSEM_HSEM_RLR18_LOCK_Values<HSEM::HSEM_RLR18, 31, 1, ReadMode, HSEMHSEM_RLR18Base> ;
    using FieldValues = HSEM_HSEM_RLR18_LOCK_Values<HSEM::HSEM_RLR18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR18Pack  = Register<0x580264C8, 32, ReadMode, HSEMHSEM_RLR18Base, T...> ;

  struct HSEMHSEM_RLR19Base {} ;

  struct HSEM_RLR19 : public RegisterBase<0x580264CC, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR19_PROCID_Values<HSEM::HSEM_RLR19, 0, 8, ReadMode, HSEMHSEM_RLR19Base> ;
    using COREID = HSEM_HSEM_RLR19_COREID_Values<HSEM::HSEM_RLR19, 8, 4, ReadMode, HSEMHSEM_RLR19Base> ;
    using LOCK = HSEM_HSEM_RLR19_LOCK_Values<HSEM::HSEM_RLR19, 31, 1, ReadMode, HSEMHSEM_RLR19Base> ;
    using FieldValues = HSEM_HSEM_RLR19_LOCK_Values<HSEM::HSEM_RLR19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR19Pack  = Register<0x580264CC, 32, ReadMode, HSEMHSEM_RLR19Base, T...> ;

  struct HSEMHSEM_RLR20Base {} ;

  struct HSEM_RLR20 : public RegisterBase<0x580264D0, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR20_PROCID_Values<HSEM::HSEM_RLR20, 0, 8, ReadMode, HSEMHSEM_RLR20Base> ;
    using COREID = HSEM_HSEM_RLR20_COREID_Values<HSEM::HSEM_RLR20, 8, 4, ReadMode, HSEMHSEM_RLR20Base> ;
    using LOCK = HSEM_HSEM_RLR20_LOCK_Values<HSEM::HSEM_RLR20, 31, 1, ReadMode, HSEMHSEM_RLR20Base> ;
    using FieldValues = HSEM_HSEM_RLR20_LOCK_Values<HSEM::HSEM_RLR20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR20Pack  = Register<0x580264D0, 32, ReadMode, HSEMHSEM_RLR20Base, T...> ;

  struct HSEMHSEM_RLR21Base {} ;

  struct HSEM_RLR21 : public RegisterBase<0x580264D4, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR21_PROCID_Values<HSEM::HSEM_RLR21, 0, 8, ReadMode, HSEMHSEM_RLR21Base> ;
    using COREID = HSEM_HSEM_RLR21_COREID_Values<HSEM::HSEM_RLR21, 8, 4, ReadMode, HSEMHSEM_RLR21Base> ;
    using LOCK = HSEM_HSEM_RLR21_LOCK_Values<HSEM::HSEM_RLR21, 31, 1, ReadMode, HSEMHSEM_RLR21Base> ;
    using FieldValues = HSEM_HSEM_RLR21_LOCK_Values<HSEM::HSEM_RLR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR21Pack  = Register<0x580264D4, 32, ReadMode, HSEMHSEM_RLR21Base, T...> ;

  struct HSEMHSEM_RLR22Base {} ;

  struct HSEM_RLR22 : public RegisterBase<0x580264D8, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR22_PROCID_Values<HSEM::HSEM_RLR22, 0, 8, ReadMode, HSEMHSEM_RLR22Base> ;
    using COREID = HSEM_HSEM_RLR22_COREID_Values<HSEM::HSEM_RLR22, 8, 4, ReadMode, HSEMHSEM_RLR22Base> ;
    using LOCK = HSEM_HSEM_RLR22_LOCK_Values<HSEM::HSEM_RLR22, 31, 1, ReadMode, HSEMHSEM_RLR22Base> ;
    using FieldValues = HSEM_HSEM_RLR22_LOCK_Values<HSEM::HSEM_RLR22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR22Pack  = Register<0x580264D8, 32, ReadMode, HSEMHSEM_RLR22Base, T...> ;

  struct HSEMHSEM_RLR23Base {} ;

  struct HSEM_RLR23 : public RegisterBase<0x580264DC, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR23_PROCID_Values<HSEM::HSEM_RLR23, 0, 8, ReadMode, HSEMHSEM_RLR23Base> ;
    using COREID = HSEM_HSEM_RLR23_COREID_Values<HSEM::HSEM_RLR23, 8, 4, ReadMode, HSEMHSEM_RLR23Base> ;
    using LOCK = HSEM_HSEM_RLR23_LOCK_Values<HSEM::HSEM_RLR23, 31, 1, ReadMode, HSEMHSEM_RLR23Base> ;
    using FieldValues = HSEM_HSEM_RLR23_LOCK_Values<HSEM::HSEM_RLR23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR23Pack  = Register<0x580264DC, 32, ReadMode, HSEMHSEM_RLR23Base, T...> ;

  struct HSEMHSEM_RLR24Base {} ;

  struct HSEM_RLR24 : public RegisterBase<0x580264E0, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR24_PROCID_Values<HSEM::HSEM_RLR24, 0, 8, ReadMode, HSEMHSEM_RLR24Base> ;
    using COREID = HSEM_HSEM_RLR24_COREID_Values<HSEM::HSEM_RLR24, 8, 4, ReadMode, HSEMHSEM_RLR24Base> ;
    using LOCK = HSEM_HSEM_RLR24_LOCK_Values<HSEM::HSEM_RLR24, 31, 1, ReadMode, HSEMHSEM_RLR24Base> ;
    using FieldValues = HSEM_HSEM_RLR24_LOCK_Values<HSEM::HSEM_RLR24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR24Pack  = Register<0x580264E0, 32, ReadMode, HSEMHSEM_RLR24Base, T...> ;

  struct HSEMHSEM_RLR25Base {} ;

  struct HSEM_RLR25 : public RegisterBase<0x580264E4, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR25_PROCID_Values<HSEM::HSEM_RLR25, 0, 8, ReadMode, HSEMHSEM_RLR25Base> ;
    using COREID = HSEM_HSEM_RLR25_COREID_Values<HSEM::HSEM_RLR25, 8, 4, ReadMode, HSEMHSEM_RLR25Base> ;
    using LOCK = HSEM_HSEM_RLR25_LOCK_Values<HSEM::HSEM_RLR25, 31, 1, ReadMode, HSEMHSEM_RLR25Base> ;
    using FieldValues = HSEM_HSEM_RLR25_LOCK_Values<HSEM::HSEM_RLR25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR25Pack  = Register<0x580264E4, 32, ReadMode, HSEMHSEM_RLR25Base, T...> ;

  struct HSEMHSEM_RLR26Base {} ;

  struct HSEM_RLR26 : public RegisterBase<0x580264E8, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR26_PROCID_Values<HSEM::HSEM_RLR26, 0, 8, ReadMode, HSEMHSEM_RLR26Base> ;
    using COREID = HSEM_HSEM_RLR26_COREID_Values<HSEM::HSEM_RLR26, 8, 4, ReadMode, HSEMHSEM_RLR26Base> ;
    using LOCK = HSEM_HSEM_RLR26_LOCK_Values<HSEM::HSEM_RLR26, 31, 1, ReadMode, HSEMHSEM_RLR26Base> ;
    using FieldValues = HSEM_HSEM_RLR26_LOCK_Values<HSEM::HSEM_RLR26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR26Pack  = Register<0x580264E8, 32, ReadMode, HSEMHSEM_RLR26Base, T...> ;

  struct HSEMHSEM_RLR27Base {} ;

  struct HSEM_RLR27 : public RegisterBase<0x580264EC, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR27_PROCID_Values<HSEM::HSEM_RLR27, 0, 8, ReadMode, HSEMHSEM_RLR27Base> ;
    using COREID = HSEM_HSEM_RLR27_COREID_Values<HSEM::HSEM_RLR27, 8, 4, ReadMode, HSEMHSEM_RLR27Base> ;
    using LOCK = HSEM_HSEM_RLR27_LOCK_Values<HSEM::HSEM_RLR27, 31, 1, ReadMode, HSEMHSEM_RLR27Base> ;
    using FieldValues = HSEM_HSEM_RLR27_LOCK_Values<HSEM::HSEM_RLR27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR27Pack  = Register<0x580264EC, 32, ReadMode, HSEMHSEM_RLR27Base, T...> ;

  struct HSEMHSEM_RLR28Base {} ;

  struct HSEM_RLR28 : public RegisterBase<0x580264F0, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR28_PROCID_Values<HSEM::HSEM_RLR28, 0, 8, ReadMode, HSEMHSEM_RLR28Base> ;
    using COREID = HSEM_HSEM_RLR28_COREID_Values<HSEM::HSEM_RLR28, 8, 4, ReadMode, HSEMHSEM_RLR28Base> ;
    using LOCK = HSEM_HSEM_RLR28_LOCK_Values<HSEM::HSEM_RLR28, 31, 1, ReadMode, HSEMHSEM_RLR28Base> ;
    using FieldValues = HSEM_HSEM_RLR28_LOCK_Values<HSEM::HSEM_RLR28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR28Pack  = Register<0x580264F0, 32, ReadMode, HSEMHSEM_RLR28Base, T...> ;

  struct HSEMHSEM_RLR29Base {} ;

  struct HSEM_RLR29 : public RegisterBase<0x580264F4, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR29_PROCID_Values<HSEM::HSEM_RLR29, 0, 8, ReadMode, HSEMHSEM_RLR29Base> ;
    using COREID = HSEM_HSEM_RLR29_COREID_Values<HSEM::HSEM_RLR29, 8, 4, ReadMode, HSEMHSEM_RLR29Base> ;
    using LOCK = HSEM_HSEM_RLR29_LOCK_Values<HSEM::HSEM_RLR29, 31, 1, ReadMode, HSEMHSEM_RLR29Base> ;
    using FieldValues = HSEM_HSEM_RLR29_LOCK_Values<HSEM::HSEM_RLR29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR29Pack  = Register<0x580264F4, 32, ReadMode, HSEMHSEM_RLR29Base, T...> ;

  struct HSEMHSEM_RLR30Base {} ;

  struct HSEM_RLR30 : public RegisterBase<0x580264F8, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR30_PROCID_Values<HSEM::HSEM_RLR30, 0, 8, ReadMode, HSEMHSEM_RLR30Base> ;
    using COREID = HSEM_HSEM_RLR30_COREID_Values<HSEM::HSEM_RLR30, 8, 4, ReadMode, HSEMHSEM_RLR30Base> ;
    using LOCK = HSEM_HSEM_RLR30_LOCK_Values<HSEM::HSEM_RLR30, 31, 1, ReadMode, HSEMHSEM_RLR30Base> ;
    using FieldValues = HSEM_HSEM_RLR30_LOCK_Values<HSEM::HSEM_RLR30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR30Pack  = Register<0x580264F8, 32, ReadMode, HSEMHSEM_RLR30Base, T...> ;

  struct HSEMHSEM_RLR31Base {} ;

  struct HSEM_RLR31 : public RegisterBase<0x580264FC, 32, ReadMode>
  {
    using PROCID = HSEM_HSEM_RLR31_PROCID_Values<HSEM::HSEM_RLR31, 0, 8, ReadMode, HSEMHSEM_RLR31Base> ;
    using COREID = HSEM_HSEM_RLR31_COREID_Values<HSEM::HSEM_RLR31, 8, 4, ReadMode, HSEMHSEM_RLR31Base> ;
    using LOCK = HSEM_HSEM_RLR31_LOCK_Values<HSEM::HSEM_RLR31, 31, 1, ReadMode, HSEMHSEM_RLR31Base> ;
    using FieldValues = HSEM_HSEM_RLR31_LOCK_Values<HSEM::HSEM_RLR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_RLR31Pack  = Register<0x580264FC, 32, ReadMode, HSEMHSEM_RLR31Base, T...> ;

  struct HSEMHSEM_C1IERBase {} ;

  struct HSEM_C1IER : public RegisterBase<0x58026500, 32, ReadWriteMode>
  {
    using ISE = HSEM_HSEM_C1IER_ISE_Values<HSEM::HSEM_C1IER, 0, 32, ReadWriteMode, HSEMHSEM_C1IERBase> ;
    using FieldValues = HSEM_HSEM_C1IER_ISE_Values<HSEM::HSEM_C1IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_C1IERPack  = Register<0x58026500, 32, ReadWriteMode, HSEMHSEM_C1IERBase, T...> ;

  struct HSEMHSEM_C1ICRBase {} ;

  struct HSEM_C1ICR : public RegisterBase<0x58026504, 32, ReadWriteMode>
  {
    using ISC = HSEM_HSEM_C1ICR_ISC_Values<HSEM::HSEM_C1ICR, 0, 32, ReadWriteMode, HSEMHSEM_C1ICRBase> ;
    using FieldValues = HSEM_HSEM_C1ICR_ISC_Values<HSEM::HSEM_C1ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_C1ICRPack  = Register<0x58026504, 32, ReadWriteMode, HSEMHSEM_C1ICRBase, T...> ;

  struct HSEMHSEM_C1ISRBase {} ;

  struct HSEM_C1ISR : public RegisterBase<0x58026508, 32, ReadMode>
  {
    using ISF = HSEM_HSEM_C1ISR_ISF_Values<HSEM::HSEM_C1ISR, 0, 32, ReadMode, HSEMHSEM_C1ISRBase> ;
    using FieldValues = HSEM_HSEM_C1ISR_ISF_Values<HSEM::HSEM_C1ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_C1ISRPack  = Register<0x58026508, 32, ReadMode, HSEMHSEM_C1ISRBase, T...> ;

  struct HSEMHSEM_C1MISRBase {} ;

  struct HSEM_C1MISR : public RegisterBase<0x5802650C, 32, ReadMode>
  {
    using MISF = HSEM_HSEM_C1MISR_MISF_Values<HSEM::HSEM_C1MISR, 0, 32, ReadMode, HSEMHSEM_C1MISRBase> ;
    using FieldValues = HSEM_HSEM_C1MISR_MISF_Values<HSEM::HSEM_C1MISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_C1MISRPack  = Register<0x5802650C, 32, ReadMode, HSEMHSEM_C1MISRBase, T...> ;

  struct HSEMHSEM_C2IERBase {} ;

  struct HSEM_C2IER : public RegisterBase<0x58026510, 32, ReadWriteMode>
  {
    using ISE = HSEM_HSEM_C2IER_ISE_Values<HSEM::HSEM_C2IER, 0, 32, ReadWriteMode, HSEMHSEM_C2IERBase> ;
    using FieldValues = HSEM_HSEM_C2IER_ISE_Values<HSEM::HSEM_C2IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_C2IERPack  = Register<0x58026510, 32, ReadWriteMode, HSEMHSEM_C2IERBase, T...> ;

  struct HSEMHSEM_C2ICRBase {} ;

  struct HSEM_C2ICR : public RegisterBase<0x58026514, 32, ReadWriteMode>
  {
    using ISC = HSEM_HSEM_C2ICR_ISC_Values<HSEM::HSEM_C2ICR, 0, 32, ReadWriteMode, HSEMHSEM_C2ICRBase> ;
    using FieldValues = HSEM_HSEM_C2ICR_ISC_Values<HSEM::HSEM_C2ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_C2ICRPack  = Register<0x58026514, 32, ReadWriteMode, HSEMHSEM_C2ICRBase, T...> ;

  struct HSEMHSEM_C2ISRBase {} ;

  struct HSEM_C2ISR : public RegisterBase<0x58026518, 32, ReadMode>
  {
    using ISF = HSEM_HSEM_C2ISR_ISF_Values<HSEM::HSEM_C2ISR, 0, 32, ReadMode, HSEMHSEM_C2ISRBase> ;
    using FieldValues = HSEM_HSEM_C2ISR_ISF_Values<HSEM::HSEM_C2ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_C2ISRPack  = Register<0x58026518, 32, ReadMode, HSEMHSEM_C2ISRBase, T...> ;

  struct HSEMHSEM_C2MISRBase {} ;

  struct HSEM_C2MISR : public RegisterBase<0x5802651C, 32, ReadMode>
  {
    using MISF = HSEM_HSEM_C2MISR_MISF_Values<HSEM::HSEM_C2MISR, 0, 32, ReadMode, HSEMHSEM_C2MISRBase> ;
    using FieldValues = HSEM_HSEM_C2MISR_MISF_Values<HSEM::HSEM_C2MISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_C2MISRPack  = Register<0x5802651C, 32, ReadMode, HSEMHSEM_C2MISRBase, T...> ;

  struct HSEMHSEM_CRBase {} ;

  struct HSEM_CR : public RegisterBase<0x58026540, 32, WriteMode>
  {
    using COREID = HSEM_HSEM_CR_COREID_Values<HSEM::HSEM_CR, 8, 4, WriteMode, HSEMHSEM_CRBase> ;
    using KEY = HSEM_HSEM_CR_KEY_Values<HSEM::HSEM_CR, 16, 16, WriteMode, HSEMHSEM_CRBase> ;
    using FieldValues = HSEM_HSEM_CR_KEY_Values<HSEM::HSEM_CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_CRPack  = Register<0x58026540, 32, WriteMode, HSEMHSEM_CRBase, T...> ;

  struct HSEMHSEM_KEYRBase {} ;

  struct HSEM_KEYR : public RegisterBase<0x58026544, 32, ReadWriteMode>
  {
    using KEY = HSEM_HSEM_KEYR_KEY_Values<HSEM::HSEM_KEYR, 16, 16, ReadWriteMode, HSEMHSEM_KEYRBase> ;
    using FieldValues = HSEM_HSEM_KEYR_KEY_Values<HSEM::HSEM_KEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSEM_KEYRPack  = Register<0x58026544, 32, ReadWriteMode, HSEMHSEM_KEYRBase, T...> ;

} ;

#endif //#if !defined(HSEMREGISTERS_HPP)
