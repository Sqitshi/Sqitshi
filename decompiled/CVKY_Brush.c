/* ============================================================================
 * FWOnline Zoneserver - CVKY_Brush
 * Functions: 3
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_Brush::CVKY_Brush
 * Address: 0x0816c020
 * Stack: 20 bytes
 * Instructions: 33
 */
void CVKY_Brush_CVKY_Brush(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVector_CVector(); /* call */
}

/*
 * Function: CVKY_Brush::DoCaching
 * Address: 0x081766b0
 * Stack: 44 bytes
 * Instructions: 128
 */
void CVKY_Brush_DoCaching(void) {
    uint32_t local_vars[11]; /* 44 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_vec_new(); /* call */
    tVKY_FaceCache_tVKY_FaceCache(); /* call */
    __throw(); /* call */
    CVKY_Brush_CacheFace(); /* call */
    terminate(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CVKY_Brush::CacheFace
 * Address: 0x08176828
 * Stack: 16 bytes
 * Instructions: 99
 */
void CVKY_Brush_CacheFace(CVKY_Brush* self) {
    uint32_t local_vars[4]; /* 16 bytes */

    GetNormal(); /* call */
    VDot(); /* call */
}

