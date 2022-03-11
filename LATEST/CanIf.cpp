/*****************************************************/
/* File   : CanIf.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infCanIf_EcuM.h"
#include "infCanIf_Dcm.h"
#include "infCanIf_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_CanIf:
      public abstract_module
{
   public:
      FUNC(void, CANIF_CODE) InitFunction   (void);
      FUNC(void, CANIF_CODE) DeInitFunction (void);
      FUNC(void, CANIF_CODE) GetVersionInfo (void);
      FUNC(void, CANIF_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_CanIf   CanIf;
infEcuMClient* gptrinfEcuMClient_CanIf = &CanIf;
infDcmClient*  gptrinfDcmClient_CanIf  = &CanIf;
infSchMClient* gptrinfSchMClient_CanIf = &CanIf;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, CANIF_CODE) module_CanIf::InitFunction(void){
}

FUNC(void, CANIF_CODE) module_CanIf::DeInitFunction(void){
}

FUNC(void, CANIF_CODE) module_CanIf::GetVersionInfo(void){
}

FUNC(void, CANIF_CODE) module_CanIf::MainFunction(void){
}

#include "CanIf_Unused.h"

FUNC(void, CANIF_CODE) class_CanIf_Unused::GetControllerMode(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::SetControllerMode(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::Transmit(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CancelTransmit(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::ReadRxPduData(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::ReadTxNotifStatus(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::ReadRxNotifStatus(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::GetPduMode(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::SetPduMode(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::SetDynamicTxId(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::GetTrcvMode(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::SetTrcvMode(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::GetTrcvWakeupReason(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::SetTrcvWakeupMode(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CheckWakeup(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CheckValidation(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::GetTxConfirmationState(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::ClearTrcvWufFlag(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CheckTrcvWakeFlag(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CheckBaudRate(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::ChangeBaudRate(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbTxConfirmation(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbRxIndication(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbCancelTxConfirmation(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbControllerBusOff(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbConfirmPnAvailability(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbClearTrcvWufFlagIndication(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbCheckTrcvWakeFlagIndication(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbControllerModeIndication(void){
}

FUNC(void, CANIF_CODE) class_CanIf_Unused::CbTrcvModeIndication(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

