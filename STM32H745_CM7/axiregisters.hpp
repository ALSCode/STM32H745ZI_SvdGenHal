/*******************************************************************************
* Filename      : axiregisters.hpp
*
* Details       : AXI interconnect registers. This header file is auto-generated
*                 for STM32H745_CM7 device.
*
*
*******************************************************************************/

#if !defined(AXIREGISTERS_HPP)
#define AXIREGISTERS_HPP

#include "axifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AXI
{
  struct AXIAXI_PERIPH_ID_4Base {} ;

  struct AXI_PERIPH_ID_4 : public RegisterBase<0x51001FD0, 32, ReadMode>
  {
    using JEP106CON = AXI_AXI_PERIPH_ID_4_JEP106CON_Values<AXI::AXI_PERIPH_ID_4, 0, 4, ReadMode, AXIAXI_PERIPH_ID_4Base> ;
    using KCOUNT4 = AXI_AXI_PERIPH_ID_4_KCOUNT4_Values<AXI::AXI_PERIPH_ID_4, 4, 4, ReadMode, AXIAXI_PERIPH_ID_4Base> ;
    using FieldValues = AXI_AXI_PERIPH_ID_4_KCOUNT4_Values<AXI::AXI_PERIPH_ID_4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_PERIPH_ID_4Pack  = Register<0x51001FD0, 32, ReadMode, AXIAXI_PERIPH_ID_4Base, T...> ;

  struct AXIAXI_PERIPH_ID_0Base {} ;

  struct AXI_PERIPH_ID_0 : public RegisterBase<0x51001FE0, 32, ReadMode>
  {
    using PARTNUM = AXI_AXI_PERIPH_ID_0_PARTNUM_Values<AXI::AXI_PERIPH_ID_0, 0, 8, ReadMode, AXIAXI_PERIPH_ID_0Base> ;
    using FieldValues = AXI_AXI_PERIPH_ID_0_PARTNUM_Values<AXI::AXI_PERIPH_ID_0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_PERIPH_ID_0Pack  = Register<0x51001FE0, 32, ReadMode, AXIAXI_PERIPH_ID_0Base, T...> ;

  struct AXIAXI_PERIPH_ID_1Base {} ;

  struct AXI_PERIPH_ID_1 : public RegisterBase<0x51001FE4, 32, ReadMode>
  {
    using PARTNUM = AXI_AXI_PERIPH_ID_1_PARTNUM_Values<AXI::AXI_PERIPH_ID_1, 0, 4, ReadMode, AXIAXI_PERIPH_ID_1Base> ;
    using JEP106I = AXI_AXI_PERIPH_ID_1_JEP106I_Values<AXI::AXI_PERIPH_ID_1, 4, 4, ReadMode, AXIAXI_PERIPH_ID_1Base> ;
    using FieldValues = AXI_AXI_PERIPH_ID_1_JEP106I_Values<AXI::AXI_PERIPH_ID_1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_PERIPH_ID_1Pack  = Register<0x51001FE4, 32, ReadMode, AXIAXI_PERIPH_ID_1Base, T...> ;

  struct AXIAXI_PERIPH_ID_2Base {} ;

  struct AXI_PERIPH_ID_2 : public RegisterBase<0x51001FE8, 32, ReadMode>
  {
    using JEP106ID = AXI_AXI_PERIPH_ID_2_JEP106ID_Values<AXI::AXI_PERIPH_ID_2, 0, 3, ReadMode, AXIAXI_PERIPH_ID_2Base> ;
    using JEDEC = AXI_AXI_PERIPH_ID_2_JEDEC_Values<AXI::AXI_PERIPH_ID_2, 3, 1, ReadMode, AXIAXI_PERIPH_ID_2Base> ;
    using REVISION = AXI_AXI_PERIPH_ID_2_REVISION_Values<AXI::AXI_PERIPH_ID_2, 4, 4, ReadMode, AXIAXI_PERIPH_ID_2Base> ;
    using FieldValues = AXI_AXI_PERIPH_ID_2_REVISION_Values<AXI::AXI_PERIPH_ID_2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_PERIPH_ID_2Pack  = Register<0x51001FE8, 32, ReadMode, AXIAXI_PERIPH_ID_2Base, T...> ;

  struct AXIAXI_PERIPH_ID_3Base {} ;

  struct AXI_PERIPH_ID_3 : public RegisterBase<0x51001FEC, 32, ReadMode>
  {
    using CUST_MOD_NUM = AXI_AXI_PERIPH_ID_3_CUST_MOD_NUM_Values<AXI::AXI_PERIPH_ID_3, 0, 4, ReadMode, AXIAXI_PERIPH_ID_3Base> ;
    using REV_AND = AXI_AXI_PERIPH_ID_3_REV_AND_Values<AXI::AXI_PERIPH_ID_3, 4, 4, ReadMode, AXIAXI_PERIPH_ID_3Base> ;
    using FieldValues = AXI_AXI_PERIPH_ID_3_REV_AND_Values<AXI::AXI_PERIPH_ID_3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_PERIPH_ID_3Pack  = Register<0x51001FEC, 32, ReadMode, AXIAXI_PERIPH_ID_3Base, T...> ;

  struct AXIAXI_COMP_ID_0Base {} ;

  struct AXI_COMP_ID_0 : public RegisterBase<0x51001FF0, 32, ReadMode>
  {
    using PREAMBLE = AXI_AXI_COMP_ID_0_PREAMBLE_Values<AXI::AXI_COMP_ID_0, 0, 8, ReadMode, AXIAXI_COMP_ID_0Base> ;
    using FieldValues = AXI_AXI_COMP_ID_0_PREAMBLE_Values<AXI::AXI_COMP_ID_0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_COMP_ID_0Pack  = Register<0x51001FF0, 32, ReadMode, AXIAXI_COMP_ID_0Base, T...> ;

  struct AXIAXI_COMP_ID_1Base {} ;

  struct AXI_COMP_ID_1 : public RegisterBase<0x51001FF4, 32, ReadMode>
  {
    using PREAMBLE = AXI_AXI_COMP_ID_1_PREAMBLE_Values<AXI::AXI_COMP_ID_1, 0, 4, ReadMode, AXIAXI_COMP_ID_1Base> ;
    using CLASS = AXI_AXI_COMP_ID_1_CLASS_Values<AXI::AXI_COMP_ID_1, 4, 4, ReadMode, AXIAXI_COMP_ID_1Base> ;
    using FieldValues = AXI_AXI_COMP_ID_1_CLASS_Values<AXI::AXI_COMP_ID_1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_COMP_ID_1Pack  = Register<0x51001FF4, 32, ReadMode, AXIAXI_COMP_ID_1Base, T...> ;

  struct AXIAXI_COMP_ID_2Base {} ;

  struct AXI_COMP_ID_2 : public RegisterBase<0x51001FF8, 32, ReadMode>
  {
    using PREAMBLE = AXI_AXI_COMP_ID_2_PREAMBLE_Values<AXI::AXI_COMP_ID_2, 0, 8, ReadMode, AXIAXI_COMP_ID_2Base> ;
    using FieldValues = AXI_AXI_COMP_ID_2_PREAMBLE_Values<AXI::AXI_COMP_ID_2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_COMP_ID_2Pack  = Register<0x51001FF8, 32, ReadMode, AXIAXI_COMP_ID_2Base, T...> ;

  struct AXIAXI_COMP_ID_3Base {} ;

  struct AXI_COMP_ID_3 : public RegisterBase<0x51001FFC, 32, ReadMode>
  {
    using PREAMBLE = AXI_AXI_COMP_ID_3_PREAMBLE_Values<AXI::AXI_COMP_ID_3, 0, 8, ReadMode, AXIAXI_COMP_ID_3Base> ;
    using FieldValues = AXI_AXI_COMP_ID_3_PREAMBLE_Values<AXI::AXI_COMP_ID_3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_COMP_ID_3Pack  = Register<0x51001FFC, 32, ReadMode, AXIAXI_COMP_ID_3Base, T...> ;

  struct AXIAXI_TARG1_FN_MOD_ISS_BMBase {} ;

  struct AXI_TARG1_FN_MOD_ISS_BM : public RegisterBase<0x51002008, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG1_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG1_FN_MOD_ISS_BM, 0, 1, ReadWriteMode, AXIAXI_TARG1_FN_MOD_ISS_BMBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG1_FN_MOD_ISS_BM, 1, 1, ReadWriteMode, AXIAXI_TARG1_FN_MOD_ISS_BMBase> ;
    using FieldValues = AXI_AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG1_FN_MOD_ISS_BM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG1_FN_MOD_ISS_BMPack  = Register<0x51002008, 32, ReadWriteMode, AXIAXI_TARG1_FN_MOD_ISS_BMBase, T...> ;

  struct AXIAXI_TARG2_FN_MOD_ISS_BMBase {} ;

  struct AXI_TARG2_FN_MOD_ISS_BM : public RegisterBase<0x51003008, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG2_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG2_FN_MOD_ISS_BM, 0, 1, ReadWriteMode, AXIAXI_TARG2_FN_MOD_ISS_BMBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG2_FN_MOD_ISS_BM, 1, 1, ReadWriteMode, AXIAXI_TARG2_FN_MOD_ISS_BMBase> ;
    using FieldValues = AXI_AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG2_FN_MOD_ISS_BM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG2_FN_MOD_ISS_BMPack  = Register<0x51003008, 32, ReadWriteMode, AXIAXI_TARG2_FN_MOD_ISS_BMBase, T...> ;

  struct AXIAXI_TARG3_FN_MOD_ISS_BMBase {} ;

  struct AXI_TARG3_FN_MOD_ISS_BM : public RegisterBase<0x51004008, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG3_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG3_FN_MOD_ISS_BM, 0, 1, ReadWriteMode, AXIAXI_TARG3_FN_MOD_ISS_BMBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG3_FN_MOD_ISS_BM, 1, 1, ReadWriteMode, AXIAXI_TARG3_FN_MOD_ISS_BMBase> ;
    using FieldValues = AXI_AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG3_FN_MOD_ISS_BM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG3_FN_MOD_ISS_BMPack  = Register<0x51004008, 32, ReadWriteMode, AXIAXI_TARG3_FN_MOD_ISS_BMBase, T...> ;

  struct AXIAXI_TARG4_FN_MOD_ISS_BMBase {} ;

  struct AXI_TARG4_FN_MOD_ISS_BM : public RegisterBase<0x51005008, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG4_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG4_FN_MOD_ISS_BM, 0, 1, ReadWriteMode, AXIAXI_TARG4_FN_MOD_ISS_BMBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG4_FN_MOD_ISS_BM, 1, 1, ReadWriteMode, AXIAXI_TARG4_FN_MOD_ISS_BMBase> ;
    using FieldValues = AXI_AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG4_FN_MOD_ISS_BM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG4_FN_MOD_ISS_BMPack  = Register<0x51005008, 32, ReadWriteMode, AXIAXI_TARG4_FN_MOD_ISS_BMBase, T...> ;

  struct AXIAXI_TARG5_FN_MOD_ISS_BMBase {} ;

  struct AXI_TARG5_FN_MOD_ISS_BM : public RegisterBase<0x51006008, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG5_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG5_FN_MOD_ISS_BM, 0, 1, ReadWriteMode, AXIAXI_TARG5_FN_MOD_ISS_BMBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG5_FN_MOD_ISS_BM, 1, 1, ReadWriteMode, AXIAXI_TARG5_FN_MOD_ISS_BMBase> ;
    using FieldValues = AXI_AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG5_FN_MOD_ISS_BM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG5_FN_MOD_ISS_BMPack  = Register<0x51006008, 32, ReadWriteMode, AXIAXI_TARG5_FN_MOD_ISS_BMBase, T...> ;

  struct AXIAXI_TARG6_FN_MOD_ISS_BMBase {} ;

  struct AXI_TARG6_FN_MOD_ISS_BM : public RegisterBase<0x51007008, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG6_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG6_FN_MOD_ISS_BM, 0, 1, ReadWriteMode, AXIAXI_TARG6_FN_MOD_ISS_BMBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG6_FN_MOD_ISS_BM, 1, 1, ReadWriteMode, AXIAXI_TARG6_FN_MOD_ISS_BMBase> ;
    using FieldValues = AXI_AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG6_FN_MOD_ISS_BM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG6_FN_MOD_ISS_BMPack  = Register<0x51007008, 32, ReadWriteMode, AXIAXI_TARG6_FN_MOD_ISS_BMBase, T...> ;

  struct AXIAXI_TARG7_FN_MOD_ISS_BMBase {} ;

  struct AXI_TARG7_FN_MOD_ISS_BM : public RegisterBase<0x5100800C, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG7_FN_MOD_ISS_BM_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG7_FN_MOD_ISS_BM, 0, 1, ReadWriteMode, AXIAXI_TARG7_FN_MOD_ISS_BMBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG7_FN_MOD_ISS_BM, 1, 1, ReadWriteMode, AXIAXI_TARG7_FN_MOD_ISS_BMBase> ;
    using FieldValues = AXI_AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG7_FN_MOD_ISS_BM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG7_FN_MOD_ISS_BMPack  = Register<0x5100800C, 32, ReadWriteMode, AXIAXI_TARG7_FN_MOD_ISS_BMBase, T...> ;

  struct AXIAXI_TARG1_FN_MOD2Base {} ;

  struct AXI_TARG1_FN_MOD2 : public RegisterBase<0x51002024, 32, ReadWriteMode>
  {
    using BYPASS_MERGE = AXI_AXI_TARG1_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_TARG1_FN_MOD2, 0, 1, ReadWriteMode, AXIAXI_TARG1_FN_MOD2Base> ;
    using FieldValues = AXI_AXI_TARG1_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_TARG1_FN_MOD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG1_FN_MOD2Pack  = Register<0x51002024, 32, ReadWriteMode, AXIAXI_TARG1_FN_MOD2Base, T...> ;

  struct AXIAXI_TARG2_FN_MOD2Base {} ;

  struct AXI_TARG2_FN_MOD2 : public RegisterBase<0x51003024, 32, ReadWriteMode>
  {
    using BYPASS_MERGE = AXI_AXI_TARG2_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_TARG2_FN_MOD2, 0, 1, ReadWriteMode, AXIAXI_TARG2_FN_MOD2Base> ;
    using FieldValues = AXI_AXI_TARG2_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_TARG2_FN_MOD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG2_FN_MOD2Pack  = Register<0x51003024, 32, ReadWriteMode, AXIAXI_TARG2_FN_MOD2Base, T...> ;

  struct AXIAXI_TARG7_FN_MOD2Base {} ;

  struct AXI_TARG7_FN_MOD2 : public RegisterBase<0x51008024, 32, ReadWriteMode>
  {
    using BYPASS_MERGE = AXI_AXI_TARG7_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_TARG7_FN_MOD2, 0, 1, ReadWriteMode, AXIAXI_TARG7_FN_MOD2Base> ;
    using FieldValues = AXI_AXI_TARG7_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_TARG7_FN_MOD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG7_FN_MOD2Pack  = Register<0x51008024, 32, ReadWriteMode, AXIAXI_TARG7_FN_MOD2Base, T...> ;

  struct AXIAXI_TARG1_FN_MOD_LBBase {} ;

  struct AXI_TARG1_FN_MOD_LB : public RegisterBase<0x5100202C, 32, ReadWriteMode>
  {
    using FN_MOD_LB = AXI_AXI_TARG1_FN_MOD_LB_FN_MOD_LB_Values<AXI::AXI_TARG1_FN_MOD_LB, 0, 1, ReadWriteMode, AXIAXI_TARG1_FN_MOD_LBBase> ;
    using FieldValues = AXI_AXI_TARG1_FN_MOD_LB_FN_MOD_LB_Values<AXI::AXI_TARG1_FN_MOD_LB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG1_FN_MOD_LBPack  = Register<0x5100202C, 32, ReadWriteMode, AXIAXI_TARG1_FN_MOD_LBBase, T...> ;

  struct AXIAXI_TARG2_FN_MOD_LBBase {} ;

  struct AXI_TARG2_FN_MOD_LB : public RegisterBase<0x5100302C, 32, ReadWriteMode>
  {
    using FN_MOD_LB = AXI_AXI_TARG2_FN_MOD_LB_FN_MOD_LB_Values<AXI::AXI_TARG2_FN_MOD_LB, 0, 1, ReadWriteMode, AXIAXI_TARG2_FN_MOD_LBBase> ;
    using FieldValues = AXI_AXI_TARG2_FN_MOD_LB_FN_MOD_LB_Values<AXI::AXI_TARG2_FN_MOD_LB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG2_FN_MOD_LBPack  = Register<0x5100302C, 32, ReadWriteMode, AXIAXI_TARG2_FN_MOD_LBBase, T...> ;

  struct AXIAXI_TARG1_FN_MODBase {} ;

  struct AXI_TARG1_FN_MOD : public RegisterBase<0x51002108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG1_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG1_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_TARG1_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG1_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_TARG1_FN_MODBase> ;
    using FieldValues = AXI_AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG1_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG1_FN_MODPack  = Register<0x51002108, 32, ReadWriteMode, AXIAXI_TARG1_FN_MODBase, T...> ;

  struct AXIAXI_TARG2_FN_MODBase {} ;

  struct AXI_TARG2_FN_MOD : public RegisterBase<0x51003108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG2_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG2_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_TARG2_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG2_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_TARG2_FN_MODBase> ;
    using FieldValues = AXI_AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG2_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG2_FN_MODPack  = Register<0x51003108, 32, ReadWriteMode, AXIAXI_TARG2_FN_MODBase, T...> ;

  struct AXIAXI_TARG7_FN_MODBase {} ;

  struct AXI_TARG7_FN_MOD : public RegisterBase<0x51008108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_TARG7_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_TARG7_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_TARG7_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG7_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_TARG7_FN_MODBase> ;
    using FieldValues = AXI_AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_TARG7_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_TARG7_FN_MODPack  = Register<0x51008108, 32, ReadWriteMode, AXIAXI_TARG7_FN_MODBase, T...> ;

  struct AXIAXI_INI1_FN_MOD2Base {} ;

  struct AXI_INI1_FN_MOD2 : public RegisterBase<0x51042024, 32, ReadWriteMode>
  {
    using BYPASS_MERGE = AXI_AXI_INI1_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_INI1_FN_MOD2, 0, 1, ReadWriteMode, AXIAXI_INI1_FN_MOD2Base> ;
    using FieldValues = AXI_AXI_INI1_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_INI1_FN_MOD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI1_FN_MOD2Pack  = Register<0x51042024, 32, ReadWriteMode, AXIAXI_INI1_FN_MOD2Base, T...> ;

  struct AXIAXI_INI3_FN_MOD2Base {} ;

  struct AXI_INI3_FN_MOD2 : public RegisterBase<0x51044024, 32, ReadWriteMode>
  {
    using BYPASS_MERGE = AXI_AXI_INI3_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_INI3_FN_MOD2, 0, 1, ReadWriteMode, AXIAXI_INI3_FN_MOD2Base> ;
    using FieldValues = AXI_AXI_INI3_FN_MOD2_BYPASS_MERGE_Values<AXI::AXI_INI3_FN_MOD2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI3_FN_MOD2Pack  = Register<0x51044024, 32, ReadWriteMode, AXIAXI_INI3_FN_MOD2Base, T...> ;

  struct AXIAXI_INI1_FN_MOD_AHBBase {} ;

  struct AXI_INI1_FN_MOD_AHB : public RegisterBase<0x51042028, 32, ReadWriteMode>
  {
    using RD_INC_OVERRIDE = AXI_AXI_INI1_FN_MOD_AHB_RD_INC_OVERRIDE_Values<AXI::AXI_INI1_FN_MOD_AHB, 0, 1, ReadWriteMode, AXIAXI_INI1_FN_MOD_AHBBase> ;
    using WR_INC_OVERRIDE = AXI_AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE_Values<AXI::AXI_INI1_FN_MOD_AHB, 1, 1, ReadWriteMode, AXIAXI_INI1_FN_MOD_AHBBase> ;
    using FieldValues = AXI_AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE_Values<AXI::AXI_INI1_FN_MOD_AHB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI1_FN_MOD_AHBPack  = Register<0x51042028, 32, ReadWriteMode, AXIAXI_INI1_FN_MOD_AHBBase, T...> ;

  struct AXIAXI_INI3_FN_MOD_AHBBase {} ;

  struct AXI_INI3_FN_MOD_AHB : public RegisterBase<0x51044028, 32, ReadWriteMode>
  {
    using RD_INC_OVERRIDE = AXI_AXI_INI3_FN_MOD_AHB_RD_INC_OVERRIDE_Values<AXI::AXI_INI3_FN_MOD_AHB, 0, 1, ReadWriteMode, AXIAXI_INI3_FN_MOD_AHBBase> ;
    using WR_INC_OVERRIDE = AXI_AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE_Values<AXI::AXI_INI3_FN_MOD_AHB, 1, 1, ReadWriteMode, AXIAXI_INI3_FN_MOD_AHBBase> ;
    using FieldValues = AXI_AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE_Values<AXI::AXI_INI3_FN_MOD_AHB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI3_FN_MOD_AHBPack  = Register<0x51044028, 32, ReadWriteMode, AXIAXI_INI3_FN_MOD_AHBBase, T...> ;

  struct AXIAXI_INI1_READ_QOSBase {} ;

  struct AXI_INI1_READ_QOS : public RegisterBase<0x51042100, 32, ReadWriteMode>
  {
    using AR_QOS = AXI_AXI_INI1_READ_QOS_AR_QOS_Values<AXI::AXI_INI1_READ_QOS, 0, 4, ReadWriteMode, AXIAXI_INI1_READ_QOSBase> ;
    using FieldValues = AXI_AXI_INI1_READ_QOS_AR_QOS_Values<AXI::AXI_INI1_READ_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI1_READ_QOSPack  = Register<0x51042100, 32, ReadWriteMode, AXIAXI_INI1_READ_QOSBase, T...> ;

  struct AXIAXI_INI2_READ_QOSBase {} ;

  struct AXI_INI2_READ_QOS : public RegisterBase<0x51043100, 32, ReadWriteMode>
  {
    using AR_QOS = AXI_AXI_INI2_READ_QOS_AR_QOS_Values<AXI::AXI_INI2_READ_QOS, 0, 4, ReadWriteMode, AXIAXI_INI2_READ_QOSBase> ;
    using FieldValues = AXI_AXI_INI2_READ_QOS_AR_QOS_Values<AXI::AXI_INI2_READ_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI2_READ_QOSPack  = Register<0x51043100, 32, ReadWriteMode, AXIAXI_INI2_READ_QOSBase, T...> ;

  struct AXIAXI_INI3_READ_QOSBase {} ;

  struct AXI_INI3_READ_QOS : public RegisterBase<0x51044100, 32, ReadWriteMode>
  {
    using AR_QOS = AXI_AXI_INI3_READ_QOS_AR_QOS_Values<AXI::AXI_INI3_READ_QOS, 0, 4, ReadWriteMode, AXIAXI_INI3_READ_QOSBase> ;
    using FieldValues = AXI_AXI_INI3_READ_QOS_AR_QOS_Values<AXI::AXI_INI3_READ_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI3_READ_QOSPack  = Register<0x51044100, 32, ReadWriteMode, AXIAXI_INI3_READ_QOSBase, T...> ;

  struct AXIAXI_INI4_READ_QOSBase {} ;

  struct AXI_INI4_READ_QOS : public RegisterBase<0x51045100, 32, ReadWriteMode>
  {
    using AR_QOS = AXI_AXI_INI4_READ_QOS_AR_QOS_Values<AXI::AXI_INI4_READ_QOS, 0, 4, ReadWriteMode, AXIAXI_INI4_READ_QOSBase> ;
    using FieldValues = AXI_AXI_INI4_READ_QOS_AR_QOS_Values<AXI::AXI_INI4_READ_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI4_READ_QOSPack  = Register<0x51045100, 32, ReadWriteMode, AXIAXI_INI4_READ_QOSBase, T...> ;

  struct AXIAXI_INI5_READ_QOSBase {} ;

  struct AXI_INI5_READ_QOS : public RegisterBase<0x51046100, 32, ReadWriteMode>
  {
    using AR_QOS = AXI_AXI_INI5_READ_QOS_AR_QOS_Values<AXI::AXI_INI5_READ_QOS, 0, 4, ReadWriteMode, AXIAXI_INI5_READ_QOSBase> ;
    using FieldValues = AXI_AXI_INI5_READ_QOS_AR_QOS_Values<AXI::AXI_INI5_READ_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI5_READ_QOSPack  = Register<0x51046100, 32, ReadWriteMode, AXIAXI_INI5_READ_QOSBase, T...> ;

  struct AXIAXI_INI6_READ_QOSBase {} ;

  struct AXI_INI6_READ_QOS : public RegisterBase<0x51047100, 32, ReadWriteMode>
  {
    using AR_QOS = AXI_AXI_INI6_READ_QOS_AR_QOS_Values<AXI::AXI_INI6_READ_QOS, 0, 4, ReadWriteMode, AXIAXI_INI6_READ_QOSBase> ;
    using FieldValues = AXI_AXI_INI6_READ_QOS_AR_QOS_Values<AXI::AXI_INI6_READ_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI6_READ_QOSPack  = Register<0x51047100, 32, ReadWriteMode, AXIAXI_INI6_READ_QOSBase, T...> ;

  struct AXIAXI_INI1_WRITE_QOSBase {} ;

  struct AXI_INI1_WRITE_QOS : public RegisterBase<0x51042104, 32, ReadWriteMode>
  {
    using AW_QOS = AXI_AXI_INI1_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI1_WRITE_QOS, 0, 4, ReadWriteMode, AXIAXI_INI1_WRITE_QOSBase> ;
    using FieldValues = AXI_AXI_INI1_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI1_WRITE_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI1_WRITE_QOSPack  = Register<0x51042104, 32, ReadWriteMode, AXIAXI_INI1_WRITE_QOSBase, T...> ;

  struct AXIAXI_INI2_WRITE_QOSBase {} ;

  struct AXI_INI2_WRITE_QOS : public RegisterBase<0x51043104, 32, ReadWriteMode>
  {
    using AW_QOS = AXI_AXI_INI2_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI2_WRITE_QOS, 0, 4, ReadWriteMode, AXIAXI_INI2_WRITE_QOSBase> ;
    using FieldValues = AXI_AXI_INI2_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI2_WRITE_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI2_WRITE_QOSPack  = Register<0x51043104, 32, ReadWriteMode, AXIAXI_INI2_WRITE_QOSBase, T...> ;

  struct AXIAXI_INI3_WRITE_QOSBase {} ;

  struct AXI_INI3_WRITE_QOS : public RegisterBase<0x51044104, 32, ReadWriteMode>
  {
    using AW_QOS = AXI_AXI_INI3_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI3_WRITE_QOS, 0, 4, ReadWriteMode, AXIAXI_INI3_WRITE_QOSBase> ;
    using FieldValues = AXI_AXI_INI3_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI3_WRITE_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI3_WRITE_QOSPack  = Register<0x51044104, 32, ReadWriteMode, AXIAXI_INI3_WRITE_QOSBase, T...> ;

  struct AXIAXI_INI4_WRITE_QOSBase {} ;

  struct AXI_INI4_WRITE_QOS : public RegisterBase<0x51045104, 32, ReadWriteMode>
  {
    using AW_QOS = AXI_AXI_INI4_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI4_WRITE_QOS, 0, 4, ReadWriteMode, AXIAXI_INI4_WRITE_QOSBase> ;
    using FieldValues = AXI_AXI_INI4_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI4_WRITE_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI4_WRITE_QOSPack  = Register<0x51045104, 32, ReadWriteMode, AXIAXI_INI4_WRITE_QOSBase, T...> ;

  struct AXIAXI_INI5_WRITE_QOSBase {} ;

  struct AXI_INI5_WRITE_QOS : public RegisterBase<0x51046104, 32, ReadWriteMode>
  {
    using AW_QOS = AXI_AXI_INI5_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI5_WRITE_QOS, 0, 4, ReadWriteMode, AXIAXI_INI5_WRITE_QOSBase> ;
    using FieldValues = AXI_AXI_INI5_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI5_WRITE_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI5_WRITE_QOSPack  = Register<0x51046104, 32, ReadWriteMode, AXIAXI_INI5_WRITE_QOSBase, T...> ;

  struct AXIAXI_INI6_WRITE_QOSBase {} ;

  struct AXI_INI6_WRITE_QOS : public RegisterBase<0x51047104, 32, ReadWriteMode>
  {
    using AW_QOS = AXI_AXI_INI6_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI6_WRITE_QOS, 0, 4, ReadWriteMode, AXIAXI_INI6_WRITE_QOSBase> ;
    using FieldValues = AXI_AXI_INI6_WRITE_QOS_AW_QOS_Values<AXI::AXI_INI6_WRITE_QOS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI6_WRITE_QOSPack  = Register<0x51047104, 32, ReadWriteMode, AXIAXI_INI6_WRITE_QOSBase, T...> ;

  struct AXIAXI_INI1_FN_MODBase {} ;

  struct AXI_INI1_FN_MOD : public RegisterBase<0x51042108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_INI1_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_INI1_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_INI1_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI1_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_INI1_FN_MODBase> ;
    using FieldValues = AXI_AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI1_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI1_FN_MODPack  = Register<0x51042108, 32, ReadWriteMode, AXIAXI_INI1_FN_MODBase, T...> ;

  struct AXIAXI_INI2_FN_MODBase {} ;

  struct AXI_INI2_FN_MOD : public RegisterBase<0x51043108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_INI2_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_INI2_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_INI2_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI2_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_INI2_FN_MODBase> ;
    using FieldValues = AXI_AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI2_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI2_FN_MODPack  = Register<0x51043108, 32, ReadWriteMode, AXIAXI_INI2_FN_MODBase, T...> ;

  struct AXIAXI_INI3_FN_MODBase {} ;

  struct AXI_INI3_FN_MOD : public RegisterBase<0x51044108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_INI3_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_INI3_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_INI3_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI3_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_INI3_FN_MODBase> ;
    using FieldValues = AXI_AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI3_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI3_FN_MODPack  = Register<0x51044108, 32, ReadWriteMode, AXIAXI_INI3_FN_MODBase, T...> ;

  struct AXIAXI_INI4_FN_MODBase {} ;

  struct AXI_INI4_FN_MOD : public RegisterBase<0x51045108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_INI4_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_INI4_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_INI4_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI4_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_INI4_FN_MODBase> ;
    using FieldValues = AXI_AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI4_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI4_FN_MODPack  = Register<0x51045108, 32, ReadWriteMode, AXIAXI_INI4_FN_MODBase, T...> ;

  struct AXIAXI_INI5_FN_MODBase {} ;

  struct AXI_INI5_FN_MOD : public RegisterBase<0x51046108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_INI5_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_INI5_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_INI5_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI5_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_INI5_FN_MODBase> ;
    using FieldValues = AXI_AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI5_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI5_FN_MODPack  = Register<0x51046108, 32, ReadWriteMode, AXIAXI_INI5_FN_MODBase, T...> ;

  struct AXIAXI_INI6_FN_MODBase {} ;

  struct AXI_INI6_FN_MOD : public RegisterBase<0x51047108, 32, ReadWriteMode>
  {
    using READ_ISS_OVERRIDE = AXI_AXI_INI6_FN_MOD_READ_ISS_OVERRIDE_Values<AXI::AXI_INI6_FN_MOD, 0, 1, ReadWriteMode, AXIAXI_INI6_FN_MODBase> ;
    using WRITE_ISS_OVERRIDE = AXI_AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI6_FN_MOD, 1, 1, ReadWriteMode, AXIAXI_INI6_FN_MODBase> ;
    using FieldValues = AXI_AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE_Values<AXI::AXI_INI6_FN_MOD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AXI_INI6_FN_MODPack  = Register<0x51047108, 32, ReadWriteMode, AXIAXI_INI6_FN_MODBase, T...> ;

} ;

#endif //#if !defined(AXIREGISTERS_HPP)
