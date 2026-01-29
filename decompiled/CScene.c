/* ============================================================================
 * FWOnline Zoneserver - CScene
 * Functions: 38
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CScene::CScene
 * Address: 0x08173210
 * Stack: 20 bytes
 * Instructions: 323
 */
void CScene_CScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_EntityManager_CVKY_EntityManager(); /* call */
    CVKY_CollisionResponse_CVKY_CollisionResponse(); /* call */
    __t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity(); /* call */
    __t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    __t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlei(); /* call */
    __t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxi(); /* call */
    __Q29VKY_SCENE12_tFileHeader(); /* call */
    SetMaxFreeCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlei(); /* call */
    PreAlloc__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    SetDestroy__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleQ213GEN_CLINKLIST12eDestroyType(); /* call */
    PreAlloc__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandlei(); /* call */
    PreAlloc__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entityi(); /* call */
    memset(); /* call */
    pthread_mutex_init(); /* call */
    __throw(); /* call */
    _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox(); /* call */
    _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    _._t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    _._t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity(); /* call */
    CVKY_CollisionResponse_dtor_CVKY_CollisionResponse(); /* call */
    CVKY_EntityManager_dtor_CVKY_EntityManager(); /* call */
    terminate(); /* call */
}

/*
 * Function: CScene::~CScene
 * Address: 0x0817369c
 * Stack: 20 bytes
 * Instructions: 110
 */
void CScene_dtor_CScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CScene_Destroy(); /* call */
    Clear__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    Clear__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    Clear__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity(); /* call */
    _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox(); /* call */
    _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    _._t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    _._t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity(); /* call */
    CVKY_CollisionResponse_dtor_CVKY_CollisionResponse(); /* call */
    CVKY_EntityManager_dtor_CVKY_EntityManager(); /* call */
}

/*
 * Function: CScene::Destroy
 * Address: 0x08173804
 * Stack: 20 bytes
 * Instructions: 228
 */
void CScene_Destroy(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    SetDestroy__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleQ213GEN_CLINKLIST12eDestroyType(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CScene_DeleteObject(); /* call */
    Clear__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    Clear__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    Clear__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity(); /* call */
    __builtin_vec_delete(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CScene::CreateObject
 * Address: 0x08173ad4
 * Stack: 4 bytes
 * Instructions: 514
 */
void CScene_CreateObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVKY_EntityManager_FindEntity(); /* call */
    printf(); /* call */
    Get__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    Get__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity(); /* call */
    memset(); /* call */
    CMatrix_SetTranslate(); /* call */
    CVector_Set(); /* call */
    Add__t25CGEN_NicePreAllocPoolList1Z11CVKY_EntityP11CVKY_Entity(); /* call */
    Add__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    AddTail__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    CVKY_EntityManager_InsertEntity(); /* call */

    /* Control flow: 19 branches */
}

/*
 * Function: CScene::DeleteObject
 * Address: 0x081741a4
 * Stack: 16 bytes
 * Instructions: 153
 */
void CScene_DeleteObject(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CVKY_EntityManager_FindEntity(); /* call */
    printf(); /* call */
    SetDestroy__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleQ213GEN_CLINKLIST12eDestroyType(); /* call */
    Delete__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    Add__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    CVKY_EntityManager_RemoveEntity(); /* call */
    Add__t25CGEN_NicePreAllocPoolList1Z11CVKY_EntityP11CVKY_Entity(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CScene::GetPCObject
 * Address: 0x08174384
 * Stack: 0 bytes
 * Instructions: 17
 */
void CScene_GetPCObject(void) {
}

/*
 * Function: CScene::GetNPCObject
 * Address: 0x081743a8
 * Stack: 0 bytes
 * Instructions: 17
 */
void CScene_GetNPCObject(void) {
}

/*
 * Function: CScene::GetObject
 * Address: 0x081743cc
 * Stack: 0 bytes
 * Instructions: 17
 */
void CScene_GetObject(void) {
}

/*
 * Function: CScene::GetSObject
 * Address: 0x081743f0
 * Stack: 0 bytes
 * Instructions: 17
 */
void CScene_GetSObject(void) {
}

/*
 * Function: CScene::FindObject
 * Address: 0x08174414
 * Stack: 20 bytes
 * Instructions: 24
 */
void CScene_FindObject(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_EntityManager_FindEntity(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CScene::FindObjectInScene
 * Address: 0x0817444c
 * Stack: 20 bytes
 * Instructions: 30
 */
void CScene_FindObjectInScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_EntityManager_FindEntity(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CScene::ChangeObjectPos
 * Address: 0x0817449c
 * Stack: 28 bytes
 * Instructions: 83
 */
void CScene_ChangeObjectPos(CScene* self) {
    uint32_t local_vars[7]; /* 28 bytes */

    __mi(); /* call */
    __opf__C7CVector(); /* call */
    memcpy(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CScene::ReadModelChunk
 * Address: 0x08174574
 * Stack: 8 bytes
 * Instructions: 221
 */
void CScene_ReadModelChunk(void) {
    uint32_t local_vars[2]; /* 8 bytes */

    CMatrix_CMatrix(); /* call */
    CMatrix___vc(); /* call */
    CScene_CreateObject(); /* call */
    printf(); /* call */
    atan2(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CScene::IsObjectWithinBoundary
 * Address: 0x08174818
 * Stack: 20 bytes
 * Instructions: 66
 */
void CScene_IsObjectWithinBoundary(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CScene::ReadBoxChunk
 * Address: 0x081748dc
 * Stack: 32 bytes
 * Instructions: 160
 */
void CScene_ReadBoxChunk(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    __builtin_new(); /* call */
    __Q29VKY_SCENE12tBoundingBox(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    memcpy(); /* call */
    memset(); /* call */
    AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox(); /* call */
    terminate(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CScene::ReadBoundingBoxChunk
 * Address: 0x08174ac0
 * Stack: 32 bytes
 * Instructions: 119
 */
void CScene_ReadBoundingBoxChunk(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    __builtin_new(); /* call */
    __Q29VKY_SCENE12tBoundingBox(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    memset(); /* call */
    memcpy(); /* call */
    AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox(); /* call */
    terminate(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CScene::ReadWayPointNetChunk
 * Address: 0x08174c30
 * Stack: 32 bytes
 * Instructions: 61
 */
void CScene_ReadWayPointNetChunk(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_vec_new(); /* call */
    memcpy(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CScene::ReadPointChunk
 * Address: 0x08174cf0
 * Stack: 60 bytes
 * Instructions: 184
 */
void CScene_ReadPointChunk(CScene* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_vec_new(); /* call */
    __Q29VKY_SCENE6tPoint(); /* call */
    __throw(); /* call */
    memset(); /* call */
    terminate(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CScene::LoadScene
 * Address: 0x08174f58
 * Stack: 28 bytes
 * Instructions: 108
 */
void CScene_LoadScene(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    fopen(); /* call */
    fseek(); /* call */
    ftell(); /* call */
    fclose(); /* call */
    __builtin_vec_new(); /* call */
    fread(); /* call */
    __builtin_vec_delete(); /* call */
    strcpy(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CScene::ReadWaypointdata
 * Address: 0x08175080
 * Stack: 44 bytes
 * Instructions: 193
 */
void CScene_ReadWaypointdata(void) {
    uint32_t local_vars[11]; /* 44 bytes */

    fopen(); /* call */
    fseek(); /* call */
    ftell(); /* call */
    fclose(); /* call */
    __builtin_vec_new(); /* call */
    fread(); /* call */
    __builtin_vec_delete(); /* call */
    memcpy(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CScene::OrganisedModel
 * Address: 0x081752b8
 * Stack: 32 bytes
 * Instructions: 150
 */
void CScene_OrganisedModel(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */
    GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CScene::GetMemoryUsed
 * Address: 0x08175470
 * Stack: 16 bytes
 * Instructions: 290
 */
void CScene_GetMemoryUsed(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    GetCount__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity(); /* call */
    printf(); /* call */
    GetCount__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    GetCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox(); /* call */
}

/*
 * Function: CScene::CheckTargetable
 * Address: 0x08175828
 * Stack: 4 bytes
 * Instructions: 254
 */
void CScene_CheckTargetable(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CMatrix___vc(); /* call */
    CVector_Set(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CScene::GetSceneType
 * Address: 0x08175e34
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetSceneType(void) {
}

/*
 * Function: CScene::GetSceneID
 * Address: 0x08175e48
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetSceneID(void) {
}

/*
 * Function: CScene::IsLoaded
 * Address: 0x08175e5c
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_IsLoaded(void) {
}

/*
 * Function: CScene::GetFileHeader
 * Address: 0x08175e70
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetFileHeader(void) {
}

/*
 * Function: CScene::SetSharedData
 * Address: 0x08175e84
 * Stack: 0 bytes
 * Instructions: 8
 */
void CScene_SetSharedData(void) {
}

/*
 * Function: CScene::GetSceneName
 * Address: 0x08175e98
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetSceneName(void) {
}

/*
 * Function: CScene::GetPCObject
 * Address: 0x08175eac
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetPCObject(void) {
}

/*
 * Function: CScene::GetNPCList
 * Address: 0x08175ec0
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetNPCList(void) {
}

/*
 * Function: CScene::GetObjectList
 * Address: 0x08175ed4
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetObjectList(void) {
}

/*
 * Function: CScene::GetSObjectList
 * Address: 0x08175ee8
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetSObjectList(void) {
}

/*
 * Function: CScene::GetUserRelicList
 * Address: 0x08175efc
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetUserRelicList(void) {
}

/*
 * Function: CScene::GetPoints
 * Address: 0x08175f10
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetPoints(void) {
}

/*
 * Function: CScene::GetPointCount
 * Address: 0x08175f24
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetPointCount(void) {
}

/*
 * Function: CScene::GetWayPointNetID
 * Address: 0x08175f38
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetWayPointNetID(void) {
}

/*
 * Function: CScene::GetWayPointNetIDCount
 * Address: 0x08175f4c
 * Stack: 0 bytes
 * Instructions: 9
 */
void CScene_GetWayPointNetIDCount(void) {
}

