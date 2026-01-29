/* ============================================================================
 * FWOnline Zoneserver - CVKY_MeshFaceCache
 * Functions: 7
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_MeshFaceCache::CVKY_MeshFaceCache
 * Address: 0x08176940
 * Stack: 0 bytes
 * Instructions: 17
 */
void CVKY_MeshFaceCache_CVKY_MeshFaceCache(void) {
}

/*
 * Function: CVKY_MeshFaceCache::~CVKY_MeshFaceCache
 * Address: 0x0817698c
 * Stack: 20 bytes
 * Instructions: 23
 */
void CVKY_MeshFaceCache_dtor_CVKY_MeshFaceCache(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_MeshFaceCache_Destroy(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CVKY_MeshFaceCache::Destroy
 * Address: 0x081769c8
 * Stack: 20 bytes
 * Instructions: 65
 */
void CVKY_MeshFaceCache_Destroy(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_MeshFaceCache_Flush(); /* call */
    __builtin_vec_delete(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CVKY_MeshFaceCache::Flush
 * Address: 0x08176aa0
 * Stack: 20 bytes
 * Instructions: 56
 */
void CVKY_MeshFaceCache_Flush(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_delete(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CVKY_MeshFaceCache::Init
 * Address: 0x08176b74
 * Stack: 28 bytes
 * Instructions: 101
 */
void CVKY_MeshFaceCache_Init(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    CVKY_MeshFaceCache_Destroy(); /* call */
    __builtin_vec_new(); /* call */
    memset(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CVKY_MeshFaceCache::CacheAABBFace
 * Address: 0x08176c9c
 * Stack: 4 bytes
 * Instructions: 326
 */
void CVKY_MeshFaceCache_CacheAABBFace(CVKY_MeshFaceCache* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_CVector(); /* call */
    __builtin_new(); /* call */
    tVKY_BBox_tVKY_BBox(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    __mi(); /* call */
    CVector___aml(); /* call */
    __pl(); /* call */
    terminate(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CVKY_MeshFaceCache::CacheFace
 * Address: 0x08177070
 * Stack: 28 bytes
 * Instructions: 144
 */
void CVKY_MeshFaceCache_CacheFace(CVKY_MeshFaceCache* self) {
    uint32_t local_vars[7]; /* 28 bytes */

    __builtin_new(); /* call */
    tVKY_FaceCache_tVKY_FaceCache(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    GetNormal(); /* call */
    VDot(); /* call */
    terminate(); /* call */

    /* Control flow: 2 branches */
}

