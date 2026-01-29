/* ============================================================================
 * FWOnline Zoneserver - CVKY_NPCTypeList
 * Functions: 4
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_NPCTypeList::CVKY_NPCTypeList
 * Address: 0x0817ae00
 * Stack: 0 bytes
 * Instructions: 10
 */
void CVKY_NPCTypeList_CVKY_NPCTypeList(void) {
}

/*
 * Function: CVKY_NPCTypeList::~CVKY_NPCTypeList
 * Address: 0x0817ae1c
 * Stack: 20 bytes
 * Instructions: 30
 */
void CVKY_NPCTypeList_dtor_CVKY_NPCTypeList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CVKY_NPCTypeList::ReadNPCChunk
 * Address: 0x0817ae68
 * Stack: 276 bytes
 * Instructions: 366
 */
void CVKY_NPCTypeList_ReadNPCChunk(void) {
    uint32_t local_vars[69]; /* 276 bytes */

    GEN_GetToken(); /* call */
    strcasecmp(); /* call */
    strcpy(); /* call */
    GEN_CheckStringIsNumeric(); /* call */
    atol(); /* call */

    /* Control flow: 21 branches */
}

/*
 * Function: CVKY_NPCTypeList::ReadFile
 * Address: 0x0817b35c
 * Stack: 320 bytes
 * Instructions: 214
 */
void CVKY_NPCTypeList_ReadFile(void) {
    uint32_t local_vars[80]; /* 320 bytes */

    __t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeDatai(); /* call */
    GEN_GetToken(); /* call */
    strcasecmp(); /* call */
    __builtin_new(); /* call */
    AddTail__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeDataPQ216CVKY_NPCTypeList12tNPCTypeData(); /* call */
    CVKY_NPCTypeList_ReadNPCChunk(); /* call */
    _._t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData(); /* call */
    GetCount__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData(); /* call */
    __builtin_vec_delete(); /* call */
    __builtin_vec_new(); /* call */
    Reset__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData(); /* call */
    GetCurrent__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData(); /* call */
    memcpy(); /* call */
    GetNext__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData(); /* call */
    __throw(); /* call */
    terminate(); /* call */

    /* Control flow: 8 branches */
}

