/* ============================================================================
 * FWOnline Zoneserver - NPCInfo
 * Functions: 2
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: NPCInfo::NPCInfo
 * Address: 0x08096b90
 * Stack: 28 bytes
 * Instructions: 145
 */
void NPCInfo_NPCInfo(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    TargetInfo_TargetInfo(); /* call */
    CEffectElement_CEffectElement(); /* call */
    CVector_CVector(); /* call */
    pthread_mutex_init(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: NPCInfo::~NPCInfo
 * Address: 0x08096d74
 * Stack: 20 bytes
 * Instructions: 42
 */
void NPCInfo_dtor_NPCInfo(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_rwlock_wrlock(); /* call */
    CScene_DeleteObject(); /* call */
    pthread_rwlock_unlock(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 2 branches */
}

