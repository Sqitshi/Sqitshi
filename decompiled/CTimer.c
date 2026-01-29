/* ============================================================================
 * FWOnline Zoneserver - CTimer
 * Functions: 7
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CTimer::CTimer
 * Address: 0x0804c800
 * Stack: 20 bytes
 * Instructions: 17
 */
void CTimer_CTimer(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTimer_Restart(); /* call */
}

/*
 * Function: CTimer::Restart
 * Address: 0x0804c82c
 * Stack: 20 bytes
 * Instructions: 15
 */
void CTimer_Restart(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    time(); /* call */
}

/*
 * Function: CTimer::SetInterval
 * Address: 0x0804c858
 * Stack: 0 bytes
 * Instructions: 15
 */
void CTimer_SetInterval(void) {
}

/*
 * Function: CTimer::StartTimer
 * Address: 0x0804c87c
 * Stack: 20 bytes
 * Instructions: 14
 */
void CTimer_StartTimer(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTimer_GetTickCount(); /* call */
}

/*
 * Function: CTimer::StopTimer
 * Address: 0x0804c89c
 * Stack: 20 bytes
 * Instructions: 53
 */
void CTimer_StopTimer(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTimer_GetTickCount(); /* call */
    time(); /* call */
    difftime(); /* call */
    CTimer_OutputLog(); /* call */
    CTimer_Restart(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CTimer::OutputLog
 * Address: 0x0804c924
 * Stack: 8 bytes
 * Instructions: 77
 */
void CTimer_OutputLog(void) {
    uint32_t local_vars[2]; /* 8 bytes */

    time(); /* call */
    ctime_r(); /* call */
    strlen(); /* call */
    fopen(); /* call */
    fprintf(); /* call */
    fclose(); /* call */
}

/*
 * Function: CTimer::GetTickCount
 * Address: 0x0804ca20
 * Stack: 48 bytes
 * Instructions: 64
 */
void CTimer_GetTickCount(CTimer* self) {
    uint32_t local_vars[12]; /* 48 bytes */

    gettimeofday(); /* call */

    /* Control flow: 1 branches */
}

