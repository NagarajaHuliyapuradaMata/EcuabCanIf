/******************************************************************************/
/* File   : EcuabCanIf.cpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "EcuabCanIf.hpp"

#include "CanTypes.hpp"
#include "infEcuabCanIfMcalCan.hpp"
#include "infEcuabCanIfServiceSwcEcuM.hpp"

#include "CfgEcuabCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABCANIF_CODE) infEcuabCanIfServiceSwcEcuM_InitFunction   (const CfgEcuabCanIf_Type* CfgEcuabCanIf_ptr){UNUSED(CfgEcuabCanIf_ptr);}
FUNC(void, ECUABCANIF_CODE) infEcuabCanIfServiceSwcEcuM_DeInitFunction (void){}
FUNC(void, ECUABCANIF_CODE) infEcuabCanIfServiceSwcSchM_MainFunction   (void){}

FUNC(void, ECUABCANIF_CODE) infEcuabCanIfMcalCan_RxIndication(uint8 lu8IndexBufferRx){
   const CfgEcuabCanIf_tstHardwareObjectHandle* pcstHardwareObjectHandleCfg = EcuabCanIf_ConfigHardwareObjectHandle[McalCan_auBufferRx[lu8IndexBufferRx].McalCan_stContext.eHardwareObjectHandle];
   uint8 RxPduId = 0; //TBD: To be evaluated here based on received message id and CanIf config
   UNUSED(pcstHardwareObjectHandleCfg);
   (EcuabCanif_ConfigRxPdu_UL[RxPduId])(lu8IndexBufferRx);
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
