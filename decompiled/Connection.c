/* ============================================================================
 * FWOnline Zoneserver - Connection
 * Functions: 5
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: Connection::Connection
 * Address: 0x080518a0
 * Stack: 0 bytes
 * Instructions: 11
 */
void Connection_Connection(void) {
}

/*
 * Function: Connection::~Connection
 * Address: 0x080518c8
 * Stack: 20 bytes
 * Instructions: 82
 */
void Connection_dtor_Connection(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CSndPkt_dtor_CSndPkt(); /* call */
    pthread_mutex_unlock(); /* call */
    CRcvPkt_dtor_CRcvPkt(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: Connection::InitBuffer
 * Address: 0x080519b8
 * Stack: 28 bytes
 * Instructions: 174
 */
void Connection_InitBuffer(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    __builtin_new(); /* call */
    CSndPkt_CSndPkt(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CSndPkt_SetRetryInterval(); /* call */
    CRcvPkt_CRcvPkt(); /* call */
    pthread_mutex_init(); /* call */
    terminate(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: Connection::FlushQueues
 * Address: 0x08051bb8
 * Stack: 20 bytes
 * Instructions: 54
 */
void Connection_FlushQueues(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CRcvPkt_FlushQueues(); /* call */
    pthread_mutex_unlock(); /* call */
    CSndPkt_FlushQueues(); /* call */
}

/*
 * Function: Connection::RenewRecv
 * Address: 0x08051c5c
 * Stack: 16 bytes
 * Instructions: 63
 */
void Connection_RenewRecv(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CRcvPkt_dtor_CRcvPkt(); /* call */
    __builtin_new(); /* call */
    CRcvPkt_CRcvPkt(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    terminate(); /* call */

    /* Control flow: 3 branches */
}

