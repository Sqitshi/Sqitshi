/* ============================================================================
 * FWOnline Zoneserver - CMemPage
 * Functions: 5
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CMemPage::CMemPage
 * Address: 0x08058168
 * Stack: 76 bytes
 * Instructions: 211
 */
void CMemPage_CMemPage(CMemPage* self) {
    uint32_t local_vars[19]; /* 76 bytes */

    __builtin_vec_new(); /* call */
    CMemObject_CMemObject(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    __builtin_new(); /* call */
    __t10CHashTable1ZP10CMemObjecti(); /* call */
    __builtin_delete(); /* call */
    pthread_mutex_init(); /* call */
    CMemObject_dtor_CMemObject(); /* call */
    terminate(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CMemPage::~CMemPage
 * Address: 0x080583e0
 * Stack: 16 bytes
 * Instructions: 72
 */
void CMemPage_dtor_CMemPage(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CMemObject_dtor_CMemObject(); /* call */
    __builtin_vec_delete(); /* call */
    _._t10CHashTable1ZP10CMemObject(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CMemPage::Purge
 * Address: 0x08058498
 * Stack: 44 bytes
 * Instructions: 143
 */
void CMemPage_Purge(CMemPage* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    time(); /* call */
    CMemPage_QueryMemObject(); /* call */
    Remove__t10CHashTable1ZP10CMemObjectUx(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CMemPage::Stats
 * Address: 0x08058620
 * Stack: 20 bytes
 * Instructions: 174
 */
void CMemPage_Stats(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    memset(); /* call */
    CMemPage_QueryMemObject(); /* call */

    /* Control flow: 13 branches */
}

/*
 * Function: CMemPage::QueryMemObject
 * Address: 0x08059564
 * Stack: 0 bytes
 * Instructions: 547
 */
void CMemPage_QueryMemObject(void) {

    /* Control flow: 1 branches */
}

