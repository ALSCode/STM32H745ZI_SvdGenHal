/*******************************************************************************
* Filename      : syscfgregisters.hpp
*
* Details       : System configuration controller. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(SYSCFGREGISTERS_HPP)
#define SYSCFGREGISTERS_HPP

#include "syscfgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SYSCFG
{
  struct SYSCFGPMCRBase {} ;

  struct PMCR : public RegisterBase<0x58000404, 32, ReadWriteMode>
  {
    using I2C1FMP = SYSCFG_PMCR_I2C1FMP_Values<SYSCFG::PMCR, 0, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using I2C2FMP = SYSCFG_PMCR_I2C2FMP_Values<SYSCFG::PMCR, 1, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using I2C3FMP = SYSCFG_PMCR_I2C3FMP_Values<SYSCFG::PMCR, 2, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using I2C4FMP = SYSCFG_PMCR_I2C4FMP_Values<SYSCFG::PMCR, 3, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using PB6FMP = SYSCFG_PMCR_PB6FMP_Values<SYSCFG::PMCR, 4, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using PB7FMP = SYSCFG_PMCR_PB7FMP_Values<SYSCFG::PMCR, 5, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using PB8FMP = SYSCFG_PMCR_PB8FMP_Values<SYSCFG::PMCR, 6, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using PB9FMP = SYSCFG_PMCR_PB9FMP_Values<SYSCFG::PMCR, 7, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using BOOSTE = SYSCFG_PMCR_BOOSTE_Values<SYSCFG::PMCR, 8, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using BOOSTVDDSEL = SYSCFG_PMCR_BOOSTVDDSEL_Values<SYSCFG::PMCR, 9, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using EPIS = SYSCFG_PMCR_EPIS_Values<SYSCFG::PMCR, 21, 3, ReadWriteMode, SYSCFGPMCRBase> ;
    using PA0SO = SYSCFG_PMCR_PA0SO_Values<SYSCFG::PMCR, 24, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using PA1SO = SYSCFG_PMCR_PA1SO_Values<SYSCFG::PMCR, 25, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using PC2SO = SYSCFG_PMCR_PC2SO_Values<SYSCFG::PMCR, 26, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using PC3SO = SYSCFG_PMCR_PC3SO_Values<SYSCFG::PMCR, 27, 1, ReadWriteMode, SYSCFGPMCRBase> ;
    using FieldValues = SYSCFG_PMCR_PC3SO_Values<SYSCFG::PMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMCRPack  = Register<0x58000404, 32, ReadWriteMode, SYSCFGPMCRBase, T...> ;

  struct SYSCFGEXTICR1Base {} ;

  struct EXTICR1 : public RegisterBase<0x58000408, 32, ReadWriteMode>
  {
    using EXTI3 = SYSCFG_EXTICR1_EXTI3_Values<SYSCFG::EXTICR1, 12, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI2 = SYSCFG_EXTICR1_EXTI2_Values<SYSCFG::EXTICR1, 8, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI1 = SYSCFG_EXTICR1_EXTI1_Values<SYSCFG::EXTICR1, 4, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI0 = SYSCFG_EXTICR1_EXTI0_Values<SYSCFG::EXTICR1, 0, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using FieldValues = SYSCFG_EXTICR1_EXTI0_Values<SYSCFG::EXTICR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR1Pack  = Register<0x58000408, 32, ReadWriteMode, SYSCFGEXTICR1Base, T...> ;

  struct SYSCFGEXTICR2Base {} ;

  struct EXTICR2 : public RegisterBase<0x5800040C, 32, ReadWriteMode>
  {
    using EXTI7 = SYSCFG_EXTICR2_EXTI7_Values<SYSCFG::EXTICR2, 12, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI6 = SYSCFG_EXTICR2_EXTI6_Values<SYSCFG::EXTICR2, 8, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI5 = SYSCFG_EXTICR2_EXTI5_Values<SYSCFG::EXTICR2, 4, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI4 = SYSCFG_EXTICR2_EXTI4_Values<SYSCFG::EXTICR2, 0, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using FieldValues = SYSCFG_EXTICR2_EXTI4_Values<SYSCFG::EXTICR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR2Pack  = Register<0x5800040C, 32, ReadWriteMode, SYSCFGEXTICR2Base, T...> ;

  struct SYSCFGEXTICR3Base {} ;

  struct EXTICR3 : public RegisterBase<0x58000410, 32, ReadWriteMode>
  {
    using EXTI11 = SYSCFG_EXTICR3_EXTI11_Values<SYSCFG::EXTICR3, 12, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI10 = SYSCFG_EXTICR3_EXTI10_Values<SYSCFG::EXTICR3, 8, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI9 = SYSCFG_EXTICR3_EXTI9_Values<SYSCFG::EXTICR3, 4, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI8 = SYSCFG_EXTICR3_EXTI8_Values<SYSCFG::EXTICR3, 0, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using FieldValues = SYSCFG_EXTICR3_EXTI8_Values<SYSCFG::EXTICR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR3Pack  = Register<0x58000410, 32, ReadWriteMode, SYSCFGEXTICR3Base, T...> ;

  struct SYSCFGEXTICR4Base {} ;

  struct EXTICR4 : public RegisterBase<0x58000414, 32, ReadWriteMode>
  {
    using EXTI15 = SYSCFG_EXTICR4_EXTI15_Values<SYSCFG::EXTICR4, 12, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI14 = SYSCFG_EXTICR4_EXTI14_Values<SYSCFG::EXTICR4, 8, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI13 = SYSCFG_EXTICR4_EXTI13_Values<SYSCFG::EXTICR4, 4, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI12 = SYSCFG_EXTICR4_EXTI12_Values<SYSCFG::EXTICR4, 0, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using FieldValues = SYSCFG_EXTICR4_EXTI12_Values<SYSCFG::EXTICR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR4Pack  = Register<0x58000414, 32, ReadWriteMode, SYSCFGEXTICR4Base, T...> ;

  struct SYSCFGCFGRBase {} ;

  struct CFGR : public RegisterBase<0x58000418, 32, ReadWriteMode>
  {
    using CM4L = SYSCFG_CFGR_CM4L_Values<SYSCFG::CFGR, 0, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using PVDL = SYSCFG_CFGR_PVDL_Values<SYSCFG::CFGR, 2, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using FLASHL = SYSCFG_CFGR_FLASHL_Values<SYSCFG::CFGR, 3, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using CM7L = SYSCFG_CFGR_CM7L_Values<SYSCFG::CFGR, 6, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using BKRAML = SYSCFG_CFGR_BKRAML_Values<SYSCFG::CFGR, 7, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using SRAM4L = SYSCFG_CFGR_SRAM4L_Values<SYSCFG::CFGR, 9, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using SRAM3L = SYSCFG_CFGR_SRAM3L_Values<SYSCFG::CFGR, 10, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using SRAM2L = SYSCFG_CFGR_SRAM2L_Values<SYSCFG::CFGR, 11, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using SRAM1L = SYSCFG_CFGR_SRAM1L_Values<SYSCFG::CFGR, 12, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using DTCML = SYSCFG_CFGR_DTCML_Values<SYSCFG::CFGR, 13, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using ITCML = SYSCFG_CFGR_ITCML_Values<SYSCFG::CFGR, 14, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using AXISRAML = SYSCFG_CFGR_AXISRAML_Values<SYSCFG::CFGR, 15, 1, ReadWriteMode, SYSCFGCFGRBase> ;
    using FieldValues = SYSCFG_CFGR_AXISRAML_Values<SYSCFG::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x58000418, 32, ReadWriteMode, SYSCFGCFGRBase, T...> ;

  struct SYSCFGCCCSRBase {} ;

  struct CCCSR : public RegisterBase<0x58000420, 32, ReadWriteMode>
  {
    using EN = SYSCFG_CCCSR_EN_Values<SYSCFG::CCCSR, 0, 1, ReadWriteMode, SYSCFGCCCSRBase> ;
    using CS = SYSCFG_CCCSR_CS_Values<SYSCFG::CCCSR, 1, 1, ReadWriteMode, SYSCFGCCCSRBase> ;
    using READY = SYSCFG_CCCSR_READY_Values<SYSCFG::CCCSR, 8, 1, ReadWriteMode, SYSCFGCCCSRBase> ;
    using HSLV = SYSCFG_CCCSR_HSLV_Values<SYSCFG::CCCSR, 16, 1, ReadWriteMode, SYSCFGCCCSRBase> ;
    using FieldValues = SYSCFG_CCCSR_HSLV_Values<SYSCFG::CCCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCCSRPack  = Register<0x58000420, 32, ReadWriteMode, SYSCFGCCCSRBase, T...> ;

  struct SYSCFGCCVRBase {} ;

  struct CCVR : public RegisterBase<0x58000424, 32, ReadMode>
  {
    using NCV = SYSCFG_CCVR_NCV_Values<SYSCFG::CCVR, 0, 4, ReadMode, SYSCFGCCVRBase> ;
    using PCV = SYSCFG_CCVR_PCV_Values<SYSCFG::CCVR, 4, 4, ReadMode, SYSCFGCCVRBase> ;
    using FieldValues = SYSCFG_CCVR_PCV_Values<SYSCFG::CCVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCVRPack  = Register<0x58000424, 32, ReadMode, SYSCFGCCVRBase, T...> ;

  struct SYSCFGCCCRBase {} ;

  struct CCCR : public RegisterBase<0x58000428, 32, ReadWriteMode>
  {
    using NCC = SYSCFG_CCCR_NCC_Values<SYSCFG::CCCR, 0, 4, ReadWriteMode, SYSCFGCCCRBase> ;
    using PCC = SYSCFG_CCCR_PCC_Values<SYSCFG::CCCR, 4, 4, ReadWriteMode, SYSCFGCCCRBase> ;
    using FieldValues = SYSCFG_CCCR_PCC_Values<SYSCFG::CCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCCRPack  = Register<0x58000428, 32, ReadWriteMode, SYSCFGCCCRBase, T...> ;

  struct SYSCFGPWRCRBase {} ;

  struct PWRCR : public RegisterBase<0x5800042C, 32, ReadWriteMode>
  {
    using ODEN = SYSCFG_PWRCR_ODEN_Values<SYSCFG::PWRCR, 0, 1, ReadWriteMode, SYSCFGPWRCRBase> ;
    using FieldValues = SYSCFG_PWRCR_ODEN_Values<SYSCFG::PWRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWRCRPack  = Register<0x5800042C, 32, ReadWriteMode, SYSCFGPWRCRBase, T...> ;

  struct SYSCFGPKGRBase {} ;

  struct PKGR : public RegisterBase<0x58000524, 32, ReadMode>
  {
    using PKG = SYSCFG_PKGR_PKG_Values<SYSCFG::PKGR, 0, 4, ReadMode, SYSCFGPKGRBase> ;
    using FieldValues = SYSCFG_PKGR_PKG_Values<SYSCFG::PKGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PKGRPack  = Register<0x58000524, 32, ReadMode, SYSCFGPKGRBase, T...> ;

  struct SYSCFGUR0Base {} ;

  struct UR0 : public RegisterBase<0x58000700, 32, ReadMode>
  {
    using BKS = SYSCFG_UR0_BKS_Values<SYSCFG::UR0, 0, 1, ReadMode, SYSCFGUR0Base> ;
    using RDP = SYSCFG_UR0_RDP_Values<SYSCFG::UR0, 16, 8, ReadMode, SYSCFGUR0Base> ;
    using FieldValues = SYSCFG_UR0_RDP_Values<SYSCFG::UR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR0Pack  = Register<0x58000700, 32, ReadMode, SYSCFGUR0Base, T...> ;

  struct SYSCFGUR1Base {} ;

  struct UR1 : public RegisterBase<0x58000704, 32, ReadWriteMode>
  {
    using BCM4 = SYSCFG_UR1_BCM4_Values<SYSCFG::UR1, 0, 1, ReadWriteMode, SYSCFGUR1Base> ;
    using BCM7 = SYSCFG_UR1_BCM7_Values<SYSCFG::UR1, 16, 1, ReadWriteMode, SYSCFGUR1Base> ;
    using FieldValues = SYSCFG_UR1_BCM7_Values<SYSCFG::UR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR1Pack  = Register<0x58000704, 32, ReadWriteMode, SYSCFGUR1Base, T...> ;

  struct SYSCFGUR2Base {} ;

  struct UR2 : public RegisterBase<0x58000708, 32, ReadWriteMode>
  {
    using BORH = SYSCFG_UR2_BORH_Values<SYSCFG::UR2, 0, 2, ReadMode, SYSCFGUR2Base> ;
    using BCM7_ADD0 = SYSCFG_UR2_BCM7_ADD0_Values<SYSCFG::UR2, 16, 16, ReadWriteMode, SYSCFGUR2Base> ;
    using FieldValues = SYSCFG_UR2_BCM7_ADD0_Values<SYSCFG::UR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR2Pack  = Register<0x58000708, 32, ReadWriteMode, SYSCFGUR2Base, T...> ;

  struct SYSCFGUR3Base {} ;

  struct UR3 : public RegisterBase<0x5800070C, 32, ReadWriteMode>
  {
    using BCM4_ADD1 = SYSCFG_UR3_BCM4_ADD1_Values<SYSCFG::UR3, 0, 16, ReadWriteMode, SYSCFGUR3Base> ;
    using BCM7_ADD1 = SYSCFG_UR3_BCM7_ADD1_Values<SYSCFG::UR3, 16, 16, ReadWriteMode, SYSCFGUR3Base> ;
    using FieldValues = SYSCFG_UR3_BCM7_ADD1_Values<SYSCFG::UR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR3Pack  = Register<0x5800070C, 32, ReadWriteMode, SYSCFGUR3Base, T...> ;

  struct SYSCFGUR4Base {} ;

  struct UR4 : public RegisterBase<0x58000710, 32, ReadWriteMode>
  {
    using BCM4_ADD1 = SYSCFG_UR4_BCM4_ADD1_Values<SYSCFG::UR4, 0, 16, ReadWriteMode, SYSCFGUR4Base> ;
    using MEPAD_1 = SYSCFG_UR4_MEPAD_1_Values<SYSCFG::UR4, 16, 1, ReadMode, SYSCFGUR4Base> ;
    using FieldValues = SYSCFG_UR4_MEPAD_1_Values<SYSCFG::UR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR4Pack  = Register<0x58000710, 32, ReadWriteMode, SYSCFGUR4Base, T...> ;

  struct SYSCFGUR5Base {} ;

  struct UR5 : public RegisterBase<0x58000714, 32, ReadMode>
  {
    using MESAD_1 = SYSCFG_UR5_MESAD_1_Values<SYSCFG::UR5, 0, 1, ReadMode, SYSCFGUR5Base> ;
    using WRPS_1 = SYSCFG_UR5_WRPS_1_Values<SYSCFG::UR5, 16, 8, ReadMode, SYSCFGUR5Base> ;
    using FieldValues = SYSCFG_UR5_WRPS_1_Values<SYSCFG::UR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR5Pack  = Register<0x58000714, 32, ReadMode, SYSCFGUR5Base, T...> ;

  struct SYSCFGUR6Base {} ;

  struct UR6 : public RegisterBase<0x58000718, 32, ReadMode>
  {
    using PA_BEG_1 = SYSCFG_UR6_PA_BEG_1_Values<SYSCFG::UR6, 0, 12, ReadMode, SYSCFGUR6Base> ;
    using PA_END_1 = SYSCFG_UR6_PA_END_1_Values<SYSCFG::UR6, 16, 12, ReadMode, SYSCFGUR6Base> ;
    using FieldValues = SYSCFG_UR6_PA_END_1_Values<SYSCFG::UR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR6Pack  = Register<0x58000718, 32, ReadMode, SYSCFGUR6Base, T...> ;

  struct SYSCFGUR7Base {} ;

  struct UR7 : public RegisterBase<0x5800071C, 32, ReadMode>
  {
    using SA_BEG_1 = SYSCFG_UR7_SA_BEG_1_Values<SYSCFG::UR7, 0, 12, ReadMode, SYSCFGUR7Base> ;
    using SA_END_1 = SYSCFG_UR7_SA_END_1_Values<SYSCFG::UR7, 16, 12, ReadMode, SYSCFGUR7Base> ;
    using FieldValues = SYSCFG_UR7_SA_END_1_Values<SYSCFG::UR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR7Pack  = Register<0x5800071C, 32, ReadMode, SYSCFGUR7Base, T...> ;

  struct SYSCFGUR8Base {} ;

  struct UR8 : public RegisterBase<0x58000720, 32, ReadMode>
  {
    using MEPAD_2 = SYSCFG_UR8_MEPAD_2_Values<SYSCFG::UR8, 0, 1, ReadMode, SYSCFGUR8Base> ;
    using MESAD_2 = SYSCFG_UR8_MESAD_2_Values<SYSCFG::UR8, 16, 1, ReadMode, SYSCFGUR8Base> ;
    using FieldValues = SYSCFG_UR8_MESAD_2_Values<SYSCFG::UR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR8Pack  = Register<0x58000720, 32, ReadMode, SYSCFGUR8Base, T...> ;

  struct SYSCFGUR9Base {} ;

  struct UR9 : public RegisterBase<0x58000724, 32, ReadMode>
  {
    using WRPS_2 = SYSCFG_UR9_WRPS_2_Values<SYSCFG::UR9, 0, 8, ReadMode, SYSCFGUR9Base> ;
    using PA_BEG_2 = SYSCFG_UR9_PA_BEG_2_Values<SYSCFG::UR9, 16, 12, ReadMode, SYSCFGUR9Base> ;
    using FieldValues = SYSCFG_UR9_PA_BEG_2_Values<SYSCFG::UR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR9Pack  = Register<0x58000724, 32, ReadMode, SYSCFGUR9Base, T...> ;

  struct SYSCFGUR10Base {} ;

  struct UR10 : public RegisterBase<0x58000728, 32, ReadMode>
  {
    using PA_END_2 = SYSCFG_UR10_PA_END_2_Values<SYSCFG::UR10, 0, 12, ReadMode, SYSCFGUR10Base> ;
    using SA_BEG_2 = SYSCFG_UR10_SA_BEG_2_Values<SYSCFG::UR10, 16, 12, ReadMode, SYSCFGUR10Base> ;
    using FieldValues = SYSCFG_UR10_SA_BEG_2_Values<SYSCFG::UR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR10Pack  = Register<0x58000728, 32, ReadMode, SYSCFGUR10Base, T...> ;

  struct SYSCFGUR11Base {} ;

  struct UR11 : public RegisterBase<0x5800072C, 32, ReadMode>
  {
    using SA_END_2 = SYSCFG_UR11_SA_END_2_Values<SYSCFG::UR11, 0, 12, ReadMode, SYSCFGUR11Base> ;
    using IWDG1M = SYSCFG_UR11_IWDG1M_Values<SYSCFG::UR11, 16, 1, ReadMode, SYSCFGUR11Base> ;
    using FieldValues = SYSCFG_UR11_IWDG1M_Values<SYSCFG::UR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR11Pack  = Register<0x5800072C, 32, ReadMode, SYSCFGUR11Base, T...> ;

  struct SYSCFGUR12Base {} ;

  struct UR12 : public RegisterBase<0x58000730, 32, ReadMode>
  {
    using IWDG2M = SYSCFG_UR12_IWDG2M_Values<SYSCFG::UR12, 0, 1, ReadMode, SYSCFGUR12Base> ;
    using SECURE = SYSCFG_UR12_SECURE_Values<SYSCFG::UR12, 16, 1, ReadMode, SYSCFGUR12Base> ;
    using FieldValues = SYSCFG_UR12_SECURE_Values<SYSCFG::UR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR12Pack  = Register<0x58000730, 32, ReadMode, SYSCFGUR12Base, T...> ;

  struct SYSCFGUR13Base {} ;

  struct UR13 : public RegisterBase<0x58000734, 32, ReadMode>
  {
    using SDRS = SYSCFG_UR13_SDRS_Values<SYSCFG::UR13, 0, 2, ReadMode, SYSCFGUR13Base> ;
    using D1SBRST = SYSCFG_UR13_D1SBRST_Values<SYSCFG::UR13, 16, 1, ReadMode, SYSCFGUR13Base> ;
    using FieldValues = SYSCFG_UR13_D1SBRST_Values<SYSCFG::UR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR13Pack  = Register<0x58000734, 32, ReadMode, SYSCFGUR13Base, T...> ;

  struct SYSCFGUR14Base {} ;

  struct UR14 : public RegisterBase<0x58000738, 32, ReadWriteMode>
  {
    using D1STPRST = SYSCFG_UR14_D1STPRST_Values<SYSCFG::UR14, 0, 1, ReadWriteMode, SYSCFGUR14Base> ;
    using D2SBRST = SYSCFG_UR14_D2SBRST_Values<SYSCFG::UR14, 16, 1, ReadWriteMode, SYSCFGUR14Base> ;
    using FieldValues = SYSCFG_UR14_D2SBRST_Values<SYSCFG::UR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR14Pack  = Register<0x58000738, 32, ReadWriteMode, SYSCFGUR14Base, T...> ;

  struct SYSCFGUR15Base {} ;

  struct UR15 : public RegisterBase<0x5800073C, 32, ReadWriteMode>
  {
    using D2STPRST = SYSCFG_UR15_D2STPRST_Values<SYSCFG::UR15, 0, 1, ReadWriteMode, SYSCFGUR15Base> ;
    using FZIWDGSTB = SYSCFG_UR15_FZIWDGSTB_Values<SYSCFG::UR15, 16, 1, ReadMode, SYSCFGUR15Base> ;
    using FieldValues = SYSCFG_UR15_FZIWDGSTB_Values<SYSCFG::UR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR15Pack  = Register<0x5800073C, 32, ReadWriteMode, SYSCFGUR15Base, T...> ;

  struct SYSCFGUR16Base {} ;

  struct UR16 : public RegisterBase<0x58000740, 32, ReadMode>
  {
    using FZIWDGSTP = SYSCFG_UR16_FZIWDGSTP_Values<SYSCFG::UR16, 0, 1, ReadMode, SYSCFGUR16Base> ;
    using PKP = SYSCFG_UR16_PKP_Values<SYSCFG::UR16, 16, 1, ReadMode, SYSCFGUR16Base> ;
    using FieldValues = SYSCFG_UR16_PKP_Values<SYSCFG::UR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR16Pack  = Register<0x58000740, 32, ReadMode, SYSCFGUR16Base, T...> ;

  struct SYSCFGUR17Base {} ;

  struct UR17 : public RegisterBase<0x58000744, 32, ReadMode>
  {
    using IO_HSLV = SYSCFG_UR17_IO_HSLV_Values<SYSCFG::UR17, 0, 1, ReadMode, SYSCFGUR17Base> ;
    using FieldValues = SYSCFG_UR17_IO_HSLV_Values<SYSCFG::UR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UR17Pack  = Register<0x58000744, 32, ReadMode, SYSCFGUR17Base, T...> ;

} ;

#endif //#if !defined(SYSCFGREGISTERS_HPP)
