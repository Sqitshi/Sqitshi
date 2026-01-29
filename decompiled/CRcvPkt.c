/* ============================================================================
 * FWOnline Zoneserver - CRcvPkt
 * Functions: 10
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CRcvPkt::CRcvPkt
 * Address: 0x081609f0
 * Stack: 20 bytes
 * Instructions: 42
 */
void CRcvPkt_CRcvPkt(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_new(); /* call */
    memset(); /* call */
    CRcvPkt_AllocDropList(); /* call */
    CRcvPkt_FlushQueues(); /* call */
}

/*
 * Function: CRcvPkt::CRcvPkt
 * Address: 0x08160a6c
 * Stack: 16 bytes
 * Instructions: 61
 */
void CRcvPkt_CRcvPkt(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    __builtin_vec_new(); /* call */
    memset(); /* call */
    CRcvPkt_AllocDropList(); /* call */
    CRcvPkt_FlushQueues(); /* call */
}

/*
 * Function: CRcvPkt::~CRcvPkt
 * Address: 0x08160b10
 * Stack: 20 bytes
 * Instructions: 48
 */
void CRcvPkt_dtor_CRcvPkt(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CRcvPkt::QueuePacket
 * Address: 0x08160b90
 * Stack: 20 bytes
 * Instructions: 160
 */
void CRcvPkt_QueuePacket(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CRcvPkt_LocateFree(); /* call */

    /* Control flow: 13 branches */
}

/*
 * Function: CRcvPkt::GetNetObject
 * Address: 0x08160d98
 * Stack: 16 bytes
 * Instructions: 177
 */
void CRcvPkt_GetNetObject(CRcvPkt* self) {
    uint32_t local_vars[4]; /* 16 bytes */

    CRcvPkt_GetNextPacket(); /* call */
    __assert_fail(); /* call */
    memcpy(); /* call */
    CRcvPkt_FreePacket(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CRcvPkt::FlushQueues
 * Address: 0x08160f98
 * Stack: 16 bytes
 * Instructions: 118
 */
void CRcvPkt_FlushQueues(CRcvPkt* self) {
    uint32_t local_vars[4]; /* 16 bytes */

    /* Control flow: 3 branches */
}

/*
 * Function: CRcvPkt::LocateFree
 * Address: 0x08161128
 * Stack: 24 bytes
 * Instructions: 25
 */
void CRcvPkt_LocateFree(CRcvPkt* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 2 branches */
}

/*
 * Function: CRcvPkt::GetNextPacket
 * Address: 0x0816116c
 * Stack: 24 bytes
 * Instructions: 65
 */
void CRcvPkt_GetNextPacket(CRcvPkt* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 8 branches */
}

/*
 * Function: CRcvPkt::FreePacket
 * Address: 0x0816123c
 * Stack: 0 bytes
 * Instructions: 38
 */
void CRcvPkt_FreePacket(CRcvPkt* self) {

    /* Control flow: 2 branches */
}

/*
 * Function: CRcvPkt::AllocDropList
 * Address: 0x081612b8
 * Stack: 20 bytes
 * Instructions: 45
 */
void CRcvPkt_AllocDropList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_new(); /* call */

    /* Control flow: 3 branches */
}

