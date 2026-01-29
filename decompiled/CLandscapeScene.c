/* ============================================================================
 * FWOnline Zoneserver - CLandscapeScene
 * Functions: 30
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CLandscapeScene::CLandscapeScene
 * Address: 0x0816d000
 * Stack: 28 bytes
 * Instructions: 144
 */
void CLandscapeScene_CLandscapeScene(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    CScene_CScene(); /* call */
    __t14CGEN_ArrayList1ZUl(); /* call */
    __Q215CLandscapeScene7tVertex(); /* call */
    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    Resize__t14CGEN_ArrayList1ZUlUl(); /* call */
    __throw(); /* call */
    _._t14CGEN_ArrayList1ZUl(); /* call */
    CScene_dtor_CScene(); /* call */
    terminate(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CLandscapeScene::~CLandscapeScene
 * Address: 0x0816d1e0
 * Stack: 20 bytes
 * Instructions: 27
 */
void CLandscapeScene_dtor_CLandscapeScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLandscapeScene_Destroy(); /* call */
    _._t14CGEN_ArrayList1ZUl(); /* call */
    CScene_dtor_CScene(); /* call */
}

/*
 * Function: CLandscapeScene::Destroy
 * Address: 0x0816d22c
 * Stack: 16 bytes
 * Instructions: 75
 */
void CLandscapeScene_Destroy(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CScene_Destroy(); /* call */
    _._Q215CLandscapeScene9tGridUnit(); /* call */
    __builtin_vec_delete(); /* call */
    Destroy__t14CGEN_ArrayList1ZUl(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CLandscapeScene::ReadQuad
 * Address: 0x0816d320
 * Stack: 48 bytes
 * Instructions: 110
 */
void CLandscapeScene_ReadQuad(CLandscapeScene* self) {
    uint32_t local_vars[12]; /* 48 bytes */

    fseek(); /* call */
    fread(); /* call */
    memcpy(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CLandscapeScene::LoadTerrain
 * Address: 0x0816d470
 * Stack: 4 bytes
 * Instructions: 524
 */
void CLandscapeScene_LoadTerrain(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    Resize__t14CGEN_ArrayList1ZUlUl(); /* call */
    fopen(); /* call */
    fread(); /* call */
    __builtin_vec_new(); /* call */
    __Q215CLandscapeScene9tGridUnit(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    memset(); /* call */
    CVector_Set(); /* call */
    CVector___aml(); /* call */
    CVector___apl(); /* call */
    pthread_mutex_init(); /* call */
    SetDestroy__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointQ213GEN_CLINKLIST12eDestroyType(); /* call */
    SetDestroy__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxQ213GEN_CLINKLIST12eDestroyType(); /* call */
    SetDestroy__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleQ213GEN_CLINKLIST12eDestroyType(); /* call */
    CLandscapeScene_ReadQuad(); /* call */
    fseek(); /* call */
    _._Q215CLandscapeScene9tGridUnit(); /* call */
    terminate(); /* call */

    /* Control flow: 13 branches */
}

/*
 * Function: CLandscapeScene::ReadTerrainChunk
 * Address: 0x0816db48
 * Stack: 20 bytes
 * Instructions: 36
 */
void CLandscapeScene_ReadTerrainChunk(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLandscapeScene_LoadTerrain(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CLandscapeScene::LoadSceneMemory
 * Address: 0x0816dbac
 * Stack: 28 bytes
 * Instructions: 219
 */
void CLandscapeScene_LoadSceneMemory(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    CScene_ReadWayPointNetChunk(); /* call */
    CScene_ReadPointChunk(); /* call */
    CScene_ReadBoxChunk(); /* call */
    CLandscapeScene_ReadTerrainChunk(); /* call */
    CScene_ReadModelChunk(); /* call */
    CScene_ReadBoundingBoxChunk(); /* call */
    CScene_OrganisedModel(); /* call */

    /* Control flow: 20 branches */
}

/*
 * Function: CLandscapeScene::AddPoint
 * Address: 0x0816de3c
 * Stack: 4 bytes
 * Instructions: 124
 */
void CLandscapeScene_AddPoint(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ29VKY_SCENE6tPoint(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CLandscapeScene::RemovePoint
 * Address: 0x0816dfa8
 * Stack: 4 bytes
 * Instructions: 122
 */
void CLandscapeScene_RemovePoint(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    Delete__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ29VKY_SCENE6tPoint(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CLandscapeScene::AddCollisionBox
 * Address: 0x0816e108
 * Stack: 4 bytes
 * Instructions: 150
 */
void CLandscapeScene_AddCollisionBox(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CLandscapeScene::RemoveCollisionBox
 * Address: 0x0816e2b8
 * Stack: 4 bytes
 * Instructions: 157
 */
void CLandscapeScene_RemoveCollisionBox(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    Delete__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CLandscapeScene::MoveObject
 * Address: 0x0816e47c
 * Stack: 4 bytes
 * Instructions: 390
 */
void CLandscapeScene_MoveObject(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    pthread_mutex_lock(); /* call */
    printf(); /* call */
    Delete__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    pthread_mutex_unlock(); /* call */
    AddTail__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */

    /* Control flow: 19 branches */
}

/*
 * Function: CLandscapeScene::PlaceObject
 * Address: 0x0816e92c
 * Stack: 4 bytes
 * Instructions: 171
 */
void CLandscapeScene_PlaceObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    pthread_mutex_lock(); /* call */
    printf(); /* call */
    AddTail__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CLandscapeScene::RemoveObject
 * Address: 0x0816eb44
 * Stack: 4 bytes
 * Instructions: 178
 */
void CLandscapeScene_RemoveObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    pthread_mutex_lock(); /* call */
    printf(); /* call */
    Delete__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CLandscapeScene::GetNearestPoint
 * Address: 0x0816ed78
 * Stack: 4 bytes
 * Instructions: 208
 */
void CLandscapeScene_GetNearestPoint(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CLandscapeScene::GetExactNearestObject
 * Address: 0x0816eff8
 * Stack: 4 bytes
 * Instructions: 27
 */
void CLandscapeScene_GetExactNearestObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CLandscapeScene_GetExactNearestObject(); /* call */
}

/*
 * Function: CLandscapeScene::GetExactNearestObject
 * Address: 0x0816f034
 * Stack: 4 bytes
 * Instructions: 338
 */
void CLandscapeScene_GetExactNearestObject(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    pthread_mutex_lock(); /* call */
    printf(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    pthread_mutex_unlock(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CLandscapeScene::GetSortedNearestObject
 * Address: 0x0816f43c
 * Stack: 4 bytes
 * Instructions: 366
 */
void CLandscapeScene_GetSortedNearestObject(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    pthread_mutex_lock(); /* call */
    printf(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    pthread_mutex_unlock(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    qsort(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CLandscapeScene::GetNearestObject
 * Address: 0x0816f8a8
 * Stack: 4 bytes
 * Instructions: 314
 */
void CLandscapeScene_GetNearestObject(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    pthread_mutex_lock(); /* call */
    printf(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    pthread_mutex_unlock(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CLandscapeScene::GetNearestObject
 * Address: 0x0816fc6c
 * Stack: 4 bytes
 * Instructions: 312
 */
void CLandscapeScene_GetNearestObject(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    pthread_mutex_lock(); /* call */
    printf(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    pthread_mutex_unlock(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CLandscapeScene::GetIntersectingBox
 * Address: 0x0817002c
 * Stack: 4 bytes
 * Instructions: 337
 */
void CLandscapeScene_GetIntersectingBox(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    maths_AABOBBIntersect(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CLandscapeScene::GetIntersectingBoxes
 * Address: 0x081704f0
 * Stack: 4 bytes
 * Instructions: 261
 */
void CLandscapeScene_GetIntersectingBoxes(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    maths_AABOBBIntersect(); /* call */
    AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CLandscapeScene::MoveObject
 * Address: 0x0817086c
 * Stack: 0 bytes
 * Instructions: 7
 */
void CLandscapeScene_MoveObject(void) {
}

/*
 * Function: CLandscapeScene::FindGrid
 * Address: 0x08170878
 * Stack: 4 bytes
 * Instructions: 82
 */
void CLandscapeScene_FindGrid(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    __mi(); /* call */
    floorf(); /* call */
    Fastftol(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CLandscapeScene::MoveObject
 * Address: 0x08170970
 * Stack: 4 bytes
 * Instructions: 986
 */
void CLandscapeScene_MoveObject(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CMatrix_CMatrix(); /* call */
    __opf__C7CVector(); /* call */
    pthread_mutex_lock(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    __ml__C7CVectorf(); /* call */
    __pl(); /* call */
    CVector_Set(); /* call */
    __mi(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    __Q222CVKY_CollisionResponse14tCollisionData(); /* call */
    Clear__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    Clear__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    Clear__t14CGEN_ArrayList1ZUl(); /* call */
    memset(); /* call */
    GetInverse__C7CMatrixR7CMatrix(); /* call */
    CMatrix_SetScale(); /* call */
    __ml(); /* call */
    GetTranspose__C7CMatrixR7CMatrix(); /* call */
    CMatrix___vc(); /* call */
    CLandscapeScene_GetFaces(); /* call */
    GetCount__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    __vc__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacei(); /* call */
    __ml(); /* call */
    GetNormal(); /* call */
    VDot(); /* call */
    Add__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacePQ222CVKY_CollisionResponse14tCollisionFace(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    maths_AABOBBIntersect(); /* call */
    CVKY_CollisionResponse_AddBBoxToCollisionList(); /* call */
    Add__t14CGEN_ArrayList1ZUlPUl(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    VecMultiplyMat3x3(); /* call */
    CVKY_CollisionResponse_DoCollisionCheck(); /* call */
    CVector___apl(); /* call */
    CMatrix_AddTranslate(); /* call */
    GetCount__t14CGEN_ArrayList1ZUl(); /* call */
    GetArray__t14CGEN_ArrayList1ZUl(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 14 branches */
}

/*
 * Function: CLandscapeScene::GetRealHeight
 * Address: 0x081717ac
 * Stack: 4 bytes
 * Instructions: 340
 */
void CLandscapeScene_GetRealHeight(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    floorf(); /* call */
    Fastftol(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CLandscapeScene::RayTrace
 * Address: 0x08171bd8
 * Stack: 4 bytes
 * Instructions: 452
 */
void CLandscapeScene_RayTrace(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    __mi(); /* call */
    CVector_Normalize(); /* call */
    CVector_CVector(); /* call */
    CMatrix_CMatrix(); /* call */
    CVector_Set(); /* call */
    CMatrix_SetIdentity(); /* call */
    pthread_mutex_lock(); /* call */
    Clear__t14CGEN_ArrayList1ZUl(); /* call */
    __ml__C7CVectorf(); /* call */
    __pl(); /* call */
    CLandscapeScene_GetRealHeight(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    maths_RayOBBIntersection(); /* call */
    Add__t14CGEN_ArrayList1ZUlPUl(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCount__t14CGEN_ArrayList1ZUl(); /* call */
    GetArray__t14CGEN_ArrayList1ZUl(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 16 branches */
}

/*
 * Function: CLandscapeScene::GetFaces
 * Address: 0x081721f4
 * Stack: 4 bytes
 * Instructions: 585
 */
void CLandscapeScene_GetFaces(CLandscapeScene* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_Set(); /* call */
    CLandscapeScene_FindGrid(); /* call */
    Fastftol(); /* call */
    floorf(); /* call */
    ceil(); /* call */

    /* Control flow: 20 branches */
}

/*
 * Function: CLandscapeScene::ClearCollisionCache
 * Address: 0x0817296c
 * Stack: 0 bytes
 * Instructions: 5
 */
void CLandscapeScene_ClearCollisionCache(void) {
}

/*
 * Function: CLandscapeScene::GetMemoryUsedByScene
 * Address: 0x08172974
 * Stack: 20 bytes
 * Instructions: 167
 */
void CLandscapeScene_GetMemoryUsedByScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    printf(); /* call */
    GetSize__t14CGEN_ArrayList1ZUl(); /* call */
    GetCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    GetFreeCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox(); /* call */
    GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint(); /* call */

    /* Control flow: 1 branches */
}

