/*******************************************************************************
* Filename      : jpegfieldvalues.hpp
*
* Details       : Enumerations related with JPEG peripheral. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(JPEGENUMS_HPP)
#define JPEGENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR0_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFR0_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFR0_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR1_NF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFR1_NF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFR1_NF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFR1_NF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFR1_NF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR1_DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFR1_DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFR1_DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR1_COLORSPACE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFR1_COLORSPACE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFR1_COLORSPACE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFR1_COLORSPACE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFR1_COLORSPACE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR1_NS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFR1_NS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFR1_NS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFR1_NS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFR1_NS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR1_HDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFR1_HDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFR1_HDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR1_YSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR2_NMCU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFR3_XSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN1_HD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN1_HD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN1_HD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN1_HA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN1_HA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN1_HA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN1_QT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN1_QT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN1_QT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN1_QT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN1_QT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN1_NB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN1_NB_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN1_VSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN1_VSF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN1_HSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN1_HSF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN2_HD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN2_HD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN2_HD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN2_HA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN2_HA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN2_HA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN2_QT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN2_QT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN2_QT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN2_QT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN2_QT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN2_NB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN2_NB_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN2_VSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN2_VSF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN2_HSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN2_HSF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN3_HD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN3_HD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN3_HD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN3_HA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN3_HA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN3_HA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN3_QT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN3_QT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN3_QT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN3_QT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN3_QT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN3_NB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN3_NB_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN3_VSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN3_VSF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN3_HSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN3_HSF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN4_HD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN4_HD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN4_HD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN4_HA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN4_HA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN4_HA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN4_QT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN4_QT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN4_QT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN4_QT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN4_QT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN4_NB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN4_NB_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN4_VSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN4_VSF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CONFRN4_HSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 3U> ;
  using Value4 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 4U> ;
  using Value5 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 5U> ;
  using Value6 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 6U> ;
  using Value7 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 7U> ;
  using Value8 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 8U> ;
  using Value9 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 9U> ;
  using Value10 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 10U> ;
  using Value11 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 11U> ;
  using Value12 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 12U> ;
  using Value13 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 13U> ;
  using Value14 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 14U> ;
  using Value15 = FieldValue<JPEG_CONFRN4_HSF_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_JCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_JCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_JCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_IFTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_IFTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_IFTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_IFNFIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_IFNFIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_IFNFIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_OFTIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_OFTIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_OFTIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_OFNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_OFNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_OFNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_EOCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_EOCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_EOCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_HPDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_HPDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_HPDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_IDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_IDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_IDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_ODMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_ODMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_ODMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_IFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_IFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_IFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CR_OFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CR_OFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CR_OFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_SR_IFTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_SR_IFTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_SR_IFTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_SR_IFNFF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_SR_IFNFF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_SR_IFNFF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_SR_OFTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_SR_OFTF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_SR_OFTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_SR_OFNEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_SR_OFNEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_SR_OFNEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_SR_EOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_SR_EOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_SR_EOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_SR_HPDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_SR_HPDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_SR_HPDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_SR_COF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_SR_COF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_SR_COF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CFR_CEOCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CFR_CEOCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CFR_CEOCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_CFR_CHPDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<JPEG_CFR_CHPDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<JPEG_CFR_CHPDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_DIR_DATAIN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct JPEG_DOR_DATAOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(JPEGENUMS_HPP)
