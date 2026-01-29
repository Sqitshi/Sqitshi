/* ============================================================================
 * FWOnline Zoneserver - CGS
 * Functions: 87
 * ============================================================================ */

#include <stdint.h>
#include "../structs.h"

/*
 * Function: CGS::CGS
 * Address: 0x08074d50
 * Stack: 20 bytes
 * Instructions: 24
 */
void CGS_CGS(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLog_RegisterModule(); /* call */
}

/*
 * Function: CGS::~CGS
 * Address: 0x08074d9c
 * Stack: 20 bytes
 * Instructions: 19
 */
void CGS_dtor_CGS(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    __builtin_delete(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::ExecuteScript
 * Address: 0x08074dc8
 * Stack: 52 bytes
 * Instructions: 99
 */
void CGS_ExecuteScript(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    Find__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData(); /* call */
    CTaskMgr_LoadScript(); /* call */
    lua_gettop(); /* call */
    lua_dobuffer(); /* call */
    lua_settop(); /* call */
    memcpy(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CGS::ExecuteScript
 * Address: 0x08074f14
 * Stack: 52 bytes
 * Instructions: 100
 */
void CGS_ExecuteScript(void) {
    uint32_t local_vars[13]; /* 52 bytes */

    Find__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData(); /* call */
    CTaskMgr_LoadScript(); /* call */
    lua_gettop(); /* call */
    lua_dobuffer(); /* call */
    lua_settop(); /* call */
    memcpy(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CGS::Init
 * Address: 0x08075060
 * Stack: 20 bytes
 * Instructions: 88
 */
void CGS_Init(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    strcpy(); /* call */
    CLog_RegisterModule(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::Process
 * Address: 0x080751a0
 * Stack: 20 bytes
 * Instructions: 426
 */
void CGS_Process(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CGS_ClientTimeOut(); /* call */
    CGS_SetChatFilter(); /* call */
    CGS_SetOption(); /* call */
    CGS_SetFriendly(); /* call */
    CGS_ZoneIn(); /* call */
    CCommsMgr_DropConnection(); /* call */
    CGS_ZoneOut(); /* call */
    CGS_MoveVector(); /* call */
    CGS_ReqUnknownID(); /* call */
    CGS_PCData(); /* call */
    CGS_TimeSync(); /* call */
    CGS_TargetData(); /* call */
    CGS_Attributes(); /* call */
    CGS_Skills(); /* call */
    CGS_Stances(); /* call */
    CGS_Powers(); /* call */
    CGS_ShowChainPowers(); /* call */
    CGS_Chat(); /* call */
    CGS_QuestJournal(); /* call */
    CGS_QuestStoryInfo(); /* call */
    CGS_QuestStory(); /* call */
    CGS_Echo(); /* call */
    CGS_Party(); /* call */
    CGS_PartyUpdate(); /* call */
    CGS_Brothers(); /* call */
    CGS_Emote(); /* call */
    CGS_NameRequest(); /* call */
    CGS_GMMemberList(); /* call */
    CGS_GuildMemberList(); /* call */
    CGS_HallMemberList(); /* call */
    CGS_HallTopPK(); /* call */
    CGS_WhoIs(); /* call */
    CGS_ClanHallList(); /* call */
    CGS_ClanAllyList(); /* call */
    CGS_ClanInfo(); /* call */
    CGS_GuildInfo(); /* call */
    CGS_ClanOfficerList(); /* call */
    CGS_GuildOfficerList(); /* call */
    CGS_GuildName(); /* call */
    CGS_WarEvents(); /* call */
    CGS_GMCheckWarEvent(); /* call */
    CGS_SpawnGrp(); /* call */
    CGS_ResetSpawnAttrib(); /* call */
    CGS_ResetSpawnGrp(); /* call */
    CGS_SetStance_Secure(); /* call */
    CGS_RemoveObject_Secure(); /* call */
    CGS_MoveAll_Secure(); /* call */
    CGS_MoveAll2_Secure(); /* call */
    CGS_CheckGameEvent_Secure(); /* call */
    CGS_ActivateWeather_Secure(); /* call */
    CGS_Broadcast_Secure(); /* call */
    CGS_DailyCheck_Secure(); /* call */
    CGS_GameEvents_Secure(); /* call */
    CGS_PurgeMemory_Secure(); /* call */
    CGS_ReloadSpawnPt_Secure(); /* call */
    CGS_ReloadNPCAttrib_Secure(); /* call */
    CGS_ReloadEvents_Secure(); /* call */
    CGS_ActivateQuestPt_Secure(); /* call */
    CGS_IgnoreModify(); /* call */
    CGS_IgnoreList(); /* call */
    CGS_FriendModify(); /* call */
    CGS_Stuck(); /* call */
    CGS_FriendsList(); /* call */
    CGS_GMWho(); /* call */
    CGS_Who(); /* call */
    CGS_PartyFind(); /* call */
    CGS_CharSys_Debug(); /* call */
    CGS_GetAuctionList(); /* call */
    CGS_CloseConnection(); /* call */
    CGS_DropConnection(); /* call */
    CGS_UpdateChar(); /* call */
    CGS_GMHelp(); /* call */
    CGS_DeleteSpawnNPCGrp(); /* call */
    CGS_ResetSpawnGrpAttrib(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CGS::GetAuctionList
 * Address: 0x08075730
 * Stack: 364 bytes
 * Instructions: 312
 */
void CGS_GetAuctionList(CGS* self) {
    uint32_t local_vars[91]; /* 364 bytes */

    memset(); /* call */
    CMemAccess_Lock(); /* call */
    wstrncpy(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CGS::ClientTimeOut
 * Address: 0x08075bfc
 * Stack: 8 bytes
 * Instructions: 476
 */
void CGS_ClientTimeOut(void) {
    uint32_t local_vars[2]; /* 8 bytes */

    CEventMgr_RemoveEvent(); /* call */
    UpdateCharacter(); /* call */
    CMemAccess_Lock(); /* call */
    CLogFilter_Log(); /* call */
    CSceneMgr_FindObject(); /* call */
    CSceneMgr_RemoveRelic(); /* call */
    CGS_ExecuteScript(); /* call */
    CGS_RemoveObject_Internal(); /* call */
    CLogFilter_Log(); /* call */
    CMemAccess_Unlock(); /* call */
    CMemAccess_DeleteElements(); /* call */
    CMemAccess_Lock(); /* call */
    finite(); /* call */
    CSceneMgr_DeleteObject(); /* call */
    CMemAccess_Delete(); /* call */

    /* Control flow: 22 branches */
}

/*
 * Function: CGS::ZoneIn
 * Address: 0x08076218
 * Stack: 228 bytes
 * Instructions: 362
 */
void CGS_ZoneIn(void) {
    uint32_t local_vars[57]; /* 228 bytes */

    CMemAccess_Purge(); /* call */
    CMemAccess_Lock(); /* call */
    CSceneMgr_AddObject(); /* call */
    CLogFilter_Log(); /* call */
    CMemAccess_Lock(); /* call */
    memset(); /* call */
    CMemAccess_Unlock(); /* call */
    CEventMgr_AddEvent(); /* call */
    GetTickCount(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CGS::ZoneOut
 * Address: 0x08076770
 * Stack: 8 bytes
 * Instructions: 470
 */
void CGS_ZoneOut(CGS* self) {
    uint32_t local_vars[2]; /* 8 bytes */

    CMemAccess_Lock(); /* call */
    CLogFilter_Log(); /* call */
    CGS_ExecuteScript(); /* call */
    CSceneMgr_RemoveRelic(); /* call */
    CMemAccess_Lock(); /* call */
    CScene_GetSceneID(); /* call */
    CMemAccess_Unlock(); /* call */
    CGS_RemoveObject_Internal(); /* call */
    UpdateCharacter(); /* call */
    CSceneMgr_CheckSceneLocal(); /* call */
    CEventMgr_RemoveEvent(); /* call */
    CSceneMgr_DeleteObject(); /* call */
    CMemAccess_Delete(); /* call */
    CSession_SendSysMsg(); /* call */
    CSession_ZoneConnection(); /* call */
    CMemAccess_Flush(); /* call */
    time(); /* call */
    localtime(); /* call */
    CEventMgr_Deactivate(); /* call */
    CGS_ZoneIn(); /* call */
    CSession_ResetSendTime(); /* call */
    CSession_PutEvent(); /* call */
    CCommsMgr_SendSysMsg(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CGS::MoveVector
 * Address: 0x08076d60
 * Stack: 4 bytes
 * Instructions: 636
 */
void CGS_MoveVector(CGS* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    CVector_CVector(); /* call */
    finite(); /* call */
    CMemAccess_Lock(); /* call */
    CVector_CVector(); /* call */
    __mi(); /* call */
    __opf__C7CVector(); /* call */
    GetTickCount(); /* call */
    CSession_PutEvent(); /* call */
    CMemAccess_Unlock(); /* call */
    CSceneMgr_Lock(); /* call */
    CSceneMgr_MoveObject(); /* call */
    CSceneMgr_Unlock(); /* call */
    CTaskMgr_ExecuteTask(); /* call */
    CScene_GetSceneID(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CCommsMgr_SendSysMsg(); /* call */

    /* Control flow: 32 branches */
}

/*
 * Function: CGS::ReqUnknownID
 * Address: 0x0807762c
 * Stack: 396 bytes
 * Instructions: 1117
 */
void CGS_ReqUnknownID(CGS* self) {
    uint32_t local_vars[99]; /* 396 bytes */

    CMemAccess_Lock(); /* call */
    wstrncpy(); /* call */
    CSession_PutEvent(); /* call */
    IDXTRANS(); /* call */
    CNPCAttAccess_GetByAttID(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObject(); /* call */
    memset(); /* call */
    CSceneMgr_Unlock(); /* call */
    CScene_GetSceneID(); /* call */

    /* Control flow: 73 branches */
}

/*
 * Function: CGS::TimeSync
 * Address: 0x0807870c
 * Stack: 48 bytes
 * Instructions: 75
 */
void CGS_TimeSync(CGS* self) {
    uint32_t local_vars[12]; /* 48 bytes */

    time(); /* call */
    localtime(); /* call */
    GetTickCount(); /* call */
    CCommsMgr_PutEvent(); /* call */
}

/*
 * Function: CGS::PCData
 * Address: 0x080787d8
 * Stack: 416 bytes
 * Instructions: 525
 */
void CGS_PCData(CGS* self) {
    uint32_t local_vars[104]; /* 416 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */
    UpdateCharacter(); /* call */
    CGS_ExecuteScript(); /* call */
    memset(); /* call */
    CGS_CheckOptions_Internal(); /* call */
    gametime(); /* call */
    CCommsMgr_SendWorld(); /* call */
    CSession_PutEventFlush(); /* call */
    CEventMgr_Activate(); /* call */
    CSession_ResetTimeOut(); /* call */

    /* Control flow: 20 branches */
}

/*
 * Function: CGS::Attributes
 * Address: 0x08079000
 * Stack: 196 bytes
 * Instructions: 256
 */
void CGS_Attributes(void) {
    uint32_t local_vars[49]; /* 196 bytes */

    CMemAccess_Lock(); /* call */
    memset(); /* call */
    memcpy(); /* call */
    CGS_ExecuteScript(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CGS::TargetData
 * Address: 0x08079380
 * Stack: 108 bytes
 * Instructions: 354
 */
void CGS_TargetData(CGS* self) {
    uint32_t local_vars[27]; /* 108 bytes */

    CMemAccess_Lock(); /* call */
    CalculateMaximumHitPoints(); /* call */
    IDXTRANS(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 21 branches */
}

/*
 * Function: CGS::Powers
 * Address: 0x0807981c
 * Stack: 140 bytes
 * Instructions: 174
 */
void CGS_Powers(CGS* self) {
    uint32_t local_vars[35]; /* 140 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */
    CGS_SendMsg_Internal(); /* call */
    memset(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CGS::ShowChainPowers
 * Address: 0x08079a44
 * Stack: 160 bytes
 * Instructions: 107
 */
void CGS_ShowChainPowers(CGS* self) {
    uint32_t local_vars[40]; /* 160 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CGS::Skills
 * Address: 0x08079bc0
 * Stack: 140 bytes
 * Instructions: 179
 */
void CGS_Skills(CGS* self) {
    uint32_t local_vars[35]; /* 140 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */
    CGS_SendMsg_Internal(); /* call */
    memset(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CGS::Stances
 * Address: 0x08079e00
 * Stack: 140 bytes
 * Instructions: 179
 */
void CGS_Stances(CGS* self) {
    uint32_t local_vars[35]; /* 140 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */
    CGS_SendMsg_Internal(); /* call */
    memset(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CGS::Party
 * Address: 0x0807a040
 * Stack: 176 bytes
 * Instructions: 239
 */
void CGS_Party(CGS* self) {
    uint32_t local_vars[44]; /* 176 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */
    CGS_SendMsg_Internal(); /* call */
    CSession_PutEvent(); /* call */
    CLogFilter_Log(); /* call */
    CLogFilter_Log(); /* call */
    memset(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CGS::PartyUpdate
 * Address: 0x0807a374
 * Stack: 268 bytes
 * Instructions: 315
 */
void CGS_PartyUpdate(CGS* self) {
    uint32_t local_vars[67]; /* 268 bytes */

    CMemAccess_Lock(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_FindObject(); /* call */
    CSceneMgr_Unlock(); /* call */
    CalculateMaximumHitPoints(); /* call */
    CalculateMaximumChiPoints(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 13 branches */
}

/*
 * Function: CGS::QuestJournal
 * Address: 0x0807a8cc
 * Stack: 20 bytes
 * Instructions: 20
 */
void CGS_QuestJournal(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    SendQuestJournal(); /* call */
}

/*
 * Function: CGS::QuestStory
 * Address: 0x0807a8fc
 * Stack: 192 bytes
 * Instructions: 155
 */
void CGS_QuestStory(CGS* self) {
    uint32_t local_vars[48]; /* 192 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 15 branches */
}

/*
 * Function: CGS::QuestStoryInfo
 * Address: 0x0807ab64
 * Stack: 68 bytes
 * Instructions: 112
 */
void CGS_QuestStoryInfo(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CGS::Chat
 * Address: 0x0807acd8
 * Stack: 4 bytes
 * Instructions: 2279
 */
void CGS_Chat(CGS* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    __t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlei(); /* call */
    memset(); /* call */
    CMemAccess_Lock(); /* call */
    _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    CLogFilter_Log(); /* call */
    CSession_PutEvent(); /* call */
    CSceneMgr_GetNextScene(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_GetPCObject(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSceneMgr_Unlock(); /* call */
    time(); /* call */
    CMemAccess_Unlock(); /* call */
    CGS_SendMsg_Internal(); /* call */
    SetDestroy__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleQ213GEN_CLINKLIST12eDestroyType(); /* call */
    __throw(); /* call */
    terminate(); /* call */

    /* Control flow: 159 branches */
}

/*
 * Function: CGS::Echo
 * Address: 0x0807cc4c
 * Stack: 532 bytes
 * Instructions: 45
 */
void CGS_Echo(void) {
    uint32_t local_vars[133]; /* 532 bytes */

    memcpy(); /* call */
    CLogFilter_Log(); /* call */
    CCommsMgr_PutEvent(); /* call */
}

/*
 * Function: CGS::Brothers
 * Address: 0x0807cce0
 * Stack: 220 bytes
 * Instructions: 289
 */
void CGS_Brothers(CGS* self) {
    uint32_t local_vars[55]; /* 220 bytes */

    CMemAccess_Lock(); /* call */
    memset(); /* call */
    CCommsMgr_CheckCharInGame(); /* call */
    CMemAccess_Delete(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 14 branches */
}

/*
 * Function: CGS::CheckGameEvent_Secure
 * Address: 0x0807d11c
 * Stack: 2124 bytes
 * Instructions: 346
 */
void CGS_CheckGameEvent_Secure(CGS* self) {
    uint32_t local_vars[531]; /* 2124 bytes */

    CMemAccess_Lock(); /* call */
    CLogFilter_Log(); /* call */
    strcpy(); /* call */
    strcat(); /* call */
    CGS_ExecuteDBScript_Internal(); /* call */
    CGS_ExecuteScript(); /* call */
    CCommsMgr_SendWorld(); /* call */
    CMemAccess_Purge(); /* call */
    CMemAccess_Unlock(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CGS::ReloadSpawnPt_Secure
 * Address: 0x0807d674
 * Stack: 20 bytes
 * Instructions: 21
 */
void CGS_ReloadSpawnPt_Secure(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CAI_ReloadSpawnPt(); /* call */
}

/*
 * Function: CGS::ActivateQuestPt_Secure
 * Address: 0x0807d6a8
 * Stack: 36 bytes
 * Instructions: 50
 */
void CGS_ActivateQuestPt_Secure(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CAI_ActivateSpawnPt(); /* call */
}

/*
 * Function: CGS::ReloadNPCAttrib_Secure
 * Address: 0x0807d728
 * Stack: 20 bytes
 * Instructions: 21
 */
void CGS_ReloadNPCAttrib_Secure(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CAI_ReloadNPCAttrib(); /* call */
}

/*
 * Function: CGS::ReloadEvents_Secure
 * Address: 0x0807d75c
 * Stack: 20 bytes
 * Instructions: 19
 */
void CGS_ReloadEvents_Secure(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CEventMgr_RefreshEvent(); /* call */
}

/*
 * Function: CGS::ExecuteDBScript_Internal
 * Address: 0x0807d788
 * Stack: 1148 bytes
 * Instructions: 217
 */
void CGS_ExecuteDBScript_Internal(void) {
    uint32_t local_vars[287]; /* 1148 bytes */

    __builtin_new(); /* call */
    CDBAccess_CDBAccess(); /* call */
    __throw(); /* call */
    __builtin_delete(); /* call */
    CDBAccess_Init(); /* call */
    CDBAccess_dtor_CDBAccess(); /* call */
    fopen(); /* call */
    fgets(); /* call */
    CDBAccess_SQLQuery(); /* call */
    fclose(); /* call */
    terminate(); /* call */

    /* Control flow: 18 branches */
}

/*
 * Function: CGS::GameEvents_Secure
 * Address: 0x0807da6c
 * Stack: 20 bytes
 * Instructions: 55
 */
void CGS_GameEvents_Secure(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CEventMgr_Activate(); /* call */
    CEventMgr_Deactivate(); /* call */
    CEventMgr_RemoveEvent(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::ActivateWeather_Secure
 * Address: 0x0807db0c
 * Stack: 84 bytes
 * Instructions: 276
 */
void CGS_ActivateWeather_Secure(void) {
    uint32_t local_vars[21]; /* 84 bytes */

    CSceneMgr_GetNextScene(); /* call */
    CMemAccess_Lock(); /* call */
    rand(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_GetPCObject(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSession_PutEvent(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSceneMgr_Unlock(); /* call */

    /* Control flow: 19 branches */
}

/*
 * Function: CGS::Emote
 * Address: 0x0807deb0
 * Stack: 4 bytes
 * Instructions: 149
 */
void CGS_Emote(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */
    CGS_SendMsg_Internal(); /* call */
    CSceneMgr_Lock(); /* call */
    CSession_PutEvent(); /* call */
    CSceneMgr_Unlock(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CGS::ClanHallList
 * Address: 0x0807e08c
 * Stack: 396 bytes
 * Instructions: 403
 */
void CGS_ClanHallList(CGS* self) {
    uint32_t local_vars[99]; /* 396 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 31 branches */
}

/*
 * Function: CGS::ClanAllyList
 * Address: 0x0807e724
 * Stack: 396 bytes
 * Instructions: 372
 */
void CGS_ClanAllyList(CGS* self) {
    uint32_t local_vars[99]; /* 396 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 27 branches */
}

/*
 * Function: CGS::WhoIs
 * Address: 0x0807ed34
 * Stack: 84 bytes
 * Instructions: 168
 */
void CGS_WhoIs(void) {
    uint32_t local_vars[21]; /* 84 bytes */

    CMemAccess_Lock(); /* call */
    CGS_SendMsg_Internal(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CGS::GMCheckWarEvent
 * Address: 0x0807ef48
 * Stack: 272 bytes
 * Instructions: 385
 */
void CGS_GMCheckWarEvent(CGS* self) {
    uint32_t local_vars[68]; /* 272 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 22 branches */
}

/*
 * Function: CGS::WarEvents
 * Address: 0x0807f59c
 * Stack: 624 bytes
 * Instructions: 558
 */
void CGS_WarEvents(CGS* self) {
    uint32_t local_vars[156]; /* 624 bytes */

    CMemAccess_Lock(); /* call */
    CheckUsed_F(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 33 branches */
}

/*
 * Function: CGS::GuildInfo
 * Address: 0x0807fe5c
 * Stack: 68 bytes
 * Instructions: 89
 */
void CGS_GuildInfo(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    CMemAccess_Lock(); /* call */
    memset(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 4 branches */
}

/*
 * Function: CGS::ClanInfo
 * Address: 0x0807ff78
 * Stack: 460 bytes
 * Instructions: 252
 */
void CGS_ClanInfo(CGS* self) {
    uint32_t local_vars[115]; /* 460 bytes */

    time(); /* call */
    CMemAccess_Lock(); /* call */
    memset(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 11 branches */
}

/*
 * Function: CGS::GuildOfficerList
 * Address: 0x08080354
 * Stack: 380 bytes
 * Instructions: 371
 */
void CGS_GuildOfficerList(CGS* self) {
    uint32_t local_vars[95]; /* 380 bytes */

    CMemAccess_Lock(); /* call */
    CGS_ExecuteScript(); /* call */
    CSession_PutEvent(); /* call */
    memset(); /* call */

    /* Control flow: 24 branches */
}

/*
 * Function: CGS::ClanOfficerList
 * Address: 0x0808093c
 * Stack: 412 bytes
 * Instructions: 570
 */
void CGS_ClanOfficerList(CGS* self) {
    uint32_t local_vars[103]; /* 412 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */
    memset(); /* call */

    /* Control flow: 38 branches */
}

/*
 * Function: CGS::HallTopPK
 * Address: 0x08081254
 * Stack: 160 bytes
 * Instructions: 204
 */
void CGS_HallTopPK(CGS* self) {
    uint32_t local_vars[40]; /* 160 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 15 branches */
}

/*
 * Function: CGS::GuildMemberList
 * Address: 0x08081524
 * Stack: 268 bytes
 * Instructions: 402
 */
void CGS_GuildMemberList(CGS* self) {
    uint32_t local_vars[67]; /* 268 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */
    memset(); /* call */

    /* Control flow: 30 branches */
}

/*
 * Function: CGS::HallMemberList
 * Address: 0x08081afc
 * Stack: 268 bytes
 * Instructions: 393
 */
void CGS_HallMemberList(CGS* self) {
    uint32_t local_vars[67]; /* 268 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */
    memset(); /* call */

    /* Control flow: 28 branches */
}

/*
 * Function: CGS::GuildName
 * Address: 0x0808209c
 * Stack: 100 bytes
 * Instructions: 59
 */
void CGS_GuildName(void) {
    uint32_t local_vars[25]; /* 100 bytes */

    CMemAccess_Lock(); /* call */
    wstrncpy(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::GMMemberList
 * Address: 0x08082148
 * Stack: 1068 bytes
 * Instructions: 381
 */
void CGS_GMMemberList(CGS* self) {
    uint32_t local_vars[267]; /* 1068 bytes */

    CMemAccess_Lock(); /* call */
    memset(); /* call */
    wstrncpy(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 21 branches */
}

/*
 * Function: CGS::FriendsList
 * Address: 0x0808270c
 * Stack: 144 bytes
 * Instructions: 151
 */
void CGS_FriendsList(CGS* self) {
    uint32_t local_vars[36]; /* 144 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CGS::FriendModify
 * Address: 0x080828ec
 * Stack: 36 bytes
 * Instructions: 23
 */
void CGS_FriendModify(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CMemAccess_Delete(); /* call */
}

/*
 * Function: CGS::IgnoreModify
 * Address: 0x08082928
 * Stack: 48 bytes
 * Instructions: 212
 */
void CGS_IgnoreModify(CGS* self) {
    uint32_t local_vars[12]; /* 48 bytes */

    CMemAccess_Lock(); /* call */
    CGS_SendMsg_Internal(); /* call */
    CMemAccess_Unlock(); /* call */

    /* Control flow: 9 branches */
}

/*
 * Function: CGS::IgnoreList
 * Address: 0x08082bc8
 * Stack: 528 bytes
 * Instructions: 181
 */
void CGS_IgnoreList(CGS* self) {
    uint32_t local_vars[132]; /* 528 bytes */

    CMemAccess_Lock(); /* call */
    memset(); /* call */
    wstrncpy(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 13 branches */
}

/*
 * Function: CGS::Stuck
 * Address: 0x08082e60
 * Stack: 368 bytes
 * Instructions: 258
 */
void CGS_Stuck(CGS* self) {
    uint32_t local_vars[92]; /* 368 bytes */

    CVector_CVector(); /* call */
    CMemAccess_Lock(); /* call */
    CSceneMgr_Lock(); /* call */
    CSceneMgr_Unlock(); /* call */
    CScene_GetSceneID(); /* call */
    GetTranslation__C7CMatrixR7CVector(); /* call */
    CMemAccess_Unlock(); /* call */
    CCommsMgr_SendSysMsg(); /* call */

    /* Control flow: 10 branches */
}

/*
 * Function: CGS::PartyFind
 * Address: 0x0808319c
 * Stack: 496 bytes
 * Instructions: 278
 */
void CGS_PartyFind(CGS* self) {
    uint32_t local_vars[124]; /* 496 bytes */

    CMemAccess_Lock(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_GetPCObject(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSceneMgr_Unlock(); /* call */
    wstrncpy(); /* call */
    CSession_PutEvent(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */

    /* Control flow: 16 branches */
}

/*
 * Function: CGS::GMWho
 * Address: 0x080835bc
 * Stack: 528 bytes
 * Instructions: 149
 */
void CGS_GMWho(CGS* self) {
    uint32_t local_vars[132]; /* 528 bytes */

    memset(); /* call */
    CMemAccess_Lock(); /* call */
    wstrncpy(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CGS::Who
 * Address: 0x080837ec
 * Stack: 160 bytes
 * Instructions: 217
 */
void CGS_Who(CGS* self) {
    uint32_t local_vars[40]; /* 160 bytes */

    CMemAccess_Lock(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_GetPCObject(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSceneMgr_Unlock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 12 branches */
}

/*
 * Function: CGS::CharSys_Debug
 * Address: 0x08083abc
 * Stack: 20 bytes
 * Instructions: 46
 */
void CGS_CharSys_Debug(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLogFilter_Log(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CGS::SetChatFilter
 * Address: 0x08083b50
 * Stack: 36 bytes
 * Instructions: 39
 */
void CGS_SetChatFilter(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::SetOption
 * Address: 0x08083bc0
 * Stack: 68 bytes
 * Instructions: 56
 */
void CGS_SetOption(void) {
    uint32_t local_vars[17]; /* 68 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */
    CGS_CheckOptions_Internal(); /* call */

    /* Control flow: 2 branches */
}

/*
 * Function: CGS::SetFriendly
 * Address: 0x08083c68
 * Stack: 36 bytes
 * Instructions: 39
 */
void CGS_SetFriendly(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::DropConnection
 * Address: 0x08083cd8
 * Stack: 20 bytes
 * Instructions: 32
 */
void CGS_DropConnection(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLogFilter_Log(); /* call */
    CCommsMgr_DropConnection(); /* call */
}

/*
 * Function: CGS::CloseConnection
 * Address: 0x08083d28
 * Stack: 20 bytes
 * Instructions: 32
 */
void CGS_CloseConnection(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CLogFilter_Log(); /* call */
    CCommsMgr_CloseConnection(); /* call */
}

/*
 * Function: CGS::UpdateChar
 * Address: 0x08083d78
 * Stack: 20 bytes
 * Instructions: 33
 */
void CGS_UpdateChar(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_FindObject(); /* call */
    UpdateCharacter(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::NameRequest
 * Address: 0x08083dd0
 * Stack: 100 bytes
 * Instructions: 54
 */
void CGS_NameRequest(void) {
    uint32_t local_vars[25]; /* 100 bytes */

    CMemAccess_Lock(); /* call */
    wstrncpy(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::SpawnGrp
 * Address: 0x08083e68
 * Stack: 64 bytes
 * Instructions: 172
 */
void CGS_SpawnGrp(CGS* self) {
    uint32_t local_vars[16]; /* 64 bytes */

    CSceneMgr_CheckSceneLocal(); /* call */
    CAI_DeleteSpawnedNPCGrp(); /* call */
    CSpawnMgr_GetSpawnPointCount(); /* call */
    CScene_GetSceneID(); /* call */
    CMemAccess_Lock(); /* call */
    CMemAccess_Unlock(); /* call */
    CAI_ResetTickSpawnGrp(); /* call */
    CAI_SetSpawnPtByGroup(); /* call */

    /* Control flow: 7 branches */
}

/*
 * Function: CGS::ResetSpawnGrp
 * Address: 0x080840b8
 * Stack: 20 bytes
 * Instructions: 43
 */
void CGS_ResetSpawnGrp(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_CheckSceneLocal(); /* call */
    AIResetSpawnedGrpAttrib(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::ResetSpawnAttrib
 * Address: 0x08084128
 * Stack: 20 bytes
 * Instructions: 38
 */
void CGS_ResetSpawnAttrib(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_CheckSceneLocal(); /* call */
    AIResetSpawnedAttrib(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::DeleteSpawnNPCGrp
 * Address: 0x08084188
 * Stack: 20 bytes
 * Instructions: 38
 */
void CGS_DeleteSpawnNPCGrp(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_CheckSceneLocal(); /* call */
    CAI_DeleteSpawnedNPCGrp(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::ResetSpawnGrpAttrib
 * Address: 0x080841e8
 * Stack: 20 bytes
 * Instructions: 43
 */
void CGS_ResetSpawnGrpAttrib(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CSceneMgr_CheckSceneLocal(); /* call */
    AIResetSpawnedGrpAttrib(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::GMHelp
 * Address: 0x08084258
 * Stack: 1168 bytes
 * Instructions: 127
 */
void CGS_GMHelp(CGS* self) {
    uint32_t local_vars[292]; /* 1168 bytes */

    CMemAccess_Lock(); /* call */
    CSession_PutEvent(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CGS::RemoveObject_Secure
 * Address: 0x0808440c
 * Stack: 20 bytes
 * Instructions: 18
 */
void CGS_RemoveObject_Secure(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CGS_RemoveObject_Internal(); /* call */
}

/*
 * Function: CGS::PurgeMemory_Secure
 * Address: 0x08084438
 * Stack: 36 bytes
 * Instructions: 45
 */
void CGS_PurgeMemory_Secure(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CLogFilter_Log(); /* call */
    CMemAccess_Purge(); /* call */
    CMemAccess_PurgeCategory(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::MoveAll2_Secure
 * Address: 0x080844b8
 * Stack: 4 bytes
 * Instructions: 761
 */
void CGS_MoveAll2_Secure(CGS* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    GetTickCount(); /* call */
    CSceneMgr_FindObject(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_GetUserRelicList(); /* call */
    CScene_GetPCObject(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSession_PutEventImm(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CLogFilter_Log(); /* call */
    IDXTRANS(); /* call */
    Fastftol(); /* call */
    CSession_FlushImm(); /* call */
    CSession_FlushImm(); /* call */
    CSceneMgr_Unlock(); /* call */

    /* Control flow: 30 branches */
}

/*
 * Function: CGS::MoveAll_Secure
 * Address: 0x08084ffc
 * Stack: 4 bytes
 * Instructions: 756
 */
void CGS_MoveAll_Secure(CGS* self) {
    uint32_t local_vars[1]; /* 4 bytes */

    GetTickCount(); /* call */
    CSceneMgr_GetNextScene(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_GetUserRelicList(); /* call */
    CScene_GetPCObject(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSession_PutEventImm(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CLogFilter_Log(); /* call */
    IDXTRANS(); /* call */
    Fastftol(); /* call */
    CSession_FlushImm(); /* call */
    CSession_FlushImm(); /* call */
    CSceneMgr_Unlock(); /* call */

    /* Control flow: 30 branches */
}

/*
 * Function: CGS::Broadcast_Secure
 * Address: 0x08085b34
 * Stack: 164 bytes
 * Instructions: 312
 */
void CGS_Broadcast_Secure(void) {
    uint32_t local_vars[41]; /* 164 bytes */

    CMemAccess_Lock(); /* call */
    wstrncpy(); /* call */
    CSceneMgr_GetNextScene(); /* call */
    CSceneMgr_Lock(); /* call */
    CScene_GetPCObject(); /* call */
    GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSession_PutEvent(); /* call */
    GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode(); /* call */
    CSceneMgr_Unlock(); /* call */

    /* Control flow: 19 branches */
}

/*
 * Function: CGS::SetStance_Secure
 * Address: 0x08085f40
 * Stack: 4 bytes
 * Instructions: 93
 */
void CGS_SetStance_Secure(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CSceneMgr_Lock(); /* call */
    CCommsMgr_PutEvent(); /* call */
    CSceneMgr_Unlock(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::CheckUniqueItem_Secure
 * Address: 0x08086060
 * Stack: 4048 bytes
 * Instructions: 139
 */
void CGS_CheckUniqueItem_Secure(CGS* self) {
    uint32_t local_vars[1012]; /* 4048 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    time(); /* call */
    difftime(); /* call */

    /* Control flow: 8 branches */
}

/*
 * Function: CGS::DailyCheck_Secure
 * Address: 0x0808624c
 * Stack: 20 bytes
 * Instructions: 25
 */
void CGS_DailyCheck_Secure(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CGS_GarbageCollect_Secure(); /* call */
    CGS_ExecuteScript(); /* call */
    CGS_CheckWarScore_Secure(); /* call */
}

/*
 * Function: CGS::GarbageCollect_Secure
 * Address: 0x08086288
 * Stack: 20 bytes
 * Instructions: 48
 */
void CGS_GarbageCollect_Secure(void) {
    uint32_t local_vars[5]; /* 20 bytes */

    CDBAccess_SQLQuery(); /* call */

    /* Control flow: 1 branches */
}

/*
 * Function: CGS::CheckWarScore_Secure
 * Address: 0x08086318
 * Stack: 420 bytes
 * Instructions: 80
 */
void CGS_CheckWarScore_Secure(void) {
    uint32_t local_vars[105]; /* 420 bytes */

    CDBAccess_SQLQuery(); /* call */
    CDBAccess_FetchNextRow(); /* call */
    CGS_ExecuteScript(); /* call */

    /* Control flow: 3 branches */
}

/*
 * Function: CGS::RemoveObject_Internal
 * Address: 0x08086440
 * Stack: 4 bytes
 * Instructions: 147
 */
void CGS_RemoveObject_Internal(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    CMemAccess_Lock(); /* call */
    IDXTRANS(); /* call */
    GetTickCount(); /* call */
    CSceneMgr_Lock(); /* call */
    CCommsMgr_PutEvent(); /* call */
    CSceneMgr_Unlock(); /* call */

    /* Control flow: 5 branches */
}

/*
 * Function: CGS::SendMsg_Internal
 * Address: 0x08086620
 * Stack: 36 bytes
 * Instructions: 31
 */
void CGS_SendMsg_Internal(void) {
    uint32_t local_vars[9]; /* 36 bytes */

    CCommsMgr_PutEvent(); /* call */
}

/*
 * Function: CGS::SendMsg_Secure
 * Address: 0x08086678
 * Stack: 4 bytes
 * Instructions: 394
 */
void CGS_SendMsg_Secure(void) {
    uint32_t local_vars[1]; /* 4 bytes */

    IDXTRANS(); /* call */
    CMemAccess_Lock(); /* call */
    CSceneMgr_Lock(); /* call */
    CCommsMgr_PutEvent(); /* call */
    CSceneMgr_Unlock(); /* call */

    /* Control flow: 23 branches */
}

/*
 * Function: CGS::CheckOptions_Internal
 * Address: 0x08086bfc
 * Stack: 48 bytes
 * Instructions: 124
 */
void CGS_CheckOptions_Internal(CGS* self) {
    uint32_t local_vars[12]; /* 48 bytes */

    CMemAccess_Lock(); /* call */

    /* Control flow: 7 branches */
}

