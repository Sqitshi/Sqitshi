/* ============================================================================
 * FWOnline Zoneserver - NPCGroupInfo
 * Functions: 4
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: NPCGroupInfo::NPCGroupInfo
 * Address: 0x0808caf8
 * Stack: 0 bytes
 * Instructions: 10
 */
void NPCGroupInfo_NPCGroupInfo(void) {
}

/*
 * Function: NPCGroupInfo::CreateNPC
 * Address: 0x0808cb14
 * Stack: 60 bytes
 * Instructions: 170
 */
void NPCGroupInfo_CreateNPC(NPCGroupInfo* self) {
    uint32_t local_vars[15]; /* 60 bytes */

    __builtin_vec_new(); /* call */
    NPCInfo_NPCInfo(); /* call */
    __throw(); /* call */
    __builtin_vec_delete(); /* call */
    memset(); /* call */
    NPCInfo_dtor_NPCInfo(); /* call */
    terminate(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: NPCGroupInfo::GetNPCCount
 * Address: 0x0808cd18
 * Stack: 0 bytes
 * Instructions: 9
 */
void NPCGroupInfo_GetNPCCount(void) {
}

/*
 * Function: NPCGroupInfo::~NPCGroupInfo
 * Address: 0x0808cd28
 * Stack: 16 bytes
 * Instructions: 59
 */
void NPCGroupInfo_dtor_NPCGroupInfo(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    NPCInfo_dtor_NPCInfo(); /* call */
    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 4 branches */
}

