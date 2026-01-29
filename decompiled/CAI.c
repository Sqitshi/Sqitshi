/* ============================================================================
 * FWOnline Zoneserver - CAI
 * Functions: 156
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CAI::MemoryStatus
 * Address: 0x08088640
 * Stack: 20 bytes
 * Instructions: 14
 */
void CAI_MemoryStatus(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTaskMgr_DumpMemory(); /* call */
}

/*
 * Function: CAI::ShowDestroyMsg
 * Address: 0x08088660
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_ShowDestroyMsg(void) {
}

/*
 * Function: CAI::HideDestroyMsg
 * Address: 0x08088670
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_HideDestroyMsg(void) {
}

/*
 * Function: CAI::AISceneLock
 * Address: 0x08088690
 * Stack: 20 bytes
 * Instructions: 23
 */
void CAI_AISceneLock(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_Lock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::AISceneUnlock
 * Address: 0x080886d8
 * Stack: 20 bytes
 * Instructions: 18
 */
void CAI_AISceneUnlock(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_Unlock(); /* call */
}

/*
 * Function: CAI::ShowWayPoint
 * Address: 0x08088708
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_ShowWayPoint(void) {
}

/*
 * Function: CAI::HideWayPoint
 * Address: 0x08088718
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_HideWayPoint(void) {
}

/*
 * Function: CAI::ShowMove
 * Address: 0x08088728
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_ShowMove(void) {
}

/*
 * Function: CAI::HideMove
 * Address: 0x08088740
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_HideMove(void) {
}

/*
 * Function: CAI::CAI
 * Address: 0x08089864
 * Stack: 52 bytes
 * Instructions: 295
 */
void CAI_CAI(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    CTimer_CTimer(); /* call */
    NPCGroupInfo_NPCGroupInfo(); /* call */
    CNPCAttAccess_CNPCAttAccess(); /* call */
    CSpawnMgr_CSpawnMgr(); /* call */
    CWayPointSceneMgr_CWayPointSceneMgr(); /* call */
    NPCPoolMgr_NPCPoolMgr(); /* call */
    CSceneSharedData_CSceneSharedData(); /* call */
    FWLogClient_FWLogClient(); /* call */
    time(); /* call */
    CLog_RegisterModule(); /* call */
    __builtin_vec_new(); /* call */
    memset(); /* call */
    pthread_mutex_init(); /* call */
    GetTickCount(); /* call */
    strcpy(); /* call */
    __throw(); /* call */
    FWLogClient_dtor_FWLogClient(); /* call */
    CSceneSharedData_dtor_CSceneSharedData(); /* call */
    NPCPoolMgr_dtor_NPCPoolMgr(); /* call */
    CWayPointSceneMgr_dtor_CWayPointSceneMgr(); /* call */
    CSpawnMgr_dtor_CSpawnMgr(); /* call */
    NPCGroupInfo_dtor_NPCGroupInfo(); /* call */
    terminate(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CAI::~CAI
 * Address: 0x08089ce4
 * Stack: 20 bytes
 * Instructions: 76
 */
void CAI_dtor_CAI(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTaskMgr_dtor_CTaskMgr(); /* call */
    __builtin_vec_delete(); /* call */
    FWLogClient_dtor_FWLogClient(); /* call */
    CSceneSharedData_dtor_CSceneSharedData(); /* call */
    NPCPoolMgr_dtor_NPCPoolMgr(); /* call */
    CWayPointSceneMgr_dtor_CWayPointSceneMgr(); /* call */
    CSpawnMgr_dtor_CSpawnMgr(); /* call */
    NPCGroupInfo_dtor_NPCGroupInfo(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::GetTargetPtr
 * Address: 0x08089dcc
 * Stack: 20 bytes
 * Instructions: 94
 */
void CAI_GetTargetPtr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::ShowAttack
 * Address: 0x08089f14
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_ShowAttack(void) {
}

/*
 * Function: CAI::ShowTick
 * Address: 0x08089f24
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_ShowTick(void) {
}

/*
 * Function: CAI::HideAttack
 * Address: 0x08089f34
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_HideAttack(void) {
}

/*
 * Function: CAI::RefreshSlotList
 * Address: 0x08089f44
 * Stack: 20 bytes
 * Instructions: 26
 */
void CAI_RefreshSlotList(CAI* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    /* Control flow: 2 branches */
}

/*
 * Function: CAI::GetAttackPerc
 * Address: 0x0808cdcc
 * Stack: 20 bytes
 * Instructions: 195
 */
void CAI_GetAttackPerc(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::GetPowerID
 * Address: 0x0808d030
 * Stack: 20 bytes
 * Instructions: 178
 */
void CAI_GetPowerID(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::GetPowerType
 * Address: 0x0808d248
 * Stack: 20 bytes
 * Instructions: 180
 */
void CAI_GetPowerType(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::ProcessNPC
 * Address: 0x0808d480
 * Stack: 8 bytes
 * Instructions: 193
 */
void CAI_ProcessNPC(CAI* self) {
    uint32_t local_vars[2]; /* 8 bytes */

    GetTickCount(); /* call */
    CTimer_StartTimer(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */
    CAI_AICycle(); /* call */
    CTimer_StopTimer(); /* call */
    memset(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::OnTarget
 * Address: 0x0808d6fc
 * Stack: 36 bytes
 * Instructions: 41
 */
void CAI_OnTarget(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::SetGravDist
 * Address: 0x0808d760
 * Stack: 24 bytes
 * Instructions: 15
 */
void CAI_SetGravDist(CAI* self) {
    uint32_t local_vars[6]; /* 24 bytes */
}

/*
 * Function: CAI::GetGrav
 * Address: 0x0808d784
 * Stack: 4 bytes
 * Instructions: 581
 */
void CAI_GetGrav(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CVector_CVector(); /* call */
    memset(); /* call */

    /* Control flow: 14 branches */
}

/*
 * Function: CAI::GetWayPointEndCoord
 * Address: 0x0808df40
 * Stack: 20 bytes
 * Instructions: 73
 */
void CAI_GetWayPointEndCoord(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CAI_AISceneLock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CAI_AISceneUnlock(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CAI::GetDestCoord
 * Address: 0x0808e008
 * Stack: 12 bytes
 * Instructions: 219
 */
void CAI_GetDestCoord(void) {
    uint32_t local_vars[3]; /* 12 bytes */

    CScene_GetSceneID(); /* call */
    CWayPointSceneMgr_GetWayPointMgr(); /* call */
    CAI_AISceneLock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CAI_AISceneUnlock(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CAI::GetExtent
 * Address: 0x0808e288
 * Stack: 20 bytes
 * Instructions: 78
 */
void CAI_GetExtent(CAI* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_CollisionList_GetNPCCount(); /* call */
    CVKY_CollisionList_GetNPCData(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CAI::DoStuck
 * Address: 0x0808e37c
 * Stack: 36 bytes
 * Instructions: 116
 */
void CAI_DoStuck(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CScene_GetSceneID(); /* call */
    CWayPointSceneMgr_GetWayPointMgr(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CWayPointMgr_GetPathWay(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::CollideWithPartner
 * Address: 0x0808e4f8
 * Stack: 4 bytes
 * Instructions: 393
 */
void CAI_CollideWithPartner(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CAI_GetExtent(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CSceneMgr_Lock(); /* call */
    IDXTRANS(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    CVector___aml(); /* call */
    __ml(); /* call */
    CVector_Normalize(); /* call */
    VDot(); /* call */
    CSceneMgr_Unlock(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 14 branches */
}

/*
 * Function: CAI::ShowColl
 * Address: 0x0808ea1c
 * Stack: 0 bytes
 * Instructions: 10
 */
void CAI_ShowColl(void) {
}

/*
 * Function: CAI::HideColl
 * Address: 0x0808ea34
 * Stack: 0 bytes
 * Instructions: 9
 */
void CAI_HideColl(void) {
}

/*
 * Function: CAI::ResetStuckCheck
 * Address: 0x0808ea48
 * Stack: 20 bytes
 * Instructions: 17
 */
void CAI_ResetStuckCheck(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    GetTickCount(); /* call */
}

/*
 * Function: CAI::MoveToVector
 * Address: 0x0808ea78
 * Stack: 20 bytes
 * Instructions: 56
 */
void CAI_MoveToVector(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
    CAI_ResetStuckCheck(); /* call */
}

/*
 * Function: CAI::MoveToSpawnPoint
 * Address: 0x0808eb28
 * Stack: 4 bytes
 * Instructions: 178
 */
void CAI_MoveToSpawnPoint(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CVector_CVector(); /* call */
    CAI_ResetStuckCheck(); /* call */
    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_GetGrav(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::MoveToChar
 * Address: 0x0808ed88
 * Stack: 20 bytes
 * Instructions: 54
 */
void CAI_MoveToChar(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
    CAI_ResetStuckCheck(); /* call */
}

/*
 * Function: CAI::ReloadNPCAttrib
 * Address: 0x0808ee28
 * Stack: 20 bytes
 * Instructions: 20
 */
void CAI_ReloadNPCAttrib(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CNPCAttAccess_ResetAttID(); /* call */
}

/*
 * Function: CAI::Arrived
 * Address: 0x0808ee58
 * Stack: 20 bytes
 * Instructions: 97
 */
void CAI_Arrived(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CAI_RunTask(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::DoStuckNonCombat
 * Address: 0x0808ef9c
 * Stack: 20 bytes
 * Instructions: 43
 */
void CAI_DoStuckNonCombat(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CNPCAttAccess_GetByAttID(); /* call */
    CAI_PickHomeLocation(); /* call */
    CAI_RemoveEntity(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::Move
 * Address: 0x0808f01c
 * Stack: 4 bytes
 * Instructions: 190
 */
void CAI_Move(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CAI_GetTargetCoord(); /* call */
    CAI_StrafeNPC(); /* call */
    CAI_MoveNPC(); /* call */
    CAI_DoStuck(); /* call */
    CAI_DoStuckNonCombat(); /* call */
    CAI_RemoveEntity(); /* call */
    CAI_RunTask(); /* call */
    CAI_Arrived(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CAI::GetTargetCoord
 * Address: 0x0808f22c
 * Stack: 92 bytes
 * Instructions: 253
 */
void CAI_GetTargetCoord(void) {
    uint32_t local_vars[23]; /* 92 bytes */

    IDXTRANS(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CSceneMgr_Unlock(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CScene_GetSceneID(); /* call */
    CWayPointSceneMgr_GetWayPointMgr(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CAI::CheckPriorty
 * Address: 0x0808f53c
 * Stack: 68 bytes
 * Instructions: 139
 */
void CAI_CheckPriorty(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    IDXTRANS(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CMemAccess_Lock(); /* call */
    CSceneMgr_Unlock(); /* call */
    CAI_LockOnTarget(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CAI::ScanEnemy
 * Address: 0x0808f6f8
 * Stack: 4 bytes
 * Instructions: 622
 */
void CAI_ScanEnemy(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CVector_CVector(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CMemAccess_Lock(); /* call */
    CSceneMgr_Unlock(); /* call */
    CAI_LockOnTarget(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_ProceedAggro(); /* call */
    CAI_ProceedTarAss(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CAI_RunTask(); /* call */

    /* Control flow: 51 branches */
}

/*
 * Function: CAI::PassiveScan
 * Address: 0x0808fecc
 * Stack: 4 bytes
 * Instructions: 512
 */
void CAI_PassiveScan(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CSceneMgr_Lock(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CScene_FindObjectInScene(); /* call */
    CMemAccess_Lock(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_ProceedAggro(); /* call */
    CAI_ProceedTarAss(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CSceneMgr_Unlock(); /* call */
    CAI_RunTask(); /* call */

    /* Control flow: 42 branches */
}

/*
 * Function: CAI::StrafeNPC
 * Address: 0x0809053c
 * Stack: 4 bytes
 * Instructions: 484
 */
void CAI_StrafeNPC(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CVector_CVector(); /* call */
    CMatrix_CMatrix(); /* call */
    tVKY_CollisionInfo_tVKY_CollisionInfo(); /* call */
    CAI_CollideWithPartner(); /* call */
    GetTickCount(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    __ml(); /* call */
    CVector_Normalize(); /* call */
    CAI_GetExtent(); /* call */
    __ml__C7CVectorf(); /* call */
    CMatrix_SetTranslate(); /* call */
    CAI_GetGrav(); /* call */
    CMatrix_SetTranslate(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_ChangeObjectPos(); /* call */
    CSceneMgr_Unlock(); /* call */
    CAI_AddPos(); /* call */
    CAI_RemoveEntity(); /* call */

    /* Control flow: 17 branches */
}

/*
 * Function: CAI::AddPos
 * Address: 0x08090b9c
 * Stack: 4 bytes
 * Instructions: 248
 */
void CAI_AddPos(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    GetTickCount(); /* call */
    CVector_CVector(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CAI::MoveNPC
 * Address: 0x08090ecc
 * Stack: 4 bytes
 * Instructions: 590
 */
void CAI_MoveNPC(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    GetTickCount(); /* call */
    CVector_CVector(); /* call */
    CMatrix_CMatrix(); /* call */
    tVKY_CollisionInfo_tVKY_CollisionInfo(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CVector_Normalize(); /* call */
    CVector___aml(); /* call */
    CAI_RotateTowardsDest(); /* call */
    CAI_GetExtent(); /* call */
    __ml__C7CVectorf(); /* call */
    CMatrix_SetTranslate(); /* call */
    CAI_GetGrav(); /* call */
    CMatrix_SetTranslate(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_ChangeObjectPos(); /* call */
    CSceneMgr_Unlock(); /* call */
    CAI_AddPos(); /* call */
    CAI_RemoveEntity(); /* call */

    /* Control flow: 31 branches */
}

/*
 * Function: CAI::RotateTowardsDest
 * Address: 0x0809166c
 * Stack: 8 bytes
 * Instructions: 201
 */
void CAI_RotateTowardsDest(void) {
    uint32_t local_vars[2]; /* 8 bytes */

    CMatrix_CMatrix(); /* call */
    CMatrix_SetIdentity(); /* call */
    CMatrix___vc(); /* call */
    CVector_CVector(); /* call */
    __ml(); /* call */
    CVector_CVector(); /* call */
    CMatrix_SetRotation(); /* call */
    __ml(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CVector_Normalize(); /* call */
    atan2(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::RangeCheck
 * Address: 0x080918f0
 * Stack: 84 bytes
 * Instructions: 90
 */
void CAI_RangeCheck(void) {
    uint32_t local_vars[21]; /* 84 bytes */

    IDXTRANS(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CTaskMgr_AssignTask(); /* call */
}

/*
 * Function: CAI::ChangeStance
 * Address: 0x08091a1c
 * Stack: 68 bytes
 * Instructions: 108
 */
void CAI_ChangeStance(CAI* self) {
    uint32_t local_vars[17]; /* 68 bytes */

    IDXTRANS(); /* call */
    CTaskMgr_AssignTask(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CAI::DesignateMovement
 * Address: 0x08091ba8
 * Stack: 32 bytes
 * Instructions: 194
 */
void CAI_DesignateMovement(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    GetTickCount(); /* call */
    CAI_PickHomeLocation(); /* call */
    CAI_ChangeStance(); /* call */
    rand(); /* call */
    CAI_GetDirectionByCharID(); /* call */

    /* Control flow: 13 branches */
}

/*
 * Function: CAI::LockOnTarget
 * Address: 0x08091e1c
 * Stack: 20 bytes
 * Instructions: 52
 */
void CAI_LockOnTarget(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
    GetTickCount(); /* call */
    CAI_ChangeStance(); /* call */
}

/*
 * Function: CAI::RunTask
 * Address: 0x08091eb8
 * Stack: 68 bytes
 * Instructions: 45
 */
void CAI_RunTask(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    CTaskMgr_AssignTask(); /* call */
    memset(); /* call */
}

/*
 * Function: CAI::ReCheckRange
 * Address: 0x08091f48
 * Stack: 68 bytes
 * Instructions: 293
 */
void CAI_ReCheckRange(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CVector_CVector(); /* call */
    CAI_AISceneLock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CAI_AISceneUnlock(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CAI_RangeCheck(); /* call */
    __eq(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::RecalcCoord
 * Address: 0x08092350
 * Stack: 4 bytes
 * Instructions: 107
 */
void CAI_RecalcCoord(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CScene_FindObjectInScene(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    VectorRotY(); /* call */
    __pl(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::ProceedTarAss
 * Address: 0x08092490
 * Stack: 36 bytes
 * Instructions: 74
 */
void CAI_ProceedTarAss(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CAI_AIGetClanRating(); /* call */
    rand(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::AggroCount
 * Address: 0x08092568
 * Stack: 20 bytes
 * Instructions: 60
 */
void CAI_AggroCount(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    NPCGroupInfo_GetNPCCount(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::IsAggroed
 * Address: 0x08092630
 * Stack: 36 bytes
 * Instructions: 72
 */
void CAI_IsAggroed(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    NPCGroupInfo_GetNPCCount(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::ClearAggro
 * Address: 0x0809271c
 * Stack: 36 bytes
 * Instructions: 96
 */
void CAI_ClearAggro(CAI* self) {
    uint32_t local_vars[9]; /* 36 bytes */

    NPCGroupInfo_GetNPCCount(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CAI::ReleaseTarget
 * Address: 0x08092868
 * Stack: 64 bytes
 * Instructions: 178
 */
void CAI_ReleaseTarget(CAI* self) {
    uint32_t local_vars[16]; /* 64 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CMemAccess_Lock(); /* call */
    CAI_RunTask(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::CheckGuard
 * Address: 0x08092aac
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_CheckGuard(void) {
}

/*
 * Function: CAI::ClearGuard
 * Address: 0x08092ac0
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_ClearGuard(void) {
}

/*
 * Function: CAI::ActiveScan
 * Address: 0x08092ad4
 * Stack: 80 bytes
 * Instructions: 328
 */
void CAI_ActiveScan(CAI* self) {
    uint32_t local_vars[20]; /* 80 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CSceneMgr_Unlock(); /* call */
    CMemAccess_Lock(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_ProceedAggro(); /* call */
    GetTickCount(); /* call */
    CAI_GetTopTarget(); /* call */
    CAI_ReleaseTarget(); /* call */
    CAI_LockOnTarget(); /* call */

    /* Control flow: 36 branches */
}

/*
 * Function: CAI::ExecCombat
 * Address: 0x08092efc
 * Stack: 68 bytes
 * Instructions: 60
 */
void CAI_ExecCombat(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    IDXTRANS(); /* call */
    CTaskMgr_AssignTask(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CAI::InitializeRandomLocation
 * Address: 0x08092fcc
 * Stack: 4 bytes
 * Instructions: 89
 */
void CAI_InitializeRandomLocation(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    rand(); /* call */
    CAI_NPCQuadEdgeLoc(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CAI::EscapeLure
 * Address: 0x080930c0
 * Stack: 8 bytes
 * Instructions: 195
 */
void CAI_EscapeLure(void) {
    uint32_t local_vars[2]; /* 8 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CVector_CVector(); /* call */
    sqrt(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::GetRandomLocation
 * Address: 0x08093330
 * Stack: 4 bytes
 * Instructions: 404
 */
void CAI_GetRandomLocation(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    rand(); /* call */
    CAI_NPCQuadEdgeLoc(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CVector_CVector(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CVKY_CollisionList_GetNPCCount(); /* call */
    CVKY_CollisionList_GetNPCData(); /* call */
    CAI_GetGrav(); /* call */
    CAI_MoveToVector(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CAI::NPCQuadEdgeLoc
 * Address: 0x0809383c
 * Stack: 48 bytes
 * Instructions: 101
 */
void CAI_NPCQuadEdgeLoc(void) {
    uint32_t local_vars[12]; /* 48 bytes */

    CVector_CVector(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CAI::PickHomeLocation
 * Address: 0x0809394c
 * Stack: 4 bytes
 * Instructions: 264
 */
void CAI_PickHomeLocation(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CVector_CVector(); /* call */
    CVector_CVector(); /* call */
    CVKY_CollisionList_GetNPCCount(); /* call */
    CVKY_CollisionList_GetNPCData(); /* call */
    CAI_GetGrav(); /* call */
    CAI_MoveToVector(); /* call */
    CAI_GetRandomLocation(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CAI::GetSpawnPoint
 * Address: 0x08093cb8
 * Stack: 44 bytes
 * Instructions: 107
 */
void CAI_GetSpawnPoint(CAI* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::SeekWayPoint
 * Address: 0x08093e0c
 * Stack: 4 bytes
 * Instructions: 200
 */
void CAI_SeekWayPoint(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CScene_GetSceneID(); /* call */
    CWayPointSceneMgr_GetWayPointMgr(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CAI::CheckNPCState
 * Address: 0x0809407c
 * Stack: 36 bytes
 * Instructions: 47
 */
void CAI_CheckNPCState(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
}

/*
 * Function: CAI::DoCountDeduct
 * Address: 0x08094108
 * Stack: 12 bytes
 * Instructions: 153
 */
void CAI_DoCountDeduct(void) {
    uint32_t local_vars[3]; /* 12 bytes */

    spawnmutexlock(); /* call */
    spawnmutexunlock(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::RemoveEntity
 * Address: 0x08094348
 * Stack: 68 bytes
 * Instructions: 74
 */
void CAI_RemoveEntity(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CAI_DoCountDeduct(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::RemovedNPC
 * Address: 0x08094428
 * Stack: 28 bytes
 * Instructions: 82
 */
void CAI_RemovedNPC(CAI* self) {
    uint32_t local_vars[7]; /* 28 bytes */

    IDXTRANS(); /* call */
    GetTickCount(); /* call */
    CAI_RemoveEntity(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::SetSceneID
 * Address: 0x08094538
 * Stack: 0 bytes
 * Instructions: 12
 */
void CAI_SetSceneID(void) {
}

/*
 * Function: CAI::CheckSpawnPointStatus
 * Address: 0x08094554
 * Stack: 36 bytes
 * Instructions: 103
 */
void CAI_CheckSpawnPointStatus(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CAI::DoNPCDisappear
 * Address: 0x080946ac
 * Stack: 4 bytes
 * Instructions: 478
 */
void CAI_DoNPCDisappear(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    GetTickCount(); /* call */
    CVector_CVector(); /* call */
    CScene_GetSceneID(); /* call */
    NPCPoolMgr_GetPool(); /* call */
    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CSceneMgr_Lock(); /* call */
    CSceneMgr_Unlock(); /* call */
    __assert_fail(); /* call */
    CTaskMgr_AssignTask(); /* call */
    NPCPool_PutNPC(); /* call */

    /* Control flow: 27 branches */
}

/*
 * Function: CAI::ShowAttackMessage
 * Address: 0x08094da0
 * Stack: 0 bytes
 * Instructions: 9
 */
void CAI_ShowAttackMessage(void) {
}

/*
 * Function: CAI::HideAttackMessage
 * Address: 0x08094db4
 * Stack: 0 bytes
 * Instructions: 9
 */
void CAI_HideAttackMessage(void) {
}

/*
 * Function: CAI::DoCombat
 * Address: 0x08094dc8
 * Stack: 4 bytes
 * Instructions: 697
 */
void CAI_DoCombat(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CVector_CVector(); /* call */
    GetTickCount(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CSceneMgr_Unlock(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    GetMagnitude__C7CVector(); /* call */
    CAI_RunTask(); /* call */
    CAI_MoveToChar(); /* call */
    CTaskMgr_AssignTask(); /* call */

    /* Control flow: 34 branches */
}

/*
 * Function: CAI::AICycle
 * Address: 0x08095840
 * Stack: 68 bytes
 * Instructions: 287
 */
void CAI_AICycle(CAI* self) {
    uint32_t local_vars[17]; /* 68 bytes */

    IDXTRANS(); /* call */
    CAI_EscapeLure(); /* call */
    CAI_RemoveEntity(); /* call */
    CAI_DoNPCDisappear(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    GetTickCount(); /* call */
    CAI_CheckCallForHelp(); /* call */
    CAI_RunTask(); /* call */
    CTaskMgr_AssignTask(); /* call */
    CAI_DesignateMovement(); /* call */
    CAI_Move(); /* call */
    CAI_ActiveScan(); /* call */
    CAI_ScanEnemy(); /* call */
    CAI_PassiveScan(); /* call */
    CAI_CheckPriorty(); /* call */
    CAI_DoCombat(); /* call */

    /* Control flow: 21 branches */
}

/*
 * Function: CAI::Startup
 * Address: 0x08095bc8
 * Stack: 1244 bytes
 * Instructions: 1118
 */
void CAI_Startup(CAI* self) {
    uint32_t local_vars[311]; /* 1244 bytes */

    CSceneMgr_GetProcessID(); /* call */
    CMemMgr_AccessMem(); /* call */
    __builtin_new(); /* call */
    CTaskMgr_CTaskMgr(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CTaskMgr_Init(); /* call */
    GetTickCount(); /* call */
    FWLogClient_SetLog(); /* call */
    CLogFilter_Log(); /* call */
    strlen(); /* call */
    FWLogClient_Init(); /* call */
    CSceneMgr_GetNextScene(); /* call */
    NPCPoolMgr_CreatePool(); /* call */
    CWayPointSceneMgr_CreateManager(); /* call */
    CScene_GetPointCount(); /* call */
    CScene_GetPoints(); /* call */
    CSpawnMgr_CreateSpawnMem(); /* call */
    CMemAccess_Lock(); /* call */
    CScene_GetSceneID(); /* call */
    NPCPoolMgr_GetPool(); /* call */
    NPCPool_CreateNPCSlots(); /* call */
    CWayPointSceneMgr_GetWayPointMgr(); /* call */
    CWayPointMgr_SetWayPointSize(); /* call */
    NPCGroupInfo_CreateNPC(); /* call */
    getcwd(); /* call */
    chdir(); /* call */
    CSceneSharedData_LoadCharacterCollisionBoxList(); /* call */
    NPCPool_GetNPCSlotCount(); /* call */
    CVector_CVector(); /* call */
    CSceneMgr_AddObject(); /* call */
    NPCPool_PutNPC(); /* call */
    CAI_AllocateDummyNPC(); /* call */
    CAI_AllocateSpawnPt(); /* call */
    CWayPointMgr_AllocateWayPoint(); /* call */
    CScene_ReadWaypointdata(); /* call */
    memcpy(); /* call */
    CScene_GetSceneName(); /* call */
    CPathFinder_CPathFinder(); /* call */
    __builtin_vec_new(); /* call */
    AddHead__t17CGEN_NiceLinkList1Z11CPathFinderP11CPathFinder(); /* call */
    CPathFinder_dtor_CPathFinder(); /* call */
    __builtin_vec_delete(); /* call */
    terminate(); /* call */

    /* Control flow: 41 branches */
}

/*
 * Function: CAI::LineOfSight
 * Address: 0x08096b84
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_LineOfSight(void) {
}

/*
 * Function: CAI::Process
 * Address: 0x08096df8
 * Stack: 1108 bytes
 * Instructions: 169
 */
void CAI_Process(void) {
    uint32_t local_vars[277]; /* 1108 bytes */

    getpid(); /* call */
    CLogFilter_Log(); /* call */
    GetTickCount(); /* call */
    CTaskMgr_ReloadScripts(); /* call */
    CTaskMgr_ActivityLog(); /* call */
    CAI_ScanSpawnPt(); /* call */
    CAI_ProcessNPC(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CAI::DebugSpawnPt
 * Address: 0x0809708c
 * Stack: 36 bytes
 * Instructions: 141
 */
void CAI_DebugSpawnPt(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CAI::DebugNPC
 * Address: 0x0809728c
 * Stack: 20 bytes
 * Instructions: 67
 */
void CAI_DebugNPC(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    NPCGroupInfo_GetNPCCount(); /* call */
    printf(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CAI::ClearCollCache
 * Address: 0x0809736c
 * Stack: 20 bytes
 * Instructions: 36
 */
void CAI_ClearCollCache(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_GetNextScene(); /* call */
    CScene_GetSceneID(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CAI::SetID
 * Address: 0x080973cc
 * Stack: 0 bytes
 * Instructions: 11
 */
void CAI_SetID(void) {
}

/*
 * Function: CAI::ClearID
 * Address: 0x080973e4
 * Stack: 0 bytes
 * Instructions: 9
 */
void CAI_ClearID(void) {
}

/*
 * Function: CAI::TakeNPC
 * Address: 0x080973f8
 * Stack: 20 bytes
 * Instructions: 52
 */
void CAI_TakeNPC(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
    CAI_ChangeStance(); /* call */
}

/*
 * Function: CAI::GetNPCCount
 * Address: 0x0809749c
 * Stack: 20 bytes
 * Instructions: 39
 */
void CAI_GetNPCCount(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    NPCGroupInfo_GetNPCCount(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CAI::ReleaseNPC
 * Address: 0x08097514
 * Stack: 20 bytes
 * Instructions: 40
 */
void CAI_ReleaseNPC(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
}

/*
 * Function: CAI::SetNPCPos
 * Address: 0x0809759c
 * Stack: 100 bytes
 * Instructions: 104
 */
void CAI_SetNPCPos(void) {
    uint32_t local_vars[25]; /* 100 bytes */

    IDXTRANS(); /* call */
    CVector_CVector(); /* call */
    CMatrix_SetTranslate(); /* call */
    CAI_AISceneLock(); /* call */
    CMatrix_CMatrix(); /* call */
    CMatrix_SetIdentity(); /* call */
    CScene_ChangeObjectPos(); /* call */
    CAI_AISceneUnlock(); /* call */
}

/*
 * Function: CAI::SetNPCX
 * Address: 0x080976e0
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_SetNPCX(void) {
}

/*
 * Function: CAI::SetNPCY
 * Address: 0x080976f4
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_SetNPCY(void) {
}

/*
 * Function: CAI::SetNPCZ
 * Address: 0x08097708
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_SetNPCZ(void) {
}

/*
 * Function: CAI::SetSpawnPeriod
 * Address: 0x0809771c
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_SetSpawnPeriod(void) {
}

/*
 * Function: CAI::ScanSpawnPt
 * Address: 0x08097730
 * Stack: 4 bytes
 * Instructions: 1176
 */
void CAI_ScanSpawnPt(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    GetTickCount(); /* call */
    CScene_GetSceneID(); /* call */
    gametime(); /* call */
    CLogFilter_Log(); /* call */
    modf(); /* call */
    time(); /* call */
    localtime(); /* call */
    memset(); /* call */
    mktime(); /* call */
    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */
    CAI_AISceneLock(); /* call */
    CVector_CVector(); /* call */
    CAI_AISceneUnlock(); /* call */
    CAI_AllocateNPC(); /* call */

    /* Control flow: 55 branches */
}

/*
 * Function: CAI::ActivateSpawnpt
 * Address: 0x080987e4
 * Stack: 4 bytes
 * Instructions: 87
 */
void CAI_ActivateSpawnpt(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CAI_AllocateNPC(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::GetSpawnNPC
 * Address: 0x08098908
 * Stack: 60 bytes
 * Instructions: 178
 */
void CAI_GetSpawnNPC(CAI* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CAI::ActivateSpawnPt
 * Address: 0x08098b78
 * Stack: 4 bytes
 * Instructions: 220
 */
void CAI_ActivateSpawnPt(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    memset(); /* call */
    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    CLogFilter_Log(); /* call */
    CAI_AllocateNPC(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CAI::ActivateSpawnPtGrp
 * Address: 0x08098e6c
 * Stack: 4 bytes
 * Instructions: 122
 */
void CAI_ActivateSpawnPtGrp(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_AllocateNPC(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::ResetTickSpawnGrp
 * Address: 0x08099018
 * Stack: 16 bytes
 * Instructions: 75
 */
void CAI_ResetTickSpawnGrp(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    GetTickCount(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::DeleteSpawnedNPCGrp
 * Address: 0x08099118
 * Stack: 36 bytes
 * Instructions: 117
 */
void CAI_DeleteSpawnedNPCGrp(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */
    CAI_DoCountDeduct(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CAI::DeleteSpawnedNPC
 * Address: 0x080992c0
 * Stack: 36 bytes
 * Instructions: 117
 */
void CAI_DeleteSpawnedNPC(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */
    CAI_DoCountDeduct(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CAI::GetSpawnPtCnt
 * Address: 0x08099458
 * Stack: 32 bytes
 * Instructions: 89
 */
void CAI_GetSpawnPtCnt(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::CheckSpawnLiving
 * Address: 0x0809958c
 * Stack: 36 bytes
 * Instructions: 116
 */
void CAI_CheckSpawnLiving(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CAI::SetSpawnID
 * Address: 0x0809971c
 * Stack: 0 bytes
 * Instructions: 8
 */
void CAI_SetSpawnID(void) {
}

/*
 * Function: CAI::CascadeSPCheck
 * Address: 0x08099730
 * Stack: 20 bytes
 * Instructions: 78
 */
void CAI_CascadeSPCheck(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::ShowSpawn
 * Address: 0x08099840
 * Stack: 36 bytes
 * Instructions: 124
 */
void CAI_ShowSpawn(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CAI::HideSpawn
 * Address: 0x08099a00
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_HideSpawn(void) {
}

/*
 * Function: CAI::OverrideSuicide
 * Address: 0x08099a10
 * Stack: 0 bytes
 * Instructions: 11
 */
void CAI_OverrideSuicide(void) {

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::OverrideScan
 * Address: 0x08099a30
 * Stack: 0 bytes
 * Instructions: 11
 */
void CAI_OverrideScan(void) {

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::OverrideSuicideRange
 * Address: 0x08099a50
 * Stack: 24 bytes
 * Instructions: 13
 */
void CAI_OverrideSuicideRange(CAI* self) {
    uint32_t local_vars[6]; /* 24 bytes */
}

/*
 * Function: CAI::OverrideScanRange
 * Address: 0x08099a70
 * Stack: 24 bytes
 * Instructions: 13
 */
void CAI_OverrideScanRange(CAI* self) {
    uint32_t local_vars[6]; /* 24 bytes */
}

/*
 * Function: CAI::SetQuestOwner
 * Address: 0x08099a90
 * Stack: 36 bytes
 * Instructions: 118
 */
void CAI_SetQuestOwner(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CAI::SetNoDeath
 * Address: 0x08099c24
 * Stack: 36 bytes
 * Instructions: 125
 */
void CAI_SetNoDeath(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CAI::AllocateSpawnPt
 * Address: 0x08099dec
 * Stack: 92 bytes
 * Instructions: 459
 */
void CAI_AllocateSpawnPt(CAI* self) {
    uint32_t local_vars[23]; /* 92 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CMemAccess_Lock(); /* call */
    memcpy(); /* call */
    GetTickCount(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::ReloadSpawnPt
 * Address: 0x0809a480
 * Stack: 68 bytes
 * Instructions: 125
 */
void CAI_ReloadSpawnPt(CAI* self) {
    uint32_t local_vars[17]; /* 68 bytes */

    CMemAccess_Purge(); /* call */
    CMemAccess_Lock(); /* call */
    CSpawnMgr_GetSpawnPointCount(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::ReloadSpawnDataAll
 * Address: 0x0809a618
 * Stack: 60 bytes
 * Instructions: 453
 */
void CAI_ReloadSpawnDataAll(CAI* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CMemAccess_Purge(); /* call */
    CMemAccess_Lock(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_DeleteSpawnedNPC(); /* call */
    GetTickCount(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CAI::ReloadSpawnData
 * Address: 0x0809ac80
 * Stack: 60 bytes
 * Instructions: 438
 */
void CAI_ReloadSpawnData(CAI* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    CMemAccess_Purge(); /* call */
    CMemAccess_Lock(); /* call */
    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_DeleteSpawnedNPC(); /* call */
    GetTickCount(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::GetDirectionByAttID
 * Address: 0x0809b2b0
 * Stack: 20 bytes
 * Instructions: 45
 */
void CAI_GetDirectionByAttID(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CNPCAttAccess_GetByAttID(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CAI::ReloadNPCDataAll
 * Address: 0x0809b33c
 * Stack: 36 bytes
 * Instructions: 50
 */
void CAI_ReloadNPCDataAll(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CMemAccess_Purge(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::ReloadAttrib
 * Address: 0x0809b3d8
 * Stack: 32 bytes
 * Instructions: 33
 */
void CAI_ReloadAttrib(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    CMemAccess_Purge(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
}

/*
 * Function: CAI::SetNPCForceRetreat
 * Address: 0x0809b42c
 * Stack: 20 bytes
 * Instructions: 88
 */
void CAI_SetNPCForceRetreat(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    NPCGroupInfo_GetNPCCount(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::GetDirectionByCharID
 * Address: 0x0809b568
 * Stack: 36 bytes
 * Instructions: 74
 */
void CAI_GetDirectionByCharID(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::AllocateLoot
 * Address: 0x0809b65c
 * Stack: 20 bytes
 * Instructions: 39
 */
void CAI_AllocateLoot(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CAI_AllocateLoot(); /* call */
}

/*
 * Function: CAI::AllocateLootExt1
 * Address: 0x0809b6b4
 * Stack: 60 bytes
 * Instructions: 147
 */
void CAI_AllocateLootExt1(CAI* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    IDXTRANS(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CAI::AllocateLootComplete
 * Address: 0x0809b8a8
 * Stack: 36 bytes
 * Instructions: 50
 */
void CAI_AllocateLootComplete(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CAI_AllocateLoot(); /* call */
    CAI_AllocateLootExt1(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::AllocateLoot
 * Address: 0x0809b91c
 * Stack: 156 bytes
 * Instructions: 344
 */
void CAI_AllocateLoot(CAI* self) {
    uint32_t local_vars[39]; /* 156 bytes */

    CScene_GetSceneID(); /* call */
    NPCPoolMgr_GetPool(); /* call */
    NPCPool_GetFreeNPC(); /* call */
    CMatrix_CMatrix(); /* call */
    CMatrix_SetTranslate(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CVKY_CollisionList_GetNPCCount(); /* call */
    CVKY_CollisionList_GetNPCData(); /* call */
    memset(); /* call */
    GetTickCount(); /* call */
    CMemAccess_Lock(); /* call */
    CAI_AISceneLock(); /* call */
    CAI_AISceneUnlock(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CAI::AllocateDummyNPC
 * Address: 0x0809bdd0
 * Stack: 96 bytes
 * Instructions: 123
 */
void CAI_AllocateDummyNPC(CAI* self) {
    uint32_t local_vars[24]; /* 96 bytes */

    CVector_CVector(); /* call */
    CScene_GetSceneID(); /* call */
    NPCPoolMgr_GetPool(); /* call */
    NPCPool_GetFreeNPC(); /* call */
    CMatrix_CMatrix(); /* call */
    CMatrix_SetTranslate(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    memset(); /* call */
    GetTickCount(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::SpawnedNPC
 * Address: 0x0809bf5c
 * Stack: 4 bytes
 * Instructions: 67
 */
void CAI_SpawnedNPC(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CSceneMgr_GetNextScene(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_AllocateNPC(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CAI::AllocateNPC
 * Address: 0x0809c00c
 * Stack: 4 bytes
 * Instructions: 1114
 */
void CAI_AllocateNPC(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    spawnmutexlock(); /* call */
    spawnmutexunlock(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CScene_GetSceneID(); /* call */
    NPCPoolMgr_GetPool(); /* call */
    NPCPool_GetFreeNPC(); /* call */
    CMatrix_CMatrix(); /* call */
    CVKY_CollisionList_GetNPCCount(); /* call */
    CVKY_CollisionList_GetNPCData(); /* call */
    CMatrix_SetTranslate(); /* call */
    stLoc_stLoc(); /* call */
    CAI_InitializeRandomLocation(); /* call */
    CVector_CVector(); /* call */
    CAI_GetGrav(); /* call */
    CMatrix_SetTranslate(); /* call */
    CAI_GetDirectionByAttID(); /* call */
    rand(); /* call */
    CAI_AISceneLock(); /* call */
    CAI_AISceneUnlock(); /* call */
    memset(); /* call */
    GetTickCount(); /* call */
    time(); /* call */

    /* Control flow: 25 branches */
}

/*
 * Function: CAI::GetFreeIndex
 * Address: 0x0809d07c
 * Stack: 16 bytes
 * Instructions: 54
 */
void CAI_GetFreeIndex(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    IDXTRANS(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CAI::GetTopTenList
 * Address: 0x0809d118
 * Stack: 20 bytes
 * Instructions: 49
 */
void CAI_GetTopTenList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::GetIndex
 * Address: 0x0809d1b0
 * Stack: 16 bytes
 * Instructions: 70
 */
void CAI_GetIndex(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    IDXTRANS(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CAI::GetMaxDamage
 * Address: 0x0809d288
 * Stack: 28 bytes
 * Instructions: 124
 */
void CAI_GetMaxDamage(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    IDXTRANS(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::GetMinDamage
 * Address: 0x0809d418
 * Stack: 28 bytes
 * Instructions: 120
 */
void CAI_GetMinDamage(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    IDXTRANS(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::ProceedWithAggro
 * Address: 0x0809d5f4
 * Stack: 80 bytes
 * Instructions: 175
 */
void CAI_ProceedWithAggro(void) {
    uint32_t local_vars[20]; /* 80 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CMemAccess_Lock(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CAI::GetNPCPartner
 * Address: 0x0809d830
 * Stack: 92 bytes
 * Instructions: 302
 */
void CAI_GetNPCPartner(CAI* self) {
    uint32_t local_vars[23]; /* 92 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    NPCGroupInfo_GetNPCCount(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */
    qsort(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CAI::RefreshTopTarget
 * Address: 0x0809dc04
 * Stack: 108 bytes
 * Instructions: 473
 */
void CAI_RefreshTopTarget(CAI* self) {
    uint32_t local_vars[27]; /* 108 bytes */

    IDXTRANS(); /* call */
    pthread_mutex_lock(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CSceneMgr_Unlock(); /* call */
    CMemAccess_Lock(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_ProceedAggro(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 23 branches */
}

/*
 * Function: CAI::GetTopTarget
 * Address: 0x0809e204
 * Stack: 20 bytes
 * Instructions: 19
 */
void CAI_GetTopTarget(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CAI_RefreshTopTarget(); /* call */
}

/*
 * Function: CAI::Manual_Loot
 * Address: 0x0809e22c
 * Stack: 52 bytes
 * Instructions: 89
 */
void CAI_Manual_Loot(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    IDXTRANS(); /* call */
    CVector_CVector(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CNPCAttAccess_GetByCharID(); /* call */
    CAI_AllocateLoot(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::SetDropLootFlag
 * Address: 0x0809e324
 * Stack: 20 bytes
 * Instructions: 35
 */
void CAI_SetDropLootFlag(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    IDXTRANS(); /* call */
}

/*
 * Function: CAI::AIGetClanRating
 * Address: 0x0809e38c
 * Stack: 36 bytes
 * Instructions: 31
 */
void CAI_AIGetClanRating(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CMemAccess_Lock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CAI::ShowChangeMove
 * Address: 0x0809e3e0
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_ShowChangeMove(void) {
}

/*
 * Function: CAI::HideChangeMove
 * Address: 0x0809e3f0
 * Stack: 0 bytes
 * Instructions: 7
 */
void CAI_HideChangeMove(void) {
}

/*
 * Function: CAI::GetScriptCount
 * Address: 0x0809e400
 * Stack: 0 bytes
 * Instructions: 9
 */
void CAI_GetScriptCount(void) {
}

/*
 * Function: CAI::GetClanParty
 * Address: 0x0809e414
 * Stack: 4 bytes
 * Instructions: 187
 */
void CAI_GetClanParty(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CMemAccess_Lock(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CAI::SetSpawnOnStat
 * Address: 0x0809eb4c
 * Stack: 16 bytes
 * Instructions: 164
 */
void CAI_SetSpawnOnStat(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    GetTickCount(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CAI::SetSpawnMax
 * Address: 0x0809ed9c
 * Stack: 20 bytes
 * Instructions: 136
 */
void CAI_SetSpawnMax(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CAI::GetSpawnPtDetail
 * Address: 0x0809ef88
 * Stack: 60 bytes
 * Instructions: 176
 */
void CAI_GetSpawnPtDetail(CAI* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CAI::GetSpawnPt
 * Address: 0x0809f1c8
 * Stack: 4 bytes
 * Instructions: 579
 */
void CAI_GetSpawnPt(CAI* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CSceneMgr_GetNextScene(); /* call */
    CScene_GetSceneID(); /* call */
    CSceneMgr_Lock(); /* call */
    CSceneMgr_Unlock(); /* call */
    __builtin_vec_new(); /* call */
    CSpawnMgr_GetSpawnPointCount(); /* call */
    __mi(); /* call */
    GetMagnitude__C7CVector(); /* call */

    /* Control flow: 14 branches */
}

/*
 * Function: CAI::GetSpawnStat
 * Address: 0x0809fbe8
 * Stack: 12 bytes
 * Instructions: 68
 */
void CAI_GetSpawnStat(CAI* self) {
    uint32_t local_vars[3]; /* 12 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CAI::SetSpawnPtByGroup
 * Address: 0x0809fcc8
 * Stack: 52 bytes
 * Instructions: 106
 */
void CAI_SetSpawnPtByGroup(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CAI::ProceedAggro
 * Address: 0x0809fe3c
 * Stack: 52 bytes
 * Instructions: 95
 */
void CAI_ProceedAggro(CAI* self) {
    uint32_t local_vars[13]; /* 52 bytes */

    CMemAccess_Lock(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CAI::CheckCallForHelp
 * Address: 0x0809ff50
 * Stack: 156 bytes
 * Instructions: 603
 */
void CAI_CheckCallForHelp(CAI* self) {
    uint32_t local_vars[39]; /* 156 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObjectInScene(); /* call */
    CSceneMgr_Unlock(); /* call */
    CMemAccess_Lock(); /* call */
    CScene_GetSceneID(); /* call */
    CAI_ProceedAggro(); /* call */

    /* Control flow: 31 branches */
}

