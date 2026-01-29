/* ============================================================================
 * FWOnline Zoneserver - CSceneMgr
 * Functions: 25
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CSceneMgr::CSceneMgr
 * Address: 0x08087130
 * Stack: 20 bytes
 * Instructions: 27
 */
void CSceneMgr_CSceneMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLog_RegisterModule(); /* call */
}

/*
 * Function: CSceneMgr::~CSceneMgr
 * Address: 0x0808718c
 * Stack: 16 bytes
 * Instructions: 52
 */
void CSceneMgr_dtor_CSceneMgr(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CScene_dtor_CScene(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CSceneMgr::Init
 * Address: 0x08087210
 * Stack: 1792 bytes
 * Instructions: 234
 */
void CSceneMgr_Init(void) {
    uint32_t local_vars[448]; /* 1792 bytes */

    __builtin_new(); /* call */
    CDBAccess_CDBAccess(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CDBAccess_Init(); /* call */
    CLogFilter_Log(); /* call */
    CDBAccess_SQLQuery(); /* call */
    getcwd(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    chdir(); /* call */
    CSceneMgr_AddScene(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    terminate(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CSceneMgr::ReloadScenes
 * Address: 0x08087514
 * Stack: 24 bytes
 * Instructions: 10
 */
void CSceneMgr_ReloadScenes(void) {
    uint32_t local_vars[6]; /* 24 bytes */
}

/*
 * Function: CSceneMgr::GetCharacterList
 * Address: 0x0808752c
 * Stack: 20 bytes
 * Instructions: 28
 */
void CSceneMgr_GetCharacterList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CScene_GetPCObject(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::Lock
 * Address: 0x08087574
 * Stack: 20 bytes
 * Instructions: 27
 */
void CSceneMgr_Lock(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_rdlock(); /* call */
    __assert_fail(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSceneMgr::LockWrite
 * Address: 0x080875c8
 * Stack: 20 bytes
 * Instructions: 26
 */
void CSceneMgr_LockWrite(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_wrlock(); /* call */
    __assert_fail(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSceneMgr::Lock
 * Address: 0x08087618
 * Stack: 20 bytes
 * Instructions: 26
 */
void CSceneMgr_Lock(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_rdlock(); /* call */
    __assert_fail(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSceneMgr::Unlock
 * Address: 0x08087668
 * Stack: 20 bytes
 * Instructions: 26
 */
void CSceneMgr_Unlock(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_unlock(); /* call */
    __assert_fail(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSceneMgr::Unlock
 * Address: 0x080876b8
 * Stack: 20 bytes
 * Instructions: 26
 */
void CSceneMgr_Unlock(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_unlock(); /* call */
    __assert_fail(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSceneMgr::GetNextScene
 * Address: 0x08087708
 * Stack: 0 bytes
 * Instructions: 16
 */
void CSceneMgr_GetNextScene(void) {

    /* Control flow: 1 branches */
}

/*
 * Function: CSceneMgr::GetObjects
 * Address: 0x08087730
 * Stack: 20 bytes
 * Instructions: 18
 */
void CSceneMgr_GetObjects(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CScene_GetPCObject(); /* call */
}

/*
 * Function: CSceneMgr::MoveObject
 * Address: 0x08087758
 * Stack: 4 bytes
 * Instructions: 117
 */
void CSceneMgr_MoveObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CMatrix_CMatrix(); /* call */
    CScene_FindObject(); /* call */
    CMatrix_SetRotate(); /* call */
    CScene_ChangeObjectPos(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CSceneMgr::AddObject
 * Address: 0x0808789c
 * Stack: 4 bytes
 * Instructions: 126
 */
void CSceneMgr_AddObject(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    CScene_GetSceneID(); /* call */
    pthread_rwlock_wrlock(); /* call */
    __assert_fail(); /* call */
    CScene_CreateObject(); /* call */
    pthread_rwlock_unlock(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CSceneMgr::DeleteObject
 * Address: 0x08087a34
 * Stack: 20 bytes
 * Instructions: 43
 */
void CSceneMgr_DeleteObject(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_wrlock(); /* call */
    CScene_DeleteObject(); /* call */
    pthread_rwlock_unlock(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::CheckSceneLocal
 * Address: 0x08087ab0
 * Stack: 20 bytes
 * Instructions: 30
 */
void CSceneMgr_CheckSceneLocal(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CScene_GetSceneID(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::FindScene
 * Address: 0x08087afc
 * Stack: 20 bytes
 * Instructions: 32
 */
void CSceneMgr_FindScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CScene_GetSceneID(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::GetScriptID
 * Address: 0x08087b4c
 * Stack: 20 bytes
 * Instructions: 37
 */
void CSceneMgr_GetScriptID(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CScene_GetSceneID(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::GetProcessID
 * Address: 0x08087bac
 * Stack: 0 bytes
 * Instructions: 9
 */
void CSceneMgr_GetProcessID(void) {
}

/*
 * Function: CSceneMgr::FindObject
 * Address: 0x08087bc4
 * Stack: 20 bytes
 * Instructions: 53
 */
void CSceneMgr_FindObject(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_rdlock(); /* call */
    CScene_FindObject(); /* call */
    pthread_rwlock_unlock(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::FindObject
 * Address: 0x08087c58
 * Stack: 20 bytes
 * Instructions: 56
 */
void CSceneMgr_FindObject(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_rdlock(); /* call */
    CScene_FindObject(); /* call */
    pthread_rwlock_unlock(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::AddScene
 * Address: 0x08087cfc
 * Stack: 28 bytes
 * Instructions: 173
 */
void CSceneMgr_AddScene(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    CheckScene(); /* call */
    __builtin_new(); /* call */
    CLandscapeScene_CLandscapeScene(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CIndoorScene_CIndoorScene(); /* call */
    pthread_rwlock_init(); /* call */
    CScene_LoadScene(); /* call */
    CLogFilter_Log(); /* call */
    CScene_dtor_CScene(); /* call */
    terminate(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CSceneMgr::AddRelic
 * Address: 0x08087f18
 * Stack: 20 bytes
 * Instructions: 42
 */
void CSceneMgr_AddRelic(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_wrlock(); /* call */
    CScene_GetUserRelicList(); /* call */
    AddTail__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    pthread_rwlock_unlock(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::RemoveRelic
 * Address: 0x08087f8c
 * Stack: 20 bytes
 * Instructions: 44
 */
void CSceneMgr_RemoveRelic(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_wrlock(); /* call */
    CScene_GetUserRelicList(); /* call */
    Delete__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle(); /* call */
    pthread_rwlock_unlock(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSceneMgr::GetRelics
 * Address: 0x08088004
 * Stack: 12 bytes
 * Instructions: 27
 */
void CSceneMgr_GetRelics(void) {
    uint32_t local_vars[3]; /* 12 bytes */

    CScene_GetUserRelicList(); /* call */
}

