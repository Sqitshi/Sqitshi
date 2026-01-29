/* ============================================================================
 * FWOnline Zoneserver - CVKY_EntityManager
 * Functions: 5
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_EntityManager::CVKY_EntityManager
 * Address: 0x0817a990
 * Stack: 28 bytes
 * Instructions: 90
 */
void CVKY_EntityManager_CVKY_EntityManager(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    CGEN_NiceNodeLinkList_CGEN_NiceNodeLinkList(); /* call */
    __throw(); /* call */
    CGEN_NiceNodeLinkList_dtor_CGEN_NiceNodeLinkList(); /* call */
    terminate(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CVKY_EntityManager::~CVKY_EntityManager
 * Address: 0x0817aa88
 * Stack: 16 bytes
 * Instructions: 50
 */
void CVKY_EntityManager_dtor_CVKY_EntityManager(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CGEN_NiceNodeLinkList_dtor_CGEN_NiceNodeLinkList(); /* call */
    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CVKY_EntityManager::FindEntity
 * Address: 0x0817ab08
 * Stack: 16 bytes
 * Instructions: 46
 */
void CVKY_EntityManager_FindEntity(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CGEN_NiceNodeLinkList_GetHead(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CVKY_EntityManager::InsertEntity
 * Address: 0x0817ab7c
 * Stack: 20 bytes
 * Instructions: 24
 */
void CVKY_EntityManager_InsertEntity(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CGEN_NiceNodeLinkList_AddTail(); /* call */
}

/*
 * Function: CVKY_EntityManager::RemoveEntity
 * Address: 0x0817abb8
 * Stack: 20 bytes
 * Instructions: 43
 */
void CVKY_EntityManager_RemoveEntity(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CGEN_NiceNodeLinkList_SetDestroy(); /* call */
    CGEN_NiceNodeLinkList_Delete(); /* call */
}

