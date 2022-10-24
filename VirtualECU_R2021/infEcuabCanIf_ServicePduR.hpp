#pragma once
/******************************************************************************/
/* File   : infEcuabCanIf_ServicePduR.hpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class infEcuabCanIf_ServicePduR{
   public:
      virtual FUNC(Std_TypeReturn, CANIF_CODE) Transmit(
         void
      ) = 0;

      virtual FUNC(Std_TypeReturn, CANIF_CODE) McalCancelTransmit(
         void
      ) = 0;

      virtual FUNC(Std_TypeReturn, CANIF_CODE) ReadRxPduData(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) ReadTxNotifStatus(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) ReadRxNotifStatus(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) TxConfirmation(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) RxIndication(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) CbMcalCancelTxConfirmation(
         void
      ) = 0;
};

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
