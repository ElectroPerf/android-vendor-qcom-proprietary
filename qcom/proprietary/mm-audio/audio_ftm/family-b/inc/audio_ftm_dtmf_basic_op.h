#ifndef AUDIO_FTM_DTMF_BASIC_OP_H
#define AUDIO_FTM_DTMF_BASIC_OP_H

#ifdef __cplusplus
extern "C" {
#endif /* #ifdef __cplusplus */

/**
  @file audio_ftm_dtmf_basic_op.h
  @brief  Prototypes for basic arithmetic operators
====================================================================================================
Copyright (c) 2010 - 2011 by Qualcomm Technologies, Inc.  All Rights Reserved.
Qualcomm Technologies Proprietary and Confidential.

$Header: //source/qcom/qct/multimedia2/Audio/drivers/ftm/8x60/qnx/ftm_drv_lib/rel/1.0/inc/audio_ftm_dtmf_basic_op.h#4 $
$DateTime: 2011/05/02 20:06:41 $
$Author: zhongl $

Revision History:
                            Modification     Tracking
Author (core ID)                Date         CR Number   Description of Changes
-------------------------   ------------    ----------   -------------------------------------------
ZhongL                      05/30/2010                    File creation.



====================================================================================================
                                         INCLUDE FILES
==================================================================================================*/

#include "audio_ftm_dtmf_gen.h"

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                            MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/



/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/



/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATION
==================================================================================================*/


/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

int16 audio_ftm_dtmf_add16 (int16 v1, int16 v2);

int32 audio_ftm_dtmf_multiply16 (int16 v1, int16 v2);

int16 audio_ftm_dtmf_multiply16_round (int16 v1, int16 v2);

int16 audio_ftm_dtmf_mac16_round (int32 v3, int16 v1, int16 v2);

#ifdef __cplusplus
}
#endif /* #ifdef __cplusplus */

#endif /* AUDIO_FTM_DTMF_BASIC_OP_H */
