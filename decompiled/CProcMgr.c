/* ============================================================================
 * FWOnline Zoneserver - CProcMgr
 * Functions: 17
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CProcMgr::CProcMgr
 * Address: 0x0804ee00
 * Stack: 32 bytes
 * Instructions: 98
 */
void CProcMgr_CProcMgr(void) {
    uint32_t local_vars[8]; /* 32 bytes */

    CLog_RegisterModule(); /* call */
    gettimeofday(); /* call */
    srand(); /* call */
    memset(); /* call */
    __builtin_new(); /* call */
    CRC32_CRC32(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    terminate(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CProcMgr::~CProcMgr
 * Address: 0x0804ef50
 * Stack: 20 bytes
 * Instructions: 75
 */
void CProcMgr_dtor_CProcMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CCommsMgr_dtor_CCommsMgr(); /* call */
    CSceneMgr_dtor_CSceneMgr(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    close(); /* call */
    unlink(); /* call */
    CRC32_dtor_CRC32(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CProcMgr::Startup
 * Address: 0x0804f030
 * Stack: 60 bytes
 * Instructions: 499
 */
void CProcMgr_Startup(void) {
    uint32_t local_vars[15]; /* 60 bytes */

    CLog_SetLogFile(); /* call */
    CLogFilter_Log(); /* call */
    __builtin_new(); /* call */
    CDBAccess_CDBAccess(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CDBAccess_Init(); /* call */
    pthread_mutex_init(); /* call */
    CProcMgr_GetServerConfig(); /* call */
    CProcMgr_AddProcess(); /* call */
    CProc_Startup(); /* call */
    CSceneMgr_CSceneMgr(); /* call */
    CSceneMgr_Init(); /* call */
    CCommsMgr_CCommsMgr(); /* call */
    CEventMgr_Init(); /* call */
    CLogFilter_Log(); /* call */
    CCommsMgr_AddSession(); /* call */
    CCommsMgr_Init(); /* call */
    CProcMgr_CleanupOldConnections(); /* call */
    mkfifo(); /* call */
    __errno_location(); /* call */
    open(); /* call */
    CCommsMgr_Init2(); /* call */
    terminate(); /* call */

    /* Control flow: 22 branches */
}

/*
 * Function: CProcMgr::CleanupOldConnections
 * Address: 0x0804f658
 * Stack: 4436 bytes
 * Instructions: 216
 */
void CProcMgr_CleanupOldConnections(void) {
    uint32_t local_vars[1109]; /* 4436 bytes */

    CSceneMgr_GetNextScene(); /* call */
    CScene_GetSceneID(); /* call */
    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    CCommsMgr_SendWorld(); /* call */
    pthread_mutex_unlock(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CProcMgr::Process
 * Address: 0x0804f98c
 * Stack: 348 bytes
 * Instructions: 246
 */
void CProcMgr_Process(CProcMgr* self) {
    uint32_t local_vars[87]; /* 348 bytes */

    CLogFilter_Log(); /* call */
    select(); /* call */
    read(); /* call */
    CProcMgr_ProcessCmds(); /* call */
    CCommsMgr_Process(); /* call */
    CCommsMgr_ProcessWS(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CProcMgr::ProcessCmds
 * Address: 0x0804fd4c
 * Stack: 20 bytes
 * Instructions: 468
 */
void CProcMgr_ProcessCmds(CProcMgr* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    CProcMgr_Shutdown(); /* call */
    CProcMgr_ReloadScripts(); /* call */
    CProcMgr_ReloadScenes(); /* call */
    CProcMgr_SetStatus(); /* call */
    CLogFilter_Log(); /* call */
    CCommsMgr_DumpMemory(); /* call */
    CAI_MemoryStatus(); /* call */
    CMemMgr_MemoryStatus(); /* call */
    CMemMgr_ReloadCategory(); /* call */
    CMemMgr_PagePurge(); /* call */
    CAI_DebugNPC(); /* call */
    CCommsMgr_Broadcast(); /* call */
    CCommsMgr_LogAllConnections(); /* call */
    CCommsMgr_LogLevel(); /* call */
    CAI_SetID(); /* call */
    CAI_ClearID(); /* call */
    CAI_ShowWayPoint(); /* call */
    CAI_ShowMove(); /* call */
    CAI_HideMove(); /* call */
    CAI_SetNPCPos(); /* call */
    CAI_ShowAttackMessage(); /* call */
    CAI_HideAttackMessage(); /* call */
    CAI_ShowDestroyMsg(); /* call */
    CAI_HideDestroyMsg(); /* call */
    CAI_SetSceneID(); /* call */
    CAI_CheckSpawnPointStatus(); /* call */
    CAI_DebugSpawnPt(); /* call */
    CAI_ReloadAttrib(); /* call */
    CAI_ClearCollCache(); /* call */
    CAI_SetSpawnID(); /* call */
    CAI_ShowSpawn(); /* call */
    CAI_HideSpawn(); /* call */
    CAI_SetSpawnPeriod(); /* call */
    CAI_CascadeSPCheck(); /* call */
    CAI_ShowAttack(); /* call */
    CAI_HideAttack(); /* call */
    CAI_OverrideScanRange(); /* call */
    CAI_OverrideSuicideRange(); /* call */
    CAI_OverrideScan(); /* call */
    CAI_OverrideSuicide(); /* call */
    CAI_ShowTick(); /* call */
    CLogFilter_Log(); /* call */
    CCommsMgr_DropConnection(); /* call */
    CCommsMgr_SetChatLog(); /* call */
    CProcMgr_ActivityLog(); /* call */
    CAI_ReloadSpawnData(); /* call */
    CAI_ReloadSpawnDataAll(); /* call */
    CAI_ReloadNPCDataAll(); /* call */
    CEventMgr_Debug(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CProcMgr::ActivityLog
 * Address: 0x080502ec
 * Stack: 20 bytes
 * Instructions: 99
 */
void CProcMgr_ActivityLog(CProcMgr* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    pthread_mutex_unlock(); /* call */
    CCommsMgr_ActivityLog(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CProcMgr::Shutdown
 * Address: 0x08050428
 * Stack: 20 bytes
 * Instructions: 142
 */
void CProcMgr_Shutdown(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLogFilter_Log(); /* call */
    CProc_Shutdown(); /* call */
    sleep(); /* call */
    CProc_GetStatus(); /* call */
    CProc_Remove(); /* call */
    __builtin_delete(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CProcMgr::GetServerConfig
 * Address: 0x080505ec
 * Stack: 20 bytes
 * Instructions: 306
 */
void CProcMgr_GetServerConfig(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 36 branches */
}

/*
 * Function: CProcMgr::AddProcess
 * Address: 0x08050b0c
 * Stack: 108 bytes
 * Instructions: 377
 */
void CProcMgr_AddProcess(void) {
    uint32_t local_vars[27]; /* 108 bytes */

    __builtin_new(); /* call */
    CProc_CProc(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CSession_CSession(); /* call */
    CMemMgr_CMemMgr(); /* call */
    CVM_CVM(); /* call */
    CGS_CGS(); /* call */
    CEventMgr_CEventMgr(); /* call */
    CAI_CAI(); /* call */
    terminate(); /* call */

    /* Control flow: 19 branches */
}

/*
 * Function: CProcMgr::SetStatus
 * Address: 0x08050f90
 * Stack: 24 bytes
 * Instructions: 56
 */
void CProcMgr_SetStatus(CProcMgr* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 6 branches */
}

/*
 * Function: CProcMgr::BlockForStatus
 * Address: 0x08051024
 * Stack: 36 bytes
 * Instructions: 95
 */
void CProcMgr_BlockForStatus(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CProcMgr_GetProcCount(); /* call */
    time(); /* call */
    difftime(); /* call */
    CProc_GetStatus(); /* call */
    sleep(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CProcMgr::GetProcess
 * Address: 0x08051128
 * Stack: 0 bytes
 * Instructions: 9
 */
void CProcMgr_GetProcess(void) {
}

/*
 * Function: CProcMgr::GetProcCount
 * Address: 0x08051138
 * Stack: 24 bytes
 * Instructions: 31
 */
void CProcMgr_GetProcCount(CProcMgr* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 3 branches */
}

/*
 * Function: CProcMgr::ReloadScripts
 * Address: 0x0805118c
 * Stack: 20 bytes
 * Instructions: 29
 */
void CProcMgr_ReloadScripts(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CProcMgr_SetStatus(); /* call */
}

/*
 * Function: CProcMgr::ReloadScenes
 * Address: 0x080511d0
 * Stack: 20 bytes
 * Instructions: 127
 */
void CProcMgr_ReloadScenes(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CProcMgr_SetStatus(); /* call */
    CLogFilter_Log(); /* call */
    CProcMgr_BlockForStatus(); /* call */
    CSceneMgr_ReloadScenes(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CProcMgr::FreeGameSession
 * Address: 0x080564a0
 * Stack: 20 bytes
 * Instructions: 24
 */
void CProcMgr_FreeGameSession(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CCommsMgr_DeleteAuth(); /* call */

    /* Control flow: 1 branches */
}

