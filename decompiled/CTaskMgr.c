/* ============================================================================
 * FWOnline Zoneserver - CTaskMgr
 * Functions: 19
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CTaskMgr::CTaskMgr
 * Address: 0x080717a0
 * Stack: 20 bytes
 * Instructions: 154
 */
void CTaskMgr_CTaskMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLog_RegisterModule(); /* call */
}

/*
 * Function: CTaskMgr::~CTaskMgr
 * Address: 0x080719bc
 * Stack: 20 bytes
 * Instructions: 113
 */
void CTaskMgr_dtor_CTaskMgr(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    CVM_dtor_CVM(); /* call */
    CGS_dtor_CGS(); /* call */
    _._t10CHashTable1ZP11_ScriptData(); /* call */
    lua_close(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 15 branches */
}

/*
 * Function: CTaskMgr::AssignTask
 * Address: 0x08071af8
 * Stack: 20 bytes
 * Instructions: 74
 */
void CTaskMgr_AssignTask(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CGS_Process(); /* call */
    CLogFilter_Log(); /* call */
    CVM_Process(); /* call */
    CTaskMgr_ReloadLUA(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CTaskMgr::ExecuteTask
 * Address: 0x08071be0
 * Stack: 20 bytes
 * Instructions: 36
 */
void CTaskMgr_ExecuteTask(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CGS_Process(); /* call */
    CVM_Process(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CTaskMgr::Init
 * Address: 0x08071c48
 * Stack: 20 bytes
 * Instructions: 30
 */
void CTaskMgr_Init(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemMgr_AccessMem(); /* call */
    CTaskMgr_Init(); /* call */
}

/*
 * Function: CTaskMgr::Init
 * Address: 0x08071c90
 * Stack: 20 bytes
 * Instructions: 26
 */
void CTaskMgr_Init(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_GetProcessID(); /* call */
    CTaskMgr_Init(); /* call */
}

/*
 * Function: CTaskMgr::Init
 * Address: 0x08071cd0
 * Stack: 60 bytes
 * Instructions: 261
 */
void CTaskMgr_Init(CTaskMgr* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    __builtin_new(); /* call */
    __t10CHashTable1ZP11_ScriptDatai(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    __builtin_vec_new(); /* call */
    CTaskMgr_ReloadLUA(); /* call */
    CGS_CGS(); /* call */
    CGS_Init(); /* call */
    CVM_CVM(); /* call */
    CVM_Init(); /* call */
    CLogFilter_Log(); /* call */
    terminate(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CTaskMgr::ReloadLUA
 * Address: 0x08072008
 * Stack: 20 bytes
 * Instructions: 434
 */
void CTaskMgr_ReloadLUA(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    lua_close(); /* call */
    lua_open(); /* call */
    luaopen_base(); /* call */
    luaopen_io(); /* call */
    luaopen_string(); /* call */
    luaopen_math(); /* call */
    CTaskMgr_BindFunctions(); /* call */
    CTaskMgr_LoadHeaders(); /* call */
    CLogFilter_LogFilename(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 17 branches */
}

/*
 * Function: CTaskMgr::LoadHeaders
 * Address: 0x080725c4
 * Stack: 256020 bytes
 * Instructions: 60
 */
void CTaskMgr_LoadHeaders(void) {
    uint32_t local_vars[64005]; /* 256020 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    lua_dobuffer(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CTaskMgr::BindFunctions
 * Address: 0x0807267c
 * Stack: 20 bytes
 * Instructions: 62
 */
void CTaskMgr_BindFunctions(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    lua_pushstring(); /* call */
    lua_pushcclosure(); /* call */
    lua_settable(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CTaskMgr::LoadScript
 * Address: 0x08072738
 * Stack: 256028 bytes
 * Instructions: 256
 */
void CTaskMgr_LoadScript(void) {
    uint32_t local_vars[64007]; /* 256028 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    CLogFilter_Log(); /* call */
    memcpy(); /* call */
    __builtin_vec_new(); /* call */
    Insert__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData(); /* call */
    Find__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CTaskMgr::LoadScripts
 * Address: 0x08072a70
 * Stack: 256028 bytes
 * Instructions: 168
 */
void CTaskMgr_LoadScripts(void) {
    uint32_t local_vars[64007]; /* 256028 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    CLogFilter_Log(); /* call */
    memcpy(); /* call */
    __builtin_vec_new(); /* call */
    Insert__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData(); /* call */
    Find__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CTaskMgr::FindAliasToScript
 * Address: 0x08072c74
 * Stack: 20 bytes
 * Instructions: 28
 */
void CTaskMgr_FindAliasToScript(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CTaskMgr::ReloadScripts
 * Address: 0x08072cb0
 * Stack: 16 bytes
 * Instructions: 124
 */
void CTaskMgr_ReloadScripts(CTaskMgr* self) {
    uint32_t local_vars[4]; /* 16 bytes */

    __builtin_vec_delete(); /* call */
    _._t10CHashTable1ZP11_ScriptData(); /* call */
    __builtin_new(); /* call */
    __t10CHashTable1ZP11_ScriptDatai(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CTaskMgr_LoadHeaders(); /* call */
    terminate(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CTaskMgr::ActivityLog
 * Address: 0x08072e10
 * Stack: 20 bytes
 * Instructions: 76
 */
void CTaskMgr_ActivityLog(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLogFilter_LogFilename(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CTaskMgr::DumpMemory
 * Address: 0x08072f10
 * Stack: 0 bytes
 * Instructions: 9
 */
void CTaskMgr_DumpMemory(void) {
}

/*
 * Function: CTaskMgr::ShowEvent
 * Address: 0x08072f24
 * Stack: 20 bytes
 * Instructions: 20
 */
void CTaskMgr_ShowEvent(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLogFilter_Log(); /* call */
}

/*
 * Function: CTaskMgr::SetChatLog
 * Address: 0x08072f58
 * Stack: 0 bytes
 * Instructions: 12
 */
void CTaskMgr_SetChatLog(CTaskMgr* self) {
}

/*
 * Function: CTaskMgr::Debug
 * Address: 0x08072f74
 * Stack: 0 bytes
 * Instructions: 13
 */
void CTaskMgr_Debug(CTaskMgr* self) {
}

