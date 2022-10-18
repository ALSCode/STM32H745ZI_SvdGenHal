/*******************************************************************************
* Filename      : iwdg2fieldvalues.hpp
*
* Details       : Enumerations related with IWDG2 peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(IWDG2ENUMS_HPP)
#define IWDG2ENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG2_KR_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG2_PR_PR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG2_PR_PR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG2_PR_PR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<IWDG2_PR_PR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<IWDG2_PR_PR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<IWDG2_PR_PR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<IWDG2_PR_PR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<IWDG2_PR_PR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<IWDG2_PR_PR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG2_RLR_RL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG2_SR_PVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG2_SR_PVU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG2_SR_PVU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG2_SR_RVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG2_SR_RVU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG2_SR_RVU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG2_SR_WVU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<IWDG2_SR_WVU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<IWDG2_SR_WVU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct IWDG2_WINR_WIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(IWDG2ENUMS_HPP)
