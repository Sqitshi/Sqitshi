/* ============================================================================
 * FWOnline Zoneserver - CLog
 * Functions: 10
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CLog::CLog
 * Address: 0x081602b0
 * Stack: 0 bytes
 * Instructions: 13
 */
void CLog_CLog(void) {
}

/*
 * Function: CLog::~CLog
 * Address: 0x081602e0
 * Stack: 20 bytes
 * Instructions: 34
 */
void CLog_dtor_CLog(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_delete(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CLog::SetLogFile
 * Address: 0x08160338
 * Stack: 20 bytes
 * Instructions: 16
 */
void CLog_SetLogFile(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    strcpy(); /* call */
}

/*
 * Function: CLog::SetProgName
 * Address: 0x08160360
 * Stack: 20 bytes
 * Instructions: 18
 */
void CLog_SetProgName(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    openlog(); /* call */
}

/*
 * Function: CLog::RegisterModule
 * Address: 0x08160388
 * Stack: 20 bytes
 * Instructions: 47
 */
void CLog_RegisterModule(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_new(); /* call */
    strncpy(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CLog::SetFlags
 * Address: 0x0816040c
 * Stack: 24 bytes
 * Instructions: 31
 */
void CLog_SetFlags(CLog* self) {
    uint32_t local_vars[6]; /* 24 bytes */

    /* Control flow: 2 branches */
}

/*
 * Function: CLog::SetPriorityLevel
 * Address: 0x0816045c
 * Stack: 0 bytes
 * Instructions: 8
 */
void CLog_SetPriorityLevel(void) {
}

/*
 * Function: CLog::SetOutput
 * Address: 0x0816046c
 * Stack: 0 bytes
 * Instructions: 8
 */
void CLog_SetOutput(void) {
}

/*
 * Function: CLog::Log
 * Address: 0x0816047c
 * Stack: 1052 bytes
 * Instructions: 179
 */
void CLog_Log(void) {
    uint32_t local_vars[263]; /* 1052 bytes */

    time(); /* call */
    ctime_r(); /* call */
    strlen(); /* call */
    printf(); /* call */
    syslog(); /* call */
    fopen(); /* call */
    fprintf(); /* call */
    fclose(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CLog::Log
 * Address: 0x081606ac
 * Stack: 3132 bytes
 * Instructions: 143
 */
void CLog_Log(CLog* self) {
    uint32_t local_vars[783]; /* 3132 bytes */

    time(); /* call */
    ctime_r(); /* call */
    fopen(); /* call */
    fwrite(); /* call */
    fclose(); /* call */

    /* Control flow: 3 branches */
}

