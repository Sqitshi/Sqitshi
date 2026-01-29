/* ============================================================================
 * FWOnline Zoneserver - CSndPkt
 * Functions: 25
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CSndPkt::CSndPkt
 * Address: 0x08161340
 * Stack: 20 bytes
 * Instructions: 74
 */
void CSndPkt_CSndPkt(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    memset(); /* call */
    __builtin_vec_new(); /* call */
    CSndPkt_FlushQueues(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSndPkt::CSndPkt
 * Address: 0x0816143c
 * Stack: 28 bytes
 * Instructions: 92
 */
void CSndPkt_CSndPkt(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    memset(); /* call */
    __builtin_vec_new(); /* call */
    CSndPkt_FlushQueues(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSndPkt::~CSndPkt
 * Address: 0x0816155c
 * Stack: 20 bytes
 * Instructions: 45
 */
void CSndPkt_dtor_CSndPkt(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CSndPkt::AddNetObject
 * Address: 0x081615d0
 * Stack: 20 bytes
 * Instructions: 100
 */
void CSndPkt_AddNetObject(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSndPkt_AddNewPacket(); /* call */
    CSndPkt_LocatePacket(); /* call */
    CSndPkt_InsertPackets(); /* call */
    CSndPkt_AddObjectHeader(); /* call */
    CSndPkt_AddObjectData(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CSndPkt::FlushQueues
 * Address: 0x081616e0
 * Stack: 12 bytes
 * Instructions: 77
 */
void CSndPkt_FlushQueues(CSndPkt* self) {
    uint32_t local_vars[3]; /* 12 bytes */

    /* Control flow: 2 branches */
}

/*
 * Function: CSndPkt::GetNextPacket
 * Address: 0x081617e8
 * Stack: 0 bytes
 * Instructions: 9
 */
void CSndPkt_GetNextPacket(void) {
}

/*
 * Function: CSndPkt::DeletePacket
 * Address: 0x081617f8
 * Stack: 0 bytes
 * Instructions: 54
 */
void CSndPkt_DeletePacket(CSndPkt* self) {

    /* Control flow: 4 branches */
}

/*
 * Function: CSndPkt::DeletePackets
 * Address: 0x081618bc
 * Stack: 20 bytes
 * Instructions: 50
 */
void CSndPkt_DeletePackets(CSndPkt* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSndPkt_DeletePacket(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CSndPkt::DeletePacket
 * Address: 0x08161940
 * Stack: 20 bytes
 * Instructions: 37
 */
void CSndPkt_DeletePacket(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSndPkt_DeletePacket(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSndPkt::RemovePacket
 * Address: 0x0816199c
 * Stack: 20 bytes
 * Instructions: 69
 */
void CSndPkt_RemovePacket(CSndPkt* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSndPkt_AddPacketToSent(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CSndPkt::AddSystemPacket
 * Address: 0x08161a84
 * Stack: 20 bytes
 * Instructions: 279
 */
void CSndPkt_AddSystemPacket(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSndPkt_LocateFree(); /* call */
    memcpy(); /* call */
    CSndPkt_GetUID(); /* call */
    CSndPkt_InsertPackets(); /* call */

    /* Control flow: 16 branches */
}

/*
 * Function: CSndPkt::AddAckPkt
 * Address: 0x08161dc8
 * Stack: 32 bytes
 * Instructions: 68
 */
void CSndPkt_AddAckPkt(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    CSndPkt_LocateFree(); /* call */
    CSndPkt_InsertPackets(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CSndPkt::AddUID
 * Address: 0x08161e88
 * Stack: 24 bytes
 * Instructions: 37
 */
void CSndPkt_AddUID(CSndPkt* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 2 branches */
}

/*
 * Function: CSndPkt::ReQueueSent
 * Address: 0x08161ee8
 * Stack: 36 bytes
 * Instructions: 108
 */
void CSndPkt_ReQueueSent(CSndPkt* self) {
    uint32_t local_vars[9]; /* 36 bytes */

    GetTickCount(); /* call */
    CSndPkt_InsertPackets(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CSndPkt::GetUID
 * Address: 0x08162058
 * Stack: 24 bytes
 * Instructions: 32
 */
void CSndPkt_GetUID(void) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 3 branches */
}

/*
 * Function: CSndPkt::SetPacketBreak
 * Address: 0x081620b4
 * Stack: 0 bytes
 * Instructions: 10
 */
void CSndPkt_SetPacketBreak(void) {
}

/*
 * Function: CSndPkt::AddObjectData
 * Address: 0x081620c8
 * Stack: 16 bytes
 * Instructions: 40
 */
void CSndPkt_AddObjectData(CSndPkt* self) {
    uint32_t local_vars[4]; /* 16 bytes */

    memcpy(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSndPkt::AddObjectHeader
 * Address: 0x08162128
 * Stack: 20 bytes
 * Instructions: 46
 */
void CSndPkt_AddObjectHeader(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    memcpy(); /* call */
}

/*
 * Function: CSndPkt::LocateFree
 * Address: 0x08162198
 * Stack: 20 bytes
 * Instructions: 38
 */
void CSndPkt_LocateFree(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    /* Control flow: 1 branches */
}

/*
 * Function: CSndPkt::LocatePacket
 * Address: 0x08162208
 * Stack: 20 bytes
 * Instructions: 50
 */
void CSndPkt_LocatePacket(CSndPkt* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    /* Control flow: 5 branches */
}

/*
 * Function: CSndPkt::AddNewPacket
 * Address: 0x08162288
 * Stack: 20 bytes
 * Instructions: 59
 */
void CSndPkt_AddNewPacket(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSndPkt_LocateFree(); /* call */
    CSndPkt_GetUID(); /* call */
    CSndPkt_AddObjectHeader(); /* call */
    CSndPkt_AddObjectData(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSndPkt::InsertPackets
 * Address: 0x08162324
 * Stack: 20 bytes
 * Instructions: 149
 */
void CSndPkt_InsertPackets(CSndPkt* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    /* Control flow: 12 branches */
}

/*
 * Function: CSndPkt::SetRetryInterval
 * Address: 0x08162528
 * Stack: 0 bytes
 * Instructions: 8
 */
void CSndPkt_SetRetryInterval(void) {
}

/*
 * Function: CSndPkt::SetLimit
 * Address: 0x08162538
 * Stack: 0 bytes
 * Instructions: 8
 */
void CSndPkt_SetLimit(void) {

    /* Control flow: 1 branches */
}

/*
 * Function: CSndPkt::AddPacketToSent
 * Address: 0x08162550
 * Stack: 20 bytes
 * Instructions: 40
 */
void CSndPkt_AddPacketToSent(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    GetTickCount(); /* call */

    /* Control flow: 1 branches */
}

