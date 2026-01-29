/* ============================================================================
 * FWOnline Zoneserver - CCommsMgr
 * Functions: 32
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CCommsMgr::CCommsMgr
 * Address: 0x0804d130
 * Stack: 20 bytes
 * Instructions: 54
 */
void CCommsMgr_CCommsMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLog_RegisterModule(); /* call */
    memset(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CCommsMgr::~CCommsMgr
 * Address: 0x0804d1ec
 * Stack: 20 bytes
 * Instructions: 64
 */
void CCommsMgr_dtor_CCommsMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTaskMgr_dtor_CTaskMgr(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    shutdown(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CCommsMgr::Init2
 * Address: 0x0804d2b8
 * Stack: 36 bytes
 * Instructions: 146
 */
void CCommsMgr_Init2(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    socket(); /* call */
    setsockopt(); /* call */
    memset(); /* call */
    htonl(); /* call */
    htons(); /* call */
    bind(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CCommsMgr::Init
 * Address: 0x0804d480
 * Stack: 28 bytes
 * Instructions: 248
 */
void CCommsMgr_Init(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    strncpy(); /* call */
    memset(); /* call */
    inet_addr(); /* call */
    htons(); /* call */
    htonl(); /* call */
    __builtin_new(); /* call */
    CDBAccess_CDBAccess(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CDBAccess_Init(); /* call */
    CLogFilter_Log(); /* call */
    pthread_mutex_init(); /* call */
    strcpy(); /* call */
    CTaskMgr_CTaskMgr(); /* call */
    CSceneMgr_GetProcessID(); /* call */
    CTaskMgr_Init(); /* call */
    terminate(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CCommsMgr::Process
 * Address: 0x0804d770
 * Stack: 1684 bytes
 * Instructions: 99
 */
void CCommsMgr_Process(void) {
    uint32_t local_vars[421]; /* 1684 bytes */

    recvfrom(); /* call */
    CCommsMgr_Authenticate(); /* call */
    CCommsMgr_SelectSession(); /* call */
    CSession_AddConnection(); /* call */
    CLogFilter_Log(); /* call */
    inet_ntoa_safe(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CCommsMgr::ProcessWS
 * Address: 0x0804d8c0
 * Stack: 1588 bytes
 * Instructions: 64
 */
void CCommsMgr_ProcessWS(void) {
    uint32_t local_vars[397]; /* 1588 bytes */

    recvfrom(); /* call */
    CSession_ExecuteInternal(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CCommsMgr::AddSession
 * Address: 0x0804d990
 * Stack: 20 bytes
 * Instructions: 66
 */
void CCommsMgr_AddSession(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    inet_addr(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CCommsMgr::Shutdown
 * Address: 0x0804da64
 * Stack: 20 bytes
 * Instructions: 21
 */
void CCommsMgr_Shutdown(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    shutdown(); /* call */
}

/*
 * Function: CCommsMgr::Authenticate
 * Address: 0x0804daa0
 * Stack: 100 bytes
 * Instructions: 64
 */
void CCommsMgr_Authenticate(void) {
    uint32_t local_vars[25]; /* 100 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CCommsMgr::FindStart
 * Address: 0x0804db50
 * Stack: 436 bytes
 * Instructions: 149
 */
void CCommsMgr_FindStart(CCommsMgr* self) {
    uint32_t local_vars[109]; /* 436 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */
    CDBAccess_FetchNextRow(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CCommsMgr::SelectSession
 * Address: 0x0804dd5c
 * Stack: 20 bytes
 * Instructions: 59
 */
void CCommsMgr_SelectSession(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_FindCharacter(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CCommsMgr::DeleteAuth
 * Address: 0x0804de0c
 * Stack: 20 bytes
 * Instructions: 48
 */
void CCommsMgr_DeleteAuth(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CCommsMgr::SetStatus
 * Address: 0x0804de8c
 * Stack: 436 bytes
 * Instructions: 128
 */
void CCommsMgr_SetStatus(void) {
    uint32_t local_vars[109]; /* 436 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CCommsMgr::FindPlayerInWorld
 * Address: 0x0804e034
 * Stack: 20 bytes
 * Instructions: 42
 */
void CCommsMgr_FindPlayerInWorld(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CCommsMgr::GetNumPlayersInScene
 * Address: 0x0804e0a4
 * Stack: 20 bytes
 * Instructions: 42
 */
void CCommsMgr_GetNumPlayersInScene(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CCommsMgr::LockOutChar
 * Address: 0x0804e114
 * Stack: 192 bytes
 * Instructions: 171
 */
void CCommsMgr_LockOutChar(void) {
    uint32_t local_vars[48]; /* 192 bytes */

    time(); /* call */
    localtime_r(); /* call */
    mktime(); /* call */
    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CCommsMgr::CheckCharExists
 * Address: 0x0804e350
 * Stack: 20 bytes
 * Instructions: 63
 */
void CCommsMgr_CheckCharExists(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */
    CDBAccess_FetchNextRow(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CCommsMgr::CheckCharInGame
 * Address: 0x0804e3f0
 * Stack: 20 bytes
 * Instructions: 63
 */
void CCommsMgr_CheckCharInGame(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */
    CDBAccess_FetchNextRow(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CCommsMgr::PutEvent
 * Address: 0x0804e490
 * Stack: 20 bytes
 * Instructions: 37
 */
void CCommsMgr_PutEvent(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_PutEvent(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CCommsMgr::GetNumConnects
 * Address: 0x0804e4f0
 * Stack: 24 bytes
 * Instructions: 24
 */
void CCommsMgr_GetNumConnects(CCommsMgr* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 1 branches */
}

/*
 * Function: CCommsMgr::SetChatLog
 * Address: 0x0804e53c
 * Stack: 20 bytes
 * Instructions: 46
 */
void CCommsMgr_SetChatLog(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_SetChatLog(); /* call */
    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CCommsMgr::SendWorldController
 * Address: 0x0804e5bc
 * Stack: 20 bytes
 * Instructions: 38
 */
void CCommsMgr_SendWorldController(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_SendWorldController(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CCommsMgr::DropConnection
 * Address: 0x0804e61c
 * Stack: 20 bytes
 * Instructions: 32
 */
void CCommsMgr_DropConnection(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_DropConnection(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CCommsMgr::CloseConnection
 * Address: 0x0804e670
 * Stack: 20 bytes
 * Instructions: 35
 */
void CCommsMgr_CloseConnection(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_CloseConnection(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CCommsMgr::ActivityLog
 * Address: 0x0804e6cc
 * Stack: 24 bytes
 * Instructions: 24
 */
void CCommsMgr_ActivityLog(CCommsMgr* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 1 branches */
}

/*
 * Function: CCommsMgr::SendSysMsg
 * Address: 0x0804e714
 * Stack: 20 bytes
 * Instructions: 41
 */
void CCommsMgr_SendSysMsg(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_SendSysMsg(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CCommsMgr::FindCharacter
 * Address: 0x0804e780
 * Stack: 20 bytes
 * Instructions: 35
 */
void CCommsMgr_FindCharacter(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_FindCharacter(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CCommsMgr::Broadcast
 * Address: 0x0804e7dc
 * Stack: 68 bytes
 * Instructions: 35
 */
void CCommsMgr_Broadcast(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    CTaskMgr_AssignTask(); /* call */
}

/*
 * Function: CCommsMgr::LogAllConnections
 * Address: 0x0804e854
 * Stack: 20 bytes
 * Instructions: 35
 */
void CCommsMgr_LogAllConnections(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    GetTickCount(); /* call */
    CLogFilter_Log(); /* call */
    CSession_LogConnections(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CCommsMgr::LogLevel
 * Address: 0x0804e8b8
 * Stack: 20 bytes
 * Instructions: 35
 */
void CCommsMgr_LogLevel(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLogFilter_Log(); /* call */
    CSession_LogLevel(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CCommsMgr::SendWorld
 * Address: 0x0804e918
 * Stack: 2084 bytes
 * Instructions: 318
 */
void CCommsMgr_SendWorld(void) {
    uint32_t local_vars[521]; /* 2084 bytes */

    socket(); /* call */
    CLogFilter_Log(); /* call */
    bind(); /* call */
    connect(); /* call */
    memcpy(); /* call */
    strncpy(); /* call */
    send(); /* call */
    shutdown(); /* call */
    close(); /* call */
    recv(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CCommsMgr::DumpMemory
 * Address: 0x0804ed48
 * Stack: 20 bytes
 * Instructions: 33
 */
void CCommsMgr_DumpMemory(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_DumpMemory(); /* call */

    /* Control flow: 2 branches */
}

