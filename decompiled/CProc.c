/* ============================================================================
 * FWOnline Zoneserver - CProc
 * Functions: 7
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CProc::CProc
 * Address: 0x08051380
 * Stack: 0 bytes
 * Instructions: 10
 */
void CProc_CProc(void) {
}

/*
 * Function: CProc::Startup
 * Address: 0x080514b4
 * Stack: 52 bytes
 * Instructions: 145
 */
void CProc_Startup(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    pthread_attr_init(); /* call */
    pthread_attr_setdetachstate(); /* call */
    CSession_Startup(); /* call */
    pthread_create(); /* call */
    CMemMgr_Startup(); /* call */
    CEventMgr_Startup(); /* call */
    CAI_Startup(); /* call */
    pthread_attr_destroy(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CProc::GetStatus
 * Address: 0x0805164c
 * Stack: 0 bytes
 * Instructions: 42
 */
void CProc_GetStatus(void) {

    /* Control flow: 1 branches */
}

/*
 * Function: CProc::Remove
 * Address: 0x080516c4
 * Stack: 20 bytes
 * Instructions: 78
 */
void CProc_Remove(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_dtor_CSession(); /* call */
    CMemMgr_dtor_CMemMgr(); /* call */
    CAI_dtor_CAI(); /* call */
    CEventMgr_dtor_CEventMgr(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CProc::Restart
 * Address: 0x08051798
 * Stack: 0 bytes
 * Instructions: 9
 */
void CProc_Restart(void) {
}

/*
 * Function: CProc::Shutdown
 * Address: 0x080517a8
 * Stack: 20 bytes
 * Instructions: 47
 */
void CProc_Shutdown(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSession_Shutdown(); /* call */
    CCommsMgr_Shutdown(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CProc::Process
 * Address: 0x08051830
 * Stack: 0 bytes
 * Instructions: 11
 */
void CProc_Process(void) {
}

