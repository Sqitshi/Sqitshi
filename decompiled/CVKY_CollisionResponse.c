/* ============================================================================
 * FWOnline Zoneserver - CVKY_CollisionResponse
 * Functions: 6
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_CollisionResponse::CVKY_CollisionResponse
 * Address: 0x081775f0
 * Stack: 20 bytes
 * Instructions: 59
 */
void CVKY_CollisionResponse_CVKY_CollisionResponse(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    __t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    Resize__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFaceUl(); /* call */
    Resize__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFaceUl(); /* call */
    __throw(); /* call */
    _._t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    _._t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    terminate(); /* call */
}

/*
 * Function: CVKY_CollisionResponse::~CVKY_CollisionResponse
 * Address: 0x0817769c
 * Stack: 20 bytes
 * Instructions: 30
 */
void CVKY_CollisionResponse_dtor_CVKY_CollisionResponse(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    _._t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    _._t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CVKY_CollisionResponse::AddBBoxToCollisionList
 * Address: 0x081776e8
 * Stack: 140 bytes
 * Instructions: 928
 */
void CVKY_CollisionResponse_AddBBoxToCollisionList(void) {
    uint32_t local_vars[35]; /* 140 bytes */

    CVector_CVector(); /* call */
    maths_GetPointsFromOBB(); /* call */
    GetCurrent__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    GetCount__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    GetSize__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    __ml(); /* call */
    GetNormal(); /* call */
    VDot(); /* call */
    Add__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacePQ222CVKY_CollisionResponse14tCollisionFace(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CVKY_CollisionResponse::DoCollisionCheck
 * Address: 0x081781d0
 * Stack: 16 bytes
 * Instructions: 25
 */
void CVKY_CollisionResponse_DoCollisionCheck(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CVKY_CollisionResponse_CheckCollision(); /* call */
}

/*
 * Function: CVKY_CollisionResponse::CheckCollision
 * Address: 0x08178204
 * Stack: 4 bytes
 * Instructions: 701
 */
void CVKY_CollisionResponse_CheckCollision(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    __opf__C7CVector(); /* call */
    CVKY_CollisionResponse_GetCollisionSet(); /* call */
    GetCount__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    __pl(); /* call */
    CVector_CVector(); /* call */
    VDot(); /* call */
    CVector4___ml(); /* call */
    CVector4___op7CVector(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CVector___aml(); /* call */
    VecMultiplyMat3x3(); /* call */
    CVector_Normalize(); /* call */
    CVector4_CVector4(); /* call */
    __ml__C7CVectorf(); /* call */
    CVKY_CollisionResponse_CheckCollision(); /* call */

    /* Control flow: 20 branches */
}

/*
 * Function: CVKY_CollisionResponse::GetCollisionSet
 * Address: 0x08178aa0
 * Stack: 4 bytes
 * Instructions: 627
 */
void CVKY_CollisionResponse_GetCollisionSet(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector4_CVector4(); /* call */
    __pl(); /* call */
    __ml(); /* call */
    CMatrix_AddTranslate(); /* call */
    GetCount__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    CVector_CVector(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CVector_Normalize(); /* call */
    __vc__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacei(); /* call */
    VDot(); /* call */
    __mi(); /* call */
    __ml__C7CVectorf(); /* call */
    FastAbs(); /* call */
    maths_CheckPointInTriangle(); /* call */
    maths_ClosestPointOnTriangle(); /* call */
    __mi(); /* call */
    FastSqrt(); /* call */
    __opf__C7CVector(); /* call */

    /* Control flow: 17 branches */
}

