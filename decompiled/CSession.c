/* ============================================================================
 * FWOnline Zoneserver - CSession
 * Functions: 29
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CSession::CSession
 * Address: 0x08051d08
 * Stack: 44 bytes
 * Instructions: 222
 */
void CSession_CSession(CSession* self) {
    uint32_t local_vars[11]; /* 44 bytes */

    CTimer_CTimer(); /* call */
    __builtin_new(); /* call */
    CRC32_CRC32(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CLog_RegisterModule(); /* call */
    pthread_mutex_init(); /* call */
    __lzo_init2(); /* call */
    terminate(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSession::~CSession
 * Address: 0x08051fe8
 * Stack: 16 bytes
 * Instructions: 121
 */
void CSession_dtor_CSession(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    CTaskMgr_dtor_CTaskMgr(); /* call */
    close(); /* call */
    _._t10CHashTable1ZP10Connection(); /* call */
    Connection_dtor_Connection(); /* call */
    __builtin_vec_delete(); /* call */
    __builtin_delete(); /* call */

    /* Control flow: 14 branches */
}

/*
 * Function: CSession::Startup
 * Address: 0x08052160
 * Stack: 108 bytes
 * Instructions: 506
 */
void CSession_Startup(CSession* self) {
    uint32_t local_vars[27]; /* 108 bytes */

    __builtin_new(); /* call */
    __t10CHashTable1ZP10Connectioni(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    __builtin_vec_new(); /* call */
    Connection_Connection(); /* call */
    __builtin_vec_delete(); /* call */
    Connection_InitBuffer(); /* call */
    htons(); /* call */
    CTaskMgr_CTaskMgr(); /* call */
    CSceneMgr_GetProcessID(); /* call */
    CTaskMgr_Init(); /* call */
    CLogFilter_Log(); /* call */
    memset(); /* call */
    inet_addr(); /* call */
    strncpy(); /* call */
    mkfifo(); /* call */
    __errno_location(); /* call */
    open(); /* call */
    Connection_dtor_Connection(); /* call */
    terminate(); /* call */

    /* Control flow: 18 branches */
}

/*
 * Function: CSession::DumpMemory
 * Address: 0x08052818
 * Stack: 20 bytes
 * Instructions: 14
 */
void CSession_DumpMemory(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTaskMgr_DumpMemory(); /* call */
}

/*
 * Function: CSession::SendProcess
 * Address: 0x0805283c
 * Stack: 2700 bytes
 * Instructions: 795
 */
void CSession_SendProcess(CSession* self) {
    uint32_t local_vars[675]; /* 2700 bytes */

    getpid(); /* call */
    CLogFilter_Log(); /* call */
    GetTickCount(); /* call */
    CLogFilter_Log(); /* call */
    CTaskMgr_ReloadScripts(); /* call */
    CTaskMgr_ActivityLog(); /* call */
    time(); /* call */
    difftime(); /* call */
    pthread_mutex_lock(); /* call */
    CRcvPkt_GetNetObject(); /* call */
    pthread_mutex_unlock(); /* call */
    CTaskMgr_AssignTask(); /* call */
    CCommsMgr_SetStatus(); /* call */
    CSession_SendWorldController(); /* call */
    CSndPkt_GetNextPacket(); /* call */
    send(); /* call */
    __errno_location(); /* call */
    CSndPkt_RemovePacket(); /* call */
    Remove__t10CHashTable1ZP10ConnectionUx(); /* call */
    write(); /* call */
    close(); /* call */
    CSndPkt_ReQueueSent(); /* call */
    CSession_SendPacket(); /* call */

    /* Control flow: 48 branches */
}

/*
 * Function: CSession::RecvProcess
 * Address: 0x0805331c
 * Stack: 1740 bytes
 * Instructions: 971
 */
void CSession_RecvProcess(CSession* self) {
    uint32_t local_vars[435]; /* 1740 bytes */

    getpid(); /* call */
    CLogFilter_Log(); /* call */
    pthread_mutex_lock(); /* call */
    memcpy(); /* call */
    pthread_mutex_unlock(); /* call */
    select(); /* call */
    read(); /* call */
    recvfrom(); /* call */
    CLogFilter_Log(); /* call */
    memset(); /* call */
    connect(); /* call */
    CCommsMgr_SetStatus(); /* call */
    GetTickCount(); /* call */
    CSndPkt_SetRetryInterval(); /* call */
    recv(); /* call */
    __errno_location(); /* call */
    time(); /* call */
    CSndPkt_AddUID(); /* call */
    CTaskMgr_AssignTask(); /* call */
    CSndPkt_AddSystemPacket(); /* call */
    lzo1x_decompress_safe(); /* call */
    CRcvPkt_QueuePacket(); /* call */
    CSndPkt_DeletePackets(); /* call */

    /* Control flow: 54 branches */
}

/*
 * Function: CSession::Shutdown
 * Address: 0x08054170
 * Stack: 0 bytes
 * Instructions: 12
 */
void CSession_Shutdown(void) {
}

/*
 * Function: CSession::AddConnection
 * Address: 0x0805418c
 * Stack: 1692 bytes
 * Instructions: 844
 */
void CSession_AddConnection(CSession* self) {
    uint32_t local_vars[423]; /* 1692 bytes */

    sendto(); /* call */
    CLogFilter_Log(); /* call */
    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    Connection_FlushQueues(); /* call */
    memcpy(); /* call */
    GetTickCount(); /* call */
    strncpy(); /* call */
    socket(); /* call */
    CLogFilter_Log(); /* call */
    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */
    setsockopt(); /* call */
    close(); /* call */
    memset(); /* call */
    htonl(); /* call */
    bind(); /* call */
    getsockname(); /* call */
    ntohs(); /* call */
    CSndPkt_AddSystemPacket(); /* call */
    CSndPkt_GetNextPacket(); /* call */
    CSndPkt_RemovePacket(); /* call */
    Insert__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    CTaskMgr_AssignTask(); /* call */
    CSession_SendWorldController(); /* call */
    write(); /* call */
    strcmp(); /* call */
    strcpy(); /* call */

    /* Control flow: 25 branches */
}

/*
 * Function: CSession::DropConnection
 * Address: 0x08054c7c
 * Stack: 20 bytes
 * Instructions: 42
 */
void CSession_DropConnection(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSession::CloseConnection
 * Address: 0x08054ce8
 * Stack: 20 bytes
 * Instructions: 63
 */
void CSession_CloseConnection(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    pthread_mutex_lock(); /* call */
    time(); /* call */
    pthread_mutex_unlock(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSession::ZoneConnection
 * Address: 0x08054d98
 * Stack: 20 bytes
 * Instructions: 42
 */
void CSession_ZoneConnection(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSession::ResetSendTime
 * Address: 0x08054e08
 * Stack: 20 bytes
 * Instructions: 27
 */
void CSession_ResetSendTime(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSession::ResetTimeOut
 * Address: 0x08054e48
 * Stack: 20 bytes
 * Instructions: 28
 */
void CSession_ResetTimeOut(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CSession::PutEvent
 * Address: 0x08054e88
 * Stack: 20 bytes
 * Instructions: 62
 */
void CSession_PutEvent(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    pthread_mutex_lock(); /* call */
    CSndPkt_AddNetObject(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CSession::PutEventFlush
 * Address: 0x08054f28
 * Stack: 20 bytes
 * Instructions: 61
 */
void CSession_PutEventFlush(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    pthread_mutex_lock(); /* call */
    CSndPkt_AddNetObject(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CSession::PutEventImm
 * Address: 0x08054fc8
 * Stack: 20 bytes
 * Instructions: 69
 */
void CSession_PutEventImm(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    pthread_mutex_lock(); /* call */
    CSndPkt_AddAckPkt(); /* call */
    CSndPkt_AddNetObject(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 6 branches */
}

/*
 * Function: CSession::FlushImm
 * Address: 0x08055088
 * Stack: 1572 bytes
 * Instructions: 101
 */
void CSession_FlushImm(void) {
    uint32_t local_vars[393]; /* 1572 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    pthread_mutex_lock(); /* call */
    CSndPkt_GetNextPacket(); /* call */
    CSession_SendPacket(); /* call */
    CLogFilter_Log(); /* call */
    pthread_mutex_unlock(); /* call */
    CSndPkt_RemovePacket(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CSession::FlushImm
 * Address: 0x080551b8
 * Stack: 1572 bytes
 * Instructions: 129
 */
void CSession_FlushImm(void) {
    uint32_t local_vars[393]; /* 1572 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    pthread_mutex_lock(); /* call */
    CSndPkt_GetNextPacket(); /* call */
    CRC32_crc32_calc(); /* call */
    CLogFilter_Log(); /* call */
    CSession_SendPacket(); /* call */
    pthread_mutex_unlock(); /* call */
    CSndPkt_RemovePacket(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CSession::SendPacket2
 * Address: 0x08055338
 * Stack: 16 bytes
 * Instructions: 79
 */
void CSession_SendPacket2(void) {
    uint32_t local_vars[4]; /* 16 bytes */

    send(); /* call */
    __errno_location(); /* call */
    pthread_mutex_lock(); /* call */
    time(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CSession::SendPacket
 * Address: 0x08055418
 * Stack: 67100 bytes
 * Instructions: 245
 */
void CSession_SendPacket(void) {
    uint32_t local_vars[16775]; /* 67100 bytes */

    memcpy(); /* call */
    lzo1x_1_compress(); /* call */
    send(); /* call */
    __errno_location(); /* call */
    pthread_mutex_lock(); /* call */
    time(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 15 branches */
}

/*
 * Function: CSession::SendSysMsg
 * Address: 0x08055724
 * Stack: 20 bytes
 * Instructions: 65
 */
void CSession_SendSysMsg(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    pthread_mutex_lock(); /* call */
    CSndPkt_AddSystemPacket(); /* call */
    pthread_mutex_unlock(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CSession::FindCharacter
 * Address: 0x080557c8
 * Stack: 20 bytes
 * Instructions: 47
 */
void CSession_FindCharacter(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CSession::ExecuteInternal
 * Address: 0x08055838
 * Stack: 52 bytes
 * Instructions: 143
 */
void CSession_ExecuteInternal(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    memcpy(); /* call */
    CTaskMgr_AssignTask(); /* call */
    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    pthread_mutex_lock(); /* call */
    pthread_mutex_unlock(); /* call */
    CRcvPkt_QueuePacket(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CSession::SendWorldController
 * Address: 0x080559f0
 * Stack: 2100 bytes
 * Instructions: 280
 */
void CSession_SendWorldController(void) {
    uint32_t local_vars[525]; /* 2100 bytes */

    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    strncpy(); /* call */
    memcpy(); /* call */
    socket(); /* call */
    memset(); /* call */
    htonl(); /* call */
    htons(); /* call */
    bind(); /* call */
    close(); /* call */
    connect(); /* call */
    send(); /* call */
    recv(); /* call */
    shutdown(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CSession::LogConnections
 * Address: 0x08055da8
 * Stack: 52 bytes
 * Instructions: 127
 */
void CSession_LogConnections(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    time(); /* call */
    ntohs(); /* call */
    difftime(); /* call */
    inet_ntoa_safe(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CSession::LogLevel
 * Address: 0x08055f18
 * Stack: 0 bytes
 * Instructions: 12
 */
void CSession_LogLevel(void) {
}

/*
 * Function: CSession::Debug
 * Address: 0x08055f34
 * Stack: 52 bytes
 * Instructions: 25
 */
void CSession_Debug(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    CTaskMgr_AssignTask(); /* call */
}

/*
 * Function: CSession::SetChatLog
 * Address: 0x08055f88
 * Stack: 20 bytes
 * Instructions: 19
 */
void CSession_SetChatLog(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CTaskMgr_SetChatLog(); /* call */
}

/*
 * Function: CSession::LogConnection
 * Address: 0x08055fb8
 * Stack: 36 bytes
 * Instructions: 77
 */
void CSession_LogConnection(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    time(); /* call */
    Find__t10CHashTable1ZP10ConnectionUxRP10Connection(); /* call */
    ntohs(); /* call */
    difftime(); /* call */
    CLogFilter_Log(); /* call */

    /* Control flow: 1 branches */
}

