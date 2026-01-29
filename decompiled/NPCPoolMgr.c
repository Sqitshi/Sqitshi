/* ============================================================================
 * FWOnline Zoneserver - NPCPoolMgr
 * Functions: 4
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: NPCPoolMgr::NPCPoolMgr
 * Address: 0x0809e864
 * Stack: 0 bytes
 * Instructions: 10
 */
void NPCPoolMgr_NPCPoolMgr(void) {
}

/*
 * Function: NPCPoolMgr::CreatePool
 * Address: 0x0809e880
 * Stack: 44 bytes
 * Instructions: 129
 */
void NPCPoolMgr_CreatePool(NPCPoolMgr* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    __builtin_vec_new(); /* call */
    NPCPool_NPCPool(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    NPCPool_dtor_NPCPool(); /* call */
    terminate(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: NPCPoolMgr::~NPCPoolMgr
 * Address: 0x0809e9f0
 * Stack: 16 bytes
 * Instructions: 53
 */
void NPCPoolMgr_dtor_NPCPoolMgr(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    NPCPool_dtor_NPCPool(); /* call */
    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: NPCPoolMgr::GetPool
 * Address: 0x0809ea78
 * Stack: 20 bytes
 * Instructions: 70
 */
void NPCPoolMgr_GetPool(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    /* Control flow: 3 branches */
}

