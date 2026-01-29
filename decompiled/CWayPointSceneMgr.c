/* ============================================================================
 * FWOnline Zoneserver - CWayPointSceneMgr
 * Functions: 5
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CWayPointSceneMgr::CWayPointSceneMgr
 * Address: 0x080894dc
 * Stack: 0 bytes
 * Instructions: 10
 */
void CWayPointSceneMgr_CWayPointSceneMgr(void) {
}

/*
 * Function: CWayPointSceneMgr::~CWayPointSceneMgr
 * Address: 0x080894f8
 * Stack: 16 bytes
 * Instructions: 53
 */
void CWayPointSceneMgr_dtor_CWayPointSceneMgr(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CWayPointMgr_dtor_CWayPointMgr(); /* call */
    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CWayPointSceneMgr::CreateManager
 * Address: 0x08089578
 * Stack: 60 bytes
 * Instructions: 150
 */
void CWayPointSceneMgr_CreateManager(CWayPointSceneMgr* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    __builtin_vec_new(); /* call */
    CWayPointMgr_CWayPointMgr(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    CWayPointMgr_SetPtList(); /* call */
    CWayPointMgr_dtor_CWayPointMgr(); /* call */
    terminate(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CWayPointSceneMgr::GetManagerCount
 * Address: 0x08089720
 * Stack: 0 bytes
 * Instructions: 9
 */
void CWayPointSceneMgr_GetManagerCount(void) {
}

/*
 * Function: CWayPointSceneMgr::GetWayPointMgr
 * Address: 0x08089730
 * Stack: 20 bytes
 * Instructions: 105
 */
void CWayPointSceneMgr_GetWayPointMgr(CWayPointSceneMgr* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    /* Control flow: 7 branches */
}

