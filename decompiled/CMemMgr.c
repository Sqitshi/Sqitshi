/* ============================================================================
 * FWOnline Zoneserver - CMemMgr
 * Functions: 20
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CMemMgr::CMemMgr
 * Address: 0x08056530
 * Stack: 20 bytes
 * Instructions: 30
 */
void CMemMgr_CMemMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLog_RegisterModule(); /* call */
}

/*
 * Function: CMemMgr::~CMemMgr
 * Address: 0x080565a4
 * Stack: 20 bytes
 * Instructions: 82
 */
void CMemMgr_dtor_CMemMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemPage_dtor_CMemPage(); /* call */
    CMemAccess_dtor_CMemAccess(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CMemMgr::Startup
 * Address: 0x08056698
 * Stack: 28 bytes
 * Instructions: 222
 */
void CMemMgr_Startup(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    CLogFilter_Log(); /* call */
    __builtin_new(); /* call */
    CMemPage_CMemPage(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CDBAccess_CDBAccess(); /* call */
    CDBAccess_Init(); /* call */
    strcpy(); /* call */
    CMemMgr_LoadStatic(); /* call */
    terminate(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CMemMgr::Lock
 * Address: 0x08056958
 * Stack: 76 bytes
 * Instructions: 349
 */
void CMemMgr_Lock(CMemMgr* self) {
    uint32_t local_vars[19]; /* 76 bytes */

    __umoddi3(); /* call */
    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    Find__t10CHashTable1ZP10CMemObjectUxRP10CMemObject(); /* call */
    CMemPage_Purge(); /* call */
    pthread_mutex_unlock(); /* call */
    CMemObject_Init(); /* call */
    GetTickCount(); /* call */
    CMemObject_Read(); /* call */
    Insert__t10CHashTable1ZP10CMemObjectUxRP10CMemObject(); /* call */
    time(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CMemMgr::LockR
 * Address: 0x08056dd0
 * Stack: 76 bytes
 * Instructions: 342
 */
void CMemMgr_LockR(CMemMgr* self) {
    uint32_t local_vars[19]; /* 76 bytes */

    __umoddi3(); /* call */
    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    Find__t10CHashTable1ZP10CMemObjectUxRP10CMemObject(); /* call */
    CMemPage_Purge(); /* call */
    pthread_mutex_unlock(); /* call */
    CMemObject_Init(); /* call */
    GetTickCount(); /* call */
    CMemObject_Read(); /* call */
    Insert__t10CHashTable1ZP10CMemObjectUxRP10CMemObject(); /* call */
    time(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CMemMgr::Unlock
 * Address: 0x08057234
 * Stack: 28 bytes
 * Instructions: 70
 */
void CMemMgr_Unlock(CMemMgr* self) {
    uint32_t local_vars[7]; /* 28 bytes */

    __umoddi3(); /* call */
    pthread_mutex_unlock(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CMemMgr::Process
 * Address: 0x080572e4
 * Stack: 0 bytes
 * Instructions: 11
 */
void CMemMgr_Process(void) {
}

/*
 * Function: CMemMgr::Delete
 * Address: 0x08057304
 * Stack: 44 bytes
 * Instructions: 153
 */
void CMemMgr_Delete(CMemMgr* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    __umoddi3(); /* call */
    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    Find__t10CHashTable1ZP10CMemObjectUxRP10CMemObject(); /* call */
    Remove__t10CHashTable1ZP10CMemObjectUx(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CMemMgr::Delete
 * Address: 0x080574e0
 * Stack: 44 bytes
 * Instructions: 228
 */
void CMemMgr_Delete(CMemMgr* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    CLogFilter_Log(); /* call */
    Remove__t10CHashTable1ZP10CMemObjectUx(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CMemMgr::Flush
 * Address: 0x080577ec
 * Stack: 44 bytes
 * Instructions: 175
 */
void CMemMgr_Flush(CMemMgr* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    __umoddi3(); /* call */
    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    Find__t10CHashTable1ZP10CMemObjectUxRP10CMemObject(); /* call */
    pthread_mutex_unlock(); /* call */
    CMemObject_Flush(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CMemMgr::FlushDelete
 * Address: 0x080579f0
 * Stack: 44 bytes
 * Instructions: 186
 */
void CMemMgr_FlushDelete(CMemMgr* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    __umoddi3(); /* call */
    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    Find__t10CHashTable1ZP10CMemObjectUxRP10CMemObject(); /* call */
    CMemObject_Flush(); /* call */
    pthread_mutex_unlock(); /* call */
    Remove__t10CHashTable1ZP10CMemObjectUx(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CMemMgr::PagePurge
 * Address: 0x08057c30
 * Stack: 20 bytes
 * Instructions: 70
 */
void CMemMgr_PagePurge(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    CMemPage_Purge(); /* call */
    CLogFilter_Log(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CMemMgr::ReloadCategory
 * Address: 0x08057d10
 * Stack: 16 bytes
 * Instructions: 133
 */
void CMemMgr_ReloadCategory(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CLogFilter_Log(); /* call */
    pthread_mutex_lock(); /* call */
    CLogFilter_Log(); /* call */
    CMemObject_Read(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CMemMgr::MemoryStatus
 * Address: 0x08057ecc
 * Stack: 52 bytes
 * Instructions: 124
 */
void CMemMgr_MemoryStatus(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    CLogFilter_Log(); /* call */
    CMemPage_Stats(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CMemMgr::AccessMem
 * Address: 0x08058058
 * Stack: 16 bytes
 * Instructions: 97
 */
void CMemMgr_AccessMem(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    __builtin_new(); /* call */
    CMemAccess_CMemAccess(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CMemAccess_Init(); /* call */
    terminate(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CMemMgr::QueryMemObject
 * Address: 0x08058cf0
 * Stack: 0 bytes
 * Instructions: 550
 */
void CMemMgr_QueryMemObject(void) {

    /* Control flow: 1 branches */
}

/*
 * Function: CMemMgr::LoadStatic
 * Address: 0x08059dd4
 * Stack: 48 bytes
 * Instructions: 579
 */
void CMemMgr_LoadStatic(void) {
    uint32_t local_vars[12]; /* 48 bytes */

    __builtin_new(); /* call */
    CDBAccess_CDBAccess(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CDBAccess_Init(); /* call */
    CLogFilter_Log(); /* call */
    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    CMemMgr_Lock(); /* call */
    CMemMgr_Unlock(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    terminate(); /* call */

    /* Control flow: 26 branches */
}

/*
 * Function: CMemMgr::DeleteElements
 * Address: 0x0806de30
 * Stack: 20 bytes
 * Instructions: 436
 */
void CMemMgr_DeleteElements(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CDBAccess_SQLQuery(); /* call */

    /* Control flow: 21 branches */
}

/*
 * Function: CMemMgr::NumFree
 * Address: 0x0806e358
 * Stack: 20 bytes
 * Instructions: 562
 */
void CMemMgr_NumFree(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */

    /* Control flow: 28 branches */
}

/*
 * Function: CMemMgr::Count
 * Address: 0x0806e97c
 * Stack: 20 bytes
 * Instructions: 1180
 */
void CMemMgr_Count(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */

    /* Control flow: 85 branches */
}

