/* ============================================================================
 * FWOnline Zoneserver - CLogFilter
 * Functions: 4
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CLogFilter::Log
 * Address: 0x081608dc
 * Stack: 1044 bytes
 * Instructions: 35
 */
void CLogFilter_Log(void) {
    uint32_t local_vars[261]; /* 1044 bytes */

    vsnprintf(); /* call */
    CLog_Log(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CLogFilter::Log
 * Address: 0x08160940
 * Stack: 1044 bytes
 * Instructions: 31
 */
void CLogFilter_Log(void) {
    uint32_t local_vars[261]; /* 1044 bytes */

    vsnprintf(); /* call */
    CLog_Log(); /* call */
}

/*
 * Function: CLogFilter::Log
 * Address: 0x0816099c
 * Stack: 20 bytes
 * Instructions: 19
 */
void CLogFilter_Log(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLog_Log(); /* call */
}

/*
 * Function: CLogFilter::LogFilename
 * Address: 0x081609c8
 * Stack: 0 bytes
 * Instructions: 13
 */
void CLogFilter_LogFilename(void) {
}

