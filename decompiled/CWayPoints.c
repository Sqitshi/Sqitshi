/* ============================================================================
 * FWOnline Zoneserver - CWayPoints
 * Functions: 2
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CWayPoints::CWayPoints
 * Address: 0x08088aa8
 * Stack: 20 bytes
 * Instructions: 22
 */
void CWayPoints_CWayPoints(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVector_CVector(); /* call */
}

/*
 * Function: CWayPoints::~CWayPoints
 * Address: 0x08088ae8
 * Stack: 20 bytes
 * Instructions: 29
 */
void CWayPoints_dtor_CWayPoints(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 3 branches */
}

