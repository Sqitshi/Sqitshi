#ifndef _FWONLINE_DEFS_H_
#define _FWONLINE_DEFS_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <time.h>
#include <ctype.h>
#include <sys/resource.h>
#include <arpa/inet.h>
#include <sys/time.h>

/* __assert_fail macro */
#define __assert_fail(a,b,c,d) abort()

/* IDA helper macros */
#define LOBYTE(x)   (*(uint8_t*)&(x))
#define HIBYTE(x)   (*((uint8_t*)&(x)+1))
#define LOWORD(x)   (*(uint16_t*)&(x))
#define HIWORD(x)   (*((uint16_t*)&(x)+1))
#define LODWORD(x)  (*(uint32_t*)&(x))
#define HIDWORD(x)  (*((uint32_t*)&(x)+1))
#define BYTE1(x)    (*((uint8_t*)&(x)+1))
#define BYTE2(x)    (*((uint8_t*)&(x)+2))
#define BYTE3(x)    (*((uint8_t*)&(x)+3))
#define WORD1(x)    (*((uint16_t*)&(x)+1))
#define COERCE_FLOAT(x) (*(float*)&(x))
#define COERCE_DOUBLE(x) (*(double*)&(x))
#define BYTEn(x, n) (*((uint8_t*)&(x)+n))
#define WORDn(x, n) (*((uint16_t*)&(x)+n))
#define PAIR64(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))

/* MySQL stubs */
typedef struct MYSQL { int dummy; } MYSQL;
typedef struct MYSQL_RES { int dummy; } MYSQL_RES;
typedef char** MYSQL_ROW;
static inline MYSQL* mysql_init(MYSQL* p) { return 0; }
static inline MYSQL* mysql_real_connect(MYSQL* m, const char* h, const char* u, const char* p, const char* d, unsigned int port, const char* s, unsigned long f) { return 0; }
static inline int mysql_query(MYSQL* m, const char* q) { return 0; }
static inline MYSQL_RES* mysql_store_result(MYSQL* m) { return 0; }
static inline MYSQL_ROW mysql_fetch_row(MYSQL_RES* r) { return 0; }
static inline void mysql_free_result(MYSQL_RES* r) {}
static inline void mysql_close(MYSQL* m) {}
static inline const char* mysql_error(MYSQL* m) { return ""; }
static inline unsigned long mysql_num_rows(MYSQL_RES* r) { return 0; }
static inline unsigned int mysql_num_fields(MYSQL_RES* r) { return 0; }
static inline unsigned int mysql_errno(MYSQL* m) { return 0; }
static inline unsigned long mysql_affected_rows(MYSQL* m) { return 0; }
static inline unsigned long mysql_insert_id(MYSQL* m) { return 0; }

/* Log stubs */
static char ALog0[256];
static char ALog1[256];
static char ALog2[256];
static char ALog3[256];
static char ALog4[256];
static char ALog5[256];
static char ALog6[256];
static char ALog7[256];
static char ALog8[256];
static char ALog9[256];
static char ALog10[256];
static char ALog11[256];
static char ALog12[256];
static char ALog13[256];
static char ALog14[256];
static char ALog15[256];
static char ALog16[256];
static char ALog17[256];
static char ALog18[256];
static char ALog19[256];
static char ALog20[256];
static char SysLog[256];
static char ScriptLog[256];
static char ProcMgr[256];
static char ChatLog[256];

/* void_ptr stubs */
static inline void* void_ptr_0() { return 0; }
static inline void* void_ptr_1() { return 0; }
static inline void* void_ptr_2() { return 0; }
static inline void* void_ptr_3() { return 0; }
static inline void* void_ptr_4() { return 0; }

/* __rtti_user macro - accepts any arguments */
#define __rtti_user(...) 0

/* _AX register stub */
static int _AX;

/* __sighandler_t typedef */
typedef void (*__sighandler_t)(int);

/* OpenSSL stubs */
typedef struct { int dummy; } MD5_CTX;
static inline int MD5_Init(MD5_CTX* c) { return 0; }
static inline int MD5_Update(MD5_CTX* c, const void* d, size_t l) { return 0; }
static inline int MD5_Final(unsigned char* m, MD5_CTX* c) { return 0; }


// Fehlende Funktionsdeklarationen
extern "C" {
    int luaK_jump(void* fs);
    void ERR_print_errors_fp(void* fp);
    void syslog(int priority, const char* format, ...);
}

// Fehlende Typen
typedef struct CVKY_CollisionResponse_tCollisionData {
    int dummy;
} CVKY_CollisionResponse_tCollisionData;

// Fehlende Funktionen
int CMemAccess_Init(void* self);
int CMemAccess_RefreshCacheObject(void* self, void* obj);

#endif /* _FWONLINE_DEFS_H_ */

