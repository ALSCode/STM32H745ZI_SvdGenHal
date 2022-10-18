/*******************************************************************************
* Filename      : dacregisters.hpp
*
* Details       : DAC. This header file is auto-generated for STM32H745_CM7
*                 device.
*
*
*******************************************************************************/

#if !defined(DACREGISTERS_HPP)
#define DACREGISTERS_HPP

#include "dacfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DAC
{
  struct DACCRBase {} ;

  struct CR : public RegisterBase<0x40007400, 32, ReadWriteMode>
  {
    using EN1 = DAC_CR_EN1_Values<DAC::CR, 0, 1, ReadWriteMode, DACCRBase> ;
    using TEN1 = DAC_CR_TEN1_Values<DAC::CR, 1, 1, ReadWriteMode, DACCRBase> ;
    using TSEL1 = DAC_CR_TSEL1_Values<DAC::CR, 2, 3, ReadWriteMode, DACCRBase> ;
    using WAVE1 = DAC_CR_WAVE1_Values<DAC::CR, 6, 2, ReadWriteMode, DACCRBase> ;
    using MAMP1 = DAC_CR_MAMP1_Values<DAC::CR, 8, 4, ReadWriteMode, DACCRBase> ;
    using DMAEN1 = DAC_CR_DMAEN1_Values<DAC::CR, 12, 1, ReadWriteMode, DACCRBase> ;
    using DMAUDRIE1 = DAC_CR_DMAUDRIE1_Values<DAC::CR, 13, 1, ReadWriteMode, DACCRBase> ;
    using CEN1 = DAC_CR_CEN1_Values<DAC::CR, 14, 1, ReadWriteMode, DACCRBase> ;
    using EN2 = DAC_CR_EN2_Values<DAC::CR, 16, 1, ReadWriteMode, DACCRBase> ;
    using TEN2 = DAC_CR_TEN2_Values<DAC::CR, 17, 1, ReadWriteMode, DACCRBase> ;
    using TSEL2 = DAC_CR_TSEL2_Values<DAC::CR, 18, 3, ReadWriteMode, DACCRBase> ;
    using WAVE2 = DAC_CR_WAVE2_Values<DAC::CR, 22, 2, ReadWriteMode, DACCRBase> ;
    using MAMP2 = DAC_CR_MAMP2_Values<DAC::CR, 24, 4, ReadWriteMode, DACCRBase> ;
    using DMAEN2 = DAC_CR_DMAEN2_Values<DAC::CR, 28, 1, ReadWriteMode, DACCRBase> ;
    using DMAUDRIE2 = DAC_CR_DMAUDRIE2_Values<DAC::CR, 29, 1, ReadWriteMode, DACCRBase> ;
    using CEN2 = DAC_CR_CEN2_Values<DAC::CR, 30, 1, ReadWriteMode, DACCRBase> ;
    using FieldValues = DAC_CR_CEN2_Values<DAC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40007400, 32, ReadWriteMode, DACCRBase, T...> ;

  struct DACSWTRGRBase {} ;

  struct SWTRGR : public RegisterBase<0x40007404, 32, WriteMode>
  {
    using SWTRIG1 = DAC_SWTRGR_SWTRIG1_Values<DAC::SWTRGR, 0, 1, WriteMode, DACSWTRGRBase> ;
    using SWTRIG2 = DAC_SWTRGR_SWTRIG2_Values<DAC::SWTRGR, 1, 1, WriteMode, DACSWTRGRBase> ;
    using FieldValues = DAC_SWTRGR_SWTRIG2_Values<DAC::SWTRGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWTRGRPack  = Register<0x40007404, 32, WriteMode, DACSWTRGRBase, T...> ;

  struct DACDHR12R1Base {} ;

  struct DHR12R1 : public RegisterBase<0x40007408, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC_DHR12R1_DACC1DHR_Values<DAC::DHR12R1, 0, 12, ReadWriteMode, DACDHR12R1Base> ;
    using FieldValues = DAC_DHR12R1_DACC1DHR_Values<DAC::DHR12R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12R1Pack  = Register<0x40007408, 32, ReadWriteMode, DACDHR12R1Base, T...> ;

  struct DACDHR12L1Base {} ;

  struct DHR12L1 : public RegisterBase<0x4000740C, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC_DHR12L1_DACC1DHR_Values<DAC::DHR12L1, 4, 12, ReadWriteMode, DACDHR12L1Base> ;
    using FieldValues = DAC_DHR12L1_DACC1DHR_Values<DAC::DHR12L1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12L1Pack  = Register<0x4000740C, 32, ReadWriteMode, DACDHR12L1Base, T...> ;

  struct DACDHR8R1Base {} ;

  struct DHR8R1 : public RegisterBase<0x40007410, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC_DHR8R1_DACC1DHR_Values<DAC::DHR8R1, 0, 8, ReadWriteMode, DACDHR8R1Base> ;
    using FieldValues = DAC_DHR8R1_DACC1DHR_Values<DAC::DHR8R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR8R1Pack  = Register<0x40007410, 32, ReadWriteMode, DACDHR8R1Base, T...> ;

  struct DACDHR12R2Base {} ;

  struct DHR12R2 : public RegisterBase<0x40007414, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC_DHR12R2_DACC2DHR_Values<DAC::DHR12R2, 0, 12, ReadWriteMode, DACDHR12R2Base> ;
    using FieldValues = DAC_DHR12R2_DACC2DHR_Values<DAC::DHR12R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12R2Pack  = Register<0x40007414, 32, ReadWriteMode, DACDHR12R2Base, T...> ;

  struct DACDHR12L2Base {} ;

  struct DHR12L2 : public RegisterBase<0x40007418, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC_DHR12L2_DACC2DHR_Values<DAC::DHR12L2, 4, 12, ReadWriteMode, DACDHR12L2Base> ;
    using FieldValues = DAC_DHR12L2_DACC2DHR_Values<DAC::DHR12L2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12L2Pack  = Register<0x40007418, 32, ReadWriteMode, DACDHR12L2Base, T...> ;

  struct DACDHR8R2Base {} ;

  struct DHR8R2 : public RegisterBase<0x4000741C, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC_DHR8R2_DACC2DHR_Values<DAC::DHR8R2, 0, 8, ReadWriteMode, DACDHR8R2Base> ;
    using FieldValues = DAC_DHR8R2_DACC2DHR_Values<DAC::DHR8R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR8R2Pack  = Register<0x4000741C, 32, ReadWriteMode, DACDHR8R2Base, T...> ;

  struct DACDHR12RDBase {} ;

  struct DHR12RD : public RegisterBase<0x40007420, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC_DHR12RD_DACC1DHR_Values<DAC::DHR12RD, 0, 12, ReadWriteMode, DACDHR12RDBase> ;
    using DACC2DHR = DAC_DHR12RD_DACC2DHR_Values<DAC::DHR12RD, 16, 12, ReadWriteMode, DACDHR12RDBase> ;
    using FieldValues = DAC_DHR12RD_DACC2DHR_Values<DAC::DHR12RD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12RDPack  = Register<0x40007420, 32, ReadWriteMode, DACDHR12RDBase, T...> ;

  struct DACDHR12LDBase {} ;

  struct DHR12LD : public RegisterBase<0x40007424, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC_DHR12LD_DACC1DHR_Values<DAC::DHR12LD, 4, 12, ReadWriteMode, DACDHR12LDBase> ;
    using DACC2DHR = DAC_DHR12LD_DACC2DHR_Values<DAC::DHR12LD, 20, 12, ReadWriteMode, DACDHR12LDBase> ;
    using FieldValues = DAC_DHR12LD_DACC2DHR_Values<DAC::DHR12LD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR12LDPack  = Register<0x40007424, 32, ReadWriteMode, DACDHR12LDBase, T...> ;

  struct DACDHR8RDBase {} ;

  struct DHR8RD : public RegisterBase<0x40007428, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC_DHR8RD_DACC1DHR_Values<DAC::DHR8RD, 0, 8, ReadWriteMode, DACDHR8RDBase> ;
    using DACC2DHR = DAC_DHR8RD_DACC2DHR_Values<DAC::DHR8RD, 8, 8, ReadWriteMode, DACDHR8RDBase> ;
    using FieldValues = DAC_DHR8RD_DACC2DHR_Values<DAC::DHR8RD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DHR8RDPack  = Register<0x40007428, 32, ReadWriteMode, DACDHR8RDBase, T...> ;

  struct DACDOR1Base {} ;

  struct DOR1 : public RegisterBase<0x4000742C, 32, ReadMode>
  {
    using DACC1DOR = DAC_DOR1_DACC1DOR_Values<DAC::DOR1, 0, 12, ReadMode, DACDOR1Base> ;
    using FieldValues = DAC_DOR1_DACC1DOR_Values<DAC::DOR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOR1Pack  = Register<0x4000742C, 32, ReadMode, DACDOR1Base, T...> ;

  struct DACDOR2Base {} ;

  struct DOR2 : public RegisterBase<0x40007430, 32, ReadMode>
  {
    using DACC2DOR = DAC_DOR2_DACC2DOR_Values<DAC::DOR2, 0, 12, ReadMode, DACDOR2Base> ;
    using FieldValues = DAC_DOR2_DACC2DOR_Values<DAC::DOR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOR2Pack  = Register<0x40007430, 32, ReadMode, DACDOR2Base, T...> ;

  struct DACSRBase {} ;

  struct SR : public RegisterBase<0x40007434, 32, ReadWriteMode>
  {
    using DMAUDR1 = DAC_SR_DMAUDR1_Values<DAC::SR, 13, 1, ReadWriteMode, DACSRBase> ;
    using CAL_FLAG1 = DAC_SR_CAL_FLAG1_Values<DAC::SR, 14, 1, ReadMode, DACSRBase> ;
    using BWST1 = DAC_SR_BWST1_Values<DAC::SR, 15, 1, ReadMode, DACSRBase> ;
    using DMAUDR2 = DAC_SR_DMAUDR2_Values<DAC::SR, 29, 1, ReadWriteMode, DACSRBase> ;
    using CAL_FLAG2 = DAC_SR_CAL_FLAG2_Values<DAC::SR, 30, 1, ReadMode, DACSRBase> ;
    using BWST2 = DAC_SR_BWST2_Values<DAC::SR, 31, 1, ReadMode, DACSRBase> ;
    using FieldValues = DAC_SR_BWST2_Values<DAC::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40007434, 32, ReadWriteMode, DACSRBase, T...> ;

  struct DACCCRBase {} ;

  struct CCR : public RegisterBase<0x40007438, 32, ReadWriteMode>
  {
    using OTRIM1 = DAC_CCR_OTRIM1_Values<DAC::CCR, 0, 5, ReadWriteMode, DACCCRBase> ;
    using OTRIM2 = DAC_CCR_OTRIM2_Values<DAC::CCR, 16, 5, ReadWriteMode, DACCCRBase> ;
    using FieldValues = DAC_CCR_OTRIM2_Values<DAC::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x40007438, 32, ReadWriteMode, DACCCRBase, T...> ;

  struct DACMCRBase {} ;

  struct MCR : public RegisterBase<0x4000743C, 32, ReadWriteMode>
  {
    using MODE1 = DAC_MCR_MODE1_Values<DAC::MCR, 0, 3, ReadWriteMode, DACMCRBase> ;
    using MODE2 = DAC_MCR_MODE2_Values<DAC::MCR, 16, 3, ReadWriteMode, DACMCRBase> ;
    using FieldValues = DAC_MCR_MODE2_Values<DAC::MCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCRPack  = Register<0x4000743C, 32, ReadWriteMode, DACMCRBase, T...> ;

  struct DACSHSR1Base {} ;

  struct SHSR1 : public RegisterBase<0x40007440, 32, ReadWriteMode>
  {
    using TSAMPLE1 = DAC_SHSR1_TSAMPLE1_Values<DAC::SHSR1, 0, 10, ReadWriteMode, DACSHSR1Base> ;
    using FieldValues = DAC_SHSR1_TSAMPLE1_Values<DAC::SHSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHSR1Pack  = Register<0x40007440, 32, ReadWriteMode, DACSHSR1Base, T...> ;

  struct DACSHSR2Base {} ;

  struct SHSR2 : public RegisterBase<0x40007444, 32, ReadWriteMode>
  {
    using TSAMPLE2 = DAC_SHSR2_TSAMPLE2_Values<DAC::SHSR2, 0, 10, ReadWriteMode, DACSHSR2Base> ;
    using FieldValues = DAC_SHSR2_TSAMPLE2_Values<DAC::SHSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHSR2Pack  = Register<0x40007444, 32, ReadWriteMode, DACSHSR2Base, T...> ;

  struct DACSHHRBase {} ;

  struct SHHR : public RegisterBase<0x40007448, 32, ReadWriteMode>
  {
    using THOLD1 = DAC_SHHR_THOLD1_Values<DAC::SHHR, 0, 10, ReadWriteMode, DACSHHRBase> ;
    using THOLD2 = DAC_SHHR_THOLD2_Values<DAC::SHHR, 16, 10, ReadWriteMode, DACSHHRBase> ;
    using FieldValues = DAC_SHHR_THOLD2_Values<DAC::SHHR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHHRPack  = Register<0x40007448, 32, ReadWriteMode, DACSHHRBase, T...> ;

  struct DACSHRRBase {} ;

  struct SHRR : public RegisterBase<0x4000744C, 32, ReadWriteMode>
  {
    using TREFRESH1 = DAC_SHRR_TREFRESH1_Values<DAC::SHRR, 0, 8, ReadWriteMode, DACSHRRBase> ;
    using TREFRESH2 = DAC_SHRR_TREFRESH2_Values<DAC::SHRR, 16, 8, ReadWriteMode, DACSHRRBase> ;
    using FieldValues = DAC_SHRR_TREFRESH2_Values<DAC::SHRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHRRPack  = Register<0x4000744C, 32, ReadWriteMode, DACSHRRBase, T...> ;

} ;

#endif //#if !defined(DACREGISTERS_HPP)
