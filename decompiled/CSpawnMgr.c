/* ============================================================================
 * FWOnline Zoneserver - CSpawnMgr
 * Functions: 4
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CSpawnMgr::CSpawnMgr
 * Address: 0x080888e4
 * Stack: 20 bytes
 * Instructions: 19
 */
void CSpawnMgr_CSpawnMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_init(); /* call */
}

/*
 * Function: CSpawnMgr::CreateSpawnMem
 * Address: 0x08088918
 * Stack: 44 bytes
 * Instructions: 104
 */
void CSpawnMgr_CreateSpawnMem(void) {
    uint32_t local_vars[11]; /* 44 bytes */

    __builtin_vec_new(); /* call */
    CSpawnPoint_CSpawnPoint(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    memset(); /* call */
    terminate(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CSpawnMgr::GetSpawnPointCount
 * Address: 0x08088a40
 * Stack: 0 bytes
 * Instructions: 9
 */
void CSpawnMgr_GetSpawnPointCount(void) {
}

/*
 * Function: CSpawnMgr::~CSpawnMgr
 * Address: 0x08088a50
 * Stack: 20 bytes
 * Instructions: 27
 */
void CSpawnMgr_dtor_CSpawnMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 2 branches */
}

