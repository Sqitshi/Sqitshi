/* ============================================================================
 * FWOnline Zoneserver - CMTimer
 * Functions: 2
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CMTimer::CMTimer
 * Address: 0x08162678
 * Stack: 0 bytes
 * Instructions: 9
 */
void CMTimer_CMTimer(void) {
}

/*
 * Function: CMTimer::GetTickCount
 * Address: 0x0816268c
 * Stack: 48 bytes
 * Instructions: 64
 */
void CMTimer_GetTickCount(CMTimer* self) {
    uint32_t local_vars[12]; /* 48 bytes */

    gettimeofday(); /* call */

    /* Control flow: 1 branches */
}

