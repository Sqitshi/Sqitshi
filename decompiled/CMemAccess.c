/* ============================================================================
 * FWOnline Zoneserver - CMemAccess
 * Functions: 20
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CMemAccess::CMemAccess
 * Address: 0x0806f770
 * Stack: 16 bytes
 * Instructions: 96
 */
void CMemAccess_CMemAccess(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    __builtin_new(); /* call */
    CDBAccess_CDBAccess(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CDBAccess_Init(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    CLog_RegisterModule(); /* call */
    terminate(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CMemAccess::~CMemAccess
 * Address: 0x0806f898
 * Stack: 16 bytes
 * Instructions: 88
 */
void CMemAccess_dtor_CMemAccess(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    _._t10CHashTable1ZP16_tMemCacheObject(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    _tMemCacheObject_dtor__tMemCacheObject(); /* call */
    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CMemAccess::Lock
 * Address: 0x0806f988
 * Stack: 20 bytes
 * Instructions: 23
 */
void CMemAccess_Lock(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemAccess_Lock(); /* call */
}

/*
 * Function: CMemAccess::Lock
 * Address: 0x0806f9bc
 * Stack: 64 bytes
 * Instructions: 553
 */
void CMemAccess_Lock(CMemAccess* self) {
    uint32_t local_vars[16]; /* 64 bytes */

    CLogFilter_Log(); /* call */
    __assert_fail(); /* call */
    CMemMgr_QueryMemObject(); /* call */
    Find__t10CHashTable1ZP16_tMemCacheObjectUxRP16_tMemCacheObject(); /* call */
    CMemObject_Init(); /* call */
    CMemObject_Read(); /* call */
    CMemAccess_RefreshCacheObject(); /* call */
    CMemAccess_DeleteCacheObject(); /* call */
    CMemAccess_FlushCache(); /* call */
    CMemAccess_AddCacheObject(); /* call */
    CMemMgr_LockR(); /* call */
    memcpy(); /* call */
    CLogFilter_Log(); /* call */
    CMemMgr_Unlock(); /* call */
    CMemAccess_Add(); /* call */
    CMemMgr_Lock(); /* call */

    /* Control flow: 26 branches */
}

/*
 * Function: CMemAccess::Unlock
 * Address: 0x08070004
 * Stack: 20 bytes
 * Instructions: 58
 */
void CMemAccess_Unlock(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemMgr_QueryMemObject(); /* call */
    CMemObject_Flush(); /* call */
    CMemMgr_Unlock(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CMemAccess::Flush
 * Address: 0x080700b0
 * Stack: 20 bytes
 * Instructions: 20
 */
void CMemAccess_Flush(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemMgr_Flush(); /* call */
}

/*
 * Function: CMemAccess::Delete
 * Address: 0x080700dc
 * Stack: 12 bytes
 * Instructions: 55
 */
void CMemAccess_Delete(CMemAccess* self) {
    uint32_t local_vars[3]; /* 12 bytes */

    Find__t10CHashTable1ZP16_tMemCacheObjectUxRP16_tMemCacheObject(); /* call */
    CMemAccess_DeleteCacheObject(); /* call */
    CMemMgr_FlushDelete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CMemAccess::Purge
 * Address: 0x08070154
 * Stack: 12 bytes
 * Instructions: 53
 */
void CMemAccess_Purge(CMemAccess* self) {
    uint32_t local_vars[3]; /* 12 bytes */

    Find__t10CHashTable1ZP16_tMemCacheObjectUxRP16_tMemCacheObject(); /* call */
    CMemAccess_DeleteCacheObject(); /* call */
    CMemMgr_Delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CMemAccess::PurgeCategory
 * Address: 0x080701c8
 * Stack: 20 bytes
 * Instructions: 18
 */
void CMemAccess_PurgeCategory(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemMgr_ReloadCategory(); /* call */
}

/*
 * Function: CMemAccess::NumFree
 * Address: 0x080701f0
 * Stack: 20 bytes
 * Instructions: 20
 */
void CMemAccess_NumFree(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemMgr_NumFree(); /* call */
}

/*
 * Function: CMemAccess::Count
 * Address: 0x0807021c
 * Stack: 20 bytes
 * Instructions: 20
 */
void CMemAccess_Count(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemMgr_Count(); /* call */
}

/*
 * Function: CMemAccess::CreateElements
 * Address: 0x08070248
 * Stack: 60 bytes
 * Instructions: 246
 */
void CMemAccess_CreateElements(CMemAccess* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    CMemMgr_QueryMemObject(); /* call */
    Find__t10CHashTable1ZP16_tMemCacheObjectUxRP16_tMemCacheObject(); /* call */
    CLogFilter_Log(); /* call */
    CMemAccess_FlushCache(); /* call */
    CMemObject_Init(); /* call */
    CMemAccess_AddCacheObject(); /* call */
    CMemObject_CreateElements(); /* call */
    CMemAccess_DeleteCacheObject(); /* call */
    CMemMgr_Delete(); /* call */
    CMemAccess_Lock(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CMemAccess::DeleteElements
 * Address: 0x080704fc
 * Stack: 20 bytes
 * Instructions: 20
 */
void CMemAccess_DeleteElements(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemMgr_DeleteElements(); /* call */
}

/*
 * Function: CMemAccess::GenerateUniqueID
 * Address: 0x08070528
 * Stack: 20 bytes
 * Instructions: 129
 */
void CMemAccess_GenerateUniqueID(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CMemAccess::Init
 * Address: 0x08070690
 * Stack: 76 bytes
 * Instructions: 216
 */
void CMemAccess_Init(CMemAccess* self) {
    uint32_t local_vars[19]; /* 76 bytes */

    __builtin_new(); /* call */
    __t10CHashTable1ZP16_tMemCacheObjecti(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    __builtin_vec_new(); /* call */
    _tMemCacheObject__tMemCacheObject(); /* call */
    __builtin_vec_delete(); /* call */
    _tMemCacheObject_dtor__tMemCacheObject(); /* call */
    terminate(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CMemAccess::RefreshCacheObject
 * Address: 0x08070920
 * Stack: 0 bytes
 * Instructions: 43
 */
void CMemAccess_RefreshCacheObject(CMemAccess* self) {

    /* Control flow: 3 branches */
}

/*
 * Function: CMemAccess::Add
 * Address: 0x0807099c
 * Stack: 16 bytes
 * Instructions: 112
 */
void CMemAccess_Add(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CLogFilter_Log(); /* call */
    CMemAccess_FlushCache(); /* call */
    __assert_fail(); /* call */
    memcpy(); /* call */
    CLogFilter_Log(); /* call */
    CMemAccess_AddCacheObject(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CMemAccess::AddCacheObject
 * Address: 0x08070adc
 * Stack: 12 bytes
 * Instructions: 59
 */
void CMemAccess_AddCacheObject(CMemAccess* self) {
    uint32_t local_vars[3]; /* 12 bytes */

    Insert__t10CHashTable1ZP16_tMemCacheObjectUxRP16_tMemCacheObject(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CMemAccess::FlushCache
 * Address: 0x08070b74
 * Stack: 64 bytes
 * Instructions: 182
 */
void CMemAccess_FlushCache(CMemAccess* self) {
    uint32_t local_vars[16]; /* 64 bytes */

    CLogFilter_Log(); /* call */
    __assert_fail(); /* call */
    Remove__t10CHashTable1ZP16_tMemCacheObjectUx(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CMemAccess::DeleteCacheObject
 * Address: 0x08070da4
 * Stack: 48 bytes
 * Instructions: 82
 */
void CMemAccess_DeleteCacheObject(CMemAccess* self) {
    uint32_t local_vars[12]; /* 48 bytes */

    Remove__t10CHashTable1ZP16_tMemCacheObjectUx(); /* call */

    /* Control flow: 4 branches */
}

