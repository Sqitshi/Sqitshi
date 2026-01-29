/* ============================================================================
 * FWOnline Zoneserver - CDBAccess
 * Functions: 13
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CDBAccess::CDBAccess
 * Address: 0x0815f360
 * Stack: 0 bytes
 * Instructions: 10
 */
void CDBAccess_CDBAccess(void) {
}

/*
 * Function: CDBAccess::~CDBAccess
 * Address: 0x0815f378
 * Stack: 20 bytes
 * Instructions: 22
 */
void CDBAccess_dtor_CDBAccess(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    mysql_close(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CDBAccess::Init
 * Address: 0x0815f3ac
 * Stack: 20 bytes
 * Instructions: 63
 */
void CDBAccess_Init(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    mysql_init(); /* call */
    mysql_real_connect(); /* call */
    strcpy(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CDBAccess::SetInitParams
 * Address: 0x0815f458
 * Stack: 20 bytes
 * Instructions: 43
 */
void CDBAccess_SetInitParams(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    mysql_init(); /* call */
    strcpy(); /* call */
}

/*
 * Function: CDBAccess::ReConnect
 * Address: 0x0815f4d0
 * Stack: 20 bytes
 * Instructions: 52
 */
void CDBAccess_ReConnect(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    mysql_free_result(); /* call */
    mysql_close(); /* call */
    mysql_init(); /* call */
    printf(); /* call */
    mysql_real_connect(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CDBAccess::Disconnect
 * Address: 0x0815f56c
 * Stack: 20 bytes
 * Instructions: 21
 */
void CDBAccess_Disconnect(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    mysql_free_result(); /* call */
    mysql_close(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CDBAccess::SQLQuery
 * Address: 0x0815f5ac
 * Stack: 100 bytes
 * Instructions: 132
 */
void CDBAccess_SQLQuery(CDBAccess* self) {
    uint32_t local_vars[25]; /* 100 bytes */

    mysql_free_result(); /* call */
    vsnprintf(); /* call */
    strlen(); /* call */
    mysql_real_query(); /* call */
    mysql_errno(); /* call */
    mysql_error(); /* call */
    sprintf(); /* call */
    CDBAccess_ReConnect(); /* call */
    __assert_fail(); /* call */
    mysql_affected_rows(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CDBAccess::FetchNextRow
 * Address: 0x0815f74c
 * Stack: 20 bytes
 * Instructions: 66
 */
void CDBAccess_FetchNextRow(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    mysql_store_result(); /* call */
    mysql_num_rows(); /* call */
    mysql_fetch_row(); /* call */
    mysql_free_result(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CDBAccess::FetchNextRow
 * Address: 0x0815f834
 * Stack: 108 bytes
 * Instructions: 368
 */
void CDBAccess_FetchNextRow(CDBAccess* self) {
    uint32_t local_vars[27]; /* 108 bytes */

    mysql_store_result(); /* call */
    mysql_num_rows(); /* call */
    mysql_fetch_row(); /* call */
    mysql_free_result(); /* call */
    strcpy(); /* call */
    atoi(); /* call */
    strtoul(); /* call */
    atof(); /* call */
    strtod(); /* call */
    mysql_fetch_lengths(); /* call */
    memcpy(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CDBAccess::GetLastInsertID
 * Address: 0x0815fce8
 * Stack: 12 bytes
 * Instructions: 25
 */
void CDBAccess_GetLastInsertID(void) {
    uint32_t local_vars[3]; /* 12 bytes */

    mysql_insert_id(); /* call */
}

/*
 * Function: CDBAccess::BlobUpdate
 * Address: 0x0815fd18
 * Stack: 188 bytes
 * Instructions: 162
 */
void CDBAccess_BlobUpdate(void) {
    uint32_t local_vars[47]; /* 188 bytes */

    sprintf(); /* call */
    mysql_real_escape_string(); /* call */
    strmov(); /* call */
    printf(); /* call */
    mysql_real_query(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CDBAccess::BlobRead
 * Address: 0x0815ff14
 * Stack: 180 bytes
 * Instructions: 129
 */
void CDBAccess_BlobRead(void) {
    uint32_t local_vars[45]; /* 180 bytes */

    sprintf(); /* call */
    strlen(); /* call */
    mysql_real_query(); /* call */
    mysql_errno(); /* call */
    CDBAccess_ReConnect(); /* call */
    mysql_store_result(); /* call */
    mysql_fetch_row(); /* call */
    mysql_fetch_lengths(); /* call */
    memcpy(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CDBAccess::BlobInsert
 * Address: 0x081600b8
 * Stack: 28 bytes
 * Instructions: 150
 */
void CDBAccess_BlobInsert(void) {
    uint32_t local_vars[7]; /* 28 bytes */

    sprintf(); /* call */
    strmov(); /* call */
    mysql_real_escape_string(); /* call */
    mysql_real_query(); /* call */

    /* Control flow: 4 branches */
}

