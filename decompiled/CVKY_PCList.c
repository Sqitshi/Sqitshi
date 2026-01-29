/* ============================================================================
 * FWOnline Zoneserver - CVKY_PCList
 * Functions: 6
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_PCList::CVKY_PCList
 * Address: 0x0817b8e0
 * Stack: 20 bytes
 * Instructions: 17
 */
void CVKY_PCList_CVKY_PCList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    memset(); /* call */
}

/*
 * Function: CVKY_PCList::~CVKY_PCList
 * Address: 0x0817b908
 * Stack: 20 bytes
 * Instructions: 22
 */
void CVKY_PCList_dtor_CVKY_PCList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_PCList_Destroy(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CVKY_PCList::Destroy
 * Address: 0x0817b93c
 * Stack: 20 bytes
 * Instructions: 157
 */
void CVKY_PCList_Destroy(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CVKY_PCList::ReadStringChunk
 * Address: 0x0817bb0c
 * Stack: 316 bytes
 * Instructions: 193
 */
void CVKY_PCList_ReadStringChunk(void) {
    uint32_t local_vars[79]; /* 316 bytes */

    __t13GEN_CLinkList1Z9tStringSti(); /* call */
    GEN_GetToken(); /* call */
    strcasecmp(); /* call */
    __builtin_new(); /* call */
    strcpy(); /* call */
    AddTail__t13GEN_CLinkList1Z9tStringStP9tStringSt(); /* call */
    GetCount__t13GEN_CLinkList1Z9tStringSt(); /* call */
    __builtin_vec_new(); /* call */
    Reset__t13GEN_CLinkList1Z9tStringSt(); /* call */
    GetCurrent__t13GEN_CLinkList1Z9tStringSt(); /* call */
    memcpy(); /* call */
    GetNext__t13GEN_CLinkList1Z9tStringSt(); /* call */
    _._t13GEN_CLinkList1Z9tStringSt(); /* call */
    __throw(); /* call */
    terminate(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CVKY_PCList::ReadPCChunk
 * Address: 0x0817bd7c
 * Stack: 272 bytes
 * Instructions: 357
 */
void CVKY_PCList_ReadPCChunk(void) {
    uint32_t local_vars[68]; /* 272 bytes */

    GEN_GetToken(); /* call */
    strcasecmp(); /* call */
    CVKY_PCList_ReadStringChunk(); /* call */
    strcpy(); /* call */

    /* Control flow: 17 branches */
}

/*
 * Function: CVKY_PCList::ReadFile
 * Address: 0x0817c1b4
 * Stack: 292 bytes
 * Instructions: 131
 */
void CVKY_PCList_ReadFile(void) {
    uint32_t local_vars[73]; /* 292 bytes */

    CVKY_PCList_Destroy(); /* call */
    memset(); /* call */
    GEN_GetToken(); /* call */
    strcasecmp(); /* call */
    CVKY_PCList_ReadPCChunk(); /* call */

    /* Control flow: 8 branches */
}

