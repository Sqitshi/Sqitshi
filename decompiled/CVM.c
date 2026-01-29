/* ============================================================================
 * FWOnline Zoneserver - CVM
 * Functions: 6
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVM::CVM
 * Address: 0x08071340
 * Stack: 20 bytes
 * Instructions: 30
 */
void CVM_CVM(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLog_RegisterModule(); /* call */
}

/*
 * Function: CVM::~CVM
 * Address: 0x080713a0
 * Stack: 20 bytes
 * Instructions: 18
 */
void CVM_dtor_CVM(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CVM::Init
 * Address: 0x080713c8
 * Stack: 20 bytes
 * Instructions: 35
 */
void CVM_Init(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    ftime(); /* call */
}

/*
 * Function: CVM::Process
 * Address: 0x08071438
 * Stack: 36 bytes
 * Instructions: 123
 */
void CVM_Process(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    Find__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData(); /* call */
    CTaskMgr_LoadScript(); /* call */
    CVM_GetTick(); /* call */
    lua_dobuffer(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CVM::MemoryStatus
 * Address: 0x080715b0
 * Stack: 0 bytes
 * Instructions: 5
 */
void CVM_MemoryStatus(void) {
}

/*
 * Function: CVM::GetTick
 * Address: 0x080715b8
 * Stack: 36 bytes
 * Instructions: 43
 */
void CVM_GetTick(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    gettimeofday(); /* call */

    /* Control flow: 1 branches */
}

