/* ============================================================================
 * FWOnline Zoneserver - CMemObject
 * Functions: 7
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CMemObject::CMemObject
 * Address: 0x08058c10
 * Stack: 20 bytes
 * Instructions: 19
 */
void CMemObject_CMemObject(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_new(); /* call */
}

/*
 * Function: CMemObject::~CMemObject
 * Address: 0x08058c48
 * Stack: 20 bytes
 * Instructions: 27
 */
void CMemObject_dtor_CMemObject(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CMemObject::GetElementsCount
 * Address: 0x08058c90
 * Stack: 0 bytes
 * Instructions: 8
 */
void CMemObject_GetElementsCount(void) {
}

/*
 * Function: CMemObject::Init
 * Address: 0x0805a468
 * Stack: 20 bytes
 * Instructions: 239
 */
void CMemObject_Init(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    memset(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CMemObject::Read
 * Address: 0x0805a800
 * Stack: -128 bytes
 * Instructions: 12007
 */
void CMemObject_Read(CMemObject* self) {

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */

    /* Control flow: 387 branches */
}

/*
 * Function: CMemObject::Flush
 * Address: 0x0806441c
 * Stack: 8 bytes
 * Instructions: 9714
 */
void CMemObject_Flush(CMemObject* self) {
    uint32_t local_vars[2]; /* 8 bytes */

    CDBAccess_SQLQuery(); /* call */
    strcpy(); /* call */
    sprintf(); /* call */
    CDBAccess_BlobUpdate(); /* call */

    /* Control flow: 190 branches */
}

/*
 * Function: CMemObject::CreateElements
 * Address: 0x0806ced4
 * Stack: 112 bytes
 * Instructions: 1266
 */
void CMemObject_CreateElements(CMemObject* self) {
    uint32_t local_vars[28]; /* 112 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_GetLastInsertID(); /* call */

    /* Control flow: 52 branches */
}

