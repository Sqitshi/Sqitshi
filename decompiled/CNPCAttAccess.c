/* ============================================================================
 * FWOnline Zoneserver - CNPCAttAccess
 * Functions: 4
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CNPCAttAccess::CNPCAttAccess
 * Address: 0x08089ff4
 * Stack: 12 bytes
 * Instructions: 40
 */
void CNPCAttAccess_CNPCAttAccess(void) {
    uint32_t local_vars[3]; /* 12 bytes */

    CNPCAttribute_CNPCAttribute(); /* call */
    memset(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CNPCAttAccess::ResetAttID
 * Address: 0x0808a054
 * Stack: 36 bytes
 * Instructions: 55
 */
void CNPCAttAccess_ResetAttID(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CMemAccess_Purge(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CNPCAttAccess::GetByAttID
 * Address: 0x0808a0f8
 * Stack: 108 bytes
 * Instructions: 3114
 */
void CNPCAttAccess_GetByAttID(CNPCAttAccess* self) {
    uint32_t local_vars[27]; /* 108 bytes */

    CMemAccess_Lock(); /* call */

    /* Control flow: 26 branches */
}

/*
 * Function: CNPCAttAccess::GetByCharID
 * Address: 0x0808c954
 * Stack: 16 bytes
 * Instructions: 43
 */
void CNPCAttAccess_GetByCharID(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
}

