/* ============================================================================
 * FWOnline Zoneserver - CVKY_CollisionCache
 * Functions: 5
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_CollisionCache::CVKY_CollisionCache
 * Address: 0x08177208
 * Stack: 0 bytes
 * Instructions: 13
 */
void CVKY_CollisionCache_CVKY_CollisionCache(void) {
}

/*
 * Function: CVKY_CollisionCache::~CVKY_CollisionCache
 * Address: 0x08177238
 * Stack: 20 bytes
 * Instructions: 22
 */
void CVKY_CollisionCache_dtor_CVKY_CollisionCache(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_CollisionCache_Destroy(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CVKY_CollisionCache::Destroy
 * Address: 0x0817726c
 * Stack: 16 bytes
 * Instructions: 48
 */
void CVKY_CollisionCache_Destroy(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CVKY_MeshFaceCache_dtor_CVKY_MeshFaceCache(); /* call */
    __builtin_vec_delete(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CVKY_CollisionCache::Init
 * Address: 0x081772f8
 * Stack: 60 bytes
 * Instructions: 154
 */
void CVKY_CollisionCache_Init(CVKY_CollisionCache* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    CVKY_CollisionCache_Destroy(); /* call */
    __builtin_vec_new(); /* call */
    CVKY_MeshFaceCache_CVKY_MeshFaceCache(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    CVKY_MeshFaceCache_Init(); /* call */
    CVKY_MeshFaceCache_dtor_CVKY_MeshFaceCache(); /* call */
    terminate(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CVKY_CollisionCache::Flush
 * Address: 0x081774b0
 * Stack: 20 bytes
 * Instructions: 31
 */
void CVKY_CollisionCache_Flush(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_MeshFaceCache_Flush(); /* call */

    /* Control flow: 2 branches */
}

