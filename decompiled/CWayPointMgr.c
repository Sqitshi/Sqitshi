/* ============================================================================
 * FWOnline Zoneserver - CWayPointMgr
 * Functions: 8
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CWayPointMgr::GetWayPointSize
 * Address: 0x08088b30
 * Stack: 0 bytes
 * Instructions: 9
 */
void CWayPointMgr_GetWayPointSize(void) {
}

/*
 * Function: CWayPointMgr::SetWayPointSize
 * Address: 0x08088b40
 * Stack: 44 bytes
 * Instructions: 129
 */
void CWayPointMgr_SetWayPointSize(CWayPointMgr* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    __builtin_vec_new(); /* call */
    CWayPoints_CWayPoints(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    CWayPoints_dtor_CWayPoints(); /* call */
    terminate(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CWayPointMgr::CWayPointMgr
 * Address: 0x08088cb0
 * Stack: 20 bytes
 * Instructions: 37
 */
void CWayPointMgr_CWayPointMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __t17CGEN_NiceLinkList1Z11CPathFinderi(); /* call */
    __throw(); /* call */
    _._t17CGEN_NiceLinkList1Z11CPathFinder(); /* call */
    terminate(); /* call */
}

/*
 * Function: CWayPointMgr::GetActualIndex
 * Address: 0x08088d1c
 * Stack: 24 bytes
 * Instructions: 39
 */
void CWayPointMgr_GetActualIndex(CWayPointMgr* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 3 branches */
}

/*
 * Function: CWayPointMgr::~CWayPointMgr
 * Address: 0x08088d90
 * Stack: 16 bytes
 * Instructions: 58
 */
void CWayPointMgr_dtor_CWayPointMgr(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CWayPoints_dtor_CWayPoints(); /* call */
    __builtin_vec_delete(); /* call */
    _._t17CGEN_NiceLinkList1Z11CPathFinder(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CWayPointMgr::GetPathWay
 * Address: 0x08088f28
 * Stack: 4 bytes
 * Instructions: 324
 */
void CWayPointMgr_GetPathWay(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CSceneMgr_Lock(); /* call */
    CSceneMgr_Unlock(); /* call */
    qsort(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CWayPointMgr_GetActualIndex(); /* call */
    GetHead__t17CGEN_NiceLinkList1Z11CPathFinderRPQ2t17CGEN_NiceLinkList1Z11CPathFinder5CNode(); /* call */
    GetNext__t17CGEN_NiceLinkList1Z11CPathFinderRPQ2t17CGEN_NiceLinkList1Z11CPathFinder5CNode(); /* call */

    /* Control flow: 15 branches */
}

/*
 * Function: CWayPointMgr::AllocateWayPoint
 * Address: 0x080892f0
 * Stack: 4 bytes
 * Instructions: 161
 */
void CWayPointMgr_AllocateWayPoint(CWayPointMgr* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CWayPointMgr::SetPtList
 * Address: 0x08089854
 * Stack: 0 bytes
 * Instructions: 8
 */
void CWayPointMgr_SetPtList(void) {
}

