/* ============================================================================
 * FWOnline Zoneserver - MODIFIED Type Definitions for 32-bit HP/Chi
 * 
 * WARNING: This is a MODIFIED version of the structures!
 * Using this requires recompiling the entire server.
 * ============================================================================ */

#ifndef _FWONLINE_TYPES_32BIT_H_
#define _FWONLINE_TYPES_32BIT_H_

#include <stdint.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int DWORD;
typedef int BOOL;

/* ============================================================================
 * CharStats32 - Player Character Statistics with 32-bit HP/Chi
 * Size: 280 bytes (8 bytes larger than original)
 * 
 * CHANGES FROM ORIGINAL:
 * - wMaxHP -> dwMaxHP (WORD -> DWORD)
 * - wCurrHP -> dwCurrHP (WORD -> DWORD)
 * - wMaxChi -> dwMaxChi (WORD -> DWORD)
 * - wCurrChi -> dwCurrChi (WORD -> DWORD)
 * - All subsequent field offsets shifted by +8 bytes
 * ============================================================================ */
#pragma pack(push, 1)
typedef struct _CharStats32 {
    /* Primary Attributes (offset 0-5) */
    BYTE byStrength;           /* offset: 0 */
    BYTE byConstitution;       /* offset: 1 */
    BYTE byAgility;            /* offset: 2 */
    BYTE byMind;               /* offset: 3 */
    BYTE byPerception;         /* offset: 4 */
    BYTE _padding_5;           /* offset: 5 */
    
    /* Combat Ratings (offset 6-11) */
    WORD wAttackRating;        /* offset: 6 */
    WORD wDefenseRating;       /* offset: 8 */
    WORD wBaseDamage;          /* offset: 10 */
    
    /* HP and Chi - NOW 32-BIT! (offset 12-27) */
    DWORD dwMaxHP;             /* offset: 12 - NOW SUPPORTS UP TO 4,294,967,295 */
    DWORD dwCurrHP;            /* offset: 16 - NOW SUPPORTS UP TO 4,294,967,295 */
    DWORD dwMaxChi;            /* offset: 20 - NOW SUPPORTS UP TO 4,294,967,295 */
    DWORD dwCurrChi;           /* offset: 24 - NOW SUPPORTS UP TO 4,294,967,295 */
    
    /* Regeneration (offset 28-31) */
    WORD wHPRegen;             /* offset: 28 */
    WORD wChiRegen;            /* offset: 30 */
    
    /* ... rest of structure with +8 offset ... */
    
    /* Total size: 280 bytes */
    BYTE _remaining[248];      /* Placeholder for remaining fields */
    
} CharStats32;
#pragma pack(pop)

static_assert(sizeof(CharStats32) == 280, "CharStats32 must be 280 bytes");

#endif /* _FWONLINE_TYPES_32BIT_H_ */
