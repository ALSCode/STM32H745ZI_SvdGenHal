/*******************************************************************************
* Filename      : adc3commonregisters.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(ADC3COMMONREGISTERS_HPP)
#define ADC3COMMONREGISTERS_HPP

#include "adc3commonfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC3_Common
{
  struct ADC3_CommonCSRBase {} ;

  struct CSR : public RegisterBase<0x58026300, 32, ReadMode>
  {
    using ADRDY_MST = ADC3_Common_CSR_ADRDY_MST_Values<ADC3_Common::CSR, 0, 1, ReadMode, ADC3_CommonCSRBase> ;
    using EOSMP_MST = ADC3_Common_CSR_EOSMP_MST_Values<ADC3_Common::CSR, 1, 1, ReadMode, ADC3_CommonCSRBase> ;
    using EOC_MST = ADC3_Common_CSR_EOC_MST_Values<ADC3_Common::CSR, 2, 1, ReadMode, ADC3_CommonCSRBase> ;
    using EOS_MST = ADC3_Common_CSR_EOS_MST_Values<ADC3_Common::CSR, 3, 1, ReadMode, ADC3_CommonCSRBase> ;
    using OVR_MST = ADC3_Common_CSR_OVR_MST_Values<ADC3_Common::CSR, 4, 1, ReadMode, ADC3_CommonCSRBase> ;
    using JEOC_MST = ADC3_Common_CSR_JEOC_MST_Values<ADC3_Common::CSR, 5, 1, ReadMode, ADC3_CommonCSRBase> ;
    using JEOS_MST = ADC3_Common_CSR_JEOS_MST_Values<ADC3_Common::CSR, 6, 1, ReadMode, ADC3_CommonCSRBase> ;
    using AWD1_MST = ADC3_Common_CSR_AWD1_MST_Values<ADC3_Common::CSR, 7, 1, ReadMode, ADC3_CommonCSRBase> ;
    using AWD2_MST = ADC3_Common_CSR_AWD2_MST_Values<ADC3_Common::CSR, 8, 1, ReadMode, ADC3_CommonCSRBase> ;
    using AWD3_MST = ADC3_Common_CSR_AWD3_MST_Values<ADC3_Common::CSR, 9, 1, ReadMode, ADC3_CommonCSRBase> ;
    using JQOVF_MST = ADC3_Common_CSR_JQOVF_MST_Values<ADC3_Common::CSR, 10, 1, ReadMode, ADC3_CommonCSRBase> ;
    using ADRDY_SLV = ADC3_Common_CSR_ADRDY_SLV_Values<ADC3_Common::CSR, 16, 1, ReadMode, ADC3_CommonCSRBase> ;
    using EOSMP_SLV = ADC3_Common_CSR_EOSMP_SLV_Values<ADC3_Common::CSR, 17, 1, ReadMode, ADC3_CommonCSRBase> ;
    using EOC_SLV = ADC3_Common_CSR_EOC_SLV_Values<ADC3_Common::CSR, 18, 1, ReadMode, ADC3_CommonCSRBase> ;
    using EOS_SLV = ADC3_Common_CSR_EOS_SLV_Values<ADC3_Common::CSR, 19, 1, ReadMode, ADC3_CommonCSRBase> ;
    using OVR_SLV = ADC3_Common_CSR_OVR_SLV_Values<ADC3_Common::CSR, 20, 1, ReadMode, ADC3_CommonCSRBase> ;
    using JEOC_SLV = ADC3_Common_CSR_JEOC_SLV_Values<ADC3_Common::CSR, 21, 1, ReadMode, ADC3_CommonCSRBase> ;
    using JEOS_SLV = ADC3_Common_CSR_JEOS_SLV_Values<ADC3_Common::CSR, 22, 1, ReadMode, ADC3_CommonCSRBase> ;
    using AWD1_SLV = ADC3_Common_CSR_AWD1_SLV_Values<ADC3_Common::CSR, 23, 1, ReadMode, ADC3_CommonCSRBase> ;
    using AWD2_SLV = ADC3_Common_CSR_AWD2_SLV_Values<ADC3_Common::CSR, 24, 1, ReadMode, ADC3_CommonCSRBase> ;
    using AWD3_SLV = ADC3_Common_CSR_AWD3_SLV_Values<ADC3_Common::CSR, 25, 1, ReadMode, ADC3_CommonCSRBase> ;
    using JQOVF_SLV = ADC3_Common_CSR_JQOVF_SLV_Values<ADC3_Common::CSR, 26, 1, ReadMode, ADC3_CommonCSRBase> ;
    using FieldValues = ADC3_Common_CSR_JQOVF_SLV_Values<ADC3_Common::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x58026300, 32, ReadMode, ADC3_CommonCSRBase, T...> ;

  struct ADC3_CommonCCRBase {} ;

  struct CCR : public RegisterBase<0x58026308, 32, ReadWriteMode>
  {
    using DUAL = ADC3_Common_CCR_DUAL_Values<ADC3_Common::CCR, 0, 5, ReadWriteMode, ADC3_CommonCCRBase> ;
    using DELAY = ADC3_Common_CCR_DELAY_Values<ADC3_Common::CCR, 8, 4, ReadWriteMode, ADC3_CommonCCRBase> ;
    using DAMDF = ADC3_Common_CCR_DAMDF_Values<ADC3_Common::CCR, 14, 2, ReadWriteMode, ADC3_CommonCCRBase> ;
    using CKMODE = ADC3_Common_CCR_CKMODE_Values<ADC3_Common::CCR, 16, 2, ReadWriteMode, ADC3_CommonCCRBase> ;
    using PRESC = ADC3_Common_CCR_PRESC_Values<ADC3_Common::CCR, 18, 4, ReadWriteMode, ADC3_CommonCCRBase> ;
    using VREFEN = ADC3_Common_CCR_VREFEN_Values<ADC3_Common::CCR, 22, 1, ReadWriteMode, ADC3_CommonCCRBase> ;
    using VSENSEEN = ADC3_Common_CCR_VSENSEEN_Values<ADC3_Common::CCR, 23, 1, ReadWriteMode, ADC3_CommonCCRBase> ;
    using VBATEN = ADC3_Common_CCR_VBATEN_Values<ADC3_Common::CCR, 24, 1, ReadWriteMode, ADC3_CommonCCRBase> ;
    using FieldValues = ADC3_Common_CCR_VBATEN_Values<ADC3_Common::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x58026308, 32, ReadWriteMode, ADC3_CommonCCRBase, T...> ;

  struct ADC3_CommonCDRBase {} ;

  struct CDR : public RegisterBase<0x5802630C, 32, ReadMode>
  {
    using RDATA_SLV = ADC3_Common_CDR_RDATA_SLV_Values<ADC3_Common::CDR, 16, 16, ReadMode, ADC3_CommonCDRBase> ;
    using RDATA_MST = ADC3_Common_CDR_RDATA_MST_Values<ADC3_Common::CDR, 0, 16, ReadMode, ADC3_CommonCDRBase> ;
    using FieldValues = ADC3_Common_CDR_RDATA_MST_Values<ADC3_Common::CDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CDRPack  = Register<0x5802630C, 32, ReadMode, ADC3_CommonCDRBase, T...> ;

  struct ADC3_CommonCDR2Base {} ;

  struct CDR2 : public RegisterBase<0x58026310, 32, ReadMode>
  {
    using RDATA_ALT = ADC3_Common_CDR2_RDATA_ALT_Values<ADC3_Common::CDR2, 0, 32, ReadMode, ADC3_CommonCDR2Base> ;
    using FieldValues = ADC3_Common_CDR2_RDATA_ALT_Values<ADC3_Common::CDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CDR2Pack  = Register<0x58026310, 32, ReadMode, ADC3_CommonCDR2Base, T...> ;

} ;

#endif //#if !defined(ADC3COMMONREGISTERS_HPP)
