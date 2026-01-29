/* ============================================================================
 * FWOnline Zoneserver - CVKY_CollisionList
 * Functions: 7
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_CollisionList::GetNPCData
 * Address: 0x080a0b88
 * Stack: 0 bytes
 * Instructions: 9
 */
void CVKY_CollisionList_GetNPCData(void) {
}

/*
 * Function: CVKY_CollisionList::GetNPCCount
 * Address: 0x080a0b98
 * Stack: 0 bytes
 * Instructions: 9
 */
void CVKY_CollisionList_GetNPCCount(void) {
}

/*
 * Function: CVKY_CollisionList::CVKY_CollisionList
 * Address: 0x08179900
 * Stack: 0 bytes
 * Instructions: 12
 */
void CVKY_CollisionList_CVKY_CollisionList(void) {
}

/*
 * Function: CVKY_CollisionList::~CVKY_CollisionList
 * Address: 0x08179928
 * Stack: 20 bytes
 * Instructions: 41
 */
void CVKY_CollisionList_dtor_CVKY_CollisionList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CVKY_CollisionList::ReadPCChunk
 * Address: 0x08179998
 * Stack: 364 bytes
 * Instructions: 422
 */
void CVKY_CollisionList_ReadPCChunk(CVKY_CollisionList* self) {
    uint32_t local_vars[91]; /* 364 bytes */

    __t13GEN_CLinkList1Z7CVectori(); /* call */
    GEN_GetToken(); /* call */
    strcasecmp(); /* call */
    __builtin_new(); /* call */
    CVector_CVector(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    GEN_CheckStringIsNumeric(); /* call */
    _._t13GEN_CLinkList1Z7CVector(); /* call */
    atof(); /* call */
    AddTail__t13GEN_CLinkList1Z7CVectorP7CVector(); /* call */
    __builtin_vec_delete(); /* call */
    GetCount__t13GEN_CLinkList1Z7CVector(); /* call */
    __builtin_vec_new(); /* call */
    Reset__t13GEN_CLinkList1Z7CVector(); /* call */
    GetCurrent__t13GEN_CLinkList1Z7CVector(); /* call */
    GetNext__t13GEN_CLinkList1Z7CVector(); /* call */
    terminate(); /* call */

    /* Control flow: 20 branches */
}

/*
 * Function: CVKY_CollisionList::ReadNPCChunk
 * Address: 0x08179f84
 * Stack: 364 bytes
 * Instructions: 422
 */
void CVKY_CollisionList_ReadNPCChunk(CVKY_CollisionList* self) {
    uint32_t local_vars[91]; /* 364 bytes */

    __t13GEN_CLinkList1Z7CVectori(); /* call */
    GEN_GetToken(); /* call */
    strcasecmp(); /* call */
    __builtin_new(); /* call */
    CVector_CVector(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    GEN_CheckStringIsNumeric(); /* call */
    _._t13GEN_CLinkList1Z7CVector(); /* call */
    atof(); /* call */
    AddTail__t13GEN_CLinkList1Z7CVectorP7CVector(); /* call */
    __builtin_vec_delete(); /* call */
    GetCount__t13GEN_CLinkList1Z7CVector(); /* call */
    __builtin_vec_new(); /* call */
    Reset__t13GEN_CLinkList1Z7CVector(); /* call */
    GetCurrent__t13GEN_CLinkList1Z7CVector(); /* call */
    GetNext__t13GEN_CLinkList1Z7CVector(); /* call */
    terminate(); /* call */

    /* Control flow: 20 branches */
}

/*
 * Function: CVKY_CollisionList::ReadFile
 * Address: 0x0817a574
 * Stack: 1044 bytes
 * Instructions: 122
 */
void CVKY_CollisionList_ReadFile(void) {
    uint32_t local_vars[261]; /* 1044 bytes */

    __builtin_vec_delete(); /* call */
    GEN_GetToken(); /* call */
    strcasecmp(); /* call */
    CVKY_CollisionList_ReadPCChunk(); /* call */
    CVKY_CollisionList_ReadNPCChunk(); /* call */

    /* Control flow: 10 branches */
}

