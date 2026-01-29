/* ============================================================================
 * FWOnline Zoneserver - CSceneSharedData
 * Functions: 5
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CSceneSharedData::CSceneSharedData
 * Address: 0x080a0bd0
 * Stack: 20 bytes
 * Instructions: 63
 */
void CSceneSharedData_CSceneSharedData(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CVKY_PCList_CVKY_PCList(); /* call */
    CVKY_NPCTypeList_CVKY_NPCTypeList(); /* call */
    CVKY_CollisionList_CVKY_CollisionList(); /* call */
    __throw(); /* call */
    CVKY_CollisionList_dtor_CVKY_CollisionList(); /* call */
    CVKY_NPCTypeList_dtor_CVKY_NPCTypeList(); /* call */
    CVKY_PCList_dtor_CVKY_PCList(); /* call */
    terminate(); /* call */
}

/*
 * Function: CSceneSharedData::~CSceneSharedData
 * Address: 0x080a0c90
 * Stack: 16 bytes
 * Instructions: 42
 */
void CSceneSharedData_dtor_CSceneSharedData(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CVKY_CollisionList_dtor_CVKY_CollisionList(); /* call */
    CVKY_NPCTypeList_dtor_CVKY_NPCTypeList(); /* call */
    CVKY_PCList_dtor_CVKY_PCList(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSceneSharedData::LoadPCTypeList
 * Address: 0x08173004
 * Stack: 20 bytes
 * Instructions: 62
 */
void CSceneSharedData_LoadPCTypeList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    LoadFile(); /* call */
    CVKY_PCList_ReadFile(); /* call */
    __builtin_vec_delete(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CSceneSharedData::LoadNPCTypeList
 * Address: 0x081730b0
 * Stack: 20 bytes
 * Instructions: 64
 */
void CSceneSharedData_LoadNPCTypeList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    LoadFile(); /* call */
    CVKY_NPCTypeList_ReadFile(); /* call */
    __builtin_vec_delete(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CSceneSharedData::LoadCharacterCollisionBoxList
 * Address: 0x08173160
 * Stack: 20 bytes
 * Instructions: 64
 */
void CSceneSharedData_LoadCharacterCollisionBoxList(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    LoadFile(); /* call */
    CVKY_CollisionList_ReadFile(); /* call */
    __builtin_vec_delete(); /* call */

    /* Control flow: 6 branches */
}

