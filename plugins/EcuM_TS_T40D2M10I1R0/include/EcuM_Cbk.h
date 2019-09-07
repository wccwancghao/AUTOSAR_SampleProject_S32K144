/**
*   @file    EcuM_Cbk.h
*   @version 1.0.1
*
*   @brief   AUTOSAR EcuM - module interface
*   @details This file contains functions prototypes and data types of the AUTOSAR EcuM.
*            This file contains sample code only. It is not part of the production code deliverables
*
*   @addtogroup ECUM_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : ARM
*   Peripheral           : 
*   Dependencies         : 
*
*   Autosar Version      : 4.2.2
*   Autosar Revision     : ASR_REL_4_2_REV_0002
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : S32K14x_MCAL_1_0_1_RTM_ASR_REL_4_2_REV_0002_20180713
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2018 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/
#ifndef ECUM_CBK_H
#define ECUM_CBK_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "EcuM_Cfg.h"
/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ECUM_CBK_VENDOR_ID 43
#define ECUM_CBK_MODULE_ID 10

#define ECUM_CBK_AR_RELEASE_MAJOR_VERSION       4
#define ECUM_CBK_AR_RELEASE_MINOR_VERSION       2
#define ECUM_CBK_AR_RELEASE_REVISION_VERSION    2
#define ECUM_CBK_SW_MAJOR_VERSION               1
#define ECUM_CBK_SW_MINOR_VERSION               0
#define ECUM_CBK_SW_PATCH_VERSION               1
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

#if (ECUM_CBK_VENDOR_ID != ECUM_CFG_VENDOR_ID)
#error "EcuM_Cbk.h and EcuM_Cfg.h have different vendor ids"
#endif

#if ((ECUM_CBK_AR_RELEASE_MAJOR_VERSION != ECUM_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (ECUM_CBK_AR_RELEASE_MINOR_VERSION != ECUM_CFG_AR_RELEASE_MINOR_VERSION) || \
     (ECUM_CBK_AR_RELEASE_REVISION_VERSION != ECUM_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of EcuM_Cbk.h and EcuM_Cfg.h are different"
#endif

#if ((ECUM_CBK_SW_MAJOR_VERSION != ECUM_CFG_SW_MAJOR_VERSION) || \
     (ECUM_CBK_SW_MINOR_VERSION != ECUM_CFG_SW_MINOR_VERSION) || \
     (ECUM_CBK_SW_PATCH_VERSION != ECUM_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of EcuM_Cbk.h and EcuM_Cfg.h are different"
#endif
/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

extern EcuM_WakeupSourceType EcuMLastWakeupEvent; /**< @brief last wakeup event to EcuM (source ID)*/


/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
FUNC(void, ECUM_CODE) EcuM_SetWakeupEvent(VAR(EcuM_WakeupSourceType, AUTOMATIC) sources);
FUNC(void, ECUM_CODE) EcuM_ValidateWakeupEvent(VAR(EcuM_WakeupSourceType, AUTOMATIC) sources);
FUNC(void, ECUM_CODE) EcuM_CheckWakeup(VAR(EcuM_WakeupSourceType, AUTOMATIC) wakeupSource);


#ifdef __cplusplus
}
#endif

#endif /* ECUM_CBK_H */

/** @} */
