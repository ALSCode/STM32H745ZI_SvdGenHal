/*******************************************************************************
* Filename      : dfsdmregisters.hpp
*
* Details       : Digital filter for sigma delta modulators. This header file is
*                 auto-generated for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(DFSDMREGISTERS_HPP)
#define DFSDMREGISTERS_HPP

#include "dfsdmfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DFSDM
{
  struct DFSDMCH0CFGR1Base {} ;

  struct CH0CFGR1 : public RegisterBase<0x40017000, 32, ReadWriteMode>
  {
    using DFSDMEN = DFSDM_CH0CFGR1_DFSDMEN_Values<DFSDM::CH0CFGR1, 31, 1, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using CKOUTSRC = DFSDM_CH0CFGR1_CKOUTSRC_Values<DFSDM::CH0CFGR1, 30, 1, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using CKOUTDIV = DFSDM_CH0CFGR1_CKOUTDIV_Values<DFSDM::CH0CFGR1, 16, 8, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using DATPACK = DFSDM_CH0CFGR1_DATPACK_Values<DFSDM::CH0CFGR1, 14, 2, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using DATMPX = DFSDM_CH0CFGR1_DATMPX_Values<DFSDM::CH0CFGR1, 12, 2, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using CHINSEL = DFSDM_CH0CFGR1_CHINSEL_Values<DFSDM::CH0CFGR1, 8, 1, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using CHEN = DFSDM_CH0CFGR1_CHEN_Values<DFSDM::CH0CFGR1, 7, 1, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using CKABEN = DFSDM_CH0CFGR1_CKABEN_Values<DFSDM::CH0CFGR1, 6, 1, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using SCDEN = DFSDM_CH0CFGR1_SCDEN_Values<DFSDM::CH0CFGR1, 5, 1, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using SPICKSEL = DFSDM_CH0CFGR1_SPICKSEL_Values<DFSDM::CH0CFGR1, 2, 2, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using SITP = DFSDM_CH0CFGR1_SITP_Values<DFSDM::CH0CFGR1, 0, 2, ReadWriteMode, DFSDMCH0CFGR1Base> ;
    using FieldValues = DFSDM_CH0CFGR1_SITP_Values<DFSDM::CH0CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CFGR1Pack  = Register<0x40017000, 32, ReadWriteMode, DFSDMCH0CFGR1Base, T...> ;

  struct DFSDMCH0CFGR2Base {} ;

  struct CH0CFGR2 : public RegisterBase<0x40017004, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CH0CFGR2_OFFSET_Values<DFSDM::CH0CFGR2, 8, 24, ReadWriteMode, DFSDMCH0CFGR2Base> ;
    using DTRBS = DFSDM_CH0CFGR2_DTRBS_Values<DFSDM::CH0CFGR2, 3, 5, ReadWriteMode, DFSDMCH0CFGR2Base> ;
    using FieldValues = DFSDM_CH0CFGR2_DTRBS_Values<DFSDM::CH0CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0CFGR2Pack  = Register<0x40017004, 32, ReadWriteMode, DFSDMCH0CFGR2Base, T...> ;

  struct DFSDMCH0AWSCDRBase {} ;

  struct CH0AWSCDR : public RegisterBase<0x40017008, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_CH0AWSCDR_AWFORD_Values<DFSDM::CH0AWSCDR, 22, 2, ReadWriteMode, DFSDMCH0AWSCDRBase> ;
    using AWFOSR = DFSDM_CH0AWSCDR_AWFOSR_Values<DFSDM::CH0AWSCDR, 16, 5, ReadWriteMode, DFSDMCH0AWSCDRBase> ;
    using BKSCD = DFSDM_CH0AWSCDR_BKSCD_Values<DFSDM::CH0AWSCDR, 12, 4, ReadWriteMode, DFSDMCH0AWSCDRBase> ;
    using SCDT = DFSDM_CH0AWSCDR_SCDT_Values<DFSDM::CH0AWSCDR, 0, 8, ReadWriteMode, DFSDMCH0AWSCDRBase> ;
    using FieldValues = DFSDM_CH0AWSCDR_SCDT_Values<DFSDM::CH0AWSCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0AWSCDRPack  = Register<0x40017008, 32, ReadWriteMode, DFSDMCH0AWSCDRBase, T...> ;

  struct DFSDMCH0WDATRBase {} ;

  struct CH0WDATR : public RegisterBase<0x4001700C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CH0WDATR_WDATA_Values<DFSDM::CH0WDATR, 0, 16, ReadWriteMode, DFSDMCH0WDATRBase> ;
    using FieldValues = DFSDM_CH0WDATR_WDATA_Values<DFSDM::CH0WDATR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0WDATRPack  = Register<0x4001700C, 32, ReadWriteMode, DFSDMCH0WDATRBase, T...> ;

  struct DFSDMCH0DATINRBase {} ;

  struct CH0DATINR : public RegisterBase<0x40017010, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CH0DATINR_INDAT1_Values<DFSDM::CH0DATINR, 16, 16, ReadWriteMode, DFSDMCH0DATINRBase> ;
    using INDAT0 = DFSDM_CH0DATINR_INDAT0_Values<DFSDM::CH0DATINR, 0, 16, ReadWriteMode, DFSDMCH0DATINRBase> ;
    using FieldValues = DFSDM_CH0DATINR_INDAT0_Values<DFSDM::CH0DATINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0DATINRPack  = Register<0x40017010, 32, ReadWriteMode, DFSDMCH0DATINRBase, T...> ;

  struct DFSDMCH0DLYRBase {} ;

  struct CH0DLYR : public RegisterBase<0x40017014, 32, ReadWriteMode>
  {
    using PLSSKP = DFSDM_CH0DLYR_PLSSKP_Values<DFSDM::CH0DLYR, 0, 6, ReadWriteMode, DFSDMCH0DLYRBase> ;
    using FieldValues = DFSDM_CH0DLYR_PLSSKP_Values<DFSDM::CH0DLYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH0DLYRPack  = Register<0x40017014, 32, ReadWriteMode, DFSDMCH0DLYRBase, T...> ;

  struct DFSDMCH1CFGR1Base {} ;

  struct CH1CFGR1 : public RegisterBase<0x40017020, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CH1CFGR1_DATPACK_Values<DFSDM::CH1CFGR1, 14, 2, ReadWriteMode, DFSDMCH1CFGR1Base> ;
    using DATMPX = DFSDM_CH1CFGR1_DATMPX_Values<DFSDM::CH1CFGR1, 12, 2, ReadWriteMode, DFSDMCH1CFGR1Base> ;
    using CHINSEL = DFSDM_CH1CFGR1_CHINSEL_Values<DFSDM::CH1CFGR1, 8, 1, ReadWriteMode, DFSDMCH1CFGR1Base> ;
    using CHEN = DFSDM_CH1CFGR1_CHEN_Values<DFSDM::CH1CFGR1, 7, 1, ReadWriteMode, DFSDMCH1CFGR1Base> ;
    using CKABEN = DFSDM_CH1CFGR1_CKABEN_Values<DFSDM::CH1CFGR1, 6, 1, ReadWriteMode, DFSDMCH1CFGR1Base> ;
    using SCDEN = DFSDM_CH1CFGR1_SCDEN_Values<DFSDM::CH1CFGR1, 5, 1, ReadWriteMode, DFSDMCH1CFGR1Base> ;
    using SPICKSEL = DFSDM_CH1CFGR1_SPICKSEL_Values<DFSDM::CH1CFGR1, 2, 2, ReadWriteMode, DFSDMCH1CFGR1Base> ;
    using SITP = DFSDM_CH1CFGR1_SITP_Values<DFSDM::CH1CFGR1, 0, 2, ReadWriteMode, DFSDMCH1CFGR1Base> ;
    using FieldValues = DFSDM_CH1CFGR1_SITP_Values<DFSDM::CH1CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CFGR1Pack  = Register<0x40017020, 32, ReadWriteMode, DFSDMCH1CFGR1Base, T...> ;

  struct DFSDMCH1CFGR2Base {} ;

  struct CH1CFGR2 : public RegisterBase<0x40017024, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CH1CFGR2_OFFSET_Values<DFSDM::CH1CFGR2, 8, 24, ReadWriteMode, DFSDMCH1CFGR2Base> ;
    using DTRBS = DFSDM_CH1CFGR2_DTRBS_Values<DFSDM::CH1CFGR2, 3, 5, ReadWriteMode, DFSDMCH1CFGR2Base> ;
    using FieldValues = DFSDM_CH1CFGR2_DTRBS_Values<DFSDM::CH1CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1CFGR2Pack  = Register<0x40017024, 32, ReadWriteMode, DFSDMCH1CFGR2Base, T...> ;

  struct DFSDMCH1AWSCDRBase {} ;

  struct CH1AWSCDR : public RegisterBase<0x40017028, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_CH1AWSCDR_AWFORD_Values<DFSDM::CH1AWSCDR, 22, 2, ReadWriteMode, DFSDMCH1AWSCDRBase> ;
    using AWFOSR = DFSDM_CH1AWSCDR_AWFOSR_Values<DFSDM::CH1AWSCDR, 16, 5, ReadWriteMode, DFSDMCH1AWSCDRBase> ;
    using BKSCD = DFSDM_CH1AWSCDR_BKSCD_Values<DFSDM::CH1AWSCDR, 12, 4, ReadWriteMode, DFSDMCH1AWSCDRBase> ;
    using SCDT = DFSDM_CH1AWSCDR_SCDT_Values<DFSDM::CH1AWSCDR, 0, 8, ReadWriteMode, DFSDMCH1AWSCDRBase> ;
    using FieldValues = DFSDM_CH1AWSCDR_SCDT_Values<DFSDM::CH1AWSCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1AWSCDRPack  = Register<0x40017028, 32, ReadWriteMode, DFSDMCH1AWSCDRBase, T...> ;

  struct DFSDMCH1WDATRBase {} ;

  struct CH1WDATR : public RegisterBase<0x4001702C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CH1WDATR_WDATA_Values<DFSDM::CH1WDATR, 0, 16, ReadWriteMode, DFSDMCH1WDATRBase> ;
    using FieldValues = DFSDM_CH1WDATR_WDATA_Values<DFSDM::CH1WDATR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1WDATRPack  = Register<0x4001702C, 32, ReadWriteMode, DFSDMCH1WDATRBase, T...> ;

  struct DFSDMCH1DATINRBase {} ;

  struct CH1DATINR : public RegisterBase<0x40017030, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CH1DATINR_INDAT1_Values<DFSDM::CH1DATINR, 16, 16, ReadWriteMode, DFSDMCH1DATINRBase> ;
    using INDAT0 = DFSDM_CH1DATINR_INDAT0_Values<DFSDM::CH1DATINR, 0, 16, ReadWriteMode, DFSDMCH1DATINRBase> ;
    using FieldValues = DFSDM_CH1DATINR_INDAT0_Values<DFSDM::CH1DATINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1DATINRPack  = Register<0x40017030, 32, ReadWriteMode, DFSDMCH1DATINRBase, T...> ;

  struct DFSDMCH1DLYRBase {} ;

  struct CH1DLYR : public RegisterBase<0x40017034, 32, ReadWriteMode>
  {
    using PLSSKP = DFSDM_CH1DLYR_PLSSKP_Values<DFSDM::CH1DLYR, 0, 6, ReadWriteMode, DFSDMCH1DLYRBase> ;
    using FieldValues = DFSDM_CH1DLYR_PLSSKP_Values<DFSDM::CH1DLYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH1DLYRPack  = Register<0x40017034, 32, ReadWriteMode, DFSDMCH1DLYRBase, T...> ;

  struct DFSDMCH2CFGR1Base {} ;

  struct CH2CFGR1 : public RegisterBase<0x40017040, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CH2CFGR1_DATPACK_Values<DFSDM::CH2CFGR1, 14, 2, ReadWriteMode, DFSDMCH2CFGR1Base> ;
    using DATMPX = DFSDM_CH2CFGR1_DATMPX_Values<DFSDM::CH2CFGR1, 12, 2, ReadWriteMode, DFSDMCH2CFGR1Base> ;
    using CHINSEL = DFSDM_CH2CFGR1_CHINSEL_Values<DFSDM::CH2CFGR1, 8, 1, ReadWriteMode, DFSDMCH2CFGR1Base> ;
    using CHEN = DFSDM_CH2CFGR1_CHEN_Values<DFSDM::CH2CFGR1, 7, 1, ReadWriteMode, DFSDMCH2CFGR1Base> ;
    using CKABEN = DFSDM_CH2CFGR1_CKABEN_Values<DFSDM::CH2CFGR1, 6, 1, ReadWriteMode, DFSDMCH2CFGR1Base> ;
    using SCDEN = DFSDM_CH2CFGR1_SCDEN_Values<DFSDM::CH2CFGR1, 5, 1, ReadWriteMode, DFSDMCH2CFGR1Base> ;
    using SPICKSEL = DFSDM_CH2CFGR1_SPICKSEL_Values<DFSDM::CH2CFGR1, 2, 2, ReadWriteMode, DFSDMCH2CFGR1Base> ;
    using SITP = DFSDM_CH2CFGR1_SITP_Values<DFSDM::CH2CFGR1, 0, 2, ReadWriteMode, DFSDMCH2CFGR1Base> ;
    using FieldValues = DFSDM_CH2CFGR1_SITP_Values<DFSDM::CH2CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CFGR1Pack  = Register<0x40017040, 32, ReadWriteMode, DFSDMCH2CFGR1Base, T...> ;

  struct DFSDMCH2CFGR2Base {} ;

  struct CH2CFGR2 : public RegisterBase<0x40017044, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CH2CFGR2_OFFSET_Values<DFSDM::CH2CFGR2, 8, 24, ReadWriteMode, DFSDMCH2CFGR2Base> ;
    using DTRBS = DFSDM_CH2CFGR2_DTRBS_Values<DFSDM::CH2CFGR2, 3, 5, ReadWriteMode, DFSDMCH2CFGR2Base> ;
    using FieldValues = DFSDM_CH2CFGR2_DTRBS_Values<DFSDM::CH2CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2CFGR2Pack  = Register<0x40017044, 32, ReadWriteMode, DFSDMCH2CFGR2Base, T...> ;

  struct DFSDMCH2AWSCDRBase {} ;

  struct CH2AWSCDR : public RegisterBase<0x40017048, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_CH2AWSCDR_AWFORD_Values<DFSDM::CH2AWSCDR, 22, 2, ReadWriteMode, DFSDMCH2AWSCDRBase> ;
    using AWFOSR = DFSDM_CH2AWSCDR_AWFOSR_Values<DFSDM::CH2AWSCDR, 16, 5, ReadWriteMode, DFSDMCH2AWSCDRBase> ;
    using BKSCD = DFSDM_CH2AWSCDR_BKSCD_Values<DFSDM::CH2AWSCDR, 12, 4, ReadWriteMode, DFSDMCH2AWSCDRBase> ;
    using SCDT = DFSDM_CH2AWSCDR_SCDT_Values<DFSDM::CH2AWSCDR, 0, 8, ReadWriteMode, DFSDMCH2AWSCDRBase> ;
    using FieldValues = DFSDM_CH2AWSCDR_SCDT_Values<DFSDM::CH2AWSCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2AWSCDRPack  = Register<0x40017048, 32, ReadWriteMode, DFSDMCH2AWSCDRBase, T...> ;

  struct DFSDMCH2WDATRBase {} ;

  struct CH2WDATR : public RegisterBase<0x4001704C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CH2WDATR_WDATA_Values<DFSDM::CH2WDATR, 0, 16, ReadWriteMode, DFSDMCH2WDATRBase> ;
    using FieldValues = DFSDM_CH2WDATR_WDATA_Values<DFSDM::CH2WDATR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2WDATRPack  = Register<0x4001704C, 32, ReadWriteMode, DFSDMCH2WDATRBase, T...> ;

  struct DFSDMCH2DATINRBase {} ;

  struct CH2DATINR : public RegisterBase<0x40017050, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CH2DATINR_INDAT1_Values<DFSDM::CH2DATINR, 16, 16, ReadWriteMode, DFSDMCH2DATINRBase> ;
    using INDAT0 = DFSDM_CH2DATINR_INDAT0_Values<DFSDM::CH2DATINR, 0, 16, ReadWriteMode, DFSDMCH2DATINRBase> ;
    using FieldValues = DFSDM_CH2DATINR_INDAT0_Values<DFSDM::CH2DATINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2DATINRPack  = Register<0x40017050, 32, ReadWriteMode, DFSDMCH2DATINRBase, T...> ;

  struct DFSDMCH2DLYRBase {} ;

  struct CH2DLYR : public RegisterBase<0x40017054, 32, ReadWriteMode>
  {
    using PLSSKP = DFSDM_CH2DLYR_PLSSKP_Values<DFSDM::CH2DLYR, 0, 6, ReadWriteMode, DFSDMCH2DLYRBase> ;
    using FieldValues = DFSDM_CH2DLYR_PLSSKP_Values<DFSDM::CH2DLYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH2DLYRPack  = Register<0x40017054, 32, ReadWriteMode, DFSDMCH2DLYRBase, T...> ;

  struct DFSDMCH3CFGR1Base {} ;

  struct CH3CFGR1 : public RegisterBase<0x40017060, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CH3CFGR1_DATPACK_Values<DFSDM::CH3CFGR1, 14, 2, ReadWriteMode, DFSDMCH3CFGR1Base> ;
    using DATMPX = DFSDM_CH3CFGR1_DATMPX_Values<DFSDM::CH3CFGR1, 12, 2, ReadWriteMode, DFSDMCH3CFGR1Base> ;
    using CHINSEL = DFSDM_CH3CFGR1_CHINSEL_Values<DFSDM::CH3CFGR1, 8, 1, ReadWriteMode, DFSDMCH3CFGR1Base> ;
    using CHEN = DFSDM_CH3CFGR1_CHEN_Values<DFSDM::CH3CFGR1, 7, 1, ReadWriteMode, DFSDMCH3CFGR1Base> ;
    using CKABEN = DFSDM_CH3CFGR1_CKABEN_Values<DFSDM::CH3CFGR1, 6, 1, ReadWriteMode, DFSDMCH3CFGR1Base> ;
    using SCDEN = DFSDM_CH3CFGR1_SCDEN_Values<DFSDM::CH3CFGR1, 5, 1, ReadWriteMode, DFSDMCH3CFGR1Base> ;
    using SPICKSEL = DFSDM_CH3CFGR1_SPICKSEL_Values<DFSDM::CH3CFGR1, 2, 2, ReadWriteMode, DFSDMCH3CFGR1Base> ;
    using SITP = DFSDM_CH3CFGR1_SITP_Values<DFSDM::CH3CFGR1, 0, 2, ReadWriteMode, DFSDMCH3CFGR1Base> ;
    using FieldValues = DFSDM_CH3CFGR1_SITP_Values<DFSDM::CH3CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CFGR1Pack  = Register<0x40017060, 32, ReadWriteMode, DFSDMCH3CFGR1Base, T...> ;

  struct DFSDMCH3CFGR2Base {} ;

  struct CH3CFGR2 : public RegisterBase<0x40017064, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CH3CFGR2_OFFSET_Values<DFSDM::CH3CFGR2, 8, 24, ReadWriteMode, DFSDMCH3CFGR2Base> ;
    using DTRBS = DFSDM_CH3CFGR2_DTRBS_Values<DFSDM::CH3CFGR2, 3, 5, ReadWriteMode, DFSDMCH3CFGR2Base> ;
    using FieldValues = DFSDM_CH3CFGR2_DTRBS_Values<DFSDM::CH3CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3CFGR2Pack  = Register<0x40017064, 32, ReadWriteMode, DFSDMCH3CFGR2Base, T...> ;

  struct DFSDMCH3AWSCDRBase {} ;

  struct CH3AWSCDR : public RegisterBase<0x40017068, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_CH3AWSCDR_AWFORD_Values<DFSDM::CH3AWSCDR, 22, 2, ReadWriteMode, DFSDMCH3AWSCDRBase> ;
    using AWFOSR = DFSDM_CH3AWSCDR_AWFOSR_Values<DFSDM::CH3AWSCDR, 16, 5, ReadWriteMode, DFSDMCH3AWSCDRBase> ;
    using BKSCD = DFSDM_CH3AWSCDR_BKSCD_Values<DFSDM::CH3AWSCDR, 12, 4, ReadWriteMode, DFSDMCH3AWSCDRBase> ;
    using SCDT = DFSDM_CH3AWSCDR_SCDT_Values<DFSDM::CH3AWSCDR, 0, 8, ReadWriteMode, DFSDMCH3AWSCDRBase> ;
    using FieldValues = DFSDM_CH3AWSCDR_SCDT_Values<DFSDM::CH3AWSCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3AWSCDRPack  = Register<0x40017068, 32, ReadWriteMode, DFSDMCH3AWSCDRBase, T...> ;

  struct DFSDMCH3WDATRBase {} ;

  struct CH3WDATR : public RegisterBase<0x4001706C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CH3WDATR_WDATA_Values<DFSDM::CH3WDATR, 0, 16, ReadWriteMode, DFSDMCH3WDATRBase> ;
    using FieldValues = DFSDM_CH3WDATR_WDATA_Values<DFSDM::CH3WDATR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3WDATRPack  = Register<0x4001706C, 32, ReadWriteMode, DFSDMCH3WDATRBase, T...> ;

  struct DFSDMCH3DATINRBase {} ;

  struct CH3DATINR : public RegisterBase<0x40017070, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CH3DATINR_INDAT1_Values<DFSDM::CH3DATINR, 16, 16, ReadWriteMode, DFSDMCH3DATINRBase> ;
    using INDAT0 = DFSDM_CH3DATINR_INDAT0_Values<DFSDM::CH3DATINR, 0, 16, ReadWriteMode, DFSDMCH3DATINRBase> ;
    using FieldValues = DFSDM_CH3DATINR_INDAT0_Values<DFSDM::CH3DATINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3DATINRPack  = Register<0x40017070, 32, ReadWriteMode, DFSDMCH3DATINRBase, T...> ;

  struct DFSDMCH3DLYRBase {} ;

  struct CH3DLYR : public RegisterBase<0x40017074, 32, ReadWriteMode>
  {
    using PLSSKP = DFSDM_CH3DLYR_PLSSKP_Values<DFSDM::CH3DLYR, 0, 6, ReadWriteMode, DFSDMCH3DLYRBase> ;
    using FieldValues = DFSDM_CH3DLYR_PLSSKP_Values<DFSDM::CH3DLYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH3DLYRPack  = Register<0x40017074, 32, ReadWriteMode, DFSDMCH3DLYRBase, T...> ;

  struct DFSDMCH4CFGR1Base {} ;

  struct CH4CFGR1 : public RegisterBase<0x40017080, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CH4CFGR1_DATPACK_Values<DFSDM::CH4CFGR1, 14, 2, ReadWriteMode, DFSDMCH4CFGR1Base> ;
    using DATMPX = DFSDM_CH4CFGR1_DATMPX_Values<DFSDM::CH4CFGR1, 12, 2, ReadWriteMode, DFSDMCH4CFGR1Base> ;
    using CHINSEL = DFSDM_CH4CFGR1_CHINSEL_Values<DFSDM::CH4CFGR1, 8, 1, ReadWriteMode, DFSDMCH4CFGR1Base> ;
    using CHEN = DFSDM_CH4CFGR1_CHEN_Values<DFSDM::CH4CFGR1, 7, 1, ReadWriteMode, DFSDMCH4CFGR1Base> ;
    using CKABEN = DFSDM_CH4CFGR1_CKABEN_Values<DFSDM::CH4CFGR1, 6, 1, ReadWriteMode, DFSDMCH4CFGR1Base> ;
    using SCDEN = DFSDM_CH4CFGR1_SCDEN_Values<DFSDM::CH4CFGR1, 5, 1, ReadWriteMode, DFSDMCH4CFGR1Base> ;
    using SPICKSEL = DFSDM_CH4CFGR1_SPICKSEL_Values<DFSDM::CH4CFGR1, 2, 2, ReadWriteMode, DFSDMCH4CFGR1Base> ;
    using SITP = DFSDM_CH4CFGR1_SITP_Values<DFSDM::CH4CFGR1, 0, 2, ReadWriteMode, DFSDMCH4CFGR1Base> ;
    using FieldValues = DFSDM_CH4CFGR1_SITP_Values<DFSDM::CH4CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4CFGR1Pack  = Register<0x40017080, 32, ReadWriteMode, DFSDMCH4CFGR1Base, T...> ;

  struct DFSDMCH4CFGR2Base {} ;

  struct CH4CFGR2 : public RegisterBase<0x40017084, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CH4CFGR2_OFFSET_Values<DFSDM::CH4CFGR2, 8, 24, ReadWriteMode, DFSDMCH4CFGR2Base> ;
    using DTRBS = DFSDM_CH4CFGR2_DTRBS_Values<DFSDM::CH4CFGR2, 3, 5, ReadWriteMode, DFSDMCH4CFGR2Base> ;
    using FieldValues = DFSDM_CH4CFGR2_DTRBS_Values<DFSDM::CH4CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4CFGR2Pack  = Register<0x40017084, 32, ReadWriteMode, DFSDMCH4CFGR2Base, T...> ;

  struct DFSDMCH4AWSCDRBase {} ;

  struct CH4AWSCDR : public RegisterBase<0x40017088, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_CH4AWSCDR_AWFORD_Values<DFSDM::CH4AWSCDR, 22, 2, ReadWriteMode, DFSDMCH4AWSCDRBase> ;
    using AWFOSR = DFSDM_CH4AWSCDR_AWFOSR_Values<DFSDM::CH4AWSCDR, 16, 5, ReadWriteMode, DFSDMCH4AWSCDRBase> ;
    using BKSCD = DFSDM_CH4AWSCDR_BKSCD_Values<DFSDM::CH4AWSCDR, 12, 4, ReadWriteMode, DFSDMCH4AWSCDRBase> ;
    using SCDT = DFSDM_CH4AWSCDR_SCDT_Values<DFSDM::CH4AWSCDR, 0, 8, ReadWriteMode, DFSDMCH4AWSCDRBase> ;
    using FieldValues = DFSDM_CH4AWSCDR_SCDT_Values<DFSDM::CH4AWSCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4AWSCDRPack  = Register<0x40017088, 32, ReadWriteMode, DFSDMCH4AWSCDRBase, T...> ;

  struct DFSDMCH4WDATRBase {} ;

  struct CH4WDATR : public RegisterBase<0x4001708C, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CH4WDATR_WDATA_Values<DFSDM::CH4WDATR, 0, 16, ReadWriteMode, DFSDMCH4WDATRBase> ;
    using FieldValues = DFSDM_CH4WDATR_WDATA_Values<DFSDM::CH4WDATR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4WDATRPack  = Register<0x4001708C, 32, ReadWriteMode, DFSDMCH4WDATRBase, T...> ;

  struct DFSDMCH4DATINRBase {} ;

  struct CH4DATINR : public RegisterBase<0x40017090, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CH4DATINR_INDAT1_Values<DFSDM::CH4DATINR, 16, 16, ReadWriteMode, DFSDMCH4DATINRBase> ;
    using INDAT0 = DFSDM_CH4DATINR_INDAT0_Values<DFSDM::CH4DATINR, 0, 16, ReadWriteMode, DFSDMCH4DATINRBase> ;
    using FieldValues = DFSDM_CH4DATINR_INDAT0_Values<DFSDM::CH4DATINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4DATINRPack  = Register<0x40017090, 32, ReadWriteMode, DFSDMCH4DATINRBase, T...> ;

  struct DFSDMCH4DLYRBase {} ;

  struct CH4DLYR : public RegisterBase<0x40017094, 32, ReadWriteMode>
  {
    using PLSSKP = DFSDM_CH4DLYR_PLSSKP_Values<DFSDM::CH4DLYR, 0, 6, ReadWriteMode, DFSDMCH4DLYRBase> ;
    using FieldValues = DFSDM_CH4DLYR_PLSSKP_Values<DFSDM::CH4DLYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH4DLYRPack  = Register<0x40017094, 32, ReadWriteMode, DFSDMCH4DLYRBase, T...> ;

  struct DFSDMCH5CFGR1Base {} ;

  struct CH5CFGR1 : public RegisterBase<0x400170A0, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CH5CFGR1_DATPACK_Values<DFSDM::CH5CFGR1, 14, 2, ReadWriteMode, DFSDMCH5CFGR1Base> ;
    using DATMPX = DFSDM_CH5CFGR1_DATMPX_Values<DFSDM::CH5CFGR1, 12, 2, ReadWriteMode, DFSDMCH5CFGR1Base> ;
    using CHINSEL = DFSDM_CH5CFGR1_CHINSEL_Values<DFSDM::CH5CFGR1, 8, 1, ReadWriteMode, DFSDMCH5CFGR1Base> ;
    using CHEN = DFSDM_CH5CFGR1_CHEN_Values<DFSDM::CH5CFGR1, 7, 1, ReadWriteMode, DFSDMCH5CFGR1Base> ;
    using CKABEN = DFSDM_CH5CFGR1_CKABEN_Values<DFSDM::CH5CFGR1, 6, 1, ReadWriteMode, DFSDMCH5CFGR1Base> ;
    using SCDEN = DFSDM_CH5CFGR1_SCDEN_Values<DFSDM::CH5CFGR1, 5, 1, ReadWriteMode, DFSDMCH5CFGR1Base> ;
    using SPICKSEL = DFSDM_CH5CFGR1_SPICKSEL_Values<DFSDM::CH5CFGR1, 2, 2, ReadWriteMode, DFSDMCH5CFGR1Base> ;
    using SITP = DFSDM_CH5CFGR1_SITP_Values<DFSDM::CH5CFGR1, 0, 2, ReadWriteMode, DFSDMCH5CFGR1Base> ;
    using FieldValues = DFSDM_CH5CFGR1_SITP_Values<DFSDM::CH5CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5CFGR1Pack  = Register<0x400170A0, 32, ReadWriteMode, DFSDMCH5CFGR1Base, T...> ;

  struct DFSDMCH5CFGR2Base {} ;

  struct CH5CFGR2 : public RegisterBase<0x400170A4, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CH5CFGR2_OFFSET_Values<DFSDM::CH5CFGR2, 8, 24, ReadWriteMode, DFSDMCH5CFGR2Base> ;
    using DTRBS = DFSDM_CH5CFGR2_DTRBS_Values<DFSDM::CH5CFGR2, 3, 5, ReadWriteMode, DFSDMCH5CFGR2Base> ;
    using FieldValues = DFSDM_CH5CFGR2_DTRBS_Values<DFSDM::CH5CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5CFGR2Pack  = Register<0x400170A4, 32, ReadWriteMode, DFSDMCH5CFGR2Base, T...> ;

  struct DFSDMCH5AWSCDRBase {} ;

  struct CH5AWSCDR : public RegisterBase<0x400170A8, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_CH5AWSCDR_AWFORD_Values<DFSDM::CH5AWSCDR, 22, 2, ReadWriteMode, DFSDMCH5AWSCDRBase> ;
    using AWFOSR = DFSDM_CH5AWSCDR_AWFOSR_Values<DFSDM::CH5AWSCDR, 16, 5, ReadWriteMode, DFSDMCH5AWSCDRBase> ;
    using BKSCD = DFSDM_CH5AWSCDR_BKSCD_Values<DFSDM::CH5AWSCDR, 12, 4, ReadWriteMode, DFSDMCH5AWSCDRBase> ;
    using SCDT = DFSDM_CH5AWSCDR_SCDT_Values<DFSDM::CH5AWSCDR, 0, 8, ReadWriteMode, DFSDMCH5AWSCDRBase> ;
    using FieldValues = DFSDM_CH5AWSCDR_SCDT_Values<DFSDM::CH5AWSCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5AWSCDRPack  = Register<0x400170A8, 32, ReadWriteMode, DFSDMCH5AWSCDRBase, T...> ;

  struct DFSDMCH5WDATRBase {} ;

  struct CH5WDATR : public RegisterBase<0x400170AC, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CH5WDATR_WDATA_Values<DFSDM::CH5WDATR, 0, 16, ReadWriteMode, DFSDMCH5WDATRBase> ;
    using FieldValues = DFSDM_CH5WDATR_WDATA_Values<DFSDM::CH5WDATR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5WDATRPack  = Register<0x400170AC, 32, ReadWriteMode, DFSDMCH5WDATRBase, T...> ;

  struct DFSDMCH5DATINRBase {} ;

  struct CH5DATINR : public RegisterBase<0x400170B0, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CH5DATINR_INDAT1_Values<DFSDM::CH5DATINR, 16, 16, ReadWriteMode, DFSDMCH5DATINRBase> ;
    using INDAT0 = DFSDM_CH5DATINR_INDAT0_Values<DFSDM::CH5DATINR, 0, 16, ReadWriteMode, DFSDMCH5DATINRBase> ;
    using FieldValues = DFSDM_CH5DATINR_INDAT0_Values<DFSDM::CH5DATINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5DATINRPack  = Register<0x400170B0, 32, ReadWriteMode, DFSDMCH5DATINRBase, T...> ;

  struct DFSDMCH5DLYRBase {} ;

  struct CH5DLYR : public RegisterBase<0x400170B4, 32, ReadWriteMode>
  {
    using PLSSKP = DFSDM_CH5DLYR_PLSSKP_Values<DFSDM::CH5DLYR, 0, 6, ReadWriteMode, DFSDMCH5DLYRBase> ;
    using FieldValues = DFSDM_CH5DLYR_PLSSKP_Values<DFSDM::CH5DLYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH5DLYRPack  = Register<0x400170B4, 32, ReadWriteMode, DFSDMCH5DLYRBase, T...> ;

  struct DFSDMCH6CFGR1Base {} ;

  struct CH6CFGR1 : public RegisterBase<0x400170C0, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CH6CFGR1_DATPACK_Values<DFSDM::CH6CFGR1, 14, 2, ReadWriteMode, DFSDMCH6CFGR1Base> ;
    using DATMPX = DFSDM_CH6CFGR1_DATMPX_Values<DFSDM::CH6CFGR1, 12, 2, ReadWriteMode, DFSDMCH6CFGR1Base> ;
    using CHINSEL = DFSDM_CH6CFGR1_CHINSEL_Values<DFSDM::CH6CFGR1, 8, 1, ReadWriteMode, DFSDMCH6CFGR1Base> ;
    using CHEN = DFSDM_CH6CFGR1_CHEN_Values<DFSDM::CH6CFGR1, 7, 1, ReadWriteMode, DFSDMCH6CFGR1Base> ;
    using CKABEN = DFSDM_CH6CFGR1_CKABEN_Values<DFSDM::CH6CFGR1, 6, 1, ReadWriteMode, DFSDMCH6CFGR1Base> ;
    using SCDEN = DFSDM_CH6CFGR1_SCDEN_Values<DFSDM::CH6CFGR1, 5, 1, ReadWriteMode, DFSDMCH6CFGR1Base> ;
    using SPICKSEL = DFSDM_CH6CFGR1_SPICKSEL_Values<DFSDM::CH6CFGR1, 2, 2, ReadWriteMode, DFSDMCH6CFGR1Base> ;
    using SITP = DFSDM_CH6CFGR1_SITP_Values<DFSDM::CH6CFGR1, 0, 2, ReadWriteMode, DFSDMCH6CFGR1Base> ;
    using FieldValues = DFSDM_CH6CFGR1_SITP_Values<DFSDM::CH6CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6CFGR1Pack  = Register<0x400170C0, 32, ReadWriteMode, DFSDMCH6CFGR1Base, T...> ;

  struct DFSDMCH6CFGR2Base {} ;

  struct CH6CFGR2 : public RegisterBase<0x400170C4, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CH6CFGR2_OFFSET_Values<DFSDM::CH6CFGR2, 8, 24, ReadWriteMode, DFSDMCH6CFGR2Base> ;
    using DTRBS = DFSDM_CH6CFGR2_DTRBS_Values<DFSDM::CH6CFGR2, 3, 5, ReadWriteMode, DFSDMCH6CFGR2Base> ;
    using FieldValues = DFSDM_CH6CFGR2_DTRBS_Values<DFSDM::CH6CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6CFGR2Pack  = Register<0x400170C4, 32, ReadWriteMode, DFSDMCH6CFGR2Base, T...> ;

  struct DFSDMCH6AWSCDRBase {} ;

  struct CH6AWSCDR : public RegisterBase<0x400170C8, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_CH6AWSCDR_AWFORD_Values<DFSDM::CH6AWSCDR, 22, 2, ReadWriteMode, DFSDMCH6AWSCDRBase> ;
    using AWFOSR = DFSDM_CH6AWSCDR_AWFOSR_Values<DFSDM::CH6AWSCDR, 16, 5, ReadWriteMode, DFSDMCH6AWSCDRBase> ;
    using BKSCD = DFSDM_CH6AWSCDR_BKSCD_Values<DFSDM::CH6AWSCDR, 12, 4, ReadWriteMode, DFSDMCH6AWSCDRBase> ;
    using SCDT = DFSDM_CH6AWSCDR_SCDT_Values<DFSDM::CH6AWSCDR, 0, 8, ReadWriteMode, DFSDMCH6AWSCDRBase> ;
    using FieldValues = DFSDM_CH6AWSCDR_SCDT_Values<DFSDM::CH6AWSCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6AWSCDRPack  = Register<0x400170C8, 32, ReadWriteMode, DFSDMCH6AWSCDRBase, T...> ;

  struct DFSDMCH6WDATRBase {} ;

  struct CH6WDATR : public RegisterBase<0x400170CC, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CH6WDATR_WDATA_Values<DFSDM::CH6WDATR, 0, 16, ReadWriteMode, DFSDMCH6WDATRBase> ;
    using FieldValues = DFSDM_CH6WDATR_WDATA_Values<DFSDM::CH6WDATR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6WDATRPack  = Register<0x400170CC, 32, ReadWriteMode, DFSDMCH6WDATRBase, T...> ;

  struct DFSDMCH6DATINRBase {} ;

  struct CH6DATINR : public RegisterBase<0x400170D0, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CH6DATINR_INDAT1_Values<DFSDM::CH6DATINR, 16, 16, ReadWriteMode, DFSDMCH6DATINRBase> ;
    using INDAT0 = DFSDM_CH6DATINR_INDAT0_Values<DFSDM::CH6DATINR, 0, 16, ReadWriteMode, DFSDMCH6DATINRBase> ;
    using FieldValues = DFSDM_CH6DATINR_INDAT0_Values<DFSDM::CH6DATINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6DATINRPack  = Register<0x400170D0, 32, ReadWriteMode, DFSDMCH6DATINRBase, T...> ;

  struct DFSDMCH6DLYRBase {} ;

  struct CH6DLYR : public RegisterBase<0x400170D4, 32, ReadWriteMode>
  {
    using PLSSKP = DFSDM_CH6DLYR_PLSSKP_Values<DFSDM::CH6DLYR, 0, 6, ReadWriteMode, DFSDMCH6DLYRBase> ;
    using FieldValues = DFSDM_CH6DLYR_PLSSKP_Values<DFSDM::CH6DLYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH6DLYRPack  = Register<0x400170D4, 32, ReadWriteMode, DFSDMCH6DLYRBase, T...> ;

  struct DFSDMCH7CFGR1Base {} ;

  struct CH7CFGR1 : public RegisterBase<0x400170E0, 32, ReadWriteMode>
  {
    using DATPACK = DFSDM_CH7CFGR1_DATPACK_Values<DFSDM::CH7CFGR1, 14, 2, ReadWriteMode, DFSDMCH7CFGR1Base> ;
    using DATMPX = DFSDM_CH7CFGR1_DATMPX_Values<DFSDM::CH7CFGR1, 12, 2, ReadWriteMode, DFSDMCH7CFGR1Base> ;
    using CHINSEL = DFSDM_CH7CFGR1_CHINSEL_Values<DFSDM::CH7CFGR1, 8, 1, ReadWriteMode, DFSDMCH7CFGR1Base> ;
    using CHEN = DFSDM_CH7CFGR1_CHEN_Values<DFSDM::CH7CFGR1, 7, 1, ReadWriteMode, DFSDMCH7CFGR1Base> ;
    using CKABEN = DFSDM_CH7CFGR1_CKABEN_Values<DFSDM::CH7CFGR1, 6, 1, ReadWriteMode, DFSDMCH7CFGR1Base> ;
    using SCDEN = DFSDM_CH7CFGR1_SCDEN_Values<DFSDM::CH7CFGR1, 5, 1, ReadWriteMode, DFSDMCH7CFGR1Base> ;
    using SPICKSEL = DFSDM_CH7CFGR1_SPICKSEL_Values<DFSDM::CH7CFGR1, 2, 2, ReadWriteMode, DFSDMCH7CFGR1Base> ;
    using SITP = DFSDM_CH7CFGR1_SITP_Values<DFSDM::CH7CFGR1, 0, 2, ReadWriteMode, DFSDMCH7CFGR1Base> ;
    using FieldValues = DFSDM_CH7CFGR1_SITP_Values<DFSDM::CH7CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH7CFGR1Pack  = Register<0x400170E0, 32, ReadWriteMode, DFSDMCH7CFGR1Base, T...> ;

  struct DFSDMCH7CFGR2Base {} ;

  struct CH7CFGR2 : public RegisterBase<0x400170E4, 32, ReadWriteMode>
  {
    using OFFSET = DFSDM_CH7CFGR2_OFFSET_Values<DFSDM::CH7CFGR2, 8, 24, ReadWriteMode, DFSDMCH7CFGR2Base> ;
    using DTRBS = DFSDM_CH7CFGR2_DTRBS_Values<DFSDM::CH7CFGR2, 3, 5, ReadWriteMode, DFSDMCH7CFGR2Base> ;
    using FieldValues = DFSDM_CH7CFGR2_DTRBS_Values<DFSDM::CH7CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH7CFGR2Pack  = Register<0x400170E4, 32, ReadWriteMode, DFSDMCH7CFGR2Base, T...> ;

  struct DFSDMCH7AWSCDRBase {} ;

  struct CH7AWSCDR : public RegisterBase<0x400170E8, 32, ReadWriteMode>
  {
    using AWFORD = DFSDM_CH7AWSCDR_AWFORD_Values<DFSDM::CH7AWSCDR, 22, 2, ReadWriteMode, DFSDMCH7AWSCDRBase> ;
    using AWFOSR = DFSDM_CH7AWSCDR_AWFOSR_Values<DFSDM::CH7AWSCDR, 16, 5, ReadWriteMode, DFSDMCH7AWSCDRBase> ;
    using BKSCD = DFSDM_CH7AWSCDR_BKSCD_Values<DFSDM::CH7AWSCDR, 12, 4, ReadWriteMode, DFSDMCH7AWSCDRBase> ;
    using SCDT = DFSDM_CH7AWSCDR_SCDT_Values<DFSDM::CH7AWSCDR, 0, 8, ReadWriteMode, DFSDMCH7AWSCDRBase> ;
    using FieldValues = DFSDM_CH7AWSCDR_SCDT_Values<DFSDM::CH7AWSCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH7AWSCDRPack  = Register<0x400170E8, 32, ReadWriteMode, DFSDMCH7AWSCDRBase, T...> ;

  struct DFSDMCH7WDATRBase {} ;

  struct CH7WDATR : public RegisterBase<0x400170EC, 32, ReadWriteMode>
  {
    using WDATA = DFSDM_CH7WDATR_WDATA_Values<DFSDM::CH7WDATR, 0, 16, ReadWriteMode, DFSDMCH7WDATRBase> ;
    using FieldValues = DFSDM_CH7WDATR_WDATA_Values<DFSDM::CH7WDATR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH7WDATRPack  = Register<0x400170EC, 32, ReadWriteMode, DFSDMCH7WDATRBase, T...> ;

  struct DFSDMCH7DATINRBase {} ;

  struct CH7DATINR : public RegisterBase<0x400170F0, 32, ReadWriteMode>
  {
    using INDAT1 = DFSDM_CH7DATINR_INDAT1_Values<DFSDM::CH7DATINR, 16, 16, ReadWriteMode, DFSDMCH7DATINRBase> ;
    using INDAT0 = DFSDM_CH7DATINR_INDAT0_Values<DFSDM::CH7DATINR, 0, 16, ReadWriteMode, DFSDMCH7DATINRBase> ;
    using FieldValues = DFSDM_CH7DATINR_INDAT0_Values<DFSDM::CH7DATINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH7DATINRPack  = Register<0x400170F0, 32, ReadWriteMode, DFSDMCH7DATINRBase, T...> ;

  struct DFSDMCH7DLYRBase {} ;

  struct CH7DLYR : public RegisterBase<0x400170F4, 32, ReadWriteMode>
  {
    using PLSSKP = DFSDM_CH7DLYR_PLSSKP_Values<DFSDM::CH7DLYR, 0, 6, ReadWriteMode, DFSDMCH7DLYRBase> ;
    using FieldValues = DFSDM_CH7DLYR_PLSSKP_Values<DFSDM::CH7DLYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CH7DLYRPack  = Register<0x400170F4, 32, ReadWriteMode, DFSDMCH7DLYRBase, T...> ;

  struct DFSDMDFSDM_FLT0CR1Base {} ;

  struct DFSDM_FLT0CR1 : public RegisterBase<0x40017100, 32, ReadWriteMode>
  {
    using AWFSEL = DFSDM_DFSDM_FLT0CR1_AWFSEL_Values<DFSDM::DFSDM_FLT0CR1, 30, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using FAST = DFSDM_DFSDM_FLT0CR1_FAST_Values<DFSDM::DFSDM_FLT0CR1, 29, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using RCH = DFSDM_DFSDM_FLT0CR1_RCH_Values<DFSDM::DFSDM_FLT0CR1, 24, 3, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using RDMAEN = DFSDM_DFSDM_FLT0CR1_RDMAEN_Values<DFSDM::DFSDM_FLT0CR1, 21, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using RSYNC = DFSDM_DFSDM_FLT0CR1_RSYNC_Values<DFSDM::DFSDM_FLT0CR1, 19, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using RCONT = DFSDM_DFSDM_FLT0CR1_RCONT_Values<DFSDM::DFSDM_FLT0CR1, 18, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using RSWSTART = DFSDM_DFSDM_FLT0CR1_RSWSTART_Values<DFSDM::DFSDM_FLT0CR1, 17, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using JEXTEN = DFSDM_DFSDM_FLT0CR1_JEXTEN_Values<DFSDM::DFSDM_FLT0CR1, 13, 2, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using JEXTSEL = DFSDM_DFSDM_FLT0CR1_JEXTSEL_Values<DFSDM::DFSDM_FLT0CR1, 8, 3, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using JDMAEN = DFSDM_DFSDM_FLT0CR1_JDMAEN_Values<DFSDM::DFSDM_FLT0CR1, 5, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using JSCAN = DFSDM_DFSDM_FLT0CR1_JSCAN_Values<DFSDM::DFSDM_FLT0CR1, 4, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using JSYNC = DFSDM_DFSDM_FLT0CR1_JSYNC_Values<DFSDM::DFSDM_FLT0CR1, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using JSWSTART = DFSDM_DFSDM_FLT0CR1_JSWSTART_Values<DFSDM::DFSDM_FLT0CR1, 1, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using DFEN = DFSDM_DFSDM_FLT0CR1_DFEN_Values<DFSDM::DFSDM_FLT0CR1, 0, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base> ;
    using FieldValues = DFSDM_DFSDM_FLT0CR1_DFEN_Values<DFSDM::DFSDM_FLT0CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0CR1Pack  = Register<0x40017100, 32, ReadWriteMode, DFSDMDFSDM_FLT0CR1Base, T...> ;

  struct DFSDMDFSDM_FLT0CR2Base {} ;

  struct DFSDM_FLT0CR2 : public RegisterBase<0x40017104, 32, ReadWriteMode>
  {
    using AWDCH = DFSDM_DFSDM_FLT0CR2_AWDCH_Values<DFSDM::DFSDM_FLT0CR2, 16, 8, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using EXCH = DFSDM_DFSDM_FLT0CR2_EXCH_Values<DFSDM::DFSDM_FLT0CR2, 8, 8, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using CKABIE = DFSDM_DFSDM_FLT0CR2_CKABIE_Values<DFSDM::DFSDM_FLT0CR2, 6, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using SCDIE = DFSDM_DFSDM_FLT0CR2_SCDIE_Values<DFSDM::DFSDM_FLT0CR2, 5, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using AWDIE = DFSDM_DFSDM_FLT0CR2_AWDIE_Values<DFSDM::DFSDM_FLT0CR2, 4, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using ROVRIE = DFSDM_DFSDM_FLT0CR2_ROVRIE_Values<DFSDM::DFSDM_FLT0CR2, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using JOVRIE = DFSDM_DFSDM_FLT0CR2_JOVRIE_Values<DFSDM::DFSDM_FLT0CR2, 2, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using REOCIE = DFSDM_DFSDM_FLT0CR2_REOCIE_Values<DFSDM::DFSDM_FLT0CR2, 1, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using JEOCIE = DFSDM_DFSDM_FLT0CR2_JEOCIE_Values<DFSDM::DFSDM_FLT0CR2, 0, 1, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base> ;
    using FieldValues = DFSDM_DFSDM_FLT0CR2_JEOCIE_Values<DFSDM::DFSDM_FLT0CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0CR2Pack  = Register<0x40017104, 32, ReadWriteMode, DFSDMDFSDM_FLT0CR2Base, T...> ;

  struct DFSDMDFSDM_FLT0ISRBase {} ;

  struct DFSDM_FLT0ISR : public RegisterBase<0x40017108, 32, ReadMode>
  {
    using SCDF = DFSDM_DFSDM_FLT0ISR_SCDF_Values<DFSDM::DFSDM_FLT0ISR, 24, 8, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using CKABF = DFSDM_DFSDM_FLT0ISR_CKABF_Values<DFSDM::DFSDM_FLT0ISR, 16, 8, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using RCIP = DFSDM_DFSDM_FLT0ISR_RCIP_Values<DFSDM::DFSDM_FLT0ISR, 14, 1, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using JCIP = DFSDM_DFSDM_FLT0ISR_JCIP_Values<DFSDM::DFSDM_FLT0ISR, 13, 1, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using AWDF = DFSDM_DFSDM_FLT0ISR_AWDF_Values<DFSDM::DFSDM_FLT0ISR, 4, 1, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using ROVRF = DFSDM_DFSDM_FLT0ISR_ROVRF_Values<DFSDM::DFSDM_FLT0ISR, 3, 1, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using JOVRF = DFSDM_DFSDM_FLT0ISR_JOVRF_Values<DFSDM::DFSDM_FLT0ISR, 2, 1, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using REOCF = DFSDM_DFSDM_FLT0ISR_REOCF_Values<DFSDM::DFSDM_FLT0ISR, 1, 1, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using JEOCF = DFSDM_DFSDM_FLT0ISR_JEOCF_Values<DFSDM::DFSDM_FLT0ISR, 0, 1, ReadMode, DFSDMDFSDM_FLT0ISRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0ISR_JEOCF_Values<DFSDM::DFSDM_FLT0ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0ISRPack  = Register<0x40017108, 32, ReadMode, DFSDMDFSDM_FLT0ISRBase, T...> ;

  struct DFSDMDFSDM_FLT0ICRBase {} ;

  struct DFSDM_FLT0ICR : public RegisterBase<0x4001710C, 32, ReadWriteMode>
  {
    using CLRSCDF = DFSDM_DFSDM_FLT0ICR_CLRSCDF_Values<DFSDM::DFSDM_FLT0ICR, 24, 8, ReadWriteMode, DFSDMDFSDM_FLT0ICRBase> ;
    using CLRCKABF = DFSDM_DFSDM_FLT0ICR_CLRCKABF_Values<DFSDM::DFSDM_FLT0ICR, 16, 8, ReadWriteMode, DFSDMDFSDM_FLT0ICRBase> ;
    using CLRROVRF = DFSDM_DFSDM_FLT0ICR_CLRROVRF_Values<DFSDM::DFSDM_FLT0ICR, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT0ICRBase> ;
    using CLRJOVRF = DFSDM_DFSDM_FLT0ICR_CLRJOVRF_Values<DFSDM::DFSDM_FLT0ICR, 2, 1, ReadWriteMode, DFSDMDFSDM_FLT0ICRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0ICR_CLRJOVRF_Values<DFSDM::DFSDM_FLT0ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0ICRPack  = Register<0x4001710C, 32, ReadWriteMode, DFSDMDFSDM_FLT0ICRBase, T...> ;

  struct DFSDMDFSDM_FLT0JCHGRBase {} ;

  struct DFSDM_FLT0JCHGR : public RegisterBase<0x40017110, 32, ReadWriteMode>
  {
    using JCHG = DFSDM_DFSDM_FLT0JCHGR_JCHG_Values<DFSDM::DFSDM_FLT0JCHGR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT0JCHGRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0JCHGR_JCHG_Values<DFSDM::DFSDM_FLT0JCHGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0JCHGRPack  = Register<0x40017110, 32, ReadWriteMode, DFSDMDFSDM_FLT0JCHGRBase, T...> ;

  struct DFSDMDFSDM_FLT0FCRBase {} ;

  struct DFSDM_FLT0FCR : public RegisterBase<0x40017114, 32, ReadWriteMode>
  {
    using FORD = DFSDM_DFSDM_FLT0FCR_FORD_Values<DFSDM::DFSDM_FLT0FCR, 29, 3, ReadWriteMode, DFSDMDFSDM_FLT0FCRBase> ;
    using FOSR = DFSDM_DFSDM_FLT0FCR_FOSR_Values<DFSDM::DFSDM_FLT0FCR, 16, 10, ReadWriteMode, DFSDMDFSDM_FLT0FCRBase> ;
    using IOSR = DFSDM_DFSDM_FLT0FCR_IOSR_Values<DFSDM::DFSDM_FLT0FCR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT0FCRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0FCR_IOSR_Values<DFSDM::DFSDM_FLT0FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0FCRPack  = Register<0x40017114, 32, ReadWriteMode, DFSDMDFSDM_FLT0FCRBase, T...> ;

  struct DFSDMDFSDM_FLT0JDATARBase {} ;

  struct DFSDM_FLT0JDATAR : public RegisterBase<0x40017118, 32, ReadMode>
  {
    using JDATA = DFSDM_DFSDM_FLT0JDATAR_JDATA_Values<DFSDM::DFSDM_FLT0JDATAR, 8, 24, ReadMode, DFSDMDFSDM_FLT0JDATARBase> ;
    using JDATACH = DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values<DFSDM::DFSDM_FLT0JDATAR, 0, 3, ReadMode, DFSDMDFSDM_FLT0JDATARBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0JDATAR_JDATACH_Values<DFSDM::DFSDM_FLT0JDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0JDATARPack  = Register<0x40017118, 32, ReadMode, DFSDMDFSDM_FLT0JDATARBase, T...> ;

  struct DFSDMDFSDM_FLT0RDATARBase {} ;

  struct DFSDM_FLT0RDATAR : public RegisterBase<0x4001711C, 32, ReadMode>
  {
    using RDATA = DFSDM_DFSDM_FLT0RDATAR_RDATA_Values<DFSDM::DFSDM_FLT0RDATAR, 8, 24, ReadMode, DFSDMDFSDM_FLT0RDATARBase> ;
    using RPEND = DFSDM_DFSDM_FLT0RDATAR_RPEND_Values<DFSDM::DFSDM_FLT0RDATAR, 4, 1, ReadMode, DFSDMDFSDM_FLT0RDATARBase> ;
    using RDATACH = DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values<DFSDM::DFSDM_FLT0RDATAR, 0, 3, ReadMode, DFSDMDFSDM_FLT0RDATARBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0RDATAR_RDATACH_Values<DFSDM::DFSDM_FLT0RDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0RDATARPack  = Register<0x4001711C, 32, ReadMode, DFSDMDFSDM_FLT0RDATARBase, T...> ;

  struct DFSDMDFSDM_FLT0AWHTRBase {} ;

  struct DFSDM_FLT0AWHTR : public RegisterBase<0x40017120, 32, ReadWriteMode>
  {
    using AWHT = DFSDM_DFSDM_FLT0AWHTR_AWHT_Values<DFSDM::DFSDM_FLT0AWHTR, 8, 24, ReadWriteMode, DFSDMDFSDM_FLT0AWHTRBase> ;
    using BKAWH = DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values<DFSDM::DFSDM_FLT0AWHTR, 0, 4, ReadWriteMode, DFSDMDFSDM_FLT0AWHTRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0AWHTR_BKAWH_Values<DFSDM::DFSDM_FLT0AWHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0AWHTRPack  = Register<0x40017120, 32, ReadWriteMode, DFSDMDFSDM_FLT0AWHTRBase, T...> ;

  struct DFSDMDFSDM_FLT0AWLTRBase {} ;

  struct DFSDM_FLT0AWLTR : public RegisterBase<0x40017124, 32, ReadWriteMode>
  {
    using AWLT = DFSDM_DFSDM_FLT0AWLTR_AWLT_Values<DFSDM::DFSDM_FLT0AWLTR, 8, 24, ReadWriteMode, DFSDMDFSDM_FLT0AWLTRBase> ;
    using BKAWL = DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values<DFSDM::DFSDM_FLT0AWLTR, 0, 4, ReadWriteMode, DFSDMDFSDM_FLT0AWLTRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0AWLTR_BKAWL_Values<DFSDM::DFSDM_FLT0AWLTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0AWLTRPack  = Register<0x40017124, 32, ReadWriteMode, DFSDMDFSDM_FLT0AWLTRBase, T...> ;

  struct DFSDMDFSDM_FLT0AWSRBase {} ;

  struct DFSDM_FLT0AWSR : public RegisterBase<0x40017128, 32, ReadMode>
  {
    using AWHTF = DFSDM_DFSDM_FLT0AWSR_AWHTF_Values<DFSDM::DFSDM_FLT0AWSR, 8, 8, ReadMode, DFSDMDFSDM_FLT0AWSRBase> ;
    using AWLTF = DFSDM_DFSDM_FLT0AWSR_AWLTF_Values<DFSDM::DFSDM_FLT0AWSR, 0, 8, ReadMode, DFSDMDFSDM_FLT0AWSRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0AWSR_AWLTF_Values<DFSDM::DFSDM_FLT0AWSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0AWSRPack  = Register<0x40017128, 32, ReadMode, DFSDMDFSDM_FLT0AWSRBase, T...> ;

  struct DFSDMDFSDM_FLT0AWCFRBase {} ;

  struct DFSDM_FLT0AWCFR : public RegisterBase<0x4001712C, 32, ReadWriteMode>
  {
    using CLRAWHTF = DFSDM_DFSDM_FLT0AWCFR_CLRAWHTF_Values<DFSDM::DFSDM_FLT0AWCFR, 8, 8, ReadWriteMode, DFSDMDFSDM_FLT0AWCFRBase> ;
    using CLRAWLTF = DFSDM_DFSDM_FLT0AWCFR_CLRAWLTF_Values<DFSDM::DFSDM_FLT0AWCFR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT0AWCFRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0AWCFR_CLRAWLTF_Values<DFSDM::DFSDM_FLT0AWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0AWCFRPack  = Register<0x4001712C, 32, ReadWriteMode, DFSDMDFSDM_FLT0AWCFRBase, T...> ;

  struct DFSDMDFSDM_FLT0EXMAXBase {} ;

  struct DFSDM_FLT0EXMAX : public RegisterBase<0x40017130, 32, ReadMode>
  {
    using EXMAX = DFSDM_DFSDM_FLT0EXMAX_EXMAX_Values<DFSDM::DFSDM_FLT0EXMAX, 8, 24, ReadMode, DFSDMDFSDM_FLT0EXMAXBase> ;
    using EXMAXCH = DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values<DFSDM::DFSDM_FLT0EXMAX, 0, 3, ReadMode, DFSDMDFSDM_FLT0EXMAXBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0EXMAX_EXMAXCH_Values<DFSDM::DFSDM_FLT0EXMAX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0EXMAXPack  = Register<0x40017130, 32, ReadMode, DFSDMDFSDM_FLT0EXMAXBase, T...> ;

  struct DFSDMDFSDM_FLT0EXMINBase {} ;

  struct DFSDM_FLT0EXMIN : public RegisterBase<0x40017134, 32, ReadMode>
  {
    using EXMIN = DFSDM_DFSDM_FLT0EXMIN_EXMIN_Values<DFSDM::DFSDM_FLT0EXMIN, 8, 24, ReadMode, DFSDMDFSDM_FLT0EXMINBase> ;
    using EXMINCH = DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values<DFSDM::DFSDM_FLT0EXMIN, 0, 3, ReadMode, DFSDMDFSDM_FLT0EXMINBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0EXMIN_EXMINCH_Values<DFSDM::DFSDM_FLT0EXMIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0EXMINPack  = Register<0x40017134, 32, ReadMode, DFSDMDFSDM_FLT0EXMINBase, T...> ;

  struct DFSDMDFSDM_FLT0CNVTIMRBase {} ;

  struct DFSDM_FLT0CNVTIMR : public RegisterBase<0x40017138, 32, ReadMode>
  {
    using CNVCNT = DFSDM_DFSDM_FLT0CNVTIMR_CNVCNT_Values<DFSDM::DFSDM_FLT0CNVTIMR, 4, 28, ReadMode, DFSDMDFSDM_FLT0CNVTIMRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT0CNVTIMR_CNVCNT_Values<DFSDM::DFSDM_FLT0CNVTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT0CNVTIMRPack  = Register<0x40017138, 32, ReadMode, DFSDMDFSDM_FLT0CNVTIMRBase, T...> ;

  struct DFSDMDFSDM_FLT1CR1Base {} ;

  struct DFSDM_FLT1CR1 : public RegisterBase<0x40017180, 32, ReadWriteMode>
  {
    using AWFSEL = DFSDM_DFSDM_FLT1CR1_AWFSEL_Values<DFSDM::DFSDM_FLT1CR1, 30, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using FAST = DFSDM_DFSDM_FLT1CR1_FAST_Values<DFSDM::DFSDM_FLT1CR1, 29, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using RCH = DFSDM_DFSDM_FLT1CR1_RCH_Values<DFSDM::DFSDM_FLT1CR1, 24, 3, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using RDMAEN = DFSDM_DFSDM_FLT1CR1_RDMAEN_Values<DFSDM::DFSDM_FLT1CR1, 21, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using RSYNC = DFSDM_DFSDM_FLT1CR1_RSYNC_Values<DFSDM::DFSDM_FLT1CR1, 19, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using RCONT = DFSDM_DFSDM_FLT1CR1_RCONT_Values<DFSDM::DFSDM_FLT1CR1, 18, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using RSWSTART = DFSDM_DFSDM_FLT1CR1_RSWSTART_Values<DFSDM::DFSDM_FLT1CR1, 17, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using JEXTEN = DFSDM_DFSDM_FLT1CR1_JEXTEN_Values<DFSDM::DFSDM_FLT1CR1, 13, 2, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using JEXTSEL = DFSDM_DFSDM_FLT1CR1_JEXTSEL_Values<DFSDM::DFSDM_FLT1CR1, 8, 3, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using JDMAEN = DFSDM_DFSDM_FLT1CR1_JDMAEN_Values<DFSDM::DFSDM_FLT1CR1, 5, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using JSCAN = DFSDM_DFSDM_FLT1CR1_JSCAN_Values<DFSDM::DFSDM_FLT1CR1, 4, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using JSYNC = DFSDM_DFSDM_FLT1CR1_JSYNC_Values<DFSDM::DFSDM_FLT1CR1, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using JSWSTART = DFSDM_DFSDM_FLT1CR1_JSWSTART_Values<DFSDM::DFSDM_FLT1CR1, 1, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using DFEN = DFSDM_DFSDM_FLT1CR1_DFEN_Values<DFSDM::DFSDM_FLT1CR1, 0, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base> ;
    using FieldValues = DFSDM_DFSDM_FLT1CR1_DFEN_Values<DFSDM::DFSDM_FLT1CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1CR1Pack  = Register<0x40017180, 32, ReadWriteMode, DFSDMDFSDM_FLT1CR1Base, T...> ;

  struct DFSDMDFSDM_FLT1CR2Base {} ;

  struct DFSDM_FLT1CR2 : public RegisterBase<0x40017184, 32, ReadWriteMode>
  {
    using AWDCH = DFSDM_DFSDM_FLT1CR2_AWDCH_Values<DFSDM::DFSDM_FLT1CR2, 16, 8, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using EXCH = DFSDM_DFSDM_FLT1CR2_EXCH_Values<DFSDM::DFSDM_FLT1CR2, 8, 8, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using CKABIE = DFSDM_DFSDM_FLT1CR2_CKABIE_Values<DFSDM::DFSDM_FLT1CR2, 6, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using SCDIE = DFSDM_DFSDM_FLT1CR2_SCDIE_Values<DFSDM::DFSDM_FLT1CR2, 5, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using AWDIE = DFSDM_DFSDM_FLT1CR2_AWDIE_Values<DFSDM::DFSDM_FLT1CR2, 4, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using ROVRIE = DFSDM_DFSDM_FLT1CR2_ROVRIE_Values<DFSDM::DFSDM_FLT1CR2, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using JOVRIE = DFSDM_DFSDM_FLT1CR2_JOVRIE_Values<DFSDM::DFSDM_FLT1CR2, 2, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using REOCIE = DFSDM_DFSDM_FLT1CR2_REOCIE_Values<DFSDM::DFSDM_FLT1CR2, 1, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using JEOCIE = DFSDM_DFSDM_FLT1CR2_JEOCIE_Values<DFSDM::DFSDM_FLT1CR2, 0, 1, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base> ;
    using FieldValues = DFSDM_DFSDM_FLT1CR2_JEOCIE_Values<DFSDM::DFSDM_FLT1CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1CR2Pack  = Register<0x40017184, 32, ReadWriteMode, DFSDMDFSDM_FLT1CR2Base, T...> ;

  struct DFSDMDFSDM_FLT1ISRBase {} ;

  struct DFSDM_FLT1ISR : public RegisterBase<0x40017188, 32, ReadMode>
  {
    using SCDF = DFSDM_DFSDM_FLT1ISR_SCDF_Values<DFSDM::DFSDM_FLT1ISR, 24, 8, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using CKABF = DFSDM_DFSDM_FLT1ISR_CKABF_Values<DFSDM::DFSDM_FLT1ISR, 16, 8, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using RCIP = DFSDM_DFSDM_FLT1ISR_RCIP_Values<DFSDM::DFSDM_FLT1ISR, 14, 1, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using JCIP = DFSDM_DFSDM_FLT1ISR_JCIP_Values<DFSDM::DFSDM_FLT1ISR, 13, 1, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using AWDF = DFSDM_DFSDM_FLT1ISR_AWDF_Values<DFSDM::DFSDM_FLT1ISR, 4, 1, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using ROVRF = DFSDM_DFSDM_FLT1ISR_ROVRF_Values<DFSDM::DFSDM_FLT1ISR, 3, 1, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using JOVRF = DFSDM_DFSDM_FLT1ISR_JOVRF_Values<DFSDM::DFSDM_FLT1ISR, 2, 1, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using REOCF = DFSDM_DFSDM_FLT1ISR_REOCF_Values<DFSDM::DFSDM_FLT1ISR, 1, 1, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using JEOCF = DFSDM_DFSDM_FLT1ISR_JEOCF_Values<DFSDM::DFSDM_FLT1ISR, 0, 1, ReadMode, DFSDMDFSDM_FLT1ISRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1ISR_JEOCF_Values<DFSDM::DFSDM_FLT1ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1ISRPack  = Register<0x40017188, 32, ReadMode, DFSDMDFSDM_FLT1ISRBase, T...> ;

  struct DFSDMDFSDM_FLT1ICRBase {} ;

  struct DFSDM_FLT1ICR : public RegisterBase<0x4001718C, 32, ReadWriteMode>
  {
    using CLRSCDF = DFSDM_DFSDM_FLT1ICR_CLRSCDF_Values<DFSDM::DFSDM_FLT1ICR, 24, 8, ReadWriteMode, DFSDMDFSDM_FLT1ICRBase> ;
    using CLRCKABF = DFSDM_DFSDM_FLT1ICR_CLRCKABF_Values<DFSDM::DFSDM_FLT1ICR, 16, 8, ReadWriteMode, DFSDMDFSDM_FLT1ICRBase> ;
    using CLRROVRF = DFSDM_DFSDM_FLT1ICR_CLRROVRF_Values<DFSDM::DFSDM_FLT1ICR, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT1ICRBase> ;
    using CLRJOVRF = DFSDM_DFSDM_FLT1ICR_CLRJOVRF_Values<DFSDM::DFSDM_FLT1ICR, 2, 1, ReadWriteMode, DFSDMDFSDM_FLT1ICRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1ICR_CLRJOVRF_Values<DFSDM::DFSDM_FLT1ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1ICRPack  = Register<0x4001718C, 32, ReadWriteMode, DFSDMDFSDM_FLT1ICRBase, T...> ;

  struct DFSDMDFSDM_FLT1CHGRBase {} ;

  struct DFSDM_FLT1CHGR : public RegisterBase<0x40017190, 32, ReadWriteMode>
  {
    using JCHG = DFSDM_DFSDM_FLT1CHGR_JCHG_Values<DFSDM::DFSDM_FLT1CHGR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT1CHGRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1CHGR_JCHG_Values<DFSDM::DFSDM_FLT1CHGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1CHGRPack  = Register<0x40017190, 32, ReadWriteMode, DFSDMDFSDM_FLT1CHGRBase, T...> ;

  struct DFSDMDFSDM_FLT1FCRBase {} ;

  struct DFSDM_FLT1FCR : public RegisterBase<0x40017194, 32, ReadWriteMode>
  {
    using FORD = DFSDM_DFSDM_FLT1FCR_FORD_Values<DFSDM::DFSDM_FLT1FCR, 29, 3, ReadWriteMode, DFSDMDFSDM_FLT1FCRBase> ;
    using FOSR = DFSDM_DFSDM_FLT1FCR_FOSR_Values<DFSDM::DFSDM_FLT1FCR, 16, 10, ReadWriteMode, DFSDMDFSDM_FLT1FCRBase> ;
    using IOSR = DFSDM_DFSDM_FLT1FCR_IOSR_Values<DFSDM::DFSDM_FLT1FCR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT1FCRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1FCR_IOSR_Values<DFSDM::DFSDM_FLT1FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1FCRPack  = Register<0x40017194, 32, ReadWriteMode, DFSDMDFSDM_FLT1FCRBase, T...> ;

  struct DFSDMDFSDM_FLT1JDATARBase {} ;

  struct DFSDM_FLT1JDATAR : public RegisterBase<0x40017198, 32, ReadMode>
  {
    using JDATA = DFSDM_DFSDM_FLT1JDATAR_JDATA_Values<DFSDM::DFSDM_FLT1JDATAR, 8, 24, ReadMode, DFSDMDFSDM_FLT1JDATARBase> ;
    using JDATACH = DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values<DFSDM::DFSDM_FLT1JDATAR, 0, 3, ReadMode, DFSDMDFSDM_FLT1JDATARBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1JDATAR_JDATACH_Values<DFSDM::DFSDM_FLT1JDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1JDATARPack  = Register<0x40017198, 32, ReadMode, DFSDMDFSDM_FLT1JDATARBase, T...> ;

  struct DFSDMDFSDM_FLT1RDATARBase {} ;

  struct DFSDM_FLT1RDATAR : public RegisterBase<0x4001719C, 32, ReadMode>
  {
    using RDATA = DFSDM_DFSDM_FLT1RDATAR_RDATA_Values<DFSDM::DFSDM_FLT1RDATAR, 8, 24, ReadMode, DFSDMDFSDM_FLT1RDATARBase> ;
    using RPEND = DFSDM_DFSDM_FLT1RDATAR_RPEND_Values<DFSDM::DFSDM_FLT1RDATAR, 4, 1, ReadMode, DFSDMDFSDM_FLT1RDATARBase> ;
    using RDATACH = DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values<DFSDM::DFSDM_FLT1RDATAR, 0, 3, ReadMode, DFSDMDFSDM_FLT1RDATARBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1RDATAR_RDATACH_Values<DFSDM::DFSDM_FLT1RDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1RDATARPack  = Register<0x4001719C, 32, ReadMode, DFSDMDFSDM_FLT1RDATARBase, T...> ;

  struct DFSDMDFSDM_FLT1AWHTRBase {} ;

  struct DFSDM_FLT1AWHTR : public RegisterBase<0x400171A0, 32, ReadWriteMode>
  {
    using AWHT = DFSDM_DFSDM_FLT1AWHTR_AWHT_Values<DFSDM::DFSDM_FLT1AWHTR, 8, 24, ReadWriteMode, DFSDMDFSDM_FLT1AWHTRBase> ;
    using BKAWH = DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values<DFSDM::DFSDM_FLT1AWHTR, 0, 4, ReadWriteMode, DFSDMDFSDM_FLT1AWHTRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1AWHTR_BKAWH_Values<DFSDM::DFSDM_FLT1AWHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1AWHTRPack  = Register<0x400171A0, 32, ReadWriteMode, DFSDMDFSDM_FLT1AWHTRBase, T...> ;

  struct DFSDMDFSDM_FLT1AWLTRBase {} ;

  struct DFSDM_FLT1AWLTR : public RegisterBase<0x400171A4, 32, ReadWriteMode>
  {
    using AWLT = DFSDM_DFSDM_FLT1AWLTR_AWLT_Values<DFSDM::DFSDM_FLT1AWLTR, 8, 24, ReadWriteMode, DFSDMDFSDM_FLT1AWLTRBase> ;
    using BKAWL = DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values<DFSDM::DFSDM_FLT1AWLTR, 0, 4, ReadWriteMode, DFSDMDFSDM_FLT1AWLTRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1AWLTR_BKAWL_Values<DFSDM::DFSDM_FLT1AWLTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1AWLTRPack  = Register<0x400171A4, 32, ReadWriteMode, DFSDMDFSDM_FLT1AWLTRBase, T...> ;

  struct DFSDMDFSDM_FLT1AWSRBase {} ;

  struct DFSDM_FLT1AWSR : public RegisterBase<0x400171A8, 32, ReadMode>
  {
    using AWHTF = DFSDM_DFSDM_FLT1AWSR_AWHTF_Values<DFSDM::DFSDM_FLT1AWSR, 8, 8, ReadMode, DFSDMDFSDM_FLT1AWSRBase> ;
    using AWLTF = DFSDM_DFSDM_FLT1AWSR_AWLTF_Values<DFSDM::DFSDM_FLT1AWSR, 0, 8, ReadMode, DFSDMDFSDM_FLT1AWSRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1AWSR_AWLTF_Values<DFSDM::DFSDM_FLT1AWSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1AWSRPack  = Register<0x400171A8, 32, ReadMode, DFSDMDFSDM_FLT1AWSRBase, T...> ;

  struct DFSDMDFSDM_FLT1AWCFRBase {} ;

  struct DFSDM_FLT1AWCFR : public RegisterBase<0x400171AC, 32, ReadWriteMode>
  {
    using CLRAWHTF = DFSDM_DFSDM_FLT1AWCFR_CLRAWHTF_Values<DFSDM::DFSDM_FLT1AWCFR, 8, 8, ReadWriteMode, DFSDMDFSDM_FLT1AWCFRBase> ;
    using CLRAWLTF = DFSDM_DFSDM_FLT1AWCFR_CLRAWLTF_Values<DFSDM::DFSDM_FLT1AWCFR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT1AWCFRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1AWCFR_CLRAWLTF_Values<DFSDM::DFSDM_FLT1AWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1AWCFRPack  = Register<0x400171AC, 32, ReadWriteMode, DFSDMDFSDM_FLT1AWCFRBase, T...> ;

  struct DFSDMDFSDM_FLT1EXMAXBase {} ;

  struct DFSDM_FLT1EXMAX : public RegisterBase<0x400171B0, 32, ReadMode>
  {
    using EXMAX = DFSDM_DFSDM_FLT1EXMAX_EXMAX_Values<DFSDM::DFSDM_FLT1EXMAX, 8, 24, ReadMode, DFSDMDFSDM_FLT1EXMAXBase> ;
    using EXMAXCH = DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values<DFSDM::DFSDM_FLT1EXMAX, 0, 3, ReadMode, DFSDMDFSDM_FLT1EXMAXBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1EXMAX_EXMAXCH_Values<DFSDM::DFSDM_FLT1EXMAX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1EXMAXPack  = Register<0x400171B0, 32, ReadMode, DFSDMDFSDM_FLT1EXMAXBase, T...> ;

  struct DFSDMDFSDM_FLT1EXMINBase {} ;

  struct DFSDM_FLT1EXMIN : public RegisterBase<0x400171B4, 32, ReadMode>
  {
    using EXMIN = DFSDM_DFSDM_FLT1EXMIN_EXMIN_Values<DFSDM::DFSDM_FLT1EXMIN, 8, 24, ReadMode, DFSDMDFSDM_FLT1EXMINBase> ;
    using EXMINCH = DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values<DFSDM::DFSDM_FLT1EXMIN, 0, 3, ReadMode, DFSDMDFSDM_FLT1EXMINBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1EXMIN_EXMINCH_Values<DFSDM::DFSDM_FLT1EXMIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1EXMINPack  = Register<0x400171B4, 32, ReadMode, DFSDMDFSDM_FLT1EXMINBase, T...> ;

  struct DFSDMDFSDM_FLT1CNVTIMRBase {} ;

  struct DFSDM_FLT1CNVTIMR : public RegisterBase<0x400171B8, 32, ReadMode>
  {
    using CNVCNT = DFSDM_DFSDM_FLT1CNVTIMR_CNVCNT_Values<DFSDM::DFSDM_FLT1CNVTIMR, 4, 28, ReadMode, DFSDMDFSDM_FLT1CNVTIMRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT1CNVTIMR_CNVCNT_Values<DFSDM::DFSDM_FLT1CNVTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT1CNVTIMRPack  = Register<0x400171B8, 32, ReadMode, DFSDMDFSDM_FLT1CNVTIMRBase, T...> ;

  struct DFSDMDFSDM_FLT2CR1Base {} ;

  struct DFSDM_FLT2CR1 : public RegisterBase<0x40017200, 32, ReadWriteMode>
  {
    using AWFSEL = DFSDM_DFSDM_FLT2CR1_AWFSEL_Values<DFSDM::DFSDM_FLT2CR1, 30, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using FAST = DFSDM_DFSDM_FLT2CR1_FAST_Values<DFSDM::DFSDM_FLT2CR1, 29, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using RCH = DFSDM_DFSDM_FLT2CR1_RCH_Values<DFSDM::DFSDM_FLT2CR1, 24, 3, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using RDMAEN = DFSDM_DFSDM_FLT2CR1_RDMAEN_Values<DFSDM::DFSDM_FLT2CR1, 21, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using RSYNC = DFSDM_DFSDM_FLT2CR1_RSYNC_Values<DFSDM::DFSDM_FLT2CR1, 19, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using RCONT = DFSDM_DFSDM_FLT2CR1_RCONT_Values<DFSDM::DFSDM_FLT2CR1, 18, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using RSWSTART = DFSDM_DFSDM_FLT2CR1_RSWSTART_Values<DFSDM::DFSDM_FLT2CR1, 17, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using JEXTEN = DFSDM_DFSDM_FLT2CR1_JEXTEN_Values<DFSDM::DFSDM_FLT2CR1, 13, 2, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using JEXTSEL = DFSDM_DFSDM_FLT2CR1_JEXTSEL_Values<DFSDM::DFSDM_FLT2CR1, 8, 3, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using JDMAEN = DFSDM_DFSDM_FLT2CR1_JDMAEN_Values<DFSDM::DFSDM_FLT2CR1, 5, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using JSCAN = DFSDM_DFSDM_FLT2CR1_JSCAN_Values<DFSDM::DFSDM_FLT2CR1, 4, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using JSYNC = DFSDM_DFSDM_FLT2CR1_JSYNC_Values<DFSDM::DFSDM_FLT2CR1, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using JSWSTART = DFSDM_DFSDM_FLT2CR1_JSWSTART_Values<DFSDM::DFSDM_FLT2CR1, 1, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using DFEN = DFSDM_DFSDM_FLT2CR1_DFEN_Values<DFSDM::DFSDM_FLT2CR1, 0, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base> ;
    using FieldValues = DFSDM_DFSDM_FLT2CR1_DFEN_Values<DFSDM::DFSDM_FLT2CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2CR1Pack  = Register<0x40017200, 32, ReadWriteMode, DFSDMDFSDM_FLT2CR1Base, T...> ;

  struct DFSDMDFSDM_FLT2CR2Base {} ;

  struct DFSDM_FLT2CR2 : public RegisterBase<0x40017204, 32, ReadWriteMode>
  {
    using AWDCH = DFSDM_DFSDM_FLT2CR2_AWDCH_Values<DFSDM::DFSDM_FLT2CR2, 16, 8, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using EXCH = DFSDM_DFSDM_FLT2CR2_EXCH_Values<DFSDM::DFSDM_FLT2CR2, 8, 8, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using CKABIE = DFSDM_DFSDM_FLT2CR2_CKABIE_Values<DFSDM::DFSDM_FLT2CR2, 6, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using SCDIE = DFSDM_DFSDM_FLT2CR2_SCDIE_Values<DFSDM::DFSDM_FLT2CR2, 5, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using AWDIE = DFSDM_DFSDM_FLT2CR2_AWDIE_Values<DFSDM::DFSDM_FLT2CR2, 4, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using ROVRIE = DFSDM_DFSDM_FLT2CR2_ROVRIE_Values<DFSDM::DFSDM_FLT2CR2, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using JOVRIE = DFSDM_DFSDM_FLT2CR2_JOVRIE_Values<DFSDM::DFSDM_FLT2CR2, 2, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using REOCIE = DFSDM_DFSDM_FLT2CR2_REOCIE_Values<DFSDM::DFSDM_FLT2CR2, 1, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using JEOCIE = DFSDM_DFSDM_FLT2CR2_JEOCIE_Values<DFSDM::DFSDM_FLT2CR2, 0, 1, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base> ;
    using FieldValues = DFSDM_DFSDM_FLT2CR2_JEOCIE_Values<DFSDM::DFSDM_FLT2CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2CR2Pack  = Register<0x40017204, 32, ReadWriteMode, DFSDMDFSDM_FLT2CR2Base, T...> ;

  struct DFSDMDFSDM_FLT2ISRBase {} ;

  struct DFSDM_FLT2ISR : public RegisterBase<0x40017208, 32, ReadMode>
  {
    using SCDF = DFSDM_DFSDM_FLT2ISR_SCDF_Values<DFSDM::DFSDM_FLT2ISR, 24, 8, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using CKABF = DFSDM_DFSDM_FLT2ISR_CKABF_Values<DFSDM::DFSDM_FLT2ISR, 16, 8, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using RCIP = DFSDM_DFSDM_FLT2ISR_RCIP_Values<DFSDM::DFSDM_FLT2ISR, 14, 1, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using JCIP = DFSDM_DFSDM_FLT2ISR_JCIP_Values<DFSDM::DFSDM_FLT2ISR, 13, 1, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using AWDF = DFSDM_DFSDM_FLT2ISR_AWDF_Values<DFSDM::DFSDM_FLT2ISR, 4, 1, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using ROVRF = DFSDM_DFSDM_FLT2ISR_ROVRF_Values<DFSDM::DFSDM_FLT2ISR, 3, 1, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using JOVRF = DFSDM_DFSDM_FLT2ISR_JOVRF_Values<DFSDM::DFSDM_FLT2ISR, 2, 1, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using REOCF = DFSDM_DFSDM_FLT2ISR_REOCF_Values<DFSDM::DFSDM_FLT2ISR, 1, 1, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using JEOCF = DFSDM_DFSDM_FLT2ISR_JEOCF_Values<DFSDM::DFSDM_FLT2ISR, 0, 1, ReadMode, DFSDMDFSDM_FLT2ISRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2ISR_JEOCF_Values<DFSDM::DFSDM_FLT2ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2ISRPack  = Register<0x40017208, 32, ReadMode, DFSDMDFSDM_FLT2ISRBase, T...> ;

  struct DFSDMDFSDM_FLT2ICRBase {} ;

  struct DFSDM_FLT2ICR : public RegisterBase<0x4001720C, 32, ReadWriteMode>
  {
    using CLRSCDF = DFSDM_DFSDM_FLT2ICR_CLRSCDF_Values<DFSDM::DFSDM_FLT2ICR, 24, 8, ReadWriteMode, DFSDMDFSDM_FLT2ICRBase> ;
    using CLRCKABF = DFSDM_DFSDM_FLT2ICR_CLRCKABF_Values<DFSDM::DFSDM_FLT2ICR, 16, 8, ReadWriteMode, DFSDMDFSDM_FLT2ICRBase> ;
    using CLRROVRF = DFSDM_DFSDM_FLT2ICR_CLRROVRF_Values<DFSDM::DFSDM_FLT2ICR, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT2ICRBase> ;
    using CLRJOVRF = DFSDM_DFSDM_FLT2ICR_CLRJOVRF_Values<DFSDM::DFSDM_FLT2ICR, 2, 1, ReadWriteMode, DFSDMDFSDM_FLT2ICRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2ICR_CLRJOVRF_Values<DFSDM::DFSDM_FLT2ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2ICRPack  = Register<0x4001720C, 32, ReadWriteMode, DFSDMDFSDM_FLT2ICRBase, T...> ;

  struct DFSDMDFSDM_FLT2JCHGRBase {} ;

  struct DFSDM_FLT2JCHGR : public RegisterBase<0x40017210, 32, ReadWriteMode>
  {
    using JCHG = DFSDM_DFSDM_FLT2JCHGR_JCHG_Values<DFSDM::DFSDM_FLT2JCHGR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT2JCHGRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2JCHGR_JCHG_Values<DFSDM::DFSDM_FLT2JCHGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2JCHGRPack  = Register<0x40017210, 32, ReadWriteMode, DFSDMDFSDM_FLT2JCHGRBase, T...> ;

  struct DFSDMDFSDM_FLT2FCRBase {} ;

  struct DFSDM_FLT2FCR : public RegisterBase<0x40017214, 32, ReadWriteMode>
  {
    using FORD = DFSDM_DFSDM_FLT2FCR_FORD_Values<DFSDM::DFSDM_FLT2FCR, 29, 3, ReadWriteMode, DFSDMDFSDM_FLT2FCRBase> ;
    using FOSR = DFSDM_DFSDM_FLT2FCR_FOSR_Values<DFSDM::DFSDM_FLT2FCR, 16, 10, ReadWriteMode, DFSDMDFSDM_FLT2FCRBase> ;
    using IOSR = DFSDM_DFSDM_FLT2FCR_IOSR_Values<DFSDM::DFSDM_FLT2FCR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT2FCRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2FCR_IOSR_Values<DFSDM::DFSDM_FLT2FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2FCRPack  = Register<0x40017214, 32, ReadWriteMode, DFSDMDFSDM_FLT2FCRBase, T...> ;

  struct DFSDMDFSDM_FLT2JDATARBase {} ;

  struct DFSDM_FLT2JDATAR : public RegisterBase<0x40017218, 32, ReadMode>
  {
    using JDATA = DFSDM_DFSDM_FLT2JDATAR_JDATA_Values<DFSDM::DFSDM_FLT2JDATAR, 8, 24, ReadMode, DFSDMDFSDM_FLT2JDATARBase> ;
    using JDATACH = DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values<DFSDM::DFSDM_FLT2JDATAR, 0, 3, ReadMode, DFSDMDFSDM_FLT2JDATARBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2JDATAR_JDATACH_Values<DFSDM::DFSDM_FLT2JDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2JDATARPack  = Register<0x40017218, 32, ReadMode, DFSDMDFSDM_FLT2JDATARBase, T...> ;

  struct DFSDMDFSDM_FLT2RDATARBase {} ;

  struct DFSDM_FLT2RDATAR : public RegisterBase<0x4001721C, 32, ReadMode>
  {
    using RDATA = DFSDM_DFSDM_FLT2RDATAR_RDATA_Values<DFSDM::DFSDM_FLT2RDATAR, 8, 24, ReadMode, DFSDMDFSDM_FLT2RDATARBase> ;
    using RPEND = DFSDM_DFSDM_FLT2RDATAR_RPEND_Values<DFSDM::DFSDM_FLT2RDATAR, 4, 1, ReadMode, DFSDMDFSDM_FLT2RDATARBase> ;
    using RDATACH = DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values<DFSDM::DFSDM_FLT2RDATAR, 0, 3, ReadMode, DFSDMDFSDM_FLT2RDATARBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2RDATAR_RDATACH_Values<DFSDM::DFSDM_FLT2RDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2RDATARPack  = Register<0x4001721C, 32, ReadMode, DFSDMDFSDM_FLT2RDATARBase, T...> ;

  struct DFSDMDFSDM_FLT2AWHTRBase {} ;

  struct DFSDM_FLT2AWHTR : public RegisterBase<0x40017220, 32, ReadWriteMode>
  {
    using AWHT = DFSDM_DFSDM_FLT2AWHTR_AWHT_Values<DFSDM::DFSDM_FLT2AWHTR, 8, 24, ReadWriteMode, DFSDMDFSDM_FLT2AWHTRBase> ;
    using BKAWH = DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values<DFSDM::DFSDM_FLT2AWHTR, 0, 4, ReadWriteMode, DFSDMDFSDM_FLT2AWHTRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2AWHTR_BKAWH_Values<DFSDM::DFSDM_FLT2AWHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2AWHTRPack  = Register<0x40017220, 32, ReadWriteMode, DFSDMDFSDM_FLT2AWHTRBase, T...> ;

  struct DFSDMDFSDM_FLT2AWLTRBase {} ;

  struct DFSDM_FLT2AWLTR : public RegisterBase<0x40017224, 32, ReadWriteMode>
  {
    using AWLT = DFSDM_DFSDM_FLT2AWLTR_AWLT_Values<DFSDM::DFSDM_FLT2AWLTR, 8, 24, ReadWriteMode, DFSDMDFSDM_FLT2AWLTRBase> ;
    using BKAWL = DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values<DFSDM::DFSDM_FLT2AWLTR, 0, 4, ReadWriteMode, DFSDMDFSDM_FLT2AWLTRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2AWLTR_BKAWL_Values<DFSDM::DFSDM_FLT2AWLTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2AWLTRPack  = Register<0x40017224, 32, ReadWriteMode, DFSDMDFSDM_FLT2AWLTRBase, T...> ;

  struct DFSDMDFSDM_FLT2AWSRBase {} ;

  struct DFSDM_FLT2AWSR : public RegisterBase<0x40017228, 32, ReadMode>
  {
    using AWHTF = DFSDM_DFSDM_FLT2AWSR_AWHTF_Values<DFSDM::DFSDM_FLT2AWSR, 8, 8, ReadMode, DFSDMDFSDM_FLT2AWSRBase> ;
    using AWLTF = DFSDM_DFSDM_FLT2AWSR_AWLTF_Values<DFSDM::DFSDM_FLT2AWSR, 0, 8, ReadMode, DFSDMDFSDM_FLT2AWSRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2AWSR_AWLTF_Values<DFSDM::DFSDM_FLT2AWSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2AWSRPack  = Register<0x40017228, 32, ReadMode, DFSDMDFSDM_FLT2AWSRBase, T...> ;

  struct DFSDMDFSDM_FLT2AWCFRBase {} ;

  struct DFSDM_FLT2AWCFR : public RegisterBase<0x4001722C, 32, ReadWriteMode>
  {
    using CLRAWHTF = DFSDM_DFSDM_FLT2AWCFR_CLRAWHTF_Values<DFSDM::DFSDM_FLT2AWCFR, 8, 8, ReadWriteMode, DFSDMDFSDM_FLT2AWCFRBase> ;
    using CLRAWLTF = DFSDM_DFSDM_FLT2AWCFR_CLRAWLTF_Values<DFSDM::DFSDM_FLT2AWCFR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT2AWCFRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2AWCFR_CLRAWLTF_Values<DFSDM::DFSDM_FLT2AWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2AWCFRPack  = Register<0x4001722C, 32, ReadWriteMode, DFSDMDFSDM_FLT2AWCFRBase, T...> ;

  struct DFSDMDFSDM_FLT2EXMAXBase {} ;

  struct DFSDM_FLT2EXMAX : public RegisterBase<0x40017230, 32, ReadMode>
  {
    using EXMAX = DFSDM_DFSDM_FLT2EXMAX_EXMAX_Values<DFSDM::DFSDM_FLT2EXMAX, 8, 24, ReadMode, DFSDMDFSDM_FLT2EXMAXBase> ;
    using EXMAXCH = DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values<DFSDM::DFSDM_FLT2EXMAX, 0, 3, ReadMode, DFSDMDFSDM_FLT2EXMAXBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2EXMAX_EXMAXCH_Values<DFSDM::DFSDM_FLT2EXMAX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2EXMAXPack  = Register<0x40017230, 32, ReadMode, DFSDMDFSDM_FLT2EXMAXBase, T...> ;

  struct DFSDMDFSDM_FLT2EXMINBase {} ;

  struct DFSDM_FLT2EXMIN : public RegisterBase<0x40017234, 32, ReadMode>
  {
    using EXMIN = DFSDM_DFSDM_FLT2EXMIN_EXMIN_Values<DFSDM::DFSDM_FLT2EXMIN, 8, 24, ReadMode, DFSDMDFSDM_FLT2EXMINBase> ;
    using EXMINCH = DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values<DFSDM::DFSDM_FLT2EXMIN, 0, 3, ReadMode, DFSDMDFSDM_FLT2EXMINBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2EXMIN_EXMINCH_Values<DFSDM::DFSDM_FLT2EXMIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2EXMINPack  = Register<0x40017234, 32, ReadMode, DFSDMDFSDM_FLT2EXMINBase, T...> ;

  struct DFSDMDFSDM_FLT2CNVTIMRBase {} ;

  struct DFSDM_FLT2CNVTIMR : public RegisterBase<0x40017238, 32, ReadMode>
  {
    using CNVCNT = DFSDM_DFSDM_FLT2CNVTIMR_CNVCNT_Values<DFSDM::DFSDM_FLT2CNVTIMR, 4, 28, ReadMode, DFSDMDFSDM_FLT2CNVTIMRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT2CNVTIMR_CNVCNT_Values<DFSDM::DFSDM_FLT2CNVTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT2CNVTIMRPack  = Register<0x40017238, 32, ReadMode, DFSDMDFSDM_FLT2CNVTIMRBase, T...> ;

  struct DFSDMDFSDM_FLT3CR1Base {} ;

  struct DFSDM_FLT3CR1 : public RegisterBase<0x40017280, 32, ReadWriteMode>
  {
    using AWFSEL = DFSDM_DFSDM_FLT3CR1_AWFSEL_Values<DFSDM::DFSDM_FLT3CR1, 30, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using FAST = DFSDM_DFSDM_FLT3CR1_FAST_Values<DFSDM::DFSDM_FLT3CR1, 29, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using RCH = DFSDM_DFSDM_FLT3CR1_RCH_Values<DFSDM::DFSDM_FLT3CR1, 24, 3, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using RDMAEN = DFSDM_DFSDM_FLT3CR1_RDMAEN_Values<DFSDM::DFSDM_FLT3CR1, 21, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using RSYNC = DFSDM_DFSDM_FLT3CR1_RSYNC_Values<DFSDM::DFSDM_FLT3CR1, 19, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using RCONT = DFSDM_DFSDM_FLT3CR1_RCONT_Values<DFSDM::DFSDM_FLT3CR1, 18, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using RSWSTART = DFSDM_DFSDM_FLT3CR1_RSWSTART_Values<DFSDM::DFSDM_FLT3CR1, 17, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using JEXTEN = DFSDM_DFSDM_FLT3CR1_JEXTEN_Values<DFSDM::DFSDM_FLT3CR1, 13, 2, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using JEXTSEL = DFSDM_DFSDM_FLT3CR1_JEXTSEL_Values<DFSDM::DFSDM_FLT3CR1, 8, 3, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using JDMAEN = DFSDM_DFSDM_FLT3CR1_JDMAEN_Values<DFSDM::DFSDM_FLT3CR1, 5, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using JSCAN = DFSDM_DFSDM_FLT3CR1_JSCAN_Values<DFSDM::DFSDM_FLT3CR1, 4, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using JSYNC = DFSDM_DFSDM_FLT3CR1_JSYNC_Values<DFSDM::DFSDM_FLT3CR1, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using JSWSTART = DFSDM_DFSDM_FLT3CR1_JSWSTART_Values<DFSDM::DFSDM_FLT3CR1, 1, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using DFEN = DFSDM_DFSDM_FLT3CR1_DFEN_Values<DFSDM::DFSDM_FLT3CR1, 0, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base> ;
    using FieldValues = DFSDM_DFSDM_FLT3CR1_DFEN_Values<DFSDM::DFSDM_FLT3CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3CR1Pack  = Register<0x40017280, 32, ReadWriteMode, DFSDMDFSDM_FLT3CR1Base, T...> ;

  struct DFSDMDFSDM_FLT3CR2Base {} ;

  struct DFSDM_FLT3CR2 : public RegisterBase<0x40017284, 32, ReadWriteMode>
  {
    using AWDCH = DFSDM_DFSDM_FLT3CR2_AWDCH_Values<DFSDM::DFSDM_FLT3CR2, 16, 8, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using EXCH = DFSDM_DFSDM_FLT3CR2_EXCH_Values<DFSDM::DFSDM_FLT3CR2, 8, 8, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using CKABIE = DFSDM_DFSDM_FLT3CR2_CKABIE_Values<DFSDM::DFSDM_FLT3CR2, 6, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using SCDIE = DFSDM_DFSDM_FLT3CR2_SCDIE_Values<DFSDM::DFSDM_FLT3CR2, 5, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using AWDIE = DFSDM_DFSDM_FLT3CR2_AWDIE_Values<DFSDM::DFSDM_FLT3CR2, 4, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using ROVRIE = DFSDM_DFSDM_FLT3CR2_ROVRIE_Values<DFSDM::DFSDM_FLT3CR2, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using JOVRIE = DFSDM_DFSDM_FLT3CR2_JOVRIE_Values<DFSDM::DFSDM_FLT3CR2, 2, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using REOCIE = DFSDM_DFSDM_FLT3CR2_REOCIE_Values<DFSDM::DFSDM_FLT3CR2, 1, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using JEOCIE = DFSDM_DFSDM_FLT3CR2_JEOCIE_Values<DFSDM::DFSDM_FLT3CR2, 0, 1, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base> ;
    using FieldValues = DFSDM_DFSDM_FLT3CR2_JEOCIE_Values<DFSDM::DFSDM_FLT3CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3CR2Pack  = Register<0x40017284, 32, ReadWriteMode, DFSDMDFSDM_FLT3CR2Base, T...> ;

  struct DFSDMDFSDM_FLT3ISRBase {} ;

  struct DFSDM_FLT3ISR : public RegisterBase<0x40017288, 32, ReadMode>
  {
    using SCDF = DFSDM_DFSDM_FLT3ISR_SCDF_Values<DFSDM::DFSDM_FLT3ISR, 24, 8, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using CKABF = DFSDM_DFSDM_FLT3ISR_CKABF_Values<DFSDM::DFSDM_FLT3ISR, 16, 8, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using RCIP = DFSDM_DFSDM_FLT3ISR_RCIP_Values<DFSDM::DFSDM_FLT3ISR, 14, 1, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using JCIP = DFSDM_DFSDM_FLT3ISR_JCIP_Values<DFSDM::DFSDM_FLT3ISR, 13, 1, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using AWDF = DFSDM_DFSDM_FLT3ISR_AWDF_Values<DFSDM::DFSDM_FLT3ISR, 4, 1, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using ROVRF = DFSDM_DFSDM_FLT3ISR_ROVRF_Values<DFSDM::DFSDM_FLT3ISR, 3, 1, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using JOVRF = DFSDM_DFSDM_FLT3ISR_JOVRF_Values<DFSDM::DFSDM_FLT3ISR, 2, 1, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using REOCF = DFSDM_DFSDM_FLT3ISR_REOCF_Values<DFSDM::DFSDM_FLT3ISR, 1, 1, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using JEOCF = DFSDM_DFSDM_FLT3ISR_JEOCF_Values<DFSDM::DFSDM_FLT3ISR, 0, 1, ReadMode, DFSDMDFSDM_FLT3ISRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3ISR_JEOCF_Values<DFSDM::DFSDM_FLT3ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3ISRPack  = Register<0x40017288, 32, ReadMode, DFSDMDFSDM_FLT3ISRBase, T...> ;

  struct DFSDMDFSDM_FLT3ICRBase {} ;

  struct DFSDM_FLT3ICR : public RegisterBase<0x4001728C, 32, ReadWriteMode>
  {
    using CLRSCDF = DFSDM_DFSDM_FLT3ICR_CLRSCDF_Values<DFSDM::DFSDM_FLT3ICR, 24, 8, ReadWriteMode, DFSDMDFSDM_FLT3ICRBase> ;
    using CLRCKABF = DFSDM_DFSDM_FLT3ICR_CLRCKABF_Values<DFSDM::DFSDM_FLT3ICR, 16, 8, ReadWriteMode, DFSDMDFSDM_FLT3ICRBase> ;
    using CLRROVRF = DFSDM_DFSDM_FLT3ICR_CLRROVRF_Values<DFSDM::DFSDM_FLT3ICR, 3, 1, ReadWriteMode, DFSDMDFSDM_FLT3ICRBase> ;
    using CLRJOVRF = DFSDM_DFSDM_FLT3ICR_CLRJOVRF_Values<DFSDM::DFSDM_FLT3ICR, 2, 1, ReadWriteMode, DFSDMDFSDM_FLT3ICRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3ICR_CLRJOVRF_Values<DFSDM::DFSDM_FLT3ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3ICRPack  = Register<0x4001728C, 32, ReadWriteMode, DFSDMDFSDM_FLT3ICRBase, T...> ;

  struct DFSDMDFSDM_FLT3JCHGRBase {} ;

  struct DFSDM_FLT3JCHGR : public RegisterBase<0x40017290, 32, ReadWriteMode>
  {
    using JCHG = DFSDM_DFSDM_FLT3JCHGR_JCHG_Values<DFSDM::DFSDM_FLT3JCHGR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT3JCHGRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3JCHGR_JCHG_Values<DFSDM::DFSDM_FLT3JCHGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3JCHGRPack  = Register<0x40017290, 32, ReadWriteMode, DFSDMDFSDM_FLT3JCHGRBase, T...> ;

  struct DFSDMDFSDM_FLT3FCRBase {} ;

  struct DFSDM_FLT3FCR : public RegisterBase<0x40017294, 32, ReadWriteMode>
  {
    using FORD = DFSDM_DFSDM_FLT3FCR_FORD_Values<DFSDM::DFSDM_FLT3FCR, 29, 3, ReadWriteMode, DFSDMDFSDM_FLT3FCRBase> ;
    using FOSR = DFSDM_DFSDM_FLT3FCR_FOSR_Values<DFSDM::DFSDM_FLT3FCR, 16, 10, ReadWriteMode, DFSDMDFSDM_FLT3FCRBase> ;
    using IOSR = DFSDM_DFSDM_FLT3FCR_IOSR_Values<DFSDM::DFSDM_FLT3FCR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT3FCRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3FCR_IOSR_Values<DFSDM::DFSDM_FLT3FCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3FCRPack  = Register<0x40017294, 32, ReadWriteMode, DFSDMDFSDM_FLT3FCRBase, T...> ;

  struct DFSDMDFSDM_FLT3JDATARBase {} ;

  struct DFSDM_FLT3JDATAR : public RegisterBase<0x40017298, 32, ReadMode>
  {
    using JDATA = DFSDM_DFSDM_FLT3JDATAR_JDATA_Values<DFSDM::DFSDM_FLT3JDATAR, 8, 24, ReadMode, DFSDMDFSDM_FLT3JDATARBase> ;
    using JDATACH = DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values<DFSDM::DFSDM_FLT3JDATAR, 0, 3, ReadMode, DFSDMDFSDM_FLT3JDATARBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3JDATAR_JDATACH_Values<DFSDM::DFSDM_FLT3JDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3JDATARPack  = Register<0x40017298, 32, ReadMode, DFSDMDFSDM_FLT3JDATARBase, T...> ;

  struct DFSDMDFSDM_FLT3RDATARBase {} ;

  struct DFSDM_FLT3RDATAR : public RegisterBase<0x4001729C, 32, ReadMode>
  {
    using RDATA = DFSDM_DFSDM_FLT3RDATAR_RDATA_Values<DFSDM::DFSDM_FLT3RDATAR, 8, 24, ReadMode, DFSDMDFSDM_FLT3RDATARBase> ;
    using RPEND = DFSDM_DFSDM_FLT3RDATAR_RPEND_Values<DFSDM::DFSDM_FLT3RDATAR, 4, 1, ReadMode, DFSDMDFSDM_FLT3RDATARBase> ;
    using RDATACH = DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values<DFSDM::DFSDM_FLT3RDATAR, 0, 3, ReadMode, DFSDMDFSDM_FLT3RDATARBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3RDATAR_RDATACH_Values<DFSDM::DFSDM_FLT3RDATAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3RDATARPack  = Register<0x4001729C, 32, ReadMode, DFSDMDFSDM_FLT3RDATARBase, T...> ;

  struct DFSDMDFSDM_FLT3AWHTRBase {} ;

  struct DFSDM_FLT3AWHTR : public RegisterBase<0x400172A0, 32, ReadWriteMode>
  {
    using AWHT = DFSDM_DFSDM_FLT3AWHTR_AWHT_Values<DFSDM::DFSDM_FLT3AWHTR, 8, 24, ReadWriteMode, DFSDMDFSDM_FLT3AWHTRBase> ;
    using BKAWH = DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values<DFSDM::DFSDM_FLT3AWHTR, 0, 4, ReadWriteMode, DFSDMDFSDM_FLT3AWHTRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3AWHTR_BKAWH_Values<DFSDM::DFSDM_FLT3AWHTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3AWHTRPack  = Register<0x400172A0, 32, ReadWriteMode, DFSDMDFSDM_FLT3AWHTRBase, T...> ;

  struct DFSDMDFSDM_FLT3AWLTRBase {} ;

  struct DFSDM_FLT3AWLTR : public RegisterBase<0x400172A4, 32, ReadWriteMode>
  {
    using AWLT = DFSDM_DFSDM_FLT3AWLTR_AWLT_Values<DFSDM::DFSDM_FLT3AWLTR, 8, 24, ReadWriteMode, DFSDMDFSDM_FLT3AWLTRBase> ;
    using BKAWL = DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values<DFSDM::DFSDM_FLT3AWLTR, 0, 4, ReadWriteMode, DFSDMDFSDM_FLT3AWLTRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3AWLTR_BKAWL_Values<DFSDM::DFSDM_FLT3AWLTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3AWLTRPack  = Register<0x400172A4, 32, ReadWriteMode, DFSDMDFSDM_FLT3AWLTRBase, T...> ;

  struct DFSDMDFSDM_FLT3AWSRBase {} ;

  struct DFSDM_FLT3AWSR : public RegisterBase<0x400172A8, 32, ReadMode>
  {
    using AWHTF = DFSDM_DFSDM_FLT3AWSR_AWHTF_Values<DFSDM::DFSDM_FLT3AWSR, 8, 8, ReadMode, DFSDMDFSDM_FLT3AWSRBase> ;
    using AWLTF = DFSDM_DFSDM_FLT3AWSR_AWLTF_Values<DFSDM::DFSDM_FLT3AWSR, 0, 8, ReadMode, DFSDMDFSDM_FLT3AWSRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3AWSR_AWLTF_Values<DFSDM::DFSDM_FLT3AWSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3AWSRPack  = Register<0x400172A8, 32, ReadMode, DFSDMDFSDM_FLT3AWSRBase, T...> ;

  struct DFSDMDFSDM_FLT3AWCFRBase {} ;

  struct DFSDM_FLT3AWCFR : public RegisterBase<0x400172AC, 32, ReadWriteMode>
  {
    using CLRAWHTF = DFSDM_DFSDM_FLT3AWCFR_CLRAWHTF_Values<DFSDM::DFSDM_FLT3AWCFR, 8, 8, ReadWriteMode, DFSDMDFSDM_FLT3AWCFRBase> ;
    using CLRAWLTF = DFSDM_DFSDM_FLT3AWCFR_CLRAWLTF_Values<DFSDM::DFSDM_FLT3AWCFR, 0, 8, ReadWriteMode, DFSDMDFSDM_FLT3AWCFRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3AWCFR_CLRAWLTF_Values<DFSDM::DFSDM_FLT3AWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3AWCFRPack  = Register<0x400172AC, 32, ReadWriteMode, DFSDMDFSDM_FLT3AWCFRBase, T...> ;

  struct DFSDMDFSDM_FLT3EXMAXBase {} ;

  struct DFSDM_FLT3EXMAX : public RegisterBase<0x400172B0, 32, ReadMode>
  {
    using EXMAX = DFSDM_DFSDM_FLT3EXMAX_EXMAX_Values<DFSDM::DFSDM_FLT3EXMAX, 8, 24, ReadMode, DFSDMDFSDM_FLT3EXMAXBase> ;
    using EXMAXCH = DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values<DFSDM::DFSDM_FLT3EXMAX, 0, 3, ReadMode, DFSDMDFSDM_FLT3EXMAXBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3EXMAX_EXMAXCH_Values<DFSDM::DFSDM_FLT3EXMAX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3EXMAXPack  = Register<0x400172B0, 32, ReadMode, DFSDMDFSDM_FLT3EXMAXBase, T...> ;

  struct DFSDMDFSDM_FLT3EXMINBase {} ;

  struct DFSDM_FLT3EXMIN : public RegisterBase<0x400172B4, 32, ReadMode>
  {
    using EXMIN = DFSDM_DFSDM_FLT3EXMIN_EXMIN_Values<DFSDM::DFSDM_FLT3EXMIN, 8, 24, ReadMode, DFSDMDFSDM_FLT3EXMINBase> ;
    using EXMINCH = DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values<DFSDM::DFSDM_FLT3EXMIN, 0, 3, ReadMode, DFSDMDFSDM_FLT3EXMINBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3EXMIN_EXMINCH_Values<DFSDM::DFSDM_FLT3EXMIN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3EXMINPack  = Register<0x400172B4, 32, ReadMode, DFSDMDFSDM_FLT3EXMINBase, T...> ;

  struct DFSDMDFSDM_FLT3CNVTIMRBase {} ;

  struct DFSDM_FLT3CNVTIMR : public RegisterBase<0x400172B8, 32, ReadMode>
  {
    using CNVCNT = DFSDM_DFSDM_FLT3CNVTIMR_CNVCNT_Values<DFSDM::DFSDM_FLT3CNVTIMR, 4, 28, ReadMode, DFSDMDFSDM_FLT3CNVTIMRBase> ;
    using FieldValues = DFSDM_DFSDM_FLT3CNVTIMR_CNVCNT_Values<DFSDM::DFSDM_FLT3CNVTIMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DFSDM_FLT3CNVTIMRPack  = Register<0x400172B8, 32, ReadMode, DFSDMDFSDM_FLT3CNVTIMRBase, T...> ;

} ;

#endif //#if !defined(DFSDMREGISTERS_HPP)
