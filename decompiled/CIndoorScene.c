/* ============================================================================
 * FWOnline Zoneserver - CIndoorScene
 * Functions: 27
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CIndoorScene::CIndoorScene
 * Address: 0x08164550
 * Stack: 20 bytes
 * Instructions: 119
 */
void CIndoorScene_CIndoorScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CScene_CScene(); /* call */
    __t14CGEN_ArrayList1ZUl(); /* call */
    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    Resize__t14CGEN_ArrayList1ZUlUl(); /* call */
    __throw(); /* call */
    _._t14CGEN_ArrayList1ZUl(); /* call */
    CScene_dtor_CScene(); /* call */
    terminate(); /* call */
}

/*
 * Function: CIndoorScene::~CIndoorScene
 * Address: 0x081646ec
 * Stack: 20 bytes
 * Instructions: 33
 */
void CIndoorScene_dtor_CIndoorScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CIndoorScene_Destroy(); /* call */
    _._t14CGEN_ArrayList1ZUl(); /* call */
    CScene_dtor_CScene(); /* call */
}

/*
 * Function: CIndoorScene::Destroy
 * Address: 0x0816474c
 * Stack: 16 bytes
 * Instructions: 188
 */
void CIndoorScene_Destroy(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CScene_Destroy(); /* call */
    __builtin_vec_delete(); /* call */
    _._Q212CIndoorScene10tFaceTable(); /* call */
    Destroy__t14CGEN_ArrayList1ZUl(); /* call */

    /* Control flow: 14 branches */
}

/*
 * Function: CIndoorScene::LoadSceneMemory
 * Address: 0x08164a00
 * Stack: 28 bytes
 * Instructions: 239
 */
void CIndoorScene_LoadSceneMemory(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    CScene_ReadWayPointNetChunk(); /* call */
    CScene_ReadPointChunk(); /* call */
    CIndoorScene_ReadBrushChunk(); /* call */
    CScene_ReadBoxChunk(); /* call */
    CIndoorScene_ReadCollisionChunk(); /* call */
    CScene_ReadModelChunk(); /* call */
    CScene_ReadBoundingBoxChunk(); /* call */
    CScene_OrganisedModel(); /* call */

    /* Control flow: 22 branches */
}

/*
 * Function: CIndoorScene::ReadBrushChunk
 * Address: 0x08164cc8
 * Stack: 284 bytes
 * Instructions: 582
 */
void CIndoorScene_ReadBrushChunk(CIndoorScene* self) {
    uint32_t local_vars[71]; /* 284 bytes */

    __builtin_vec_new(); /* call */
    CVKY_Brush_CVKY_Brush(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    memset(); /* call */
    memcpy(); /* call */
    CVector_CVector(); /* call */
    CVKY_Brush_DoCaching(); /* call */
    terminate(); /* call */

    /* Control flow: 16 branches */
}

/*
 * Function: CIndoorScene::ReadCollisionChunk
 * Address: 0x08165584
 * Stack: 92 bytes
 * Instructions: 435
 */
void CIndoorScene_ReadCollisionChunk(CIndoorScene* self) {
    uint32_t local_vars[23]; /* 92 bytes */

    __builtin_vec_new(); /* call */
    __Q212CIndoorScene10tFaceTable(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    memset(); /* call */
    pthread_mutex_init(); /* call */
    SetDestroy__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointQ213GEN_CLINKLIST12eDestroyType(); /* call */
    SetDestroy__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxQ213GEN_CLINKLIST12eDestroyType(); /* call */
    SetDestroy__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleQ213GEN_CLINKLIST12eDestroyType(); /* call */
    SetMaxFreeCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlei(); /* call */
    memcpy(); /* call */
    _._Q212CIndoorScene10tFaceTable(); /* call */
    terminate(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CIndoorScene::FindGrid
 * Address: 0x08165b80
 * Stack: 4 bytes
 * Instructions: 68
 */
void CIndoorScene_FindGrid(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    floorf(); /* call */
    Fastftol(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CIndoorScene::MoveObject
 * Address: 0x08165c58
 * Stack: 4 bytes
 * Instructions: 567
 */
void CIndoorScene_MoveObject(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    Delete__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    pthread_mutex_unlock(); /* call */
    AddTail__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */

    /* Control flow: 35 branches */
}

/*
 * Function: CIndoorScene::PlaceObject
 * Address: 0x081663d8
 * Stack: 4 bytes
 * Instructions: 257
 */
void CIndoorScene_PlaceObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    AddTail__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CIndoorScene::RemoveObject
 * Address: 0x0816674c
 * Stack: 4 bytes
 * Instructions: 266
 */
void CIndoorScene_RemoveObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    Delete__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CIndoorScene::AddPoint
 * Address: 0x08166ae8
 * Stack: 4 bytes
 * Instructions: 214
 */
void CIndoorScene_AddPoint(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ29VKY_SCENE6tPoint(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CIndoorScene::RemovePoint
 * Address: 0x08166dac
 * Stack: 4 bytes
 * Instructions: 213
 */
void CIndoorScene_RemovePoint(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    Delete__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ29VKY_SCENE6tPoint(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CIndoorScene::AddCollisionBox
 * Address: 0x0816706c
 * Stack: 4 bytes
 * Instructions: 239
 */
void CIndoorScene_AddCollisionBox(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CIndoorScene::RemoveCollisionBox
 * Address: 0x0816736c
 * Stack: 4 bytes
 * Instructions: 245
 */
void CIndoorScene_RemoveCollisionBox(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    Delete__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CIndoorScene::GetNearestPoint
 * Address: 0x08167680
 * Stack: 4 bytes
 * Instructions: 298
 */
void CIndoorScene_GetNearestPoint(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode(); /* call */

    /* Control flow: 15 branches */
}

/*
 * Function: CIndoorScene::GetExactNearestObject
 * Address: 0x08167a68
 * Stack: 4 bytes
 * Instructions: 27
 */
void CIndoorScene_GetExactNearestObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CIndoorScene_GetExactNearestObject(); /* call */
}

/*
 * Function: CIndoorScene::GetExactNearestObject
 * Address: 0x08167aa4
 * Stack: 4 bytes
 * Instructions: 414
 */
void CIndoorScene_GetExactNearestObject(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    pthread_mutex_unlock(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */

    /* Control flow: 18 branches */
}

/*
 * Function: CIndoorScene::GetSortedNearestObject
 * Address: 0x08167fe8
 * Stack: 4 bytes
 * Instructions: 440
 */
void CIndoorScene_GetSortedNearestObject(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    pthread_mutex_unlock(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    qsort(); /* call */

    /* Control flow: 18 branches */
}

/*
 * Function: CIndoorScene::GetNearestObject
 * Address: 0x08168588
 * Stack: 4 bytes
 * Instructions: 387
 */
void CIndoorScene_GetNearestObject(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    pthread_mutex_unlock(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */

    /* Control flow: 17 branches */
}

/*
 * Function: CIndoorScene::GetNearestObject
 * Address: 0x08168a88
 * Stack: 4 bytes
 * Instructions: 387
 */
void CIndoorScene_GetNearestObject(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    pthread_mutex_unlock(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */

    /* Control flow: 17 branches */
}

/*
 * Function: CIndoorScene::GetIntersectingBox
 * Address: 0x08168f88
 * Stack: 4 bytes
 * Instructions: 421
 */
void CIndoorScene_GetIntersectingBox(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    maths_AABOBBIntersect(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */

    /* Control flow: 19 branches */
}

/*
 * Function: CIndoorScene::GetIntersectingBoxes
 * Address: 0x08169578
 * Stack: 4 bytes
 * Instructions: 342
 */
void CIndoorScene_GetIntersectingBoxes(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    maths_AABOBBIntersect(); /* call */
    AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */

    /* Control flow: 15 branches */
}

/*
 * Function: CIndoorScene::MoveObject
 * Address: 0x08169a3c
 * Stack: 0 bytes
 * Instructions: 7
 */
void CIndoorScene_MoveObject(void) {
}

/*
 * Function: CIndoorScene::MoveObject
 * Address: 0x08169a48
 * Stack: 4 bytes
 * Instructions: 1266
 */
void CIndoorScene_MoveObject(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CMatrix_CMatrix(); /* call */
    __opf__C7CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    __pl(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    Clear__t14CGEN_ArrayList1ZUl(); /* call */
    Clear__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    Clear__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    __Q222CVKY_CollisionResponse14tCollisionData(); /* call */
    memset(); /* call */
    GetInverse__C7CMatrixR7CMatrix(); /* call */
    CMatrix_SetScale(); /* call */
    __ml(); /* call */
    GetTranspose__C7CMatrixR7CMatrix(); /* call */
    CMatrix___vc(); /* call */
    Add__t14CGEN_ArrayList1ZUlPUl(); /* call */
    GetCount__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    GetSize__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    printf(); /* call */
    __vc__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacei(); /* call */
    __ml(); /* call */
    GetNormal(); /* call */
    VDot(); /* call */
    Add__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacePQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    CVKY_CollisionResponse_AddBBoxToCollisionList(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    VecMultiplyMat3x3(); /* call */
    CVector_Set(); /* call */
    CVKY_CollisionResponse_DoCollisionCheck(); /* call */
    CVector___apl(); /* call */
    CMatrix_AddTranslate(); /* call */
    GetCount__t14CGEN_ArrayList1ZUl(); /* call */
    __vc__t14CGEN_ArrayList1ZUli(); /* call */
    GetArray__t14CGEN_ArrayList1ZUl(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 28 branches */
}

/*
 * Function: CIndoorScene::RayTrace
 * Address: 0x0816acdc
 * Stack: 4 bytes
 * Instructions: 825
 */
void CIndoorScene_RayTrace(CIndoorScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CMatrix_CMatrix(); /* call */
    __mi(); /* call */
    CVector_Normalize(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */
    pthread_mutex_lock(); /* call */
    Clear__t14CGEN_ArrayList1ZUl(); /* call */
    maths_RayBoxIntersection(); /* call */
    Add__t14CGEN_ArrayList1ZUlPUl(); /* call */
    VDot(); /* call */
    maths_RayTriangleIntersect(); /* call */
    GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    maths_RayOBBIntersection(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    __ml__C7CVectorf(); /* call */
    __pl(); /* call */
    GetCount__t14CGEN_ArrayList1ZUl(); /* call */
    __vc__t14CGEN_ArrayList1ZUli(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 38 branches */
}

/*
 * Function: CIndoorScene::ClearCollisionCache
 * Address: 0x0816b970
 * Stack: 0 bytes
 * Instructions: 5
 */
void CIndoorScene_ClearCollisionCache(void) {
}

/*
 * Function: CIndoorScene::GetMemoryUsedByScene
 * Address: 0x0816b978
 * Stack: 36 bytes
 * Instructions: 239
 */
void CIndoorScene_GetMemoryUsedByScene(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    printf(); /* call */
    GetSize__t14CGEN_ArrayList1ZUl(); /* call */
    GetCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    GetFreeCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox(); /* call */
    GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint(); /* call */

    /* Control flow: 2 branches */
}

