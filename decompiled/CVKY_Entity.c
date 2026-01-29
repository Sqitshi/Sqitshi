/* ============================================================================
 * FWOnline Zoneserver - CVKY_Entity
 * Functions: 2
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CVKY_Entity::CVKY_Entity
 * Address: 0x08176500
 * Stack: 20 bytes
 * Instructions: 35
 */
void CVKY_Entity_CVKY_Entity(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CGEN_Node_CGEN_Node(); /* call */
    __throw(); /* call */
    CGEN_Node_dtor_CGEN_Node(); /* call */
    terminate(); /* call */
}

/*
 * Function: CVKY_Entity::~CVKY_Entity
 * Address: 0x08176640
 * Stack: 16 bytes
 * Instructions: 23
 */
void CVKY_Entity_dtor_CVKY_Entity(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CGEN_Node_dtor_CGEN_Node(); /* call */
}

