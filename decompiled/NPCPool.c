/* ============================================================================
 * FWOnline Zoneserver - NPCPool
 * Functions: 6
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: NPCPool::NPCPool
 * Address: 0x0809e664
 * Stack: 20 bytes
 * Instructions: 26
 */
void NPCPool_NPCPool(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    pthread_mutex_init(); /* call */
}

/*
 * Function: NPCPool::GetNPCSlotCount
 * Address: 0x0809e6b4
 * Stack: 0 bytes
 * Instructions: 9
 */
void NPCPool_GetNPCSlotCount(void) {
}

/*
 * Function: NPCPool::CreateNPCSlots
 * Address: 0x0809e6c4
 * Stack: 16 bytes
 * Instructions: 31
 */
void NPCPool_CreateNPCSlots(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    __builtin_vec_new(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: NPCPool::~NPCPool
 * Address: 0x0809e70c
 * Stack: 20 bytes
 * Instructions: 30
 */
void NPCPool_dtor_NPCPool(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: NPCPool::PutNPC
 * Address: 0x0809e758
 * Stack: 20 bytes
 * Instructions: 47
 */
void NPCPool_PutNPC(NPCPool* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    putmutexlock(); /* call */
    putmutexunlock(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: NPCPool::GetFreeNPC
 * Address: 0x0809e7d8
 * Stack: 20 bytes
 * Instructions: 51
 */
void NPCPool_GetFreeNPC(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    getmutexlock(); /* call */
    getmutexunlock(); /* call */

    /* Control flow: 3 branches */
}

