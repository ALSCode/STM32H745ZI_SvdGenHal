/*******************************************************************************
* Filename      : nvicregisters.hpp
*
* Details       : Nested Vectored Interrupt Controller. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(NVICREGISTERS_HPP)
#define NVICREGISTERS_HPP

#include "nvicfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct NVIC
{
  struct NVICISER0Base {} ;

  struct ISER0 : public RegisterBase<0xE000E100, 32, ReadWriteMode>
  {
    using SETENA = NVIC_ISER0_SETENA_Values<NVIC::ISER0, 0, 32, ReadWriteMode, NVICISER0Base> ;
    using FieldValues = NVIC_ISER0_SETENA_Values<NVIC::ISER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISER0Pack  = Register<0xE000E100, 32, ReadWriteMode, NVICISER0Base, T...> ;

  struct NVICISER1Base {} ;

  struct ISER1 : public RegisterBase<0xE000E104, 32, ReadWriteMode>
  {
    using SETENA = NVIC_ISER1_SETENA_Values<NVIC::ISER1, 0, 32, ReadWriteMode, NVICISER1Base> ;
    using FieldValues = NVIC_ISER1_SETENA_Values<NVIC::ISER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISER1Pack  = Register<0xE000E104, 32, ReadWriteMode, NVICISER1Base, T...> ;

  struct NVICISER2Base {} ;

  struct ISER2 : public RegisterBase<0xE000E108, 32, ReadWriteMode>
  {
    using SETENA = NVIC_ISER2_SETENA_Values<NVIC::ISER2, 0, 32, ReadWriteMode, NVICISER2Base> ;
    using FieldValues = NVIC_ISER2_SETENA_Values<NVIC::ISER2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISER2Pack  = Register<0xE000E108, 32, ReadWriteMode, NVICISER2Base, T...> ;

  struct NVICICER0Base {} ;

  struct ICER0 : public RegisterBase<0xE000E180, 32, ReadWriteMode>
  {
    using CLRENA = NVIC_ICER0_CLRENA_Values<NVIC::ICER0, 0, 32, ReadWriteMode, NVICICER0Base> ;
    using FieldValues = NVIC_ICER0_CLRENA_Values<NVIC::ICER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICER0Pack  = Register<0xE000E180, 32, ReadWriteMode, NVICICER0Base, T...> ;

  struct NVICICER1Base {} ;

  struct ICER1 : public RegisterBase<0xE000E184, 32, ReadWriteMode>
  {
    using CLRENA = NVIC_ICER1_CLRENA_Values<NVIC::ICER1, 0, 32, ReadWriteMode, NVICICER1Base> ;
    using FieldValues = NVIC_ICER1_CLRENA_Values<NVIC::ICER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICER1Pack  = Register<0xE000E184, 32, ReadWriteMode, NVICICER1Base, T...> ;

  struct NVICICER2Base {} ;

  struct ICER2 : public RegisterBase<0xE000E188, 32, ReadWriteMode>
  {
    using CLRENA = NVIC_ICER2_CLRENA_Values<NVIC::ICER2, 0, 32, ReadWriteMode, NVICICER2Base> ;
    using FieldValues = NVIC_ICER2_CLRENA_Values<NVIC::ICER2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICER2Pack  = Register<0xE000E188, 32, ReadWriteMode, NVICICER2Base, T...> ;

  struct NVICISPR0Base {} ;

  struct ISPR0 : public RegisterBase<0xE000E200, 32, ReadWriteMode>
  {
    using SETPEND = NVIC_ISPR0_SETPEND_Values<NVIC::ISPR0, 0, 32, ReadWriteMode, NVICISPR0Base> ;
    using FieldValues = NVIC_ISPR0_SETPEND_Values<NVIC::ISPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPR0Pack  = Register<0xE000E200, 32, ReadWriteMode, NVICISPR0Base, T...> ;

  struct NVICISPR1Base {} ;

  struct ISPR1 : public RegisterBase<0xE000E204, 32, ReadWriteMode>
  {
    using SETPEND = NVIC_ISPR1_SETPEND_Values<NVIC::ISPR1, 0, 32, ReadWriteMode, NVICISPR1Base> ;
    using FieldValues = NVIC_ISPR1_SETPEND_Values<NVIC::ISPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPR1Pack  = Register<0xE000E204, 32, ReadWriteMode, NVICISPR1Base, T...> ;

  struct NVICISPR2Base {} ;

  struct ISPR2 : public RegisterBase<0xE000E208, 32, ReadWriteMode>
  {
    using SETPEND = NVIC_ISPR2_SETPEND_Values<NVIC::ISPR2, 0, 32, ReadWriteMode, NVICISPR2Base> ;
    using FieldValues = NVIC_ISPR2_SETPEND_Values<NVIC::ISPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISPR2Pack  = Register<0xE000E208, 32, ReadWriteMode, NVICISPR2Base, T...> ;

  struct NVICICPR0Base {} ;

  struct ICPR0 : public RegisterBase<0xE000E280, 32, ReadWriteMode>
  {
    using CLRPEND = NVIC_ICPR0_CLRPEND_Values<NVIC::ICPR0, 0, 32, ReadWriteMode, NVICICPR0Base> ;
    using FieldValues = NVIC_ICPR0_CLRPEND_Values<NVIC::ICPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPR0Pack  = Register<0xE000E280, 32, ReadWriteMode, NVICICPR0Base, T...> ;

  struct NVICICPR1Base {} ;

  struct ICPR1 : public RegisterBase<0xE000E284, 32, ReadWriteMode>
  {
    using CLRPEND = NVIC_ICPR1_CLRPEND_Values<NVIC::ICPR1, 0, 32, ReadWriteMode, NVICICPR1Base> ;
    using FieldValues = NVIC_ICPR1_CLRPEND_Values<NVIC::ICPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPR1Pack  = Register<0xE000E284, 32, ReadWriteMode, NVICICPR1Base, T...> ;

  struct NVICICPR2Base {} ;

  struct ICPR2 : public RegisterBase<0xE000E288, 32, ReadWriteMode>
  {
    using CLRPEND = NVIC_ICPR2_CLRPEND_Values<NVIC::ICPR2, 0, 32, ReadWriteMode, NVICICPR2Base> ;
    using FieldValues = NVIC_ICPR2_CLRPEND_Values<NVIC::ICPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICPR2Pack  = Register<0xE000E288, 32, ReadWriteMode, NVICICPR2Base, T...> ;

  struct NVICIABR0Base {} ;

  struct IABR0 : public RegisterBase<0xE000E300, 32, ReadMode>
  {
    using ACTIVE = NVIC_IABR0_ACTIVE_Values<NVIC::IABR0, 0, 32, ReadMode, NVICIABR0Base> ;
    using FieldValues = NVIC_IABR0_ACTIVE_Values<NVIC::IABR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IABR0Pack  = Register<0xE000E300, 32, ReadMode, NVICIABR0Base, T...> ;

  struct NVICIABR1Base {} ;

  struct IABR1 : public RegisterBase<0xE000E304, 32, ReadMode>
  {
    using ACTIVE = NVIC_IABR1_ACTIVE_Values<NVIC::IABR1, 0, 32, ReadMode, NVICIABR1Base> ;
    using FieldValues = NVIC_IABR1_ACTIVE_Values<NVIC::IABR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IABR1Pack  = Register<0xE000E304, 32, ReadMode, NVICIABR1Base, T...> ;

  struct NVICIABR2Base {} ;

  struct IABR2 : public RegisterBase<0xE000E308, 32, ReadMode>
  {
    using ACTIVE = NVIC_IABR2_ACTIVE_Values<NVIC::IABR2, 0, 32, ReadMode, NVICIABR2Base> ;
    using FieldValues = NVIC_IABR2_ACTIVE_Values<NVIC::IABR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IABR2Pack  = Register<0xE000E308, 32, ReadMode, NVICIABR2Base, T...> ;

  struct NVICIPR0Base {} ;

  struct IPR0 : public RegisterBase<0xE000E400, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR0_IPR_N0_Values<NVIC::IPR0, 0, 8, ReadWriteMode, NVICIPR0Base> ;
    using IPR_N1 = NVIC_IPR0_IPR_N1_Values<NVIC::IPR0, 8, 8, ReadWriteMode, NVICIPR0Base> ;
    using IPR_N2 = NVIC_IPR0_IPR_N2_Values<NVIC::IPR0, 16, 8, ReadWriteMode, NVICIPR0Base> ;
    using IPR_N3 = NVIC_IPR0_IPR_N3_Values<NVIC::IPR0, 24, 8, ReadWriteMode, NVICIPR0Base> ;
    using FieldValues = NVIC_IPR0_IPR_N3_Values<NVIC::IPR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR0Pack  = Register<0xE000E400, 32, ReadWriteMode, NVICIPR0Base, T...> ;

  struct NVICIPR1Base {} ;

  struct IPR1 : public RegisterBase<0xE000E404, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR1_IPR_N0_Values<NVIC::IPR1, 0, 8, ReadWriteMode, NVICIPR1Base> ;
    using IPR_N1 = NVIC_IPR1_IPR_N1_Values<NVIC::IPR1, 8, 8, ReadWriteMode, NVICIPR1Base> ;
    using IPR_N2 = NVIC_IPR1_IPR_N2_Values<NVIC::IPR1, 16, 8, ReadWriteMode, NVICIPR1Base> ;
    using IPR_N3 = NVIC_IPR1_IPR_N3_Values<NVIC::IPR1, 24, 8, ReadWriteMode, NVICIPR1Base> ;
    using FieldValues = NVIC_IPR1_IPR_N3_Values<NVIC::IPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR1Pack  = Register<0xE000E404, 32, ReadWriteMode, NVICIPR1Base, T...> ;

  struct NVICIPR2Base {} ;

  struct IPR2 : public RegisterBase<0xE000E408, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR2_IPR_N0_Values<NVIC::IPR2, 0, 8, ReadWriteMode, NVICIPR2Base> ;
    using IPR_N1 = NVIC_IPR2_IPR_N1_Values<NVIC::IPR2, 8, 8, ReadWriteMode, NVICIPR2Base> ;
    using IPR_N2 = NVIC_IPR2_IPR_N2_Values<NVIC::IPR2, 16, 8, ReadWriteMode, NVICIPR2Base> ;
    using IPR_N3 = NVIC_IPR2_IPR_N3_Values<NVIC::IPR2, 24, 8, ReadWriteMode, NVICIPR2Base> ;
    using FieldValues = NVIC_IPR2_IPR_N3_Values<NVIC::IPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR2Pack  = Register<0xE000E408, 32, ReadWriteMode, NVICIPR2Base, T...> ;

  struct NVICIPR3Base {} ;

  struct IPR3 : public RegisterBase<0xE000E40C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR3_IPR_N0_Values<NVIC::IPR3, 0, 8, ReadWriteMode, NVICIPR3Base> ;
    using IPR_N1 = NVIC_IPR3_IPR_N1_Values<NVIC::IPR3, 8, 8, ReadWriteMode, NVICIPR3Base> ;
    using IPR_N2 = NVIC_IPR3_IPR_N2_Values<NVIC::IPR3, 16, 8, ReadWriteMode, NVICIPR3Base> ;
    using IPR_N3 = NVIC_IPR3_IPR_N3_Values<NVIC::IPR3, 24, 8, ReadWriteMode, NVICIPR3Base> ;
    using FieldValues = NVIC_IPR3_IPR_N3_Values<NVIC::IPR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR3Pack  = Register<0xE000E40C, 32, ReadWriteMode, NVICIPR3Base, T...> ;

  struct NVICIPR4Base {} ;

  struct IPR4 : public RegisterBase<0xE000E410, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR4_IPR_N0_Values<NVIC::IPR4, 0, 8, ReadWriteMode, NVICIPR4Base> ;
    using IPR_N1 = NVIC_IPR4_IPR_N1_Values<NVIC::IPR4, 8, 8, ReadWriteMode, NVICIPR4Base> ;
    using IPR_N2 = NVIC_IPR4_IPR_N2_Values<NVIC::IPR4, 16, 8, ReadWriteMode, NVICIPR4Base> ;
    using IPR_N3 = NVIC_IPR4_IPR_N3_Values<NVIC::IPR4, 24, 8, ReadWriteMode, NVICIPR4Base> ;
    using FieldValues = NVIC_IPR4_IPR_N3_Values<NVIC::IPR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR4Pack  = Register<0xE000E410, 32, ReadWriteMode, NVICIPR4Base, T...> ;

  struct NVICIPR5Base {} ;

  struct IPR5 : public RegisterBase<0xE000E414, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR5_IPR_N0_Values<NVIC::IPR5, 0, 8, ReadWriteMode, NVICIPR5Base> ;
    using IPR_N1 = NVIC_IPR5_IPR_N1_Values<NVIC::IPR5, 8, 8, ReadWriteMode, NVICIPR5Base> ;
    using IPR_N2 = NVIC_IPR5_IPR_N2_Values<NVIC::IPR5, 16, 8, ReadWriteMode, NVICIPR5Base> ;
    using IPR_N3 = NVIC_IPR5_IPR_N3_Values<NVIC::IPR5, 24, 8, ReadWriteMode, NVICIPR5Base> ;
    using FieldValues = NVIC_IPR5_IPR_N3_Values<NVIC::IPR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR5Pack  = Register<0xE000E414, 32, ReadWriteMode, NVICIPR5Base, T...> ;

  struct NVICIPR6Base {} ;

  struct IPR6 : public RegisterBase<0xE000E418, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR6_IPR_N0_Values<NVIC::IPR6, 0, 8, ReadWriteMode, NVICIPR6Base> ;
    using IPR_N1 = NVIC_IPR6_IPR_N1_Values<NVIC::IPR6, 8, 8, ReadWriteMode, NVICIPR6Base> ;
    using IPR_N2 = NVIC_IPR6_IPR_N2_Values<NVIC::IPR6, 16, 8, ReadWriteMode, NVICIPR6Base> ;
    using IPR_N3 = NVIC_IPR6_IPR_N3_Values<NVIC::IPR6, 24, 8, ReadWriteMode, NVICIPR6Base> ;
    using FieldValues = NVIC_IPR6_IPR_N3_Values<NVIC::IPR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR6Pack  = Register<0xE000E418, 32, ReadWriteMode, NVICIPR6Base, T...> ;

  struct NVICIPR7Base {} ;

  struct IPR7 : public RegisterBase<0xE000E41C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR7_IPR_N0_Values<NVIC::IPR7, 0, 8, ReadWriteMode, NVICIPR7Base> ;
    using IPR_N1 = NVIC_IPR7_IPR_N1_Values<NVIC::IPR7, 8, 8, ReadWriteMode, NVICIPR7Base> ;
    using IPR_N2 = NVIC_IPR7_IPR_N2_Values<NVIC::IPR7, 16, 8, ReadWriteMode, NVICIPR7Base> ;
    using IPR_N3 = NVIC_IPR7_IPR_N3_Values<NVIC::IPR7, 24, 8, ReadWriteMode, NVICIPR7Base> ;
    using FieldValues = NVIC_IPR7_IPR_N3_Values<NVIC::IPR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR7Pack  = Register<0xE000E41C, 32, ReadWriteMode, NVICIPR7Base, T...> ;

  struct NVICIPR8Base {} ;

  struct IPR8 : public RegisterBase<0xE000E420, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR8_IPR_N0_Values<NVIC::IPR8, 0, 8, ReadWriteMode, NVICIPR8Base> ;
    using IPR_N1 = NVIC_IPR8_IPR_N1_Values<NVIC::IPR8, 8, 8, ReadWriteMode, NVICIPR8Base> ;
    using IPR_N2 = NVIC_IPR8_IPR_N2_Values<NVIC::IPR8, 16, 8, ReadWriteMode, NVICIPR8Base> ;
    using IPR_N3 = NVIC_IPR8_IPR_N3_Values<NVIC::IPR8, 24, 8, ReadWriteMode, NVICIPR8Base> ;
    using FieldValues = NVIC_IPR8_IPR_N3_Values<NVIC::IPR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR8Pack  = Register<0xE000E420, 32, ReadWriteMode, NVICIPR8Base, T...> ;

  struct NVICIPR9Base {} ;

  struct IPR9 : public RegisterBase<0xE000E424, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR9_IPR_N0_Values<NVIC::IPR9, 0, 8, ReadWriteMode, NVICIPR9Base> ;
    using IPR_N1 = NVIC_IPR9_IPR_N1_Values<NVIC::IPR9, 8, 8, ReadWriteMode, NVICIPR9Base> ;
    using IPR_N2 = NVIC_IPR9_IPR_N2_Values<NVIC::IPR9, 16, 8, ReadWriteMode, NVICIPR9Base> ;
    using IPR_N3 = NVIC_IPR9_IPR_N3_Values<NVIC::IPR9, 24, 8, ReadWriteMode, NVICIPR9Base> ;
    using FieldValues = NVIC_IPR9_IPR_N3_Values<NVIC::IPR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR9Pack  = Register<0xE000E424, 32, ReadWriteMode, NVICIPR9Base, T...> ;

  struct NVICIPR10Base {} ;

  struct IPR10 : public RegisterBase<0xE000E428, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR10_IPR_N0_Values<NVIC::IPR10, 0, 8, ReadWriteMode, NVICIPR10Base> ;
    using IPR_N1 = NVIC_IPR10_IPR_N1_Values<NVIC::IPR10, 8, 8, ReadWriteMode, NVICIPR10Base> ;
    using IPR_N2 = NVIC_IPR10_IPR_N2_Values<NVIC::IPR10, 16, 8, ReadWriteMode, NVICIPR10Base> ;
    using IPR_N3 = NVIC_IPR10_IPR_N3_Values<NVIC::IPR10, 24, 8, ReadWriteMode, NVICIPR10Base> ;
    using FieldValues = NVIC_IPR10_IPR_N3_Values<NVIC::IPR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR10Pack  = Register<0xE000E428, 32, ReadWriteMode, NVICIPR10Base, T...> ;

  struct NVICIPR11Base {} ;

  struct IPR11 : public RegisterBase<0xE000E42C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR11_IPR_N0_Values<NVIC::IPR11, 0, 8, ReadWriteMode, NVICIPR11Base> ;
    using IPR_N1 = NVIC_IPR11_IPR_N1_Values<NVIC::IPR11, 8, 8, ReadWriteMode, NVICIPR11Base> ;
    using IPR_N2 = NVIC_IPR11_IPR_N2_Values<NVIC::IPR11, 16, 8, ReadWriteMode, NVICIPR11Base> ;
    using IPR_N3 = NVIC_IPR11_IPR_N3_Values<NVIC::IPR11, 24, 8, ReadWriteMode, NVICIPR11Base> ;
    using FieldValues = NVIC_IPR11_IPR_N3_Values<NVIC::IPR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR11Pack  = Register<0xE000E42C, 32, ReadWriteMode, NVICIPR11Base, T...> ;

  struct NVICIPR12Base {} ;

  struct IPR12 : public RegisterBase<0xE000E430, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR12_IPR_N0_Values<NVIC::IPR12, 0, 8, ReadWriteMode, NVICIPR12Base> ;
    using IPR_N1 = NVIC_IPR12_IPR_N1_Values<NVIC::IPR12, 8, 8, ReadWriteMode, NVICIPR12Base> ;
    using IPR_N2 = NVIC_IPR12_IPR_N2_Values<NVIC::IPR12, 16, 8, ReadWriteMode, NVICIPR12Base> ;
    using IPR_N3 = NVIC_IPR12_IPR_N3_Values<NVIC::IPR12, 24, 8, ReadWriteMode, NVICIPR12Base> ;
    using FieldValues = NVIC_IPR12_IPR_N3_Values<NVIC::IPR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR12Pack  = Register<0xE000E430, 32, ReadWriteMode, NVICIPR12Base, T...> ;

  struct NVICIPR13Base {} ;

  struct IPR13 : public RegisterBase<0xE000E434, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR13_IPR_N0_Values<NVIC::IPR13, 0, 8, ReadWriteMode, NVICIPR13Base> ;
    using IPR_N1 = NVIC_IPR13_IPR_N1_Values<NVIC::IPR13, 8, 8, ReadWriteMode, NVICIPR13Base> ;
    using IPR_N2 = NVIC_IPR13_IPR_N2_Values<NVIC::IPR13, 16, 8, ReadWriteMode, NVICIPR13Base> ;
    using IPR_N3 = NVIC_IPR13_IPR_N3_Values<NVIC::IPR13, 24, 8, ReadWriteMode, NVICIPR13Base> ;
    using FieldValues = NVIC_IPR13_IPR_N3_Values<NVIC::IPR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR13Pack  = Register<0xE000E434, 32, ReadWriteMode, NVICIPR13Base, T...> ;

  struct NVICIPR14Base {} ;

  struct IPR14 : public RegisterBase<0xE000E438, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR14_IPR_N0_Values<NVIC::IPR14, 0, 8, ReadWriteMode, NVICIPR14Base> ;
    using IPR_N1 = NVIC_IPR14_IPR_N1_Values<NVIC::IPR14, 8, 8, ReadWriteMode, NVICIPR14Base> ;
    using IPR_N2 = NVIC_IPR14_IPR_N2_Values<NVIC::IPR14, 16, 8, ReadWriteMode, NVICIPR14Base> ;
    using IPR_N3 = NVIC_IPR14_IPR_N3_Values<NVIC::IPR14, 24, 8, ReadWriteMode, NVICIPR14Base> ;
    using FieldValues = NVIC_IPR14_IPR_N3_Values<NVIC::IPR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR14Pack  = Register<0xE000E438, 32, ReadWriteMode, NVICIPR14Base, T...> ;

  struct NVICIPR15Base {} ;

  struct IPR15 : public RegisterBase<0xE000E43C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR15_IPR_N0_Values<NVIC::IPR15, 0, 8, ReadWriteMode, NVICIPR15Base> ;
    using IPR_N1 = NVIC_IPR15_IPR_N1_Values<NVIC::IPR15, 8, 8, ReadWriteMode, NVICIPR15Base> ;
    using IPR_N2 = NVIC_IPR15_IPR_N2_Values<NVIC::IPR15, 16, 8, ReadWriteMode, NVICIPR15Base> ;
    using IPR_N3 = NVIC_IPR15_IPR_N3_Values<NVIC::IPR15, 24, 8, ReadWriteMode, NVICIPR15Base> ;
    using FieldValues = NVIC_IPR15_IPR_N3_Values<NVIC::IPR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR15Pack  = Register<0xE000E43C, 32, ReadWriteMode, NVICIPR15Base, T...> ;

  struct NVICIPR16Base {} ;

  struct IPR16 : public RegisterBase<0xE000E440, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR16_IPR_N0_Values<NVIC::IPR16, 0, 8, ReadWriteMode, NVICIPR16Base> ;
    using IPR_N1 = NVIC_IPR16_IPR_N1_Values<NVIC::IPR16, 8, 8, ReadWriteMode, NVICIPR16Base> ;
    using IPR_N2 = NVIC_IPR16_IPR_N2_Values<NVIC::IPR16, 16, 8, ReadWriteMode, NVICIPR16Base> ;
    using IPR_N3 = NVIC_IPR16_IPR_N3_Values<NVIC::IPR16, 24, 8, ReadWriteMode, NVICIPR16Base> ;
    using FieldValues = NVIC_IPR16_IPR_N3_Values<NVIC::IPR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR16Pack  = Register<0xE000E440, 32, ReadWriteMode, NVICIPR16Base, T...> ;

  struct NVICIPR17Base {} ;

  struct IPR17 : public RegisterBase<0xE000E444, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR17_IPR_N0_Values<NVIC::IPR17, 0, 8, ReadWriteMode, NVICIPR17Base> ;
    using IPR_N1 = NVIC_IPR17_IPR_N1_Values<NVIC::IPR17, 8, 8, ReadWriteMode, NVICIPR17Base> ;
    using IPR_N2 = NVIC_IPR17_IPR_N2_Values<NVIC::IPR17, 16, 8, ReadWriteMode, NVICIPR17Base> ;
    using IPR_N3 = NVIC_IPR17_IPR_N3_Values<NVIC::IPR17, 24, 8, ReadWriteMode, NVICIPR17Base> ;
    using FieldValues = NVIC_IPR17_IPR_N3_Values<NVIC::IPR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR17Pack  = Register<0xE000E444, 32, ReadWriteMode, NVICIPR17Base, T...> ;

  struct NVICIPR18Base {} ;

  struct IPR18 : public RegisterBase<0xE000E448, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR18_IPR_N0_Values<NVIC::IPR18, 0, 8, ReadWriteMode, NVICIPR18Base> ;
    using IPR_N1 = NVIC_IPR18_IPR_N1_Values<NVIC::IPR18, 8, 8, ReadWriteMode, NVICIPR18Base> ;
    using IPR_N2 = NVIC_IPR18_IPR_N2_Values<NVIC::IPR18, 16, 8, ReadWriteMode, NVICIPR18Base> ;
    using IPR_N3 = NVIC_IPR18_IPR_N3_Values<NVIC::IPR18, 24, 8, ReadWriteMode, NVICIPR18Base> ;
    using FieldValues = NVIC_IPR18_IPR_N3_Values<NVIC::IPR18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR18Pack  = Register<0xE000E448, 32, ReadWriteMode, NVICIPR18Base, T...> ;

  struct NVICIPR19Base {} ;

  struct IPR19 : public RegisterBase<0xE000E44C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR19_IPR_N0_Values<NVIC::IPR19, 0, 8, ReadWriteMode, NVICIPR19Base> ;
    using IPR_N1 = NVIC_IPR19_IPR_N1_Values<NVIC::IPR19, 8, 8, ReadWriteMode, NVICIPR19Base> ;
    using IPR_N2 = NVIC_IPR19_IPR_N2_Values<NVIC::IPR19, 16, 8, ReadWriteMode, NVICIPR19Base> ;
    using IPR_N3 = NVIC_IPR19_IPR_N3_Values<NVIC::IPR19, 24, 8, ReadWriteMode, NVICIPR19Base> ;
    using FieldValues = NVIC_IPR19_IPR_N3_Values<NVIC::IPR19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR19Pack  = Register<0xE000E44C, 32, ReadWriteMode, NVICIPR19Base, T...> ;

  struct NVICIPR20Base {} ;

  struct IPR20 : public RegisterBase<0xE000E450, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR20_IPR_N0_Values<NVIC::IPR20, 0, 8, ReadWriteMode, NVICIPR20Base> ;
    using IPR_N1 = NVIC_IPR20_IPR_N1_Values<NVIC::IPR20, 8, 8, ReadWriteMode, NVICIPR20Base> ;
    using IPR_N2 = NVIC_IPR20_IPR_N2_Values<NVIC::IPR20, 16, 8, ReadWriteMode, NVICIPR20Base> ;
    using IPR_N3 = NVIC_IPR20_IPR_N3_Values<NVIC::IPR20, 24, 8, ReadWriteMode, NVICIPR20Base> ;
    using FieldValues = NVIC_IPR20_IPR_N3_Values<NVIC::IPR20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR20Pack  = Register<0xE000E450, 32, ReadWriteMode, NVICIPR20Base, T...> ;

  struct NVICIPR21Base {} ;

  struct IPR21 : public RegisterBase<0xE000E454, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR21_IPR_N0_Values<NVIC::IPR21, 0, 8, ReadWriteMode, NVICIPR21Base> ;
    using IPR_N1 = NVIC_IPR21_IPR_N1_Values<NVIC::IPR21, 8, 8, ReadWriteMode, NVICIPR21Base> ;
    using IPR_N2 = NVIC_IPR21_IPR_N2_Values<NVIC::IPR21, 16, 8, ReadWriteMode, NVICIPR21Base> ;
    using IPR_N3 = NVIC_IPR21_IPR_N3_Values<NVIC::IPR21, 24, 8, ReadWriteMode, NVICIPR21Base> ;
    using FieldValues = NVIC_IPR21_IPR_N3_Values<NVIC::IPR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR21Pack  = Register<0xE000E454, 32, ReadWriteMode, NVICIPR21Base, T...> ;

  struct NVICIPR22Base {} ;

  struct IPR22 : public RegisterBase<0xE000E458, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR22_IPR_N0_Values<NVIC::IPR22, 0, 8, ReadWriteMode, NVICIPR22Base> ;
    using IPR_N1 = NVIC_IPR22_IPR_N1_Values<NVIC::IPR22, 8, 8, ReadWriteMode, NVICIPR22Base> ;
    using IPR_N2 = NVIC_IPR22_IPR_N2_Values<NVIC::IPR22, 16, 8, ReadWriteMode, NVICIPR22Base> ;
    using IPR_N3 = NVIC_IPR22_IPR_N3_Values<NVIC::IPR22, 24, 8, ReadWriteMode, NVICIPR22Base> ;
    using FieldValues = NVIC_IPR22_IPR_N3_Values<NVIC::IPR22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR22Pack  = Register<0xE000E458, 32, ReadWriteMode, NVICIPR22Base, T...> ;

  struct NVICIPR23Base {} ;

  struct IPR23 : public RegisterBase<0xE000E45C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR23_IPR_N0_Values<NVIC::IPR23, 0, 8, ReadWriteMode, NVICIPR23Base> ;
    using IPR_N1 = NVIC_IPR23_IPR_N1_Values<NVIC::IPR23, 8, 8, ReadWriteMode, NVICIPR23Base> ;
    using IPR_N2 = NVIC_IPR23_IPR_N2_Values<NVIC::IPR23, 16, 8, ReadWriteMode, NVICIPR23Base> ;
    using IPR_N3 = NVIC_IPR23_IPR_N3_Values<NVIC::IPR23, 24, 8, ReadWriteMode, NVICIPR23Base> ;
    using FieldValues = NVIC_IPR23_IPR_N3_Values<NVIC::IPR23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR23Pack  = Register<0xE000E45C, 32, ReadWriteMode, NVICIPR23Base, T...> ;

  struct NVICIPR24Base {} ;

  struct IPR24 : public RegisterBase<0xE000E460, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR24_IPR_N0_Values<NVIC::IPR24, 0, 8, ReadWriteMode, NVICIPR24Base> ;
    using IPR_N1 = NVIC_IPR24_IPR_N1_Values<NVIC::IPR24, 8, 8, ReadWriteMode, NVICIPR24Base> ;
    using IPR_N2 = NVIC_IPR24_IPR_N2_Values<NVIC::IPR24, 16, 8, ReadWriteMode, NVICIPR24Base> ;
    using IPR_N3 = NVIC_IPR24_IPR_N3_Values<NVIC::IPR24, 24, 8, ReadWriteMode, NVICIPR24Base> ;
    using FieldValues = NVIC_IPR24_IPR_N3_Values<NVIC::IPR24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR24Pack  = Register<0xE000E460, 32, ReadWriteMode, NVICIPR24Base, T...> ;

  struct NVICIPR25Base {} ;

  struct IPR25 : public RegisterBase<0xE000E464, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR25_IPR_N0_Values<NVIC::IPR25, 0, 8, ReadWriteMode, NVICIPR25Base> ;
    using IPR_N1 = NVIC_IPR25_IPR_N1_Values<NVIC::IPR25, 8, 8, ReadWriteMode, NVICIPR25Base> ;
    using IPR_N2 = NVIC_IPR25_IPR_N2_Values<NVIC::IPR25, 16, 8, ReadWriteMode, NVICIPR25Base> ;
    using IPR_N3 = NVIC_IPR25_IPR_N3_Values<NVIC::IPR25, 24, 8, ReadWriteMode, NVICIPR25Base> ;
    using FieldValues = NVIC_IPR25_IPR_N3_Values<NVIC::IPR25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR25Pack  = Register<0xE000E464, 32, ReadWriteMode, NVICIPR25Base, T...> ;

  struct NVICIPR26Base {} ;

  struct IPR26 : public RegisterBase<0xE000E468, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR26_IPR_N0_Values<NVIC::IPR26, 0, 8, ReadWriteMode, NVICIPR26Base> ;
    using IPR_N1 = NVIC_IPR26_IPR_N1_Values<NVIC::IPR26, 8, 8, ReadWriteMode, NVICIPR26Base> ;
    using IPR_N2 = NVIC_IPR26_IPR_N2_Values<NVIC::IPR26, 16, 8, ReadWriteMode, NVICIPR26Base> ;
    using IPR_N3 = NVIC_IPR26_IPR_N3_Values<NVIC::IPR26, 24, 8, ReadWriteMode, NVICIPR26Base> ;
    using FieldValues = NVIC_IPR26_IPR_N3_Values<NVIC::IPR26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR26Pack  = Register<0xE000E468, 32, ReadWriteMode, NVICIPR26Base, T...> ;

  struct NVICIPR27Base {} ;

  struct IPR27 : public RegisterBase<0xE000E46C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR27_IPR_N0_Values<NVIC::IPR27, 0, 8, ReadWriteMode, NVICIPR27Base> ;
    using IPR_N1 = NVIC_IPR27_IPR_N1_Values<NVIC::IPR27, 8, 8, ReadWriteMode, NVICIPR27Base> ;
    using IPR_N2 = NVIC_IPR27_IPR_N2_Values<NVIC::IPR27, 16, 8, ReadWriteMode, NVICIPR27Base> ;
    using IPR_N3 = NVIC_IPR27_IPR_N3_Values<NVIC::IPR27, 24, 8, ReadWriteMode, NVICIPR27Base> ;
    using FieldValues = NVIC_IPR27_IPR_N3_Values<NVIC::IPR27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR27Pack  = Register<0xE000E46C, 32, ReadWriteMode, NVICIPR27Base, T...> ;

  struct NVICIPR28Base {} ;

  struct IPR28 : public RegisterBase<0xE000E470, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR28_IPR_N0_Values<NVIC::IPR28, 0, 8, ReadWriteMode, NVICIPR28Base> ;
    using IPR_N1 = NVIC_IPR28_IPR_N1_Values<NVIC::IPR28, 8, 8, ReadWriteMode, NVICIPR28Base> ;
    using IPR_N2 = NVIC_IPR28_IPR_N2_Values<NVIC::IPR28, 16, 8, ReadWriteMode, NVICIPR28Base> ;
    using IPR_N3 = NVIC_IPR28_IPR_N3_Values<NVIC::IPR28, 24, 8, ReadWriteMode, NVICIPR28Base> ;
    using FieldValues = NVIC_IPR28_IPR_N3_Values<NVIC::IPR28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR28Pack  = Register<0xE000E470, 32, ReadWriteMode, NVICIPR28Base, T...> ;

  struct NVICIPR29Base {} ;

  struct IPR29 : public RegisterBase<0xE000E474, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR29_IPR_N0_Values<NVIC::IPR29, 0, 8, ReadWriteMode, NVICIPR29Base> ;
    using IPR_N1 = NVIC_IPR29_IPR_N1_Values<NVIC::IPR29, 8, 8, ReadWriteMode, NVICIPR29Base> ;
    using IPR_N2 = NVIC_IPR29_IPR_N2_Values<NVIC::IPR29, 16, 8, ReadWriteMode, NVICIPR29Base> ;
    using IPR_N3 = NVIC_IPR29_IPR_N3_Values<NVIC::IPR29, 24, 8, ReadWriteMode, NVICIPR29Base> ;
    using FieldValues = NVIC_IPR29_IPR_N3_Values<NVIC::IPR29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR29Pack  = Register<0xE000E474, 32, ReadWriteMode, NVICIPR29Base, T...> ;

  struct NVICIPR30Base {} ;

  struct IPR30 : public RegisterBase<0xE000E478, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR30_IPR_N0_Values<NVIC::IPR30, 0, 8, ReadWriteMode, NVICIPR30Base> ;
    using IPR_N1 = NVIC_IPR30_IPR_N1_Values<NVIC::IPR30, 8, 8, ReadWriteMode, NVICIPR30Base> ;
    using IPR_N2 = NVIC_IPR30_IPR_N2_Values<NVIC::IPR30, 16, 8, ReadWriteMode, NVICIPR30Base> ;
    using IPR_N3 = NVIC_IPR30_IPR_N3_Values<NVIC::IPR30, 24, 8, ReadWriteMode, NVICIPR30Base> ;
    using FieldValues = NVIC_IPR30_IPR_N3_Values<NVIC::IPR30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR30Pack  = Register<0xE000E478, 32, ReadWriteMode, NVICIPR30Base, T...> ;

  struct NVICIPR31Base {} ;

  struct IPR31 : public RegisterBase<0xE000E47C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR31_IPR_N0_Values<NVIC::IPR31, 0, 8, ReadWriteMode, NVICIPR31Base> ;
    using IPR_N1 = NVIC_IPR31_IPR_N1_Values<NVIC::IPR31, 8, 8, ReadWriteMode, NVICIPR31Base> ;
    using IPR_N2 = NVIC_IPR31_IPR_N2_Values<NVIC::IPR31, 16, 8, ReadWriteMode, NVICIPR31Base> ;
    using IPR_N3 = NVIC_IPR31_IPR_N3_Values<NVIC::IPR31, 24, 8, ReadWriteMode, NVICIPR31Base> ;
    using FieldValues = NVIC_IPR31_IPR_N3_Values<NVIC::IPR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR31Pack  = Register<0xE000E47C, 32, ReadWriteMode, NVICIPR31Base, T...> ;

  struct NVICIPR32Base {} ;

  struct IPR32 : public RegisterBase<0xE000E480, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR32_IPR_N0_Values<NVIC::IPR32, 0, 8, ReadWriteMode, NVICIPR32Base> ;
    using IPR_N1 = NVIC_IPR32_IPR_N1_Values<NVIC::IPR32, 8, 8, ReadWriteMode, NVICIPR32Base> ;
    using IPR_N2 = NVIC_IPR32_IPR_N2_Values<NVIC::IPR32, 16, 8, ReadWriteMode, NVICIPR32Base> ;
    using IPR_N3 = NVIC_IPR32_IPR_N3_Values<NVIC::IPR32, 24, 8, ReadWriteMode, NVICIPR32Base> ;
    using FieldValues = NVIC_IPR32_IPR_N3_Values<NVIC::IPR32, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR32Pack  = Register<0xE000E480, 32, ReadWriteMode, NVICIPR32Base, T...> ;

  struct NVICIPR33Base {} ;

  struct IPR33 : public RegisterBase<0xE000E484, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR33_IPR_N0_Values<NVIC::IPR33, 0, 8, ReadWriteMode, NVICIPR33Base> ;
    using IPR_N1 = NVIC_IPR33_IPR_N1_Values<NVIC::IPR33, 8, 8, ReadWriteMode, NVICIPR33Base> ;
    using IPR_N2 = NVIC_IPR33_IPR_N2_Values<NVIC::IPR33, 16, 8, ReadWriteMode, NVICIPR33Base> ;
    using IPR_N3 = NVIC_IPR33_IPR_N3_Values<NVIC::IPR33, 24, 8, ReadWriteMode, NVICIPR33Base> ;
    using FieldValues = NVIC_IPR33_IPR_N3_Values<NVIC::IPR33, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR33Pack  = Register<0xE000E484, 32, ReadWriteMode, NVICIPR33Base, T...> ;

  struct NVICIPR34Base {} ;

  struct IPR34 : public RegisterBase<0xE000E488, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR34_IPR_N0_Values<NVIC::IPR34, 0, 8, ReadWriteMode, NVICIPR34Base> ;
    using IPR_N1 = NVIC_IPR34_IPR_N1_Values<NVIC::IPR34, 8, 8, ReadWriteMode, NVICIPR34Base> ;
    using IPR_N2 = NVIC_IPR34_IPR_N2_Values<NVIC::IPR34, 16, 8, ReadWriteMode, NVICIPR34Base> ;
    using IPR_N3 = NVIC_IPR34_IPR_N3_Values<NVIC::IPR34, 24, 8, ReadWriteMode, NVICIPR34Base> ;
    using FieldValues = NVIC_IPR34_IPR_N3_Values<NVIC::IPR34, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR34Pack  = Register<0xE000E488, 32, ReadWriteMode, NVICIPR34Base, T...> ;

  struct NVICIPR35Base {} ;

  struct IPR35 : public RegisterBase<0xE000E48C, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR35_IPR_N0_Values<NVIC::IPR35, 0, 8, ReadWriteMode, NVICIPR35Base> ;
    using IPR_N1 = NVIC_IPR35_IPR_N1_Values<NVIC::IPR35, 8, 8, ReadWriteMode, NVICIPR35Base> ;
    using IPR_N2 = NVIC_IPR35_IPR_N2_Values<NVIC::IPR35, 16, 8, ReadWriteMode, NVICIPR35Base> ;
    using IPR_N3 = NVIC_IPR35_IPR_N3_Values<NVIC::IPR35, 24, 8, ReadWriteMode, NVICIPR35Base> ;
    using FieldValues = NVIC_IPR35_IPR_N3_Values<NVIC::IPR35, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR35Pack  = Register<0xE000E48C, 32, ReadWriteMode, NVICIPR35Base, T...> ;

  struct NVICIPR36Base {} ;

  struct IPR36 : public RegisterBase<0xE000E490, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR36_IPR_N0_Values<NVIC::IPR36, 0, 8, ReadWriteMode, NVICIPR36Base> ;
    using IPR_N1 = NVIC_IPR36_IPR_N1_Values<NVIC::IPR36, 8, 8, ReadWriteMode, NVICIPR36Base> ;
    using IPR_N2 = NVIC_IPR36_IPR_N2_Values<NVIC::IPR36, 16, 8, ReadWriteMode, NVICIPR36Base> ;
    using IPR_N3 = NVIC_IPR36_IPR_N3_Values<NVIC::IPR36, 24, 8, ReadWriteMode, NVICIPR36Base> ;
    using FieldValues = NVIC_IPR36_IPR_N3_Values<NVIC::IPR36, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR36Pack  = Register<0xE000E490, 32, ReadWriteMode, NVICIPR36Base, T...> ;

  struct NVICIPR37Base {} ;

  struct IPR37 : public RegisterBase<0xE000E494, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR37_IPR_N0_Values<NVIC::IPR37, 0, 8, ReadWriteMode, NVICIPR37Base> ;
    using IPR_N1 = NVIC_IPR37_IPR_N1_Values<NVIC::IPR37, 8, 8, ReadWriteMode, NVICIPR37Base> ;
    using IPR_N2 = NVIC_IPR37_IPR_N2_Values<NVIC::IPR37, 16, 8, ReadWriteMode, NVICIPR37Base> ;
    using IPR_N3 = NVIC_IPR37_IPR_N3_Values<NVIC::IPR37, 24, 8, ReadWriteMode, NVICIPR37Base> ;
    using FieldValues = NVIC_IPR37_IPR_N3_Values<NVIC::IPR37, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR37Pack  = Register<0xE000E494, 32, ReadWriteMode, NVICIPR37Base, T...> ;

  struct NVICIPR38Base {} ;

  struct IPR38 : public RegisterBase<0xE000E498, 32, ReadWriteMode>
  {
    using IPR_N0 = NVIC_IPR38_IPR_N0_Values<NVIC::IPR38, 0, 8, ReadWriteMode, NVICIPR38Base> ;
    using IPR_N1 = NVIC_IPR38_IPR_N1_Values<NVIC::IPR38, 8, 8, ReadWriteMode, NVICIPR38Base> ;
    using IPR_N2 = NVIC_IPR38_IPR_N2_Values<NVIC::IPR38, 16, 8, ReadWriteMode, NVICIPR38Base> ;
    using IPR_N3 = NVIC_IPR38_IPR_N3_Values<NVIC::IPR38, 24, 8, ReadWriteMode, NVICIPR38Base> ;
    using FieldValues = NVIC_IPR38_IPR_N3_Values<NVIC::IPR38, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPR38Pack  = Register<0xE000E498, 32, ReadWriteMode, NVICIPR38Base, T...> ;

  struct NVICISER3Base {} ;

  struct ISER3 : public RegisterBase<0xE000E10C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ISER3Pack  = Register<0xE000E10C, 32, ReadWriteMode, NVICISER3Base, T...> ;

  struct NVICICER3Base {} ;

  struct ICER3 : public RegisterBase<0xE000E18C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ICER3Pack  = Register<0xE000E18C, 32, ReadWriteMode, NVICICER3Base, T...> ;

  struct NVICISPR3Base {} ;

  struct ISPR3 : public RegisterBase<0xE000E20C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ISPR3Pack  = Register<0xE000E20C, 32, ReadWriteMode, NVICISPR3Base, T...> ;

  struct NVICICPR3Base {} ;

  struct ICPR3 : public RegisterBase<0xE000E2C0, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using ICPR3Pack  = Register<0xE000E2C0, 32, ReadWriteMode, NVICICPR3Base, T...> ;

  struct NVICIABR3Base {} ;

  struct IABR3 : public RegisterBase<0xE000E30C, 32, ReadWriteMode>
  {
  } ;

  template<typename... T> 
  using IABR3Pack  = Register<0xE000E30C, 32, ReadWriteMode, NVICIABR3Base, T...> ;

} ;

#endif //#if !defined(NVICREGISTERS_HPP)
