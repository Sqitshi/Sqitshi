/* ============================================================================
 * FWOnline Zoneserver - _tMemCacheObject
 * Functions: 2
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: _tMemCacheObject::~_tMemCacheObject
 * Address: 0x080712a0
 * Stack: 16 bytes
 * Instructions: 28
 */
void _tMemCacheObject_dtor__tMemCacheObject(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CMemObject_dtor_CMemObject(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: _tMemCacheObject::_tMemCacheObject
 * Address: 0x080712e0
 * Stack: 20 bytes
 * Instructions: 35
 */
void _tMemCacheObject__tMemCacheObject(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CMemObject_CMemObject(); /* call */
    __throw(); /* call */
    CMemObject_dtor_CMemObject(); /* call */
    terminate(); /* call */
}

