/* ============================================================================
 * FWOnline Zoneserver - CEventMgr
 * Functions: 19
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CEventMgr::CEventMgr
 * Address: 0x08073470
 * Stack: 20 bytes
 * Instructions: 41
 */
void CEventMgr_CEventMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLog_RegisterModule(); /* call */
    pthread_mutex_init(); /* call */
}

/*
 * Function: CEventMgr::~CEventMgr
 * Address: 0x08073508
 * Stack: 20 bytes
 * Instructions: 59
 */
void CEventMgr_dtor_CEventMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTaskMgr_dtor_CTaskMgr(); /* call */
    __builtin_vec_delete(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CEventMgr::AddEvent
 * Address: 0x080735a8
 * Stack: 16 bytes
 * Instructions: 156
 */
void CEventMgr_AddEvent(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */
    CLogFilter_Log(); /* call */
    memcpy(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CEventMgr::CreateEvent
 * Address: 0x08073778
 * Stack: 20 bytes
 * Instructions: 75
 */
void CEventMgr_CreateEvent(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CEventMgr::DeleteEvent
 * Address: 0x08073838
 * Stack: 20 bytes
 * Instructions: 33
 */
void CEventMgr_DeleteEvent(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */
}

/*
 * Function: CEventMgr::RemoveEvent
 * Address: 0x08073890
 * Stack: 20 bytes
 * Instructions: 71
 */
void CEventMgr_RemoveEvent(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CEventMgr::RefreshEvent
 * Address: 0x08073958
 * Stack: 20 bytes
 * Instructions: 25
 */
void CEventMgr_RefreshEvent(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CEventMgr_RemoveEvent(); /* call */
    CEventMgr_ReloadEvent(); /* call */
}

/*
 * Function: CEventMgr::CheckEvent
 * Address: 0x08073998
 * Stack: 36 bytes
 * Instructions: 79
 */
void CEventMgr_CheckEvent(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CEventMgr::Startup
 * Address: 0x08073aa0
 * Stack: 0 bytes
 * Instructions: 11
 */
void CEventMgr_Startup(void) {
}

/*
 * Function: CEventMgr::Init
 * Address: 0x08073ab4
 * Stack: 1228 bytes
 * Instructions: 415
 */
void CEventMgr_Init(CEventMgr* self) {
    uint32_t local_vars[307]; /* 1228 bytes */

    __builtin_vec_new(); /* call */
    CLogFilter_Log(); /* call */
    __builtin_new(); /* call */
    CDBAccess_CDBAccess(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    pthread_mutex_lock(); /* call */
    CDBAccess_Init(); /* call */
    CLogFilter_Log(); /* call */
    pthread_mutex_init(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    CEventMgr_AddEvent(); /* call */
    pthread_mutex_unlock(); /* call */
    CTaskMgr_CTaskMgr(); /* call */
    CSceneMgr_GetProcessID(); /* call */
    CTaskMgr_Init(); /* call */
    terminate(); /* call */

    /* Control flow: 13 branches */
}

/*
 * Function: CEventMgr::Activate
 * Address: 0x08074070
 * Stack: 20 bytes
 * Instructions: 54
 */
void CEventMgr_Activate(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CEventMgr::Deactivate
 * Address: 0x08074108
 * Stack: 20 bytes
 * Instructions: 56
 */
void CEventMgr_Deactivate(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CEventMgr::Process
 * Address: 0x080741a8
 * Stack: 76 bytes
 * Instructions: 367
 */
void CEventMgr_Process(void) {
    uint32_t local_vars[19]; /* 76 bytes */

    getpid(); /* call */
    CLogFilter_Log(); /* call */
    CTaskMgr_ReloadScripts(); /* call */
    CTaskMgr_ActivityLog(); /* call */
    CEventMgr_ClearEvents(); /* call */
    CEventMgr_ReloadEvents(); /* call */
    time(); /* call */
    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */
    localtime(); /* call */
    CEventMgr_CompareInterval(); /* call */
    CTaskMgr_AssignTask(); /* call */
    CEventMgr_UpdateLastTime(); /* call */
    GetTickCount(); /* call */

    /* Control flow: 23 branches */
}

/*
 * Function: CEventMgr::UpdateLastTime
 * Address: 0x08074670
 * Stack: 20 bytes
 * Instructions: 33
 */
void CEventMgr_UpdateLastTime(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */
}

/*
 * Function: CEventMgr::CompareInterval
 * Address: 0x080746c8
 * Stack: 20 bytes
 * Instructions: 31
 */
void CEventMgr_CompareInterval(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    GetTickCount(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CEventMgr::ClearEvents
 * Address: 0x08074718
 * Stack: 12 bytes
 * Instructions: 57
 */
void CEventMgr_ClearEvents(CEventMgr* self) {
    uint32_t local_vars[3]; /* 12 bytes */

    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CEventMgr::ReloadEvents
 * Address: 0x080747bc
 * Stack: 1188 bytes
 * Instructions: 188
 */
void CEventMgr_ReloadEvents(void) {
    uint32_t local_vars[297]; /* 1188 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    CLogFilter_Log(); /* call */
    CEventMgr_AddEvent(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CEventMgr::ReloadEvent
 * Address: 0x08074a40
 * Stack: 1188 bytes
 * Instructions: 186
 */
void CEventMgr_ReloadEvent(void) {
    uint32_t local_vars[297]; /* 1188 bytes */

    pthread_mutex_lock(); /* call */
    CDBAccess_SQLQuery(); /* call */
    pthread_mutex_unlock(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    CLogFilter_Log(); /* call */
    CEventMgr_AddEvent(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CEventMgr::Debug
 * Address: 0x08074cc0
 * Stack: 20 bytes
 * Instructions: 20
 */
void CEventMgr_Debug(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTaskMgr_Debug(); /* call */
}

