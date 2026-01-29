/* ============================================================================
 * FWOnline Zoneserver - FWLogClient
 * Functions: 9
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: FWLogClient::FWLogClient
 * Address: 0x0804cc48
 * Stack: 20 bytes
 * Instructions: 19
 */
void FWLogClient_FWLogClient(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    signal(); /* call */
}

/*
 * Function: FWLogClient::SetLog
 * Address: 0x0804cc7c
 * Stack: 0 bytes
 * Instructions: 8
 */
void FWLogClient_SetLog(void) {
}

/*
 * Function: FWLogClient::Init
 * Address: 0x0804cc8c
 * Stack: 20 bytes
 * Instructions: 68
 */
void FWLogClient_Init(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    memset(); /* call */
    strcpy(); /* call */
    FWLogClient_Reconnect(); /* call */
    pthread_mutex_init(); /* call */
    FWLogClient_WriteStruct(); /* call */
    pthread_create(); /* call */
}

/*
 * Function: FWLogClient::IsValid
 * Address: 0x0804cd68
 * Stack: 0 bytes
 * Instructions: 9
 */
void FWLogClient_IsValid(void) {
}

/*
 * Function: FWLogClient::~FWLogClient
 * Address: 0x0804cd78
 * Stack: 20 bytes
 * Instructions: 24
 */
void FWLogClient_dtor_FWLogClient(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    close(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: FWLogClient::WriteToQueue
 * Address: 0x0804cdb8
 * Stack: 20 bytes
 * Instructions: 65
 */
void FWLogClient_WriteToQueue(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */
    CLogFilter_Log(); /* call */
    memcpy(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: FWLogClient::CharLog
 * Address: 0x0804ce90
 * Stack: 20 bytes
 * Instructions: 15
 */
void FWLogClient_CharLog(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    FWLogClient_WriteToQueue(); /* call */
}

/*
 * Function: FWLogClient::Reconnect
 * Address: 0x0804ceb0
 * Stack: 36 bytes
 * Instructions: 119
 */
void FWLogClient_Reconnect(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CLogFilter_Log(); /* call */
    socket(); /* call */
    memset(); /* call */
    htons(); /* call */
    inet_aton(); /* call */
    close(); /* call */
    connect(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: FWLogClient::WriteStruct
 * Address: 0x0804d008
 * Stack: 20 bytes
 * Instructions: 75
 */
void FWLogClient_WriteStruct(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    write(); /* call */
    __errno_location(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 6 branches */
}

