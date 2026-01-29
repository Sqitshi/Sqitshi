/* ============================================================================
 * FWOnline Zoneserver - CRC32
 * Functions: 7
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CRC32::CRC32
 * Address: 0x08162740
 * Stack: 20 bytes
 * Instructions: 28
 */
void CRC32_CRC32(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_new(); /* call */
    CRC32_crc32_init(); /* call */
}

/*
 * Function: CRC32::~CRC32
 * Address: 0x08162790
 * Stack: 20 bytes
 * Instructions: 36
 */
void CRC32_dtor_CRC32(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CRC32::reflect
 * Address: 0x081627e8
 * Stack: 20 bytes
 * Instructions: 36
 */
void CRC32_reflect(CRC32* self) {
    uint32_t local_vars[5]; /* 20 bytes */

    /* Control flow: 2 branches */
}

/*
 * Function: CRC32::crc32_init
 * Address: 0x0816284c
 * Stack: 44 bytes
 * Instructions: 97
 */
void CRC32_crc32_init(CRC32* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    CRC32_reflect(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CRC32::crc32_calc
 * Address: 0x08162978
 * Stack: 16 bytes
 * Instructions: 40
 */
void CRC32_crc32_calc(CRC32* self) {
    uint32_t local_vars[4]; /* 16 bytes */

    /* Control flow: 1 branches */
}

/*
 * Function: CRC32::calculate
 * Address: 0x081629e0
 * Stack: 20 bytes
 * Instructions: 57
 */
void CRC32_calculate(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    rewind(); /* call */
    feof(); /* call */
    memset(); /* call */
    fread(); /* call */
    CRC32_crc32_calc(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CRC32::get
 * Address: 0x08162a7c
 * Stack: 0 bytes
 * Instructions: 8
 */
void CRC32_get(void) {
}

