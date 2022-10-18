/*******************************************************************************
* Filename      : flashregisters.hpp
*
* Details       : Flash. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(FLASHREGISTERS_HPP)
#define FLASHREGISTERS_HPP

#include "flashfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Flash
{
  struct FlashACRBase {} ;

  struct ACR : public RegisterBase<0x52002000, 32, ReadWriteMode>
  {
    using LATENCY = Flash_ACR_LATENCY_Values<Flash::ACR, 0, 3, ReadWriteMode, FlashACRBase> ;
    using WRHIGHFREQ = Flash_ACR_WRHIGHFREQ_Values<Flash::ACR, 4, 2, ReadWriteMode, FlashACRBase> ;
    using FieldValues = Flash_ACR_WRHIGHFREQ_Values<Flash::ACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACRPack  = Register<0x52002000, 32, ReadWriteMode, FlashACRBase, T...> ;

  struct FlashACR_Base {} ;

  struct ACR_ : public RegisterBase<0x52002100, 32, ReadWriteMode>
  {
    using LATENCY = Flash_ACR__LATENCY_Values<Flash::ACR_, 0, 3, ReadWriteMode, FlashACR_Base> ;
    using WRHIGHFREQ = Flash_ACR__WRHIGHFREQ_Values<Flash::ACR_, 4, 2, ReadWriteMode, FlashACR_Base> ;
    using FieldValues = Flash_ACR__WRHIGHFREQ_Values<Flash::ACR_, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACR_Pack  = Register<0x52002100, 32, ReadWriteMode, FlashACR_Base, T...> ;

  struct FlashKEYR1Base {} ;

  struct KEYR1 : public RegisterBase<0x52002004, 32, ReadWriteMode>
  {
    using KEYR1Field = Flash_KEYR1_KEYR1_Values<Flash::KEYR1, 0, 32, ReadWriteMode, FlashKEYR1Base> ;
    using FieldValues = Flash_KEYR1_KEYR1_Values<Flash::KEYR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR1Pack  = Register<0x52002004, 32, ReadWriteMode, FlashKEYR1Base, T...> ;

  struct FlashOPTKEYRBase {} ;

  struct OPTKEYR : public RegisterBase<0x52002008, 32, ReadWriteMode>
  {
    using OPTKEYRField = Flash_OPTKEYR_OPTKEYR_Values<Flash::OPTKEYR, 0, 32, ReadWriteMode, FlashOPTKEYRBase> ;
    using FieldValues = Flash_OPTKEYR_OPTKEYR_Values<Flash::OPTKEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTKEYRPack  = Register<0x52002008, 32, ReadWriteMode, FlashOPTKEYRBase, T...> ;

  struct FlashOPTKEYR_Base {} ;

  struct OPTKEYR_ : public RegisterBase<0x52002108, 32, ReadWriteMode>
  {
    using OPTKEYR = Flash_OPTKEYR__OPTKEYR_Values<Flash::OPTKEYR_, 0, 32, ReadWriteMode, FlashOPTKEYR_Base> ;
    using FieldValues = Flash_OPTKEYR__OPTKEYR_Values<Flash::OPTKEYR_, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTKEYR_Pack  = Register<0x52002108, 32, ReadWriteMode, FlashOPTKEYR_Base, T...> ;

  struct FlashCR1Base {} ;

  struct CR1 : public RegisterBase<0x5200200C, 32, ReadWriteMode>
  {
    using LOCK1 = Flash_CR1_LOCK1_Values<Flash::CR1, 0, 1, ReadWriteMode, FlashCR1Base> ;
    using PG1 = Flash_CR1_PG1_Values<Flash::CR1, 1, 1, ReadWriteMode, FlashCR1Base> ;
    using SER1 = Flash_CR1_SER1_Values<Flash::CR1, 2, 1, ReadWriteMode, FlashCR1Base> ;
    using BER1 = Flash_CR1_BER1_Values<Flash::CR1, 3, 1, ReadWriteMode, FlashCR1Base> ;
    using PSIZE1 = Flash_CR1_PSIZE1_Values<Flash::CR1, 4, 2, ReadWriteMode, FlashCR1Base> ;
    using FW1 = Flash_CR1_FW1_Values<Flash::CR1, 6, 1, ReadWriteMode, FlashCR1Base> ;
    using START1 = Flash_CR1_START1_Values<Flash::CR1, 7, 1, ReadWriteMode, FlashCR1Base> ;
    using SNB1 = Flash_CR1_SNB1_Values<Flash::CR1, 8, 3, ReadWriteMode, FlashCR1Base> ;
    using CRC_EN = Flash_CR1_CRC_EN_Values<Flash::CR1, 15, 1, ReadWriteMode, FlashCR1Base> ;
    using EOPIE1 = Flash_CR1_EOPIE1_Values<Flash::CR1, 16, 1, ReadWriteMode, FlashCR1Base> ;
    using WRPERRIE1 = Flash_CR1_WRPERRIE1_Values<Flash::CR1, 17, 1, ReadWriteMode, FlashCR1Base> ;
    using PGSERRIE1 = Flash_CR1_PGSERRIE1_Values<Flash::CR1, 18, 1, ReadWriteMode, FlashCR1Base> ;
    using STRBERRIE1 = Flash_CR1_STRBERRIE1_Values<Flash::CR1, 19, 1, ReadWriteMode, FlashCR1Base> ;
    using INCERRIE1 = Flash_CR1_INCERRIE1_Values<Flash::CR1, 21, 1, ReadWriteMode, FlashCR1Base> ;
    using OPERRIE1 = Flash_CR1_OPERRIE1_Values<Flash::CR1, 22, 1, ReadWriteMode, FlashCR1Base> ;
    using RDPERRIE1 = Flash_CR1_RDPERRIE1_Values<Flash::CR1, 23, 1, ReadWriteMode, FlashCR1Base> ;
    using RDSERRIE1 = Flash_CR1_RDSERRIE1_Values<Flash::CR1, 24, 1, ReadWriteMode, FlashCR1Base> ;
    using SNECCERRIE1 = Flash_CR1_SNECCERRIE1_Values<Flash::CR1, 25, 1, ReadWriteMode, FlashCR1Base> ;
    using DBECCERRIE1 = Flash_CR1_DBECCERRIE1_Values<Flash::CR1, 26, 1, ReadWriteMode, FlashCR1Base> ;
    using CRCENDIE1 = Flash_CR1_CRCENDIE1_Values<Flash::CR1, 27, 1, ReadWriteMode, FlashCR1Base> ;
    using FieldValues = Flash_CR1_CRCENDIE1_Values<Flash::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x5200200C, 32, ReadWriteMode, FlashCR1Base, T...> ;

  struct FlashSR1Base {} ;

  struct SR1 : public RegisterBase<0x52002010, 32, ReadWriteMode>
  {
    using BSY1 = Flash_SR1_BSY1_Values<Flash::SR1, 0, 1, ReadWriteMode, FlashSR1Base> ;
    using WBNE1 = Flash_SR1_WBNE1_Values<Flash::SR1, 1, 1, ReadWriteMode, FlashSR1Base> ;
    using QW1 = Flash_SR1_QW1_Values<Flash::SR1, 2, 1, ReadWriteMode, FlashSR1Base> ;
    using CRC_BUSY1 = Flash_SR1_CRC_BUSY1_Values<Flash::SR1, 3, 1, ReadWriteMode, FlashSR1Base> ;
    using EOP1 = Flash_SR1_EOP1_Values<Flash::SR1, 16, 1, ReadWriteMode, FlashSR1Base> ;
    using WRPERR1 = Flash_SR1_WRPERR1_Values<Flash::SR1, 17, 1, ReadWriteMode, FlashSR1Base> ;
    using PGSERR1 = Flash_SR1_PGSERR1_Values<Flash::SR1, 18, 1, ReadWriteMode, FlashSR1Base> ;
    using STRBERR1 = Flash_SR1_STRBERR1_Values<Flash::SR1, 19, 1, ReadWriteMode, FlashSR1Base> ;
    using INCERR1 = Flash_SR1_INCERR1_Values<Flash::SR1, 21, 1, ReadWriteMode, FlashSR1Base> ;
    using OPERR1 = Flash_SR1_OPERR1_Values<Flash::SR1, 22, 1, ReadWriteMode, FlashSR1Base> ;
    using RDPERR1 = Flash_SR1_RDPERR1_Values<Flash::SR1, 23, 1, ReadWriteMode, FlashSR1Base> ;
    using RDSERR1 = Flash_SR1_RDSERR1_Values<Flash::SR1, 24, 1, ReadWriteMode, FlashSR1Base> ;
    using SNECCERR11 = Flash_SR1_SNECCERR11_Values<Flash::SR1, 25, 1, ReadWriteMode, FlashSR1Base> ;
    using DBECCERR1 = Flash_SR1_DBECCERR1_Values<Flash::SR1, 26, 1, ReadWriteMode, FlashSR1Base> ;
    using CRCEND1 = Flash_SR1_CRCEND1_Values<Flash::SR1, 27, 1, ReadWriteMode, FlashSR1Base> ;
    using FieldValues = Flash_SR1_CRCEND1_Values<Flash::SR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR1Pack  = Register<0x52002010, 32, ReadWriteMode, FlashSR1Base, T...> ;

  struct FlashCCR1Base {} ;

  struct CCR1 : public RegisterBase<0x52002014, 32, ReadWriteMode>
  {
    using CLR_EOP1 = Flash_CCR1_CLR_EOP1_Values<Flash::CCR1, 16, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_WRPERR1 = Flash_CCR1_CLR_WRPERR1_Values<Flash::CCR1, 17, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_PGSERR1 = Flash_CCR1_CLR_PGSERR1_Values<Flash::CCR1, 18, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_STRBERR1 = Flash_CCR1_CLR_STRBERR1_Values<Flash::CCR1, 19, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_INCERR1 = Flash_CCR1_CLR_INCERR1_Values<Flash::CCR1, 21, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_OPERR1 = Flash_CCR1_CLR_OPERR1_Values<Flash::CCR1, 22, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_RDPERR1 = Flash_CCR1_CLR_RDPERR1_Values<Flash::CCR1, 23, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_RDSERR1 = Flash_CCR1_CLR_RDSERR1_Values<Flash::CCR1, 24, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_SNECCERR1 = Flash_CCR1_CLR_SNECCERR1_Values<Flash::CCR1, 25, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_DBECCERR1 = Flash_CCR1_CLR_DBECCERR1_Values<Flash::CCR1, 26, 1, ReadWriteMode, FlashCCR1Base> ;
    using CLR_CRCEND1 = Flash_CCR1_CLR_CRCEND1_Values<Flash::CCR1, 27, 1, ReadWriteMode, FlashCCR1Base> ;
    using FieldValues = Flash_CCR1_CLR_CRCEND1_Values<Flash::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x52002014, 32, ReadWriteMode, FlashCCR1Base, T...> ;

  struct FlashOPTCRBase {} ;

  struct OPTCR : public RegisterBase<0x52002018, 32, ReadWriteMode>
  {
    using OPTLOCK = Flash_OPTCR_OPTLOCK_Values<Flash::OPTCR, 0, 1, ReadWriteMode, FlashOPTCRBase> ;
    using OPTSTART = Flash_OPTCR_OPTSTART_Values<Flash::OPTCR, 1, 1, ReadWriteMode, FlashOPTCRBase> ;
    using MER = Flash_OPTCR_MER_Values<Flash::OPTCR, 4, 1, ReadWriteMode, FlashOPTCRBase> ;
    using OPTCHANGEERRIE = Flash_OPTCR_OPTCHANGEERRIE_Values<Flash::OPTCR, 30, 1, ReadWriteMode, FlashOPTCRBase> ;
    using SWAP_BANK = Flash_OPTCR_SWAP_BANK_Values<Flash::OPTCR, 31, 1, ReadWriteMode, FlashOPTCRBase> ;
    using FieldValues = Flash_OPTCR_SWAP_BANK_Values<Flash::OPTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTCRPack  = Register<0x52002018, 32, ReadWriteMode, FlashOPTCRBase, T...> ;

  struct FlashOPTCR_Base {} ;

  struct OPTCR_ : public RegisterBase<0x52002118, 32, ReadWriteMode>
  {
    using OPTLOCK = Flash_OPTCR__OPTLOCK_Values<Flash::OPTCR_, 0, 1, ReadWriteMode, FlashOPTCR_Base> ;
    using OPTSTART = Flash_OPTCR__OPTSTART_Values<Flash::OPTCR_, 1, 1, ReadWriteMode, FlashOPTCR_Base> ;
    using MER = Flash_OPTCR__MER_Values<Flash::OPTCR_, 4, 1, ReadWriteMode, FlashOPTCR_Base> ;
    using OPTCHANGEERRIE = Flash_OPTCR__OPTCHANGEERRIE_Values<Flash::OPTCR_, 30, 1, ReadWriteMode, FlashOPTCR_Base> ;
    using SWAP_BANK = Flash_OPTCR__SWAP_BANK_Values<Flash::OPTCR_, 31, 1, ReadWriteMode, FlashOPTCR_Base> ;
    using FieldValues = Flash_OPTCR__SWAP_BANK_Values<Flash::OPTCR_, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTCR_Pack  = Register<0x52002118, 32, ReadWriteMode, FlashOPTCR_Base, T...> ;

  struct FlashOPTSR_CUR_Base {} ;

  struct OPTSR_CUR_ : public RegisterBase<0x5200211C, 32, ReadWriteMode>
  {
    using OPT_BUSY = Flash_OPTSR_CUR__OPT_BUSY_Values<Flash::OPTSR_CUR_, 0, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using BOR_LEV = Flash_OPTSR_CUR__BOR_LEV_Values<Flash::OPTSR_CUR_, 2, 2, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using IWDG1_HW = Flash_OPTSR_CUR__IWDG1_HW_Values<Flash::OPTSR_CUR_, 4, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using nRST_STOP_D1 = Flash_OPTSR_CUR__nRST_STOP_D1_Values<Flash::OPTSR_CUR_, 6, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using nRST_STBY_D1 = Flash_OPTSR_CUR__nRST_STBY_D1_Values<Flash::OPTSR_CUR_, 7, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using RDP = Flash_OPTSR_CUR__RDP_Values<Flash::OPTSR_CUR_, 8, 8, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using FZ_IWDG_STOP = Flash_OPTSR_CUR__FZ_IWDG_STOP_Values<Flash::OPTSR_CUR_, 17, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using FZ_IWDG_SDBY = Flash_OPTSR_CUR__FZ_IWDG_SDBY_Values<Flash::OPTSR_CUR_, 18, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using ST_RAM_SIZE = Flash_OPTSR_CUR__ST_RAM_SIZE_Values<Flash::OPTSR_CUR_, 19, 2, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using SECURITY = Flash_OPTSR_CUR__SECURITY_Values<Flash::OPTSR_CUR_, 21, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using RSS1 = Flash_OPTSR_CUR__RSS1_Values<Flash::OPTSR_CUR_, 26, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using PERSO_OK = Flash_OPTSR_CUR__PERSO_OK_Values<Flash::OPTSR_CUR_, 28, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using IO_HSLV = Flash_OPTSR_CUR__IO_HSLV_Values<Flash::OPTSR_CUR_, 29, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using OPTCHANGEERR = Flash_OPTSR_CUR__OPTCHANGEERR_Values<Flash::OPTSR_CUR_, 30, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using SWAP_BANK_OPT = Flash_OPTSR_CUR__SWAP_BANK_OPT_Values<Flash::OPTSR_CUR_, 31, 1, ReadWriteMode, FlashOPTSR_CUR_Base> ;
    using FieldValues = Flash_OPTSR_CUR__SWAP_BANK_OPT_Values<Flash::OPTSR_CUR_, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTSR_CUR_Pack  = Register<0x5200211C, 32, ReadWriteMode, FlashOPTSR_CUR_Base, T...> ;

  struct FlashOPTSR_CURBase {} ;

  struct OPTSR_CUR : public RegisterBase<0x5200201C, 32, ReadWriteMode>
  {
    using OPT_BUSY = Flash_OPTSR_CUR_OPT_BUSY_Values<Flash::OPTSR_CUR, 0, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using BOR_LEV = Flash_OPTSR_CUR_BOR_LEV_Values<Flash::OPTSR_CUR, 2, 2, ReadWriteMode, FlashOPTSR_CURBase> ;
    using IWDG1_HW = Flash_OPTSR_CUR_IWDG1_HW_Values<Flash::OPTSR_CUR, 4, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using nRST_STOP_D1 = Flash_OPTSR_CUR_nRST_STOP_D1_Values<Flash::OPTSR_CUR, 6, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using nRST_STBY_D1 = Flash_OPTSR_CUR_nRST_STBY_D1_Values<Flash::OPTSR_CUR, 7, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using RDP = Flash_OPTSR_CUR_RDP_Values<Flash::OPTSR_CUR, 8, 8, ReadWriteMode, FlashOPTSR_CURBase> ;
    using FZ_IWDG_STOP = Flash_OPTSR_CUR_FZ_IWDG_STOP_Values<Flash::OPTSR_CUR, 17, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using FZ_IWDG_SDBY = Flash_OPTSR_CUR_FZ_IWDG_SDBY_Values<Flash::OPTSR_CUR, 18, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using ST_RAM_SIZE = Flash_OPTSR_CUR_ST_RAM_SIZE_Values<Flash::OPTSR_CUR, 19, 2, ReadWriteMode, FlashOPTSR_CURBase> ;
    using SECURITY = Flash_OPTSR_CUR_SECURITY_Values<Flash::OPTSR_CUR, 21, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using RSS1 = Flash_OPTSR_CUR_RSS1_Values<Flash::OPTSR_CUR, 26, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using PERSO_OK = Flash_OPTSR_CUR_PERSO_OK_Values<Flash::OPTSR_CUR, 28, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using IO_HSLV = Flash_OPTSR_CUR_IO_HSLV_Values<Flash::OPTSR_CUR, 29, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using OPTCHANGEERR = Flash_OPTSR_CUR_OPTCHANGEERR_Values<Flash::OPTSR_CUR, 30, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using SWAP_BANK_OPT = Flash_OPTSR_CUR_SWAP_BANK_OPT_Values<Flash::OPTSR_CUR, 31, 1, ReadWriteMode, FlashOPTSR_CURBase> ;
    using FieldValues = Flash_OPTSR_CUR_SWAP_BANK_OPT_Values<Flash::OPTSR_CUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTSR_CURPack  = Register<0x5200201C, 32, ReadWriteMode, FlashOPTSR_CURBase, T...> ;

  struct FlashOPTSR_PRGBase {} ;

  struct OPTSR_PRG : public RegisterBase<0x52002020, 32, ReadWriteMode>
  {
    using BOR_LEV = Flash_OPTSR_PRG_BOR_LEV_Values<Flash::OPTSR_PRG, 2, 2, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using IWDG1_HW = Flash_OPTSR_PRG_IWDG1_HW_Values<Flash::OPTSR_PRG, 4, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using nRST_STOP_D1 = Flash_OPTSR_PRG_nRST_STOP_D1_Values<Flash::OPTSR_PRG, 6, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using nRST_STBY_D1 = Flash_OPTSR_PRG_nRST_STBY_D1_Values<Flash::OPTSR_PRG, 7, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using RDP = Flash_OPTSR_PRG_RDP_Values<Flash::OPTSR_PRG, 8, 8, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using FZ_IWDG_STOP = Flash_OPTSR_PRG_FZ_IWDG_STOP_Values<Flash::OPTSR_PRG, 17, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using FZ_IWDG_SDBY = Flash_OPTSR_PRG_FZ_IWDG_SDBY_Values<Flash::OPTSR_PRG, 18, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using ST_RAM_SIZE = Flash_OPTSR_PRG_ST_RAM_SIZE_Values<Flash::OPTSR_PRG, 19, 2, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using SECURITY = Flash_OPTSR_PRG_SECURITY_Values<Flash::OPTSR_PRG, 21, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using RSS1 = Flash_OPTSR_PRG_RSS1_Values<Flash::OPTSR_PRG, 26, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using RSS2 = Flash_OPTSR_PRG_RSS2_Values<Flash::OPTSR_PRG, 27, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using IO_HSLV = Flash_OPTSR_PRG_IO_HSLV_Values<Flash::OPTSR_PRG, 29, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using SWAP_BANK_OPT = Flash_OPTSR_PRG_SWAP_BANK_OPT_Values<Flash::OPTSR_PRG, 31, 1, ReadWriteMode, FlashOPTSR_PRGBase> ;
    using FieldValues = Flash_OPTSR_PRG_SWAP_BANK_OPT_Values<Flash::OPTSR_PRG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTSR_PRGPack  = Register<0x52002020, 32, ReadWriteMode, FlashOPTSR_PRGBase, T...> ;

  struct FlashOPTSR_PRG_Base {} ;

  struct OPTSR_PRG_ : public RegisterBase<0x52002120, 32, ReadWriteMode>
  {
    using BOR_LEV = Flash_OPTSR_PRG__BOR_LEV_Values<Flash::OPTSR_PRG_, 2, 2, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using IWDG1_HW = Flash_OPTSR_PRG__IWDG1_HW_Values<Flash::OPTSR_PRG_, 4, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using nRST_STOP_D1 = Flash_OPTSR_PRG__nRST_STOP_D1_Values<Flash::OPTSR_PRG_, 6, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using nRST_STBY_D1 = Flash_OPTSR_PRG__nRST_STBY_D1_Values<Flash::OPTSR_PRG_, 7, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using RDP = Flash_OPTSR_PRG__RDP_Values<Flash::OPTSR_PRG_, 8, 8, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using FZ_IWDG_STOP = Flash_OPTSR_PRG__FZ_IWDG_STOP_Values<Flash::OPTSR_PRG_, 17, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using FZ_IWDG_SDBY = Flash_OPTSR_PRG__FZ_IWDG_SDBY_Values<Flash::OPTSR_PRG_, 18, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using ST_RAM_SIZE = Flash_OPTSR_PRG__ST_RAM_SIZE_Values<Flash::OPTSR_PRG_, 19, 2, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using SECURITY = Flash_OPTSR_PRG__SECURITY_Values<Flash::OPTSR_PRG_, 21, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using RSS1 = Flash_OPTSR_PRG__RSS1_Values<Flash::OPTSR_PRG_, 26, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using RSS2 = Flash_OPTSR_PRG__RSS2_Values<Flash::OPTSR_PRG_, 27, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using IO_HSLV = Flash_OPTSR_PRG__IO_HSLV_Values<Flash::OPTSR_PRG_, 29, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using SWAP_BANK_OPT = Flash_OPTSR_PRG__SWAP_BANK_OPT_Values<Flash::OPTSR_PRG_, 31, 1, ReadWriteMode, FlashOPTSR_PRG_Base> ;
    using FieldValues = Flash_OPTSR_PRG__SWAP_BANK_OPT_Values<Flash::OPTSR_PRG_, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTSR_PRG_Pack  = Register<0x52002120, 32, ReadWriteMode, FlashOPTSR_PRG_Base, T...> ;

  struct FlashOPTCCR_Base {} ;

  struct OPTCCR_ : public RegisterBase<0x52002124, 32, WriteMode>
  {
    using CLR_OPTCHANGEERR = Flash_OPTCCR__CLR_OPTCHANGEERR_Values<Flash::OPTCCR_, 30, 1, WriteMode, FlashOPTCCR_Base> ;
    using FieldValues = Flash_OPTCCR__CLR_OPTCHANGEERR_Values<Flash::OPTCCR_, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTCCR_Pack  = Register<0x52002124, 32, WriteMode, FlashOPTCCR_Base, T...> ;

  struct FlashOPTCCRBase {} ;

  struct OPTCCR : public RegisterBase<0x52002024, 32, WriteMode>
  {
    using CLR_OPTCHANGEERR = Flash_OPTCCR_CLR_OPTCHANGEERR_Values<Flash::OPTCCR, 30, 1, WriteMode, FlashOPTCCRBase> ;
    using FieldValues = Flash_OPTCCR_CLR_OPTCHANGEERR_Values<Flash::OPTCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTCCRPack  = Register<0x52002024, 32, WriteMode, FlashOPTCCRBase, T...> ;

  struct FlashPRAR_CUR1Base {} ;

  struct PRAR_CUR1 : public RegisterBase<0x52002028, 32, ReadMode>
  {
    using PROT_AREA_START1 = Flash_PRAR_CUR1_PROT_AREA_START1_Values<Flash::PRAR_CUR1, 0, 12, ReadMode, FlashPRAR_CUR1Base> ;
    using PROT_AREA_END1 = Flash_PRAR_CUR1_PROT_AREA_END1_Values<Flash::PRAR_CUR1, 16, 12, ReadMode, FlashPRAR_CUR1Base> ;
    using DMEP1 = Flash_PRAR_CUR1_DMEP1_Values<Flash::PRAR_CUR1, 31, 1, ReadMode, FlashPRAR_CUR1Base> ;
    using FieldValues = Flash_PRAR_CUR1_DMEP1_Values<Flash::PRAR_CUR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRAR_CUR1Pack  = Register<0x52002028, 32, ReadMode, FlashPRAR_CUR1Base, T...> ;

  struct FlashPRAR_PRG1Base {} ;

  struct PRAR_PRG1 : public RegisterBase<0x5200202C, 32, ReadWriteMode>
  {
    using PROT_AREA_START1 = Flash_PRAR_PRG1_PROT_AREA_START1_Values<Flash::PRAR_PRG1, 0, 12, ReadWriteMode, FlashPRAR_PRG1Base> ;
    using PROT_AREA_END1 = Flash_PRAR_PRG1_PROT_AREA_END1_Values<Flash::PRAR_PRG1, 16, 12, ReadWriteMode, FlashPRAR_PRG1Base> ;
    using DMEP1 = Flash_PRAR_PRG1_DMEP1_Values<Flash::PRAR_PRG1, 31, 1, ReadWriteMode, FlashPRAR_PRG1Base> ;
    using FieldValues = Flash_PRAR_PRG1_DMEP1_Values<Flash::PRAR_PRG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRAR_PRG1Pack  = Register<0x5200202C, 32, ReadWriteMode, FlashPRAR_PRG1Base, T...> ;

  struct FlashSCAR_CUR1Base {} ;

  struct SCAR_CUR1 : public RegisterBase<0x52002030, 32, ReadWriteMode>
  {
    using SEC_AREA_START1 = Flash_SCAR_CUR1_SEC_AREA_START1_Values<Flash::SCAR_CUR1, 0, 12, ReadWriteMode, FlashSCAR_CUR1Base> ;
    using SEC_AREA_END1 = Flash_SCAR_CUR1_SEC_AREA_END1_Values<Flash::SCAR_CUR1, 16, 12, ReadWriteMode, FlashSCAR_CUR1Base> ;
    using DMES1 = Flash_SCAR_CUR1_DMES1_Values<Flash::SCAR_CUR1, 31, 1, ReadWriteMode, FlashSCAR_CUR1Base> ;
    using FieldValues = Flash_SCAR_CUR1_DMES1_Values<Flash::SCAR_CUR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCAR_CUR1Pack  = Register<0x52002030, 32, ReadWriteMode, FlashSCAR_CUR1Base, T...> ;

  struct FlashSCAR_PRG1Base {} ;

  struct SCAR_PRG1 : public RegisterBase<0x52002034, 32, ReadWriteMode>
  {
    using SEC_AREA_START1 = Flash_SCAR_PRG1_SEC_AREA_START1_Values<Flash::SCAR_PRG1, 0, 12, ReadWriteMode, FlashSCAR_PRG1Base> ;
    using SEC_AREA_END1 = Flash_SCAR_PRG1_SEC_AREA_END1_Values<Flash::SCAR_PRG1, 16, 12, ReadWriteMode, FlashSCAR_PRG1Base> ;
    using DMES1 = Flash_SCAR_PRG1_DMES1_Values<Flash::SCAR_PRG1, 31, 1, ReadWriteMode, FlashSCAR_PRG1Base> ;
    using FieldValues = Flash_SCAR_PRG1_DMES1_Values<Flash::SCAR_PRG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCAR_PRG1Pack  = Register<0x52002034, 32, ReadWriteMode, FlashSCAR_PRG1Base, T...> ;

  struct FlashWPSN_CUR1RBase {} ;

  struct WPSN_CUR1R : public RegisterBase<0x52002038, 32, ReadMode>
  {
    using WRPSn1 = Flash_WPSN_CUR1R_WRPSn1_Values<Flash::WPSN_CUR1R, 0, 8, ReadMode, FlashWPSN_CUR1RBase> ;
    using FieldValues = Flash_WPSN_CUR1R_WRPSn1_Values<Flash::WPSN_CUR1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WPSN_CUR1RPack  = Register<0x52002038, 32, ReadMode, FlashWPSN_CUR1RBase, T...> ;

  struct FlashWPSN_PRG1RBase {} ;

  struct WPSN_PRG1R : public RegisterBase<0x5200203C, 32, ReadWriteMode>
  {
    using WRPSn1 = Flash_WPSN_PRG1R_WRPSn1_Values<Flash::WPSN_PRG1R, 0, 8, ReadWriteMode, FlashWPSN_PRG1RBase> ;
    using FieldValues = Flash_WPSN_PRG1R_WRPSn1_Values<Flash::WPSN_PRG1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WPSN_PRG1RPack  = Register<0x5200203C, 32, ReadWriteMode, FlashWPSN_PRG1RBase, T...> ;

  struct FlashBOOT_CURRBase {} ;

  struct BOOT_CURR : public RegisterBase<0x52002040, 32, ReadMode>
  {
    using BOOT_ADD0 = Flash_BOOT_CURR_BOOT_ADD0_Values<Flash::BOOT_CURR, 0, 16, ReadMode, FlashBOOT_CURRBase> ;
    using BOOT_ADD1 = Flash_BOOT_CURR_BOOT_ADD1_Values<Flash::BOOT_CURR, 16, 16, ReadMode, FlashBOOT_CURRBase> ;
    using FieldValues = Flash_BOOT_CURR_BOOT_ADD1_Values<Flash::BOOT_CURR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BOOT_CURRPack  = Register<0x52002040, 32, ReadMode, FlashBOOT_CURRBase, T...> ;

  struct FlashBOOT_PRGRBase {} ;

  struct BOOT_PRGR : public RegisterBase<0x52002044, 32, ReadMode>
  {
    using BOOT_ADD0 = Flash_BOOT_PRGR_BOOT_ADD0_Values<Flash::BOOT_PRGR, 0, 16, ReadMode, FlashBOOT_PRGRBase> ;
    using BOOT_ADD1 = Flash_BOOT_PRGR_BOOT_ADD1_Values<Flash::BOOT_PRGR, 16, 16, ReadMode, FlashBOOT_PRGRBase> ;
    using FieldValues = Flash_BOOT_PRGR_BOOT_ADD1_Values<Flash::BOOT_PRGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BOOT_PRGRPack  = Register<0x52002044, 32, ReadMode, FlashBOOT_PRGRBase, T...> ;

  struct FlashCRCCR1Base {} ;

  struct CRCCR1 : public RegisterBase<0x52002050, 32, ReadWriteMode>
  {
    using CRC_SECT = Flash_CRCCR1_CRC_SECT_Values<Flash::CRCCR1, 0, 3, ReadWriteMode, FlashCRCCR1Base> ;
    using ALL_BANK = Flash_CRCCR1_ALL_BANK_Values<Flash::CRCCR1, 7, 1, ReadWriteMode, FlashCRCCR1Base> ;
    using CRC_BY_SECT = Flash_CRCCR1_CRC_BY_SECT_Values<Flash::CRCCR1, 8, 1, ReadWriteMode, FlashCRCCR1Base> ;
    using ADD_SECT = Flash_CRCCR1_ADD_SECT_Values<Flash::CRCCR1, 9, 1, ReadWriteMode, FlashCRCCR1Base> ;
    using CLEAN_SECT = Flash_CRCCR1_CLEAN_SECT_Values<Flash::CRCCR1, 10, 1, ReadWriteMode, FlashCRCCR1Base> ;
    using START_CRC = Flash_CRCCR1_START_CRC_Values<Flash::CRCCR1, 16, 1, ReadWriteMode, FlashCRCCR1Base> ;
    using CLEAN_CRC = Flash_CRCCR1_CLEAN_CRC_Values<Flash::CRCCR1, 17, 1, ReadWriteMode, FlashCRCCR1Base> ;
    using CRC_BURST = Flash_CRCCR1_CRC_BURST_Values<Flash::CRCCR1, 20, 2, ReadWriteMode, FlashCRCCR1Base> ;
    using FieldValues = Flash_CRCCR1_CRC_BURST_Values<Flash::CRCCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCCR1Pack  = Register<0x52002050, 32, ReadWriteMode, FlashCRCCR1Base, T...> ;

  struct FlashCRCSADD1RBase {} ;

  struct CRCSADD1R : public RegisterBase<0x52002054, 32, ReadWriteMode>
  {
    using CRC_START_ADDR = Flash_CRCSADD1R_CRC_START_ADDR_Values<Flash::CRCSADD1R, 0, 32, ReadWriteMode, FlashCRCSADD1RBase> ;
    using FieldValues = Flash_CRCSADD1R_CRC_START_ADDR_Values<Flash::CRCSADD1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCSADD1RPack  = Register<0x52002054, 32, ReadWriteMode, FlashCRCSADD1RBase, T...> ;

  struct FlashCRCEADD1RBase {} ;

  struct CRCEADD1R : public RegisterBase<0x52002058, 32, ReadWriteMode>
  {
    using CRC_END_ADDR = Flash_CRCEADD1R_CRC_END_ADDR_Values<Flash::CRCEADD1R, 0, 32, ReadWriteMode, FlashCRCEADD1RBase> ;
    using FieldValues = Flash_CRCEADD1R_CRC_END_ADDR_Values<Flash::CRCEADD1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCEADD1RPack  = Register<0x52002058, 32, ReadWriteMode, FlashCRCEADD1RBase, T...> ;

  struct FlashCRCDATARBase {} ;

  struct CRCDATAR : public RegisterBase<0x5200205C, 32, ReadWriteMode>
  {
    using CRC_DATA = Flash_CRCDATAR_CRC_DATA_Values<Flash::CRCDATAR, 0, 32, ReadWriteMode, FlashCRCDATARBase> ;
    using FieldValues = Flash_CRCDATAR_CRC_DATA_Values<Flash::CRCDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCDATARPack  = Register<0x5200205C, 32, ReadWriteMode, FlashCRCDATARBase, T...> ;

  struct FlashECC_FA1RBase {} ;

  struct ECC_FA1R : public RegisterBase<0x52002060, 32, ReadMode>
  {
    using FAIL_ECC_ADDR1 = Flash_ECC_FA1R_FAIL_ECC_ADDR1_Values<Flash::ECC_FA1R, 0, 15, ReadMode, FlashECC_FA1RBase> ;
    using FieldValues = Flash_ECC_FA1R_FAIL_ECC_ADDR1_Values<Flash::ECC_FA1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECC_FA1RPack  = Register<0x52002060, 32, ReadMode, FlashECC_FA1RBase, T...> ;

  struct FlashKEYR2Base {} ;

  struct KEYR2 : public RegisterBase<0x52002104, 32, ReadMode>
  {
    using KEYR2Field = Flash_KEYR2_KEYR2_Values<Flash::KEYR2, 0, 32, ReadMode, FlashKEYR2Base> ;
    using FieldValues = Flash_KEYR2_KEYR2_Values<Flash::KEYR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR2Pack  = Register<0x52002104, 32, ReadMode, FlashKEYR2Base, T...> ;

  struct FlashCR2Base {} ;

  struct CR2 : public RegisterBase<0x5200210C, 32, ReadWriteMode>
  {
    using LOCK2 = Flash_CR2_LOCK2_Values<Flash::CR2, 0, 1, ReadWriteMode, FlashCR2Base> ;
    using PG2 = Flash_CR2_PG2_Values<Flash::CR2, 1, 1, ReadWriteMode, FlashCR2Base> ;
    using SER2 = Flash_CR2_SER2_Values<Flash::CR2, 2, 1, ReadWriteMode, FlashCR2Base> ;
    using BER2 = Flash_CR2_BER2_Values<Flash::CR2, 3, 1, ReadWriteMode, FlashCR2Base> ;
    using PSIZE2 = Flash_CR2_PSIZE2_Values<Flash::CR2, 4, 2, ReadWriteMode, FlashCR2Base> ;
    using FW2 = Flash_CR2_FW2_Values<Flash::CR2, 6, 1, ReadWriteMode, FlashCR2Base> ;
    using START2 = Flash_CR2_START2_Values<Flash::CR2, 7, 1, ReadWriteMode, FlashCR2Base> ;
    using SNB2 = Flash_CR2_SNB2_Values<Flash::CR2, 8, 3, ReadWriteMode, FlashCR2Base> ;
    using CRC_EN = Flash_CR2_CRC_EN_Values<Flash::CR2, 15, 1, ReadWriteMode, FlashCR2Base> ;
    using EOPIE2 = Flash_CR2_EOPIE2_Values<Flash::CR2, 16, 1, ReadWriteMode, FlashCR2Base> ;
    using WRPERRIE2 = Flash_CR2_WRPERRIE2_Values<Flash::CR2, 17, 1, ReadWriteMode, FlashCR2Base> ;
    using PGSERRIE2 = Flash_CR2_PGSERRIE2_Values<Flash::CR2, 18, 1, ReadWriteMode, FlashCR2Base> ;
    using STRBERRIE2 = Flash_CR2_STRBERRIE2_Values<Flash::CR2, 19, 1, ReadWriteMode, FlashCR2Base> ;
    using INCERRIE2 = Flash_CR2_INCERRIE2_Values<Flash::CR2, 21, 1, ReadWriteMode, FlashCR2Base> ;
    using OPERRIE2 = Flash_CR2_OPERRIE2_Values<Flash::CR2, 22, 1, ReadWriteMode, FlashCR2Base> ;
    using RDPERRIE2 = Flash_CR2_RDPERRIE2_Values<Flash::CR2, 23, 1, ReadWriteMode, FlashCR2Base> ;
    using RDSERRIE2 = Flash_CR2_RDSERRIE2_Values<Flash::CR2, 24, 1, ReadWriteMode, FlashCR2Base> ;
    using SNECCERRIE2 = Flash_CR2_SNECCERRIE2_Values<Flash::CR2, 25, 1, ReadWriteMode, FlashCR2Base> ;
    using DBECCERRIE2 = Flash_CR2_DBECCERRIE2_Values<Flash::CR2, 26, 1, ReadWriteMode, FlashCR2Base> ;
    using CRCENDIE2 = Flash_CR2_CRCENDIE2_Values<Flash::CR2, 27, 1, ReadWriteMode, FlashCR2Base> ;
    using FieldValues = Flash_CR2_CRCENDIE2_Values<Flash::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x5200210C, 32, ReadWriteMode, FlashCR2Base, T...> ;

  struct FlashSR2Base {} ;

  struct SR2 : public RegisterBase<0x52002110, 32, ReadWriteMode>
  {
    using BSY2 = Flash_SR2_BSY2_Values<Flash::SR2, 0, 1, ReadWriteMode, FlashSR2Base> ;
    using WBNE2 = Flash_SR2_WBNE2_Values<Flash::SR2, 1, 1, ReadWriteMode, FlashSR2Base> ;
    using QW2 = Flash_SR2_QW2_Values<Flash::SR2, 2, 1, ReadWriteMode, FlashSR2Base> ;
    using CRC_BUSY2 = Flash_SR2_CRC_BUSY2_Values<Flash::SR2, 3, 1, ReadWriteMode, FlashSR2Base> ;
    using EOP2 = Flash_SR2_EOP2_Values<Flash::SR2, 16, 1, ReadWriteMode, FlashSR2Base> ;
    using WRPERR2 = Flash_SR2_WRPERR2_Values<Flash::SR2, 17, 1, ReadWriteMode, FlashSR2Base> ;
    using PGSERR2 = Flash_SR2_PGSERR2_Values<Flash::SR2, 18, 1, ReadWriteMode, FlashSR2Base> ;
    using STRBERR2 = Flash_SR2_STRBERR2_Values<Flash::SR2, 19, 1, ReadWriteMode, FlashSR2Base> ;
    using INCERR2 = Flash_SR2_INCERR2_Values<Flash::SR2, 21, 1, ReadWriteMode, FlashSR2Base> ;
    using OPERR2 = Flash_SR2_OPERR2_Values<Flash::SR2, 22, 1, ReadWriteMode, FlashSR2Base> ;
    using RDPERR2 = Flash_SR2_RDPERR2_Values<Flash::SR2, 23, 1, ReadWriteMode, FlashSR2Base> ;
    using RDSERR2 = Flash_SR2_RDSERR2_Values<Flash::SR2, 24, 1, ReadWriteMode, FlashSR2Base> ;
    using SNECCERR2 = Flash_SR2_SNECCERR2_Values<Flash::SR2, 25, 1, ReadWriteMode, FlashSR2Base> ;
    using DBECCERR2 = Flash_SR2_DBECCERR2_Values<Flash::SR2, 26, 1, ReadWriteMode, FlashSR2Base> ;
    using CRCEND2 = Flash_SR2_CRCEND2_Values<Flash::SR2, 27, 1, ReadWriteMode, FlashSR2Base> ;
    using FieldValues = Flash_SR2_CRCEND2_Values<Flash::SR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SR2Pack  = Register<0x52002110, 32, ReadWriteMode, FlashSR2Base, T...> ;

  struct FlashCCR2Base {} ;

  struct CCR2 : public RegisterBase<0x52002114, 32, ReadWriteMode>
  {
    using CLR_EOP2 = Flash_CCR2_CLR_EOP2_Values<Flash::CCR2, 16, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_WRPERR2 = Flash_CCR2_CLR_WRPERR2_Values<Flash::CCR2, 17, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_PGSERR2 = Flash_CCR2_CLR_PGSERR2_Values<Flash::CCR2, 18, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_STRBERR2 = Flash_CCR2_CLR_STRBERR2_Values<Flash::CCR2, 19, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_INCERR2 = Flash_CCR2_CLR_INCERR2_Values<Flash::CCR2, 21, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_OPERR2 = Flash_CCR2_CLR_OPERR2_Values<Flash::CCR2, 22, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_RDPERR2 = Flash_CCR2_CLR_RDPERR2_Values<Flash::CCR2, 23, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_RDSERR1 = Flash_CCR2_CLR_RDSERR1_Values<Flash::CCR2, 24, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_SNECCERR2 = Flash_CCR2_CLR_SNECCERR2_Values<Flash::CCR2, 25, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_DBECCERR1 = Flash_CCR2_CLR_DBECCERR1_Values<Flash::CCR2, 26, 1, ReadWriteMode, FlashCCR2Base> ;
    using CLR_CRCEND2 = Flash_CCR2_CLR_CRCEND2_Values<Flash::CCR2, 27, 1, ReadWriteMode, FlashCCR2Base> ;
    using FieldValues = Flash_CCR2_CLR_CRCEND2_Values<Flash::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x52002114, 32, ReadWriteMode, FlashCCR2Base, T...> ;

  struct FlashPRAR_CUR2Base {} ;

  struct PRAR_CUR2 : public RegisterBase<0x52002128, 32, ReadMode>
  {
    using PROT_AREA_START2 = Flash_PRAR_CUR2_PROT_AREA_START2_Values<Flash::PRAR_CUR2, 0, 12, ReadMode, FlashPRAR_CUR2Base> ;
    using PROT_AREA_END2 = Flash_PRAR_CUR2_PROT_AREA_END2_Values<Flash::PRAR_CUR2, 16, 12, ReadMode, FlashPRAR_CUR2Base> ;
    using DMEP2 = Flash_PRAR_CUR2_DMEP2_Values<Flash::PRAR_CUR2, 31, 1, ReadMode, FlashPRAR_CUR2Base> ;
    using FieldValues = Flash_PRAR_CUR2_DMEP2_Values<Flash::PRAR_CUR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRAR_CUR2Pack  = Register<0x52002128, 32, ReadMode, FlashPRAR_CUR2Base, T...> ;

  struct FlashPRAR_PRG2Base {} ;

  struct PRAR_PRG2 : public RegisterBase<0x5200202C, 32, ReadWriteMode>
  {
    using PROT_AREA_START2 = Flash_PRAR_PRG2_PROT_AREA_START2_Values<Flash::PRAR_PRG2, 0, 12, ReadWriteMode, FlashPRAR_PRG2Base> ;
    using PROT_AREA_END2 = Flash_PRAR_PRG2_PROT_AREA_END2_Values<Flash::PRAR_PRG2, 16, 12, ReadWriteMode, FlashPRAR_PRG2Base> ;
    using DMEP2 = Flash_PRAR_PRG2_DMEP2_Values<Flash::PRAR_PRG2, 31, 1, ReadWriteMode, FlashPRAR_PRG2Base> ;
    using FieldValues = Flash_PRAR_PRG2_DMEP2_Values<Flash::PRAR_PRG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRAR_PRG2Pack  = Register<0x5200202C, 32, ReadWriteMode, FlashPRAR_PRG2Base, T...> ;

  struct FlashSCAR_CUR2Base {} ;

  struct SCAR_CUR2 : public RegisterBase<0x52002130, 32, ReadWriteMode>
  {
    using SEC_AREA_START2 = Flash_SCAR_CUR2_SEC_AREA_START2_Values<Flash::SCAR_CUR2, 0, 12, ReadWriteMode, FlashSCAR_CUR2Base> ;
    using SEC_AREA_END2 = Flash_SCAR_CUR2_SEC_AREA_END2_Values<Flash::SCAR_CUR2, 16, 12, ReadWriteMode, FlashSCAR_CUR2Base> ;
    using DMES2 = Flash_SCAR_CUR2_DMES2_Values<Flash::SCAR_CUR2, 31, 1, ReadWriteMode, FlashSCAR_CUR2Base> ;
    using FieldValues = Flash_SCAR_CUR2_DMES2_Values<Flash::SCAR_CUR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCAR_CUR2Pack  = Register<0x52002130, 32, ReadWriteMode, FlashSCAR_CUR2Base, T...> ;

  struct FlashSCAR_PRG2Base {} ;

  struct SCAR_PRG2 : public RegisterBase<0x52002134, 32, ReadWriteMode>
  {
    using SEC_AREA_START2 = Flash_SCAR_PRG2_SEC_AREA_START2_Values<Flash::SCAR_PRG2, 0, 12, ReadWriteMode, FlashSCAR_PRG2Base> ;
    using SEC_AREA_END2 = Flash_SCAR_PRG2_SEC_AREA_END2_Values<Flash::SCAR_PRG2, 16, 12, ReadWriteMode, FlashSCAR_PRG2Base> ;
    using DMES2 = Flash_SCAR_PRG2_DMES2_Values<Flash::SCAR_PRG2, 31, 1, ReadWriteMode, FlashSCAR_PRG2Base> ;
    using FieldValues = Flash_SCAR_PRG2_DMES2_Values<Flash::SCAR_PRG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCAR_PRG2Pack  = Register<0x52002134, 32, ReadWriteMode, FlashSCAR_PRG2Base, T...> ;

  struct FlashWPSN_CUR2RBase {} ;

  struct WPSN_CUR2R : public RegisterBase<0x52002138, 32, ReadMode>
  {
    using WRPSn2 = Flash_WPSN_CUR2R_WRPSn2_Values<Flash::WPSN_CUR2R, 0, 8, ReadMode, FlashWPSN_CUR2RBase> ;
    using FieldValues = Flash_WPSN_CUR2R_WRPSn2_Values<Flash::WPSN_CUR2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WPSN_CUR2RPack  = Register<0x52002138, 32, ReadMode, FlashWPSN_CUR2RBase, T...> ;

  struct FlashWPSN_PRG2RBase {} ;

  struct WPSN_PRG2R : public RegisterBase<0x5200213C, 32, ReadWriteMode>
  {
    using WRPSn2 = Flash_WPSN_PRG2R_WRPSn2_Values<Flash::WPSN_PRG2R, 0, 8, ReadWriteMode, FlashWPSN_PRG2RBase> ;
    using FieldValues = Flash_WPSN_PRG2R_WRPSn2_Values<Flash::WPSN_PRG2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WPSN_PRG2RPack  = Register<0x5200213C, 32, ReadWriteMode, FlashWPSN_PRG2RBase, T...> ;

  struct FlashCRCCR2Base {} ;

  struct CRCCR2 : public RegisterBase<0x52002150, 32, ReadWriteMode>
  {
    using CRC_SECT = Flash_CRCCR2_CRC_SECT_Values<Flash::CRCCR2, 0, 3, ReadWriteMode, FlashCRCCR2Base> ;
    using ALL_BANK = Flash_CRCCR2_ALL_BANK_Values<Flash::CRCCR2, 7, 1, ReadWriteMode, FlashCRCCR2Base> ;
    using CRC_BY_SECT = Flash_CRCCR2_CRC_BY_SECT_Values<Flash::CRCCR2, 8, 1, ReadWriteMode, FlashCRCCR2Base> ;
    using ADD_SECT = Flash_CRCCR2_ADD_SECT_Values<Flash::CRCCR2, 9, 1, ReadWriteMode, FlashCRCCR2Base> ;
    using CLEAN_SECT = Flash_CRCCR2_CLEAN_SECT_Values<Flash::CRCCR2, 10, 1, ReadWriteMode, FlashCRCCR2Base> ;
    using START_CRC = Flash_CRCCR2_START_CRC_Values<Flash::CRCCR2, 16, 1, ReadWriteMode, FlashCRCCR2Base> ;
    using CLEAN_CRC = Flash_CRCCR2_CLEAN_CRC_Values<Flash::CRCCR2, 17, 1, ReadWriteMode, FlashCRCCR2Base> ;
    using CRC_BURST = Flash_CRCCR2_CRC_BURST_Values<Flash::CRCCR2, 20, 2, ReadWriteMode, FlashCRCCR2Base> ;
    using FieldValues = Flash_CRCCR2_CRC_BURST_Values<Flash::CRCCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCCR2Pack  = Register<0x52002150, 32, ReadWriteMode, FlashCRCCR2Base, T...> ;

  struct FlashCRCSADD2RBase {} ;

  struct CRCSADD2R : public RegisterBase<0x52002154, 32, ReadWriteMode>
  {
    using CRC_START_ADDR = Flash_CRCSADD2R_CRC_START_ADDR_Values<Flash::CRCSADD2R, 0, 32, ReadWriteMode, FlashCRCSADD2RBase> ;
    using FieldValues = Flash_CRCSADD2R_CRC_START_ADDR_Values<Flash::CRCSADD2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCSADD2RPack  = Register<0x52002154, 32, ReadWriteMode, FlashCRCSADD2RBase, T...> ;

  struct FlashCRCEADD2RBase {} ;

  struct CRCEADD2R : public RegisterBase<0x52002158, 32, ReadWriteMode>
  {
    using CRC_END_ADDR = Flash_CRCEADD2R_CRC_END_ADDR_Values<Flash::CRCEADD2R, 0, 32, ReadWriteMode, FlashCRCEADD2RBase> ;
    using FieldValues = Flash_CRCEADD2R_CRC_END_ADDR_Values<Flash::CRCEADD2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRCEADD2RPack  = Register<0x52002158, 32, ReadWriteMode, FlashCRCEADD2RBase, T...> ;

  struct FlashECC_FA2RBase {} ;

  struct ECC_FA2R : public RegisterBase<0x52002160, 32, ReadMode>
  {
    using FAIL_ECC_ADDR2 = Flash_ECC_FA2R_FAIL_ECC_ADDR2_Values<Flash::ECC_FA2R, 0, 15, ReadMode, FlashECC_FA2RBase> ;
    using FieldValues = Flash_ECC_FA2R_FAIL_ECC_ADDR2_Values<Flash::ECC_FA2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECC_FA2RPack  = Register<0x52002160, 32, ReadMode, FlashECC_FA2RBase, T...> ;

} ;

#endif //#if !defined(FLASHREGISTERS_HPP)
