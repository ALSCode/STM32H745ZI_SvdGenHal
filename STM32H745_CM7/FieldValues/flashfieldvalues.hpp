/*******************************************************************************
* Filename      : flashfieldvalues.hpp
*
* Details       : Enumerations related with Flash peripheral. This header file
*                 is auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(FLASHENUMS_HPP)
#define FLASHENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_LATENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_WRHIGHFREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_WRHIGHFREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_WRHIGHFREQ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_ACR_WRHIGHFREQ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_ACR_WRHIGHFREQ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR__LATENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR__LATENCY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR__LATENCY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_ACR__LATENCY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_ACR__LATENCY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_ACR__LATENCY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_ACR__LATENCY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_ACR__LATENCY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_ACR__LATENCY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR__WRHIGHFREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR__WRHIGHFREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR__WRHIGHFREQ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_ACR__WRHIGHFREQ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_ACR__WRHIGHFREQ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_KEYR1_KEYR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTKEYR_OPTKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTKEYR__OPTKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_LOCK1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_LOCK1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_LOCK1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_PG1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_PG1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_PG1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_SER1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_SER1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_SER1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_BER1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_BER1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_BER1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_PSIZE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_PSIZE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_PSIZE1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_CR1_PSIZE1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_CR1_PSIZE1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_FW1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_FW1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_FW1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_START1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_START1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_START1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_SNB1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_SNB1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_SNB1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_CR1_SNB1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_CR1_SNB1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_CR1_SNB1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_CR1_SNB1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_CR1_SNB1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_CR1_SNB1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_CRC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_CRC_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_CRC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_EOPIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_EOPIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_EOPIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_WRPERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_WRPERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_WRPERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_PGSERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_PGSERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_PGSERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_STRBERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_STRBERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_STRBERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_INCERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_INCERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_INCERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_OPERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_OPERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_OPERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_RDPERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_RDPERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_RDPERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_RDSERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_RDSERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_RDSERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_SNECCERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_SNECCERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_SNECCERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_DBECCERRIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_DBECCERRIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_DBECCERRIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR1_CRCENDIE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR1_CRCENDIE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR1_CRCENDIE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_BSY1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_BSY1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_BSY1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_WBNE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_WBNE1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_WBNE1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_QW1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_QW1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_QW1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_CRC_BUSY1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_CRC_BUSY1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_CRC_BUSY1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_EOP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_EOP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_EOP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_WRPERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_WRPERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_WRPERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_PGSERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_PGSERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_PGSERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_STRBERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_STRBERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_STRBERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_INCERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_INCERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_INCERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_OPERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_OPERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_OPERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_RDPERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_RDPERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_RDPERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_RDSERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_RDSERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_RDSERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_SNECCERR11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_SNECCERR11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_SNECCERR11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_DBECCERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_DBECCERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_DBECCERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR1_CRCEND1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR1_CRCEND1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR1_CRCEND1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_EOP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_EOP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_EOP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_WRPERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_WRPERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_WRPERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_PGSERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_PGSERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_PGSERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_STRBERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_STRBERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_STRBERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_INCERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_INCERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_INCERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_OPERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_OPERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_OPERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_RDPERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_RDPERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_RDPERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_RDSERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_RDSERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_RDSERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_SNECCERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_SNECCERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_SNECCERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_DBECCERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_DBECCERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_DBECCERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR1_CLR_CRCEND1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR1_CLR_CRCEND1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR1_CLR_CRCEND1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR_OPTLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR_OPTLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR_OPTLOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR_OPTSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR_OPTSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR_OPTSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR_MER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR_MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR_MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR_OPTCHANGEERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR_OPTCHANGEERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR_OPTCHANGEERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR_SWAP_BANK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR_SWAP_BANK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR_SWAP_BANK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR__OPTLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR__OPTLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR__OPTLOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR__OPTSTART_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR__OPTSTART_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR__OPTSTART_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR__MER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR__MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR__MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR__OPTCHANGEERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR__OPTCHANGEERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR__OPTCHANGEERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCR__SWAP_BANK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCR__SWAP_BANK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCR__SWAP_BANK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__OPT_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__OPT_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__OPT_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__BOR_LEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__BOR_LEV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTSR_CUR__BOR_LEV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTSR_CUR__BOR_LEV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__IWDG1_HW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__IWDG1_HW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__IWDG1_HW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__nRST_STOP_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__nRST_STOP_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__nRST_STOP_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__nRST_STBY_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__nRST_STBY_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__nRST_STBY_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__FZ_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__FZ_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__FZ_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__FZ_IWDG_SDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__FZ_IWDG_SDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__FZ_IWDG_SDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__ST_RAM_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__ST_RAM_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__ST_RAM_SIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTSR_CUR__ST_RAM_SIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTSR_CUR__ST_RAM_SIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__SECURITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__SECURITY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__SECURITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__RSS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__RSS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__RSS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__PERSO_OK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__PERSO_OK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__PERSO_OK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__IO_HSLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__IO_HSLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__IO_HSLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__OPTCHANGEERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__OPTCHANGEERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__OPTCHANGEERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR__SWAP_BANK_OPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR__SWAP_BANK_OPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR__SWAP_BANK_OPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_OPT_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_OPT_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_OPT_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_BOR_LEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_BOR_LEV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTSR_CUR_BOR_LEV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTSR_CUR_BOR_LEV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_IWDG1_HW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_IWDG1_HW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_IWDG1_HW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_nRST_STOP_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_nRST_STOP_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_nRST_STOP_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_nRST_STBY_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_nRST_STBY_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_nRST_STBY_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_FZ_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_FZ_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_FZ_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_FZ_IWDG_SDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_FZ_IWDG_SDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_FZ_IWDG_SDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_ST_RAM_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_ST_RAM_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_ST_RAM_SIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTSR_CUR_ST_RAM_SIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTSR_CUR_ST_RAM_SIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_SECURITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_SECURITY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_SECURITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_RSS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_RSS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_RSS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_PERSO_OK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_PERSO_OK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_PERSO_OK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_IO_HSLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_IO_HSLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_IO_HSLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_OPTCHANGEERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_OPTCHANGEERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_OPTCHANGEERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_CUR_SWAP_BANK_OPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_CUR_SWAP_BANK_OPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_CUR_SWAP_BANK_OPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_BOR_LEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_BOR_LEV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTSR_PRG_BOR_LEV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTSR_PRG_BOR_LEV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_IWDG1_HW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_IWDG1_HW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_IWDG1_HW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_nRST_STOP_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_nRST_STOP_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_nRST_STOP_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_nRST_STBY_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_nRST_STBY_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_nRST_STBY_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_FZ_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_FZ_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_FZ_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_FZ_IWDG_SDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_FZ_IWDG_SDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_FZ_IWDG_SDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_ST_RAM_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_ST_RAM_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_ST_RAM_SIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTSR_PRG_ST_RAM_SIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTSR_PRG_ST_RAM_SIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_SECURITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_SECURITY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_SECURITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_RSS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_RSS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_RSS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_RSS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_RSS2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_RSS2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_IO_HSLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_IO_HSLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_IO_HSLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG_SWAP_BANK_OPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG_SWAP_BANK_OPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG_SWAP_BANK_OPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__BOR_LEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__BOR_LEV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTSR_PRG__BOR_LEV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTSR_PRG__BOR_LEV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__IWDG1_HW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__IWDG1_HW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__IWDG1_HW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__nRST_STOP_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__nRST_STOP_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__nRST_STOP_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__nRST_STBY_D1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__nRST_STBY_D1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__nRST_STBY_D1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__FZ_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__FZ_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__FZ_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__FZ_IWDG_SDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__FZ_IWDG_SDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__FZ_IWDG_SDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__ST_RAM_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__ST_RAM_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__ST_RAM_SIZE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTSR_PRG__ST_RAM_SIZE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTSR_PRG__ST_RAM_SIZE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__SECURITY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__SECURITY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__SECURITY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__RSS1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__RSS1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__RSS1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__RSS2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__RSS2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__RSS2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__IO_HSLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__IO_HSLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__IO_HSLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTSR_PRG__SWAP_BANK_OPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTSR_PRG__SWAP_BANK_OPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTSR_PRG__SWAP_BANK_OPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCCR__CLR_OPTCHANGEERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCCR__CLR_OPTCHANGEERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCCR__CLR_OPTCHANGEERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTCCR_CLR_OPTCHANGEERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTCCR_CLR_OPTCHANGEERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTCCR_CLR_OPTCHANGEERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_CUR1_PROT_AREA_START1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_CUR1_PROT_AREA_END1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_CUR1_DMEP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PRAR_CUR1_DMEP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_PRAR_CUR1_DMEP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_PRG1_PROT_AREA_START1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_PRG1_PROT_AREA_END1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_PRG1_DMEP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PRAR_PRG1_DMEP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_PRAR_PRG1_DMEP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_CUR1_SEC_AREA_START1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_CUR1_SEC_AREA_END1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_CUR1_DMES1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SCAR_CUR1_DMES1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SCAR_CUR1_DMES1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_PRG1_SEC_AREA_START1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_PRG1_SEC_AREA_END1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_PRG1_DMES1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SCAR_PRG1_DMES1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SCAR_PRG1_DMES1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WPSN_CUR1R_WRPSn1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WPSN_PRG1R_WRPSn1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_BOOT_CURR_BOOT_ADD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_BOOT_CURR_BOOT_ADD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_BOOT_PRGR_BOOT_ADD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_BOOT_PRGR_BOOT_ADD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR1_CRC_SECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR1_CRC_SECT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR1_CRC_SECT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_CRCCR1_CRC_SECT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_CRCCR1_CRC_SECT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_CRCCR1_CRC_SECT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_CRCCR1_CRC_SECT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_CRCCR1_CRC_SECT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_CRCCR1_CRC_SECT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR1_ALL_BANK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR1_ALL_BANK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR1_ALL_BANK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR1_CRC_BY_SECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR1_CRC_BY_SECT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR1_CRC_BY_SECT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR1_ADD_SECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR1_ADD_SECT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR1_ADD_SECT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR1_CLEAN_SECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR1_CLEAN_SECT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR1_CLEAN_SECT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR1_START_CRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR1_START_CRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR1_START_CRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR1_CLEAN_CRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR1_CLEAN_CRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR1_CLEAN_CRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR1_CRC_BURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR1_CRC_BURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR1_CRC_BURST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_CRCCR1_CRC_BURST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_CRCCR1_CRC_BURST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCSADD1R_CRC_START_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCEADD1R_CRC_END_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCDATAR_CRC_DATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ECC_FA1R_FAIL_ECC_ADDR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_KEYR2_KEYR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_LOCK2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_LOCK2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_LOCK2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_PG2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_PG2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_PG2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_SER2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_SER2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_SER2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_BER2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_BER2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_BER2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_PSIZE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_PSIZE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_PSIZE2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_CR2_PSIZE2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_CR2_PSIZE2_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_FW2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_FW2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_FW2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_START2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_START2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_START2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_SNB2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_SNB2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_SNB2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_CR2_SNB2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_CR2_SNB2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_CR2_SNB2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_CR2_SNB2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_CR2_SNB2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_CR2_SNB2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_CRC_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_CRC_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_CRC_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_EOPIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_EOPIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_EOPIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_WRPERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_WRPERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_WRPERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_PGSERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_PGSERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_PGSERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_STRBERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_STRBERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_STRBERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_INCERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_INCERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_INCERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_OPERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_OPERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_OPERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_RDPERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_RDPERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_RDPERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_RDSERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_RDSERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_RDSERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_SNECCERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_SNECCERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_SNECCERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_DBECCERRIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_DBECCERRIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_DBECCERRIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR2_CRCENDIE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR2_CRCENDIE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR2_CRCENDIE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_BSY2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_BSY2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_BSY2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_WBNE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_WBNE2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_WBNE2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_QW2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_QW2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_QW2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_CRC_BUSY2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_CRC_BUSY2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_CRC_BUSY2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_EOP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_EOP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_EOP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_WRPERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_WRPERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_WRPERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_PGSERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_PGSERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_PGSERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_STRBERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_STRBERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_STRBERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_INCERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_INCERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_INCERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_OPERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_OPERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_OPERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_RDPERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_RDPERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_RDPERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_RDSERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_RDSERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_RDSERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_SNECCERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_SNECCERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_SNECCERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_DBECCERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_DBECCERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_DBECCERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR2_CRCEND2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR2_CRCEND2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR2_CRCEND2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_EOP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_EOP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_EOP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_WRPERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_WRPERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_WRPERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_PGSERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_PGSERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_PGSERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_STRBERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_STRBERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_STRBERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_INCERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_INCERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_INCERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_OPERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_OPERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_OPERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_RDPERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_RDPERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_RDPERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_RDSERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_RDSERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_RDSERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_SNECCERR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_SNECCERR2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_SNECCERR2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_DBECCERR1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_DBECCERR1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_DBECCERR1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CCR2_CLR_CRCEND2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CCR2_CLR_CRCEND2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CCR2_CLR_CRCEND2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_CUR2_PROT_AREA_START2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_CUR2_PROT_AREA_END2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_CUR2_DMEP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PRAR_CUR2_DMEP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_PRAR_CUR2_DMEP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_PRG2_PROT_AREA_START2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_PRG2_PROT_AREA_END2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PRAR_PRG2_DMEP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PRAR_PRG2_DMEP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_PRAR_PRG2_DMEP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_CUR2_SEC_AREA_START2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_CUR2_SEC_AREA_END2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_CUR2_DMES2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SCAR_CUR2_DMES2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SCAR_CUR2_DMES2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_PRG2_SEC_AREA_START2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_PRG2_SEC_AREA_END2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SCAR_PRG2_DMES2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SCAR_PRG2_DMES2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SCAR_PRG2_DMES2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WPSN_CUR2R_WRPSn2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WPSN_PRG2R_WRPSn2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR2_CRC_SECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR2_CRC_SECT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR2_CRC_SECT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_CRCCR2_CRC_SECT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_CRCCR2_CRC_SECT_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_CRCCR2_CRC_SECT_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_CRCCR2_CRC_SECT_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_CRCCR2_CRC_SECT_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_CRCCR2_CRC_SECT_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR2_ALL_BANK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR2_ALL_BANK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR2_ALL_BANK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR2_CRC_BY_SECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR2_CRC_BY_SECT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR2_CRC_BY_SECT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR2_ADD_SECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR2_ADD_SECT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR2_ADD_SECT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR2_CLEAN_SECT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR2_CLEAN_SECT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR2_CLEAN_SECT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR2_START_CRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR2_START_CRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR2_START_CRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR2_CLEAN_CRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR2_CLEAN_CRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR2_CLEAN_CRC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCCR2_CRC_BURST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CRCCR2_CRC_BURST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CRCCR2_CRC_BURST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_CRCCR2_CRC_BURST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_CRCCR2_CRC_BURST_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCSADD2R_CRC_START_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CRCEADD2R_CRC_END_ADDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ECC_FA2R_FAIL_ECC_ADDR2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(FLASHENUMS_HPP)
