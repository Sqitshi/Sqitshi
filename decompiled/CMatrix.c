/* ============================================================================
 * FWOnline Zoneserver - CMatrix
 * Functions: 32
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CMatrix::CMatrix
 * Address: 0x0804c760
 * Stack: 16 bytes
 * Instructions: 27
 */
void CMatrix_CMatrix(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CMatrix_SetIdentity(); /* call */
    CMatrix_ClearMatrix(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CMatrix::ClearMatrix
 * Address: 0x0804c7a0
 * Stack: 20 bytes
 * Instructions: 15
 */
void CMatrix_ClearMatrix(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    memset(); /* call */
}

/*
 * Function: CMatrix::SetIdentity
 * Address: 0x0804c7c0
 * Stack: 0 bytes
 * Instructions: 28
 */
void CMatrix_SetIdentity(void) {
}

/*
 * Function: CMatrix::CMatrix
 * Address: 0x08088090
 * Stack: 0 bytes
 * Instructions: 11
 */
void CMatrix_CMatrix(void) {
}

/*
 * Function: CMatrix::SetTranslate
 * Address: 0x080a09e0
 * Stack: 0 bytes
 * Instructions: 28
 */
void CMatrix_SetTranslate(void) {
}

/*
 * Function: CMatrix::SetTranslate
 * Address: 0x080a0a28
 * Stack: 0 bytes
 * Instructions: 28
 */
void CMatrix_SetTranslate(void) {
}

/*
 * Function: CMatrix::SetRotation
 * Address: 0x080a0a70
 * Stack: 0 bytes
 * Instructions: 33
 */
void CMatrix_SetRotation(void) {
}

/*
 * Function: CMatrix::__vc
 * Address: 0x080a0ad8
 * Stack: 0 bytes
 * Instructions: 13
 */
void CMatrix___vc(CMatrix* self) {
}

/*
 * Function: CMatrix::SetScale
 * Address: 0x0816be10
 * Stack: 0 bytes
 * Instructions: 26
 */
void CMatrix_SetScale(void) {
}

/*
 * Function: CMatrix::AddTranslate
 * Address: 0x0816be58
 * Stack: 0 bytes
 * Instructions: 12
 */
void CMatrix_AddTranslate(void) {
}

/*
 * Function: CMatrix::Quaternions
 * Address: 0x0817cdd0
 * Stack: 24 bytes
 * Instructions: 87
 */
void CMatrix_Quaternions(void) {
    uint32_t local_vars[6]; /* 24 bytes */
}

/*
 * Function: CMatrix::SetRotateX
 * Address: 0x0817d734
 * Stack: 4 bytes
 * Instructions: 41
 */
void CMatrix_SetRotateX(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    FastSin(); /* call */
    FastCos(); /* call */
}

/*
 * Function: CMatrix::SetRotateY
 * Address: 0x0817d7d4
 * Stack: 4 bytes
 * Instructions: 42
 */
void CMatrix_SetRotateY(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    FastSin(); /* call */
    FastCos(); /* call */
}

/*
 * Function: CMatrix::SetRotateZ
 * Address: 0x0817d878
 * Stack: 4 bytes
 * Instructions: 41
 */
void CMatrix_SetRotateZ(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    FastSin(); /* call */
    FastCos(); /* call */
}

/*
 * Function: CMatrix::SetRotate
 * Address: 0x0817d918
 * Stack: 52 bytes
 * Instructions: 87
 */
void CMatrix_SetRotate(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    FastSin(); /* call */
    FastCos(); /* call */
}

/*
 * Function: CMatrix::MakeRotationFromRightDir
 * Address: 0x0817da28
 * Stack: 4 bytes
 * Instructions: 101
 */
void CMatrix_MakeRotationFromRightDir(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    InverseSqrt(); /* call */
    CMatrix_MakeRotation(); /* call */
}

/*
 * Function: CMatrix::MakeRotationFromRightDir
 * Address: 0x0817db14
 * Stack: 4 bytes
 * Instructions: 98
 */
void CMatrix_MakeRotationFromRightDir(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    InverseSqrt(); /* call */
    CMatrix_MakeRotation(); /* call */
}

/*
 * Function: CMatrix::MakeRotationFromDirUp
 * Address: 0x0817dbf8
 * Stack: 4 bytes
 * Instructions: 101
 */
void CMatrix_MakeRotationFromDirUp(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    InverseSqrt(); /* call */
    CMatrix_MakeRotation(); /* call */
}

/*
 * Function: CMatrix::MakeRotationFromDirUp
 * Address: 0x0817dce4
 * Stack: 4 bytes
 * Instructions: 98
 */
void CMatrix_MakeRotationFromDirUp(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    InverseSqrt(); /* call */
    CMatrix_MakeRotation(); /* call */
}

/*
 * Function: CMatrix::MakeRotationFromUpRight
 * Address: 0x0817ddc8
 * Stack: 4 bytes
 * Instructions: 101
 */
void CMatrix_MakeRotationFromUpRight(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    InverseSqrt(); /* call */
    CMatrix_MakeRotation(); /* call */
}

/*
 * Function: CMatrix::MakeRotationMatrixFromUpRight
 * Address: 0x0817deb4
 * Stack: 4 bytes
 * Instructions: 98
 */
void CMatrix_MakeRotationMatrixFromUpRight(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    InverseSqrt(); /* call */
    CMatrix_MakeRotation(); /* call */
}

/*
 * Function: CMatrix::MakeRotation
 * Address: 0x0817df98
 * Stack: 0 bytes
 * Instructions: 36
 */
void CMatrix_MakeRotation(CMatrix* self) {
}

/*
 * Function: CMatrix::MakeRotation
 * Address: 0x0817e010
 * Stack: 0 bytes
 * Instructions: 66
 */
void CMatrix_MakeRotation(CMatrix* self) {
}

/*
 * Function: CMatrix::Normalize3x3Vectors
 * Address: 0x0817e0c4
 * Stack: 4 bytes
 * Instructions: 102
 */
void CMatrix_Normalize3x3Vectors(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    InverseSqrt(); /* call */
}

/*
 * Function: CMatrix::MatrixMultiply
 * Address: 0x0817e4d4
 * Stack: 0 bytes
 * Instructions: 200
 */
void CMatrix_MatrixMultiply(CMatrix* self) {
}

/*
 * Function: CMatrix::MatrixMultiply3x3
 * Address: 0x0817e6ec
 * Stack: 0 bytes
 * Instructions: 96
 */
void CMatrix_MatrixMultiply3x3(CMatrix* self) {
}

/*
 * Function: CMatrix::PreScaleMatrix
 * Address: 0x0817e808
 * Stack: 0 bytes
 * Instructions: 49
 */
void CMatrix_PreScaleMatrix(void) {
}

/*
 * Function: CMatrix::PostScaleMatrix
 * Address: 0x0817e880
 * Stack: 0 bytes
 * Instructions: 47
 */
void CMatrix_PostScaleMatrix(void) {
}

/*
 * Function: CMatrix::PreTranslateMatrix
 * Address: 0x0817e8f4
 * Stack: 0 bytes
 * Instructions: 47
 */
void CMatrix_PreTranslateMatrix(void) {
}

/*
 * Function: CMatrix::PostTranslateMatrix
 * Address: 0x0817e96c
 * Stack: 0 bytes
 * Instructions: 55
 */
void CMatrix_PostTranslateMatrix(void) {
}

/*
 * Function: CMatrix::ExtractRotation
 * Address: 0x0817e9fc
 * Stack: 4 bytes
 * Instructions: 46
 */
void CMatrix_ExtractRotation(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    asinf(); /* call */
    FastCos(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CMatrix::ExtractRotation
 * Address: 0x0817ea6c
 * Stack: 4 bytes
 * Instructions: 42
 */
void CMatrix_ExtractRotation(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    asinf(); /* call */
    FastCos(); /* call */

    /* Control flow: 1 branches */
}

