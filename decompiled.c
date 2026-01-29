/* ============================================================================
 * FWOnline Zoneserver - Decompiled Source
 * Generated from ELF binary analysis
 * Total Functions: 2925
 * ============================================================================ */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

/* Forward declarations */
void asinf@plt(void);
void pthread_attr_init@plt(void);
void atol@plt(void);
void cos@plt(void);
void pthread_attr_setdetachstate@plt(void);
void mysql_real_escape_string@plt(void);
void mysql_store_result@plt(void);
void (void);
void rename@plt(void);
void mysql_fetch_row@plt(void);
void ferror@plt(void);
void sigaction@plt(void);
void strncat@plt(void);
void strchr@plt(void);
void feof@plt(void);
void mysql_affected_rows@plt(void);
void ungetc@plt(void);
void getpid@plt(void);
void nanosleep@plt(void);
void mysql_insert_id@plt(void);
void PEM_read_bio_RSAPrivateKey@plt(void);
void mysql_init@plt(void);
void write@plt(void);
void localtime@plt(void);
void (void);
void recvfrom@plt(void);
void strcmp@plt(void);
void log10@plt(void);
void close@plt(void);
void asin@plt(void);
void perror@plt(void);
void fprintf@plt(void);
void tmpfile@plt(void);
void fork@plt(void);
void getenv@plt(void);
void umask@plt(void);
void signal@plt(void);
void fmod@plt(void);
void fflush@plt(void);
void pclose@plt(void);
void pthread_create@plt(void);
void unlink@plt(void);
void OpenSSL_add_all_algorithms@plt(void);
void clock@plt(void);
void frexp@plt(void);
void select@plt(void);
void htonl@plt(void);
void (void);
void BIO_s_file@plt(void);
void vsnprintf@plt(void);
void strerror@plt(void);
void setlocale@plt(void);
void (void);
void (void);
void pow@plt(void);
void rewind@plt(void);
void memchr@plt(void);
void ftell@plt(void);
void (void);
void BIO_printf@plt(void);
void system@plt(void);
void (void);
void shutdown@plt(void);
void popen@plt(void);
void (void);
void mkfifo@plt(void);
void div@plt(void);
void difftime@plt(void);
void ftime@plt(void);
void malloc@plt(void);
void BUF_MEM_new@plt(void);
void setsid@plt(void);
void pthread_mutex_init@plt(void);
void fscanf@plt(void);
void strftime@plt(void);
void BIO_free@plt(void);
void fread@plt(void);
void memmove@plt(void);
void sendto@plt(void);
void ERR_load_PEM_strings@plt(void);
void (void);
void remove@plt(void);
void strpbrk@plt(void);
void BIO_ctrl@plt(void);
void RSA_private_decrypt@plt(void);
void syslog@plt(void);
void (void);
void ERR_print_errors_fp@plt(void);
void terminate(void);
void pthread_rwlock_rdlock@plt(void);
void setsockopt@plt(void);
void inet_aton@plt(void);
void mysql_close@plt(void);
void fseek@plt(void);
void mysql_num_rows@plt(void);
void time@plt(void);
void mktime@plt(void);
void BIO_new@plt(void);
void pthread_mutex_lock@plt(void);
void fgets@plt(void);
void ntohs@plt(void);
void chdir@plt(void);
void fputs@plt(void);
void finite@plt(void);
void mysql_errno@plt(void);
void strstr@plt(void);
void strlen@plt(void);
void longjmp@plt(void);
void sleep@plt(void);
void (void);
void strcspn@plt(void);
void RSA_public_encrypt@plt(void);
void qsort@plt(void);
void pthread_rwlock_init@plt(void);
void atof@plt(void);
void atan2@plt(void);
void ftruncate@plt(void);
void openlog@plt(void);
void inet_addr@plt(void);
void floor@plt(void);
void memcmp@plt(void);
void mysql_real_query@plt(void);
void (void);
void (void);
void floorf@plt(void);
void exp@plt(void);
void mysql_error@plt(void);
void localtime_r@plt(void);
void toupper@plt(void);
void realloc@plt(void);
void strcat@plt(void);
void tan@plt(void);
void pthread_attr_destroy@plt(void);
void (void);
void printf@plt(void);
void bind@plt(void);
void fcntl@plt(void);
void memcpy@plt(void);
void sqrt@plt(void);
void mysql_free_result@plt(void);
void fclose@plt(void);
void getsockname@plt(void);
void gethostbyname_r@plt(void);
void gettimeofday@plt(void);
void srand@plt(void);
void strcoll@plt(void);
void gethostname@plt(void);
void open@plt(void);
void pthread_rwlock_wrlock@plt(void);
void gethostbyname@plt(void);
void strcasecmp@plt(void);
void pthread_exit@plt(void);
void exit@plt(void);
void (void);
void atoi@plt(void);
void gmtime@plt(void);
void free@plt(void);
void send@plt(void);
void ERR_print_errors@plt(void);
void htons@plt(void);
void strtoul@plt(void);
void getcwd@plt(void);
void acos@plt(void);
void memset@plt(void);
void BIO_s_mem@plt(void);
void connect@plt(void);
void mysql_real_connect@plt(void);
void strtod@plt(void);
void strncpy@plt(void);
void (void);
void fopen@plt(void);
void dup@plt(void);
void (void);
void (void);
void pthread_mutex_unlock@plt(void);
void (void);
void (void);
void strtok@plt(void);
void PEM_read_bio_RSA_PUBKEY@plt(void);
void ctime_r@plt(void);
void pthread_rwlock_unlock@plt(void);
void ERR_load_crypto_strings@plt(void);
void getrlimit@plt(void);
void recv@plt(void);
void sprintf@plt(void);
void fwrite@plt(void);
void sin@plt(void);
void socket@plt(void);
void RSA_size@plt(void);
void modf@plt(void);
void rand@plt(void);
void log@plt(void);
void (void);
void read@plt(void);
void mysql_fetch_lengths@plt(void);
void ceil@plt(void);
void strcpy@plt(void);
void call_gmon_start(void);
void (void);
void fini_dummy(void);
void frame_dummy(void);
void init_dummy(void);
void main(void);
void ExitHandler(void);
void LoadConfig(void);
void strcpyup(void);
void daemon_init(void);
void CheckOnlyCopy(void);
void (void);
void Letext(void);
void (void);
void ClearMatrix(void);
void SetIdentity(void);
void (void);
void Restart(void);
void SetInterval(void);
void StartTimer(void);
void StopTimer(void);
void OutputLog(void);
void GetTickCount(void);
void Letext(void);
void ReadFromQueue(void);
void (void);
void SetLog(void);
void Init(void);
void IsValid(void);
void WriteToQueue(void);
void CharLog(void);
void Reconnect(void);
void WriteStruct(void);
void (void);
void Letext(void);
void (void);
void Init2(void);
void Init(void);
void Process(void);
void ProcessWS(void);
void AddSession(void);
void Shutdown(void);
void Authenticate(void);
void FindStart(void);
void SelectSession(void);
void DeleteAuth(void);
void SetStatus(void);
void FindPlayerInWorld(void);
void GetNumPlayersInScene(void);
void LockOutChar(void);
void CheckCharExists(void);
void CheckCharInGame(void);
void PutEvent(void);
void GetNumConnects(void);
void SetChatLog(void);
void SendWorldController(void);
void DropConnection(void);
void CloseConnection(void);
void ActivityLog(void);
void SendSysMsg(void);
void FindCharacter(void);
void Broadcast(void);
void LogAllConnections(void);
void LogLevel(void);
void SendWorld(void);
void DumpMemory(void);
void (void);
void Letext(void);
void (void);
void Startup(void);
void CleanupOldConnections(void);
void Process(void);
void ProcessCmds(void);
void ActivityLog(void);
void Shutdown(void);
void GetServerConfig(void);
void AddProcess(void);
void SetStatus(void);
void BlockForStatus(void);
void GetProcess(void);
void GetProcCount(void);
void ReloadScripts(void);
void ReloadScenes(void);
void (void);
void Letext(void);
void (void);
void SendStub(void);
void RecvStub(void);
void CommsStub(void);
void MemMgrStub(void);
void EventMgrStub(void);
void AIStub(void);
void Startup(void);
void GetStatus(void);
void Remove(void);
void Restart(void);
void Shutdown(void);
void Process(void);
void (void);
void Letext(void);
void (void);
void InitBuffer(void);
void FlushQueues(void);
void RenewRecv(void);
void (void);
void Startup(void);
void DumpMemory(void);
void SendProcess(void);
void RecvProcess(void);
void Shutdown(void);
void AddConnection(void);
void DropConnection(void);
void CloseConnection(void);
void ZoneConnection(void);
void ResetSendTime(void);
void ResetTimeOut(void);
void PutEvent(void);
void PutEventFlush(void);
void PutEventImm(void);
void FlushImm(void);
void FlushImm(void);
void SendPacket2(void);
void SendPacket(void);
void SendSysMsg(void);
void FindCharacter(void);
void ExecuteInternal(void);
void SendWorldController(void);
void LogConnections(void);
void LogLevel(void);
void Debug(void);
void SetChatLog(void);
void LogConnection(void);
void (void);
void Letext(void);
void FreeNodes(void);
void RemoveAll(void);
void (void);
void Hash(void);
void Remove(void);
void Find(void);
void Insert(void);
void FreeGameSession(void);
void (void);
void Letext(void);
void (void);
void Startup(void);
void Lock(void);
void LockR(void);
void Unlock(void);
void Process(void);
void Delete(void);
void Delete(void);
void Flush(void);
void FlushDelete(void);
void PagePurge(void);
void ReloadCategory(void);
void MemoryStatus(void);
void AccessMem(void);
void (void);
void Purge(void);
void Stats(void);
void (void);
void Letext(void);
void Hash(void);
void Find(void);
void Insert(void);
void Remove(void);
void (void);
void FreeNodes(void);
void RemoveAll(void);
void (void);
void GetElementsCount(void);
void (void);
void Letext(void);
void QueryMemObject(void);
void QueryMemObject(void);
void LoadStatic(void);
void Init(void);
void Read(void);
void Flush(void);
void CreateElements(void);
void DeleteElements(void);
void NumFree(void);
void Count(void);
void (void);
void Letext(void);
void (void);
void Lock(void);
void Lock(void);
void Unlock(void);
void Flush(void);
void Delete(void);
void Purge(void);
void PurgeCategory(void);
void NumFree(void);
void Count(void);
void CreateElements(void);
void DeleteElements(void);
void GenerateUniqueID(void);
void Init(void);
void RefreshCacheObject(void);
void Add(void);
void AddCacheObject(void);
void FlushCache(void);
void DeleteCacheObject(void);
void (void);
void Letext(void);
void FreeNodes(void);
void RemoveAll(void);
void Hash(void);
void Find(void);
void (void);
void Insert(void);
void Remove(void);
void (void);
void (void);
void Init(void);
void Process(void);
void MemoryStatus(void);
void GetTick(void);
void (void);
void Letext(void);
void Hash(void);
void Find(void);
void (void);
void AssignTask(void);
void ExecuteTask(void);
void Init(void);
void Init(void);
void Init(void);
void ReloadLUA(void);
void LoadHeaders(void);
void BindFunctions(void);
void LoadScript(void);
void LoadScripts(void);
void FindAliasToScript(void);
void ReloadScripts(void);
void ActivityLog(void);
void DumpMemory(void);
void ShowEvent(void);
void SetChatLog(void);
void Debug(void);
void (void);
void Letext(void);
void FreeNodes(void);
void RemoveAll(void);
void (void);
void Insert(void);
void (void);
void AddEvent(void);
void CreateEvent(void);
void DeleteEvent(void);
void RemoveEvent(void);
void RefreshEvent(void);
void CheckEvent(void);
void Startup(void);
void Init(void);
void Activate(void);
void Deactivate(void);
void Process(void);
void UpdateLastTime(void);
void CompareInterval(void);
void ClearEvents(void);
void ReloadEvents(void);
void ReloadEvent(void);
void Debug(void);
void (void);
void Letext(void);
void (void);
void ExecuteScript(void);
void ExecuteScript(void);
void Init(void);
void Process(void);
void GetAuctionList(void);
void ClientTimeOut(void);
void ZoneIn(void);
void ZoneOut(void);
void MoveVector(void);
void ReqUnknownID(void);
void TimeSync(void);
void PCData(void);
void Attributes(void);
void TargetData(void);
void Powers(void);
void ShowChainPowers(void);
void Skills(void);
void Stances(void);
void Party(void);
void PartyUpdate(void);
void QuestJournal(void);
void QuestStory(void);
void QuestStoryInfo(void);
void Chat(void);
void Echo(void);
void Brothers(void);
void CheckGameEvent_Secure(void);
void ReloadSpawnPt_Secure(void);
void ActivateQuestPt_Secure(void);
void ReloadNPCAttrib_Secure(void);
void ReloadEvents_Secure(void);
void ExecuteDBScript_Internal(void);
void GameEvents_Secure(void);
void ActivateWeather_Secure(void);
void Emote(void);
void ClanHallList(void);
void ClanAllyList(void);
void WhoIs(void);
void GMCheckWarEvent(void);
void WarEvents(void);
void GuildInfo(void);
void ClanInfo(void);
void GuildOfficerList(void);
void ClanOfficerList(void);
void HallTopPK(void);
void GuildMemberList(void);
void HallMemberList(void);
void GuildName(void);
void GMMemberList(void);
void FriendsList(void);
void FriendModify(void);
void IgnoreModify(void);
void IgnoreList(void);
void Stuck(void);
void PartyFind(void);
void GMWho(void);
void Who(void);
void CharSys_Debug(void);
void SetChatFilter(void);
void SetOption(void);
void SetFriendly(void);
void DropConnection(void);
void CloseConnection(void);
void UpdateChar(void);
void NameRequest(void);
void SpawnGrp(void);
void ResetSpawnGrp(void);
void ResetSpawnAttrib(void);
void DeleteSpawnNPCGrp(void);
void ResetSpawnGrpAttrib(void);
void GMHelp(void);
void RemoveObject_Secure(void);
void PurgeMemory_Secure(void);
void MoveAll2_Secure(void);
void MoveAll_Secure(void);
void Broadcast_Secure(void);
void SetStance_Secure(void);
void CheckUniqueItem_Secure(void);
void DailyCheck_Secure(void);
void GarbageCollect_Secure(void);
void CheckWarScore_Secure(void);
void RemoveObject_Internal(void);
void SendMsg_Internal(void);
void SendMsg_Secure(void);
void CheckOptions_Internal(void);
void (void);
void Letext(void);
void Fastftol(void);
void (void);
void (void);
void (void);
void (void);
void GetTranslation(void);
void (void);
void GetHead(void);
void GetCurrent(void);
void GetNext(void);
void SetDestroy(void);
void GetCount(void);
void Set(void);
void Clear(void);
void (void);
void Init(void);
void ReloadScenes(void);
void GetCharacterList(void);
void Lock(void);
void LockWrite(void);
void Lock(void);
void Unlock(void);
void Unlock(void);
void GetNextScene(void);
void GetObjects(void);
void MoveObject(void);
void AddObject(void);
void DeleteObject(void);
void CheckSceneLocal(void);
void FindScene(void);
void GetScriptID(void);
void GetProcessID(void);
void FindObject(void);
void FindObject(void);
void AddScene(void);
void AddRelic(void);
void RemoveRelic(void);
void GetRelics(void);
void (void);
void Letext(void);
void (void);
void AddTail(void);
void Delete(void);
void (void);
void Find(void);
void Delete(void);
void gametime(void);
void inet_ntoa_safe(void);
void (void);
void Letext(void);
void npcmutexlock(void);
void npcmutexunlock(void);
void targetlmutexlock(void);
void targetlmutexunlock(void);
void spawnmutexlock(void);
void spawnmutexunlock(void);
void putmutexlock(void);
void putmutexunlock(void);
void getmutexlock(void);
void getmutexunlock(void);
void MemoryStatus(void);
void ShowDestroyMsg(void);
void HideDestroyMsg(void);
void MSGShowDestroy(void);
void AISceneLock(void);
void AISceneUnlock(void);
void ShowWayPoint(void);
void HideWayPoint(void);
void ShowMove(void);
void HideMove(void);
void VectorRotY(void);
void IDXTRANS(void);
void (void);
void (void);
void CreateSpawnMem(void);
void GetSpawnPointCount(void);
void (void);
void (void);
void GetWayPointSize(void);
void SetWayPointSize(void);
void (void);
void GetActualIndex(void);
void (void);
void compare(void);
void GetPathWay(void);
void AllocateWayPoint(void);
void (void);
void CreateManager(void);
void GetManagerCount(void);
void GetWayPointMgr(void);
void SetPtList(void);
void (void);
void RedoRotArray(void);
void GetTargetPtr(void);
void ShowAttack(void);
void ShowTick(void);
void HideAttack(void);
void RefreshSlotList(void);
void (void);
void (void);
void ResetAttID(void);
void GetByAttID(void);
void GetByCharID(void);
void GetPowerRank(void);
void (void);
void (void);
void CreateNPC(void);
void GetNPCCount(void);
void GetAttackPerc(void);
void GetPowerID(void);
void GetPowerType(void);
void ProcessNPC(void);
void OnTarget(void);
void SetGravDist(void);
void GetGrav(void);
void GetWayPointEndCoord(void);
void GetDestCoord(void);
void GetExtent(void);
void DoStuck(void);
void CollideWithPartner(void);
void ShowColl(void);
void HideColl(void);
void ResetStuckCheck(void);
void MoveToVector(void);
void MoveToSpawnPoint(void);
void MoveToChar(void);
void ReloadNPCAttrib(void);
void Arrived(void);
void DoStuckNonCombat(void);
void Move(void);
void GetTargetCoord(void);
void CheckPriorty(void);
void ScanEnemy(void);
void PassiveScan(void);
void StrafeNPC(void);
void AddPos(void);
void MoveNPC(void);
void RotateTowardsDest(void);
void RangeCheck(void);
void ChangeStance(void);
void DesignateMovement(void);
void LockOnTarget(void);
void RunTask(void);
void ReCheckRange(void);
void RecalcCoord(void);
void ProceedTarAss(void);
void AggroCount(void);
void IsAggroed(void);
void ClearAggro(void);
void ReleaseTarget(void);
void CheckGuard(void);
void ClearGuard(void);
void ActiveScan(void);
void ExecCombat(void);
void InitializeRandomLocation(void);
void EscapeLure(void);
void GetRandomLocation(void);
void NPCQuadEdgeLoc(void);
void PickHomeLocation(void);
void GetSpawnPoint(void);
void SeekWayPoint(void);
void CheckNPCState(void);
void DoCountDeduct(void);
void RemoveEntity(void);
void RemovedNPC(void);
void SetSceneID(void);
void CheckSpawnPointStatus(void);
void DoNPCDisappear(void);
void ShowAttackMessage(void);
void HideAttackMessage(void);
void DoCombat(void);
void AICycle(void);
void Startup(void);
void LineOfSight(void);
void (void);
void Process(void);
void DebugSpawnPt(void);
void DebugNPC(void);
void ClearCollCache(void);
void SetID(void);
void ClearID(void);
void TakeNPC(void);
void GetNPCCount(void);
void ReleaseNPC(void);
void SetNPCPos(void);
void SetNPCX(void);
void SetNPCY(void);
void SetNPCZ(void);
void SetSpawnPeriod(void);
void ScanSpawnPt(void);
void ActivateSpawnpt(void);
void GetSpawnNPC(void);
void ActivateSpawnPt(void);
void ActivateSpawnPtGrp(void);
void ResetTickSpawnGrp(void);
void DeleteSpawnedNPCGrp(void);
void DeleteSpawnedNPC(void);
void GetSpawnPtCnt(void);
void CheckSpawnLiving(void);
void SetSpawnID(void);
void CascadeSPCheck(void);
void ShowSpawn(void);
void HideSpawn(void);
void OverrideSuicide(void);
void OverrideScan(void);
void OverrideSuicideRange(void);
void OverrideScanRange(void);
void SetQuestOwner(void);
void SetNoDeath(void);
void SetPriortyTarget(void);
void ClearPriortyTarget(void);
void AllocateSpawnPt(void);
void ReloadSpawnPt(void);
void ReloadSpawnDataAll(void);
void ReloadSpawnData(void);
void GetDirectionByAttID(void);
void ReloadNPCDataAll(void);
void ReloadAttrib(void);
void SetNPCForceRetreat(void);
void GetDirectionByCharID(void);
void AllocateLoot(void);
void AllocateLootExt1(void);
void AllocateLootComplete(void);
void AllocateLoot(void);
void AllocateDummyNPC(void);
void SpawnedNPC(void);
void AllocateNPC(void);
void GetFreeIndex(void);
void GetTopTenList(void);
void GetIndex(void);
void GetMaxDamage(void);
void GetMinDamage(void);
void comparepart(void);
void ProceedWithAggro(void);
void GetNPCPartner(void);
void RefreshTopTarget(void);
void GetTopTarget(void);
void Manual_Loot(void);
void SetDropLootFlag(void);
void AIGetClanRating(void);
void ShowChangeMove(void);
void HideChangeMove(void);
void GetScriptCount(void);
void GetClanParty(void);
void (void);
void GetNPCSlotCount(void);
void CreateNPCSlots(void);
void PutNPC(void);
void GetFreeNPC(void);
void (void);
void CreatePool(void);
void GetPool(void);
void SetSpawnOnStat(void);
void SetSpawnMax(void);
void GetSpawnPtDetail(void);
void GetSpawnPt(void);
void GetSpawnStat(void);
void SetSpawnPtByGroup(void);
void ProceedAggro(void);
void CheckCallForHelp(void);
void (void);
void Letext(void);
void GetMagnitude(void);
void (void);
void VDot(void);
void Normalize(void);
void (void);
void (void);
void (void);
void (void);
void SetTranslate(void);
void SetTranslate(void);
void SetRotation(void);
void (void);
void (void);
void GetNPCData(void);
void GetNPCCount(void);
void (void);
void (void);
void (void);
void (void);
void GetHead(void);
void GetNext(void);
void AddHead(void);
void Clear(void);
void (void);
void err_exit(void);
void berr_exit(void);
void islinefeed(void);
void readPubKey(void);
void readPrivKey(void);
void EncryptData(void);
void DecryptData(void);
void outenc(void);
void encode(void);
void outdec(void);
void decode(void);
void inet_ntoa_safe_thread(void);
void Letext(void);
void tcp_connect(void);
void SendData(void);
void Letext(void);
void negindex(void);
void luaA_index(void);
void luaA_indexAcceptable(void);
void luaA_pushobject(void);
void lua_checkstack(void);
void lua_xmove(void);
void lua_atpanic(void);
void lua_newthread(void);
void lua_gettop(void);
void lua_settop(void);
void lua_remove(void);
void lua_insert(void);
void lua_replace(void);
void lua_pushvalue(void);
void lua_type(void);
void lua_typename(void);
void lua_iscfunction(void);
void lua_isnumber(void);
void lua_isstring(void);
void lua_isuserdata(void);
void lua_rawequal(void);
void lua_equal(void);
void lua_lessthan(void);
void lua_tonumber(void);
void lua_toboolean(void);
void lua_tostring(void);
void lua_strlen(void);
void lua_tocfunction(void);
void lua_touserdata(void);
void lua_tothread(void);
void lua_topointer(void);
void lua_pushnil(void);
void lua_pushnumber(void);
void lua_pushlstring(void);
void lua_pushstring(void);
void lua_pushvfstring(void);
void lua_pushfstring(void);
void lua_pushcclosure(void);
void lua_pushboolean(void);
void lua_pushlightuserdata(void);
void lua_gettable(void);
void lua_rawget(void);
void lua_rawgeti(void);
void lua_newtable(void);
void lua_getmetatable(void);
void lua_getfenv(void);
void lua_settable(void);
void lua_rawset(void);
void lua_rawseti(void);
void lua_setmetatable(void);
void lua_setfenv(void);
void lua_call(void);
void f_call(void);
void lua_pcall(void);
void f_Ccall(void);
void lua_cpcall(void);
void lua_load(void);
void lua_dump(void);
void lua_getgcthreshold(void);
void lua_getgccount(void);
void lua_setgcthreshold(void);
void lua_version(void);
void lua_error(void);
void lua_next(void);
void lua_concat(void);
void lua_newuserdata(void);
void lua_pushupvalues(void);
void aux_upvalue(void);
void lua_getupvalue(void);
void lua_setupvalue(void);
void currentpc(void);
void currentline(void);
void luaG_inithooks(void);
void lua_sethook(void);
void lua_gethook(void);
void lua_gethookmask(void);
void lua_gethookcount(void);
void lua_getstack(void);
void getluaproto(void);
void lua_getlocal(void);
void lua_setlocal(void);
void funcinfo(void);
void travglobals(void);
void info_tailcall(void);
void auxgetinfo(void);
void lua_getinfo(void);
void precheck(void);
void checkopenop(void);
void checkRK(void);
void luaG_symbexec(void);
void luaG_checkcode(void);
void kname(void);
void getobjname(void);
void getfuncname(void);
void isinstack(void);
void luaG_typeerror(void);
void luaG_concaterror(void);
void luaG_aritherror(void);
void luaG_ordererror(void);
void addinfo(void);
void luaG_errormsg(void);
void luaG_runerror(void);
void seterrorobj(void);
void luaD_throw(void);
void luaD_rawrunprotected(void);
void restore_stack_limit(void);
void correctstack(void);
void luaD_reallocstack(void);
void luaD_reallocCI(void);
void luaD_growstack(void);
void luaD_growCI(void);
void luaD_callhook(void);
void adjust_varargs(void);
void tryfuncTM(void);
void luaD_precall(void);
void callrethooks(void);
void luaD_poscall(void);
void luaD_call(void);
void resume(void);
void resume_error(void);
void lua_resume(void);
void lua_yield(void);
void luaD_pcall(void);
void f_parser(void);
void luaD_protectedparser(void);
void DumpBlock(void);
void DumpByte(void);
void DumpInt(void);
void DumpSize(void);
void DumpNumber(void);
void DumpString(void);
void DumpCode(void);
void DumpLocals(void);
void DumpLines(void);
void DumpUpvalues(void);
void DumpConstants(void);
void DumpFunction(void);
void DumpHeader(void);
void luaU_dump(void);
void luaF_newCclosure(void);
void luaF_newLclosure(void);
void luaF_findupval(void);
void luaF_close(void);
void luaF_newproto(void);
void luaF_freeproto(void);
void luaF_freeclosure(void);
void luaF_getlocalname(void);
void reallymarkobject(void);
void marktmu(void);
void luaC_separateudata(void);
void removekey(void);
void traversetable(void);
void traverseproto(void);
void traverseclosure(void);
void checkstacksizes(void);
void traversestack(void);
void propagatemarks(void);
void valismarked(void);
void cleartablekeys(void);
void cleartablevalues(void);
void freeobj(void);
void sweeplist(void);
void sweepstrings(void);
void checkSizes(void);
void do1gcTM(void);
void luaC_callGCTM(void);
void luaC_sweep(void);
void markroot(void);
void mark(void);
void luaC_collectgarbage(void);
void luaC_link(void);
void luaM_growaux(void);
void luaM_realloc(void);
void luaO_int2fb(void);
void luaO_log2(void);
void luaO_rawequalObj(void);
void luaO_str2d(void);
void pushstr(void);
void luaO_pushvfstring(void);
void luaO_pushfstring(void);
void luaO_chunkid(void);
void next(void);
void lookahead(void);
void error_expected(void);
void testnext(void);
void check(void);
void check_match(void);
void str_checkname(void);
void init_exp(void);
void codestring(void);
void checkname(void);
void luaI_registerlocalvar(void);
void new_localvar(void);
void adjustlocalvars(void);
void removevars(void);
void new_localvarstr(void);
void create_local(void);
void indexupvalue(void);
void searchvar(void);
void markupval(void);
void singlevaraux(void);
void singlevar(void);
void adjust_assign(void);
void code_params(void);
void enterblock(void);
void leaveblock(void);
void pushclosure(void);
void open_func(void);
void close_func(void);
void luaY_parser(void);
void luaY_field(void);
void luaY_index(void);
void recfield(void);
void closelistfield(void);
void lastlistfield(void);
void listfield(void);
void constructor(void);
void parlist(void);
void body(void);
void explist1(void);
void funcargs(void);
void prefixexp(void);
void primaryexp(void);
void simpleexp(void);
void getunopr(void);
void getbinopr(void);
void subexpr(void);
void expr(void);
void block_follow(void);
void block(void);
void check_conflict(void);
void assignment(void);
void cond(void);
void whilestat(void);
void repeatstat(void);
void exp1(void);
void forbody(void);
void fornum(void);
void forlist(void);
void forstat(void);
void test_then_block(void);
void ifstat(void);
void localfunc(void);
void localstat(void);
void funcname(void);
void funcstat(void);
void exprstat(void);
void retstat(void);
void breakstat(void);
void statement(void);
void chunk(void);
void default_panic(void);
void mallocstate(void);
void freestate(void);
void stack_init(void);
void freestack(void);
void f_luaopen(void);
void preinit_state(void);
void close_state(void);
void luaE_newthread(void);
void luaE_freethread(void);
void lua_open(void);
void callallgcTM(void);
void lua_close(void);
void luaS_freeall(void);
void luaS_resize(void);
void newlstr(void);
void luaS_newlstr(void);
void luaS_newudata(void);
void hashnum(void);
void luaH_mainposition(void);
void arrayindex(void);
void luaH_index(void);
void luaH_next(void);
void computesizes(void);
void numuse(void);
void setarrayvector(void);
void setnodevector(void);
void resize(void);
void rehash(void);
void luaH_new(void);
void luaH_free(void);
void newkey(void);
void luaH_getany(void);
void luaH_getnum(void);
void luaH_getstr(void);
void luaH_get(void);
void luaH_set(void);
void luaH_setnum(void);
void luaT_init(void);
void luaT_gettm(void);
void luaT_gettmbyobj(void);
void unexpectedEOZ(void);
void ezgetc(void);
void ezread(void);
void LoadBlock(void);
void LoadVector(void);
void LoadInt(void);
void LoadSize(void);
void LoadNumber(void);
void LoadString(void);
void LoadCode(void);
void LoadLocals(void);
void LoadLines(void);
void LoadUpvalues(void);
void LoadConstants(void);
void LoadFunction(void);
void LoadSignature(void);
void TestSize(void);
void LoadHeader(void);
void LoadChunk(void);
void luaU_undump(void);
void luaU_endianness(void);
void luaV_tonumber(void);
void luaV_tostring(void);
void traceexec(void);
void callTMres(void);
void callTM(void);
void luaV_index(void);
void luaV_getnotable(void);
void luaV_gettable(void);
void luaV_settable(void);
void call_binTM(void);
void get_compTM(void);
void call_orderTM(void);
void luaV_strcmp(void);
void luaV_lessthan(void);
void luaV_lessequal(void);
void luaV_equalval(void);
void luaV_concat(void);
void Arith(void);
void luaV_execute(void);
void luaZ_fill(void);
void luaZ_lookahead(void);
void luaZ_init(void);
void luaZ_read(void);
void luaZ_openspace(void);
void luaK_nil(void);
void luaK_jump(void);
void luaK_condjump(void);
void luaK_fixjump(void);
void luaK_getlabel(void);
void luaK_getjump(void);
void getjumpcontrol(void);
void need_value(void);
void patchtestreg(void);
void luaK_patchlistaux(void);
void luaK_dischargejpc(void);
void luaK_patchlist(void);
void luaK_patchtohere(void);
void luaK_concat(void);
void luaK_checkstack(void);
void luaK_reserveregs(void);
void freereg(void);
void freeexp(void);
void addk(void);
void luaK_stringK(void);
void luaK_numberK(void);
void nil_constant(void);
void luaK_setcallreturns(void);
void luaK_dischargevars(void);
void code_label(void);
void discharge2reg(void);
void discharge2anyreg(void);
void luaK_exp2reg(void);
void luaK_exp2nextreg(void);
void luaK_exp2anyreg(void);
void luaK_exp2val(void);
void luaK_exp2RK(void);
void luaK_storevar(void);
void luaK_self(void);
void invertjump(void);
void jumponcond(void);
void luaK_goiftrue(void);
void luaK_goiffalse(void);
void codenot(void);
void luaK_indexed(void);
void luaK_prefix(void);
void luaK_infix(void);
void codebinop(void);
void luaK_posfix(void);
void luaK_fixline(void);
void luaK_code(void);
void luaK_codeABC(void);
void luaK_codeABx(void);
void luaX_init(void);
void luaX_checklimit(void);
void luaX_errorline(void);
void luaX_error(void);
void luaX_syntaxerror(void);
void luaX_token2str(void);
void luaX_lexerror(void);
void inclinenumber(void);
void luaX_setinput(void);
void readname(void);
void read_numeral(void);
void read_long_string(void);
void read_string(void);
void luaX_lex(void);
void luaL_argerror(void);
void luaL_typerror(void);
void tag_error(void);
void luaL_where(void);
void luaL_error(void);
void luaL_findstring(void);
void luaL_newmetatable(void);
void luaL_getmetatable(void);
void luaL_checkudata(void);
void luaL_checkstack(void);
void luaL_checktype(void);
void luaL_checkany(void);
void luaL_checklstring(void);
void luaL_optlstring(void);
void luaL_checknumber(void);
void luaL_optnumber(void);
void luaL_getmetafield(void);
void luaL_callmeta(void);
void luaL_openlib(void);
void checkint(void);
void getsizes(void);
void luaL_setn(void);
void luaL_getn(void);
void emptybuffer(void);
void adjuststack(void);
void luaL_prepbuffer(void);
void luaL_addlstring(void);
void luaL_addstring(void);
void luaL_pushresult(void);
void luaL_addvalue(void);
void luaL_buffinit(void);
void luaL_ref(void);
void luaL_unref(void);
void getF(void);
void errfile(void);
void luaL_loadfile(void);
void getS(void);
void luaL_loadbuffer(void);
void callalert(void);
void aux_do(void);
void lua_dofile(void);
void lua_dobuffer(void);
void lua_dostring(void);
void luaB_print(void);
void luaB_tonumber(void);
void luaB_error(void);
void luaB_getmetatable(void);
void luaB_setmetatable(void);
void getfunc(void);
void aux_getfenv(void);
void luaB_getfenv(void);
void luaB_setfenv(void);
void luaB_rawequal(void);
void luaB_rawget(void);
void luaB_rawset(void);
void luaB_gcinfo(void);
void luaB_collectgarbage(void);
void luaB_type(void);
void luaB_next(void);
void luaB_pairs(void);
void luaB_ipairs(void);
void load_aux(void);
void luaB_loadstring(void);
void luaB_loadfile(void);
void luaB_dofile(void);
void luaB_assert(void);
void luaB_unpack(void);
void luaB_pcall(void);
void luaB_xpcall(void);
void luaB_tostring(void);
void luaB_newproxy(void);
void getpath(void);
void pushnextpath(void);
void pushcomposename(void);
void luaB_require(void);
void auxresume(void);
void luaB_coresume(void);
void luaB_auxwrap(void);
void luaB_cocreate(void);
void luaB_cowrap(void);
void luaB_yield(void);
void luaB_costatus(void);
void base_open(void);
void luaopen_base(void);
void pushresult(void);
void topfile(void);
void io_type(void);
void tofile(void);
void newfile(void);
void registerfile(void);
void aux_close(void);
void io_close(void);
void io_gc(void);
void io_tostring(void);
void io_open(void);
void io_popen(void);
void io_tmpfile(void);
void getiofile(void);
void g_iofile(void);
void io_input(void);
void io_output(void);
void aux_lines(void);
void f_lines(void);
void io_lines(void);
void read_number(void);
void test_eof(void);
void read_line(void);
void read_chars(void);
void g_read(void);
void io_read(void);
void f_read(void);
void io_readline(void);
void g_write(void);
void io_write(void);
void f_write(void);
void f_seek(void);
void io_flush(void);
void f_flush(void);
void createmeta(void);
void io_execute(void);
void io_remove(void);
void io_rename(void);
void io_tmpname(void);
void io_getenv(void);
void io_clock(void);
void setfield(void);
void setboolfield(void);
void getboolfield(void);
void getfield(void);
void io_date(void);
void io_time(void);
void io_difftime(void);
void io_setloc(void);
void io_exit(void);
void luaopen_io(void);
void math_abs(void);
void math_sin(void);
void math_cos(void);
void math_tan(void);
void math_asin(void);
void math_acos(void);
void math_atan(void);
void math_atan2(void);
void math_ceil(void);
void math_floor(void);
void math_mod(void);
void math_sqrt(void);
void math_pow(void);
void math_log(void);
void math_log10(void);
void math_exp(void);
void math_deg(void);
void math_rad(void);
void math_frexp(void);
void math_ldexp(void);
void math_min(void);
void math_max(void);
void math_random(void);
void math_randomseed(void);
void luaopen_math(void);
void str_len(void);
void posrelat(void);
void str_sub(void);
void str_lower(void);
void str_upper(void);
void str_rep(void);
void str_byte(void);
void str_char(void);
void writer(void);
void str_dump(void);
void check_capture(void);
void capture_to_close(void);
void luaI_classend(void);
void match_class(void);
void matchbracketclass(void);
void luaI_singlematch(void);
void matchbalance(void);
void max_expand(void);
void min_expand(void);
void start_capture(void);
void end_capture(void);
void match_capture(void);
void match(void);
void lmemfind(void);
void push_onecapture(void);
void push_captures(void);
void str_find(void);
void gfind_aux(void);
void gfind(void);
void add_s(void);
void str_gsub(void);
void luaI_addquoted(void);
void scanformat(void);
void str_format(void);
void luaopen_string(void);
void SetElderBrother(void);
void AddYoungerBrother(void);
void RemoveYoungerBrother(void);
void GetElderBrother(void);
void ClearAllYoungerBrothers(void);
void InviteYoungerBrother(void);
void IsBrother(void);
void SendBrotherhoodReply(void);
void CreateParty(void);
void GetPartyCount(void);
void SetPartyID(void);
void GetPartyID(void);
void AddToParty(void);
void RemoveFromParty(void);
void IsPartyMember(void);
void GetPartyMembers(void);
void InviteIntoParty(void);
void SendPartyReply(void);
void GetClanID(void);
void GetClanLeader(void);
void GetClanMinisters(void);
void GetClanMembers(void);
void GetAllClanMembers(void);
void GetClanStatus(void);
void AddBarredClan(void);
void AddToClan(void);
void IsClanMember(void);
void IsBarredFromClan(void);
void SendAllyClan(void);
void InviteIntoClan(void);
void GetBarredClanList(void);
void SendClanReply(void);
void SetClanStatus(void);
void RemoveFromClan(void);
void RemoveBarredClan(void);
void GetClanRating(void);
void SetClanRating(void);
void GetClanRelics(void);
void StoreRelic(void);
void RemoveRelic(void);
void SendRelic(void);
void GetYoungerBrother(void);
void GetRelicFlags(void);
void SetRelicFlag(void);
void GetClanRelationship(void);
void AddToBountyList(void);
void RemoveFromBountyList(void);
void GetBountyList(void);
void GetClanType(void);
void SetClanType(void);
void SetClanQuit(void);
void GetClanQuit(void);
void RestoreRelic(void);
void ReturnRelic(void);
void FindRelic(void);
void AddRelic(void);
void GetClanPrestige(void);
void SetClanPrestige(void);
void SendDuelOffer(void);
void IsFriendly(void);
void IsFriendly_F(void);
void GetAffiliation(void);
void SetAffiliation(void);
void SetAffiliation_F(void);
void GetAllyList(void);
void QuitClan(void);
void QuitClan_F(void);
void SetPKPoints(void);
void GetPKPoints(void);
void GetBuffType(void);
void GetBuffData(void);
void AddGuildBuff(void);
void RemoveGuildBuff(void);
void GetGuildBuff(void);
void AddClanBuff(void);
void RemoveClanBuff(void);
void GetClanBuff(void);
void ModifyPKWarning(void);
void GetPKWarning(void);
void GetClanGold(void);
void SetClanGold(void);
void SetWaitPeriod(void);
void GetWaitPeriod(void);
void GetExWaitPeriod(void);
void SendClanTreasury(void);
void SendPrestigeLog(void);
void LogPrestige(void);
void LogClanActivity(void);
void SendClanActivityLog(void);
void RemoveFromGuildList(void);
void (void);
void Letext(void);
void GetAllStances(void);
void AddStance(void);
void RemoveStance(void);
void GetStanceAdvantage(void);
void GetCurrentStance(void);
void SetCurrentStance(void);
void GetStanceRank(void);
void SetStanceRank(void);
void AddStanceRank(void);
void GetStancePoints(void);
void SetStancePoints(void);
void GetAllPowers(void);
void AddPower(void);
void RemovePower(void);
void GetPowerPoints(void);
void SetPowerPoints(void);
void SetPowerRank(void);
void AddPowerRank(void);
void GetPowerRank(void);
void GetPowerData(void);
void FindEffects(void);
void GetEffectData(void);
void GetEffects(void);
void AddEffect(void);
void AddEffect_F(void);
void SendEffectIcon(void);
void RemoveEffect(void);
void ApplyEffect(void);
void ApplyEffect_F(void);
void GetActiveWeapon(void);
void SetActiveWeapon(void);
void GetAttackMode(void);
void SetAttackMode(void);
void SendCombatFeedback(void);
void SendCombatFeedback_F(void);
void GetMoveData(void);
void GetStanceData(void);
void GetAttackModeAttackModifier(void);
void GetAttackModeBlockChance(void);
void GetAttackModeDefenseModifier(void);
void GetAttackModeDamageModifier(void);
void GetCurrentWeaponSpeed(void);
void GetDuelStats(void);
void SetDuelStats(void);
void GetLastDuelID(void);
void SetLastDuelID(void);
void StartWager(void);
void EndWager(void);
void SetPowerCoolDown(void);
void GetCumulativeEffects(void);
void AddToChainPower(void);
void RemoveFromChainPower(void);
void GetChainPowers(void);
void GetNumChainPowers(void);
void SetNumChainPowers(void);
void SetReadyWeapon(void);
void GetReadyWeapon(void);
void CalculateConstDamage(void);
void SendPowerCooldown(void);
void SendChainPowerCooldown(void);
void (void);
void Letext(void);
void (void);
void Clear(void);
void Reset(void);
void DoEffect(void);
void GetDamageType_F(void);
void CheckSplit_F(void);
void CheckScatter_F(void);
void CheckArmorHit_F(void);
void CheckDurability_F(void);
void CheckStun2_F(void);
void CheckSlow2_F(void);
void CheckEntangle2_F(void);
void CheckConfusion_F(void);
void CheckBlind_F(void);
void CheckCanAttackWarNPC_F(void);
void CheckIfCanPK_F(void);
void IsInClanRelicZone_F(void);
void CheckWarSystem_F(void);
void SetPKWarning_F(void);
void CheckInterruptSprint_F(void);
void CheckPKPenalty_F(void);
void CheckPKPointResult_F(void);
void CheckWarRules_F(void);
void CheckRemoveFromClan_F(void);
void RemoveFromClan_F(void);
void ChangeClanRating_F(void);
void IsInWarScene_F(void);
void SendFeedbackMsg_F(void);
void CheckGuard_F(void);
void GetRangeToEntity_F(void);
void GetClanWarData_F(void);
void CheckInterruptPower_F(void);
void CheckTeam_F(void);
void (void);
void Letext(void);
void GetEventStance(void);
void GetEventSkill(void);
void GetEventItem(void);
void GetEventEntity1(void);
void GetEventEntity2(void);
void GetEventZones(void);
void GetEventMode(void);
void GetEventLocation1(void);
void GetEventLocation2(void);
void GetEventQuantity(void);
void GetEventQuantity2(void);
void GetEventFlag(void);
void GetEventPower(void);
void GetEventLabel(void);
void GetEventValue(void);
void GetEventSceneID(void);
void GetEventItemList(void);
void GetEventRange(void);
void GetEventTreasure(void);
void GetEventAction(void);
void GetEventType(void);
void GetEventSet(void);
void GetGMParams(void);
void (void);
void Letext(void);
void RollDice(void);
void RollDice_F(void);
void GetCharacter(void);
void GetEntityType(void);
void GetEntityState(void);
void SetEntityState(void);
void GetQuestState(void);
void SetQuestState(void);
void SetTarget(void);
void GetTarget(void);
void GetRangeToEntity(void);
void SetAnimation(void);
void RemoveEntity(void);
void SetPlayerScratchData(void);
void GetPlayerScratchData(void);
void GetTickcount(void);
void GetEntityPosition(void);
void PlayEffect(void);
void PlayEffect_F(void);
void GetModelID(void);
void SetModelID(void);
void RandomizeModel(void);
void SendMessage(void);
void SendMultiStrings(void);
void SendZoneMessage(void);
void SendGenMessage(void);
void SendNPCMessageVar(void);
void SendNPCMessage(void);
void GetObjectLabel(void);
void GetCharacterFacing(void);
void GetEntitiesAtCoord(void);
void GetEntitiesInArea(void);
void GetEntitiesInCone(void);
void GetPlayersInScene(void);
void CheckFacingToTarget(void);
void ActivateWeather(void);
void SaveCharacter(void);
void ExecuteScript(void);
void ExecuteScript_F(void);
void GetScriptParams(void);
void GetZoneKillFlag(void);
void SetZoneKillFlag(void);
void GetSceneZoneFlag(void);
void SetVisualFlag(void);
void SetVFXFlag(void);
void SetVFXFlag_F(void);
void GetVFXFlag(void);
void GetLoginInterval(void);
void GetTimer(void);
void SetCurrentMovementSpeed(void);
void SendGenericHint(void);
void GetIsChar(void);
void SendGenBuffer(void);
void SendSysMessage(void);
void BroadcastMessage(void);
void GetLastKillerID(void);
void SetLastKillerID(void);
void SetLastResTime(void);
void GetLastResTime(void);
void VerifyCharExists(void);
void CheckCharOnline(void);
void SendUICommand(void);
void CheckOptions(void);
void SetGMOptions(void);
void GetGMOptions(void);
void GetGMAccess(void);
void SetServerScratchData(void);
void GetServerScratchData(void);
void BootPlayer(void);
void IsSceneOnServer(void);
void ShowTutorialTrade(void);
void AddTutorialItem(void);
void SetTutorialGold(void);
void SetTutorialCheck(void);
void ForceMove(void);
void SeedRandomizer(void);
void SendCameraCommand(void);
void SendFakeMerchantList(void);
void SendGMTagFlag(void);
void GetGameEvent(void);
void SetGameEvent(void);
void GetGameEventStatus(void);
void CheckCanTarget(void);
void SetSObjModelID(void);
void SetSObjData(void);
void GetSObjData(void);
void SetGameStats(void);
void GameTime(void);
void SendConstEffects(void);
void SetAnimationQueue(void);
void MuteChar(void);
void IsValidChar(void);
void LuaAssert(void);
void SendGenMessage_F(void);
void SetCurrentMovementSpeed_F(void);
void SetScratchData_F(void);
void AddCharToGMHelp(void);
void RemoveCharFromGMHelp(void);
void CheckEntityInBox(void);
void ResetHeroTimer(void);
void GetHeroCounter(void);
void SetHeroCounter(void);
void (void);
void Letext(void);
void CreateGuild(void);
void DeleteGuild(void);
void ModifyGuildData(void);
void GetGuildData(void);
void GetGuildList(void);
void SendGuildReply(void);
void CheckGuildName(void);
void SendGuildCreate(void);
void GetFreeGuilds(void);
void SetAlly(void);
void SetClanToGuild_F(void);
void InviteIntoGuild(void);
void (void);
void Letext(void);
void SetTeamID(void);
void GetTeamID(void);
void StartIGREvent(void);
void StopIGREvent(void);
void GetIGRTime(void);
void SetIGRGenData(void);
void SetIGRType(void);
void SetIGRTeams(void);
void SetIGRDuration(void);
void SetIGRStatus(void);
void SetIGRResult(void);
void SetIGRFlags(void);
void GetIGRFlags(void);
void SetIGRScore(void);
void GetIGRScore(void);
void GetIGRData(void);
void GetIGRTeamData(void);
void GetIGRScratch(void);
void SetIGRScratch(void);
void SendTeamChallenge(void);
void (void);
void Letext(void);
void GetGold(void);
void SetGold(void);
void GetStashGold(void);
void SetStashGold(void);
void AddItem(void);
void RemoveItem(void);
void DestroyItem(void);
void GetRentalInfo(void);
void GetAllItems(void);
void GetAllCarriedItems(void);
void GetAllStashedItems(void);
void GetBodyItems(void);
void GetIdentified(void);
void GetInventoryItems(void);
void GetSidePocket(void);
void GetItemCount(void);
void GetItemData(void);
void GetItemInSlot(void);
void GetQuickItems(void);
void GetWeaponItems(void);
void SetIdentified(void);
void MoveSlot(void);
void FindUniqueItem(void);
void GetUniqueItemSet(void);
void GetUniqueItemData(void);
void GetUniqueItemID(void);
void SetUniqueRevertToID(void);
void SetUniqueCharID(void);
void ResetUniqueTime(void);
void GetCurrentWeight(void);
void CalculateWeightAllowance_F(void);
void GetWeightAllowance(void);
void SendInventoryItems(void);
void GetTradingData(void);
void GetTreasureRarity(void);
void GetTreasureData(void);
void SendMerchantInventory(void);
void SendHeroInventory(void);
void GetTradeGold(void);
void SetTradeGold(void);
void GetTradeAgreement(void);
void SetTradeAgreement(void);
void SendTradeRequest(void);
void SendTradeData(void);
void StartTrade(void);
void EndTrade(void);
void SendMerchantStances(void);
void SendMerchantPowers(void);
void SendMerchantSkills(void);
void ClearLoot(void);
void SendLoot(void);
void SendStash(void);
void ClearStash(void);
void AddAttachment(void);
void RemoveAttachment(void);
void GenerateTreasure(void);
void AddComponent(void);
void RemoveComponent(void);
void GetComponent(void);
void GetLegendaryStatus(void);
void SetLegendaryStatus(void);
void SendEvaluateResponse(void);
void SendSidePocket(void);
void SendCurrentWeight(void);
void GetUniqueItemByLabel(void);
void GetUniqueItemByNPCAttr(void);
void FindItems(void);
void SendMouseItem(void);
void RefreshAuctionList(void);
void AddItemToAuction(void);
void RemoveCurrentAuctionItems(void);
void ReturnItemFromOldAuction(void);
void RemoveOldAuctionItems(void);
void BidOnItem(void);
void SendAuctionItems(void);
void SellItemOnAuction(void);
void GetAuctionData(void);
void GetOldAuctionData(void);
void GetAuctionItem(void);
void RestoreUniqueItem(void);
void SetArmor(void);
void CheckRelic(void);
void CheckUniqueItem(void);
void SendIdentifyPrice(void);
void GetDurability(void);
void SetDurability(void);
void ClearDiscounts(void);
void AddDiscount(void);
void GetDiscounts(void);
void ApplyDiscounts(void);
void CheckWeight(void);
void CheckWeight_F(void);
void SendItemBreakIcon(void);
void SendItemBreakIcon_F(void);
void ApplySetEffects(void);
void RemoveSetEffects(void);
void ReApplyAllSetEffects(void);
void CalculateCurrentWeight_F(void);
void SendCurrentWeight_F(void);
void AddSetEffects_F(void);
void RemoveSetEffects_F(void);
void GetSetEffects_F(void);
void DoSetEffects(void);
void DoSetEffects_F(void);
void RefreshVisualFlag(void);
void ModifyItemXP(void);
void GetItemXP(void);
void GetItemLevel(void);
void SetItemLevel(void);
void GetUniqueItems(void);
void SetDecayCounter(void);
void (void);
void Letext(void);
void GetLevel(void);
void GetLevelCap(void);
void SetLevel(void);
void GetMulPerc(void);
void GetXP(void);
void SetXP(void);
void SetXP_F(void);
void GetStanceProgression(void);
void GetLevelAdvancement(void);
void GetTemplate(void);
void ToggleTemplate(void);
void GetXPPerDamage(void);
void AddToXPPool(void);
void GetTemplateAdv(void);
void (void);
void Letext(void);
void Abs(void);
void DoubleWord(void);
void Div(void);
void GetHiValue(void);
void GetLowValue(void);
void RoundUp(void);
void RoundDown(void);
void LShift(void);
void RShift(void);
void GetHexDigit(void);
void (void);
void Letext(void);
void GetElementalAdvantage(void);
void SetElementalAdvantage(void);
void GetGender(void);
void SetGender(void);
void GetReSpecPoints(void);
void SetReSpecPoints(void);
void (void);
void Letext(void);
void AIGetByAttID(void);
void AIGetByCharID(void);
void SetDoRemove(void);
void SetNPCRange(void);
void IsNPCExist(void);
void GetLoot(void);
void SetNPCAttackType(void);
void AIRunTask(void);
void GetAttackPerc(void);
void GetDetectHiddenRate(void);
void GetPowerID(void);
void GetPowType(void);
void GetMeleeRange(void);
void GetNPCPowerData(void);
void GetPowerRange(void);
void AIRefreshTopTarget(void);
void AIDoCountDeduct(void);
void AIRemoveEntity(void);
void RemoveNPC(void);
void GetAnimStanceID(void);
void AIProceedWithAggro(void);
void AIProceedAggro(void);
void TargetAttackable_F(void);
void TargetAttackable(void);
void AISetCurrentHitPoints(void);
void aicomparepart(void);
void AIGetNPCPartner(void);
void AIAggroCount(void);
void AISetPartnerAggro(void);
void AISetCurrentMissPoints(void);
void SetNPCMiss(void);
void SetNPCHitPoints(void);
void GetNPCTreasure(void);
void GetNPCAggressiveFlag(void);
void GetInvisibilityPerc(void);
void GetNPCItemCount(void);
void SetNPCItemCount(void);
void SetNPCAggressiveFlag(void);
void GetNameID(void);
void TransferQuestLoot(void);
void GetIsSNPC(void);
void GetNPCClanInfo(void);
void GetItemFromLoot(void);
void TransferLoot(void);
void AIAllocateLoot(void);
void AIAllocateLoot(void);
void DropLoot(void);
void ExecuteNPCScript(void);
void GetNPCAttrib(void);
void AIIsAggroed(void);
void IsAggroed(void);
void AIClearAggro(void);
void ClearAggro(void);
void AIGetDirectionByAttID(void);
void AIAllocateNPC(void);
void AIActivateSpawnpt(void);
void AIActivateSpawnPt(void);
void ActivateQuestPtWorld(void);
void ActivateQuestPt(void);
void GetNPCFromSpawn(void);
void DeleteSpawnNPC(void);
void AIActivateSpawnPtGrp(void);
void ActivateSpawnGrp(void);
void DeleteSpawnNPCGrp(void);
void ResetSpawnGrpTimer(void);
void AIReplaceSpawnedAttrib(void);
void ReplaceSpawnAttrib(void);
void AIResetSpawnedAttrib(void);
void ResetSpawnAttrib(void);
void AIReplaceSpawnedGrpAttrib(void);
void ReplaceSpawnGrpAttrib(void);
void AIResetSpawnedGrpAttrib(void);
void ResetSpawnGrpAttrib(void);
void GetQuestOwner(void);
void ResetQuestOwner(void);
void GetNPCScriptID(void);
void GetSpawnPtCnt(void);
void CheckSpawnLiving(void);
void SetQuestOwner(void);
void IsPiss(void);
void SetNoDeath(void);
void IsGuard(void);
void DropLootExt1(void);
void GetNPCResistance(void);
void IsNPCDead(void);
void AISetSpawnPermanentStatus(void);
void SetSpawnLiveStatus(void);
void SetSpawnPtStatus(void);
void ResetNPCData(void);
void AISpawnedNPC(void);
void SpawnNPC(void);
void SetSpawnOnFlag(void);
void SetSpawnMaxFlag(void);
void AIManual_Loot(void);
void ManualDropLoot(void);
void GetSpawnStatistics(void);
void GetSpawnData(void);
void AIGetSpawnPtDetail(void);
void GetSpawnDetail(void);
void GetNPCRotate(void);
void GetNPCData(void);
void SetTargetList(void);
void DoClanRating(void);
void RetrieveScanList(void);
void RetrieveTargetList(void);
void aicomparespawnpt(void);
void aicomparenpc(void);
void GetNPCCoord(void);
void GetSpawnPtCoord(void);
void RetrieveSpawnPtByValue(void);
void RetrieveNPCByValue(void);
void SetNPCDropLootFlag(void);
void MoveNPCToChar(void);
void MoveNPCToSpawnPt(void);
void MoveNPCToCoord(void);
void AISetSpawnPtByGroup(void);
void RedoSpawnGrp(void);
void AIModifyNPCData(void);
void SetNPCData(void);
void AIGetNPCData(void);
void RetrieveNPCData(void);
void AISetNPCInstanceData(void);
void ModifyNPCInstanceData(void);
void AIGetNPCInstanceData(void);
void RetrieveNPCInstanceData(void);
void IsTrap(void);
void IsDontAttack(void);
void TeleportNPC(void);
void AISetEntityState(void);
void FindMonsterInScene(void);
void GetBreakSprint(void);
void (void);
void Letext(void);
void GetAllBasePrimaryAttributes(void);
void SetAllBasePrimaryAttributes(void);
void GetBaseAgility(void);
void SetBaseAgility(void);
void GetBaseConstitution(void);
void SetBaseConstitution(void);
void GetBaseMind(void);
void SetBaseMind(void);
void GetBasePerception(void);
void SetBasePerception(void);
void GetBaseStrength(void);
void SetBaseStrength(void);
void GetCurrentStrength(void);
void GetCurrentConstitution(void);
void GetCurrentMind(void);
void GetCurrentPerception(void);
void GetCurrentAgility(void);
void GetAttributePoints(void);
void SetAttributePoints(void);
void CalculateCurrentStrength(void);
void CalculateCurrentMind(void);
void CalculateCurrentPerception(void);
void CalculateCurrentConstitution(void);
void CalculateCurrentAgility(void);
void (void);
void Letext(void);
void SendJournal(void);
void GetTaskState(void);
void ClearQuest(void);
void ClearLastQuest(void);
void GenerateQuest(void);
void AcceptQuest(void);
void ReactToQuest(void);
void SetQuestTreasure(void);
void SetQuestGold(void);
void RewardCharacterFunc(void);
void AddItemsToInventory(void);
void AddItemsToTempInventory(void);
void AddToSlotFunc(void);
void AddToFreeInventorySlot(void);
void SendQuestFluff(void);
void SendGenFluff(void);
void SetQuestLog(void);
void PickGenTextDiff(void);
void CheckElapsedTime(void);
void CheckItemsMatch(void);
void CheckItem(void);
void QuestGiverCheck(void);
void GenTreasure(void);
void GetSpawnPoints(void);
void TurnOffSpawnPoints(void);
void ChkDecEnemyInParty(void);
void SendQuestJournal(void);
void SendTxtMsg(void);
void SendQuestMsg(void);
void ClearTaskLog(void);
void GetChainTag(void);
void CheckLastQuest(void);
void AddToLastQuest(void);
void (void);
void Letext(void);
void GetResourceClan(void);
void GetResources(void);
void GetResourcesType(void);
void GetResourcesGroup(void);
void GetResourceData(void);
void SetResourceData(void);
void GetResourceStats(void);
void SetResourceClan(void);
void GetClanResources(void);
void GetResourceInClan(void);
void (void);
void Letext(void);
void GetCurrentHitPoints(void);
void SetCurrentHitPoints(void);
void GetHitPointRegenerationRate(void);
void SetHitPointRegenerationRate(void);
void CalculateMaximumHitPoints(void);
void GetMaximumHitPoints(void);
void GetBaseMaximumHitPoints(void);
void SetBaseMaximumHitPoints(void);
void GetCurrentChiPoints(void);
void SetCurrentChiPoints(void);
void GetChiRegenerationRate(void);
void SetChiRegenerationRate(void);
void CalculateMaximumChiPoints(void);
void GetMaximumChiPoints(void);
void GetBaseMaximumChiPoints(void);
void SetBaseMaximumChiPoints(void);
void GetBaseDamage(void);
void SetBaseDamage(void);
void GetBaseAttackRating(void);
void SetBaseAttackRating(void);
void GetBaseDefenseRating(void);
void SetBaseDefenseRating(void);
void GetAllBaseResistances(void);
void SetAllBaseResistances(void);
void GetBaseColdResistance(void);
void SetBaseColdResistance(void);
void GetBaseFireResistance(void);
void SetBaseFireResistance(void);
void GetBaseLightningResistance(void);
void SetBaseLightningResistance(void);
void GetBasePhysicalResistance(void);
void SetBasePhysicalResistance(void);
void GetBasePoisonResistance(void);
void SetBasePoisonResistance(void);
void SetPrestige(void);
void GetPrestige(void);
void GetCurrentColdDamage(void);
void GetCurrentColdResistance(void);
void GetCurrentFireDamage(void);
void GetCurrentFireResistance(void);
void GetCurrentLightningDamage(void);
void GetCurrentLightningResistance(void);
void GetCurrentPhysicalDamage(void);
void GetCurrentPhysicalResistance(void);
void GetCurrentPoisonDamage(void);
void GetCurrentPoisonResistance(void);
void CalculateCurrentUnarmedDamage(void);
void GetCurrentUnarmedDamage(void);
void GetBaseUnarmedDamage(void);
void SetBaseUnarmedDamage(void);
void GetAllCurrentResistances(void);
void GetAllCurrentResistances_F(void);
void GetCurrentAttackRating(void);
void GetCurrentDefenseRating(void);
void GetMovementMode(void);
void SetMovementMode(void);
void CalculateCurrentAttackRating(void);
void CalculateCurrentDefenseRating(void);
void CalculateCurrentPhysicalResistance(void);
void CalculateCurrentFireResistance(void);
void CalculateCurrentColdResistance(void);
void CalculateCurrentPoisonResistance(void);
void CalculateCurrentLightningResistance(void);
void GetCurrentBaseDamage(void);
void SetTitle(void);
void GetTitle(void);
void GetCurrentDirectDamage(void);
void (void);
void Letext(void);
void GetSkillPoints(void);
void SetSkillPoints(void);
void GetSkillRank(void);
void SetSkillRank(void);
void AddSkillRank(void);
void GetAllSkillRanks(void);
void GetAllSkills(void);
void GetSkillData(void);
void GetRecipe(void);
void SetSprintSpeed(void);
void SendSkills(void);
void SendResuscitateOffer(void);
void SendGuardOffer(void);
void SendGuardRange(void);
void SendSkillCooldown(void);
void (void);
void Letext(void);
void Echo(void);
void ALog(void);
void Log(void);
void SetReturnValue(void);
void Random(void);
void SendToAllFunc(void);
void wstrncpy(void);
void SendToAllU_F(void);
void AddEvent(void);
void RemoveEvent(void);
void ReloadEvents(void);
void CreateEvent(void);
void DeleteEvent(void);
void ActivateEvent(void);
void DeactivateEvent(void);
void UpdateCharacter(void);
void PurgeMemory(void);
void GetCharIDFromHash(void);
void CheckBits(void);
void SetBits(void);
void CheckSettings(void);
void ValidateCredit(void);
void SendCharLog_F(void);
void SendCharLog(void);
void ResetEventSvc(void);
void GetNoticeBoard(void);
void GetNoticeBoardDetail(void);
void (void);
void Letext(void);
void CreateWarEvent(void);
void GetWarEventData(void);
void CheckWarEvent(void);
void CheckClanEvents_F(void);
void CheckCharEvents_F(void);
void CheckUsed_F(void);
void AddUsed_F(void);
void SetWarScratchData(void);
void GetWarScratchData(void);
void GetValidGuilds(void);
void GetValidClans(void);
void SendWarID(void);
void GetWarState(void);
void SetWarEventState(void);
void SetWarEventID(void);
void GetWarEventID(void);
void SetHeroPoints(void);
void GetHeroPoints(void);
void GetTypeOfScene(void);
void TeleportToWar(void);
void GetOldEvents(void);
void SetWarTokens(void);
void GetWarTokens(void);
void BookFreeZone_F(void);
void GetTypeOfScene_F(void);
void PurgeWarEvent_F(void);
void GetClanWarData(void);
void GetClanWarStatus(void);
void SetClanWar(void);
void GetClanScratchData(void);
void SetClanScratchData(void);
void GetUpgradeData(void);
void SendClanUpgrade(void);
void UpdateArenaScore(void);
void SendArenaScore(void);
void GetAllWarEvents(void);
void LogWarAction(void);
void CreateWarScore(void);
void GetWarScore(void);
void SetWarScore(void);
void AddExHeroPoints(void);
void (void);
void Letext(void);
void ConfirmZone(void);
void CancelZone(void);
void GetSceneLabels(void);
void SetValidScenes(void);
void CheckZonePop(void);
void GetScenePop(void);
void GetScenesInMap(void);
void GetScenes(void);
void RandomSceneCoord(void);
void GetSceneID(void);
void GetBindSceneID(void);
void GetZoneFlag(void);
void SetZoneFlag(void);
void IsInSameScene(void);
void RespawnPlayer(void);
void BindPlayer(void);
void IsRespawning(void);
void GetLastLabel(void);
void IsStuck(void);
void UnStick(void);
void GMTeleport(void);
void ReZonePlayer(void);
void FindPlayer(void);
void GetLastSceneID(void);
void GetSceneScriptID(void);
void FindStarter(void);
void (void);
void Letext(void);
void (void);
void Init(void);
void SetInitParams(void);
void ReConnect(void);
void Disconnect(void);
void SQLQuery(void);
void FetchNextRow(void);
void FetchNextRow(void);
void GetLastInsertID(void);
void BlobUpdate(void);
void BlobRead(void);
void BlobInsert(void);
void strmov(void);
void Letext(void);
void (void);
void SetLogFile(void);
void SetProgName(void);
void RegisterModule(void);
void SetFlags(void);
void SetPriorityLevel(void);
void SetOutput(void);
void Log(void);
void Log(void);
void Log(void);
void Log(void);
void Log(void);
void LogFilename(void);
void Letext(void);
void (void);
void (void);
void QueuePacket(void);
void GetNetObject(void);
void FlushQueues(void);
void LocateFree(void);
void GetNextPacket(void);
void FreePacket(void);
void AllocDropList(void);
void Letext(void);
void (void);
void (void);
void AddNetObject(void);
void FlushQueues(void);
void GetNextPacket(void);
void DeletePacket(void);
void DeletePackets(void);
void DeletePacket(void);
void RemovePacket(void);
void AddSystemPacket(void);
void AddAckPkt(void);
void AddUID(void);
void ReQueueSent(void);
void GetUID(void);
void SetPacketBreak(void);
void AddObjectData(void);
void AddObjectHeader(void);
void LocateFree(void);
void LocatePacket(void);
void AddNewPacket(void);
void InsertPackets(void);
void SetRetryInterval(void);
void SetLimit(void);
void AddPacketToSent(void);
void GetTickCount(void);
void (void);
void GetTickCount(void);
void Letext(void);
void (void);
void reflect(void);
void crc32_init(void);
void crc32_calc(void);
void calculate(void);
void get(void);
void Letext(void);
void (void);
void (void);
void lzo_assert(void);
void lzo_copyright(void);
void lzo_version(void);
void lzo_version_string(void);
void lzo_version_date(void);
void lzo_adler32(void);
void lzo_memcmp(void);
void lzo_memcpy(void);
void lzo_memmove(void);
void lzo_memset(void);
void basic_integral_check(void);
void basic_ptr_check(void);
void ptr_check(void);
void schedule_insns_bug(void);
void strength_reduce_bug(void);
void (void);
void lzo1x_1_compress(void);
void lzo1x_decompress(void);
void lzo1x_decompress_safe(void);
void (void);
void Destroy(void);
void LoadSceneMemory(void);
void ReadBrushChunk(void);
void ReadCollisionChunk(void);
void FindGrid(void);
void MoveObject(void);
void PlaceObject(void);
void RemoveObject(void);
void AddPoint(void);
void RemovePoint(void);
void AddCollisionBox(void);
void RemoveCollisionBox(void);
void GetNearestPoint(void);
void GetExactNearestObject(void);
void GetExactNearestObject(void);
void GetSortedNearestObject(void);
void GetNearestObject(void);
void GetNearestObject(void);
void GetIntersectingBox(void);
void GetIntersectingBoxes(void);
void MoveObject(void);
void MoveObject(void);
void RayTrace(void);
void ClearCollisionCache(void);
void GetMemoryUsedByScene(void);
void (void);
void Letext(void);
void (void);
void (void);
void GetNormal(void);
void SetScale(void);
void AddTranslate(void);
void VecMultiplyMat3x3(void);
void (void);
void (void);
void (void);
void (void);
void Destroy(void);
void Resize(void);
void SetDestroy(void);
void SetDestroy(void);
void SetMaxFreeCount(void);
void AddTail(void);
void Delete(void);
void AddTail(void);
void Delete(void);
void GetHead(void);
void GetCurrent(void);
void GetNext(void);
void GetHead(void);
void GetCurrent(void);
void GetNext(void);
void Clear(void);
void Clear(void);
void Clear(void);
void Add(void);
void GetCount(void);
void GetSize(void);
void (void);
void Add(void);
void GetCount(void);
void GetCount(void);
void (void);
void GetArray(void);
void GetSize(void);
void GetFreeCount(void);
void GetCount(void);
void (void);
void (void);
void (void);
void (void);
void Find(void);
void Delete(void);
void (void);
void Find(void);
void Delete(void);
void Clear(void);
void Clear(void);
void RayBoxIntersection(void);
void (void);
void Destroy(void);
void ReadQuad(void);
void LoadTerrain(void);
void ReadTerrainChunk(void);
void LoadSceneMemory(void);
void AddPoint(void);
void RemovePoint(void);
void AddCollisionBox(void);
void RemoveCollisionBox(void);
void MoveObject(void);
void PlaceObject(void);
void RemoveObject(void);
void GetNearestPoint(void);
void GetExactNearestObject(void);
void GetExactNearestObject(void);
void GetSortedNearestObject(void);
void GetNearestObject(void);
void GetNearestObject(void);
void GetIntersectingBox(void);
void GetIntersectingBoxes(void);
void MoveObject(void);
void FindGrid(void);
void MoveObject(void);
void GetRealHeight(void);
void RayTrace(void);
void GetFaces(void);
void ClearCollisionCache(void);
void GetMemoryUsedByScene(void);
void (void);
void Letext(void);
void (void);
void (void);
void (void);
void VKY_CharSorter0(void);
void VKY_CharSorter1(void);
void VKY_CharSorter2(void);
void VKY_CharSorter3(void);
void VKY_CharSorter4(void);
void VKY_CharSorter5(void);
void VKY_CharSorter6(void);
void VKY_CharSorter7(void);
void LoadPCTypeList(void);
void LoadNPCTypeList(void);
void LoadCharacterCollisionBoxList(void);
void (void);
void Destroy(void);
void CreateObject(void);
void DeleteObject(void);
void GetPCObject(void);
void GetNPCObject(void);
void GetObject(void);
void GetSObject(void);
void FindObject(void);
void FindObjectInScene(void);
void ChangeObjectPos(void);
void ReadModelChunk(void);
void IsObjectWithinBoundary(void);
void ReadBoxChunk(void);
void ReadBoundingBoxChunk(void);
void ReadWayPointNetChunk(void);
void ReadPointChunk(void);
void LoadScene(void);
void ReadWaypointdata(void);
void OrganisedModel(void);
void GetMemoryUsed(void);
void CheckTargetable(void);
void CheckScene(void);
void LoadFile(void);
void (void);
void Letext(void);
void (void);
void (void);
void (void);
void (void);
void (void);
void (void);
void GetSceneType(void);
void GetSceneID(void);
void IsLoaded(void);
void GetFileHeader(void);
void SetSharedData(void);
void GetSceneName(void);
void GetPCObject(void);
void GetNPCList(void);
void GetObjectList(void);
void GetSObjectList(void);
void GetUserRelicList(void);
void GetPoints(void);
void GetPointCount(void);
void GetWayPointNetID(void);
void GetWayPointNetIDCount(void);
void (void);
void Clear(void);
void (void);
void Clear(void);
void PreAlloc(void);
void PreAlloc(void);
void PreAlloc(void);
void Get(void);
void Get(void);
void Add(void);
void Add(void);
void GetCount(void);
void GetCount(void);
void (void);
void (void);
void (void);
void (void);
void (void);
void DoCaching(void);
void CacheFace(void);
void (void);
void Destroy(void);
void Flush(void);
void Init(void);
void CacheAABBFace(void);
void CacheFace(void);
void (void);
void Destroy(void);
void Init(void);
void Flush(void);
void (void);
void Letext(void);
void (void);
void (void);
void (void);
void AddBBoxToCollisionList(void);
void DoCollisionCheck(void);
void CheckCollision(void);
void GetCollisionSet(void);
void (void);
void Letext(void);
void FastAbs(void);
void (void);
void (void);
void (void);
void (void);
void (void);
void Resize(void);
void Resize(void);
void GetCurrent(void);
void GetCount(void);
void (void);
void (void);
void (void);
void Destroy(void);
void Destroy(void);
void (void);
void ReadPCChunk(void);
void ReadNPCChunk(void);
void ReadFile(void);
void (void);
void Letext(void);
void Reset(void);
void (void);
void AddTail(void);
void GetCount(void);
void GetCurrent(void);
void GetNext(void);
void Clear(void);
void (void);
void (void);
void FindEntity(void);
void InsertEntity(void);
void RemoveEntity(void);
void Letext(void);
void (void);
void SetDestroy(void);
void GetHead(void);
void Delete(void);
void AddTail(void);
void Clear(void);
void (void);
void ReadNPCChunk(void);
void ReadFile(void);
void (void);
void Letext(void);
void Reset(void);
void (void);
void AddTail(void);
void GetCount(void);
void GetCurrent(void);
void GetNext(void);
void Clear(void);
void (void);
void (void);
void Destroy(void);
void ReadStringChunk(void);
void ReadPCChunk(void);
void ReadFile(void);
void (void);
void Letext(void);
void Reset(void);
void (void);
void AddTail(void);
void GetCount(void);
void GetCurrent(void);
void GetNext(void);
void Clear(void);
void (void);
void GEN_CheckForComment(void);
void GEN_GetLine(void);
void GEN_GetToken(void);
void GEN_GetTokenCount(void);
void GEN_GetFileName(void);
void GEN_GetFilePath(void);
void GEN_GetFileExt(void);
void GEN_ChangeFileExt(void);
void GEN_CheckStringIsNumeric(void);
void ConvertSecToTime(void);
void Letext(void);
void Quaternions(void);
void (void);
void GetTranspose(void);
void Determinant(void);
void Adjoint(void);
void GetInverse(void);
void GetInverse3x3(void);
void SetRotateX(void);
void SetRotateY(void);
void SetRotateZ(void);
void SetRotate(void);
void MakeRotationFromRightDir(void);
void MakeRotationFromRightDir(void);
void MakeRotationFromDirUp(void);
void MakeRotationFromDirUp(void);
void MakeRotationFromUpRight(void);
void MakeRotationMatrixFromUpRight(void);
void MakeRotation(void);
void MakeRotation(void);
void Normalize3x3Vectors(void);
void (void);
void (void);
void (void);
void MatrixMultiply(void);
void MatrixMultiply3x3(void);
void PreScaleMatrix(void);
void PostScaleMatrix(void);
void PreTranslateMatrix(void);
void PostTranslateMatrix(void);
void ExtractRotation(void);
void ExtractRotation(void);
void (void);
void maths_RayPlaneIntersection(void);
void maths_CheckPointInTriangle(void);
void maths_ClosestPointOnLine(void);
void maths_ClosestPointOnTriangle(void);
void maths_RaySphereIntersection(void);
void maths_RayOBBIntersection(void);
void maths_RayBoxIntersection(void);
void maths_RayTriangleIntersect(void);
void maths_GetTriangleData(void);
void maths_RayTriangleIntersect(void);
void maths_SphereEdgeIntersection(void);
void maths_TriangleSphereTest(void);
void maths_SphereTriangleIntersectionTest(void);
void (void);
void FastSin(void);
void FastCos(void);
void FastSqrt(void);
void InverseSqrt(void);
void rsqrtinit(void);
void sqrtinit(void);
void maths_SinTableInit(void);
void maths_InitTable(void);
void (void);
void maths_OBBIntersect(void);
void maths_AABOBBIntersect(void);
void maths_AABBIntersect(void);
void maths_PlaneIntersectOBB(void);
void maths_FindVMaxDistanceofPlaneAndOBB(void);
void maths_OBBTriangleIntersect(void);
void maths_AABBSphereIntersect(void);
void maths_GeneratePlanesFromOBB(void);
void maths_GetPointsFromOBB(void);
void (void);
void (void);
void (void);
void init_dummy(void);

/* ============================================================================
 * Function Implementations
 * ============================================================================ */

/* Function: _init
 * Address: 0x0804a6c0
 * Size: 13 instructions */
void _init(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _init+0xc() */
    /* - call_gmon_start() */
    /* - frame_dummy() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: .plt
 * Address: 0x0804a6e8
 * Size: 3 instructions */
void .plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: asinf@plt
 * Address: 0x0804a6f8
 * Size: 3 instructions */
void asinf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_attr_init@plt
 * Address: 0x0804a708
 * Size: 3 instructions */
void pthread_attr_init@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: atol@plt
 * Address: 0x0804a718
 * Size: 3 instructions */
void atol@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: cos@plt
 * Address: 0x0804a728
 * Size: 3 instructions */
void cos@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_attr_setdetachstate@plt
 * Address: 0x0804a738
 * Size: 3 instructions */
void pthread_attr_setdetachstate@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_real_escape_string@plt
 * Address: 0x0804a748
 * Size: 3 instructions */
void mysql_real_escape_string@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_store_result@plt
 * Address: 0x0804a758
 * Size: 3 instructions */
void mysql_store_result@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __strtod_internal@plt
 * Address: 0x0804a768
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: rename@plt
 * Address: 0x0804a778
 * Size: 3 instructions */
void rename@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_fetch_row@plt
 * Address: 0x0804a788
 * Size: 3 instructions */
void mysql_fetch_row@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ferror@plt
 * Address: 0x0804a798
 * Size: 3 instructions */
void ferror@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: sigaction@plt
 * Address: 0x0804a7a8
 * Size: 3 instructions */
void sigaction@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strncat@plt
 * Address: 0x0804a7b8
 * Size: 3 instructions */
void strncat@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strchr@plt
 * Address: 0x0804a7c8
 * Size: 3 instructions */
void strchr@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: feof@plt
 * Address: 0x0804a7d8
 * Size: 3 instructions */
void feof@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_affected_rows@plt
 * Address: 0x0804a7e8
 * Size: 3 instructions */
void mysql_affected_rows@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ungetc@plt
 * Address: 0x0804a7f8
 * Size: 3 instructions */
void ungetc@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getpid@plt
 * Address: 0x0804a808
 * Size: 3 instructions */
void getpid@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: nanosleep@plt
 * Address: 0x0804a818
 * Size: 3 instructions */
void nanosleep@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_insert_id@plt
 * Address: 0x0804a828
 * Size: 3 instructions */
void mysql_insert_id@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: PEM_read_bio_RSAPrivateKey@plt
 * Address: 0x0804a838
 * Size: 3 instructions */
void PEM_read_bio_RSAPrivateKey@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_init@plt
 * Address: 0x0804a848
 * Size: 3 instructions */
void mysql_init@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: write@plt
 * Address: 0x0804a858
 * Size: 3 instructions */
void write@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: localtime@plt
 * Address: 0x0804a868
 * Size: 3 instructions */
void localtime@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __write@plt
 * Address: 0x0804a878
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: recvfrom@plt
 * Address: 0x0804a888
 * Size: 3 instructions */
void recvfrom@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strcmp@plt
 * Address: 0x0804a898
 * Size: 3 instructions */
void strcmp@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: log10@plt
 * Address: 0x0804a8a8
 * Size: 3 instructions */
void log10@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: close@plt
 * Address: 0x0804a8b8
 * Size: 3 instructions */
void close@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: asin@plt
 * Address: 0x0804a8c8
 * Size: 3 instructions */
void asin@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: perror@plt
 * Address: 0x0804a8d8
 * Size: 3 instructions */
void perror@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fprintf@plt
 * Address: 0x0804a8e8
 * Size: 3 instructions */
void fprintf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: tmpfile@plt
 * Address: 0x0804a8f8
 * Size: 3 instructions */
void tmpfile@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fork@plt
 * Address: 0x0804a908
 * Size: 3 instructions */
void fork@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getenv@plt
 * Address: 0x0804a918
 * Size: 3 instructions */
void getenv@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: umask@plt
 * Address: 0x0804a928
 * Size: 3 instructions */
void umask@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: signal@plt
 * Address: 0x0804a938
 * Size: 3 instructions */
void signal@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fmod@plt
 * Address: 0x0804a948
 * Size: 3 instructions */
void fmod@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fflush@plt
 * Address: 0x0804a958
 * Size: 3 instructions */
void fflush@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pclose@plt
 * Address: 0x0804a968
 * Size: 3 instructions */
void pclose@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_create@plt
 * Address: 0x0804a978
 * Size: 3 instructions */
void pthread_create@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: unlink@plt
 * Address: 0x0804a988
 * Size: 3 instructions */
void unlink@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: OpenSSL_add_all_algorithms@plt
 * Address: 0x0804a998
 * Size: 3 instructions */
void OpenSSL_add_all_algorithms@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: clock@plt
 * Address: 0x0804a9a8
 * Size: 3 instructions */
void clock@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: frexp@plt
 * Address: 0x0804a9b8
 * Size: 3 instructions */
void frexp@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: select@plt
 * Address: 0x0804a9c8
 * Size: 3 instructions */
void select@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: htonl@plt
 * Address: 0x0804a9d8
 * Size: 3 instructions */
void htonl@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __assert_fail@plt
 * Address: 0x0804a9e8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: BIO_s_file@plt
 * Address: 0x0804a9f8
 * Size: 3 instructions */
void BIO_s_file@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: vsnprintf@plt
 * Address: 0x0804aa08
 * Size: 3 instructions */
void vsnprintf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strerror@plt
 * Address: 0x0804aa18
 * Size: 3 instructions */
void strerror@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: setlocale@plt
 * Address: 0x0804aa28
 * Size: 3 instructions */
void setlocale@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __rtti_user@plt
 * Address: 0x0804aa38
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __errno_location@plt
 * Address: 0x0804aa48
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: pow@plt
 * Address: 0x0804aa58
 * Size: 3 instructions */
void pow@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: rewind@plt
 * Address: 0x0804aa68
 * Size: 3 instructions */
void rewind@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: memchr@plt
 * Address: 0x0804aa78
 * Size: 3 instructions */
void memchr@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ftell@plt
 * Address: 0x0804aa88
 * Size: 3 instructions */
void ftell@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __umoddi3@plt
 * Address: 0x0804aa98
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: BIO_printf@plt
 * Address: 0x0804aaa8
 * Size: 3 instructions */
void BIO_printf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: system@plt
 * Address: 0x0804aab8
 * Size: 3 instructions */
void system@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __rtti_si@plt
 * Address: 0x0804aac8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: shutdown@plt
 * Address: 0x0804aad8
 * Size: 3 instructions */
void shutdown@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: popen@plt
 * Address: 0x0804aae8
 * Size: 3 instructions */
void popen@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __check_eh_spec@plt
 * Address: 0x0804aaf8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: mkfifo@plt
 * Address: 0x0804ab08
 * Size: 3 instructions */
void mkfifo@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: div@plt
 * Address: 0x0804ab18
 * Size: 3 instructions */
void div@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: difftime@plt
 * Address: 0x0804ab28
 * Size: 3 instructions */
void difftime@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ftime@plt
 * Address: 0x0804ab38
 * Size: 3 instructions */
void ftime@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: malloc@plt
 * Address: 0x0804ab48
 * Size: 3 instructions */
void malloc@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: BUF_MEM_new@plt
 * Address: 0x0804ab58
 * Size: 3 instructions */
void BUF_MEM_new@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: setsid@plt
 * Address: 0x0804ab68
 * Size: 3 instructions */
void setsid@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_mutex_init@plt
 * Address: 0x0804ab78
 * Size: 3 instructions */
void pthread_mutex_init@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fscanf@plt
 * Address: 0x0804ab88
 * Size: 3 instructions */
void fscanf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strftime@plt
 * Address: 0x0804ab98
 * Size: 3 instructions */
void strftime@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: BIO_free@plt
 * Address: 0x0804aba8
 * Size: 3 instructions */
void BIO_free@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fread@plt
 * Address: 0x0804abb8
 * Size: 3 instructions */
void fread@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: memmove@plt
 * Address: 0x0804abc8
 * Size: 3 instructions */
void memmove@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: sendto@plt
 * Address: 0x0804abd8
 * Size: 3 instructions */
void sendto@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ERR_load_PEM_strings@plt
 * Address: 0x0804abe8
 * Size: 3 instructions */
void ERR_load_PEM_strings@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __throw@plt
 * Address: 0x0804abf8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: remove@plt
 * Address: 0x0804ac08
 * Size: 3 instructions */
void remove@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strpbrk@plt
 * Address: 0x0804ac18
 * Size: 3 instructions */
void strpbrk@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: BIO_ctrl@plt
 * Address: 0x0804ac28
 * Size: 3 instructions */
void BIO_ctrl@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: RSA_private_decrypt@plt
 * Address: 0x0804ac38
 * Size: 3 instructions */
void RSA_private_decrypt@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: syslog@plt
 * Address: 0x0804ac48
 * Size: 3 instructions */
void syslog@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __deregister_frame_info@plt
 * Address: 0x0804ac58
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: ERR_print_errors_fp@plt
 * Address: 0x0804ac68
 * Size: 3 instructions */
void ERR_print_errors_fp@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: terminate__Fv@plt
 * Address: 0x0804ac78
 * Size: 3 instructions */
void terminate(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_rwlock_rdlock@plt
 * Address: 0x0804ac88
 * Size: 3 instructions */
void pthread_rwlock_rdlock@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: setsockopt@plt
 * Address: 0x0804ac98
 * Size: 3 instructions */
void setsockopt@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: inet_aton@plt
 * Address: 0x0804aca8
 * Size: 3 instructions */
void inet_aton@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_close@plt
 * Address: 0x0804acb8
 * Size: 3 instructions */
void mysql_close@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fseek@plt
 * Address: 0x0804acc8
 * Size: 3 instructions */
void fseek@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_num_rows@plt
 * Address: 0x0804acd8
 * Size: 3 instructions */
void mysql_num_rows@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: time@plt
 * Address: 0x0804ace8
 * Size: 3 instructions */
void time@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mktime@plt
 * Address: 0x0804acf8
 * Size: 3 instructions */
void mktime@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: BIO_new@plt
 * Address: 0x0804ad08
 * Size: 3 instructions */
void BIO_new@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_mutex_lock@plt
 * Address: 0x0804ad18
 * Size: 3 instructions */
void pthread_mutex_lock@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fgets@plt
 * Address: 0x0804ad28
 * Size: 3 instructions */
void fgets@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ntohs@plt
 * Address: 0x0804ad38
 * Size: 3 instructions */
void ntohs@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: chdir@plt
 * Address: 0x0804ad48
 * Size: 3 instructions */
void chdir@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fputs@plt
 * Address: 0x0804ad58
 * Size: 3 instructions */
void fputs@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: finite@plt
 * Address: 0x0804ad68
 * Size: 3 instructions */
void finite@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_errno@plt
 * Address: 0x0804ad78
 * Size: 3 instructions */
void mysql_errno@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strstr@plt
 * Address: 0x0804ad88
 * Size: 3 instructions */
void strstr@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strlen@plt
 * Address: 0x0804ad98
 * Size: 3 instructions */
void strlen@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: longjmp@plt
 * Address: 0x0804ada8
 * Size: 3 instructions */
void longjmp@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: sleep@plt
 * Address: 0x0804adb8
 * Size: 3 instructions */
void sleep@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __start_cp_handler@plt
 * Address: 0x0804adc8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: strcspn@plt
 * Address: 0x0804add8
 * Size: 3 instructions */
void strcspn@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: RSA_public_encrypt@plt
 * Address: 0x0804ade8
 * Size: 3 instructions */
void RSA_public_encrypt@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: qsort@plt
 * Address: 0x0804adf8
 * Size: 3 instructions */
void qsort@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_rwlock_init@plt
 * Address: 0x0804ae08
 * Size: 3 instructions */
void pthread_rwlock_init@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: atof@plt
 * Address: 0x0804ae18
 * Size: 3 instructions */
void atof@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: atan2@plt
 * Address: 0x0804ae28
 * Size: 3 instructions */
void atan2@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ftruncate@plt
 * Address: 0x0804ae38
 * Size: 3 instructions */
void ftruncate@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: openlog@plt
 * Address: 0x0804ae48
 * Size: 3 instructions */
void openlog@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: inet_addr@plt
 * Address: 0x0804ae58
 * Size: 3 instructions */
void inet_addr@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: floor@plt
 * Address: 0x0804ae68
 * Size: 3 instructions */
void floor@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: memcmp@plt
 * Address: 0x0804ae78
 * Size: 3 instructions */
void memcmp@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_real_query@plt
 * Address: 0x0804ae88
 * Size: 3 instructions */
void mysql_real_query@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __cp_pop_exception@plt
 * Address: 0x0804ae98
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __libc_start_main@plt
 * Address: 0x0804aea8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: floorf@plt
 * Address: 0x0804aeb8
 * Size: 3 instructions */
void floorf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: exp@plt
 * Address: 0x0804aec8
 * Size: 3 instructions */
void exp@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_error@plt
 * Address: 0x0804aed8
 * Size: 3 instructions */
void mysql_error@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: localtime_r@plt
 * Address: 0x0804aee8
 * Size: 3 instructions */
void localtime_r@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: toupper@plt
 * Address: 0x0804aef8
 * Size: 3 instructions */
void toupper@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: realloc@plt
 * Address: 0x0804af08
 * Size: 3 instructions */
void realloc@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strcat@plt
 * Address: 0x0804af18
 * Size: 3 instructions */
void strcat@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: tan@plt
 * Address: 0x0804af28
 * Size: 3 instructions */
void tan@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_attr_destroy@plt
 * Address: 0x0804af38
 * Size: 3 instructions */
void pthread_attr_destroy@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __builtin_vec_new@plt
 * Address: 0x0804af48
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: printf@plt
 * Address: 0x0804af58
 * Size: 3 instructions */
void printf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: bind@plt
 * Address: 0x0804af68
 * Size: 3 instructions */
void bind@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fcntl@plt
 * Address: 0x0804af78
 * Size: 3 instructions */
void fcntl@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: memcpy@plt
 * Address: 0x0804af88
 * Size: 3 instructions */
void memcpy@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: sqrt@plt
 * Address: 0x0804af98
 * Size: 3 instructions */
void sqrt@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_free_result@plt
 * Address: 0x0804afa8
 * Size: 3 instructions */
void mysql_free_result@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fclose@plt
 * Address: 0x0804afb8
 * Size: 3 instructions */
void fclose@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getsockname@plt
 * Address: 0x0804afc8
 * Size: 3 instructions */
void getsockname@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: gethostbyname_r@plt
 * Address: 0x0804afd8
 * Size: 3 instructions */
void gethostbyname_r@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: gettimeofday@plt
 * Address: 0x0804afe8
 * Size: 3 instructions */
void gettimeofday@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: srand@plt
 * Address: 0x0804aff8
 * Size: 3 instructions */
void srand@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strcoll@plt
 * Address: 0x0804b008
 * Size: 3 instructions */
void strcoll@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: gethostname@plt
 * Address: 0x0804b018
 * Size: 3 instructions */
void gethostname@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: open@plt
 * Address: 0x0804b028
 * Size: 3 instructions */
void open@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_rwlock_wrlock@plt
 * Address: 0x0804b038
 * Size: 3 instructions */
void pthread_rwlock_wrlock@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: gethostbyname@plt
 * Address: 0x0804b048
 * Size: 3 instructions */
void gethostbyname@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strcasecmp@plt
 * Address: 0x0804b058
 * Size: 3 instructions */
void strcasecmp@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_exit@plt
 * Address: 0x0804b068
 * Size: 3 instructions */
void pthread_exit@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: exit@plt
 * Address: 0x0804b078
 * Size: 3 instructions */
void exit@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __builtin_vec_delete@plt
 * Address: 0x0804b088
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: atoi@plt
 * Address: 0x0804b098
 * Size: 3 instructions */
void atoi@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: gmtime@plt
 * Address: 0x0804b0a8
 * Size: 3 instructions */
void gmtime@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: free@plt
 * Address: 0x0804b0b8
 * Size: 3 instructions */
void free@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: send@plt
 * Address: 0x0804b0c8
 * Size: 3 instructions */
void send@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ERR_print_errors@plt
 * Address: 0x0804b0d8
 * Size: 3 instructions */
void ERR_print_errors@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: htons@plt
 * Address: 0x0804b0e8
 * Size: 3 instructions */
void htons@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strtoul@plt
 * Address: 0x0804b0f8
 * Size: 3 instructions */
void strtoul@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getcwd@plt
 * Address: 0x0804b108
 * Size: 3 instructions */
void getcwd@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: acos@plt
 * Address: 0x0804b118
 * Size: 3 instructions */
void acos@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: memset@plt
 * Address: 0x0804b128
 * Size: 3 instructions */
void memset@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: BIO_s_mem@plt
 * Address: 0x0804b138
 * Size: 3 instructions */
void BIO_s_mem@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: connect@plt
 * Address: 0x0804b148
 * Size: 3 instructions */
void connect@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_real_connect@plt
 * Address: 0x0804b158
 * Size: 3 instructions */
void mysql_real_connect@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strtod@plt
 * Address: 0x0804b168
 * Size: 3 instructions */
void strtod@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strncpy@plt
 * Address: 0x0804b178
 * Size: 3 instructions */
void strncpy@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __rtti_class@plt
 * Address: 0x0804b188
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: fopen@plt
 * Address: 0x0804b198
 * Size: 3 instructions */
void fopen@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: dup@plt
 * Address: 0x0804b1a8
 * Size: 3 instructions */
void dup@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _setjmp@plt
 * Address: 0x0804b1b8
 * Size: 3 instructions */
void _setjmp@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __strtoul_internal@plt
 * Address: 0x0804b1c8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __builtin_delete@plt
 * Address: 0x0804b1d8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_mutex_unlock@plt
 * Address: 0x0804b1e8
 * Size: 3 instructions */
void pthread_mutex_unlock@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __terminate@plt
 * Address: 0x0804b1f8
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __builtin_new@plt
 * Address: 0x0804b208
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: strtok@plt
 * Address: 0x0804b218
 * Size: 3 instructions */
void strtok@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: PEM_read_bio_RSA_PUBKEY@plt
 * Address: 0x0804b228
 * Size: 3 instructions */
void PEM_read_bio_RSA_PUBKEY@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ctime_r@plt
 * Address: 0x0804b238
 * Size: 3 instructions */
void ctime_r@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: pthread_rwlock_unlock@plt
 * Address: 0x0804b248
 * Size: 3 instructions */
void pthread_rwlock_unlock@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ERR_load_crypto_strings@plt
 * Address: 0x0804b258
 * Size: 3 instructions */
void ERR_load_crypto_strings@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getrlimit@plt
 * Address: 0x0804b268
 * Size: 3 instructions */
void getrlimit@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: recv@plt
 * Address: 0x0804b278
 * Size: 3 instructions */
void recv@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: sprintf@plt
 * Address: 0x0804b288
 * Size: 3 instructions */
void sprintf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: fwrite@plt
 * Address: 0x0804b298
 * Size: 3 instructions */
void fwrite@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: sin@plt
 * Address: 0x0804b2a8
 * Size: 3 instructions */
void sin@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: socket@plt
 * Address: 0x0804b2b8
 * Size: 3 instructions */
void socket@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: RSA_size@plt
 * Address: 0x0804b2c8
 * Size: 3 instructions */
void RSA_size@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _IO_getc@plt
 * Address: 0x0804b2d8
 * Size: 3 instructions */
void _IO_getc@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: modf@plt
 * Address: 0x0804b2e8
 * Size: 3 instructions */
void modf@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: rand@plt
 * Address: 0x0804b2f8
 * Size: 3 instructions */
void rand@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: log@plt
 * Address: 0x0804b308
 * Size: 3 instructions */
void log@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __register_frame_info@plt
 * Address: 0x0804b318
 * Size: 3 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: read@plt
 * Address: 0x0804b328
 * Size: 3 instructions */
void read@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mysql_fetch_lengths@plt
 * Address: 0x0804b338
 * Size: 3 instructions */
void mysql_fetch_lengths@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ceil@plt
 * Address: 0x0804b348
 * Size: 3 instructions */
void ceil@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: strcpy@plt
 * Address: 0x0804b358
 * Size: 3 instructions */
void strcpy@plt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _start
 * Address: 0x0804b370
 * Size: 15 instructions */
void _start(void) {
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __do_global_dtors_aux
 * Address: 0x0804b3c0
 * Size: 25 instructions */
void (void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: fini_dummy
 * Address: 0x0804b410
 * Size: 5 instructions */
void fini_dummy(void) {
    /* Stack: 8 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: init_dummy
 * Address: 0x0804b43c
 * Size: 7 instructions */
void init_dummy(void) {
    /* Stack: 8 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: main
 * Address: 0x0804b450
 * Size: 66 instructions */
void main(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - SetPriorityLevel() */
    /* - sigaction@plt() */
    /* - LoadConfig() */
    /* - fprintf@plt() */
    /* - exit@plt() */
    /* - daemon_init() */
    /* - CheckOnlyCopy() */
    /* - Startup() */
    /* - Process() */
    /* TODO: Implement from disassembly */
}

/* Function: ExitHandler__Fi
 * Address: 0x0804b538
 * Size: 13 instructions */
void ExitHandler(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - printf@plt() */
    /* - Shutdown() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadConfig__FPc
 * Address: 0x0804b560
 * Size: 926 instructions */
void LoadConfig(void) {
    /* Stack: 7168 bytes */
    /* Calls: */
    /* - strcpy@plt() */
    /* - fopen@plt() */
    /* - fgets@plt() */
    /* - strtok@plt() */
    /* - strcmp@plt() */
    /* - atoi@plt() */
    /* - toupper@plt() */
    /* - SetPriorityLevel() */
    /* - SetLogFile() */
    /* - atol@plt() */
    /* - strcpyup() */
    /* - SetOutput() */
    /* - SetProgName() */
    /* - strncpy@plt() */
    /* - strlen@plt() */
    /* - strcat@plt() */
    /* - fclose@plt() */
    /* - fprintf@plt() */
    /* - exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: strcpyup__FPcT0
 * Address: 0x0804c2fc
 * Size: 37 instructions */
void strcpyup(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - toupper@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: daemon_init__Fv
 * Address: 0x0804c358
 * Size: 116 instructions */
void daemon_init(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - CheckOnlyCopy() */
    /* - fork@plt() */
    /* - exit@plt() */
    /* - getrlimit@plt() */
    /* - printf@plt() */
    /* - close@plt() */
    /* - setsid@plt() */
    /* - umask@plt() */
    /* - open@plt() */
    /* - dup@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckOnlyCopy__Fv
 * Address: 0x0804c4d4
 * Size: 149 instructions */
void CheckOnlyCopy(void) {
    /* Stack: 116 bytes */
    /* Calls: */
    /* - open@plt() */
    /* - printf@plt() */
    /* - exit@plt() */
    /* - fcntl@plt() */
    /* - () */
    /* - ftruncate@plt() */
    /* - getpid@plt() */
    /* - sprintf@plt() */
    /* - strlen@plt() */
    /* - write@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0804c752
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __7CMatrixi
 * Address: 0x0804c760
 * Size: 27 instructions */
void (void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - SetIdentity() */
    /* - ClearMatrix() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearMatrix__7CMatrix
 * Address: 0x0804c7a0
 * Size: 15 instructions */
void ClearMatrix(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIdentity__7CMatrix
 * Address: 0x0804c7c0
 * Size: 28 instructions */
void SetIdentity(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __6CTimer
 * Address: 0x0804c800
 * Size: 17 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Restart() */
    /* TODO: Implement from disassembly */
}

/* Function: Restart__6CTimer
 * Address: 0x0804c82c
 * Size: 15 instructions */
void Restart(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - time@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetInterval__6CTimerUl
 * Address: 0x0804c858
 * Size: 15 instructions */
void SetInterval(void) {
    /* TODO: Implement from disassembly */
}

/* Function: StartTimer__6CTimer
 * Address: 0x0804c87c
 * Size: 14 instructions */
void StartTimer(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: StopTimer__6CTimer
 * Address: 0x0804c89c
 * Size: 53 instructions */
void StopTimer(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* - time@plt() */
    /* - difftime@plt() */
    /* - OutputLog() */
    /* - Restart() */
    /* TODO: Implement from disassembly */
}

/* Function: OutputLog__6CTimer
 * Address: 0x0804c924
 * Size: 77 instructions */
void OutputLog(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - ctime_r@plt() */
    /* - strlen@plt() */
    /* - fopen@plt() */
    /* - fprintf@plt() */
    /* - fclose@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTickCount__6CTimer
 * Address: 0x0804ca20
 * Size: 64 instructions */
void GetTickCount(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - gettimeofday@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0804cacd
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ReadFromQueue__FPv
 * Address: 0x0804cad0
 * Size: 101 instructions */
void ReadFromQueue(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - printf@plt() */
    /* - WriteStruct() */
    /* - Reconnect() */
    /* - nanosleep@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: __11FWLogClient
 * Address: 0x0804cc48
 * Size: 19 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - signal@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetLog__11FWLogClientPv
 * Address: 0x0804cc7c
 * Size: 8 instructions */
void SetLog(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Init__11FWLogClientPc
 * Address: 0x0804cc8c
 * Size: 68 instructions */
void Init(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - strcpy@plt() */
    /* - Reconnect() */
    /* - pthread_mutex_init@plt() */
    /* - WriteStruct() */
    /* - pthread_create@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: IsValid__11FWLogClient
 * Address: 0x0804cd68
 * Size: 9 instructions */
void IsValid(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._11FWLogClient
 * Address: 0x0804cd78
 * Size: 24 instructions */
void _._11FWLogClient(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - close@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: WriteToQueue__11FWLogClientR13_stLogMessage
 * Address: 0x0804cdb8
 * Size: 67 instructions */
void WriteToQueue(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - Log() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CharLog__11FWLogClientR13_stLogMessage
 * Address: 0x0804ce90
 * Size: 15 instructions */
void CharLog(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - WriteToQueue() */
    /* TODO: Implement from disassembly */
}

/* Function: Reconnect__11FWLogClient
 * Address: 0x0804ceb0
 * Size: 119 instructions */
void Reconnect(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Log() */
    /* - socket@plt() */
    /* - memset@plt() */
    /* - htons@plt() */
    /* - inet_aton@plt() */
    /* - close@plt() */
    /* - connect@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: WriteStruct__11FWLogClientPCvUi
 * Address: 0x0804d008
 * Size: 75 instructions */
void WriteStruct(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - write@plt() */
    /* - () */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0804d122
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __9CCommsMgr
 * Address: 0x0804d130
 * Size: 54 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RegisterModule() */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: _._9CCommsMgr
 * Address: 0x0804d1ec
 * Size: 64 instructions */
void _._9CCommsMgr(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _._8CTaskMgr() */
    /* - _._9CDBAccess() */
    /* - shutdown@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Init2__9CCommsMgrP12_ProcCtrlBlk
 * Address: 0x0804d2b8
 * Size: 146 instructions */
void Init2(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - socket@plt() */
    /* - setsockopt@plt() */
    /* - memset@plt() */
    /* - htonl@plt() */
    /* - htons@plt() */
    /* - bind@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Init__9CCommsMgrP12_ProcCtrlBlk
 * Address: 0x0804d480
 * Size: 248 instructions */
void Init(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - strncpy@plt() */
    /* - memset@plt() */
    /* - inet_addr@plt() */
    /* - htons@plt() */
    /* - htonl@plt() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - Log() */
    /* - pthread_mutex_init@plt() */
    /* - strcpy@plt() */
    /* - () */
    /* - GetProcessID() */
    /* - Init() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Process__9CCommsMgr
 * Address: 0x0804d770
 * Size: 99 instructions */
void Process(void) {
    /* Stack: 1684 bytes */
    /* Calls: */
    /* - recvfrom@plt() */
    /* - Authenticate() */
    /* - SelectSession() */
    /* - AddConnection() */
    /* - Log() */
    /* - inet_ntoa_safe() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: ProcessWS__9CCommsMgr
 * Address: 0x0804d8c0
 * Size: 64 instructions */
void ProcessWS(void) {
    /* Stack: 1588 bytes */
    /* Calls: */
    /* - recvfrom@plt() */
    /* - ExecuteInternal() */
    /* TODO: Implement from disassembly */
}

/* Function: AddSession__9CCommsMgrP8CSession
 * Address: 0x0804d990
 * Size: 66 instructions */
void AddSession(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - inet_addr@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Shutdown__9CCommsMgr
 * Address: 0x0804da64
 * Size: 21 instructions */
void Shutdown(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - shutdown@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Authenticate__9CCommsMgrP19_AuthenticateNetMsgPUl
 * Address: 0x0804daa0
 * Size: 64 instructions */
void Authenticate(void) {
    /* Stack: 100 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FindStart__9CCommsMgr
 * Address: 0x0804db50
 * Size: 149 instructions */
void FindStart(void) {
    /* Stack: 436 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* - FetchNextRow() */
    /* TODO: Implement from disassembly */
}

/* Function: SelectSession__9CCommsMgrP11sockaddr_inUl
 * Address: 0x0804dd5c
 * Size: 59 instructions */
void SelectSession(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FindCharacter() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteAuth__9CCommsMgrUl
 * Address: 0x0804de0c
 * Size: 48 instructions */
void DeleteAuth(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetStatus__9CCommsMgrUlUc
 * Address: 0x0804de8c
 * Size: 128 instructions */
void SetStatus(void) {
    /* Stack: 436 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FindPlayerInWorld__9CCommsMgrUl
 * Address: 0x0804e034
 * Size: 42 instructions */
void FindPlayerInWorld(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNumPlayersInScene__9CCommsMgrUl
 * Address: 0x0804e0a4
 * Size: 42 instructions */
void GetNumPlayersInScene(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: LockOutChar__9CCommsMgrUlUl
 * Address: 0x0804e114
 * Size: 171 instructions */
void LockOutChar(void) {
    /* Stack: 192 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - localtime_r@plt() */
    /* - mktime@plt() */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckCharExists__9CCommsMgrUl
 * Address: 0x0804e350
 * Size: 63 instructions */
void CheckCharExists(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* - FetchNextRow() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckCharInGame__9CCommsMgrUl
 * Address: 0x0804e3f0
 * Size: 63 instructions */
void CheckCharInGame(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* - FetchNextRow() */
    /* TODO: Implement from disassembly */
}

/* Function: PutEvent__9CCommsMgrUlP10_NetObjecti
 * Address: 0x0804e490
 * Size: 37 instructions */
void PutEvent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNumConnects__9CCommsMgr
 * Address: 0x0804e4f0
 * Size: 24 instructions */
void GetNumConnects(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SetChatLog__9CCommsMgrUl
 * Address: 0x0804e53c
 * Size: 46 instructions */
void SetChatLog(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SetChatLog() */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SendWorldController__9CCommsMgrUlUcPv
 * Address: 0x0804e5bc
 * Size: 38 instructions */
void SendWorldController(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SendWorldController() */
    /* TODO: Implement from disassembly */
}

/* Function: DropConnection__9CCommsMgrUl
 * Address: 0x0804e61c
 * Size: 32 instructions */
void DropConnection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DropConnection() */
    /* TODO: Implement from disassembly */
}

/* Function: CloseConnection__9CCommsMgrUl
 * Address: 0x0804e670
 * Size: 35 instructions */
void CloseConnection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - CloseConnection() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivityLog__9CCommsMgri
 * Address: 0x0804e6cc
 * Size: 24 instructions */
void ActivityLog(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SendSysMsg__9CCommsMgrUlUcPvi
 * Address: 0x0804e714
 * Size: 41 instructions */
void SendSysMsg(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SendSysMsg() */
    /* TODO: Implement from disassembly */
}

/* Function: FindCharacter__9CCommsMgrUl
 * Address: 0x0804e780
 * Size: 35 instructions */
void FindCharacter(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FindCharacter() */
    /* TODO: Implement from disassembly */
}

/* Function: Broadcast__9CCommsMgrUsUlUl
 * Address: 0x0804e7dc
 * Size: 35 instructions */
void Broadcast(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - AssignTask() */
    /* TODO: Implement from disassembly */
}

/* Function: LogAllConnections__9CCommsMgrUl
 * Address: 0x0804e854
 * Size: 35 instructions */
void LogAllConnections(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* - Log() */
    /* - LogConnections() */
    /* TODO: Implement from disassembly */
}

/* Function: LogLevel__9CCommsMgri
 * Address: 0x0804e8b8
 * Size: 35 instructions */
void LogLevel(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Log() */
    /* - LogLevel() */
    /* TODO: Implement from disassembly */
}

/* Function: SendWorld__9CCommsMgrUcPvT2i
 * Address: 0x0804e918
 * Size: 320 instructions */
void SendWorld(void) {
    /* Stack: 2084 bytes */
    /* Calls: */
    /* - socket@plt() */
    /* - Log() */
    /* - bind@plt() */
    /* - connect@plt() */
    /* - memcpy@plt() */
    /* - strncpy@plt() */
    /* - send@plt() */
    /* - shutdown@plt() */
    /* - close@plt() */
    /* - recv@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpMemory__9CCommsMgri
 * Address: 0x0804ed48
 * Size: 33 instructions */
void DumpMemory(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DumpMemory() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0804edf2
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __8CProcMgr
 * Address: 0x0804ee00
 * Size: 98 instructions */
void (void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - RegisterModule() */
    /* - gettimeofday@plt() */
    /* - srand@plt() */
    /* - memset@plt() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._8CProcMgr
 * Address: 0x0804ef50
 * Size: 75 instructions */
void _._8CProcMgr(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _._9CCommsMgr() */
    /* - _._9CSceneMgr() */
    /* - _._9CDBAccess() */
    /* - close@plt() */
    /* - unlink@plt() */
    /* - _._5CRC32() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Startup__8CProcMgr
 * Address: 0x0804f030
 * Size: 499 instructions */
void Startup(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - SetLogFile() */
    /* - Log() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - pthread_mutex_init@plt() */
    /* - GetServerConfig() */
    /* - AddProcess() */
    /* - Startup() */
    /* - () */
    /* - Init() */
    /* - () */
    /* - Init() */
    /* - Log() */
    /* - AddSession() */
    /* - Init() */
    /* - CleanupOldConnections() */
    /* - mkfifo@plt() */
    /* - () */
    /* - open@plt() */
    /* - Init2() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: CleanupOldConnections__8CProcMgr
 * Address: 0x0804f658
 * Size: 216 instructions */
void CleanupOldConnections(void) {
    /* Stack: 4436 bytes */
    /* Calls: */
    /* - GetNextScene() */
    /* - GetSceneID() */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - SendWorld() */
    /* - pthread_mutex_unlock@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Process__8CProcMgr
 * Address: 0x0804f98c
 * Size: 246 instructions */
void Process(void) {
    /* Stack: 348 bytes */
    /* Calls: */
    /* - Log() */
    /* - select@plt() */
    /* - read@plt() */
    /* - ProcessCmds() */
    /* - Process() */
    /* - ProcessWS() */
    /* TODO: Implement from disassembly */
}

/* Function: ProcessCmds__8CProcMgr
 * Address: 0x0804fd4c
 * Size: 468 instructions */
void ProcessCmds(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Shutdown() */
    /* - ReloadScripts() */
    /* - ReloadScenes() */
    /* - SetStatus() */
    /* - Log() */
    /* - DumpMemory() */
    /* - MemoryStatus() */
    /* - MemoryStatus() */
    /* - ReloadCategory() */
    /* - PagePurge() */
    /* - DebugNPC() */
    /* - Broadcast() */
    /* - LogAllConnections() */
    /* - LogLevel() */
    /* - SetID() */
    /* - ClearID() */
    /* - ShowWayPoint() */
    /* - ShowMove() */
    /* - HideMove() */
    /* - SetNPCPos() */
    /* - ShowAttackMessage() */
    /* - HideAttackMessage() */
    /* - ShowDestroyMsg() */
    /* - HideDestroyMsg() */
    /* - SetSceneID() */
    /* - CheckSpawnPointStatus() */
    /* - DebugSpawnPt() */
    /* - ReloadAttrib() */
    /* - ClearCollCache() */
    /* - SetSpawnID() */
    /* - ShowSpawn() */
    /* - HideSpawn() */
    /* - SetSpawnPeriod() */
    /* - CascadeSPCheck() */
    /* - ShowAttack() */
    /* - HideAttack() */
    /* - OverrideScanRange() */
    /* - OverrideSuicideRange() */
    /* - OverrideScan() */
    /* - OverrideSuicide() */
    /* - ShowTick() */
    /* - Log() */
    /* - DropConnection() */
    /* - SetChatLog() */
    /* - ActivityLog() */
    /* - ReloadSpawnData() */
    /* - ReloadSpawnDataAll() */
    /* - ReloadNPCDataAll() */
    /* - Debug() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivityLog__8CProcMgri
 * Address: 0x080502ec
 * Size: 99 instructions */
void ActivityLog(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - pthread_mutex_unlock@plt() */
    /* - ActivityLog() */
    /* TODO: Implement from disassembly */
}

/* Function: Shutdown__8CProcMgr
 * Address: 0x08050428
 * Size: 142 instructions */
void Shutdown(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Log() */
    /* - Shutdown() */
    /* - sleep@plt() */
    /* - GetStatus() */
    /* - Remove() */
    /* - () */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: GetServerConfig__8CProcMgr
 * Address: 0x080505ec
 * Size: 306 instructions */
void GetServerConfig(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AddProcess__8CProcMgriPv
 * Address: 0x08050b0c
 * Size: 377 instructions */
void AddProcess(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: SetStatus__8CProcMgrii
 * Address: 0x08050f90
 * Size: 56 instructions */
void SetStatus(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: BlockForStatus__8CProcMgriii
 * Address: 0x08051024
 * Size: 95 instructions */
void BlockForStatus(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetProcCount() */
    /* - time@plt() */
    /* - difftime@plt() */
    /* - GetStatus() */
    /* - sleep@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetProcess__8CProcMgrUi
 * Address: 0x08051128
 * Size: 9 instructions */
void GetProcess(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetProcCount__8CProcMgri
 * Address: 0x08051138
 * Size: 31 instructions */
void GetProcCount(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadScripts__8CProcMgr
 * Address: 0x0805118c
 * Size: 29 instructions */
void ReloadScripts(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SetStatus() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadScenes__8CProcMgr
 * Address: 0x080511d0
 * Size: 127 instructions */
void ReloadScenes(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SetStatus() */
    /* - Log() */
    /* - BlockForStatus() */
    /* - ReloadScenes() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0805137e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __5CProc
 * Address: 0x08051380
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: SendStub__FPv
 * Address: 0x0805139c
 * Size: 18 instructions */
void SendStub(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - SendProcess() */
    /* - pthread_exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RecvStub__FPv
 * Address: 0x080513c8
 * Size: 18 instructions */
void RecvStub(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - RecvProcess() */
    /* - pthread_exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CommsStub__FPv
 * Address: 0x080513f4
 * Size: 19 instructions */
void CommsStub(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - Process() */
    /* - pthread_exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: MemMgrStub__FPv
 * Address: 0x08051424
 * Size: 19 instructions */
void MemMgrStub(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - Process() */
    /* - pthread_exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: EventMgrStub__FPv
 * Address: 0x08051454
 * Size: 19 instructions */
void EventMgrStub(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - Process() */
    /* - pthread_exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AIStub__FPv
 * Address: 0x08051484
 * Size: 19 instructions */
void AIStub(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - Process() */
    /* - pthread_exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Startup__5CProcP12_ProcCtrlBlk
 * Address: 0x080514b4
 * Size: 145 instructions */
void Startup(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - pthread_attr_init@plt() */
    /* - pthread_attr_setdetachstate@plt() */
    /* - Startup() */
    /* - pthread_create@plt() */
    /* - Startup() */
    /* - Startup() */
    /* - Startup() */
    /* - pthread_attr_destroy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetStatus__5CProc
 * Address: 0x0805164c
 * Size: 42 instructions */
void GetStatus(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Remove__5CProc
 * Address: 0x080516c4
 * Size: 78 instructions */
void Remove(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _._8CSession() */
    /* - _._7CMemMgr() */
    /* - _._3CAI() */
    /* - _._9CEventMgr() */
    /* TODO: Implement from disassembly */
}

/* Function: Restart__5CProc
 * Address: 0x08051798
 * Size: 9 instructions */
void Restart(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Shutdown__5CProc
 * Address: 0x080517a8
 * Size: 47 instructions */
void Shutdown(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Shutdown() */
    /* - Shutdown() */
    /* TODO: Implement from disassembly */
}

/* Function: Process__5CProc
 * Address: 0x08051830
 * Size: 11 instructions */
void Process(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08051896
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __10Connection
 * Address: 0x080518a0
 * Size: 11 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._10Connection
 * Address: 0x080518c8
 * Size: 82 instructions */
void _._10Connection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - _._7CSndPkt() */
    /* - pthread_mutex_unlock@plt() */
    /* - _._7CRcvPkt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: InitBuffer__10ConnectionUlUlUl
 * Address: 0x080519b8
 * Size: 174 instructions */
void InitBuffer(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - SetRetryInterval() */
    /* - () */
    /* - pthread_mutex_init@plt() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: FlushQueues__10Connection
 * Address: 0x08051bb8
 * Size: 54 instructions */
void FlushQueues(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - FlushQueues() */
    /* - pthread_mutex_unlock@plt() */
    /* - FlushQueues() */
    /* TODO: Implement from disassembly */
}

/* Function: RenewRecv__10Connection
 * Address: 0x08051c5c
 * Size: 63 instructions */
void RenewRecv(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._7CRcvPkt() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: __8CSession
 * Address: 0x08051d08
 * Size: 222 instructions */
void (void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - RegisterModule() */
    /* - pthread_mutex_init@plt() */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._8CSession
 * Address: 0x08051fe8
 * Size: 121 instructions */
void _._8CSession(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._8CTaskMgr() */
    /* - close@plt() */
    /* - _._t10CHashTable1ZP10Connection() */
    /* - _._10Connection() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Startup__8CSessionP12_ProcCtrlBlk
 * Address: 0x08052160
 * Size: 507 instructions */
void Startup(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - InitBuffer() */
    /* - htons@plt() */
    /* - () */
    /* - GetProcessID() */
    /* - Init() */
    /* - Log() */
    /* - memset@plt() */
    /* - inet_addr@plt() */
    /* - strncpy@plt() */
    /* - mkfifo@plt() */
    /* - () */
    /* - open@plt() */
    /* - _._10Connection() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpMemory__8CSession
 * Address: 0x08052818
 * Size: 14 instructions */
void DumpMemory(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DumpMemory() */
    /* TODO: Implement from disassembly */
}

/* Function: SendProcess__8CSession
 * Address: 0x0805283c
 * Size: 795 instructions */
void SendProcess(void) {
    /* Stack: 2700 bytes */
    /* Calls: */
    /* - getpid@plt() */
    /* - Log() */
    /* - GetTickCount() */
    /* - Log() */
    /* - ReloadScripts() */
    /* - ActivityLog() */
    /* - time@plt() */
    /* - difftime@plt() */
    /* - pthread_mutex_lock@plt() */
    /* - GetNetObject() */
    /* - pthread_mutex_unlock@plt() */
    /* - AssignTask() */
    /* - SetStatus() */
    /* - SendWorldController() */
    /* - GetNextPacket() */
    /* - send@plt() */
    /* - () */
    /* - RemovePacket() */
    /* - Remove() */
    /* - write@plt() */
    /* - close@plt() */
    /* - ReQueueSent() */
    /* - SendPacket() */
    /* TODO: Implement from disassembly */
}

/* Function: RecvProcess__8CSession
 * Address: 0x0805331c
 * Size: 971 instructions */
void RecvProcess(void) {
    /* Stack: 1740 bytes */
    /* Calls: */
    /* - getpid@plt() */
    /* - Log() */
    /* - pthread_mutex_lock@plt() */
    /* - memcpy@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - select@plt() */
    /* - read@plt() */
    /* - recvfrom@plt() */
    /* - Log() */
    /* - memset@plt() */
    /* - connect@plt() */
    /* - SetStatus() */
    /* - GetTickCount() */
    /* - SetRetryInterval() */
    /* - recv@plt() */
    /* - () */
    /* - time@plt() */
    /* - AddUID() */
    /* - AssignTask() */
    /* - AddSystemPacket() */
    /* - lzo1x_decompress_safe() */
    /* - QueuePacket() */
    /* - DeletePackets() */
    /* TODO: Implement from disassembly */
}

/* Function: Shutdown__8CSession
 * Address: 0x08054170
 * Size: 12 instructions */
void Shutdown(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddConnection__8CSessionP11sockaddr_inUliPcP8CTaskMgr
 * Address: 0x0805418c
 * Size: 844 instructions */
void AddConnection(void) {
    /* Stack: 1692 bytes */
    /* Calls: */
    /* - sendto@plt() */
    /* - Log() */
    /* - Find() */
    /* - FlushQueues() */
    /* - memcpy@plt() */
    /* - GetTickCount() */
    /* - strncpy@plt() */
    /* - socket@plt() */
    /* - Log() */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - setsockopt@plt() */
    /* - close@plt() */
    /* - memset@plt() */
    /* - htonl@plt() */
    /* - bind@plt() */
    /* - getsockname@plt() */
    /* - ntohs@plt() */
    /* - AddSystemPacket() */
    /* - GetNextPacket() */
    /* - RemovePacket() */
    /* - Insert() */
    /* - AssignTask() */
    /* - SendWorldController() */
    /* - write@plt() */
    /* - strcmp@plt() */
    /* - strcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: DropConnection__8CSessionUl
 * Address: 0x08054c7c
 * Size: 42 instructions */
void DropConnection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: CloseConnection__8CSessionUl
 * Address: 0x08054ce8
 * Size: 63 instructions */
void CloseConnection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* - pthread_mutex_lock@plt() */
    /* - time@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: ZoneConnection__8CSessionUl
 * Address: 0x08054d98
 * Size: 42 instructions */
void ZoneConnection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetSendTime__8CSessionUl
 * Address: 0x08054e08
 * Size: 27 instructions */
void ResetSendTime(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetTimeOut__8CSessionUl
 * Address: 0x08054e48
 * Size: 28 instructions */
void ResetTimeOut(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* TODO: Implement from disassembly */
}

/* Function: PutEvent__8CSessionUlP10_NetObjecti
 * Address: 0x08054e88
 * Size: 62 instructions */
void PutEvent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* - pthread_mutex_lock@plt() */
    /* - AddNetObject() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: PutEventFlush__8CSessionUlP10_NetObjecti
 * Address: 0x08054f28
 * Size: 61 instructions */
void PutEventFlush(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* - pthread_mutex_lock@plt() */
    /* - AddNetObject() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: PutEventImm__8CSessionUlP10_NetObjecti
 * Address: 0x08054fc8
 * Size: 69 instructions */
void PutEventImm(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* - pthread_mutex_lock@plt() */
    /* - AddAckPkt() */
    /* - AddNetObject() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FlushImm__8CSessionUl
 * Address: 0x08055088
 * Size: 101 instructions */
void FlushImm(void) {
    /* Stack: 1572 bytes */
    /* Calls: */
    /* - Find() */
    /* - pthread_mutex_lock@plt() */
    /* - GetNextPacket() */
    /* - SendPacket() */
    /* - Log() */
    /* - pthread_mutex_unlock@plt() */
    /* - RemovePacket() */
    /* TODO: Implement from disassembly */
}

/* Function: FlushImm__8CSessionUli
 * Address: 0x080551b8
 * Size: 129 instructions */
void FlushImm(void) {
    /* Stack: 1572 bytes */
    /* Calls: */
    /* - Find() */
    /* - pthread_mutex_lock@plt() */
    /* - GetNextPacket() */
    /* - crc32_calc() */
    /* - Log() */
    /* - SendPacket() */
    /* - pthread_mutex_unlock@plt() */
    /* - RemovePacket() */
    /* TODO: Implement from disassembly */
}

/* Function: SendPacket2__8CSessionP10ConnectionP11PacketSInfo
 * Address: 0x08055338
 * Size: 79 instructions */
void SendPacket2(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - send@plt() */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - time@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SendPacket__8CSessionP10ConnectionP11PacketSInfo
 * Address: 0x08055418
 * Size: 245 instructions */
void SendPacket(void) {
    /* Stack: 67100 bytes */
    /* Calls: */
    /* - memcpy@plt() */
    /* - lzo1x_1_compress() */
    /* - send@plt() */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - time@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SendSysMsg__8CSessionUlUcPvi
 * Address: 0x08055724
 * Size: 65 instructions */
void SendSysMsg(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* - pthread_mutex_lock@plt() */
    /* - AddSystemPacket() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FindCharacter__8CSessionUl
 * Address: 0x080557c8
 * Size: 47 instructions */
void FindCharacter(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: ExecuteInternal__8CSessionUlP12__PacketDataiP8CTaskMgr
 * Address: 0x08055838
 * Size: 143 instructions */
void ExecuteInternal(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - memcpy@plt() */
    /* - AssignTask() */
    /* - Find() */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - QueuePacket() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: SendWorldController__8CSessionUlUcPv
 * Address: 0x080559f0
 * Size: 283 instructions */
void SendWorldController(void) {
    /* Stack: 2100 bytes */
    /* Calls: */
    /* - Find() */
    /* - strncpy@plt() */
    /* - memcpy@plt() */
    /* - socket@plt() */
    /* - memset@plt() */
    /* - htonl@plt() */
    /* - htons@plt() */
    /* - bind@plt() */
    /* - close@plt() */
    /* - connect@plt() */
    /* - send@plt() */
    /* - recv@plt() */
    /* - shutdown@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: LogConnections__8CSession
 * Address: 0x08055da8
 * Size: 127 instructions */
void LogConnections(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - ntohs@plt() */
    /* - difftime@plt() */
    /* - inet_ntoa_safe() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: LogLevel__8CSessioni
 * Address: 0x08055f18
 * Size: 12 instructions */
void LogLevel(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Debug__8CSessionP8CTaskMgr
 * Address: 0x08055f34
 * Size: 25 instructions */
void Debug(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - AssignTask() */
    /* TODO: Implement from disassembly */
}

/* Function: SetChatLog__8CSessionUlP8CTaskMgr
 * Address: 0x08055f88
 * Size: 19 instructions */
void SetChatLog(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SetChatLog() */
    /* TODO: Implement from disassembly */
}

/* Function: LogConnection__8CSessionUl
 * Address: 0x08055fb8
 * Size: 77 instructions */
void LogConnection(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - Find() */
    /* - ntohs@plt() */
    /* - difftime@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080560ce
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: FreeNodes__t10CHashTable1ZP10ConnectionPQ2t10CHashTable1ZP10Connection7nodeTag
 * Address: 0x080560d0
 * Size: 29 instructions */
void FreeNodes(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FreeNodes() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveAll__t10CHashTable1ZP10Connection
 * Address: 0x08056120
 * Size: 29 instructions */
void RemoveAll(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FreeNodes() */
    /* TODO: Implement from disassembly */
}

/* Function: _._t10CHashTable1ZP10Connection
 * Address: 0x08056170
 * Size: 32 instructions */
void _._t10CHashTable1ZP10Connection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RemoveAll() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t10CHashTable1ZP10Connectioni
 * Address: 0x080561c0
 * Size: 34 instructions */
void (void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Hash__t10CHashTable1ZP10ConnectionUx
 * Address: 0x08056214
 * Size: 34 instructions */
void Hash(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Remove__t10CHashTable1ZP10ConnectionUx
 * Address: 0x08056250
 * Size: 74 instructions */
void Remove(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - Hash() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Find__t10CHashTable1ZP10ConnectionUxRP10Connection
 * Address: 0x08056320
 * Size: 54 instructions */
void Find(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Hash() */
    /* TODO: Implement from disassembly */
}

/* Function: Insert__t10CHashTable1ZP10ConnectionUxRP10Connection
 * Address: 0x080563b0
 * Size: 83 instructions */
void Insert(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Hash() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: FreeGameSession__8CProcMgrUl
 * Address: 0x080564a0
 * Size: 24 instructions */
void FreeGameSession(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DeleteAuth() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08056522
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __7CMemMgr
 * Address: 0x08056530
 * Size: 30 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RegisterModule() */
    /* TODO: Implement from disassembly */
}

/* Function: _._7CMemMgr
 * Address: 0x080565a4
 * Size: 82 instructions */
void _._7CMemMgr(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _._8CMemPage() */
    /* - _._10CMemAccess() */
    /* - _._9CDBAccess() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Startup__7CMemMgrP12_ProcCtrlBlk
 * Address: 0x08056698
 * Size: 222 instructions */
void Startup(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - Log() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - strcpy@plt() */
    /* - LoadStatic() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Lock__7CMemMgrP10_MEMHANDLEP9CDBAccess
 * Address: 0x08056958
 * Size: 349 instructions */
void Lock(void) {
    /* Stack: 76 bytes */
    /* Calls: */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - Find() */
    /* - Purge() */
    /* - pthread_mutex_unlock@plt() */
    /* - Init() */
    /* - GetTickCount() */
    /* - Read() */
    /* - Insert() */
    /* - time@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: LockR__7CMemMgrP10_MEMHANDLEP9CDBAccess
 * Address: 0x08056dd0
 * Size: 342 instructions */
void LockR(void) {
    /* Stack: 76 bytes */
    /* Calls: */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - Find() */
    /* - Purge() */
    /* - pthread_mutex_unlock@plt() */
    /* - Init() */
    /* - GetTickCount() */
    /* - Read() */
    /* - Insert() */
    /* - time@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Unlock__7CMemMgrP10_MEMHANDLE
 * Address: 0x08057234
 * Size: 70 instructions */
void Unlock(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - pthread_mutex_unlock@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Process__7CMemMgr
 * Address: 0x080572e4
 * Size: 11 instructions */
void Process(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Delete__7CMemMgrP10_MEMHANDLE
 * Address: 0x08057304
 * Size: 153 instructions */
void Delete(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - Find() */
    /* - Remove() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Delete__7CMemMgrUl
 * Address: 0x080574e0
 * Size: 229 instructions */
void Delete(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - Log() */
    /* - Remove() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Flush__7CMemMgrP10_MEMHANDLEP9CDBAccess
 * Address: 0x080577ec
 * Size: 175 instructions */
void Flush(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - Find() */
    /* - pthread_mutex_unlock@plt() */
    /* - Flush() */
    /* TODO: Implement from disassembly */
}

/* Function: FlushDelete__7CMemMgrP10_MEMHANDLEP9CDBAccess
 * Address: 0x080579f0
 * Size: 186 instructions */
void FlushDelete(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - Find() */
    /* - Flush() */
    /* - pthread_mutex_unlock@plt() */
    /* - Remove() */
    /* TODO: Implement from disassembly */
}

/* Function: PagePurge__7CMemMgrUl
 * Address: 0x08057c30
 * Size: 70 instructions */
void PagePurge(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - Purge() */
    /* - Log() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadCategory__7CMemMgrUl
 * Address: 0x08057d10
 * Size: 133 instructions */
void ReloadCategory(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Log() */
    /* - pthread_mutex_lock@plt() */
    /* - Log() */
    /* - Read() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: MemoryStatus__7CMemMgr
 * Address: 0x08057ecc
 * Size: 124 instructions */
void MemoryStatus(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Log() */
    /* - Stats() */
    /* TODO: Implement from disassembly */
}

/* Function: AccessMem__7CMemMgrUli
 * Address: 0x08058058
 * Size: 97 instructions */
void AccessMem(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: __8CMemPagei
 * Address: 0x08058168
 * Size: 211 instructions */
void (void) {
    /* Stack: 76 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - pthread_mutex_init@plt() */
    /* - _._10CMemObject() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._8CMemPage
 * Address: 0x080583e0
 * Size: 72 instructions */
void _._8CMemPage(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._10CMemObject() */
    /* - () */
    /* - _._t10CHashTable1ZP10CMemObject() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Purge__8CMemPage
 * Address: 0x08058498
 * Size: 143 instructions */
void Purge(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - QueryMemObject() */
    /* - Remove() */
    /* TODO: Implement from disassembly */
}

/* Function: Stats__8CMemPageP9_MemStats
 * Address: 0x08058620
 * Size: 174 instructions */
void Stats(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - QueryMemObject() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0805883e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Hash__t10CHashTable1ZP10CMemObjectUx
 * Address: 0x08058840
 * Size: 38 instructions */
void Hash(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Find__t10CHashTable1ZP10CMemObjectUxRP10CMemObject
 * Address: 0x08058880
 * Size: 54 instructions */
void Find(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Hash() */
    /* TODO: Implement from disassembly */
}

/* Function: Insert__t10CHashTable1ZP10CMemObjectUxRP10CMemObject
 * Address: 0x08058910
 * Size: 83 instructions */
void Insert(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Hash() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Remove__t10CHashTable1ZP10CMemObjectUx
 * Address: 0x08058a00
 * Size: 74 instructions */
void Remove(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - Hash() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t10CHashTable1ZP10CMemObjecti
 * Address: 0x08058ad0
 * Size: 46 instructions */
void (void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FreeNodes__t10CHashTable1ZP10CMemObjectPQ2t10CHashTable1ZP10CMemObject7nodeTag
 * Address: 0x08058b30
 * Size: 25 instructions */
void FreeNodes(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FreeNodes() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveAll__t10CHashTable1ZP10CMemObject
 * Address: 0x08058b70
 * Size: 28 instructions */
void RemoveAll(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FreeNodes() */
    /* TODO: Implement from disassembly */
}

/* Function: _._t10CHashTable1ZP10CMemObject
 * Address: 0x08058bc0
 * Size: 32 instructions */
void _._t10CHashTable1ZP10CMemObject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RemoveAll() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __10CMemObject
 * Address: 0x08058c10
 * Size: 19 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._10CMemObject
 * Address: 0x08058c48
 * Size: 27 instructions */
void _._10CMemObject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetElementsCount__10CMemObject
 * Address: 0x08058c90
 * Size: 8 instructions */
void GetElementsCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08058cee
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: QueryMemObject__7CMemMgrUl
 * Address: 0x08058cf0
 * Size: 550 instructions */
void QueryMemObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: QueryMemObject__8CMemPageUl
 * Address: 0x08059564
 * Size: 547 instructions */
void QueryMemObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: LoadStatic__7CMemMgr
 * Address: 0x08059dd4
 * Size: 579 instructions */
void LoadStatic(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - Log() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - Lock() */
    /* - Unlock() */
    /* - _._9CDBAccess() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Init__10CMemObjectUlUl
 * Address: 0x0805a468
 * Size: 239 instructions */
void Init(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Read__10CMemObjectP9CDBAccessi
 * Address: 0x0805a800
 * Size: 12007 instructions */
void Read(void) {
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* TODO: Implement from disassembly */
}

/* Function: Flush__10CMemObjectP9CDBAccess
 * Address: 0x0806441c
 * Size: 9714 instructions */
void Flush(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - strcpy@plt() */
    /* - sprintf@plt() */
    /* - BlobUpdate() */
    /* TODO: Implement from disassembly */
}

/* Function: CreateElements__10CMemObjectP9CDBAccess
 * Address: 0x0806ced4
 * Size: 1266 instructions */
void CreateElements(void) {
    /* Stack: 112 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - GetLastInsertID() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteElements__7CMemMgrP10_MEMHANDLEP9CDBAccess
 * Address: 0x0806de30
 * Size: 436 instructions */
void DeleteElements(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* TODO: Implement from disassembly */
}

/* Function: NumFree__7CMemMgrP10_MEMHANDLEP9CDBAccess
 * Address: 0x0806e358
 * Size: 562 instructions */
void NumFree(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* TODO: Implement from disassembly */
}

/* Function: Count__7CMemMgrP10_MEMHANDLEP9CDBAccess
 * Address: 0x0806e97c
 * Size: 1180 instructions */
void Count(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0806f762
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __10CMemAccessPcN31
 * Address: 0x0806f770
 * Size: 96 instructions */
void (void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - _._9CDBAccess() */
    /* - RegisterModule() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._10CMemAccess
 * Address: 0x0806f898
 * Size: 88 instructions */
void _._10CMemAccess(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._t10CHashTable1ZP16_tMemCacheObject() */
    /* - _._9CDBAccess() */
    /* - _._16_tMemCacheObject() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Lock__10CMemAccessP10_MEMHANDLEii
 * Address: 0x0806f988
 * Size: 23 instructions */
void Lock(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: Lock__10CMemAccessP10_MEMHANDLEi
 * Address: 0x0806f9bc
 * Size: 553 instructions */
void Lock(void) {
    /* Stack: 64 bytes */
    /* Calls: */
    /* - Log() */
    /* - () */
    /* - QueryMemObject() */
    /* - Find() */
    /* - Init() */
    /* - Read() */
    /* - RefreshCacheObject() */
    /* - DeleteCacheObject() */
    /* - FlushCache() */
    /* - AddCacheObject() */
    /* - LockR() */
    /* - memcpy@plt() */
    /* - Log() */
    /* - Unlock() */
    /* - Add() */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: Unlock__10CMemAccess
 * Address: 0x08070004
 * Size: 58 instructions */
void Unlock(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - QueryMemObject() */
    /* - Flush() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: Flush__10CMemAccessP10_MEMHANDLE
 * Address: 0x080700b0
 * Size: 20 instructions */
void Flush(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Flush() */
    /* TODO: Implement from disassembly */
}

/* Function: Delete__10CMemAccessP10_MEMHANDLE
 * Address: 0x080700dc
 * Size: 55 instructions */
void Delete(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - Find() */
    /* - DeleteCacheObject() */
    /* - FlushDelete() */
    /* TODO: Implement from disassembly */
}

/* Function: Purge__10CMemAccessP10_MEMHANDLE
 * Address: 0x08070154
 * Size: 53 instructions */
void Purge(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - Find() */
    /* - DeleteCacheObject() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: PurgeCategory__10CMemAccessUl
 * Address: 0x080701c8
 * Size: 18 instructions */
void PurgeCategory(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - ReloadCategory() */
    /* TODO: Implement from disassembly */
}

/* Function: NumFree__10CMemAccessP10_MEMHANDLE
 * Address: 0x080701f0
 * Size: 20 instructions */
void NumFree(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - NumFree() */
    /* TODO: Implement from disassembly */
}

/* Function: Count__10CMemAccessP10_MEMHANDLE
 * Address: 0x0807021c
 * Size: 20 instructions */
void Count(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Count() */
    /* TODO: Implement from disassembly */
}

/* Function: CreateElements__10CMemAccessP10_MEMHANDLE
 * Address: 0x08070248
 * Size: 246 instructions */
void CreateElements(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - QueryMemObject() */
    /* - Find() */
    /* - Log() */
    /* - FlushCache() */
    /* - Init() */
    /* - AddCacheObject() */
    /* - CreateElements() */
    /* - DeleteCacheObject() */
    /* - Delete() */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteElements__10CMemAccessP10_MEMHANDLE
 * Address: 0x080704fc
 * Size: 20 instructions */
void DeleteElements(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DeleteElements() */
    /* TODO: Implement from disassembly */
}

/* Function: GenerateUniqueID__10CMemAccessPc
 * Address: 0x08070528
 * Size: 129 instructions */
void GenerateUniqueID(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* TODO: Implement from disassembly */
}

/* Function: Init__10CMemAccessiP7CMemMgr
 * Address: 0x08070690
 * Size: 216 instructions */
void Init(void) {
    /* Stack: 76 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - _._16_tMemCacheObject() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: RefreshCacheObject__10CMemAccessP16_tMemCacheObject
 * Address: 0x08070920
 * Size: 43 instructions */
void RefreshCacheObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Add__10CMemAccessP10CMemObject
 * Address: 0x0807099c
 * Size: 112 instructions */
void Add(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Log() */
    /* - FlushCache() */
    /* - () */
    /* - memcpy@plt() */
    /* - Log() */
    /* - AddCacheObject() */
    /* TODO: Implement from disassembly */
}

/* Function: AddCacheObject__10CMemAccessP16_tMemCacheObject
 * Address: 0x08070adc
 * Size: 59 instructions */
void AddCacheObject(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - Insert() */
    /* TODO: Implement from disassembly */
}

/* Function: FlushCache__10CMemAccessi
 * Address: 0x08070b74
 * Size: 182 instructions */
void FlushCache(void) {
    /* Stack: 64 bytes */
    /* Calls: */
    /* - Log() */
    /* - () */
    /* - Remove() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteCacheObject__10CMemAccessP16_tMemCacheObject
 * Address: 0x08070da4
 * Size: 82 instructions */
void DeleteCacheObject(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - Remove() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08070ece
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: FreeNodes__t10CHashTable1ZP16_tMemCacheObjectPQ2t10CHashTable1ZP16_tMemCacheObject7nodeTag
 * Address: 0x08070ed0
 * Size: 25 instructions */
void FreeNodes(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FreeNodes() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveAll__t10CHashTable1ZP16_tMemCacheObject
 * Address: 0x08070f10
 * Size: 28 instructions */
void RemoveAll(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FreeNodes() */
    /* TODO: Implement from disassembly */
}

/* Function: _._t10CHashTable1ZP16_tMemCacheObject
 * Address: 0x08070f60
 * Size: 32 instructions */
void _._t10CHashTable1ZP16_tMemCacheObject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RemoveAll() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Hash__t10CHashTable1ZP16_tMemCacheObjectUx
 * Address: 0x08070fb0
 * Size: 38 instructions */
void Hash(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Find__t10CHashTable1ZP16_tMemCacheObjectUxRP16_tMemCacheObject
 * Address: 0x08070ff0
 * Size: 54 instructions */
void Find(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Hash() */
    /* TODO: Implement from disassembly */
}

/* Function: __t10CHashTable1ZP16_tMemCacheObjecti
 * Address: 0x08071080
 * Size: 46 instructions */
void (void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Insert__t10CHashTable1ZP16_tMemCacheObjectUxRP16_tMemCacheObject
 * Address: 0x080710e0
 * Size: 83 instructions */
void Insert(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Hash() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Remove__t10CHashTable1ZP16_tMemCacheObjectUx
 * Address: 0x080711d0
 * Size: 74 instructions */
void Remove(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - Hash() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._16_tMemCacheObject
 * Address: 0x080712a0
 * Size: 28 instructions */
void _._16_tMemCacheObject(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._10CMemObject() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __16_tMemCacheObject
 * Address: 0x080712e0
 * Size: 35 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - _._10CMemObject() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: __3CVM
 * Address: 0x08071340
 * Size: 30 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RegisterModule() */
    /* TODO: Implement from disassembly */
}

/* Function: _._3CVM
 * Address: 0x080713a0
 * Size: 18 instructions */
void _._3CVM(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Init__3CVMP12_ProcCtrlBlkP10CMemAccess
 * Address: 0x080713c8
 * Size: 35 instructions */
void Init(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - ftime@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Process__3CVMP8_TaskDef
 * Address: 0x08071438
 * Size: 123 instructions */
void Process(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Find() */
    /* - LoadScript() */
    /* - GetTick() */
    /* - lua_dobuffer() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: MemoryStatus__3CVM
 * Address: 0x080715b0
 * Size: 5 instructions */
void MemoryStatus(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetTick__3CVM
 * Address: 0x080715b8
 * Size: 43 instructions */
void GetTick(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - gettimeofday@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080716ce
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Hash__t10CHashTable1ZP11_ScriptDataUx
 * Address: 0x080716d0
 * Size: 38 instructions */
void Hash(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Find__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData
 * Address: 0x08071710
 * Size: 54 instructions */
void Find(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Hash() */
    /* TODO: Implement from disassembly */
}

/* Function: __8CTaskMgr
 * Address: 0x080717a0
 * Size: 154 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RegisterModule() */
    /* TODO: Implement from disassembly */
}

/* Function: _._8CTaskMgr
 * Address: 0x080719bc
 * Size: 113 instructions */
void _._8CTaskMgr(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - _._3CVM() */
    /* - _._3CGS() */
    /* - _._t10CHashTable1ZP11_ScriptData() */
    /* - lua_close() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: AssignTask__8CTaskMgrP8_TaskDef
 * Address: 0x08071af8
 * Size: 74 instructions */
void AssignTask(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Process() */
    /* - Log() */
    /* - Process() */
    /* - ReloadLUA() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: ExecuteTask__8CTaskMgrP8_TaskDef
 * Address: 0x08071be0
 * Size: 36 instructions */
void ExecuteTask(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Process() */
    /* - Process() */
    /* TODO: Implement from disassembly */
}

/* Function: Init__8CTaskMgrP12_ProcCtrlBlkUl
 * Address: 0x08071c48
 * Size: 30 instructions */
void Init(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - AccessMem() */
    /* - Init() */
    /* TODO: Implement from disassembly */
}

/* Function: Init__8CTaskMgrP12_ProcCtrlBlkP10CMemAccess
 * Address: 0x08071c90
 * Size: 26 instructions */
void Init(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetProcessID() */
    /* - Init() */
    /* TODO: Implement from disassembly */
}

/* Function: Init__8CTaskMgrP12_ProcCtrlBlkP10CMemAccessUl
 * Address: 0x08071cd0
 * Size: 262 instructions */
void Init(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - ReloadLUA() */
    /* - () */
    /* - Init() */
    /* - () */
    /* - Init() */
    /* - Log() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadLUA__8CTaskMgr
 * Address: 0x08072008
 * Size: 434 instructions */
void ReloadLUA(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_close() */
    /* - lua_open() */
    /* - luaopen_base() */
    /* - luaopen_io() */
    /* - luaopen_string() */
    /* - luaopen_math() */
    /* - BindFunctions() */
    /* - LoadHeaders() */
    /* - LogFilename() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadHeaders__8CTaskMgr
 * Address: 0x080725c4
 * Size: 60 instructions */
void LoadHeaders(void) {
    /* Stack: 256020 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - lua_dobuffer() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: BindFunctions__8CTaskMgr
 * Address: 0x0807267c
 * Size: 62 instructions */
void BindFunctions(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_pushcclosure() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadScript__8CTaskMgrUl
 * Address: 0x08072738
 * Size: 256 instructions */
void LoadScript(void) {
    /* Stack: 256028 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - Log() */
    /* - memcpy@plt() */
    /* - () */
    /* - Insert() */
    /* - Find() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadScripts__8CTaskMgr
 * Address: 0x08072a70
 * Size: 168 instructions */
void LoadScripts(void) {
    /* Stack: 256028 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - Log() */
    /* - memcpy@plt() */
    /* - () */
    /* - Insert() */
    /* - Find() */
    /* TODO: Implement from disassembly */
}

/* Function: FindAliasToScript__8CTaskMgrUl
 * Address: 0x08072c74
 * Size: 28 instructions */
void FindAliasToScript(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Find() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadScripts__8CTaskMgr
 * Address: 0x08072cb0
 * Size: 125 instructions */
void ReloadScripts(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* - _._t10CHashTable1ZP11_ScriptData() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - LoadHeaders() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivityLog__8CTaskMgri
 * Address: 0x08072e10
 * Size: 76 instructions */
void ActivityLog(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LogFilename() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpMemory__8CTaskMgr
 * Address: 0x08072f10
 * Size: 9 instructions */
void DumpMemory(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ShowEvent__8CTaskMgr
 * Address: 0x08072f24
 * Size: 20 instructions */
void ShowEvent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: SetChatLog__8CTaskMgrUl
 * Address: 0x08072f58
 * Size: 12 instructions */
void SetChatLog(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Debug__8CTaskMgrUlUl
 * Address: 0x08072f74
 * Size: 13 instructions */
void Debug(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0807322a
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: FreeNodes__t10CHashTable1ZP11_ScriptDataPQ2t10CHashTable1ZP11_ScriptData7nodeTag
 * Address: 0x08073230
 * Size: 29 instructions */
void FreeNodes(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FreeNodes() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveAll__t10CHashTable1ZP11_ScriptData
 * Address: 0x08073280
 * Size: 29 instructions */
void RemoveAll(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FreeNodes() */
    /* TODO: Implement from disassembly */
}

/* Function: _._t10CHashTable1ZP11_ScriptData
 * Address: 0x080732d0
 * Size: 32 instructions */
void _._t10CHashTable1ZP11_ScriptData(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RemoveAll() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t10CHashTable1ZP11_ScriptDatai
 * Address: 0x08073320
 * Size: 46 instructions */
void (void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Insert__t10CHashTable1ZP11_ScriptDataUxRP11_ScriptData
 * Address: 0x08073380
 * Size: 83 instructions */
void Insert(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Hash() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __9CEventMgr
 * Address: 0x08073470
 * Size: 41 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RegisterModule() */
    /* - pthread_mutex_init@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: _._9CEventMgr
 * Address: 0x08073508
 * Size: 59 instructions */
void _._9CEventMgr(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _._8CTaskMgr() */
    /* - () */
    /* - _._9CDBAccess() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: AddEvent__9CEventMgrP9_EventDef
 * Address: 0x080735a8
 * Size: 156 instructions */
void AddEvent(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - Log() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CreateEvent__9CEventMgrP9_EventDefUl
 * Address: 0x08073778
 * Size: 75 instructions */
void CreateEvent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteEvent__9CEventMgrUs
 * Address: 0x08073838
 * Size: 33 instructions */
void DeleteEvent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveEvent__9CEventMgrUsUl
 * Address: 0x08073890
 * Size: 71 instructions */
void RemoveEvent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RefreshEvent__9CEventMgrUl
 * Address: 0x08073958
 * Size: 25 instructions */
void RefreshEvent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RemoveEvent() */
    /* - ReloadEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckEvent__9CEventMgrUsUl
 * Address: 0x08073998
 * Size: 79 instructions */
void CheckEvent(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Startup__9CEventMgrP12_ProcCtrlBlk
 * Address: 0x08073aa0
 * Size: 11 instructions */
void Startup(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Init__9CEventMgrP12_ProcCtrlBlk
 * Address: 0x08073ab4
 * Size: 416 instructions */
void Init(void) {
    /* Stack: 1228 bytes */
    /* Calls: */
    /* - () */
    /* - Log() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - Init() */
    /* - Log() */
    /* - pthread_mutex_init@plt() */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - AddEvent() */
    /* - pthread_mutex_unlock@plt() */
    /* - () */
    /* - GetProcessID() */
    /* - Init() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Activate__9CEventMgrUsUl
 * Address: 0x08074070
 * Size: 54 instructions */
void Activate(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Deactivate__9CEventMgrUsUl
 * Address: 0x08074108
 * Size: 56 instructions */
void Deactivate(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Process__9CEventMgr
 * Address: 0x080741a8
 * Size: 367 instructions */
void Process(void) {
    /* Stack: 76 bytes */
    /* Calls: */
    /* - getpid@plt() */
    /* - Log() */
    /* - ReloadScripts() */
    /* - ActivityLog() */
    /* - ClearEvents() */
    /* - ReloadEvents() */
    /* - time@plt() */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - localtime@plt() */
    /* - CompareInterval() */
    /* - AssignTask() */
    /* - UpdateLastTime() */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: UpdateLastTime__9CEventMgrP6_Event
 * Address: 0x08074670
 * Size: 33 instructions */
void UpdateLastTime(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CompareInterval__9CEventMgrP6_Event
 * Address: 0x080746c8
 * Size: 31 instructions */
void CompareInterval(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearEvents__9CEventMgr
 * Address: 0x08074718
 * Size: 57 instructions */
void ClearEvents(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadEvents__9CEventMgr
 * Address: 0x080747bc
 * Size: 189 instructions */
void ReloadEvents(void) {
    /* Stack: 1188 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* - FetchNextRow() */
    /* - Log() */
    /* - AddEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadEvent__9CEventMgrUl
 * Address: 0x08074a40
 * Size: 187 instructions */
void ReloadEvent(void) {
    /* Stack: 1188 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - SQLQuery() */
    /* - pthread_mutex_unlock@plt() */
    /* - FetchNextRow() */
    /* - Log() */
    /* - AddEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Debug__9CEventMgrUlUl
 * Address: 0x08074cc0
 * Size: 20 instructions */
void Debug(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Debug() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08074d42
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __3CGS
 * Address: 0x08074d50
 * Size: 24 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RegisterModule() */
    /* TODO: Implement from disassembly */
}

/* Function: _._3CGS
 * Address: 0x08074d9c
 * Size: 19 instructions */
void _._3CGS(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: ExecuteScript__3CGS
 * Address: 0x08074dc8
 * Size: 99 instructions */
void ExecuteScript(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Find() */
    /* - LoadScript() */
    /* - lua_gettop() */
    /* - lua_dobuffer() */
    /* - lua_settop() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ExecuteScript__3CGSUl
 * Address: 0x08074f14
 * Size: 100 instructions */
void ExecuteScript(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Find() */
    /* - LoadScript() */
    /* - lua_gettop() */
    /* - lua_dobuffer() */
    /* - lua_settop() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Init__3CGSP12_ProcCtrlBlkP10CMemAccess
 * Address: 0x08075060
 * Size: 88 instructions */
void Init(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - strcpy@plt() */
    /* - RegisterModule() */
    /* TODO: Implement from disassembly */
}

/* Function: Process__3CGSP8_TaskDef
 * Address: 0x080751a0
 * Size: 426 instructions */
void Process(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - ClientTimeOut() */
    /* - SetChatFilter() */
    /* - SetOption() */
    /* - SetFriendly() */
    /* - ZoneIn() */
    /* - DropConnection() */
    /* - ZoneOut() */
    /* - MoveVector() */
    /* - ReqUnknownID() */
    /* - PCData() */
    /* - TimeSync() */
    /* - TargetData() */
    /* - Attributes() */
    /* - Skills() */
    /* - Stances() */
    /* - Powers() */
    /* - ShowChainPowers() */
    /* - Chat() */
    /* - QuestJournal() */
    /* - QuestStoryInfo() */
    /* - QuestStory() */
    /* - Echo() */
    /* - Party() */
    /* - PartyUpdate() */
    /* - Brothers() */
    /* - Emote() */
    /* - NameRequest() */
    /* - GMMemberList() */
    /* - GuildMemberList() */
    /* - HallMemberList() */
    /* - HallTopPK() */
    /* - WhoIs() */
    /* - ClanHallList() */
    /* - ClanAllyList() */
    /* - ClanInfo() */
    /* - GuildInfo() */
    /* - ClanOfficerList() */
    /* - GuildOfficerList() */
    /* - GuildName() */
    /* - WarEvents() */
    /* - GMCheckWarEvent() */
    /* - SpawnGrp() */
    /* - ResetSpawnAttrib() */
    /* - ResetSpawnGrp() */
    /* - SetStance_Secure() */
    /* - RemoveObject_Secure() */
    /* - MoveAll_Secure() */
    /* - MoveAll2_Secure() */
    /* - CheckGameEvent_Secure() */
    /* - ActivateWeather_Secure() */
    /* - Broadcast_Secure() */
    /* - DailyCheck_Secure() */
    /* - GameEvents_Secure() */
    /* - PurgeMemory_Secure() */
    /* - ReloadSpawnPt_Secure() */
    /* - ReloadNPCAttrib_Secure() */
    /* - ReloadEvents_Secure() */
    /* - ActivateQuestPt_Secure() */
    /* - IgnoreModify() */
    /* - IgnoreList() */
    /* - FriendModify() */
    /* - Stuck() */
    /* - FriendsList() */
    /* - GMWho() */
    /* - Who() */
    /* - PartyFind() */
    /* - CharSys_Debug() */
    /* - GetAuctionList() */
    /* - CloseConnection() */
    /* - DropConnection() */
    /* - UpdateChar() */
    /* - GMHelp() */
    /* - DeleteSpawnNPCGrp() */
    /* - ResetSpawnGrpAttrib() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAuctionList__3CGS
 * Address: 0x08075730
 * Size: 312 instructions */
void GetAuctionList(void) {
    /* Stack: 364 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - Lock() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ClientTimeOut__3CGS
 * Address: 0x08075bfc
 * Size: 477 instructions */
void ClientTimeOut(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - RemoveEvent() */
    /* - UpdateCharacter() */
    /* - Lock() */
    /* - Log() */
    /* - FindObject() */
    /* - RemoveRelic() */
    /* - ExecuteScript() */
    /* - RemoveObject_Internal() */
    /* - Log() */
    /* - Unlock() */
    /* - DeleteElements() */
    /* - Lock() */
    /* - finite@plt() */
    /* - DeleteObject() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: ZoneIn__3CGSi
 * Address: 0x08076218
 * Size: 362 instructions */
void ZoneIn(void) {
    /* Stack: 228 bytes */
    /* Calls: */
    /* - Purge() */
    /* - Lock() */
    /* - AddObject() */
    /* - Log() */
    /* - Lock() */
    /* - memset@plt() */
    /* - Unlock() */
    /* - AddEvent() */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: ZoneOut__3CGS
 * Address: 0x08076770
 * Size: 470 instructions */
void ZoneOut(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Log() */
    /* - ExecuteScript() */
    /* - RemoveRelic() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - Unlock() */
    /* - RemoveObject_Internal() */
    /* - UpdateCharacter() */
    /* - CheckSceneLocal() */
    /* - RemoveEvent() */
    /* - DeleteObject() */
    /* - Delete() */
    /* - SendSysMsg() */
    /* - ZoneConnection() */
    /* - Flush() */
    /* - time@plt() */
    /* - localtime@plt() */
    /* - Deactivate() */
    /* - ZoneIn() */
    /* - ResetSendTime() */
    /* - PutEvent() */
    /* - SendSysMsg() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveVector__3CGS
 * Address: 0x08076d60
 * Size: 636 instructions */
void MoveVector(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - finite@plt() */
    /* - Lock() */
    /* - () */
    /* - () */
    /* - () */
    /* - GetTickCount() */
    /* - PutEvent() */
    /* - Unlock() */
    /* - Lock() */
    /* - MoveObject() */
    /* - Unlock() */
    /* - ExecuteTask() */
    /* - GetSceneID() */
    /* - GetTranslation() */
    /* - SendSysMsg() */
    /* TODO: Implement from disassembly */
}

/* Function: ReqUnknownID__3CGS
 * Address: 0x0807762c
 * Size: 1120 instructions */
void ReqUnknownID(void) {
    /* Stack: 396 bytes */
    /* Calls: */
    /* - Lock() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* - Lock() */
    /* - FindObject() */
    /* - memset@plt() */
    /* - Unlock() */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: TimeSync__3CGS
 * Address: 0x0807870c
 * Size: 75 instructions */
void TimeSync(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - localtime@plt() */
    /* - GetTickCount() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: PCData__3CGS
 * Address: 0x080787d8
 * Size: 525 instructions */
void PCData(void) {
    /* Stack: 416 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - UpdateCharacter() */
    /* - ExecuteScript() */
    /* - memset@plt() */
    /* - CheckOptions_Internal() */
    /* - gametime() */
    /* - SendWorld() */
    /* - PutEventFlush() */
    /* - Activate() */
    /* - ResetTimeOut() */
    /* TODO: Implement from disassembly */
}

/* Function: Attributes__3CGS
 * Address: 0x08079000
 * Size: 256 instructions */
void Attributes(void) {
    /* Stack: 196 bytes */
    /* Calls: */
    /* - Lock() */
    /* - memset@plt() */
    /* - memcpy@plt() */
    /* - ExecuteScript() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: TargetData__3CGS
 * Address: 0x08079380
 * Size: 357 instructions */
void TargetData(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - Lock() */
    /* - CalculateMaximumHitPoints() */
    /* - IDXTRANS() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Powers__3CGS
 * Address: 0x0807981c
 * Size: 174 instructions */
void Powers(void) {
    /* Stack: 140 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendMsg_Internal() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowChainPowers__3CGS
 * Address: 0x08079a44
 * Size: 107 instructions */
void ShowChainPowers(void) {
    /* Stack: 160 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Skills__3CGS
 * Address: 0x08079bc0
 * Size: 179 instructions */
void Skills(void) {
    /* Stack: 140 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendMsg_Internal() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Stances__3CGS
 * Address: 0x08079e00
 * Size: 179 instructions */
void Stances(void) {
    /* Stack: 140 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendMsg_Internal() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Party__3CGS
 * Address: 0x0807a040
 * Size: 239 instructions */
void Party(void) {
    /* Stack: 176 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendMsg_Internal() */
    /* - PutEvent() */
    /* - Log() */
    /* - Log() */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: PartyUpdate__3CGS
 * Address: 0x0807a374
 * Size: 315 instructions */
void PartyUpdate(void) {
    /* Stack: 268 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Lock() */
    /* - FindObject() */
    /* - Unlock() */
    /* - CalculateMaximumHitPoints() */
    /* - CalculateMaximumChiPoints() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: QuestJournal__3CGS
 * Address: 0x0807a8cc
 * Size: 20 instructions */
void QuestJournal(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SendQuestJournal() */
    /* TODO: Implement from disassembly */
}

/* Function: QuestStory__3CGS
 * Address: 0x0807a8fc
 * Size: 155 instructions */
void QuestStory(void) {
    /* Stack: 192 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: QuestStoryInfo__3CGS
 * Address: 0x0807ab64
 * Size: 112 instructions */
void QuestStoryInfo(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Chat__3CGS
 * Address: 0x0807acd8
 * Size: 2279 instructions */
void Chat(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* - Lock() */
    /* - _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - Log() */
    /* - PutEvent() */
    /* - GetNextScene() */
    /* - Lock() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - GetNext() */
    /* - Unlock() */
    /* - time@plt() */
    /* - Unlock() */
    /* - SendMsg_Internal() */
    /* - SetDestroy() */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Echo__3CGS
 * Address: 0x0807cc4c
 * Size: 45 instructions */
void Echo(void) {
    /* Stack: 532 bytes */
    /* Calls: */
    /* - memcpy@plt() */
    /* - Log() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Brothers__3CGS
 * Address: 0x0807cce0
 * Size: 289 instructions */
void Brothers(void) {
    /* Stack: 220 bytes */
    /* Calls: */
    /* - Lock() */
    /* - memset@plt() */
    /* - CheckCharInGame() */
    /* - Delete() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckGameEvent_Secure__3CGS
 * Address: 0x0807d11c
 * Size: 346 instructions */
void CheckGameEvent_Secure(void) {
    /* Stack: 2124 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Log() */
    /* - strcpy@plt() */
    /* - strcat@plt() */
    /* - ExecuteDBScript_Internal() */
    /* - ExecuteScript() */
    /* - SendWorld() */
    /* - Purge() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadSpawnPt_Secure__3CGS
 * Address: 0x0807d674
 * Size: 21 instructions */
void ReloadSpawnPt_Secure(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - ReloadSpawnPt() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateQuestPt_Secure__3CGS
 * Address: 0x0807d6a8
 * Size: 50 instructions */
void ActivateQuestPt_Secure(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - ActivateSpawnPt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadNPCAttrib_Secure__3CGS
 * Address: 0x0807d728
 * Size: 21 instructions */
void ReloadNPCAttrib_Secure(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - ReloadNPCAttrib() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadEvents_Secure__3CGS
 * Address: 0x0807d75c
 * Size: 19 instructions */
void ReloadEvents_Secure(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RefreshEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ExecuteDBScript_Internal__3CGSPc
 * Address: 0x0807d788
 * Size: 217 instructions */
void ExecuteDBScript_Internal(void) {
    /* Stack: 1148 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - _._9CDBAccess() */
    /* - fopen@plt() */
    /* - fgets@plt() */
    /* - SQLQuery() */
    /* - fclose@plt() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GameEvents_Secure__3CGS
 * Address: 0x0807da6c
 * Size: 55 instructions */
void GameEvents_Secure(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Activate() */
    /* - Deactivate() */
    /* - RemoveEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateWeather_Secure__3CGS
 * Address: 0x0807db0c
 * Size: 276 instructions */
void ActivateWeather_Secure(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - GetNextScene() */
    /* - Lock() */
    /* - rand@plt() */
    /* - Lock() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - PutEvent() */
    /* - GetNext() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: Emote__3CGS
 * Address: 0x0807deb0
 * Size: 149 instructions */
void Emote(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendMsg_Internal() */
    /* - Lock() */
    /* - PutEvent() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: ClanHallList__3CGS
 * Address: 0x0807e08c
 * Size: 406 instructions */
void ClanHallList(void) {
    /* Stack: 396 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ClanAllyList__3CGS
 * Address: 0x0807e724
 * Size: 374 instructions */
void ClanAllyList(void) {
    /* Stack: 396 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: WhoIs__3CGS
 * Address: 0x0807ed34
 * Size: 168 instructions */
void WhoIs(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - Lock() */
    /* - SendMsg_Internal() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GMCheckWarEvent__3CGS
 * Address: 0x0807ef48
 * Size: 385 instructions */
void GMCheckWarEvent(void) {
    /* Stack: 272 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: WarEvents__3CGS
 * Address: 0x0807f59c
 * Size: 558 instructions */
void WarEvents(void) {
    /* Stack: 624 bytes */
    /* Calls: */
    /* - Lock() */
    /* - CheckUsed_F() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GuildInfo__3CGS
 * Address: 0x0807fe5c
 * Size: 89 instructions */
void GuildInfo(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ClanInfo__3CGS
 * Address: 0x0807ff78
 * Size: 252 instructions */
void ClanInfo(void) {
    /* Stack: 460 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GuildOfficerList__3CGS
 * Address: 0x08080354
 * Size: 372 instructions */
void GuildOfficerList(void) {
    /* Stack: 380 bytes */
    /* Calls: */
    /* - Lock() */
    /* - ExecuteScript() */
    /* - PutEvent() */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ClanOfficerList__3CGS
 * Address: 0x0808093c
 * Size: 574 instructions */
void ClanOfficerList(void) {
    /* Stack: 412 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: HallTopPK__3CGS
 * Address: 0x08081254
 * Size: 204 instructions */
void HallTopPK(void) {
    /* Stack: 160 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GuildMemberList__3CGS
 * Address: 0x08081524
 * Size: 402 instructions */
void GuildMemberList(void) {
    /* Stack: 268 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: HallMemberList__3CGS
 * Address: 0x08081afc
 * Size: 393 instructions */
void HallMemberList(void) {
    /* Stack: 268 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GuildName__3CGS
 * Address: 0x0808209c
 * Size: 59 instructions */
void GuildName(void) {
    /* Stack: 100 bytes */
    /* Calls: */
    /* - Lock() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GMMemberList__3CGS
 * Address: 0x08082148
 * Size: 382 instructions */
void GMMemberList(void) {
    /* Stack: 1068 bytes */
    /* Calls: */
    /* - Lock() */
    /* - memset@plt() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: FriendsList__3CGS
 * Address: 0x0808270c
 * Size: 151 instructions */
void FriendsList(void) {
    /* Stack: 144 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: FriendModify__3CGS
 * Address: 0x080828ec
 * Size: 23 instructions */
void FriendModify(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: IgnoreModify__3CGS
 * Address: 0x08082928
 * Size: 214 instructions */
void IgnoreModify(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - Lock() */
    /* - SendMsg_Internal() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: IgnoreList__3CGS
 * Address: 0x08082bc8
 * Size: 181 instructions */
void IgnoreList(void) {
    /* Stack: 528 bytes */
    /* Calls: */
    /* - Lock() */
    /* - memset@plt() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Stuck__3CGS
 * Address: 0x08082e60
 * Size: 258 instructions */
void Stuck(void) {
    /* Stack: 368 bytes */
    /* Calls: */
    /* - () */
    /* - Lock() */
    /* - Lock() */
    /* - Unlock() */
    /* - GetSceneID() */
    /* - GetTranslation() */
    /* - Unlock() */
    /* - SendSysMsg() */
    /* TODO: Implement from disassembly */
}

/* Function: PartyFind__3CGS
 * Address: 0x0808319c
 * Size: 278 instructions */
void PartyFind(void) {
    /* Stack: 496 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Lock() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCount() */
    /* - GetCurrent() */
    /* - Unlock() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GMWho__3CGS
 * Address: 0x080835bc
 * Size: 149 instructions */
void GMWho(void) {
    /* Stack: 528 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - Lock() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: Who__3CGS
 * Address: 0x080837ec
 * Size: 217 instructions */
void Who(void) {
    /* Stack: 160 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Lock() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCount() */
    /* - GetCurrent() */
    /* - GetNext() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: CharSys_Debug__3CGS
 * Address: 0x08083abc
 * Size: 46 instructions */
void CharSys_Debug(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: SetChatFilter__3CGS
 * Address: 0x08083b50
 * Size: 39 instructions */
void SetChatFilter(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetOption__3CGS
 * Address: 0x08083bc0
 * Size: 56 instructions */
void SetOption(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - CheckOptions_Internal() */
    /* TODO: Implement from disassembly */
}

/* Function: SetFriendly__3CGS
 * Address: 0x08083c68
 * Size: 39 instructions */
void SetFriendly(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: DropConnection__3CGS
 * Address: 0x08083cd8
 * Size: 32 instructions */
void DropConnection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Log() */
    /* - DropConnection() */
    /* TODO: Implement from disassembly */
}

/* Function: CloseConnection__3CGS
 * Address: 0x08083d28
 * Size: 32 instructions */
void CloseConnection(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Log() */
    /* - CloseConnection() */
    /* TODO: Implement from disassembly */
}

/* Function: UpdateChar__3CGS
 * Address: 0x08083d78
 * Size: 33 instructions */
void UpdateChar(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FindObject() */
    /* - UpdateCharacter() */
    /* TODO: Implement from disassembly */
}

/* Function: NameRequest__3CGS
 * Address: 0x08083dd0
 * Size: 54 instructions */
void NameRequest(void) {
    /* Stack: 100 bytes */
    /* Calls: */
    /* - Lock() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SpawnGrp__3CGS
 * Address: 0x08083e68
 * Size: 172 instructions */
void SpawnGrp(void) {
    /* Stack: 64 bytes */
    /* Calls: */
    /* - CheckSceneLocal() */
    /* - DeleteSpawnedNPCGrp() */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* - ResetTickSpawnGrp() */
    /* - SetSpawnPtByGroup() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetSpawnGrp__3CGS
 * Address: 0x080840b8
 * Size: 43 instructions */
void ResetSpawnGrp(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - CheckSceneLocal() */
    /* - AIResetSpawnedGrpAttrib() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetSpawnAttrib__3CGS
 * Address: 0x08084128
 * Size: 38 instructions */
void ResetSpawnAttrib(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - CheckSceneLocal() */
    /* - AIResetSpawnedAttrib() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteSpawnNPCGrp__3CGS
 * Address: 0x08084188
 * Size: 38 instructions */
void DeleteSpawnNPCGrp(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - CheckSceneLocal() */
    /* - DeleteSpawnedNPCGrp() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetSpawnGrpAttrib__3CGS
 * Address: 0x080841e8
 * Size: 43 instructions */
void ResetSpawnGrpAttrib(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - CheckSceneLocal() */
    /* - AIResetSpawnedGrpAttrib() */
    /* TODO: Implement from disassembly */
}

/* Function: GMHelp__3CGS
 * Address: 0x08084258
 * Size: 127 instructions */
void GMHelp(void) {
    /* Stack: 1168 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveObject_Secure__3CGS
 * Address: 0x0808440c
 * Size: 18 instructions */
void RemoveObject_Secure(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RemoveObject_Internal() */
    /* TODO: Implement from disassembly */
}

/* Function: PurgeMemory_Secure__3CGS
 * Address: 0x08084438
 * Size: 45 instructions */
void PurgeMemory_Secure(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Log() */
    /* - Purge() */
    /* - PurgeCategory() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveAll2_Secure__3CGS
 * Address: 0x080844b8
 * Size: 761 instructions */
void MoveAll2_Secure(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* - FindObject() */
    /* - Lock() */
    /* - GetUserRelicList() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - PutEventImm() */
    /* - GetNext() */
    /* - Log() */
    /* - IDXTRANS() */
    /* - Fastftol() */
    /* - FlushImm() */
    /* - FlushImm() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveAll_Secure__3CGS
 * Address: 0x08084ffc
 * Size: 756 instructions */
void MoveAll_Secure(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* - GetNextScene() */
    /* - Lock() */
    /* - GetUserRelicList() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - PutEventImm() */
    /* - GetNext() */
    /* - Log() */
    /* - IDXTRANS() */
    /* - Fastftol() */
    /* - FlushImm() */
    /* - FlushImm() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: Broadcast_Secure__3CGS
 * Address: 0x08085b34
 * Size: 312 instructions */
void Broadcast_Secure(void) {
    /* Stack: 164 bytes */
    /* Calls: */
    /* - Lock() */
    /* - wstrncpy() */
    /* - GetNextScene() */
    /* - Lock() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - PutEvent() */
    /* - GetNext() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetStance_Secure__3CGS
 * Address: 0x08085f40
 * Size: 93 instructions */
void SetStance_Secure(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckUniqueItem_Secure__3CGS
 * Address: 0x08086060
 * Size: 139 instructions */
void CheckUniqueItem_Secure(void) {
    /* Stack: 4048 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - time@plt() */
    /* - difftime@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: DailyCheck_Secure__3CGS
 * Address: 0x0808624c
 * Size: 25 instructions */
void DailyCheck_Secure(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GarbageCollect_Secure() */
    /* - ExecuteScript() */
    /* - CheckWarScore_Secure() */
    /* TODO: Implement from disassembly */
}

/* Function: GarbageCollect_Secure__3CGS
 * Address: 0x08086288
 * Size: 48 instructions */
void GarbageCollect_Secure(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckWarScore_Secure__3CGS
 * Address: 0x08086318
 * Size: 80 instructions */
void CheckWarScore_Secure(void) {
    /* Stack: 420 bytes */
    /* Calls: */
    /* - SQLQuery() */
    /* - FetchNextRow() */
    /* - ExecuteScript() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveObject_Internal__3CGS
 * Address: 0x08086440
 * Size: 147 instructions */
void RemoveObject_Internal(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - IDXTRANS() */
    /* - GetTickCount() */
    /* - Lock() */
    /* - PutEvent() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMsg_Internal__3CGSUlUs
 * Address: 0x08086620
 * Size: 31 instructions */
void SendMsg_Internal(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMsg_Secure__3CGS
 * Address: 0x08086678
 * Size: 395 instructions */
void SendMsg_Secure(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - Lock() */
    /* - Lock() */
    /* - PutEvent() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckOptions_Internal__3CGSPQ29VKY_SCENE13tObjectHandleUl
 * Address: 0x08086bfc
 * Size: 124 instructions */
void CheckOptions_Internal(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08086e2e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Fastftol__Ff
 * Address: 0x08086e30
 * Size: 16 instructions */
void Fastftol(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __7CVector
 * Address: 0x08086e5c
 * Size: 7 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __7CVectorfff
 * Address: 0x08086e68
 * Size: 15 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __opf__C7CVector
 * Address: 0x08086e88
 * Size: 15 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __mi__FRC7CVectorT0
 * Address: 0x08086ea8
 * Size: 34 instructions */
void (void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetTranslation__C7CMatrixR7CVector
 * Address: 0x08086ef8
 * Size: 37 instructions */
void GetTranslation(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Set() */
    /* TODO: Implement from disassembly */
}

/* Function: _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08086f40
 * Size: 27 instructions */
void _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlei
 * Address: 0x08086f80
 * Size: 16 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetHead__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode
 * Address: 0x08086fbc
 * Size: 12 instructions */
void GetHead(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrent__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode
 * Address: 0x08086fd0
 * Size: 16 instructions */
void GetCurrent(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNext__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleRPQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode
 * Address: 0x08086ff0
 * Size: 18 instructions */
void GetNext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetDestroy__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleQ213GEN_CLINKLIST12eDestroyType
 * Address: 0x08087010
 * Size: 11 instructions */
void SetDestroy(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08087030
 * Size: 12 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Set__7CVectorfff
 * Address: 0x08087050
 * Size: 17 instructions */
void Set(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08087070
 * Size: 63 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __9CSceneMgr
 * Address: 0x08087130
 * Size: 27 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RegisterModule() */
    /* TODO: Implement from disassembly */
}

/* Function: _._9CSceneMgr
 * Address: 0x0808718c
 * Size: 52 instructions */
void _._9CSceneMgr(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._6CScene() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Init__9CSceneMgrP12_ProcCtrlBlk
 * Address: 0x08087210
 * Size: 234 instructions */
void Init(void) {
    /* Stack: 1792 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - Log() */
    /* - SQLQuery() */
    /* - getcwd@plt() */
    /* - FetchNextRow() */
    /* - chdir@plt() */
    /* - AddScene() */
    /* - _._9CDBAccess() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadScenes__9CSceneMgr
 * Address: 0x08087514
 * Size: 10 instructions */
void ReloadScenes(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: GetCharacterList__9CSceneMgrRt25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandleP6CScene
 * Address: 0x0808752c
 * Size: 28 instructions */
void GetCharacterList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetPCObject() */
    /* TODO: Implement from disassembly */
}

/* Function: Lock__9CSceneMgrP6CScenei
 * Address: 0x08087574
 * Size: 27 instructions */
void Lock(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_rdlock@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: LockWrite__9CSceneMgrP6CScene
 * Address: 0x080875c8
 * Size: 26 instructions */
void LockWrite(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_wrlock@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Lock__9CSceneMgrP6CScene
 * Address: 0x08087618
 * Size: 26 instructions */
void Lock(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_rdlock@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Unlock__9CSceneMgrP6CScenei
 * Address: 0x08087668
 * Size: 26 instructions */
void Unlock(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_unlock@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Unlock__9CSceneMgrP6CScene
 * Address: 0x080876b8
 * Size: 26 instructions */
void Unlock(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_unlock@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetNextScene__9CSceneMgrP6CScene
 * Address: 0x08087708
 * Size: 16 instructions */
void GetNextScene(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetObjects__9CSceneMgrP6CSceneRt25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08087730
 * Size: 18 instructions */
void GetObjects(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetPCObject() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveObject__9CSceneMgrPQ29VKY_SCENE13tObjectHandleRC7CVectorfUcUlUl
 * Address: 0x08087758
 * Size: 117 instructions */
void MoveObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - FindObject() */
    /* - SetRotate() */
    /* - ChangeObjectPos() */
    /* TODO: Implement from disassembly */
}

/* Function: AddObject__9CSceneMgrP10_EntityDef
 * Address: 0x0808789c
 * Size: 126 instructions */
void AddObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - GetSceneID() */
    /* - pthread_rwlock_wrlock@plt() */
    /* - () */
    /* - CreateObject() */
    /* - pthread_rwlock_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteObject__9CSceneMgrPQ29VKY_SCENE13tObjectHandle
 * Address: 0x08087a34
 * Size: 43 instructions */
void DeleteObject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_wrlock@plt() */
    /* - DeleteObject() */
    /* - pthread_rwlock_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckSceneLocal__9CSceneMgrUl
 * Address: 0x08087ab0
 * Size: 30 instructions */
void CheckSceneLocal(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: FindScene__9CSceneMgrUl
 * Address: 0x08087afc
 * Size: 32 instructions */
void FindScene(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetScriptID__9CSceneMgrUl
 * Address: 0x08087b4c
 * Size: 37 instructions */
void GetScriptID(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetProcessID__9CSceneMgr
 * Address: 0x08087bac
 * Size: 9 instructions */
void GetProcessID(void) {
    /* TODO: Implement from disassembly */
}

/* Function: FindObject__9CSceneMgrUl
 * Address: 0x08087bc4
 * Size: 53 instructions */
void FindObject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_rdlock@plt() */
    /* - FindObject() */
    /* - pthread_rwlock_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FindObject__9CSceneMgrUlPP6CScene
 * Address: 0x08087c58
 * Size: 56 instructions */
void FindObject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_rdlock@plt() */
    /* - FindObject() */
    /* - pthread_rwlock_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AddScene__9CSceneMgrPcUcUlUcUl
 * Address: 0x08087cfc
 * Size: 173 instructions */
void AddScene(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - CheckScene() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - pthread_rwlock_init@plt() */
    /* - LoadScene() */
    /* - Log() */
    /* - _._6CScene() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: AddRelic__9CSceneMgrP6CScenePQ29VKY_SCENE13tObjectHandle
 * Address: 0x08087f18
 * Size: 42 instructions */
void AddRelic(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_wrlock@plt() */
    /* - GetUserRelicList() */
    /* - AddTail() */
    /* - pthread_rwlock_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveRelic__9CSceneMgrP6CScenePQ29VKY_SCENE13tObjectHandle
 * Address: 0x08087f8c
 * Size: 44 instructions */
void RemoveRelic(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_wrlock@plt() */
    /* - GetUserRelicList() */
    /* - Delete() */
    /* - pthread_rwlock_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetRelics__9CSceneMgrP6CSceneRt25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08088004
 * Size: 27 instructions */
void GetRelics(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - GetUserRelicList() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08088082
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __7CMatrix
 * Address: 0x08088090
 * Size: 11 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddTail__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle
 * Address: 0x080880a0
 * Size: 94 instructions */
void AddTail(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Delete__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle
 * Address: 0x080881c0
 * Size: 26 instructions */
void Delete(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Find() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: __Q2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode
 * Address: 0x080881f8
 * Size: 22 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: Find__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle
 * Address: 0x08088220
 * Size: 33 instructions */
void Find(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: Delete__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlePQ2t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle5CNode
 * Address: 0x08088270
 * Size: 65 instructions */
void Delete(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: gametime__FUl
 * Address: 0x08088330
 * Size: 56 instructions */
void gametime(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - time@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: inet_ntoa_safe__FPcUl
 * Address: 0x080883c8
 * Size: 31 instructions */
void inet_ntoa_safe(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - sprintf@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0808845e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: npcmutexlock__FP15pthread_mutex_ti
 * Address: 0x08088460
 * Size: 19 instructions */
void npcmutexlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: npcmutexunlock__FP15pthread_mutex_t
 * Address: 0x0808849c
 * Size: 13 instructions */
void npcmutexunlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: targetlmutexlock__FP15pthread_mutex_ti
 * Address: 0x080884c0
 * Size: 19 instructions */
void targetlmutexlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: targetlmutexunlock__FP15pthread_mutex_t
 * Address: 0x080884fc
 * Size: 13 instructions */
void targetlmutexunlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: spawnmutexlock__FP15pthread_mutex_ti
 * Address: 0x08088520
 * Size: 19 instructions */
void spawnmutexlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: spawnmutexunlock__FP15pthread_mutex_t
 * Address: 0x0808855c
 * Size: 13 instructions */
void spawnmutexunlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: putmutexlock__FP15pthread_mutex_ti
 * Address: 0x08088580
 * Size: 19 instructions */
void putmutexlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: putmutexunlock__FP15pthread_mutex_t
 * Address: 0x080885bc
 * Size: 13 instructions */
void putmutexunlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: getmutexlock__FP15pthread_mutex_ti
 * Address: 0x080885e0
 * Size: 19 instructions */
void getmutexlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: getmutexunlock__FP15pthread_mutex_t
 * Address: 0x0808861c
 * Size: 13 instructions */
void getmutexunlock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: MemoryStatus__3CAI
 * Address: 0x08088640
 * Size: 14 instructions */
void MemoryStatus(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DumpMemory() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowDestroyMsg__3CAI
 * Address: 0x08088660
 * Size: 7 instructions */
void ShowDestroyMsg(void) {
    /* TODO: Implement from disassembly */
}

/* Function: HideDestroyMsg__3CAI
 * Address: 0x08088670
 * Size: 7 instructions */
void HideDestroyMsg(void) {
    /* TODO: Implement from disassembly */
}

/* Function: MSGShowDestroy__FP7NPCInfoPc
 * Address: 0x08088680
 * Size: 7 instructions */
void MSGShowDestroy(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AISceneLock__3CAIP6CScenei
 * Address: 0x08088690
 * Size: 23 instructions */
void AISceneLock(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: AISceneUnlock__3CAIP6CScene
 * Address: 0x080886d8
 * Size: 18 instructions */
void AISceneUnlock(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowWayPoint__3CAI
 * Address: 0x08088708
 * Size: 7 instructions */
void ShowWayPoint(void) {
    /* TODO: Implement from disassembly */
}

/* Function: HideWayPoint__3CAI
 * Address: 0x08088718
 * Size: 7 instructions */
void HideWayPoint(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ShowMove__3CAI
 * Address: 0x08088728
 * Size: 8 instructions */
void ShowMove(void) {
    /* TODO: Implement from disassembly */
}

/* Function: HideMove__3CAI
 * Address: 0x08088740
 * Size: 8 instructions */
void HideMove(void) {
    /* TODO: Implement from disassembly */
}

/* Function: VectorRotY__FG7CVectorf
 * Address: 0x08088758
 * Size: 79 instructions */
void VectorRotY(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - cos@plt() */
    /* - sin@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: IDXTRANS__FUlPc
 * Address: 0x0808883c
 * Size: 41 instructions */
void IDXTRANS(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: __11CSpawnPoint
 * Address: 0x080888b4
 * Size: 19 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_init@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: __9CSpawnMgr
 * Address: 0x080888e4
 * Size: 19 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_init@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CreateSpawnMem__9CSpawnMgri
 * Address: 0x08088918
 * Size: 104 instructions */
void CreateSpawnMem(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - memset@plt() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnPointCount__9CSpawnMgr
 * Address: 0x08088a40
 * Size: 9 instructions */
void GetSpawnPointCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._9CSpawnMgr
 * Address: 0x08088a50
 * Size: 27 instructions */
void _._9CSpawnMgr(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __14CEffectElement
 * Address: 0x08088a98
 * Size: 8 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __10CWayPoints
 * Address: 0x08088aa8
 * Size: 22 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._10CWayPoints
 * Address: 0x08088ae8
 * Size: 29 instructions */
void _._10CWayPoints(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetWayPointSize__12CWayPointMgr
 * Address: 0x08088b30
 * Size: 9 instructions */
void GetWayPointSize(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetWayPointSize__12CWayPointMgri
 * Address: 0x08088b40
 * Size: 129 instructions */
void SetWayPointSize(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - _._10CWayPoints() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: __12CWayPointMgr
 * Address: 0x08088cb0
 * Size: 37 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - _._t17CGEN_NiceLinkList1Z11CPathFinder() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetActualIndex__12CWayPointMgrUl
 * Address: 0x08088d1c
 * Size: 39 instructions */
void GetActualIndex(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: _._12CWayPointMgr
 * Address: 0x08088d90
 * Size: 58 instructions */
void _._12CWayPointMgr(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._10CWayPoints() */
    /* - () */
    /* - _._t17CGEN_NiceLinkList1Z11CPathFinder() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __11CPathFinder
 * Address: 0x08088e28
 * Size: 9 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._11CPathFinder
 * Address: 0x08088e3c
 * Size: 30 instructions */
void _._11CPathFinder(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: compare__FPCvT0
 * Address: 0x08088e88
 * Size: 59 instructions */
void compare(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - () */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPathWay__12CWayPointMgrP6CSceneG7CVectorT2P7NPCInfo
 * Address: 0x08088f28
 * Size: 324 instructions */
void GetPathWay(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - qsort@plt() */
    /* - () */
    /* - GetMagnitude() */
    /* - GetActualIndex() */
    /* - GetHead() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: AllocateWayPoint__12CWayPointMgrPQ29VKY_SCENE6tPointP6CScene
 * Address: 0x080892f0
 * Size: 161 instructions */
void AllocateWayPoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: __17CWayPointSceneMgr
 * Address: 0x080894dc
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._17CWayPointSceneMgr
 * Address: 0x080894f8
 * Size: 53 instructions */
void _._17CWayPointSceneMgr(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._12CWayPointMgr() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: CreateManager__17CWayPointSceneMgri
 * Address: 0x08089578
 * Size: 150 instructions */
void CreateManager(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - SetPtList() */
    /* - _._12CWayPointMgr() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetManagerCount__17CWayPointSceneMgr
 * Address: 0x08089720
 * Size: 9 instructions */
void GetManagerCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetWayPointMgr__17CWayPointSceneMgrUl
 * Address: 0x08089730
 * Size: 105 instructions */
void GetWayPointMgr(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SetPtList__12CWayPointMgrPPQ29VKY_SCENE6tPoint
 * Address: 0x08089854
 * Size: 8 instructions */
void SetPtList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __3CAI
 * Address: 0x08089864
 * Size: 295 instructions */
void (void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - time@plt() */
    /* - RegisterModule() */
    /* - () */
    /* - memset@plt() */
    /* - pthread_mutex_init@plt() */
    /* - GetTickCount() */
    /* - strcpy@plt() */
    /* - () */
    /* - _._11FWLogClient() */
    /* - _._16CSceneSharedData() */
    /* - _._10NPCPoolMgr() */
    /* - _._17CWayPointSceneMgr() */
    /* - _._9CSpawnMgr() */
    /* - _._12NPCGroupInfo() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: RedoRotArray__Fi
 * Address: 0x08089c78
 * Size: 34 instructions */
void RedoRotArray(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: _._3CAI
 * Address: 0x08089ce4
 * Size: 76 instructions */
void _._3CAI(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _._8CTaskMgr() */
    /* - () */
    /* - _._11FWLogClient() */
    /* - _._16CSceneSharedData() */
    /* - _._10NPCPoolMgr() */
    /* - _._17CWayPointSceneMgr() */
    /* - _._9CSpawnMgr() */
    /* - _._12NPCGroupInfo() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetTargetPtr__3CAIUl
 * Address: 0x08089dcc
 * Size: 94 instructions */
void GetTargetPtr(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowAttack__3CAI
 * Address: 0x08089f14
 * Size: 7 instructions */
void ShowAttack(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ShowTick__3CAI
 * Address: 0x08089f24
 * Size: 7 instructions */
void ShowTick(void) {
    /* TODO: Implement from disassembly */
}

/* Function: HideAttack__3CAI
 * Address: 0x08089f34
 * Size: 7 instructions */
void HideAttack(void) {
    /* TODO: Implement from disassembly */
}

/* Function: RefreshSlotList__3CAIP13_STTargetList
 * Address: 0x08089f44
 * Size: 26 instructions */
void RefreshSlotList(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __13CNPCAttribute
 * Address: 0x08089f90
 * Size: 39 instructions */
void (void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __13CNPCAttAccess
 * Address: 0x08089ff4
 * Size: 40 instructions */
void (void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetAttID__13CNPCAttAccessUlP10CMemAccess
 * Address: 0x0808a054
 * Size: 55 instructions */
void ResetAttID(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Purge() */
    /* TODO: Implement from disassembly */
}

/* Function: GetByAttID__13CNPCAttAccessUlP10CMemAccess
 * Address: 0x0808a0f8
 * Size: 3183 instructions */
void GetByAttID(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetByCharID__13CNPCAttAccessUlP10CMemAccess
 * Address: 0x0808c954
 * Size: 43 instructions */
void GetByCharID(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowerRank__13CNPCAttributeUsRUc
 * Address: 0x0808c9c8
 * Size: 97 instructions */
void GetPowerRank(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __10TargetInfo
 * Address: 0x0808cae8
 * Size: 9 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __12NPCGroupInfo
 * Address: 0x0808caf8
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: CreateNPC__12NPCGroupInfoi
 * Address: 0x0808cb14
 * Size: 170 instructions */
void CreateNPC(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - memset@plt() */
    /* - _._7NPCInfo() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCCount__12NPCGroupInfo
 * Address: 0x0808cd18
 * Size: 9 instructions */
void GetNPCCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._12NPCGroupInfo
 * Address: 0x0808cd28
 * Size: 59 instructions */
void _._12NPCGroupInfo(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._7NPCInfo() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetAttackPerc__3CAIUlUcP10CMemAccess
 * Address: 0x0808cdcc
 * Size: 195 instructions */
void GetAttackPerc(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowerID__3CAIUlUcP10CMemAccess
 * Address: 0x0808d030
 * Size: 178 instructions */
void GetPowerID(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowerType__3CAIUlUcP10CMemAccess
 * Address: 0x0808d248
 * Size: 180 instructions */
void GetPowerType(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: ProcessNPC__3CAI
 * Address: 0x0808d480
 * Size: 194 instructions */
void ProcessNPC(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* - StartTimer() */
    /* - GetNPCCount() */
    /* - AICycle() */
    /* - StopTimer() */
    /* - memset@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: OnTarget__3CAIG7CVectorT1UsP6CSceneUl
 * Address: 0x0808d6fc
 * Size: 41 instructions */
void OnTarget(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - () */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: SetGravDist__3CAIUl
 * Address: 0x0808d760
 * Size: 15 instructions */
void SetGravDist(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: GetGrav__3CAIP6CScenefffR7CVectorT5
 * Address: 0x0808d784
 * Size: 581 instructions */
void GetGrav(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWayPointEndCoord__3CAIP7NPCInfoR7CVector
 * Address: 0x0808df40
 * Size: 73 instructions */
void GetWayPointEndCoord(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - AISceneLock() */
    /* - FindObjectInScene() */
    /* - AISceneUnlock() */
    /* - GetTranslation() */
    /* TODO: Implement from disassembly */
}

/* Function: GetDestCoord__3CAIP7NPCInfoP6CSceneR7CVector
 * Address: 0x0808e008
 * Size: 219 instructions */
void GetDestCoord(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - GetSceneID() */
    /* - GetWayPointMgr() */
    /* - AISceneLock() */
    /* - FindObjectInScene() */
    /* - AISceneUnlock() */
    /* - GetTranslation() */
    /* TODO: Implement from disassembly */
}

/* Function: GetExtent__3CAIUlRfN22
 * Address: 0x0808e288
 * Size: 78 instructions */
void GetExtent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* - GetNPCData() */
    /* TODO: Implement from disassembly */
}

/* Function: DoStuck__3CAIP7NPCInfoG7CVector
 * Address: 0x0808e37c
 * Size: 116 instructions */
void DoStuck(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSceneID() */
    /* - GetWayPointMgr() */
    /* - () */
    /* - GetTranslation() */
    /* - GetPathWay() */
    /* TODO: Implement from disassembly */
}

/* Function: CollideWithPartner__3CAIP7NPCInfoG7CVector
 * Address: 0x0808e4f8
 * Size: 393 instructions */
void CollideWithPartner(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - GetExtent() */
    /* - GetTranslation() */
    /* - Lock() */
    /* - IDXTRANS() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Normalize() */
    /* - VDot() */
    /* - Unlock() */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowColl__3CAI
 * Address: 0x0808ea1c
 * Size: 10 instructions */
void ShowColl(void) {
    /* TODO: Implement from disassembly */
}

/* Function: HideColl__3CAI
 * Address: 0x0808ea34
 * Size: 9 instructions */
void HideColl(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ResetStuckCheck__3CAIP7NPCInfo
 * Address: 0x0808ea48
 * Size: 17 instructions */
void ResetStuckCheck(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveToVector__3CAIUlfffUcf
 * Address: 0x0808ea78
 * Size: 56 instructions */
void MoveToVector(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - ResetStuckCheck() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveToSpawnPoint__3CAIUlUlUlUcf
 * Address: 0x0808eb28
 * Size: 178 instructions */
void MoveToSpawnPoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - () */
    /* - ResetStuckCheck() */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetGrav() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveToChar__3CAIUlUlUcf
 * Address: 0x0808ed88
 * Size: 54 instructions */
void MoveToChar(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - ResetStuckCheck() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadNPCAttrib__3CAIUlP10CMemAccess
 * Address: 0x0808ee28
 * Size: 20 instructions */
void ReloadNPCAttrib(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - ResetAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: Arrived__3CAIUl
 * Address: 0x0808ee58
 * Size: 97 instructions */
void Arrived(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* - RunTask() */
    /* TODO: Implement from disassembly */
}

/* Function: DoStuckNonCombat__3CAIP7NPCInfo
 * Address: 0x0808ef9c
 * Size: 43 instructions */
void DoStuckNonCombat(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetByAttID() */
    /* - PickHomeLocation() */
    /* - RemoveEntity() */
    /* TODO: Implement from disassembly */
}

/* Function: Move__3CAIUl
 * Address: 0x0808f01c
 * Size: 190 instructions */
void Move(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* - GetTargetCoord() */
    /* - StrafeNPC() */
    /* - MoveNPC() */
    /* - DoStuck() */
    /* - DoStuckNonCombat() */
    /* - RemoveEntity() */
    /* - RunTask() */
    /* - Arrived() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTargetCoord__3CAIUlR7CVectorRUcRfP10CMemAccess
 * Address: 0x0808f22c
 * Size: 253 instructions */
void GetTargetCoord(void) {
    /* Stack: 92 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - () */
    /* - GetTranslation() */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Unlock() */
    /* - () */
    /* - () */
    /* - GetMagnitude() */
    /* - GetSceneID() */
    /* - GetWayPointMgr() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckPriorty__3CAIUl
 * Address: 0x0808f53c
 * Size: 139 instructions */
void CheckPriorty(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Lock() */
    /* - Unlock() */
    /* - LockOnTarget() */
    /* TODO: Implement from disassembly */
}

/* Function: ScanEnemy__3CAIUl
 * Address: 0x0808f6f8
 * Size: 622 instructions */
void ScanEnemy(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - () */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Lock() */
    /* - Unlock() */
    /* - LockOnTarget() */
    /* - GetTranslation() */
    /* - GetByAttID() */
    /* - GetSceneID() */
    /* - ProceedAggro() */
    /* - ProceedTarAss() */
    /* - () */
    /* - GetMagnitude() */
    /* - RunTask() */
    /* TODO: Implement from disassembly */
}

/* Function: PassiveScan__3CAIUl
 * Address: 0x0808fecc
 * Size: 512 instructions */
void PassiveScan(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - () */
    /* - GetTranslation() */
    /* - Lock() */
    /* - GetByAttID() */
    /* - FindObjectInScene() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - ProceedAggro() */
    /* - ProceedTarAss() */
    /* - () */
    /* - GetMagnitude() */
    /* - Unlock() */
    /* - RunTask() */
    /* TODO: Implement from disassembly */
}

/* Function: StrafeNPC__3CAIUlG7CVector
 * Address: 0x0809053c
 * Size: 485 instructions */
void StrafeNPC(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* - () */
    /* - () */
    /* - () */
    /* - CollideWithPartner() */
    /* - GetTickCount() */
    /* - GetTranslation() */
    /* - () */
    /* - () */
    /* - () */
    /* - Normalize() */
    /* - GetExtent() */
    /* - () */
    /* - SetTranslate() */
    /* - GetGrav() */
    /* - SetTranslate() */
    /* - Lock() */
    /* - ChangeObjectPos() */
    /* - Unlock() */
    /* - AddPos() */
    /* - RemoveEntity() */
    /* TODO: Implement from disassembly */
}

/* Function: AddPos__3CAIP7NPCInfoG7CVector
 * Address: 0x08090b9c
 * Size: 248 instructions */
void AddPos(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* - () */
    /* - () */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveNPC__3CAIUlG7CVectorfUc
 * Address: 0x08090ecc
 * Size: 590 instructions */
void MoveNPC(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* - GetTickCount() */
    /* - () */
    /* - () */
    /* - () */
    /* - GetTranslation() */
    /* - () */
    /* - GetMagnitude() */
    /* - Normalize() */
    /* - () */
    /* - RotateTowardsDest() */
    /* - GetExtent() */
    /* - () */
    /* - SetTranslate() */
    /* - GetGrav() */
    /* - SetTranslate() */
    /* - Lock() */
    /* - ChangeObjectPos() */
    /* - Unlock() */
    /* - AddPos() */
    /* - RemoveEntity() */
    /* TODO: Implement from disassembly */
}

/* Function: RotateTowardsDest__3CAIP7NPCInfoG7CVector
 * Address: 0x0809166c
 * Size: 201 instructions */
void RotateTowardsDest(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - SetIdentity() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - SetRotation() */
    /* - () */
    /* - GetMagnitude() */
    /* - Normalize() */
    /* - atan2@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RangeCheck__3CAIUlG7CVectorT2
 * Address: 0x080918f0
 * Size: 90 instructions */
void RangeCheck(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - () */
    /* - GetMagnitude() */
    /* - AssignTask() */
    /* TODO: Implement from disassembly */
}

/* Function: ChangeStance__3CAIUlUsUcUc
 * Address: 0x08091a1c
 * Size: 110 instructions */
void ChangeStance(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AssignTask() */
    /* TODO: Implement from disassembly */
}

/* Function: DesignateMovement__3CAIUl
 * Address: 0x08091ba8
 * Size: 194 instructions */
void DesignateMovement(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* - GetTickCount() */
    /* - PickHomeLocation() */
    /* - ChangeStance() */
    /* - rand@plt() */
    /* - GetDirectionByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: LockOnTarget__3CAIUlUl
 * Address: 0x08091e1c
 * Size: 52 instructions */
void LockOnTarget(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetTickCount() */
    /* - ChangeStance() */
    /* TODO: Implement from disassembly */
}

/* Function: RunTask__3CAIP7NPCInfoP8CTaskMgrUlUlUl
 * Address: 0x08091eb8
 * Size: 45 instructions */
void RunTask(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - AssignTask() */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReCheckRange__3CAIUl
 * Address: 0x08091f48
 * Size: 293 instructions */
void ReCheckRange(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - () */
    /* - AISceneLock() */
    /* - FindObjectInScene() */
    /* - AISceneUnlock() */
    /* - GetTranslation() */
    /* - RangeCheck() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: RecalcCoord__3CAIP7NPCInfo
 * Address: 0x08092350
 * Size: 107 instructions */
void RecalcCoord(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - FindObjectInScene() */
    /* - GetTranslation() */
    /* - VectorRotY() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: ProceedTarAss__3CAIP7NPCInfoP13CNPCAttributeUl
 * Address: 0x08092490
 * Size: 74 instructions */
void ProceedTarAss(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - AIGetClanRating() */
    /* - rand@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AggroCount__3CAIUlUl
 * Address: 0x08092568
 * Size: 60 instructions */
void AggroCount(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: IsAggroed__3CAIUlUlP10CMemAccess
 * Address: 0x08092630
 * Size: 72 instructions */
void IsAggroed(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* - GetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearAggro__3CAIUlUlP10CMemAccess
 * Address: 0x0809271c
 * Size: 96 instructions */
void ClearAggro(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* - GetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: ReleaseTarget__3CAIUlUl
 * Address: 0x08092868
 * Size: 178 instructions */
void ReleaseTarget(void) {
    /* Stack: 64 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* - Lock() */
    /* - RunTask() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckGuard__3CAIUl
 * Address: 0x08092aac
 * Size: 8 instructions */
void CheckGuard(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ClearGuard__3CAIUl
 * Address: 0x08092ac0
 * Size: 8 instructions */
void ClearGuard(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ActiveScan__3CAIUl
 * Address: 0x08092ad4
 * Size: 328 instructions */
void ActiveScan(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Unlock() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - ProceedAggro() */
    /* - GetTickCount() */
    /* - GetTopTarget() */
    /* - ReleaseTarget() */
    /* - LockOnTarget() */
    /* TODO: Implement from disassembly */
}

/* Function: ExecCombat__3CAIUl
 * Address: 0x08092efc
 * Size: 60 instructions */
void ExecCombat(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AssignTask() */
    /* TODO: Implement from disassembly */
}

/* Function: InitializeRandomLocation__3CAIR5stLocP11CSpawnPointG7CVectorUs
 * Address: 0x08092fcc
 * Size: 89 instructions */
void InitializeRandomLocation(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - rand@plt() */
    /* - NPCQuadEdgeLoc() */
    /* TODO: Implement from disassembly */
}

/* Function: EscapeLure__3CAIUl
 * Address: 0x080930c0
 * Size: 196 instructions */
void EscapeLure(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - () */
    /* - sqrt@plt() */
    /* - GetTranslation() */
    /* - () */
    /* - () */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: GetRandomLocation__3CAIUl
 * Address: 0x08093330
 * Size: 404 instructions */
void GetRandomLocation(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - () */
    /* - GetTranslation() */
    /* - rand@plt() */
    /* - NPCQuadEdgeLoc() */
    /* - () */
    /* - GetMagnitude() */
    /* - () */
    /* - GetByCharID() */
    /* - GetNPCCount() */
    /* - GetNPCData() */
    /* - GetGrav() */
    /* - MoveToVector() */
    /* TODO: Implement from disassembly */
}

/* Function: NPCQuadEdgeLoc__3CAIUcP11CSpawnPointffG7CVector
 * Address: 0x0809383c
 * Size: 101 instructions */
void NPCQuadEdgeLoc(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: PickHomeLocation__3CAIUl
 * Address: 0x0809394c
 * Size: 265 instructions */
void PickHomeLocation(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - () */
    /* - () */
    /* - GetNPCCount() */
    /* - GetNPCData() */
    /* - GetGrav() */
    /* - MoveToVector() */
    /* - GetRandomLocation() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnPoint__3CAIP6CScenePP11CSpawnPointG7CVectorRUlf
 * Address: 0x08093cb8
 * Size: 107 instructions */
void GetSpawnPoint(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - () */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: SeekWayPoint__3CAIUl
 * Address: 0x08093e0c
 * Size: 200 instructions */
void SeekWayPoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - GetSceneID() */
    /* - GetWayPointMgr() */
    /* - () */
    /* - GetTranslation() */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckNPCState__3CAIUl
 * Address: 0x0809407c
 * Size: 47 instructions */
void CheckNPCState(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: DoCountDeduct__3CAIP7NPCInfo
 * Address: 0x08094108
 * Size: 153 instructions */
void DoCountDeduct(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - spawnmutexlock() */
    /* - spawnmutexunlock() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveEntity__3CAIUlP10CMemAccess
 * Address: 0x08094348
 * Size: 74 instructions */
void RemoveEntity(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - DoCountDeduct() */
    /* TODO: Implement from disassembly */
}

/* Function: RemovedNPC__3CAIUlP10CMemAccess
 * Address: 0x08094428
 * Size: 82 instructions */
void RemovedNPC(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetTickCount() */
    /* - RemoveEntity() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSceneID__3CAIUl
 * Address: 0x08094538
 * Size: 12 instructions */
void SetSceneID(void) {
    /* TODO: Implement from disassembly */
}

/* Function: CheckSpawnPointStatus__3CAIUl
 * Address: 0x08094554
 * Size: 103 instructions */
void CheckSpawnPointStatus(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetNPCCount() */
    /* - () */
    /* - GetTranslation() */
    /* TODO: Implement from disassembly */
}

/* Function: DoNPCDisappear__3CAIUl
 * Address: 0x080946ac
 * Size: 478 instructions */
void DoNPCDisappear(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - GetTickCount() */
    /* - () */
    /* - GetSceneID() */
    /* - GetPool() */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - GetTranslation() */
    /* - Lock() */
    /* - Unlock() */
    /* - () */
    /* - AssignTask() */
    /* - PutNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowAttackMessage__3CAI
 * Address: 0x08094da0
 * Size: 9 instructions */
void ShowAttackMessage(void) {
    /* TODO: Implement from disassembly */
}

/* Function: HideAttackMessage__3CAI
 * Address: 0x08094db4
 * Size: 9 instructions */
void HideAttackMessage(void) {
    /* TODO: Implement from disassembly */
}

/* Function: DoCombat__3CAIUl
 * Address: 0x08094dc8
 * Size: 697 instructions */
void DoCombat(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - () */
    /* - GetTickCount() */
    /* - GetTranslation() */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Unlock() */
    /* - () */
    /* - () */
    /* - GetMagnitude() */
    /* - RunTask() */
    /* - MoveToChar() */
    /* - AssignTask() */
    /* TODO: Implement from disassembly */
}

/* Function: AICycle__3CAIUl
 * Address: 0x08095840
 * Size: 287 instructions */
void AICycle(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - EscapeLure() */
    /* - RemoveEntity() */
    /* - DoNPCDisappear() */
    /* - GetByCharID() */
    /* - GetTickCount() */
    /* - CheckCallForHelp() */
    /* - RunTask() */
    /* - AssignTask() */
    /* - DesignateMovement() */
    /* - Move() */
    /* - ActiveScan() */
    /* - ScanEnemy() */
    /* - PassiveScan() */
    /* - CheckPriorty() */
    /* - DoCombat() */
    /* TODO: Implement from disassembly */
}

/* Function: Startup__3CAIP12_ProcCtrlBlk
 * Address: 0x08095bc8
 * Size: 1118 instructions */
void Startup(void) {
    /* Stack: 1244 bytes */
    /* Calls: */
    /* - GetProcessID() */
    /* - AccessMem() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - GetTickCount() */
    /* - SetLog() */
    /* - Log() */
    /* - strlen@plt() */
    /* - Init() */
    /* - GetNextScene() */
    /* - CreatePool() */
    /* - CreateManager() */
    /* - GetPointCount() */
    /* - GetPoints() */
    /* - CreateSpawnMem() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - GetPool() */
    /* - CreateNPCSlots() */
    /* - GetWayPointMgr() */
    /* - SetWayPointSize() */
    /* - CreateNPC() */
    /* - getcwd@plt() */
    /* - chdir@plt() */
    /* - LoadCharacterCollisionBoxList() */
    /* - GetNPCSlotCount() */
    /* - () */
    /* - AddObject() */
    /* - PutNPC() */
    /* - AllocateDummyNPC() */
    /* - AllocateSpawnPt() */
    /* - AllocateWayPoint() */
    /* - ReadWaypointdata() */
    /* - memcpy@plt() */
    /* - GetSceneName() */
    /* - () */
    /* - () */
    /* - AddHead() */
    /* - _._11CPathFinder() */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: LineOfSight__3CAIUl
 * Address: 0x08096b84
 * Size: 7 instructions */
void LineOfSight(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __7NPCInfo
 * Address: 0x08096b90
 * Size: 145 instructions */
void (void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - pthread_mutex_init@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: _._7NPCInfo
 * Address: 0x08096d74
 * Size: 42 instructions */
void _._7NPCInfo(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_rwlock_wrlock@plt() */
    /* - DeleteObject() */
    /* - pthread_rwlock_unlock@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Process__3CAI
 * Address: 0x08096df8
 * Size: 169 instructions */
void Process(void) {
    /* Stack: 1108 bytes */
    /* Calls: */
    /* - getpid@plt() */
    /* - Log() */
    /* - GetTickCount() */
    /* - ReloadScripts() */
    /* - ActivityLog() */
    /* - ScanSpawnPt() */
    /* - ProcessNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: DebugSpawnPt__3CAIUl
 * Address: 0x0809708c
 * Size: 144 instructions */
void DebugSpawnPt(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: DebugNPC__3CAIUl
 * Address: 0x0809728c
 * Size: 68 instructions */
void DebugNPC(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* - printf@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearCollCache__3CAIUl
 * Address: 0x0809736c
 * Size: 36 instructions */
void ClearCollCache(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetNextScene() */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: SetID__3CAIUl
 * Address: 0x080973cc
 * Size: 11 instructions */
void SetID(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ClearID__3CAI
 * Address: 0x080973e4
 * Size: 9 instructions */
void ClearID(void) {
    /* TODO: Implement from disassembly */
}

/* Function: TakeNPC__3CAIUl
 * Address: 0x080973f8
 * Size: 52 instructions */
void TakeNPC(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - ChangeStance() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCCount__3CAI
 * Address: 0x0809749c
 * Size: 40 instructions */
void GetNPCCount(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: ReleaseNPC__3CAIUl
 * Address: 0x08097514
 * Size: 40 instructions */
void ReleaseNPC(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCPos__3CAIUl
 * Address: 0x0809759c
 * Size: 104 instructions */
void SetNPCPos(void) {
    /* Stack: 100 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - () */
    /* - SetTranslate() */
    /* - AISceneLock() */
    /* - () */
    /* - SetIdentity() */
    /* - ChangeObjectPos() */
    /* - AISceneUnlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCX__3CAIUlf
 * Address: 0x080976e0
 * Size: 8 instructions */
void SetNPCX(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCY__3CAIUlf
 * Address: 0x080976f4
 * Size: 8 instructions */
void SetNPCY(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCZ__3CAIUlf
 * Address: 0x08097708
 * Size: 8 instructions */
void SetNPCZ(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnPeriod__3CAIUl
 * Address: 0x0809771c
 * Size: 8 instructions */
void SetSpawnPeriod(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ScanSpawnPt__3CAI
 * Address: 0x08097730
 * Size: 1176 instructions */
void ScanSpawnPt(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetTickCount() */
    /* - GetSceneID() */
    /* - gametime() */
    /* - Log() */
    /* - modf@plt() */
    /* - time@plt() */
    /* - localtime@plt() */
    /* - memset@plt() */
    /* - mktime@plt() */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - AISceneLock() */
    /* - () */
    /* - AISceneUnlock() */
    /* - AllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateSpawnpt__3CAIUliUlP10CMemAccess
 * Address: 0x080987e4
 * Size: 87 instructions */
void ActivateSpawnpt(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - AllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnNPC__3CAIUlUlPUlRUl
 * Address: 0x08098908
 * Size: 181 instructions */
void GetSpawnNPC(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateSpawnPt__3CAIUlUlP10CMemAccessUlRUcPUlT5Ul
 * Address: 0x08098b78
 * Size: 220 instructions */
void ActivateSpawnPt(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - Log() */
    /* - AllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateSpawnPtGrp__3CAIUlUlP10CMemAccess
 * Address: 0x08098e6c
 * Size: 122 instructions */
void ActivateSpawnPtGrp(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - AllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetTickSpawnGrp__3CAIUlUl
 * Address: 0x08099018
 * Size: 75 instructions */
void ResetTickSpawnGrp(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteSpawnedNPCGrp__3CAIUlUl
 * Address: 0x08099118
 * Size: 117 instructions */
void DeleteSpawnedNPCGrp(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetNPCCount() */
    /* - DoCountDeduct() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteSpawnedNPC__3CAIUlUl
 * Address: 0x080992c0
 * Size: 117 instructions */
void DeleteSpawnedNPC(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetNPCCount() */
    /* - DoCountDeduct() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnPtCnt__3CAIUlUl
 * Address: 0x08099458
 * Size: 89 instructions */
void GetSpawnPtCnt(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckSpawnLiving__3CAIUlUl
 * Address: 0x0809958c
 * Size: 116 instructions */
void CheckSpawnLiving(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnID__3CAIUl
 * Address: 0x0809971c
 * Size: 8 instructions */
void SetSpawnID(void) {
    /* TODO: Implement from disassembly */
}

/* Function: CascadeSPCheck__3CAI
 * Address: 0x08099730
 * Size: 78 instructions */
void CascadeSPCheck(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowSpawn__3CAI
 * Address: 0x08099840
 * Size: 124 instructions */
void ShowSpawn(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetNPCCount() */
    /* - () */
    /* - GetTranslation() */
    /* - GetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: HideSpawn__3CAI
 * Address: 0x08099a00
 * Size: 7 instructions */
void HideSpawn(void) {
    /* TODO: Implement from disassembly */
}

/* Function: OverrideSuicide__3CAIUl
 * Address: 0x08099a10
 * Size: 11 instructions */
void OverrideSuicide(void) {
    /* TODO: Implement from disassembly */
}

/* Function: OverrideScan__3CAIUl
 * Address: 0x08099a30
 * Size: 11 instructions */
void OverrideScan(void) {
    /* TODO: Implement from disassembly */
}

/* Function: OverrideSuicideRange__3CAIUl
 * Address: 0x08099a50
 * Size: 13 instructions */
void OverrideSuicideRange(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: OverrideScanRange__3CAIUl
 * Address: 0x08099a70
 * Size: 13 instructions */
void OverrideScanRange(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SetQuestOwner__3CAIUlUlUl
 * Address: 0x08099a90
 * Size: 118 instructions */
void SetQuestOwner(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNoDeath__3CAIUlUl
 * Address: 0x08099c24
 * Size: 125 instructions */
void SetNoDeath(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetNPCCount() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPriortyTarget__11CSpawnPointUl
 * Address: 0x08099dcc
 * Size: 9 instructions */
void SetPriortyTarget(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ClearPriortyTarget__11CSpawnPoint
 * Address: 0x08099de0
 * Size: 6 instructions */
void ClearPriortyTarget(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AllocateSpawnPt__3CAIP6CScenePQ29VKY_SCENE6tPoint
 * Address: 0x08099dec
 * Size: 460 instructions */
void AllocateSpawnPt(void) {
    /* Stack: 92 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - Lock() */
    /* - memcpy@plt() */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadSpawnPt__3CAIUlP10CMemAccess
 * Address: 0x0809a480
 * Size: 125 instructions */
void ReloadSpawnPt(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Purge() */
    /* - Lock() */
    /* - GetSpawnPointCount() */
    /* - GetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadSpawnDataAll__3CAIP10CMemAccess
 * Address: 0x0809a618
 * Size: 454 instructions */
void ReloadSpawnDataAll(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - Purge() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - DeleteSpawnedNPC() */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadSpawnData__3CAIUlP10CMemAccess
 * Address: 0x0809ac80
 * Size: 439 instructions */
void ReloadSpawnData(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - Purge() */
    /* - Lock() */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - DeleteSpawnedNPC() */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: GetDirectionByAttID__3CAIUlUlP10CMemAccess
 * Address: 0x0809b2b0
 * Size: 45 instructions */
void GetDirectionByAttID(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadNPCDataAll__3CAI
 * Address: 0x0809b33c
 * Size: 51 instructions */
void ReloadNPCDataAll(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Purge() */
    /* TODO: Implement from disassembly */
}

/* Function: ReloadAttrib__3CAIi
 * Address: 0x0809b3d8
 * Size: 33 instructions */
void ReloadAttrib(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - Purge() */
    /* - GetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCForceRetreat__3CAIP11CSpawnPoint
 * Address: 0x0809b42c
 * Size: 92 instructions */
void SetNPCForceRetreat(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: GetDirectionByCharID__3CAIUl
 * Address: 0x0809b568
 * Size: 74 instructions */
void GetDirectionByCharID(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: AllocateLoot__3CAIG7CVectorP6CSceneUlP11_STLootInfoP10CMemAccess
 * Address: 0x0809b65c
 * Size: 39 instructions */
void AllocateLoot(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - AllocateLoot() */
    /* TODO: Implement from disassembly */
}

/* Function: AllocateLootExt1__3CAIUlP11_STLootInfoUc
 * Address: 0x0809b6b4
 * Size: 147 instructions */
void AllocateLootExt1(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: AllocateLootComplete__3CAIG7CVectorP6CSceneUlP11_STLootInfoP10CMemAccess
 * Address: 0x0809b8a8
 * Size: 50 instructions */
void AllocateLootComplete(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - AllocateLoot() */
    /* - AllocateLootExt1() */
    /* TODO: Implement from disassembly */
}

/* Function: AllocateLoot__3CAIG7CVectorP6CSceneUlUlUcP10CMemAccessP11_STLootInfoUc
 * Address: 0x0809b91c
 * Size: 344 instructions */
void AllocateLoot(void) {
    /* Stack: 156 bytes */
    /* Calls: */
    /* - GetSceneID() */
    /* - GetPool() */
    /* - GetFreeNPC() */
    /* - () */
    /* - SetTranslate() */
    /* - GetByAttID() */
    /* - GetNPCCount() */
    /* - GetNPCData() */
    /* - memset@plt() */
    /* - GetTickCount() */
    /* - Lock() */
    /* - AISceneLock() */
    /* - AISceneUnlock() */
    /* TODO: Implement from disassembly */
}

/* Function: AllocateDummyNPC__3CAIP6CScene
 * Address: 0x0809bdd0
 * Size: 123 instructions */
void AllocateDummyNPC(void) {
    /* Stack: 96 bytes */
    /* Calls: */
    /* - () */
    /* - GetSceneID() */
    /* - GetPool() */
    /* - GetFreeNPC() */
    /* - () */
    /* - SetTranslate() */
    /* - GetByAttID() */
    /* - memset@plt() */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: SpawnedNPC__3CAIUlfffUlUsP10CMemAccess
 * Address: 0x0809bf5c
 * Size: 67 instructions */
void SpawnedNPC(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetNextScene() */
    /* - GetSceneID() */
    /* - AllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: AllocateNPC__3CAIP11CSpawnPointfffUlP10CMemAccessUlbP6CSceneUlUs
 * Address: 0x0809c00c
 * Size: 1117 instructions */
void AllocateNPC(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - spawnmutexlock() */
    /* - spawnmutexunlock() */
    /* - GetByAttID() */
    /* - GetSceneID() */
    /* - GetPool() */
    /* - GetFreeNPC() */
    /* - () */
    /* - GetNPCCount() */
    /* - GetNPCData() */
    /* - SetTranslate() */
    /* - () */
    /* - InitializeRandomLocation() */
    /* - () */
    /* - GetGrav() */
    /* - SetTranslate() */
    /* - GetDirectionByAttID() */
    /* - rand@plt() */
    /* - AISceneLock() */
    /* - AISceneUnlock() */
    /* - memset@plt() */
    /* - GetTickCount() */
    /* - time@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetFreeIndex__3CAIUl
 * Address: 0x0809d07c
 * Size: 54 instructions */
void GetFreeIndex(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTopTenList__3CAIUl
 * Address: 0x0809d118
 * Size: 50 instructions */
void GetTopTenList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIndex__3CAIUlUl
 * Address: 0x0809d1b0
 * Size: 70 instructions */
void GetIndex(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMaxDamage__3CAIUlRUlRUc
 * Address: 0x0809d288
 * Size: 124 instructions */
void GetMaxDamage(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMinDamage__3CAIUlRUlRUc
 * Address: 0x0809d418
 * Size: 120 instructions */
void GetMinDamage(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: comparepart__FPCvT0
 * Address: 0x0809d598
 * Size: 33 instructions */
void comparepart(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: ProceedWithAggro__3CAIP7NPCInfoUl
 * Address: 0x0809d5f4
 * Size: 175 instructions */
void ProceedWithAggro(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - Lock() */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCPartner__3CAIUlP8_NPCPartRiP10CMemAccessf
 * Address: 0x0809d830
 * Size: 306 instructions */
void GetNPCPartner(void) {
    /* Stack: 92 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByCharID() */
    /* - () */
    /* - GetTranslation() */
    /* - GetNPCCount() */
    /* - () */
    /* - GetMagnitude() */
    /* - qsort@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RefreshTopTarget__3CAIUlP10CMemAccess
 * Address: 0x0809dc04
 * Size: 473 instructions */
void RefreshTopTarget(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - pthread_mutex_lock@plt() */
    /* - GetByCharID() */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Unlock() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - ProceedAggro() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTopTarget__3CAIUl
 * Address: 0x0809e204
 * Size: 19 instructions */
void GetTopTarget(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - RefreshTopTarget() */
    /* TODO: Implement from disassembly */
}

/* Function: Manual_Loot__3CAIUlUlP10CMemAccess
 * Address: 0x0809e22c
 * Size: 89 instructions */
void Manual_Loot(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - () */
    /* - GetTranslation() */
    /* - GetByCharID() */
    /* - AllocateLoot() */
    /* TODO: Implement from disassembly */
}

/* Function: SetDropLootFlag__3CAIUlUc
 * Address: 0x0809e324
 * Size: 35 instructions */
void SetDropLootFlag(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: AIGetClanRating__3CAIUlUl
 * Address: 0x0809e38c
 * Size: 31 instructions */
void AIGetClanRating(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowChangeMove__3CAI
 * Address: 0x0809e3e0
 * Size: 7 instructions */
void ShowChangeMove(void) {
    /* TODO: Implement from disassembly */
}

/* Function: HideChangeMove__3CAI
 * Address: 0x0809e3f0
 * Size: 7 instructions */
void HideChangeMove(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetScriptCount__3CAI
 * Address: 0x0809e400
 * Size: 9 instructions */
void GetScriptCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetClanParty__3CAIUlfPPQ29VKY_SCENE13tObjectHandleRiUl
 * Address: 0x0809e414
 * Size: 187 instructions */
void GetClanParty(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: __7NPCPool
 * Address: 0x0809e664
 * Size: 26 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - pthread_mutex_init@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCSlotCount__7NPCPool
 * Address: 0x0809e6b4
 * Size: 9 instructions */
void GetNPCSlotCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: CreateNPCSlots__7NPCPooli
 * Address: 0x0809e6c4
 * Size: 31 instructions */
void CreateNPCSlots(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._7NPCPool
 * Address: 0x0809e70c
 * Size: 30 instructions */
void _._7NPCPool(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: PutNPC__7NPCPoolP7NPCInfob
 * Address: 0x0809e758
 * Size: 47 instructions */
void PutNPC(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - putmutexlock() */
    /* - putmutexunlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetFreeNPC__7NPCPool
 * Address: 0x0809e7d8
 * Size: 51 instructions */
void GetFreeNPC(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - getmutexlock() */
    /* - getmutexunlock() */
    /* TODO: Implement from disassembly */
}

/* Function: __10NPCPoolMgr
 * Address: 0x0809e864
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: CreatePool__10NPCPoolMgri
 * Address: 0x0809e880
 * Size: 129 instructions */
void CreatePool(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - _._7NPCPool() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._10NPCPoolMgr
 * Address: 0x0809e9f0
 * Size: 53 instructions */
void _._10NPCPoolMgr(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._7NPCPool() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetPool__10NPCPoolMgrUl
 * Address: 0x0809ea78
 * Size: 70 instructions */
void GetPool(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnOnStat__3CAIUcUlUlUl
 * Address: 0x0809eb4c
 * Size: 164 instructions */
void SetSpawnOnStat(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnMax__3CAIUcUlUlUl
 * Address: 0x0809ed9c
 * Size: 136 instructions */
void SetSpawnMax(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnPtDetail__3CAIUlUlP11_STSpawnRecP10CMemAccess
 * Address: 0x0809ef88
 * Size: 176 instructions */
void GetSpawnPtDetail(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - GetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnPt__3CAIfffUlfPP11_STSpawnRec
 * Address: 0x0809f1c8
 * Size: 579 instructions */
void GetSpawnPt(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - GetNextScene() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* - () */
    /* - GetSpawnPointCount() */
    /* - () */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnStat__3CAIRUlT1
 * Address: 0x0809fbe8
 * Size: 68 instructions */
void GetSpawnStat(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnPtByGroup__3CAIUlUlUc
 * Address: 0x0809fcc8
 * Size: 106 instructions */
void SetSpawnPtByGroup(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: ProceedAggro__3CAIUlUsUs
 * Address: 0x0809fe3c
 * Size: 95 instructions */
void ProceedAggro(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckCallForHelp__3CAIUl
 * Address: 0x0809ff50
 * Size: 603 instructions */
void CheckCallForHelp(void) {
    /* Stack: 156 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - GetByAttID() */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Unlock() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - ProceedAggro() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080a07a2
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetMagnitude__C7CVector
 * Address: 0x080a07b0
 * Size: 23 instructions */
void GetMagnitude(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FastSqrt() */
    /* TODO: Implement from disassembly */
}

/* Function: __eq__FRC7CVectorT0
 * Address: 0x080a07e8
 * Size: 25 instructions */
void (void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - memcmp@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: VDot__FRC7CVectorT0
 * Address: 0x080a081c
 * Size: 16 instructions */
void VDot(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Normalize__7CVector
 * Address: 0x080a0840
 * Size: 31 instructions */
void Normalize(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* TODO: Implement from disassembly */
}

/* Function: __pl__FRC7CVectorT0
 * Address: 0x080a0890
 * Size: 34 instructions */
void (void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __ml__FRC7CVectorT0
 * Address: 0x080a08e0
 * Size: 43 instructions */
void (void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __ml__C7CVectorf
 * Address: 0x080a0944
 * Size: 46 instructions */
void (void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __aml__7CVectorf
 * Address: 0x080a09b8
 * Size: 18 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetTranslate__7CMatrixRC7CVector
 * Address: 0x080a09e0
 * Size: 28 instructions */
void SetTranslate(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetTranslate__7CMatrixfff
 * Address: 0x080a0a28
 * Size: 28 instructions */
void SetTranslate(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetRotation__7CMatrixRC7CMatrix
 * Address: 0x080a0a70
 * Size: 33 instructions */
void SetRotation(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __vc__7CMatrixi
 * Address: 0x080a0ad8
 * Size: 13 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __ml__FRC7CMatrixRC7CVector
 * Address: 0x080a0af8
 * Size: 58 instructions */
void (void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCData__18CVKY_CollisionList
 * Address: 0x080a0b88
 * Size: 9 instructions */
void GetNPCData(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCCount__18CVKY_CollisionList
 * Address: 0x080a0b98
 * Size: 9 instructions */
void GetNPCCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __18tVKY_CollisionInfo
 * Address: 0x080a0ba8
 * Size: 23 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __16CSceneSharedData
 * Address: 0x080a0bd0
 * Size: 63 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - _._18CVKY_CollisionList() */
    /* - _._16CVKY_NPCTypeList() */
    /* - _._11CVKY_PCList() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._16CSceneSharedData
 * Address: 0x080a0c90
 * Size: 42 instructions */
void _._16CSceneSharedData(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._18CVKY_CollisionList() */
    /* - _._16CVKY_NPCTypeList() */
    /* - _._11CVKY_PCList() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __5stLoc
 * Address: 0x080a0d00
 * Size: 15 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t17CGEN_NiceLinkList1Z11CPathFinderi
 * Address: 0x080a0d20
 * Size: 21 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._t17CGEN_NiceLinkList1Z11CPathFinder
 * Address: 0x080a0d50
 * Size: 27 instructions */
void _._t17CGEN_NiceLinkList1Z11CPathFinder(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetHead__t17CGEN_NiceLinkList1Z11CPathFinderRPQ2t17CGEN_NiceLinkList1Z11CPathFinder5CNode
 * Address: 0x080a0d90
 * Size: 9 instructions */
void GetHead(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNext__t17CGEN_NiceLinkList1Z11CPathFinderRPQ2t17CGEN_NiceLinkList1Z11CPathFinder5CNode
 * Address: 0x080a0da0
 * Size: 18 instructions */
void GetNext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddHead__t17CGEN_NiceLinkList1Z11CPathFinderP11CPathFinder
 * Address: 0x080a0dc0
 * Size: 83 instructions */
void AddHead(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t17CGEN_NiceLinkList1Z11CPathFinder
 * Address: 0x080a0eb0
 * Size: 46 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _._11CPathFinder() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q2t17CGEN_NiceLinkList1Z11CPathFinder5CNode
 * Address: 0x080a0f30
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: err_exit__FPc
 * Address: 0x080a0f50
 * Size: 20 instructions */
void err_exit(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - fprintf@plt() */
    /* - exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: berr_exit__FPc
 * Address: 0x080a0f84
 * Size: 24 instructions */
void berr_exit(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - BIO_printf@plt() */
    /* - ERR_print_errors@plt() */
    /* - exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: islinefeed__FPci
 * Address: 0x080a0fc8
 * Size: 61 instructions */
void islinefeed(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - printf@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: readPubKey__FPc
 * Address: 0x080a1084
 * Size: 102 instructions */
void readPubKey(void) {
    /* Stack: 2072 bytes */
    /* Calls: */
    /* - ERR_load_crypto_strings@plt() */
    /* - BIO_s_file@plt() */
    /* - BIO_new@plt() */
    /* - BIO_ctrl@plt() */
    /* - perror@plt() */
    /* - exit@plt() */
    /* - BIO_s_mem@plt() */
    /* - BUF_MEM_new@plt() */
    /* - malloc@plt() */
    /* - memcpy@plt() */
    /* - PEM_read_bio_RSA_PUBKEY@plt() */
    /* - ERR_print_errors_fp@plt() */
    /* - BIO_free@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: readPrivKey__FPc
 * Address: 0x080a11d4
 * Size: 107 instructions */
void readPrivKey(void) {
    /* Stack: 2072 bytes */
    /* Calls: */
    /* - OpenSSL_add_all_algorithms@plt() */
    /* - ERR_load_PEM_strings@plt() */
    /* - BIO_s_file@plt() */
    /* - BIO_new@plt() */
    /* - BIO_ctrl@plt() */
    /* - perror@plt() */
    /* - exit@plt() */
    /* - BIO_s_mem@plt() */
    /* - BUF_MEM_new@plt() */
    /* - malloc@plt() */
    /* - memcpy@plt() */
    /* - PEM_read_bio_RSAPrivateKey@plt() */
    /* - ERR_print_errors_fp@plt() */
    /* - BIO_free@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: EncryptData__FPcPiT1T0T0
 * Address: 0x080a1334
 * Size: 267 instructions */
void EncryptData(void) {
    /* Stack: 188 bytes */
    /* Calls: */
    /* - readPubKey() */
    /* - readPrivKey() */
    /* - strlen@plt() */
    /* - div@plt() */
    /* - RSA_size@plt() */
    /* - malloc@plt() */
    /* - memset@plt() */
    /* - RSA_public_encrypt@plt() */
    /* - RSA_private_decrypt@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: DecryptData__FPcN20
 * Address: 0x080a1644
 * Size: 167 instructions */
void DecryptData(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - readPubKey() */
    /* - readPrivKey() */
    /* - RSA_size@plt() */
    /* - malloc@plt() */
    /* - memset@plt() */
    /* - memcpy@plt() */
    /* - RSA_private_decrypt@plt() */
    /* - strlen@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: outenc__FPcT0Pi
 * Address: 0x080a1814
 * Size: 143 instructions */
void outenc(void) {
    /* Stack: 60 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: encode__FPcT0
 * Address: 0x080a19a0
 * Size: 83 instructions */
void encode(void) {
    /* Stack: 112 bytes */
    /* Calls: */
    /* - strlen@plt() */
    /* - outenc() */
    /* TODO: Implement from disassembly */
}

/* Function: outdec__FPcT0iPi
 * Address: 0x080a1aa0
 * Size: 102 instructions */
void outdec(void) {
    /* Stack: 28 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: decode__FPcT0
 * Address: 0x080a1ba8
 * Size: 111 instructions */
void decode(void) {
    /* Stack: 128 bytes */
    /* Calls: */
    /* - strlen@plt() */
    /* - outdec() */
    /* TODO: Implement from disassembly */
}

/* Function: inet_ntoa_safe_thread__FPcUl
 * Address: 0x080a1cf0
 * Size: 32 instructions */
void inet_ntoa_safe_thread(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - sprintf@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080a1d42
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: tcp_connect__FPci
 * Address: 0x080a1d50
 * Size: 67 instructions */
void tcp_connect(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - gethostbyname@plt() */
    /* - berr_exit() */
    /* - memset@plt() */
    /* - htons@plt() */
    /* - socket@plt() */
    /* - connect@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SendData__FiPci
 * Address: 0x080a1e14
 * Size: 333 instructions */
void SendData(void) {
    /* Stack: 8312 bytes */
    /* Calls: */
    /* - gettimeofday@plt() */
    /* - memset@plt() */
    /* - gethostname@plt() */
    /* - gethostbyname_r@plt() */
    /* - inet_ntoa_safe_thread() */
    /* - srand@plt() */
    /* - rand@plt() */
    /* - sprintf@plt() */
    /* - strlen@plt() */
    /* - tcp_connect() */
    /* - EncryptData() */
    /* - memcpy@plt() */
    /* - send@plt() */
    /* - free@plt() */
    /* - recv@plt() */
    /* - close@plt() */
    /* - DecryptData() */
    /* - strcmp@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080a2279
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: negindex__FP9lua_Statei
 * Address: 0x080a2280
 * Size: 35 instructions */
void negindex(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaA_index__FP9lua_Statei
 * Address: 0x080a22e4
 * Size: 17 instructions */
void luaA_index(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - negindex() */
    /* TODO: Implement from disassembly */
}

/* Function: luaA_indexAcceptable__FP9lua_Statei
 * Address: 0x080a230c
 * Size: 21 instructions */
void luaA_indexAcceptable(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - negindex() */
    /* TODO: Implement from disassembly */
}

/* Function: luaA_pushobject__FP9lua_StatePC11lua_TObject
 * Address: 0x080a233c
 * Size: 28 instructions */
void luaA_pushobject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_checkstack__FP9lua_Statei
 * Address: 0x080a2380
 * Size: 50 instructions */
void lua_checkstack(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_xmove__FP9lua_StateT0i
 * Address: 0x080a23fc
 * Size: 36 instructions */
void lua_xmove(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_atpanic__FP9lua_StatePFP9lua_State_i
 * Address: 0x080a244c
 * Size: 11 instructions */
void lua_atpanic(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_newthread__FP9lua_State
 * Address: 0x080a2464
 * Size: 26 instructions */
void lua_newthread(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaE_newthread() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_gettop__FP9lua_State
 * Address: 0x080a24a8
 * Size: 21 instructions */
void lua_gettop(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_settop__FP9lua_Statei
 * Address: 0x080a24d8
 * Size: 43 instructions */
void lua_settop(void) {
    /* Stack: 12 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: lua_remove__FP9lua_Statei
 * Address: 0x080a2548
 * Size: 24 instructions */
void lua_remove(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_insert__FP9lua_Statei
 * Address: 0x080a2584
 * Size: 36 instructions */
void lua_insert(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_replace__FP9lua_Statei
 * Address: 0x080a25d8
 * Size: 24 instructions */
void lua_replace(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushvalue__FP9lua_Statei
 * Address: 0x080a2610
 * Size: 21 instructions */
void lua_pushvalue(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_type__FP9lua_Statei
 * Address: 0x080a2644
 * Size: 15 instructions */
void lua_type(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_typename__FP9lua_Statei
 * Address: 0x080a2668
 * Size: 12 instructions */
void lua_typename(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_iscfunction__FP9lua_Statei
 * Address: 0x080a2688
 * Size: 21 instructions */
void lua_iscfunction(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_isnumber__FP9lua_Statei
 * Address: 0x080a26bc
 * Size: 28 instructions */
void lua_isnumber(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* - luaV_tonumber() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_isstring__FP9lua_Statei
 * Address: 0x080a2700
 * Size: 13 instructions */
void lua_isstring(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_type() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_isuserdata__FP9lua_Statei
 * Address: 0x080a2724
 * Size: 20 instructions */
void lua_isuserdata(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_rawequal__FP9lua_Stateii
 * Address: 0x080a2754
 * Size: 34 instructions */
void lua_rawequal(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* - luaO_rawequalObj() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_equal__FP9lua_Stateii
 * Address: 0x080a279c
 * Size: 45 instructions */
void lua_equal(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* - luaV_equalval() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_lessthan__FP9lua_Stateii
 * Address: 0x080a27fc
 * Size: 38 instructions */
void lua_lessthan(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* - luaV_lessthan() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_tonumber__FP9lua_Statei
 * Address: 0x080a284c
 * Size: 27 instructions */
void lua_tonumber(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* - luaV_tonumber() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_toboolean__FP9lua_Statei
 * Address: 0x080a288c
 * Size: 21 instructions */
void lua_toboolean(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_tostring__FP9lua_Statei
 * Address: 0x080a28c0
 * Size: 47 instructions */
void lua_tostring(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* - luaV_tostring() */
    /* - luaC_collectgarbage() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_strlen__FP9lua_Statei
 * Address: 0x080a2930
 * Size: 36 instructions */
void lua_strlen(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* - luaV_tostring() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_tocfunction__FP9lua_Statei
 * Address: 0x080a2980
 * Size: 20 instructions */
void lua_tocfunction(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_touserdata__FP9lua_Statei
 * Address: 0x080a29b0
 * Size: 24 instructions */
void lua_touserdata(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_tothread__FP9lua_Statei
 * Address: 0x080a29ec
 * Size: 17 instructions */
void lua_tothread(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_topointer__FP9lua_Statei
 * Address: 0x080a2a14
 * Size: 35 instructions */
void lua_topointer(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* - lua_touserdata() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushnil__FP9lua_State
 * Address: 0x080a2a6c
 * Size: 9 instructions */
void lua_pushnil(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushnumber__FP9lua_Stated
 * Address: 0x080a2a84
 * Size: 11 instructions */
void lua_pushnumber(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushlstring__FP9lua_StatePCcUi
 * Address: 0x080a2aa0
 * Size: 28 instructions */
void lua_pushlstring(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushstring__FP9lua_StatePCc
 * Address: 0x080a2ae8
 * Size: 30 instructions */
void lua_pushstring(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushvfstring__FP9lua_StatePCcPv
 * Address: 0x080a2b28
 * Size: 22 instructions */
void lua_pushvfstring(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaO_pushvfstring() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushfstring__FP9lua_StatePCce
 * Address: 0x080a2b60
 * Size: 23 instructions */
void lua_pushfstring(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaO_pushvfstring() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushcclosure__FP9lua_StatePFP9lua_State_ii
 * Address: 0x080a2b98
 * Size: 58 instructions */
void lua_pushcclosure(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaF_newCclosure() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushboolean__FP9lua_Statei
 * Address: 0x080a2c2c
 * Size: 17 instructions */
void lua_pushboolean(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushlightuserdata__FP9lua_StatePv
 * Address: 0x080a2c54
 * Size: 11 instructions */
void lua_pushlightuserdata(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_gettable__FP9lua_Statei
 * Address: 0x080a2c70
 * Size: 29 instructions */
void lua_gettable(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* - luaV_gettable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_rawget__FP9lua_Statei
 * Address: 0x080a2cb4
 * Size: 28 instructions */
void lua_rawget(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* - luaH_get() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_rawgeti__FP9lua_Stateii
 * Address: 0x080a2cfc
 * Size: 30 instructions */
void lua_rawgeti(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* - luaH_getnum() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_newtable__FP9lua_State
 * Address: 0x080a2d44
 * Size: 29 instructions */
void lua_newtable(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaH_new() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_getmetatable__FP9lua_Statei
 * Address: 0x080a2d8c
 * Size: 39 instructions */
void lua_getmetatable(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_indexAcceptable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_getfenv__FP9lua_Statei
 * Address: 0x080a2dec
 * Size: 28 instructions */
void lua_getfenv(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_settable__FP9lua_Statei
 * Address: 0x080a2e34
 * Size: 23 instructions */
void lua_settable(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* - luaV_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_rawset__FP9lua_Statei
 * Address: 0x080a2e68
 * Size: 32 instructions */
void lua_rawset(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* - luaH_set() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_rawseti__FP9lua_Stateii
 * Address: 0x080a2eb4
 * Size: 33 instructions */
void lua_rawseti(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* - luaH_setnum() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_setmetatable__FP9lua_Statei
 * Address: 0x080a2f00
 * Size: 38 instructions */
void lua_setmetatable(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_setfenv__FP9lua_Statei
 * Address: 0x080a2f60
 * Size: 32 instructions */
void lua_setfenv(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_call__FP9lua_Stateii
 * Address: 0x080a2fb0
 * Size: 17 instructions */
void lua_call(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaD_call() */
    /* TODO: Implement from disassembly */
}

/* Function: f_call__FP9lua_StatePv
 * Address: 0x080a2fdc
 * Size: 12 instructions */
void f_call(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaD_call() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pcall__FP9lua_Stateiii
 * Address: 0x080a2ff8
 * Size: 43 instructions */
void lua_pcall(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* - luaD_pcall() */
    /* TODO: Implement from disassembly */
}

/* Function: f_Ccall__FP9lua_StatePv
 * Address: 0x080a3060
 * Size: 61 instructions */
void f_Ccall(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaF_newCclosure() */
    /* - luaD_growstack() */
    /* - luaD_call() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_cpcall__FP9lua_StatePFP9lua_State_iPv
 * Address: 0x080a3100
 * Size: 25 instructions */
void lua_cpcall(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaD_pcall() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_load__FP9lua_StatePFP9lua_StatePvPUi_PCcPvPCc
 * Address: 0x080a313c
 * Size: 29 instructions */
void lua_load(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - luaZ_init() */
    /* - luaZ_lookahead() */
    /* - luaD_protectedparser() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_dump__FP9lua_StatePFP9lua_StatePCvUiPv_iPv
 * Address: 0x080a3188
 * Size: 21 instructions */
void lua_dump(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaU_dump() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_getgcthreshold__FP9lua_State
 * Address: 0x080a31c4
 * Size: 9 instructions */
void lua_getgcthreshold(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_getgccount__FP9lua_State
 * Address: 0x080a31d8
 * Size: 9 instructions */
void lua_getgccount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_setgcthreshold__FP9lua_Statei
 * Address: 0x080a31ec
 * Size: 24 instructions */
void lua_setgcthreshold(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_version__Fv
 * Address: 0x080a3230
 * Size: 6 instructions */
void lua_version(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_error__FP9lua_State
 * Address: 0x080a323c
 * Size: 10 instructions */
void lua_error(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaG_errormsg() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_next__FP9lua_Statei
 * Address: 0x080a3254
 * Size: 27 instructions */
void lua_next(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* - luaH_next() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_concat__FP9lua_Statei
 * Address: 0x080a329c
 * Size: 59 instructions */
void lua_concat(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaV_concat() */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_newuserdata__FP9lua_StateUi
 * Address: 0x080a3330
 * Size: 27 instructions */
void lua_newuserdata(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaS_newudata() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_pushupvalues__FP9lua_State
 * Address: 0x080a3378
 * Size: 47 instructions */
void lua_pushupvalues(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: aux_upvalue__FP9lua_StateiiPP11lua_TObject
 * Address: 0x080a33e8
 * Size: 43 instructions */
void aux_upvalue(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaA_index() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_getupvalue__FP9lua_Stateii
 * Address: 0x080a345c
 * Size: 30 instructions */
void lua_getupvalue(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - aux_upvalue() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_setupvalue__FP9lua_Stateii
 * Address: 0x080a34a0
 * Size: 33 instructions */
void lua_setupvalue(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - aux_upvalue() */
    /* TODO: Implement from disassembly */
}

/* Function: currentpc__FP8CallInfo
 * Address: 0x080a34f0
 * Size: 24 instructions */
void currentpc(void) {
    /* TODO: Implement from disassembly */
}

/* Function: currentline__FP8CallInfo
 * Address: 0x080a352c
 * Size: 27 instructions */
void currentline(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - currentpc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaG_inithooks__FP9lua_State
 * Address: 0x080a356c
 * Size: 24 instructions */
void luaG_inithooks(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - currentpc() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_sethook__FP9lua_StatePFP9lua_StateP9lua_Debug_vii
 * Address: 0x080a35a0
 * Size: 22 instructions */
void lua_sethook(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_gethook__FP9lua_State
 * Address: 0x080a35d4
 * Size: 7 instructions */
void lua_gethook(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_gethookmask__FP9lua_State
 * Address: 0x080a35e0
 * Size: 6 instructions */
void lua_gethookmask(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_gethookcount__FP9lua_State
 * Address: 0x080a35ec
 * Size: 7 instructions */
void lua_gethookcount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_getstack__FP9lua_StateiP9lua_Debug
 * Address: 0x080a35f8
 * Size: 60 instructions */
void lua_getstack(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getluaproto__FP8CallInfo
 * Address: 0x080a3680
 * Size: 15 instructions */
void getluaproto(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lua_getlocal__FP9lua_StatePC9lua_Debugi
 * Address: 0x080a36a4
 * Size: 50 instructions */
void lua_getlocal(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - getluaproto() */
    /* - currentpc() */
    /* - luaF_getlocalname() */
    /* - luaA_pushobject() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_setlocal__FP9lua_StatePC9lua_Debugi
 * Address: 0x080a3718
 * Size: 57 instructions */
void lua_setlocal(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - getluaproto() */
    /* - currentpc() */
    /* - luaF_getlocalname() */
    /* TODO: Implement from disassembly */
}

/* Function: funcinfo__FP9lua_DebugP11lua_TObject
 * Address: 0x080a37a0
 * Size: 34 instructions */
void funcinfo(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaO_chunkid() */
    /* TODO: Implement from disassembly */
}

/* Function: travglobals__FP9lua_StatePC11lua_TObject
 * Address: 0x080a380c
 * Size: 47 instructions */
void travglobals(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaO_rawequalObj() */
    /* TODO: Implement from disassembly */
}

/* Function: info_tailcall__FP9lua_StateP9lua_Debug
 * Address: 0x080a3884
 * Size: 29 instructions */
void info_tailcall(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaO_chunkid() */
    /* TODO: Implement from disassembly */
}

/* Function: auxgetinfo__FP9lua_StatePCcP9lua_DebugP11lua_TObjectP8CallInfo
 * Address: 0x080a38e4
 * Size: 93 instructions */
void auxgetinfo(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - funcinfo() */
    /* - currentline() */
    /* - getfuncname() */
    /* - travglobals() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_getinfo__FP9lua_StatePCcP9lua_Debug
 * Address: 0x080a3a04
 * Size: 87 instructions */
void lua_getinfo(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaG_runerror() */
    /* - auxgetinfo() */
    /* - info_tailcall() */
    /* - strchr@plt() */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: precheck__FPC5Proto
 * Address: 0x080a3adc
 * Size: 20 instructions */
void precheck(void) {
    /* TODO: Implement from disassembly */
}

/* Function: checkopenop__FPC5Protoi
 * Address: 0x080a3b0c
 * Size: 23 instructions */
void checkopenop(void) {
    /* TODO: Implement from disassembly */
}

/* Function: checkRK__FPC5Protoi
 * Address: 0x080a3b48
 * Size: 20 instructions */
void checkRK(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaG_symbexec__FPC5Protoii
 * Address: 0x080a3b7c
 * Size: 288 instructions */
void luaG_symbexec(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - precheck() */
    /* - checkRK() */
    /* - checkopenop() */
    /* TODO: Implement from disassembly */
}

/* Function: luaG_checkcode__FPC5Proto
 * Address: 0x080a3f40
 * Size: 11 instructions */
void luaG_checkcode(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaG_symbexec() */
    /* TODO: Implement from disassembly */
}

/* Function: kname__FP5Protoi
 * Address: 0x080a3f5c
 * Size: 17 instructions */
void kname(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getobjname__FP8CallInfoiPPCc
 * Address: 0x080a3f8c
 * Size: 101 instructions */
void getobjname(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - currentpc() */
    /* - luaF_getlocalname() */
    /* - luaG_symbexec() */
    /* - kname() */
    /* TODO: Implement from disassembly */
}

/* Function: getfuncname__FP8CallInfoPPCc
 * Address: 0x080a409c
 * Size: 43 instructions */
void getfuncname(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - currentpc() */
    /* - getobjname() */
    /* TODO: Implement from disassembly */
}

/* Function: isinstack__FP8CallInfoPC11lua_TObject
 * Address: 0x080a4108
 * Size: 22 instructions */
void isinstack(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaG_typeerror__FP9lua_StatePC11lua_TObjectPCc
 * Address: 0x080a413c
 * Size: 65 instructions */
void luaG_typeerror(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - isinstack() */
    /* - getobjname() */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaG_concaterror__FP9lua_StateP11lua_TObjectT1
 * Address: 0x080a41dc
 * Size: 14 instructions */
void luaG_concaterror(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaG_typeerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaG_aritherror__FP9lua_StatePC11lua_TObjectT1
 * Address: 0x080a4200
 * Size: 26 instructions */
void luaG_aritherror(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - luaV_tonumber() */
    /* - luaG_typeerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaG_ordererror__FP9lua_StatePC11lua_TObjectT1
 * Address: 0x080a423c
 * Size: 38 instructions */
void luaG_ordererror(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: addinfo__FP9lua_StatePCc
 * Address: 0x080a4298
 * Size: 43 instructions */
void addinfo(void) {
    /* Stack: 76 bytes */
    /* Calls: */
    /* - currentline() */
    /* - getluaproto() */
    /* - luaO_chunkid() */
    /* - luaO_pushfstring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaG_errormsg__FP9lua_State
 * Address: 0x080a42fc
 * Size: 62 instructions */
void luaG_errormsg(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaD_throw() */
    /* - luaD_growstack() */
    /* - luaD_call() */
    /* TODO: Implement from disassembly */
}

/* Function: luaG_runerror__FP9lua_StatePCce
 * Address: 0x080a4398
 * Size: 23 instructions */
void luaG_runerror(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaO_pushvfstring() */
    /* - addinfo() */
    /* - luaG_errormsg() */
    /* TODO: Implement from disassembly */
}

/* Function: seterrorobj__FP9lua_StateiP11lua_TObject
 * Address: 0x080a43d0
 * Size: 50 instructions */
void seterrorobj(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_throw__FP9lua_Statei
 * Address: 0x080a4454
 * Size: 25 instructions */
void luaD_throw(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - longjmp@plt() */
    /* - exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_rawrunprotected__FP9lua_StatePFP9lua_StatePv_vPv
 * Address: 0x080a4498
 * Size: 29 instructions */
void luaD_rawrunprotected(void) {
    /* Stack: 184 bytes */
    /* Calls: */
    /* - _setjmp@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: restore_stack_limit__FP9lua_State
 * Address: 0x080a44f4
 * Size: 36 instructions */
void restore_stack_limit(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaD_reallocCI() */
    /* TODO: Implement from disassembly */
}

/* Function: correctstack__FP9lua_StateP11lua_TObject
 * Address: 0x080a4554
 * Size: 41 instructions */
void correctstack(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaD_reallocstack__FP9lua_Statei
 * Address: 0x080a45b8
 * Size: 34 instructions */
void luaD_reallocstack(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* - correctstack() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_reallocCI__FP9lua_Statei
 * Address: 0x080a4604
 * Size: 37 instructions */
void luaD_reallocCI(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_growstack__FP9lua_Statei
 * Address: 0x080a4658
 * Size: 22 instructions */
void luaD_growstack(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaD_reallocstack() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_growCI__FP9lua_State
 * Address: 0x080a4690
 * Size: 30 instructions */
void luaD_growCI(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaD_throw() */
    /* - luaD_reallocCI() */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_callhook__FP9lua_Stateii
 * Address: 0x080a46e0
 * Size: 77 instructions */
void luaD_callhook(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: adjust_varargs__FP9lua_StateiP11lua_TObject
 * Address: 0x080a47b0
 * Size: 141 instructions */
void adjust_varargs(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - luaD_growstack() */
    /* - luaH_new() */
    /* - luaH_setnum() */
    /* - luaS_newlstr() */
    /* - luaH_set() */
    /* TODO: Implement from disassembly */
}

/* Function: tryfuncTM__FP9lua_StateP11lua_TObject
 * Address: 0x080a492c
 * Size: 64 instructions */
void tryfuncTM(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaT_gettmbyobj() */
    /* - luaG_typeerror() */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_precall__FP9lua_StateP11lua_TObject
 * Address: 0x080a49c8
 * Size: 135 instructions */
void luaD_precall(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - tryfuncTM() */
    /* - luaD_growCI() */
    /* - adjust_varargs() */
    /* - luaD_growstack() */
    /* - luaD_callhook() */
    /* TODO: Implement from disassembly */
}

/* Function: callrethooks__FP9lua_StateP11lua_TObject
 * Address: 0x080a4b44
 * Size: 44 instructions */
void callrethooks(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaD_callhook() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_poscall__FP9lua_StateiP11lua_TObject
 * Address: 0x080a4bac
 * Size: 59 instructions */
void luaD_poscall(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - callrethooks() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_call__FP9lua_StateP11lua_TObjecti
 * Address: 0x080a4c38
 * Size: 56 instructions */
void luaD_call(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaG_runerror() */
    /* - luaD_throw() */
    /* - luaD_precall() */
    /* - luaV_execute() */
    /* - luaD_poscall() */
    /* - luaC_collectgarbage() */
    /* TODO: Implement from disassembly */
}

/* Function: resume__FP9lua_StatePv
 * Address: 0x080a4cd0
 * Size: 67 instructions */
void resume(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaD_precall() */
    /* - luaD_poscall() */
    /* - luaV_execute() */
    /* TODO: Implement from disassembly */
}

/* Function: resume_error__FP9lua_StatePCc
 * Address: 0x080a4d7c
 * Size: 45 instructions */
void resume_error(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaS_newlstr() */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_resume__FP9lua_Statei
 * Address: 0x080a4de8
 * Size: 77 instructions */
void lua_resume(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - resume_error() */
    /* - luaD_rawrunprotected() */
    /* - luaF_close() */
    /* - seterrorobj() */
    /* - restore_stack_limit() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_yield__FP9lua_Statei
 * Address: 0x080a4eb4
 * Size: 69 instructions */
void lua_yield(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_pcall__FP9lua_StatePFP9lua_StatePv_vPvii
 * Address: 0x080a4f70
 * Size: 64 instructions */
void luaD_pcall(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaD_rawrunprotected() */
    /* - luaF_close() */
    /* - seterrorobj() */
    /* - restore_stack_limit() */
    /* TODO: Implement from disassembly */
}

/* Function: f_parser__FP9lua_StatePv
 * Address: 0x080a5010
 * Size: 61 instructions */
void f_parser(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaC_collectgarbage() */
    /* - luaU_undump() */
    /* - luaY_parser() */
    /* - luaF_newLclosure() */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: luaD_protectedparser__FP9lua_StateP3Zioi
 * Address: 0x080a50ac
 * Size: 48 instructions */
void luaD_protectedparser(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaD_rawrunprotected() */
    /* - luaM_realloc() */
    /* - seterrorobj() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpBlock__FPCvUiP9DumpState
 * Address: 0x080a5130
 * Size: 13 instructions */
void DumpBlock(void) {
    /* Stack: 8 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: DumpByte__FiP9DumpState
 * Address: 0x080a514c
 * Size: 14 instructions */
void DumpByte(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - DumpBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpInt__FiP9DumpState
 * Address: 0x080a516c
 * Size: 12 instructions */
void DumpInt(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - DumpBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpSize__FUiP9DumpState
 * Address: 0x080a5188
 * Size: 12 instructions */
void DumpSize(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - DumpBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpNumber__FdP9DumpState
 * Address: 0x080a51a4
 * Size: 12 instructions */
void DumpNumber(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - DumpBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpString__FP7TStringP9DumpState
 * Address: 0x080a51c0
 * Size: 35 instructions */
void DumpString(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - DumpSize() */
    /* - DumpBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpCode__FPC5ProtoP9DumpState
 * Address: 0x080a5208
 * Size: 23 instructions */
void DumpCode(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - DumpInt() */
    /* - DumpBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpLocals__FPC5ProtoP9DumpState
 * Address: 0x080a523c
 * Size: 47 instructions */
void DumpLocals(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - DumpInt() */
    /* - DumpString() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpLines__FPC5ProtoP9DumpState
 * Address: 0x080a52b0
 * Size: 23 instructions */
void DumpLines(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - DumpInt() */
    /* - DumpBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpUpvalues__FPC5ProtoP9DumpState
 * Address: 0x080a52e4
 * Size: 35 instructions */
void DumpUpvalues(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - DumpInt() */
    /* - DumpString() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpConstants__FPC5ProtoP9DumpState
 * Address: 0x080a5334
 * Size: 74 instructions */
void DumpConstants(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - DumpInt() */
    /* - DumpByte() */
    /* - DumpNumber() */
    /* - DumpString() */
    /* - DumpFunction() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpFunction__FPC5ProtoPC7TStringP9DumpState
 * Address: 0x080a53ec
 * Size: 70 instructions */
void DumpFunction(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - DumpString() */
    /* - DumpInt() */
    /* - DumpByte() */
    /* - DumpLines() */
    /* - DumpLocals() */
    /* - DumpUpvalues() */
    /* - DumpConstants() */
    /* - DumpCode() */
    /* TODO: Implement from disassembly */
}

/* Function: DumpHeader__FP9DumpState
 * Address: 0x080a549c
 * Size: 65 instructions */
void DumpHeader(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DumpBlock() */
    /* - DumpByte() */
    /* - luaU_endianness() */
    /* - DumpNumber() */
    /* TODO: Implement from disassembly */
}

/* Function: luaU_dump__FP9lua_StatePC5ProtoPFP9lua_StatePCvUiPv_iPv
 * Address: 0x080a5554
 * Size: 26 instructions */
void luaU_dump(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - DumpHeader() */
    /* - DumpFunction() */
    /* TODO: Implement from disassembly */
}

/* Function: luaF_newCclosure__FP9lua_Statei
 * Address: 0x080a5590
 * Size: 30 instructions */
void luaF_newCclosure(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* - luaC_link() */
    /* TODO: Implement from disassembly */
}

/* Function: luaF_newLclosure__FP9lua_StateiP11lua_TObject
 * Address: 0x080a55d4
 * Size: 38 instructions */
void luaF_newLclosure(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* - luaC_link() */
    /* TODO: Implement from disassembly */
}

/* Function: luaF_findupval__FP9lua_StateP11lua_TObject
 * Address: 0x080a562c
 * Size: 38 instructions */
void luaF_findupval(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaF_close__FP9lua_StateP11lua_TObject
 * Address: 0x080a5680
 * Size: 38 instructions */
void luaF_close(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaC_link() */
    /* TODO: Implement from disassembly */
}

/* Function: luaF_newproto__FP9lua_State
 * Address: 0x080a56d4
 * Size: 41 instructions */
void luaF_newproto(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* - luaC_link() */
    /* TODO: Implement from disassembly */
}

/* Function: luaF_freeproto__FP9lua_StateP5Proto
 * Address: 0x080a5774
 * Size: 65 instructions */
void luaF_freeproto(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaF_freeclosure__FP9lua_StateP7Closure
 * Address: 0x080a5810
 * Size: 20 instructions */
void luaF_freeclosure(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaF_getlocalname__FPC5Protoii
 * Address: 0x080a584c
 * Size: 40 instructions */
void luaF_getlocalname(void) {
    /* Stack: 12 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: reallymarkobject__FP7GCStateP8GCObject
 * Address: 0x080a58a0
 * Size: 36 instructions */
void reallymarkobject(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - reallymarkobject() */
    /* TODO: Implement from disassembly */
}

/* Function: marktmu__FP7GCState
 * Address: 0x080a58fc
 * Size: 25 instructions */
void marktmu(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - reallymarkobject() */
    /* TODO: Implement from disassembly */
}

/* Function: luaC_separateudata__FP9lua_State
 * Address: 0x080a5930
 * Size: 66 instructions */
void luaC_separateudata(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaT_gettm() */
    /* TODO: Implement from disassembly */
}

/* Function: removekey__FP4Node
 * Address: 0x080a59e0
 * Size: 10 instructions */
void removekey(void) {
    /* TODO: Implement from disassembly */
}

/* Function: traversetable__FP7GCStateP5Table
 * Address: 0x080a59fc
 * Size: 166 instructions */
void traversetable(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - reallymarkobject() */
    /* - luaT_gettm() */
    /* - strchr@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: traverseproto__FP7GCStateP5Proto
 * Address: 0x080a5bd8
 * Size: 66 instructions */
void traverseproto(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - reallymarkobject() */
    /* TODO: Implement from disassembly */
}

/* Function: traverseclosure__FP7GCStateP7Closure
 * Address: 0x080a5c74
 * Size: 79 instructions */
void traverseclosure(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - reallymarkobject() */
    /* TODO: Implement from disassembly */
}

/* Function: checkstacksizes__FP9lua_StateP11lua_TObject
 * Address: 0x080a5d40
 * Size: 69 instructions */
void checkstacksizes(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaD_reallocCI() */
    /* - luaD_reallocstack() */
    /* TODO: Implement from disassembly */
}

/* Function: traversestack__FP7GCStateP9lua_State
 * Address: 0x080a5de8
 * Size: 66 instructions */
void traversestack(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - reallymarkobject() */
    /* - checkstacksizes() */
    /* TODO: Implement from disassembly */
}

/* Function: propagatemarks__FP7GCState
 * Address: 0x080a5e88
 * Size: 55 instructions */
void propagatemarks(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - traversetable() */
    /* - traverseclosure() */
    /* - traversestack() */
    /* - traverseproto() */
    /* TODO: Implement from disassembly */
}

/* Function: valismarked__FPC11lua_TObject
 * Address: 0x080a5f0c
 * Size: 18 instructions */
void valismarked(void) {
    /* TODO: Implement from disassembly */
}

/* Function: cleartablekeys__FP8GCObject
 * Address: 0x080a5f38
 * Size: 46 instructions */
void cleartablekeys(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - valismarked() */
    /* - removekey() */
    /* TODO: Implement from disassembly */
}

/* Function: cleartablevalues__FP8GCObject
 * Address: 0x080a5fb4
 * Size: 67 instructions */
void cleartablevalues(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - valismarked() */
    /* - removekey() */
    /* TODO: Implement from disassembly */
}

/* Function: freeobj__FP9lua_StateP8GCObject
 * Address: 0x080a6078
 * Size: 52 instructions */
void freeobj(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaF_freeproto() */
    /* - luaF_freeclosure() */
    /* - luaH_free() */
    /* - luaE_freethread() */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: sweeplist__FP9lua_StatePP8GCObjecti
 * Address: 0x080a60f4
 * Size: 35 instructions */
void sweeplist(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - freeobj() */
    /* TODO: Implement from disassembly */
}

/* Function: sweepstrings__FP9lua_Statei
 * Address: 0x080a613c
 * Size: 32 instructions */
void sweepstrings(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - sweeplist() */
    /* TODO: Implement from disassembly */
}

/* Function: checkSizes__FP9lua_StateUi
 * Address: 0x080a617c
 * Size: 52 instructions */
void checkSizes(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaS_resize() */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: do1gcTM__FP9lua_StateP5Udata
 * Address: 0x080a61f8
 * Size: 46 instructions */
void do1gcTM(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaT_gettm() */
    /* - luaD_call() */
    /* TODO: Implement from disassembly */
}

/* Function: luaC_callGCTM__FP9lua_State
 * Address: 0x080a626c
 * Size: 38 instructions */
void luaC_callGCTM(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - do1gcTM() */
    /* TODO: Implement from disassembly */
}

/* Function: luaC_sweep__FP9lua_Statei
 * Address: 0x080a62d8
 * Size: 35 instructions */
void luaC_sweep(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - sweeplist() */
    /* - sweepstrings() */
    /* TODO: Implement from disassembly */
}

/* Function: markroot__FP7GCStateP9lua_State
 * Address: 0x080a6328
 * Size: 50 instructions */
void markroot(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - reallymarkobject() */
    /* - traversestack() */
    /* TODO: Implement from disassembly */
}

/* Function: mark__FP9lua_State
 * Address: 0x080a63a4
 * Size: 68 instructions */
void mark(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - markroot() */
    /* - propagatemarks() */
    /* - cleartablevalues() */
    /* - luaC_separateudata() */
    /* - marktmu() */
    /* - cleartablekeys() */
    /* TODO: Implement from disassembly */
}

/* Function: luaC_collectgarbage__FP9lua_State
 * Address: 0x080a647c
 * Size: 28 instructions */
void luaC_collectgarbage(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - mark() */
    /* - luaC_sweep() */
    /* - checkSizes() */
    /* - luaC_callGCTM() */
    /* TODO: Implement from disassembly */
}

/* Function: luaC_link__FP9lua_StateP8GCObjectUc
 * Address: 0x080a64bc
 * Size: 30 instructions */
void luaC_link(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaM_growaux__FP9lua_StatePvPiiiPCc
 * Address: 0x080a64f0
 * Size: 51 instructions */
void luaM_growaux(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaG_runerror() */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaM_realloc__FP9lua_StatePvUlUl
 * Address: 0x080a6564
 * Size: 59 instructions */
void luaM_realloc(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - free@plt() */
    /* - luaG_runerror() */
    /* - realloc@plt() */
    /* - luaD_throw() */
    /* TODO: Implement from disassembly */
}

/* Function: luaO_int2fb__FUi
 * Address: 0x080a65f0
 * Size: 16 instructions */
void luaO_int2fb(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaO_log2__FUi
 * Address: 0x080a6610
 * Size: 33 instructions */
void luaO_log2(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaO_rawequalObj__FPC11lua_TObjectT0
 * Address: 0x080a6680
 * Size: 37 instructions */
void luaO_rawequalObj(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaO_str2d__FPCcPd
 * Address: 0x080a66dc
 * Size: 54 instructions */
void luaO_str2d(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: pushstr__FP9lua_StatePCc
 * Address: 0x080a6778
 * Size: 41 instructions */
void pushstr(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaS_newlstr() */
    /* - luaD_growstack() */
    /* TODO: Implement from disassembly */
}

/* Function: luaO_pushvfstring__FP9lua_StatePCcPv
 * Address: 0x080a67d8
 * Size: 181 instructions */
void luaO_pushvfstring(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - pushstr() */
    /* - luaS_newlstr() */
    /* - luaD_growstack() */
    /* - strchr@plt() */
    /* - luaV_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: luaO_pushfstring__FP9lua_StatePCce
 * Address: 0x080a69d8
 * Size: 12 instructions */
void luaO_pushfstring(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaO_pushvfstring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaO_chunkid__FPcPCci
 * Address: 0x080a69f4
 * Size: 100 instructions */
void luaO_chunkid(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - strncpy@plt() */
    /* - strcat@plt() */
    /* - strcspn@plt() */
    /* - strncat@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: next__FP8LexState
 * Address: 0x080a6b00
 * Size: 27 instructions */
void next(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaX_lex() */
    /* TODO: Implement from disassembly */
}

/* Function: lookahead__FP8LexState
 * Address: 0x080a6b48
 * Size: 15 instructions */
void lookahead(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaX_lex() */
    /* TODO: Implement from disassembly */
}

/* Function: error_expected__FP8LexStatei
 * Address: 0x080a6b68
 * Size: 22 instructions */
void error_expected(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaX_token2str() */
    /* - luaO_pushfstring() */
    /* - luaX_syntaxerror() */
    /* TODO: Implement from disassembly */
}

/* Function: testnext__FP8LexStatei
 * Address: 0x080a6ba0
 * Size: 16 instructions */
void testnext(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - next() */
    /* TODO: Implement from disassembly */
}

/* Function: check__FP8LexStatei
 * Address: 0x080a6bc8
 * Size: 23 instructions */
void check(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - testnext() */
    /* - error_expected() */
    /* TODO: Implement from disassembly */
}

/* Function: check_match__FP8LexStateiii
 * Address: 0x080a6bf8
 * Size: 52 instructions */
void check_match(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - testnext() */
    /* - error_expected() */
    /* - luaX_token2str() */
    /* - luaO_pushfstring() */
    /* - luaX_syntaxerror() */
    /* TODO: Implement from disassembly */
}

/* Function: str_checkname__FP8LexState
 * Address: 0x080a6c74
 * Size: 24 instructions */
void str_checkname(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaX_syntaxerror() */
    /* - next() */
    /* TODO: Implement from disassembly */
}

/* Function: init_exp__FP7expdesc7expkindi
 * Address: 0x080a6cb0
 * Size: 12 instructions */
void init_exp(void) {
    /* TODO: Implement from disassembly */
}

/* Function: codestring__FP8LexStateP7expdescP7TString
 * Address: 0x080a6cd4
 * Size: 18 instructions */
void codestring(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaK_stringK() */
    /* - init_exp() */
    /* TODO: Implement from disassembly */
}

/* Function: checkname__FP8LexStateP7expdesc
 * Address: 0x080a6d00
 * Size: 21 instructions */
void checkname(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - str_checkname() */
    /* - codestring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaI_registerlocalvar__FP8LexStateP7TString
 * Address: 0x080a6d2c
 * Size: 35 instructions */
void luaI_registerlocalvar(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_growaux() */
    /* TODO: Implement from disassembly */
}

/* Function: new_localvar__FP8LexStateP7TStringi
 * Address: 0x080a6d84
 * Size: 32 instructions */
void new_localvar(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaX_checklimit() */
    /* - luaI_registerlocalvar() */
    /* TODO: Implement from disassembly */
}

/* Function: adjustlocalvars__FP8LexStatei
 * Address: 0x080a6dd0
 * Size: 29 instructions */
void adjustlocalvars(void) {
    /* TODO: Implement from disassembly */
}

/* Function: removevars__FP8LexStatei
 * Address: 0x080a6e10
 * Size: 30 instructions */
void removevars(void) {
    /* TODO: Implement from disassembly */
}

/* Function: new_localvarstr__FP8LexStatePCci
 * Address: 0x080a6e58
 * Size: 31 instructions */
void new_localvarstr(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaS_newlstr() */
    /* - new_localvar() */
    /* TODO: Implement from disassembly */
}

/* Function: create_local__FP8LexStatePCc
 * Address: 0x080a6e9c
 * Size: 17 instructions */
void create_local(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - new_localvarstr() */
    /* - adjustlocalvars() */
    /* TODO: Implement from disassembly */
}

/* Function: indexupvalue__FP9FuncStateP7TStringP7expdesc
 * Address: 0x080a6ec4
 * Size: 78 instructions */
void indexupvalue(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaX_checklimit() */
    /* - luaM_growaux() */
    /* TODO: Implement from disassembly */
}

/* Function: searchvar__FP9FuncStateP7TString
 * Address: 0x080a6f98
 * Size: 26 instructions */
void searchvar(void) {
    /* TODO: Implement from disassembly */
}

/* Function: markupval__FP9FuncStatei
 * Address: 0x080a6fd0
 * Size: 17 instructions */
void markupval(void) {
    /* TODO: Implement from disassembly */
}

/* Function: singlevaraux__FP9FuncStateP7TStringP7expdesci
 * Address: 0x080a6ff8
 * Size: 74 instructions */
void singlevaraux(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - init_exp() */
    /* - searchvar() */
    /* - markupval() */
    /* - singlevaraux() */
    /* - luaK_stringK() */
    /* - indexupvalue() */
    /* TODO: Implement from disassembly */
}

/* Function: singlevar__FP8LexStateP7expdesci
 * Address: 0x080a70b0
 * Size: 26 instructions */
void singlevar(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - str_checkname() */
    /* - singlevaraux() */
    /* TODO: Implement from disassembly */
}

/* Function: adjust_assign__FP8LexStateiiP7expdesc
 * Address: 0x080a70e4
 * Size: 60 instructions */
void adjust_assign(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_reserveregs() */
    /* - luaK_setcallreturns() */
    /* - luaK_exp2nextreg() */
    /* - luaK_nil() */
    /* TODO: Implement from disassembly */
}

/* Function: code_params__FP8LexStateii
 * Address: 0x080a7168
 * Size: 42 instructions */
void code_params(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - adjustlocalvars() */
    /* - luaX_checklimit() */
    /* - create_local() */
    /* - luaK_reserveregs() */
    /* TODO: Implement from disassembly */
}

/* Function: enterblock__FP9FuncStateP8BlockCnti
 * Address: 0x080a71d0
 * Size: 16 instructions */
void enterblock(void) {
    /* TODO: Implement from disassembly */
}

/* Function: leaveblock__FP9FuncState
 * Address: 0x080a7200
 * Size: 35 instructions */
void leaveblock(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - removevars() */
    /* - luaK_codeABC() */
    /* - luaK_patchtohere() */
    /* TODO: Implement from disassembly */
}

/* Function: pushclosure__FP8LexStateP9FuncStateP7expdesc
 * Address: 0x080a7258
 * Size: 76 instructions */
void pushclosure(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaM_growaux() */
    /* - luaK_codeABx() */
    /* - init_exp() */
    /* - luaK_codeABC() */
    /* TODO: Implement from disassembly */
}

/* Function: open_func__FP8LexStateP9FuncState
 * Address: 0x080a7318
 * Size: 44 instructions */
void open_func(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaF_newproto() */
    /* - luaH_new() */
    /* TODO: Implement from disassembly */
}

/* Function: close_func__FP8LexState
 * Address: 0x080a73ac
 * Size: 109 instructions */
void close_func(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - removevars() */
    /* - luaK_codeABC() */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaY_parser__FP9lua_StateP3ZioP7Mbuffer
 * Address: 0x080a74c4
 * Size: 62 instructions */
void luaY_parser(void) {
    /* Stack: 1772 bytes */
    /* Calls: */
    /* - luaS_newlstr() */
    /* - luaX_setinput() */
    /* - open_func() */
    /* - next() */
    /* - chunk() */
    /* - luaX_syntaxerror() */
    /* - close_func() */
    /* TODO: Implement from disassembly */
}

/* Function: luaY_field__FP8LexStateP7expdesc
 * Address: 0x080a7570
 * Size: 35 instructions */
void luaY_field(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaK_exp2anyreg() */
    /* - next() */
    /* - checkname() */
    /* - luaK_indexed() */
    /* TODO: Implement from disassembly */
}

/* Function: luaY_index__FP8LexStateP7expdesc
 * Address: 0x080a75bc
 * Size: 29 instructions */
void luaY_index(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - next() */
    /* - expr() */
    /* - luaK_exp2val() */
    /* - check() */
    /* TODO: Implement from disassembly */
}

/* Function: recfield__FP8LexStateP11ConsControl
 * Address: 0x080a7600
 * Size: 77 instructions */
void recfield(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - luaX_checklimit() */
    /* - checkname() */
    /* - luaY_index() */
    /* - check() */
    /* - luaK_exp2RK() */
    /* - expr() */
    /* - luaK_codeABC() */
    /* TODO: Implement from disassembly */
}

/* Function: closelistfield__FP9FuncStateP11ConsControl
 * Address: 0x080a76c8
 * Size: 36 instructions */
void closelistfield(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_exp2nextreg() */
    /* - luaK_codeABx() */
    /* TODO: Implement from disassembly */
}

/* Function: lastlistfield__FP9FuncStateP11ConsControl
 * Address: 0x080a7720
 * Size: 52 instructions */
void lastlistfield(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_setcallreturns() */
    /* - luaK_codeABx() */
    /* - luaK_exp2nextreg() */
    /* TODO: Implement from disassembly */
}

/* Function: listfield__FP8LexStateP11ConsControl
 * Address: 0x080a7798
 * Size: 23 instructions */
void listfield(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - expr() */
    /* - luaX_checklimit() */
    /* TODO: Implement from disassembly */
}

/* Function: constructor__FP8LexStateP7expdesc
 * Address: 0x080a77d0
 * Size: 148 instructions */
void constructor(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - luaK_codeABC() */
    /* - init_exp() */
    /* - luaK_exp2nextreg() */
    /* - check() */
    /* - testnext() */
    /* - closelistfield() */
    /* - lookahead() */
    /* - recfield() */
    /* - listfield() */
    /* - check_match() */
    /* - lastlistfield() */
    /* - luaO_int2fb() */
    /* - luaO_log2() */
    /* TODO: Implement from disassembly */
}

/* Function: parlist__FP8LexState
 * Address: 0x080a7970
 * Size: 61 instructions */
void parlist(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - testnext() */
    /* - next() */
    /* - str_checkname() */
    /* - new_localvar() */
    /* - luaX_syntaxerror() */
    /* - code_params() */
    /* TODO: Implement from disassembly */
}

/* Function: body__FP8LexStateP7expdescii
 * Address: 0x080a7a08
 * Size: 61 instructions */
void body(void) {
    /* Stack: 1708 bytes */
    /* Calls: */
    /* - open_func() */
    /* - check() */
    /* - create_local() */
    /* - parlist() */
    /* - chunk() */
    /* - check_match() */
    /* - close_func() */
    /* - pushclosure() */
    /* TODO: Implement from disassembly */
}

/* Function: explist1__FP8LexStateP7expdesc
 * Address: 0x080a7ab4
 * Size: 40 instructions */
void explist1(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - expr() */
    /* - luaK_exp2nextreg() */
    /* - testnext() */
    /* TODO: Implement from disassembly */
}

/* Function: funcargs__FP8LexStateP7expdesc
 * Address: 0x080a7b10
 * Size: 127 instructions */
void funcargs(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - luaX_syntaxerror() */
    /* - next() */
    /* - explist1() */
    /* - luaK_setcallreturns() */
    /* - check_match() */
    /* - constructor() */
    /* - codestring() */
    /* - luaK_exp2nextreg() */
    /* - luaK_codeABC() */
    /* - init_exp() */
    /* - luaK_fixline() */
    /* TODO: Implement from disassembly */
}

/* Function: prefixexp__FP8LexStateP7expdesc
 * Address: 0x080a7c60
 * Size: 50 instructions */
void prefixexp(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - next() */
    /* - expr() */
    /* - check_match() */
    /* - luaK_dischargevars() */
    /* - singlevar() */
    /* - luaX_syntaxerror() */
    /* TODO: Implement from disassembly */
}

/* Function: primaryexp__FP8LexStateP7expdesc
 * Address: 0x080a7cd8
 * Size: 94 instructions */
void primaryexp(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - prefixexp() */
    /* - luaY_field() */
    /* - luaK_exp2anyreg() */
    /* - luaY_index() */
    /* - luaK_indexed() */
    /* - next() */
    /* - checkname() */
    /* - luaK_self() */
    /* - luaK_exp2nextreg() */
    /* - funcargs() */
    /* TODO: Implement from disassembly */
}

/* Function: simpleexp__FP8LexStateP7expdesc
 * Address: 0x080a7dd0
 * Size: 94 instructions */
void simpleexp(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_numberK() */
    /* - init_exp() */
    /* - codestring() */
    /* - next() */
    /* - constructor() */
    /* - body() */
    /* - primaryexp() */
    /* TODO: Implement from disassembly */
}

/* Function: getunopr__Fi
 * Address: 0x080a7ee4
 * Size: 16 instructions */
void getunopr(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getbinopr__Fi
 * Address: 0x080a7f0c
 * Size: 84 instructions */
void getbinopr(void) {
    /* TODO: Implement from disassembly */
}

/* Function: subexpr__FP8LexStateP7expdesci
 * Address: 0x080a8028
 * Size: 106 instructions */
void subexpr(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - luaX_syntaxerror() */
    /* - getunopr() */
    /* - next() */
    /* - subexpr() */
    /* - luaK_prefix() */
    /* - simpleexp() */
    /* - getbinopr() */
    /* - luaK_infix() */
    /* - luaK_posfix() */
    /* TODO: Implement from disassembly */
}

/* Function: expr__FP8LexStateP7expdesc
 * Address: 0x080a814c
 * Size: 10 instructions */
void expr(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - subexpr() */
    /* TODO: Implement from disassembly */
}

/* Function: block_follow__Fi
 * Address: 0x080a8164
 * Size: 19 instructions */
void block_follow(void) {
    /* TODO: Implement from disassembly */
}

/* Function: block__FP8LexState
 * Address: 0x080a8198
 * Size: 26 instructions */
void block(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - enterblock() */
    /* - chunk() */
    /* - leaveblock() */
    /* TODO: Implement from disassembly */
}

/* Function: check_conflict__FP8LexStateP10LHS_assignP7expdesc
 * Address: 0x080a81d4
 * Size: 50 instructions */
void check_conflict(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_codeABC() */
    /* - luaK_reserveregs() */
    /* TODO: Implement from disassembly */
}

/* Function: assignment__FP8LexStateP10LHS_assigni
 * Address: 0x080a824c
 * Size: 111 instructions */
void assignment(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - luaX_syntaxerror() */
    /* - testnext() */
    /* - primaryexp() */
    /* - check_conflict() */
    /* - assignment() */
    /* - check() */
    /* - explist1() */
    /* - luaK_setcallreturns() */
    /* - luaK_storevar() */
    /* - adjust_assign() */
    /* - init_exp() */
    /* TODO: Implement from disassembly */
}

/* Function: cond__FP8LexStateP7expdesc
 * Address: 0x080a8360
 * Size: 29 instructions */
void cond(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - expr() */
    /* - luaK_goiftrue() */
    /* - luaK_patchtohere() */
    /* TODO: Implement from disassembly */
}

/* Function: whilestat__FP8LexStatei
 * Address: 0x080a83a8
 * Size: 158 instructions */
void whilestat(void) {
    /* Stack: 492 bytes */
    /* Calls: */
    /* - next() */
    /* - luaK_jump() */
    /* - luaK_getlabel() */
    /* - expr() */
    /* - luaK_goiffalse() */
    /* - luaK_concat() */
    /* - luaX_syntaxerror() */
    /* - enterblock() */
    /* - check() */
    /* - block() */
    /* - luaK_patchtohere() */
    /* - luaK_code() */
    /* - check_match() */
    /* - leaveblock() */
    /* - luaK_patchlist() */
    /* TODO: Implement from disassembly */
}

/* Function: repeatstat__FP8LexStatei
 * Address: 0x080a85b8
 * Size: 53 instructions */
void repeatstat(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - luaK_getlabel() */
    /* - enterblock() */
    /* - next() */
    /* - block() */
    /* - check_match() */
    /* - cond() */
    /* - luaK_patchlist() */
    /* - leaveblock() */
    /* TODO: Implement from disassembly */
}

/* Function: exp1__FP8LexState
 * Address: 0x080a863c
 * Size: 25 instructions */
void exp1(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - expr() */
    /* - luaK_exp2nextreg() */
    /* TODO: Implement from disassembly */
}

/* Function: forbody__FP8LexStateiiii
 * Address: 0x080a8670
 * Size: 89 instructions */
void forbody(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - adjustlocalvars() */
    /* - check() */
    /* - enterblock() */
    /* - luaK_getlabel() */
    /* - block() */
    /* - luaK_patchtohere() */
    /* - luaK_codeABx() */
    /* - luaK_codeABC() */
    /* - luaK_fixline() */
    /* - luaK_jump() */
    /* - luaK_patchlist() */
    /* - leaveblock() */
    /* TODO: Implement from disassembly */
}

/* Function: fornum__FP8LexStateP7TStringi
 * Address: 0x080a8750
 * Size: 99 instructions */
void fornum(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - new_localvar() */
    /* - new_localvarstr() */
    /* - check() */
    /* - exp1() */
    /* - testnext() */
    /* - luaK_numberK() */
    /* - luaK_codeABx() */
    /* - luaK_reserveregs() */
    /* - luaK_codeABC() */
    /* - luaK_jump() */
    /* - forbody() */
    /* TODO: Implement from disassembly */
}

/* Function: forlist__FP8LexStateP7TString
 * Address: 0x080a8850
 * Size: 96 instructions */
void forlist(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - new_localvarstr() */
    /* - new_localvar() */
    /* - str_checkname() */
    /* - testnext() */
    /* - check() */
    /* - explist1() */
    /* - adjust_assign() */
    /* - luaK_checkstack() */
    /* - luaK_codeABx() */
    /* - forbody() */
    /* TODO: Implement from disassembly */
}

/* Function: forstat__FP8LexStatei
 * Address: 0x080a8944
 * Size: 68 instructions */
void forstat(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - enterblock() */
    /* - next() */
    /* - str_checkname() */
    /* - fornum() */
    /* - forlist() */
    /* - luaX_syntaxerror() */
    /* - check_match() */
    /* - leaveblock() */
    /* TODO: Implement from disassembly */
}

/* Function: test_then_block__FP8LexStateP7expdesc
 * Address: 0x080a89f4
 * Size: 28 instructions */
void test_then_block(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - next() */
    /* - cond() */
    /* - check() */
    /* - block() */
    /* TODO: Implement from disassembly */
}

/* Function: ifstat__FP8LexStatei
 * Address: 0x080a8a38
 * Size: 86 instructions */
void ifstat(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - test_then_block() */
    /* - luaK_jump() */
    /* - luaK_concat() */
    /* - luaK_patchtohere() */
    /* - next() */
    /* - block() */
    /* - check_match() */
    /* TODO: Implement from disassembly */
}

/* Function: localfunc__FP8LexState
 * Address: 0x080a8b28
 * Size: 63 instructions */
void localfunc(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - str_checkname() */
    /* - new_localvar() */
    /* - init_exp() */
    /* - luaK_reserveregs() */
    /* - adjustlocalvars() */
    /* - body() */
    /* - luaK_storevar() */
    /* TODO: Implement from disassembly */
}

/* Function: localstat__FP8LexState
 * Address: 0x080a8bc4
 * Size: 58 instructions */
void localstat(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - str_checkname() */
    /* - new_localvar() */
    /* - testnext() */
    /* - explist1() */
    /* - adjust_assign() */
    /* - adjustlocalvars() */
    /* TODO: Implement from disassembly */
}

/* Function: funcname__FP8LexStateP7expdesc
 * Address: 0x080a8c48
 * Size: 37 instructions */
void funcname(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - singlevar() */
    /* - luaY_field() */
    /* TODO: Implement from disassembly */
}

/* Function: funcstat__FP8LexStatei
 * Address: 0x080a8c9c
 * Size: 41 instructions */
void funcstat(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - next() */
    /* - funcname() */
    /* - body() */
    /* - luaK_storevar() */
    /* - luaK_fixline() */
    /* TODO: Implement from disassembly */
}

/* Function: exprstat__FP8LexState
 * Address: 0x080a8cf8
 * Size: 38 instructions */
void exprstat(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - primaryexp() */
    /* - luaK_setcallreturns() */
    /* - assignment() */
    /* TODO: Implement from disassembly */
}

/* Function: retstat__FP8LexState
 * Address: 0x080a8d50
 * Size: 79 instructions */
void retstat(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - next() */
    /* - block_follow() */
    /* - explist1() */
    /* - luaK_setcallreturns() */
    /* - luaK_exp2anyreg() */
    /* - luaK_exp2nextreg() */
    /* - luaK_codeABC() */
    /* TODO: Implement from disassembly */
}

/* Function: breakstat__FP8LexState
 * Address: 0x080a8e10
 * Size: 55 instructions */
void breakstat(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - next() */
    /* - luaX_syntaxerror() */
    /* - luaK_codeABC() */
    /* - luaK_jump() */
    /* - luaK_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: statement__FP8LexState
 * Address: 0x080a8e94
 * Size: 99 instructions */
void statement(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - ifstat() */
    /* - whilestat() */
    /* - next() */
    /* - block() */
    /* - check_match() */
    /* - forstat() */
    /* - repeatstat() */
    /* - funcstat() */
    /* - testnext() */
    /* - localfunc() */
    /* - localstat() */
    /* - retstat() */
    /* - breakstat() */
    /* - exprstat() */
    /* TODO: Implement from disassembly */
}

/* Function: chunk__FP8LexState
 * Address: 0x080a8fb4
 * Size: 47 instructions */
void chunk(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaX_syntaxerror() */
    /* - statement() */
    /* - testnext() */
    /* - block_follow() */
    /* TODO: Implement from disassembly */
}

/* Function: default_panic__FP9lua_State
 * Address: 0x080a9030
 * Size: 6 instructions */
void default_panic(void) {
    /* TODO: Implement from disassembly */
}

/* Function: mallocstate__FP9lua_State
 * Address: 0x080a9038
 * Size: 14 instructions */
void mallocstate(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: freestate__FP9lua_StateT0
 * Address: 0x080a9058
 * Size: 11 instructions */
void freestate(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: stack_init__FP9lua_StateT0
 * Address: 0x080a9074
 * Size: 46 instructions */
void stack_init(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: freestack__FP9lua_StateT0
 * Address: 0x080a9104
 * Size: 28 instructions */
void freestack(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: f_luaopen__FP9lua_StatePv
 * Address: 0x080a9144
 * Size: 106 instructions */
void f_luaopen(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* - luaD_throw() */
    /* - stack_init() */
    /* - luaH_new() */
    /* - luaS_resize() */
    /* - luaT_init() */
    /* - luaX_init() */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: preinit_state__FP9lua_State
 * Address: 0x080a92b4
 * Size: 22 instructions */
void preinit_state(void) {
    /* TODO: Implement from disassembly */
}

/* Function: close_state__FP9lua_State
 * Address: 0x080a9324
 * Size: 54 instructions */
void close_state(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaF_close() */
    /* - luaC_sweep() */
    /* - luaS_freeall() */
    /* - luaM_realloc() */
    /* - freestack() */
    /* - freestate() */
    /* TODO: Implement from disassembly */
}

/* Function: luaE_newthread__FP9lua_State
 * Address: 0x080a93b8
 * Size: 38 instructions */
void luaE_newthread(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - mallocstate() */
    /* - luaC_link() */
    /* - preinit_state() */
    /* - stack_init() */
    /* TODO: Implement from disassembly */
}

/* Function: luaE_freethread__FP9lua_StateT0
 * Address: 0x080a9414
 * Size: 25 instructions */
void luaE_freethread(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaF_close() */
    /* - freestack() */
    /* - freestate() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_open__Fv
 * Address: 0x080a944c
 * Size: 35 instructions */
void lua_open(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - mallocstate() */
    /* - preinit_state() */
    /* - luaD_rawrunprotected() */
    /* - close_state() */
    /* TODO: Implement from disassembly */
}

/* Function: callallgcTM__FP9lua_StatePv
 * Address: 0x080a94b4
 * Size: 9 instructions */
void callallgcTM(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaC_callGCTM() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_close__FP9lua_State
 * Address: 0x080a94c8
 * Size: 36 instructions */
void lua_close(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaF_close() */
    /* - luaC_separateudata() */
    /* - luaD_rawrunprotected() */
    /* - close_state() */
    /* TODO: Implement from disassembly */
}

/* Function: luaS_freeall__FP9lua_State
 * Address: 0x080a9530
 * Size: 15 instructions */
void luaS_freeall(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaS_resize__FP9lua_Statei
 * Address: 0x080a9550
 * Size: 69 instructions */
void luaS_resize(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: newlstr__FP9lua_StatePCcUiUi
 * Address: 0x080a95f0
 * Size: 63 instructions */
void newlstr(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* - memcpy@plt() */
    /* - luaS_resize() */
    /* TODO: Implement from disassembly */
}

/* Function: luaS_newlstr__FP9lua_StatePCcUi
 * Address: 0x080a968c
 * Size: 62 instructions */
void luaS_newlstr(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: luaS_newudata__FP9lua_StateUi
 * Address: 0x080a9718
 * Size: 45 instructions */
void luaS_newudata(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: hashnum__FPC5Tabled
 * Address: 0x080a9770
 * Size: 42 instructions */
void hashnum(void) {
    /* Stack: 28 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_mainposition__FPC5TablePC11lua_TObject
 * Address: 0x080a97d8
 * Size: 61 instructions */
void luaH_mainposition(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - hashnum() */
    /* TODO: Implement from disassembly */
}

/* Function: arrayindex__FPC11lua_TObject
 * Address: 0x080a9880
 * Size: 34 instructions */
void arrayindex(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_index__FP9lua_StateP5TableP11lua_TObject
 * Address: 0x080a98d8
 * Size: 50 instructions */
void luaH_index(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - arrayindex() */
    /* - luaH_get() */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_next__FP9lua_StateP5TableP11lua_TObject
 * Address: 0x080a9958
 * Size: 96 instructions */
void luaH_next(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaH_index() */
    /* TODO: Implement from disassembly */
}

/* Function: computesizes__FPiiT0T0
 * Address: 0x080a9a68
 * Size: 61 instructions */
void computesizes(void) {
    /* Stack: 28 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: numuse__FPC5TablePiT1
 * Address: 0x080a9b04
 * Size: 114 instructions */
void numuse(void) {
    /* Stack: 124 bytes */
    /* Calls: */
    /* - arrayindex() */
    /* - luaO_log2() */
    /* - computesizes() */
    /* TODO: Implement from disassembly */
}

/* Function: setarrayvector__FP9lua_StateP5Tablei
 * Address: 0x080a9c40
 * Size: 38 instructions */
void setarrayvector(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: setnodevector__FP9lua_StateP5Tablei
 * Address: 0x080a9ca0
 * Size: 67 instructions */
void setnodevector(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaG_runerror() */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: resize__FP9lua_StateP5Tableii
 * Address: 0x080a9d54
 * Size: 149 instructions */
void resize(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - setarrayvector() */
    /* - setnodevector() */
    /* - luaH_setnum() */
    /* - luaM_realloc() */
    /* - luaH_set() */
    /* TODO: Implement from disassembly */
}

/* Function: rehash__FP9lua_StateP5Table
 * Address: 0x080a9eec
 * Size: 29 instructions */
void rehash(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - numuse() */
    /* - luaO_log2() */
    /* - resize() */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_new__FP9lua_Stateii
 * Address: 0x080a9f2c
 * Size: 47 instructions */
void luaH_new(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* - luaC_link() */
    /* - setarrayvector() */
    /* - setnodevector() */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_free__FP9lua_StateP5Table
 * Address: 0x080a9fa4
 * Size: 37 instructions */
void luaH_free(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: newkey__FP9lua_StateP5TablePC11lua_TObject
 * Address: 0x080a9ffc
 * Size: 88 instructions */
void newkey(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaH_mainposition() */
    /* - rehash() */
    /* - luaH_get() */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_getany__FP5TablePC11lua_TObject
 * Address: 0x080aa0ec
 * Size: 35 instructions */
void luaH_getany(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaH_mainposition() */
    /* - luaO_rawequalObj() */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_getnum__FP5Tablei
 * Address: 0x080aa13c
 * Size: 42 instructions */
void luaH_getnum(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - hashnum() */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_getstr__FP5TableP7TString
 * Address: 0x080aa1a8
 * Size: 29 instructions */
void luaH_getstr(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaH_get__FP5TablePC11lua_TObject
 * Address: 0x080aa1f0
 * Size: 48 instructions */
void luaH_get(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaH_getstr() */
    /* - luaH_getnum() */
    /* - luaH_getany() */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_set__FP9lua_StateP5TablePC11lua_TObject
 * Address: 0x080aa268
 * Size: 48 instructions */
void luaH_set(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaH_get() */
    /* - luaG_runerror() */
    /* - newkey() */
    /* TODO: Implement from disassembly */
}

/* Function: luaH_setnum__FP9lua_StateP5Tablei
 * Address: 0x080aa2dc
 * Size: 31 instructions */
void luaH_setnum(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - luaH_getnum() */
    /* - newkey() */
    /* TODO: Implement from disassembly */
}

/* Function: luaT_init__FP9lua_State
 * Address: 0x080aa330
 * Size: 42 instructions */
void luaT_init(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: luaT_gettm__FP5Table3TMSP7TString
 * Address: 0x080aa394
 * Size: 20 instructions */
void luaT_gettm(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaH_getstr() */
    /* TODO: Implement from disassembly */
}

/* Function: luaT_gettmbyobj__FP9lua_StatePC11lua_TObject3TMS
 * Address: 0x080aa3c4
 * Size: 27 instructions */
void luaT_gettmbyobj(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaH_getstr() */
    /* TODO: Implement from disassembly */
}

/* Function: unexpectedEOZ__FP9LoadState
 * Address: 0x080aa410
 * Size: 12 instructions */
void unexpectedEOZ(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: ezgetc__FP9LoadState
 * Address: 0x080aa430
 * Size: 33 instructions */
void ezgetc(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaZ_fill() */
    /* - unexpectedEOZ() */
    /* TODO: Implement from disassembly */
}

/* Function: ezread__FP9LoadStatePvi
 * Address: 0x080aa47c
 * Size: 19 instructions */
void ezread(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaZ_read() */
    /* - unexpectedEOZ() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadBlock__FP9LoadStatePvUi
 * Address: 0x080aa4ac
 * Size: 36 instructions */
void LoadBlock(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - ezgetc() */
    /* - ezread() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadVector__FP9LoadStatePviUi
 * Address: 0x080aa4fc
 * Size: 51 instructions */
void LoadVector(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - ezgetc() */
    /* - ezread() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadInt__FP9LoadState
 * Address: 0x080aa574
 * Size: 23 instructions */
void LoadInt(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LoadBlock() */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadSize__FP9LoadState
 * Address: 0x080aa5b0
 * Size: 12 instructions */
void LoadSize(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - LoadBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadNumber__FP9LoadState
 * Address: 0x080aa5cc
 * Size: 12 instructions */
void LoadNumber(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - LoadBlock() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadString__FP9LoadState
 * Address: 0x080aa5e8
 * Size: 41 instructions */
void LoadString(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - LoadSize() */
    /* - luaZ_openspace() */
    /* - ezread() */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadCode__FP9LoadStateP5Proto
 * Address: 0x080aa640
 * Size: 32 instructions */
void LoadCode(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - LoadInt() */
    /* - luaM_realloc() */
    /* - LoadVector() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadLocals__FP9LoadStateP5Proto
 * Address: 0x080aa688
 * Size: 58 instructions */
void LoadLocals(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - LoadInt() */
    /* - luaM_realloc() */
    /* - LoadString() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadLines__FP9LoadStateP5Proto
 * Address: 0x080aa718
 * Size: 32 instructions */
void LoadLines(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - LoadInt() */
    /* - luaM_realloc() */
    /* - LoadVector() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadUpvalues__FP9LoadStateP5Proto
 * Address: 0x080aa760
 * Size: 57 instructions */
void LoadUpvalues(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - LoadInt() */
    /* - luaG_runerror() */
    /* - luaM_realloc() */
    /* - LoadString() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadConstants__FP9LoadStateP5Proto
 * Address: 0x080aa7ec
 * Size: 108 instructions */
void LoadConstants(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - LoadInt() */
    /* - luaM_realloc() */
    /* - ezgetc() */
    /* - LoadNumber() */
    /* - LoadString() */
    /* - luaG_runerror() */
    /* - LoadFunction() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadFunction__FP9LoadStateP7TString
 * Address: 0x080aa91c
 * Size: 81 instructions */
void LoadFunction(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaF_newproto() */
    /* - LoadString() */
    /* - LoadInt() */
    /* - ezgetc() */
    /* - LoadLines() */
    /* - LoadLocals() */
    /* - LoadUpvalues() */
    /* - LoadConstants() */
    /* - LoadCode() */
    /* - luaG_checkcode() */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadSignature__FP9LoadState
 * Address: 0x080aa9f4
 * Size: 32 instructions */
void LoadSignature(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - ezgetc() */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: TestSize__FP9LoadStateiPCc
 * Address: 0x080aaa40
 * Size: 28 instructions */
void TestSize(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - ezgetc() */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadHeader__FP9LoadState
 * Address: 0x080aaa84
 * Size: 140 instructions */
void LoadHeader(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - LoadSignature() */
    /* - ezgetc() */
    /* - luaG_runerror() */
    /* - luaU_endianness() */
    /* - TestSize() */
    /* - LoadNumber() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadChunk__FP9LoadState
 * Address: 0x080aac1c
 * Size: 16 instructions */
void LoadChunk(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LoadHeader() */
    /* - LoadFunction() */
    /* TODO: Implement from disassembly */
}

/* Function: luaU_undump__FP9lua_StateP3ZioP7Mbuffer
 * Address: 0x080aac40
 * Size: 30 instructions */
void luaU_undump(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - LoadChunk() */
    /* TODO: Implement from disassembly */
}

/* Function: luaU_endianness__Fv
 * Address: 0x080aac90
 * Size: 6 instructions */
void luaU_endianness(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaV_tonumber__FPC11lua_TObjectP11lua_TObject
 * Address: 0x080aaca0
 * Size: 32 instructions */
void luaV_tonumber(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaO_str2d() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_tostring__FP9lua_StateP11lua_TObject
 * Address: 0x080aacec
 * Size: 40 instructions */
void luaV_tostring(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - sprintf@plt() */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: traceexec__FP9lua_State
 * Address: 0x080aad4c
 * Size: 81 instructions */
void traceexec(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaD_callhook() */
    /* - luaG_inithooks() */
    /* TODO: Implement from disassembly */
}

/* Function: callTMres__FP9lua_StatePC11lua_TObjectN21
 * Address: 0x080aae18
 * Size: 58 instructions */
void callTMres(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaD_growstack() */
    /* - luaD_call() */
    /* TODO: Implement from disassembly */
}

/* Function: callTM__FP9lua_StatePC11lua_TObjectN31
 * Address: 0x080aaea8
 * Size: 65 instructions */
void callTM(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaD_growstack() */
    /* - luaD_call() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_index__FP9lua_StatePC11lua_TObjectP11lua_TObjecti
 * Address: 0x080aaf4c
 * Size: 48 instructions */
void luaV_index(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaT_gettm() */
    /* - luaV_gettable() */
    /* - callTMres() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_getnotable__FP9lua_StatePC11lua_TObjectP11lua_TObjecti
 * Address: 0x080aafb8
 * Size: 46 instructions */
void luaV_getnotable(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaT_gettmbyobj() */
    /* - luaG_typeerror() */
    /* - luaV_gettable() */
    /* - callTMres() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_gettable__FP9lua_StatePC11lua_TObjectP11lua_TObjecti
 * Address: 0x080ab01c
 * Size: 47 instructions */
void luaV_gettable(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaG_runerror() */
    /* - luaH_get() */
    /* - luaV_index() */
    /* - luaV_getnotable() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_settable__FP9lua_StatePC11lua_TObjectP11lua_TObjectT2
 * Address: 0x080ab088
 * Size: 94 instructions */
void luaV_settable(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaH_set() */
    /* - luaT_gettm() */
    /* - luaT_gettmbyobj() */
    /* - luaG_typeerror() */
    /* - callTM() */
    /* - luaG_runerror() */
    /* TODO: Implement from disassembly */
}

/* Function: call_binTM__FP9lua_StatePC11lua_TObjectT1P11lua_TObject3TMS
 * Address: 0x080ab178
 * Size: 56 instructions */
void call_binTM(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaT_gettmbyobj() */
    /* - callTMres() */
    /* TODO: Implement from disassembly */
}

/* Function: get_compTM__FP9lua_StateP5TableT13TMS
 * Address: 0x080ab1fc
 * Size: 67 instructions */
void get_compTM(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaT_gettm() */
    /* - luaO_rawequalObj() */
    /* TODO: Implement from disassembly */
}

/* Function: call_orderTM__FP9lua_StatePC11lua_TObjectT13TMS
 * Address: 0x080ab294
 * Size: 57 instructions */
void call_orderTM(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaT_gettmbyobj() */
    /* - luaO_rawequalObj() */
    /* - callTMres() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_strcmp__FPC7TStringT0
 * Address: 0x080ab314
 * Size: 53 instructions */
void luaV_strcmp(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - strcoll@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_lessthan__FP9lua_StatePC11lua_TObjectT1
 * Address: 0x080ab390
 * Size: 56 instructions */
void luaV_lessthan(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaG_ordererror() */
    /* - luaV_strcmp() */
    /* - call_orderTM() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_lessequal__FP9lua_StatePC11lua_TObjectT1
 * Address: 0x080ab410
 * Size: 63 instructions */
void luaV_lessequal(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaV_strcmp() */
    /* - call_orderTM() */
    /* - luaG_ordererror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_equalval__FP9lua_StatePC11lua_TObjectT1
 * Address: 0x080ab4a4
 * Size: 73 instructions */
void luaV_equalval(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - get_compTM() */
    /* - callTMres() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_concat__FP9lua_Stateii
 * Address: 0x080ab55c
 * Size: 182 instructions */
void luaV_concat(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - luaV_tostring() */
    /* - call_binTM() */
    /* - luaG_concaterror() */
    /* - luaG_runerror() */
    /* - luaZ_openspace() */
    /* - memcpy@plt() */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: Arith__FP9lua_StateP11lua_TObjectPC11lua_TObjectT23TMS
 * Address: 0x080ab744
 * Size: 117 instructions */
void Arith(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - luaV_tonumber() */
    /* - luaH_getstr() */
    /* - luaG_runerror() */
    /* - callTMres() */
    /* - call_binTM() */
    /* - luaG_aritherror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaV_execute__FP9lua_State
 * Address: 0x080ab89c
 * Size: 1301 instructions */
void luaV_execute(void) {
    /* Stack: 92 bytes */
    /* Calls: */
    /* - luaD_callhook() */
    /* - traceexec() */
    /* - luaH_getstr() */
    /* - luaV_index() */
    /* - luaH_get() */
    /* - luaV_settable() */
    /* - luaH_new() */
    /* - luaV_getnotable() */
    /* - Arith() */
    /* - luaV_tonumber() */
    /* - call_binTM() */
    /* - luaG_aritherror() */
    /* - luaV_concat() */
    /* - luaV_equalval() */
    /* - luaV_lessthan() */
    /* - luaV_lessequal() */
    /* - luaD_precall() */
    /* - luaD_poscall() */
    /* - luaF_close() */
    /* - luaG_runerror() */
    /* - luaD_call() */
    /* - luaS_newlstr() */
    /* - luaH_setnum() */
    /* - luaF_newLclosure() */
    /* - luaF_findupval() */
    /* - luaC_collectgarbage() */
    /* TODO: Implement from disassembly */
}

/* Function: luaZ_fill__FP3Zio
 * Address: 0x080ac880
 * Size: 29 instructions */
void luaZ_fill(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: luaZ_lookahead__FP3Zio
 * Address: 0x080ac8c4
 * Size: 20 instructions */
void luaZ_lookahead(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaZ_fill() */
    /* TODO: Implement from disassembly */
}

/* Function: luaZ_init__FP3ZioPFP9lua_StatePvPUi_PCcPvPCc
 * Address: 0x080ac8f4
 * Size: 16 instructions */
void luaZ_init(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaZ_read__FP3ZioPvUi
 * Address: 0x080ac920
 * Size: 49 instructions */
void luaZ_read(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaZ_fill() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: luaZ_openspace__FP9lua_StateP7MbufferUi
 * Address: 0x080ac98c
 * Size: 28 instructions */
void luaZ_openspace(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaM_realloc() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_nil__FP9FuncStateii
 * Address: 0x080ac9d0
 * Size: 54 instructions */
void luaK_nil(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_codeABC() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_jump__FP9FuncState
 * Address: 0x080aca54
 * Size: 27 instructions */
void luaK_jump(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_codeABx() */
    /* - luaK_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_condjump__FP9FuncState6OpCodeiii
 * Address: 0x080aca94
 * Size: 19 instructions */
void luaK_condjump(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaK_codeABC() */
    /* - luaK_jump() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_fixjump__FP9FuncStateii
 * Address: 0x080acac4
 * Size: 35 instructions */
void luaK_fixjump(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaX_syntaxerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_getlabel__FP9FuncState
 * Address: 0x080acb20
 * Size: 8 instructions */
void luaK_getlabel(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaK_getjump__FP9FuncStatei
 * Address: 0x080acb30
 * Size: 16 instructions */
void luaK_getjump(void) {
    /* TODO: Implement from disassembly */
}

/* Function: getjumpcontrol__FP9FuncStatei
 * Address: 0x080acb5c
 * Size: 19 instructions */
void getjumpcontrol(void) {
    /* TODO: Implement from disassembly */
}

/* Function: need_value__FP9FuncStateii
 * Address: 0x080acb8c
 * Size: 43 instructions */
void need_value(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - getjumpcontrol() */
    /* - luaK_getjump() */
    /* TODO: Implement from disassembly */
}

/* Function: patchtestreg__FPUli
 * Address: 0x080acbf0
 * Size: 13 instructions */
void patchtestreg(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaK_patchlistaux__FP9FuncStateiiiiii
 * Address: 0x080acc10
 * Size: 67 instructions */
void luaK_patchlistaux(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_getjump() */
    /* - getjumpcontrol() */
    /* - luaK_fixjump() */
    /* - patchtestreg() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_dischargejpc__FP9FuncState
 * Address: 0x080accb0
 * Size: 20 instructions */
void luaK_dischargejpc(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaK_patchlistaux() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_patchlist__FP9FuncStateii
 * Address: 0x080acce4
 * Size: 25 instructions */
void luaK_patchlist(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaK_patchtohere() */
    /* - luaK_patchlistaux() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_patchtohere__FP9FuncStatei
 * Address: 0x080acd20
 * Size: 21 instructions */
void luaK_patchtohere(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_getlabel() */
    /* - luaK_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_concat__FP9FuncStatePii
 * Address: 0x080acd4c
 * Size: 37 instructions */
void luaK_concat(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_getjump() */
    /* - luaK_fixjump() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_checkstack__FP9FuncStatei
 * Address: 0x080acd98
 * Size: 26 instructions */
void luaK_checkstack(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaX_syntaxerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_reserveregs__FP9FuncStatei
 * Address: 0x080acdd8
 * Size: 18 instructions */
void luaK_reserveregs(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_checkstack() */
    /* TODO: Implement from disassembly */
}

/* Function: freereg__FP9FuncStatei
 * Address: 0x080acdfc
 * Size: 12 instructions */
void freereg(void) {
    /* TODO: Implement from disassembly */
}

/* Function: freeexp__FP9FuncStateP7expdesc
 * Address: 0x080ace18
 * Size: 13 instructions */
void freeexp(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - freereg() */
    /* TODO: Implement from disassembly */
}

/* Function: addk__FP9FuncStateP11lua_TObjectT1
 * Address: 0x080ace38
 * Size: 74 instructions */
void addk(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaH_get() */
    /* - luaM_growaux() */
    /* - luaH_set() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_stringK__FP9FuncStateP7TString
 * Address: 0x080acf00
 * Size: 16 instructions */
void luaK_stringK(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - addk() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_numberK__FP9FuncStated
 * Address: 0x080acf28
 * Size: 16 instructions */
void luaK_numberK(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - addk() */
    /* TODO: Implement from disassembly */
}

/* Function: nil_constant__FP9FuncState
 * Address: 0x080acf50
 * Size: 17 instructions */
void nil_constant(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - addk() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_setcallreturns__FP9FuncStateP7expdesci
 * Address: 0x080acf80
 * Size: 34 instructions */
void luaK_setcallreturns(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaK_dischargevars__FP9FuncStateP7expdesc
 * Address: 0x080acfd8
 * Size: 60 instructions */
void luaK_dischargevars(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_codeABx() */
    /* - freereg() */
    /* - luaK_codeABC() */
    /* - luaK_setcallreturns() */
    /* TODO: Implement from disassembly */
}

/* Function: code_label__FP9FuncStateiii
 * Address: 0x080ad074
 * Size: 26 instructions */
void code_label(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_getlabel() */
    /* - luaK_codeABC() */
    /* TODO: Implement from disassembly */
}

/* Function: discharge2reg__FP9FuncStateP7expdesci
 * Address: 0x080ad0a8
 * Size: 69 instructions */
void discharge2reg(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_dischargevars() */
    /* - luaK_nil() */
    /* - luaK_codeABC() */
    /* - luaK_codeABx() */
    /* TODO: Implement from disassembly */
}

/* Function: discharge2anyreg__FP9FuncStateP7expdesc
 * Address: 0x080ad14c
 * Size: 25 instructions */
void discharge2anyreg(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_reserveregs() */
    /* - discharge2reg() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_exp2reg__FP9FuncStateP7expdesci
 * Address: 0x080ad180
 * Size: 115 instructions */
void luaK_exp2reg(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - discharge2reg() */
    /* - luaK_concat() */
    /* - need_value() */
    /* - luaK_jump() */
    /* - code_label() */
    /* - luaK_patchtohere() */
    /* - luaK_getlabel() */
    /* - luaK_patchlistaux() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_exp2nextreg__FP9FuncStateP7expdesc
 * Address: 0x080ad2b0
 * Size: 33 instructions */
void luaK_exp2nextreg(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_dischargevars() */
    /* - freeexp() */
    /* - luaK_reserveregs() */
    /* - luaK_exp2reg() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_exp2anyreg__FP9FuncStateP7expdesc
 * Address: 0x080ad2f8
 * Size: 37 instructions */
void luaK_exp2anyreg(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_dischargevars() */
    /* - luaK_exp2reg() */
    /* - luaK_exp2nextreg() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_exp2val__FP9FuncStateP7expdesc
 * Address: 0x080ad34c
 * Size: 20 instructions */
void luaK_exp2val(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaK_exp2anyreg() */
    /* - luaK_dischargevars() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_exp2RK__FP9FuncStateP7expdesc
 * Address: 0x080ad37c
 * Size: 43 instructions */
void luaK_exp2RK(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_exp2val() */
    /* - nil_constant() */
    /* - luaK_exp2anyreg() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_storevar__FP9FuncStateP7expdescT1
 * Address: 0x080ad3f0
 * Size: 76 instructions */
void luaK_storevar(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - freeexp() */
    /* - luaK_exp2reg() */
    /* - luaK_exp2anyreg() */
    /* - luaK_codeABx() */
    /* - luaK_exp2RK() */
    /* - luaK_codeABC() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_self__FP9FuncStateP7expdescT1
 * Address: 0x080ad4a4
 * Size: 49 instructions */
void luaK_self(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_exp2anyreg() */
    /* - freeexp() */
    /* - luaK_reserveregs() */
    /* - luaK_exp2RK() */
    /* - luaK_codeABC() */
    /* TODO: Implement from disassembly */
}

/* Function: invertjump__FP9FuncStateP7expdesc
 * Address: 0x080ad518
 * Size: 19 instructions */
void invertjump(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - getjumpcontrol() */
    /* TODO: Implement from disassembly */
}

/* Function: jumponcond__FP9FuncStateP7expdesci
 * Address: 0x080ad54c
 * Size: 51 instructions */
void jumponcond(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - discharge2anyreg() */
    /* - freeexp() */
    /* - luaK_condjump() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_goiftrue__FP9FuncStateP7expdesc
 * Address: 0x080ad5c8
 * Size: 55 instructions */
void luaK_goiftrue(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_dischargevars() */
    /* - luaK_jump() */
    /* - invertjump() */
    /* - jumponcond() */
    /* - luaK_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_goiffalse__FP9FuncStateP7expdesc
 * Address: 0x080ad648
 * Size: 51 instructions */
void luaK_goiffalse(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_dischargevars() */
    /* - luaK_jump() */
    /* - jumponcond() */
    /* - luaK_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: codenot__FP9FuncStateP7expdesc
 * Address: 0x080ad6bc
 * Size: 55 instructions */
void codenot(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_dischargevars() */
    /* - invertjump() */
    /* - discharge2anyreg() */
    /* - freeexp() */
    /* - luaK_codeABC() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_indexed__FP9FuncStateP7expdescT1
 * Address: 0x080ad74c
 * Size: 15 instructions */
void luaK_indexed(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaK_exp2RK() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_prefix__FP9FuncState5UnOprP7expdesc
 * Address: 0x080ad774
 * Size: 62 instructions */
void luaK_prefix(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaK_exp2val() */
    /* - luaK_numberK() */
    /* - luaK_exp2anyreg() */
    /* - freeexp() */
    /* - luaK_codeABC() */
    /* - codenot() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_infix__FP9FuncState6BinOprP7expdesc
 * Address: 0x080ad814
 * Size: 56 instructions */
void luaK_infix(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_goiftrue() */
    /* - luaK_patchtohere() */
    /* - luaK_goiffalse() */
    /* - luaK_exp2nextreg() */
    /* - luaK_exp2RK() */
    /* TODO: Implement from disassembly */
}

/* Function: codebinop__FP9FuncStateP7expdesc6BinOprii
 * Address: 0x080ad8a4
 * Size: 51 instructions */
void codebinop(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaK_codeABC() */
    /* - luaK_condjump() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_posfix__FP9FuncState6BinOprP7expdescT2
 * Address: 0x080ad920
 * Size: 155 instructions */
void luaK_posfix(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaK_dischargevars() */
    /* - luaK_concat() */
    /* - luaK_exp2val() */
    /* - freeexp() */
    /* - luaK_exp2nextreg() */
    /* - luaK_codeABC() */
    /* - luaK_exp2RK() */
    /* - codebinop() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_fixline__FP9FuncStatei
 * Address: 0x080adac4
 * Size: 13 instructions */
void luaK_fixline(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaK_code__FP9FuncStateUli
 * Address: 0x080adae0
 * Size: 56 instructions */
void luaK_code(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaK_dischargejpc() */
    /* - luaM_growaux() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_codeABC__FP9FuncState6OpCodeiii
 * Address: 0x080adb78
 * Size: 21 instructions */
void luaK_codeABC(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaK_code() */
    /* TODO: Implement from disassembly */
}

/* Function: luaK_codeABx__FP9FuncState6OpCodeiUi
 * Address: 0x080adbac
 * Size: 20 instructions */
void luaK_codeABx(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaK_code() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_init__FP9lua_State
 * Address: 0x080adbe0
 * Size: 37 instructions */
void luaX_init(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_checklimit__FP8LexStateiiPCc
 * Address: 0x080adc30
 * Size: 21 instructions */
void luaX_checklimit(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaO_pushfstring() */
    /* - luaX_syntaxerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_errorline__FP8LexStatePCcT1i
 * Address: 0x080adc64
 * Size: 39 instructions */
void luaX_errorline(void) {
    /* Stack: 92 bytes */
    /* Calls: */
    /* - luaO_chunkid() */
    /* - luaO_pushfstring() */
    /* - luaD_throw() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_error__FP8LexStatePCcT1
 * Address: 0x080adcbc
 * Size: 12 instructions */
void luaX_error(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaX_errorline() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_syntaxerror__FP8LexStatePCc
 * Address: 0x080adcd8
 * Size: 34 instructions */
void luaX_syntaxerror(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaX_token2str() */
    /* - luaX_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_token2str__FP8LexStatei
 * Address: 0x080add34
 * Size: 18 instructions */
void luaX_token2str(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaO_pushfstring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_lexerror__FP8LexStatePCci
 * Address: 0x080add68
 * Size: 32 instructions */
void luaX_lexerror(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaX_token2str() */
    /* - luaX_error() */
    /* TODO: Implement from disassembly */
}

/* Function: inclinenumber__FP8LexState
 * Address: 0x080addb0
 * Size: 34 instructions */
void inclinenumber(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaZ_fill() */
    /* - luaX_checklimit() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_setinput__FP9lua_StateP8LexStateP3ZioP7TString
 * Address: 0x080ade08
 * Size: 58 instructions */
void luaX_setinput(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaZ_fill() */
    /* TODO: Implement from disassembly */
}

/* Function: readname__FP8LexState
 * Address: 0x080adeb4
 * Size: 65 instructions */
void readname(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaZ_openspace() */
    /* - luaZ_fill() */
    /* TODO: Implement from disassembly */
}

/* Function: read_numeral__FP8LexStateiP7SemInfo
 * Address: 0x080adf58
 * Size: 263 instructions */
void read_numeral(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaZ_openspace() */
    /* - luaZ_fill() */
    /* - luaX_lexerror() */
    /* - luaO_str2d() */
    /* TODO: Implement from disassembly */
}

/* Function: read_long_string__FP8LexStateP7SemInfo
 * Address: 0x080ae220
 * Size: 234 instructions */
void read_long_string(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaZ_openspace() */
    /* - luaZ_fill() */
    /* - inclinenumber() */
    /* - luaX_lexerror() */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: read_string__FP8LexStateiP7SemInfo
 * Address: 0x080ae49c
 * Size: 311 instructions */
void read_string(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaZ_openspace() */
    /* - luaZ_fill() */
    /* - luaX_lexerror() */
    /* - inclinenumber() */
    /* - luaS_newlstr() */
    /* TODO: Implement from disassembly */
}

/* Function: luaX_lex__FP8LexStateP7SemInfo
 * Address: 0x080ae818
 * Size: 490 instructions */
void luaX_lex(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - inclinenumber() */
    /* - luaZ_fill() */
    /* - read_long_string() */
    /* - read_string() */
    /* - read_numeral() */
    /* - readname() */
    /* - luaS_newlstr() */
    /* - luaO_pushfstring() */
    /* - luaX_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_argerror__FP9lua_StateiPCc
 * Address: 0x080aee00
 * Size: 61 instructions */
void luaL_argerror(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - lua_getstack() */
    /* - lua_getinfo() */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_typerror__FP9lua_StateiPCc
 * Address: 0x080aee9c
 * Size: 35 instructions */
void luaL_typerror(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - lua_typename() */
    /* - lua_pushfstring() */
    /* - luaL_argerror() */
    /* TODO: Implement from disassembly */
}

/* Function: tag_error__FP9lua_Stateii
 * Address: 0x080aeee8
 * Size: 21 instructions */
void tag_error(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_typename() */
    /* - luaL_typerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_where__FP9lua_Statei
 * Address: 0x080aef14
 * Size: 41 instructions */
void luaL_where(void) {
    /* Stack: 112 bytes */
    /* Calls: */
    /* - lua_getstack() */
    /* - lua_getinfo() */
    /* - lua_pushfstring() */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_error__FP9lua_StatePCce
 * Address: 0x080aef78
 * Size: 33 instructions */
void luaL_error(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_where() */
    /* - lua_pushvfstring() */
    /* - lua_concat() */
    /* - lua_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_findstring__FPCcPCPCc
 * Address: 0x080aefc0
 * Size: 31 instructions */
void luaL_findstring(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - strcmp@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_newmetatable__FP9lua_StatePCc
 * Address: 0x080af004
 * Size: 67 instructions */
void luaL_newmetatable(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_rawget() */
    /* - lua_type() */
    /* - lua_settop() */
    /* - lua_newtable() */
    /* - lua_pushvalue() */
    /* - lua_rawset() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_getmetatable__FP9lua_StatePCc
 * Address: 0x080af0bc
 * Size: 17 instructions */
void luaL_getmetatable(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_rawget() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_checkudata__FP9lua_StateiPCc
 * Address: 0x080af0e8
 * Size: 52 instructions */
void luaL_checkudata(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_getmetatable() */
    /* - lua_rawget() */
    /* - lua_tostring() */
    /* - strcmp@plt() */
    /* - lua_settop() */
    /* - lua_touserdata() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_checkstack__FP9lua_StateiPCc
 * Address: 0x080af168
 * Size: 21 instructions */
void luaL_checkstack(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_checkstack() */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_checktype__FP9lua_Stateii
 * Address: 0x080af19c
 * Size: 28 instructions */
void luaL_checktype(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - tag_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_checkany__FP9lua_Statei
 * Address: 0x080af1d4
 * Size: 25 instructions */
void luaL_checkany(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - luaL_argerror() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_checklstring__FP9lua_StateiPUi
 * Address: 0x080af20c
 * Size: 37 instructions */
void luaL_checklstring(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_tostring() */
    /* - tag_error() */
    /* - lua_strlen() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_optlstring__FP9lua_StateiPCcPUi
 * Address: 0x080af25c
 * Size: 48 instructions */
void luaL_optlstring(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - luaL_checklstring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_checknumber__FP9lua_Statei
 * Address: 0x080af2c8
 * Size: 39 instructions */
void luaL_checknumber(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - lua_isnumber() */
    /* - tag_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_optnumber__FP9lua_Stateid
 * Address: 0x080af320
 * Size: 28 instructions */
void luaL_optnumber(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - luaL_checknumber() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_getmetafield__FP9lua_StateiPCc
 * Address: 0x080af35c
 * Size: 43 instructions */
void luaL_getmetafield(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_getmetatable() */
    /* - lua_pushstring() */
    /* - lua_rawget() */
    /* - lua_type() */
    /* - lua_remove() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_callmeta__FP9lua_StateiPCc
 * Address: 0x080af3cc
 * Size: 42 instructions */
void luaL_callmeta(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - luaL_getmetafield() */
    /* - lua_pushvalue() */
    /* - lua_call() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_openlib__FP9lua_StatePCcPC8luaL_regi
 * Address: 0x080af43c
 * Size: 124 instructions */
void luaL_openlib(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_settop() */
    /* - lua_newtable() */
    /* - lua_pushvalue() */
    /* - lua_settable() */
    /* - lua_insert() */
    /* - lua_pushcclosure() */
    /* TODO: Implement from disassembly */
}

/* Function: checkint__FP9lua_Statei
 * Address: 0x080af584
 * Size: 44 instructions */
void checkint(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - lua_isnumber() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: getsizes__FP9lua_State
 * Address: 0x080af5f0
 * Size: 63 instructions */
void getsizes(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_rawgeti() */
    /* - lua_type() */
    /* - lua_settop() */
    /* - lua_newtable() */
    /* - lua_pushvalue() */
    /* - lua_setmetatable() */
    /* - lua_pushlstring() */
    /* - lua_rawset() */
    /* - lua_rawseti() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_setn__FP9lua_Stateii
 * Address: 0x080af6a0
 * Size: 83 instructions */
void luaL_setn(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushlstring() */
    /* - lua_rawget() */
    /* - checkint() */
    /* - lua_pushnumber() */
    /* - lua_rawset() */
    /* - getsizes() */
    /* - lua_pushvalue() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_getn__FP9lua_Statei
 * Address: 0x080af780
 * Size: 90 instructions */
void luaL_getn(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushlstring() */
    /* - lua_rawget() */
    /* - checkint() */
    /* - getsizes() */
    /* - lua_pushvalue() */
    /* - lua_settop() */
    /* - lua_rawgeti() */
    /* - lua_type() */
    /* TODO: Implement from disassembly */
}

/* Function: emptybuffer__FP11luaL_Buffer
 * Address: 0x080af864
 * Size: 27 instructions */
void emptybuffer(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: adjuststack__FP11luaL_Buffer
 * Address: 0x080af8a0
 * Size: 59 instructions */
void adjuststack(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_strlen() */
    /* - lua_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_prepbuffer__FP11luaL_Buffer
 * Address: 0x080af928
 * Size: 19 instructions */
void luaL_prepbuffer(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - emptybuffer() */
    /* - adjuststack() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_addlstring__FP11luaL_BufferPCcUi
 * Address: 0x080af954
 * Size: 35 instructions */
void luaL_addlstring(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_prepbuffer() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_addstring__FP11luaL_BufferPCc
 * Address: 0x080af9a0
 * Size: 21 instructions */
void luaL_addstring(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_addlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_pushresult__FP11luaL_Buffer
 * Address: 0x080af9d0
 * Size: 17 instructions */
void luaL_pushresult(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - emptybuffer() */
    /* - lua_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_addvalue__FP11luaL_Buffer
 * Address: 0x080afa00
 * Size: 62 instructions */
void luaL_addvalue(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_strlen() */
    /* - lua_tostring() */
    /* - memcpy@plt() */
    /* - lua_settop() */
    /* - emptybuffer() */
    /* - lua_insert() */
    /* - adjuststack() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_buffinit__FP9lua_StateP11luaL_Buffer
 * Address: 0x080afa94
 * Size: 11 instructions */
void luaL_buffinit(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaL_ref__FP9lua_Statei
 * Address: 0x080afab0
 * Size: 98 instructions */
void luaL_ref(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_type() */
    /* - lua_settop() */
    /* - lua_rawgeti() */
    /* - lua_tonumber() */
    /* - lua_rawseti() */
    /* - luaL_getn() */
    /* - luaL_setn() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_unref__FP9lua_Stateii
 * Address: 0x080afbb0
 * Size: 51 instructions */
void luaL_unref(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_rawgeti() */
    /* - lua_rawseti() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: getF__FP9lua_StatePvPUi
 * Address: 0x080afc2c
 * Size: 32 instructions */
void getF(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - feof@plt() */
    /* - fread@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: errfile__FP9lua_Statei
 * Address: 0x080afc78
 * Size: 35 instructions */
void errfile(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_tostring() */
    /* - () */
    /* - strerror@plt() */
    /* - lua_pushfstring() */
    /* - lua_remove() */
    /* TODO: Implement from disassembly */
}

/* Function: luaL_loadfile__FP9lua_StatePCc
 * Address: 0x080afccc
 * Size: 112 instructions */
void luaL_loadfile(void) {
    /* Stack: 8220 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushlstring() */
    /* - lua_pushfstring() */
    /* - fopen@plt() */
    /* - _IO_getc@plt() */
    /* - ungetc@plt() */
    /* - fclose@plt() */
    /* - lua_tostring() */
    /* - lua_load() */
    /* - ferror@plt() */
    /* - lua_remove() */
    /* - lua_settop() */
    /* - errfile() */
    /* TODO: Implement from disassembly */
}

/* Function: getS__FP9lua_StatePvPUi
 * Address: 0x080afe28
 * Size: 15 instructions */
void getS(void) {
    /* TODO: Implement from disassembly */
}

/* Function: luaL_loadbuffer__FP9lua_StatePCcUiT1
 * Address: 0x080afe4c
 * Size: 20 instructions */
void luaL_loadbuffer(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_load() */
    /* TODO: Implement from disassembly */
}

/* Function: callalert__FP9lua_Statei
 * Address: 0x080afe7c
 * Size: 51 instructions */
void callalert(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_insert() */
    /* - lua_call() */
    /* - lua_tostring() */
    /* - fprintf@plt() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: aux_do__FP9lua_Statei
 * Address: 0x080aff0c
 * Size: 27 instructions */
void aux_do(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_pcall() */
    /* - callalert() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_dofile__FP9lua_StatePCc
 * Address: 0x080aff44
 * Size: 17 instructions */
void lua_dofile(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_loadfile() */
    /* - aux_do() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_dobuffer__FP9lua_StatePCcUiT1
 * Address: 0x080aff6c
 * Size: 17 instructions */
void lua_dobuffer(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_loadbuffer() */
    /* - aux_do() */
    /* TODO: Implement from disassembly */
}

/* Function: lua_dostring__FP9lua_StatePCc
 * Address: 0x080aff94
 * Size: 26 instructions */
void lua_dostring(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_dobuffer() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_print__FP9lua_State
 * Address: 0x080affd0
 * Size: 81 instructions */
void luaB_print(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_pushvalue() */
    /* - lua_call() */
    /* - lua_tostring() */
    /* - luaL_error() */
    /* - fputs@plt() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_tonumber__FP9lua_State
 * Address: 0x080b00c0
 * Size: 124 instructions */
void luaB_tonumber(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_optnumber() */
    /* - luaL_checkany() */
    /* - lua_isnumber() */
    /* - lua_tonumber() */
    /* - luaL_checklstring() */
    /* - luaL_argerror() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_error__FP9lua_State
 * Address: 0x080b0220
 * Size: 60 instructions */
void luaB_error(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaL_optnumber() */
    /* - luaL_checkany() */
    /* - lua_isstring() */
    /* - lua_pushvalue() */
    /* - luaL_where() */
    /* - lua_concat() */
    /* - lua_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_getmetatable__FP9lua_State
 * Address: 0x080b02bc
 * Size: 29 instructions */
void luaB_getmetatable(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checkany() */
    /* - lua_getmetatable() */
    /* - luaL_getmetafield() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_setmetatable__FP9lua_State
 * Address: 0x080b0308
 * Size: 55 instructions */
void luaB_setmetatable(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - luaL_checktype() */
    /* - luaL_argerror() */
    /* - luaL_getmetafield() */
    /* - luaL_error() */
    /* - lua_settop() */
    /* - lua_setmetatable() */
    /* TODO: Implement from disassembly */
}

/* Function: getfunc__FP9lua_State
 * Address: 0x080b0398
 * Size: 80 instructions */
void getfunc(void) {
    /* Stack: 124 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - lua_pushvalue() */
    /* - luaL_optnumber() */
    /* - luaL_argerror() */
    /* - lua_getstack() */
    /* - lua_getinfo() */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: aux_getfenv__FP9lua_State
 * Address: 0x080b0470
 * Size: 30 instructions */
void aux_getfenv(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_getfenv() */
    /* - lua_pushlstring() */
    /* - lua_rawget() */
    /* - lua_type() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_getfenv__FP9lua_State
 * Address: 0x080b04c0
 * Size: 22 instructions */
void luaB_getfenv(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - getfunc() */
    /* - aux_getfenv() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_setfenv__FP9lua_State
 * Address: 0x080b04f8
 * Size: 75 instructions */
void luaB_setfenv(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checktype() */
    /* - getfunc() */
    /* - aux_getfenv() */
    /* - luaL_error() */
    /* - lua_settop() */
    /* - lua_pushvalue() */
    /* - lua_isnumber() */
    /* - lua_tonumber() */
    /* - lua_replace() */
    /* - lua_setfenv() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_rawequal__FP9lua_State
 * Address: 0x080b05c0
 * Size: 27 instructions */
void luaB_rawequal(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checkany() */
    /* - lua_rawequal() */
    /* - lua_pushboolean() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_rawget__FP9lua_State
 * Address: 0x080b0604
 * Size: 24 instructions */
void luaB_rawget(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checktype() */
    /* - luaL_checkany() */
    /* - lua_rawget() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_rawset__FP9lua_State
 * Address: 0x080b0640
 * Size: 28 instructions */
void luaB_rawset(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checktype() */
    /* - luaL_checkany() */
    /* - lua_rawset() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_gcinfo__FP9lua_State
 * Address: 0x080b0688
 * Size: 31 instructions */
void luaB_gcinfo(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_getgccount() */
    /* - lua_pushnumber() */
    /* - lua_getgcthreshold() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_collectgarbage__FP9lua_State
 * Address: 0x080b06dc
 * Size: 27 instructions */
void luaB_collectgarbage(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_optnumber() */
    /* - lua_setgcthreshold() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_type__FP9lua_State
 * Address: 0x080b0720
 * Size: 26 instructions */
void luaB_type(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checkany() */
    /* - lua_type() */
    /* - lua_typename() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_next__FP9lua_State
 * Address: 0x080b0760
 * Size: 32 instructions */
void luaB_next(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checktype() */
    /* - lua_settop() */
    /* - lua_next() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_pairs__FP9lua_State
 * Address: 0x080b07b4
 * Size: 33 instructions */
void luaB_pairs(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checktype() */
    /* - lua_pushlstring() */
    /* - lua_rawget() */
    /* - lua_pushvalue() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_ipairs__FP9lua_State
 * Address: 0x080b0810
 * Size: 87 instructions */
void luaB_ipairs(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - luaL_checktype() */
    /* - lua_type() */
    /* - lua_pushlstring() */
    /* - lua_rawget() */
    /* - lua_pushvalue() */
    /* - lua_pushnumber() */
    /* - lua_rawgeti() */
    /* TODO: Implement from disassembly */
}

/* Function: load_aux__FP9lua_Statei
 * Address: 0x080b0904
 * Size: 22 instructions */
void load_aux(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* - lua_insert() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_loadstring__FP9lua_State
 * Address: 0x080b093c
 * Size: 34 instructions */
void luaB_loadstring(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_optlstring() */
    /* - luaL_loadbuffer() */
    /* - load_aux() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_loadfile__FP9lua_State
 * Address: 0x080b0984
 * Size: 22 instructions */
void luaB_loadfile(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_optlstring() */
    /* - luaL_loadfile() */
    /* - load_aux() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_dofile__FP9lua_State
 * Address: 0x080b09b4
 * Size: 45 instructions */
void luaB_dofile(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_optlstring() */
    /* - lua_gettop() */
    /* - luaL_loadfile() */
    /* - lua_error() */
    /* - lua_call() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_assert__FP9lua_State
 * Address: 0x080b0a1c
 * Size: 35 instructions */
void luaB_assert(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checkany() */
    /* - lua_toboolean() */
    /* - lua_settop() */
    /* - luaL_optlstring() */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_unpack__FP9lua_State
 * Address: 0x080b0a78
 * Size: 45 instructions */
void luaB_unpack(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_checktype() */
    /* - luaL_getn() */
    /* - luaL_checkstack() */
    /* - lua_rawgeti() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_pcall__FP9lua_State
 * Address: 0x080b0ae0
 * Size: 38 instructions */
void luaB_pcall(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checkany() */
    /* - lua_gettop() */
    /* - lua_pcall() */
    /* - lua_pushboolean() */
    /* - lua_insert() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_xpcall__FP9lua_State
 * Address: 0x080b0b40
 * Size: 43 instructions */
void luaB_xpcall(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checkany() */
    /* - lua_settop() */
    /* - lua_insert() */
    /* - lua_pcall() */
    /* - lua_pushboolean() */
    /* - lua_replace() */
    /* - lua_gettop() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_tostring__FP9lua_State
 * Address: 0x080b0bb0
 * Size: 103 instructions */
void luaB_tostring(void) {
    /* Stack: 148 bytes */
    /* Calls: */
    /* - luaL_checkany() */
    /* - luaL_callmeta() */
    /* - lua_type() */
    /* - lua_tostring() */
    /* - lua_pushvalue() */
    /* - lua_toboolean() */
    /* - lua_topointer() */
    /* - lua_touserdata() */
    /* - lua_tothread() */
    /* - sprintf@plt() */
    /* - lua_pushlstring() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_newproxy__FP9lua_State
 * Address: 0x080b0cec
 * Size: 94 instructions */
void luaB_newproxy(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_settop() */
    /* - lua_newuserdata() */
    /* - lua_toboolean() */
    /* - lua_type() */
    /* - lua_newtable() */
    /* - lua_pushvalue() */
    /* - lua_pushboolean() */
    /* - lua_rawset() */
    /* - lua_getmetatable() */
    /* - lua_rawget() */
    /* - luaL_argerror() */
    /* - lua_setmetatable() */
    /* TODO: Implement from disassembly */
}

/* Function: getpath__FP9lua_State
 * Address: 0x080b0dec
 * Size: 43 instructions */
void getpath(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_tostring() */
    /* - lua_settop() */
    /* - getenv@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: pushnextpath__FP9lua_StatePCc
 * Address: 0x080b0e5c
 * Size: 46 instructions */
void pushnextpath(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - strchr@plt() */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: pushcomposename__FP9lua_State
 * Address: 0x080b0ebc
 * Size: 59 instructions */
void pushcomposename(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_tostring() */
    /* - luaL_checkstack() */
    /* - lua_pushlstring() */
    /* - lua_pushvalue() */
    /* - strchr@plt() */
    /* - lua_pushstring() */
    /* - lua_concat() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_require__FP9lua_State
 * Address: 0x080b0f4c
 * Size: 211 instructions */
void luaB_require(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - lua_settop() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - getpath() */
    /* - lua_pushvalue() */
    /* - lua_rawget() */
    /* - lua_toboolean() */
    /* - pushcomposename() */
    /* - lua_tostring() */
    /* - luaL_loadfile() */
    /* - pushnextpath() */
    /* - lua_insert() */
    /* - lua_settable() */
    /* - lua_call() */
    /* - lua_pushboolean() */
    /* - lua_replace() */
    /* - lua_rawset() */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: auxresume__FP9lua_StateT0i
 * Address: 0x080b11a0
 * Size: 70 instructions */
void auxresume(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_checkstack() */
    /* - luaL_error() */
    /* - lua_xmove() */
    /* - lua_resume() */
    /* - lua_gettop() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_coresume__FP9lua_State
 * Address: 0x080b124c
 * Size: 62 instructions */
void luaB_coresume(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_tothread() */
    /* - luaL_argerror() */
    /* - lua_gettop() */
    /* - auxresume() */
    /* - lua_pushboolean() */
    /* - lua_insert() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_auxwrap__FP9lua_State
 * Address: 0x080b12e4
 * Size: 54 instructions */
void luaB_auxwrap(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_tothread() */
    /* - lua_gettop() */
    /* - auxresume() */
    /* - lua_isstring() */
    /* - luaL_where() */
    /* - lua_insert() */
    /* - lua_concat() */
    /* - lua_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_cocreate__FP9lua_State
 * Address: 0x080b1368
 * Size: 46 instructions */
void luaB_cocreate(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_newthread() */
    /* - lua_type() */
    /* - lua_iscfunction() */
    /* - luaL_argerror() */
    /* - lua_pushvalue() */
    /* - lua_xmove() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_cowrap__FP9lua_State
 * Address: 0x080b13dc
 * Size: 18 instructions */
void luaB_cowrap(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaB_cocreate() */
    /* - lua_pushcclosure() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_yield__FP9lua_State
 * Address: 0x080b140c
 * Size: 16 instructions */
void luaB_yield(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_yield() */
    /* TODO: Implement from disassembly */
}

/* Function: luaB_costatus__FP9lua_State
 * Address: 0x080b1430
 * Size: 59 instructions */
void luaB_costatus(void) {
    /* Stack: 112 bytes */
    /* Calls: */
    /* - lua_tothread() */
    /* - luaL_argerror() */
    /* - lua_getstack() */
    /* - lua_gettop() */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: base_open__FP9lua_State
 * Address: 0x080b14cc
 * Size: 86 instructions */
void base_open(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_pushlstring() */
    /* - lua_pushvalue() */
    /* - luaL_openlib() */
    /* - lua_rawset() */
    /* - lua_newtable() */
    /* - lua_setmetatable() */
    /* - lua_pushcclosure() */
    /* TODO: Implement from disassembly */
}

/* Function: luaopen_base__FP9lua_State
 * Address: 0x080b15c8
 * Size: 35 instructions */
void luaopen_base(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - base_open() */
    /* - luaL_openlib() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_insert() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: pushresult__FP9lua_StateiPCc
 * Address: 0x080b1630
 * Size: 56 instructions */
void pushresult(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushboolean() */
    /* - lua_pushnil() */
    /* - () */
    /* - strerror@plt() */
    /* - lua_pushfstring() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: topfile__FP9lua_Statei
 * Address: 0x080b16cc
 * Size: 29 instructions */
void topfile(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_checkudata() */
    /* - luaL_argerror() */
    /* TODO: Implement from disassembly */
}

/* Function: io_type__FP9lua_State
 * Address: 0x080b170c
 * Size: 36 instructions */
void io_type(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checkudata() */
    /* - lua_pushnil() */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: tofile__FP9lua_Statei
 * Address: 0x080b176c
 * Size: 24 instructions */
void tofile(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - topfile() */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: newfile__FP9lua_State
 * Address: 0x080b17a4
 * Size: 28 instructions */
void newfile(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_newuserdata() */
    /* - luaL_getmetatable() */
    /* - lua_setmetatable() */
    /* TODO: Implement from disassembly */
}

/* Function: registerfile__FP9lua_StateP8_IO_FILEPCcT2
 * Address: 0x080b17e8
 * Size: 45 instructions */
void registerfile(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - newfile() */
    /* - lua_pushvalue() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: aux_close__FP9lua_State
 * Address: 0x080b1854
 * Size: 51 instructions */
void aux_close(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - tofile() */
    /* - pclose@plt() */
    /* - fclose@plt() */
    /* - lua_touserdata() */
    /* TODO: Implement from disassembly */
}

/* Function: io_close__FP9lua_State
 * Address: 0x080b18d8
 * Size: 41 instructions */
void io_close(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - lua_pushstring() */
    /* - lua_rawget() */
    /* - aux_close() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: io_gc__FP9lua_State
 * Address: 0x080b1948
 * Size: 20 instructions */
void io_gc(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - topfile() */
    /* - aux_close() */
    /* TODO: Implement from disassembly */
}

/* Function: io_tostring__FP9lua_State
 * Address: 0x080b1978
 * Size: 46 instructions */
void io_tostring(void) {
    /* Stack: 144 bytes */
    /* Calls: */
    /* - topfile() */
    /* - lua_touserdata() */
    /* - sprintf@plt() */
    /* - lua_pushfstring() */
    /* TODO: Implement from disassembly */
}

/* Function: io_open__FP9lua_State
 * Address: 0x080b1a00
 * Size: 48 instructions */
void io_open(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_optlstring() */
    /* - newfile() */
    /* - fopen@plt() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: io_popen__FP9lua_State
 * Address: 0x080b1a70
 * Size: 48 instructions */
void io_popen(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_optlstring() */
    /* - newfile() */
    /* - popen@plt() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: io_tmpfile__FP9lua_State
 * Address: 0x080b1ae0
 * Size: 29 instructions */
void io_tmpfile(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - newfile() */
    /* - tmpfile@plt() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: getiofile__FP9lua_StatePCc
 * Address: 0x080b1b24
 * Size: 22 instructions */
void getiofile(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_rawget() */
    /* - tofile() */
    /* TODO: Implement from disassembly */
}

/* Function: g_iofile__FP9lua_StatePCcT1
 * Address: 0x080b1b5c
 * Size: 90 instructions */
void g_iofile(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - lua_tostring() */
    /* - lua_pushstring() */
    /* - newfile() */
    /* - fopen@plt() */
    /* - () */
    /* - strerror@plt() */
    /* - lua_pushfstring() */
    /* - luaL_argerror() */
    /* - tofile() */
    /* - lua_pushvalue() */
    /* - lua_rawset() */
    /* - lua_rawget() */
    /* TODO: Implement from disassembly */
}

/* Function: io_input__FP9lua_State
 * Address: 0x080b1c4c
 * Size: 11 instructions */
void io_input(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - g_iofile() */
    /* TODO: Implement from disassembly */
}

/* Function: io_output__FP9lua_State
 * Address: 0x080b1c6c
 * Size: 11 instructions */
void io_output(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - g_iofile() */
    /* TODO: Implement from disassembly */
}

/* Function: aux_lines__FP9lua_Stateii
 * Address: 0x080b1c8c
 * Size: 40 instructions */
void aux_lines(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_pushlstring() */
    /* - lua_rawget() */
    /* - lua_pushvalue() */
    /* - lua_pushboolean() */
    /* - lua_pushcclosure() */
    /* TODO: Implement from disassembly */
}

/* Function: f_lines__FP9lua_State
 * Address: 0x080b1cf0
 * Size: 18 instructions */
void f_lines(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - tofile() */
    /* - aux_lines() */
    /* TODO: Implement from disassembly */
}

/* Function: io_lines__FP9lua_State
 * Address: 0x080b1d1c
 * Size: 73 instructions */
void io_lines(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - lua_pushstring() */
    /* - lua_rawget() */
    /* - f_lines() */
    /* - luaL_checklstring() */
    /* - newfile() */
    /* - fopen@plt() */
    /* - () */
    /* - strerror@plt() */
    /* - luaL_argerror() */
    /* - lua_gettop() */
    /* - aux_lines() */
    /* TODO: Implement from disassembly */
}

/* Function: read_number__FP9lua_StateP8_IO_FILE
 * Address: 0x080b1ddc
 * Size: 23 instructions */
void read_number(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - fscanf@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: test_eof__FP9lua_StateP8_IO_FILE
 * Address: 0x080b1e1c
 * Size: 32 instructions */
void test_eof(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - _IO_getc@plt() */
    /* - ungetc@plt() */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: read_line__FP9lua_StateP8_IO_FILE
 * Address: 0x080b1e64
 * Size: 64 instructions */
void read_line(void) {
    /* Stack: 8220 bytes */
    /* Calls: */
    /* - luaL_buffinit() */
    /* - luaL_prepbuffer() */
    /* - fgets@plt() */
    /* - luaL_pushresult() */
    /* - lua_strlen() */
    /* TODO: Implement from disassembly */
}

/* Function: read_chars__FP9lua_StateP8_IO_FILEUi
 * Address: 0x080b1f18
 * Size: 58 instructions */
void read_chars(void) {
    /* Stack: 8220 bytes */
    /* Calls: */
    /* - luaL_buffinit() */
    /* - luaL_prepbuffer() */
    /* - fread@plt() */
    /* - luaL_pushresult() */
    /* - lua_strlen() */
    /* TODO: Implement from disassembly */
}

/* Function: g_read__FP9lua_StateP8_IO_FILEi
 * Address: 0x080b1fac
 * Size: 163 instructions */
void g_read(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - read_line() */
    /* - luaL_checkstack() */
    /* - lua_type() */
    /* - lua_tonumber() */
    /* - test_eof() */
    /* - read_chars() */
    /* - lua_tostring() */
    /* - luaL_argerror() */
    /* - read_number() */
    /* - luaL_error() */
    /* - lua_settop() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: io_read__FP9lua_State
 * Address: 0x080b2168
 * Size: 18 instructions */
void io_read(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - getiofile() */
    /* - g_read() */
    /* TODO: Implement from disassembly */
}

/* Function: f_read__FP9lua_State
 * Address: 0x080b2194
 * Size: 19 instructions */
void f_read(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - tofile() */
    /* - g_read() */
    /* TODO: Implement from disassembly */
}

/* Function: io_readline__FP9lua_State
 * Address: 0x080b21c0
 * Size: 56 instructions */
void io_readline(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_touserdata() */
    /* - luaL_error() */
    /* - read_line() */
    /* - lua_toboolean() */
    /* - lua_settop() */
    /* - lua_pushvalue() */
    /* - aux_close() */
    /* TODO: Implement from disassembly */
}

/* Function: g_write__FP9lua_StateP8_IO_FILEi
 * Address: 0x080b2254
 * Size: 81 instructions */
void g_write(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_type() */
    /* - lua_tonumber() */
    /* - fprintf@plt() */
    /* - luaL_checklstring() */
    /* - fwrite@plt() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: io_write__FP9lua_State
 * Address: 0x080b2324
 * Size: 18 instructions */
void io_write(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - getiofile() */
    /* - g_write() */
    /* TODO: Implement from disassembly */
}

/* Function: f_write__FP9lua_State
 * Address: 0x080b2350
 * Size: 19 instructions */
void f_write(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - tofile() */
    /* - g_write() */
    /* TODO: Implement from disassembly */
}

/* Function: f_seek__FP9lua_State
 * Address: 0x080b237c
 * Size: 81 instructions */
void f_seek(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - tofile() */
    /* - luaL_optlstring() */
    /* - luaL_findstring() */
    /* - luaL_optnumber() */
    /* - luaL_argerror() */
    /* - fseek@plt() */
    /* - ftell@plt() */
    /* - lua_pushnumber() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: io_flush__FP9lua_State
 * Address: 0x080b2458
 * Size: 26 instructions */
void io_flush(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - getiofile() */
    /* - fflush@plt() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: f_flush__FP9lua_State
 * Address: 0x080b249c
 * Size: 26 instructions */
void f_flush(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - tofile() */
    /* - fflush@plt() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: createmeta__FP9lua_State
 * Address: 0x080b24dc
 * Size: 32 instructions */
void createmeta(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_newmetatable() */
    /* - lua_pushlstring() */
    /* - lua_pushvalue() */
    /* - lua_rawset() */
    /* - luaL_openlib() */
    /* TODO: Implement from disassembly */
}

/* Function: io_execute__FP9lua_State
 * Address: 0x080b2534
 * Size: 25 instructions */
void io_execute(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - system@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: io_remove__FP9lua_State
 * Address: 0x080b2574
 * Size: 26 instructions */
void io_remove(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - remove@plt() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: io_rename__FP9lua_State
 * Address: 0x080b25b4
 * Size: 37 instructions */
void io_rename(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - rename@plt() */
    /* - pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: io_tmpname__FP9lua_State
 * Address: 0x080b2608
 * Size: 11 instructions */
void io_tmpname(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: io_getenv__FP9lua_State
 * Address: 0x080b2624
 * Size: 21 instructions */
void io_getenv(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - getenv@plt() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: io_clock__FP9lua_State
 * Address: 0x080b2658
 * Size: 18 instructions */
void io_clock(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - clock@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: setfield__FP9lua_StatePCci
 * Address: 0x080b268c
 * Size: 28 instructions */
void setfield(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_rawset() */
    /* TODO: Implement from disassembly */
}

/* Function: setboolfield__FP9lua_StatePCci
 * Address: 0x080b26d0
 * Size: 26 instructions */
void setboolfield(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_pushboolean() */
    /* - lua_rawset() */
    /* TODO: Implement from disassembly */
}

/* Function: getboolfield__FP9lua_StatePCc
 * Address: 0x080b270c
 * Size: 31 instructions */
void getboolfield(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_toboolean() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: getfield__FP9lua_StatePCci
 * Address: 0x080b2754
 * Size: 61 instructions */
void getfield(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_isnumber() */
    /* - lua_tonumber() */
    /* - luaL_error() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: io_date__FP9lua_State
 * Address: 0x080b27ec
 * Size: 166 instructions */
void io_date(void) {
    /* Stack: 284 bytes */
    /* Calls: */
    /* - luaL_optlstring() */
    /* - luaL_optnumber() */
    /* - time@plt() */
    /* - gmtime@plt() */
    /* - localtime@plt() */
    /* - lua_pushnil() */
    /* - lua_newtable() */
    /* - setfield() */
    /* - setboolfield() */
    /* - strftime@plt() */
    /* - luaL_error() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: io_time__FP9lua_State
 * Address: 0x080b29f8
 * Size: 102 instructions */
void io_time(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_type() */
    /* - time@plt() */
    /* - lua_pushnumber() */
    /* - luaL_checktype() */
    /* - lua_settop() */
    /* - getfield() */
    /* - getboolfield() */
    /* - mktime@plt() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: io_difftime__FP9lua_State
 * Address: 0x080b2b24
 * Size: 50 instructions */
void io_difftime(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_optnumber() */
    /* - luaL_checknumber() */
    /* - difftime@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: io_setloc__FP9lua_State
 * Address: 0x080b2bac
 * Size: 63 instructions */
void io_setloc(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - lua_tostring() */
    /* - luaL_optlstring() */
    /* - luaL_findstring() */
    /* - lua_type() */
    /* - luaL_argerror() */
    /* - setlocale@plt() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: io_exit__FP9lua_State
 * Address: 0x080b2c54
 * Size: 20 instructions */
void io_exit(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - luaL_optnumber() */
    /* - exit@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: luaopen_io__FP9lua_State
 * Address: 0x080b2c90
 * Size: 46 instructions */
void luaopen_io(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_openlib() */
    /* - createmeta() */
    /* - lua_pushvalue() */
    /* - registerfile() */
    /* TODO: Implement from disassembly */
}

/* Function: math_abs__FP9lua_State
 * Address: 0x080b2d30
 * Size: 21 instructions */
void math_abs(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_sin__FP9lua_State
 * Address: 0x080b2d64
 * Size: 22 instructions */
void math_sin(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - sin@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_cos__FP9lua_State
 * Address: 0x080b2da0
 * Size: 22 instructions */
void math_cos(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - cos@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_tan__FP9lua_State
 * Address: 0x080b2ddc
 * Size: 22 instructions */
void math_tan(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - tan@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_asin__FP9lua_State
 * Address: 0x080b2e18
 * Size: 22 instructions */
void math_asin(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - asin@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_acos__FP9lua_State
 * Address: 0x080b2e54
 * Size: 22 instructions */
void math_acos(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - acos@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_atan__FP9lua_State
 * Address: 0x080b2e90
 * Size: 22 instructions */
void math_atan(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_atan2__FP9lua_State
 * Address: 0x080b2ec8
 * Size: 29 instructions */
void math_atan2(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_ceil__FP9lua_State
 * Address: 0x080b2f14
 * Size: 29 instructions */
void math_ceil(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_floor__FP9lua_State
 * Address: 0x080b2f64
 * Size: 29 instructions */
void math_floor(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_mod__FP9lua_State
 * Address: 0x080b2fb4
 * Size: 33 instructions */
void math_mod(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_sqrt__FP9lua_State
 * Address: 0x080b3008
 * Size: 21 instructions */
void math_sqrt(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_pow__FP9lua_State
 * Address: 0x080b303c
 * Size: 29 instructions */
void math_pow(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - pow@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_log__FP9lua_State
 * Address: 0x080b308c
 * Size: 22 instructions */
void math_log(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - log@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_log10__FP9lua_State
 * Address: 0x080b30c8
 * Size: 22 instructions */
void math_log10(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - log10@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_exp__FP9lua_State
 * Address: 0x080b3104
 * Size: 22 instructions */
void math_exp(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - exp@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_deg__FP9lua_State
 * Address: 0x080b3140
 * Size: 19 instructions */
void math_deg(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_rad__FP9lua_State
 * Address: 0x080b3174
 * Size: 19 instructions */
void math_rad(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_frexp__FP9lua_State
 * Address: 0x080b31a8
 * Size: 35 instructions */
void math_frexp(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - frexp@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_ldexp__FP9lua_State
 * Address: 0x080b3208
 * Size: 40 instructions */
void math_ldexp(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_min__FP9lua_State
 * Address: 0x080b3278
 * Size: 49 instructions */
void math_min(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_max__FP9lua_State
 * Address: 0x080b32ec
 * Size: 51 instructions */
void math_max(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - luaL_checknumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: math_random__FP9lua_State
 * Address: 0x080b3368
 * Size: 168 instructions */
void math_random(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - rand@plt() */
    /* - lua_gettop() */
    /* - luaL_checknumber() */
    /* - luaL_argerror() */
    /* - lua_pushnumber() */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: math_randomseed__FP9lua_State
 * Address: 0x080b3560
 * Size: 21 instructions */
void math_randomseed(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - luaL_checknumber() */
    /* - srand@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: luaopen_math__FP9lua_State
 * Address: 0x080b359c
 * Size: 46 instructions */
void luaopen_math(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_openlib() */
    /* - lua_pushlstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushcclosure() */
    /* TODO: Implement from disassembly */
}

/* Function: str_len__FP9lua_State
 * Address: 0x080b3630
 * Size: 25 instructions */
void str_len(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: posrelat__FlUi
 * Address: 0x080b3670
 * Size: 11 instructions */
void posrelat(void) {
    /* TODO: Implement from disassembly */
}

/* Function: str_sub__FP9lua_State
 * Address: 0x080b3688
 * Size: 84 instructions */
void str_sub(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_checknumber() */
    /* - posrelat() */
    /* - luaL_optnumber() */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: str_lower__FP9lua_State
 * Address: 0x080b3770
 * Size: 52 instructions */
void str_lower(void) {
    /* Stack: 8220 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_buffinit() */
    /* - luaL_prepbuffer() */
    /* - luaL_pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: str_upper__FP9lua_State
 * Address: 0x080b3810
 * Size: 52 instructions */
void str_upper(void) {
    /* Stack: 8220 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_buffinit() */
    /* - luaL_prepbuffer() */
    /* - luaL_pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: str_rep__FP9lua_State
 * Address: 0x080b38b0
 * Size: 60 instructions */
void str_rep(void) {
    /* Stack: 8236 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_checknumber() */
    /* - luaL_buffinit() */
    /* - luaL_addlstring() */
    /* - luaL_pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: str_byte__FP9lua_State
 * Address: 0x080b396c
 * Size: 53 instructions */
void str_byte(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_optnumber() */
    /* - posrelat() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: str_char__FP9lua_State
 * Address: 0x080b39fc
 * Size: 70 instructions */
void str_char(void) {
    /* Stack: 8220 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - luaL_buffinit() */
    /* - luaL_checknumber() */
    /* - luaL_argerror() */
    /* - luaL_prepbuffer() */
    /* - luaL_pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: writer__FP9lua_StatePCvUiPv
 * Address: 0x080b3aec
 * Size: 12 instructions */
void writer(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_addlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: str_dump__FP9lua_State
 * Address: 0x080b3b0c
 * Size: 40 instructions */
void str_dump(void) {
    /* Stack: 8224 bytes */
    /* Calls: */
    /* - luaL_checktype() */
    /* - luaL_buffinit() */
    /* - lua_dump() */
    /* - luaL_error() */
    /* - luaL_pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: check_capture__FP10MatchStatei
 * Address: 0x080b3b7c
 * Size: 21 instructions */
void check_capture(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: capture_to_close__FP10MatchState
 * Address: 0x080b3bb4
 * Size: 21 instructions */
void capture_to_close(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: luaI_classend__FP10MatchStatePCc
 * Address: 0x080b3be8
 * Size: 50 instructions */
void luaI_classend(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: match_class__Fii
 * Address: 0x080b3c60
 * Size: 82 instructions */
void match_class(void) {
    /* TODO: Implement from disassembly */
}

/* Function: matchbracketclass__FiPCcT1
 * Address: 0x080b3da4
 * Size: 55 instructions */
void matchbracketclass(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - match_class() */
    /* TODO: Implement from disassembly */
}

/* Function: luaI_singlematch__FiPCcT1
 * Address: 0x080b3e1c
 * Size: 39 instructions */
void luaI_singlematch(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - match_class() */
    /* - matchbracketclass() */
    /* TODO: Implement from disassembly */
}

/* Function: matchbalance__FP10MatchStatePCcT1
 * Address: 0x080b3e78
 * Size: 50 instructions */
void matchbalance(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_error() */
    /* TODO: Implement from disassembly */
}

/* Function: max_expand__FP10MatchStatePCcN21
 * Address: 0x080b3ee8
 * Size: 52 instructions */
void max_expand(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaI_singlematch() */
    /* - match() */
    /* TODO: Implement from disassembly */
}

/* Function: min_expand__FP10MatchStatePCcN21
 * Address: 0x080b3f58
 * Size: 41 instructions */
void min_expand(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - match() */
    /* - luaI_singlematch() */
    /* TODO: Implement from disassembly */
}

/* Function: start_capture__FP10MatchStatePCcT1i
 * Address: 0x080b3fb0
 * Size: 36 instructions */
void start_capture(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_error() */
    /* - match() */
    /* TODO: Implement from disassembly */
}

/* Function: end_capture__FP10MatchStatePCcT1
 * Address: 0x080b400c
 * Size: 32 instructions */
void end_capture(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - capture_to_close() */
    /* - match() */
    /* TODO: Implement from disassembly */
}

/* Function: match_capture__FP10MatchStatePCci
 * Address: 0x080b405c
 * Size: 36 instructions */
void match_capture(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - check_capture() */
    /* TODO: Implement from disassembly */
}

/* Function: match__FP10MatchStatePCcT1
 * Address: 0x080b40ac
 * Size: 218 instructions */
void match(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - start_capture() */
    /* - end_capture() */
    /* - matchbalance() */
    /* - luaL_error() */
    /* - luaI_classend() */
    /* - matchbracketclass() */
    /* - match_capture() */
    /* - luaI_singlematch() */
    /* - match() */
    /* - max_expand() */
    /* - min_expand() */
    /* TODO: Implement from disassembly */
}

/* Function: lmemfind__FPCcUiT0Ui
 * Address: 0x080b42fc
 * Size: 56 instructions */
void lmemfind(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - memchr@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: push_onecapture__FP10MatchStatei
 * Address: 0x080b4378
 * Size: 44 instructions */
void push_onecapture(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_error() */
    /* - lua_pushnumber() */
    /* - lua_pushlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: push_captures__FP10MatchStatePCcT1
 * Address: 0x080b43e8
 * Size: 46 instructions */
void push_captures(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_checkstack() */
    /* - lua_pushlstring() */
    /* - push_onecapture() */
    /* TODO: Implement from disassembly */
}

/* Function: str_find__FP9lua_State
 * Address: 0x080b4458
 * Size: 182 instructions */
void str_find(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_optnumber() */
    /* - posrelat() */
    /* - lua_toboolean() */
    /* - strpbrk@plt() */
    /* - lmemfind() */
    /* - lua_pushnumber() */
    /* - push_captures() */
    /* - match() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: gfind_aux__FP9lua_State
 * Address: 0x080b46a8
 * Size: 97 instructions */
void gfind_aux(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_tostring() */
    /* - lua_strlen() */
    /* - lua_tonumber() */
    /* - match() */
    /* - lua_pushnumber() */
    /* - lua_replace() */
    /* - push_captures() */
    /* TODO: Implement from disassembly */
}

/* Function: gfind__FP9lua_State
 * Address: 0x080b47fc
 * Size: 35 instructions */
void gfind(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - lua_settop() */
    /* - lua_pushnumber() */
    /* - lua_pushcclosure() */
    /* TODO: Implement from disassembly */
}

/* Function: add_s__FP10MatchStateP11luaL_BufferPCcT2
 * Address: 0x080b4858
 * Size: 112 instructions */
void add_s(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - lua_isstring() */
    /* - lua_tostring() */
    /* - lua_strlen() */
    /* - luaL_prepbuffer() */
    /* - check_capture() */
    /* - push_onecapture() */
    /* - luaL_addvalue() */
    /* - lua_pushvalue() */
    /* - push_captures() */
    /* - lua_call() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: str_gsub__FP9lua_State
 * Address: 0x080b4984
 * Size: 173 instructions */
void str_gsub(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_optnumber() */
    /* - lua_gettop() */
    /* - lua_isstring() */
    /* - lua_type() */
    /* - luaL_argerror() */
    /* - luaL_buffinit() */
    /* - match() */
    /* - add_s() */
    /* - luaL_prepbuffer() */
    /* - luaL_addlstring() */
    /* - luaL_pushresult() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: luaI_addquoted__FP9lua_StateP11luaL_Bufferi
 * Address: 0x080b4bbc
 * Size: 87 instructions */
void luaI_addquoted(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_prepbuffer() */
    /* - luaL_addlstring() */
    /* TODO: Implement from disassembly */
}

/* Function: scanformat__FP9lua_StatePCcPcPi
 * Address: 0x080b4c88
 * Size: 83 instructions */
void scanformat(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - strchr@plt() */
    /* - luaL_error() */
    /* - strncpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: str_format__FP9lua_State
 * Address: 0x080b4d64
 * Size: 214 instructions */
void str_format(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_checklstring() */
    /* - luaL_buffinit() */
    /* - luaL_prepbuffer() */
    /* - luaL_error() */
    /* - scanformat() */
    /* - luaL_checknumber() */
    /* - sprintf@plt() */
    /* - luaI_addquoted() */
    /* - lua_pushvalue() */
    /* - luaL_addvalue() */
    /* - luaL_addlstring() */
    /* - luaL_pushresult() */
    /* TODO: Implement from disassembly */
}

/* Function: luaopen_string__FP9lua_State
 * Address: 0x080b5040
 * Size: 25 instructions */
void luaopen_string(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - luaL_openlib() */
    /* TODO: Implement from disassembly */
}

/* Function: SetElderBrother__FP9lua_State
 * Address: 0x080b5070
 * Size: 200 instructions */
void SetElderBrother(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_type() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddYoungerBrother__FP9lua_State
 * Address: 0x080b52ec
 * Size: 142 instructions */
void AddYoungerBrother(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveYoungerBrother__FP9lua_State
 * Address: 0x080b54a8
 * Size: 190 instructions */
void RemoveYoungerBrother(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - FindObject() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetElderBrother__FP9lua_State
 * Address: 0x080b56fc
 * Size: 72 instructions */
void GetElderBrother(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearAllYoungerBrothers__FP9lua_State
 * Address: 0x080b57d8
 * Size: 90 instructions */
void ClearAllYoungerBrothers(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: InviteYoungerBrother__FP9lua_State
 * Address: 0x080b58ec
 * Size: 76 instructions */
void InviteYoungerBrother(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsBrother__FP9lua_State
 * Address: 0x080b59d8
 * Size: 121 instructions */
void IsBrother(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendBrotherhoodReply__FP9lua_State
 * Address: 0x080b5b48
 * Size: 95 instructions */
void SendBrotherhoodReply(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CreateParty__FP9lua_State
 * Address: 0x080b5c6c
 * Size: 507 instructions */
void CreateParty(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - wstrncpy() */
    /* - Unlock() */
    /* - GenerateUniqueID() */
    /* - CreateElements() */
    /* - SendWorldController() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPartyCount__FP9lua_State
 * Address: 0x080b62d8
 * Size: 108 instructions */
void GetPartyCount(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - DeleteElements() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPartyID__FP9lua_State
 * Address: 0x080b6428
 * Size: 101 instructions */
void SetPartyID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPartyID__FP9lua_State
 * Address: 0x080b6558
 * Size: 74 instructions */
void GetPartyID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddToParty__FP9lua_State
 * Address: 0x080b6634
 * Size: 317 instructions */
void AddToParty(void) {
    /* Stack: 120 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - wstrncpy() */
    /* - SendWorldController() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveFromParty__FP9lua_State
 * Address: 0x080b6a18
 * Size: 190 instructions */
void RemoveFromParty(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendWorldController() */
    /* - DeleteElements() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsPartyMember__FP9lua_State
 * Address: 0x080b6c74
 * Size: 192 instructions */
void IsPartyMember(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Lock() */
    /* - FindObject() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPartyMembers__FP9lua_State
 * Address: 0x080b6ec4
 * Size: 232 instructions */
void GetPartyMembers(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - Lock() */
    /* - lua_tonumber() */
    /* - lua_newtable() */
    /* - Lock() */
    /* - FindObject() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - Unlock() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: InviteIntoParty__FP9lua_State
 * Address: 0x080b7194
 * Size: 105 instructions */
void InviteIntoParty(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendPartyReply__FP9lua_State
 * Address: 0x080b72d8
 * Size: 124 instructions */
void SendPartyReply(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanID__FP9lua_State
 * Address: 0x080b7454
 * Size: 110 instructions */
void GetClanID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanLeader__FP9lua_State
 * Address: 0x080b75a4
 * Size: 115 instructions */
void GetClanLeader(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanMinisters__FP9lua_State
 * Address: 0x080b76f8
 * Size: 158 instructions */
void GetClanMinisters(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_settop() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanMembers__FP9lua_State
 * Address: 0x080b78d8
 * Size: 321 instructions */
void GetClanMembers(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllClanMembers__FP9lua_State
 * Address: 0x080b7ce0
 * Size: 161 instructions */
void GetAllClanMembers(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_settop() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanStatus__FP9lua_State
 * Address: 0x080b7ec8
 * Size: 85 instructions */
void GetClanStatus(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddBarredClan__FP9lua_State
 * Address: 0x080b7fc4
 * Size: 226 instructions */
void AddBarredClan(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Flush() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddToClan__FP9lua_State
 * Address: 0x080b8294
 * Size: 296 instructions */
void AddToClan(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendWorldController() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsClanMember__FP9lua_State
 * Address: 0x080b863c
 * Size: 118 instructions */
void IsClanMember(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsBarredFromClan__FP9lua_State
 * Address: 0x080b87a4
 * Size: 30 instructions */
void IsBarredFromClan(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: SendAllyClan__FP9lua_State
 * Address: 0x080b87f4
 * Size: 127 instructions */
void SendAllyClan(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: InviteIntoClan__FP9lua_State
 * Address: 0x080b8978
 * Size: 127 instructions */
void InviteIntoClan(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBarredClanList__FP9lua_State
 * Address: 0x080b8b04
 * Size: 8 instructions */
void GetBarredClanList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SendClanReply__FP9lua_State
 * Address: 0x080b8b14
 * Size: 124 instructions */
void SendClanReply(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanStatus__FP9lua_State
 * Address: 0x080b8c94
 * Size: 276 instructions */
void SetClanStatus(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnumber() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - Unlock() */
    /* - FindObject() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveFromClan__FP9lua_State
 * Address: 0x080b8fe8
 * Size: 274 instructions */
void RemoveFromClan(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - FindObject() */
    /* - SendToAllFunc() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveBarredClan__FP9lua_State
 * Address: 0x080b9354
 * Size: 169 instructions */
void RemoveBarredClan(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Flush() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanRating__FP9lua_State
 * Address: 0x080b9568
 * Size: 103 instructions */
void GetClanRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanRating__FP9lua_State
 * Address: 0x080b96a4
 * Size: 226 instructions */
void SetClanRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - Flush() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanRelics__FP9lua_State
 * Address: 0x080b9970
 * Size: 1077 instructions */
void GetClanRelics(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: StoreRelic__FP9lua_State
 * Address: 0x080ba644
 * Size: 469 instructions */
void StoreRelic(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveRelic__FP9lua_State
 * Address: 0x080bac34
 * Size: 189 instructions */
void RemoveRelic(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendRelic__FP9lua_State
 * Address: 0x080baec4
 * Size: 253 instructions */
void SendRelic(void) {
    /* Stack: 180 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetYoungerBrother__FP9lua_State
 * Address: 0x080bb29c
 * Size: 139 instructions */
void GetYoungerBrother(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetRelicFlags__FP9lua_State
 * Address: 0x080bb448
 * Size: 848 instructions */
void GetRelicFlags(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - memcpy@plt() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - difftime@plt() */
    /* - lua_settable() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetRelicFlag__FP9lua_State
 * Address: 0x080bbe9c
 * Size: 204 instructions */
void SetRelicFlag(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_type() */
    /* - time@plt() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanRelationship__FP9lua_State
 * Address: 0x080bc118
 * Size: 98 instructions */
void GetClanRelationship(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddToBountyList__FP9lua_State
 * Address: 0x080bc238
 * Size: 9 instructions */
void AddToBountyList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: RemoveFromBountyList__FP9lua_State
 * Address: 0x080bc248
 * Size: 9 instructions */
void RemoveFromBountyList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetBountyList__FP9lua_State
 * Address: 0x080bc258
 * Size: 9 instructions */
void GetBountyList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetClanType__FP9lua_State
 * Address: 0x080bc268
 * Size: 74 instructions */
void GetClanType(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanType__FP9lua_State
 * Address: 0x080bc344
 * Size: 125 instructions */
void SetClanType(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - Purge() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanQuit__FP9lua_State
 * Address: 0x080bc4c8
 * Size: 91 instructions */
void SetClanQuit(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanQuit__FP9lua_State
 * Address: 0x080bc5dc
 * Size: 72 instructions */
void GetClanQuit(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RestoreRelic__FP9lua_State
 * Address: 0x080bc6b4
 * Size: 66 instructions */
void RestoreRelic(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - ReturnRelic() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ReturnRelic__FUlP9lua_State
 * Address: 0x080bc774
 * Size: 244 instructions */
void ReturnRelic(void) {
    /* Stack: 104 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - AddRelic() */
    /* - ExecuteTask() */
    /* TODO: Implement from disassembly */
}

/* Function: FindRelic__FP5_ClanUl
 * Address: 0x080bca84
 * Size: 111 instructions */
void FindRelic(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddRelic__FP5_ClanUl
 * Address: 0x080bcbf4
 * Size: 185 instructions */
void AddRelic(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - FindRelic() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanPrestige__FP9lua_State
 * Address: 0x080bce84
 * Size: 74 instructions */
void GetClanPrestige(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanPrestige__FP9lua_State
 * Address: 0x080bcf64
 * Size: 95 instructions */
void SetClanPrestige(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendDuelOffer__FP9lua_State
 * Address: 0x080bd088
 * Size: 99 instructions */
void SendDuelOffer(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsFriendly__FP9lua_State
 * Address: 0x080bd1b8
 * Size: 84 instructions */
void IsFriendly(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IsFriendly_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsFriendly_F__FUlUlP9lua_State
 * Address: 0x080bd2a8
 * Size: 208 instructions */
void IsFriendly_F(void) {
    /* Stack: 64 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAffiliation__FP9lua_State
 * Address: 0x080bd538
 * Size: 245 instructions */
void GetAffiliation(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAffiliation__FP9lua_State
 * Address: 0x080bd834
 * Size: 129 instructions */
void SetAffiliation(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetAffiliation_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAffiliation_F__FUlUlUcUlP9lua_State
 * Address: 0x080bd9b8
 * Size: 1092 instructions */
void SetAffiliation_F(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - Lock() */
    /* - Unlock() */
    /* - FindObject() */
    /* - SendWorldController() */
    /* - SendToAllFunc() */
    /* - SendWorld() */
    /* - Purge() */
    /* - NumFree() */
    /* - SetStatus() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllyList__FP9lua_State
 * Address: 0x080be734
 * Size: 259 instructions */
void GetAllyList(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: QuitClan__FP9lua_State
 * Address: 0x080bea48
 * Size: 8 instructions */
void QuitClan(void) {
    /* TODO: Implement from disassembly */
}

/* Function: QuitClan_F__FUliP9lua_State
 * Address: 0x080bea58
 * Size: 29 instructions */
void QuitClan_F(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPKPoints__FP9lua_State
 * Address: 0x080beaa4
 * Size: 177 instructions */
void SetPKPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPKPoints__FP9lua_State
 * Address: 0x080becd8
 * Size: 121 instructions */
void GetPKPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBuffType__FP9lua_State
 * Address: 0x080bee44
 * Size: 124 instructions */
void GetBuffType(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBuffData__FP9lua_State
 * Address: 0x080befc4
 * Size: 256 instructions */
void GetBuffData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: AddGuildBuff__FP9lua_State
 * Address: 0x080bf2d4
 * Size: 234 instructions */
void AddGuildBuff(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveGuildBuff__FP9lua_State
 * Address: 0x080bf5c8
 * Size: 357 instructions */
void RemoveGuildBuff(void) {
    /* Stack: 104 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGuildBuff__FP9lua_State
 * Address: 0x080bfa64
 * Size: 141 instructions */
void GetGuildBuff(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: AddClanBuff__FP9lua_State
 * Address: 0x080bfc1c
 * Size: 234 instructions */
void AddClanBuff(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveClanBuff__FP9lua_State
 * Address: 0x080bff08
 * Size: 366 instructions */
void RemoveClanBuff(void) {
    /* Stack: 104 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanBuff__FP9lua_State
 * Address: 0x080c03c4
 * Size: 141 instructions */
void GetClanBuff(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: ModifyPKWarning__FP9lua_State
 * Address: 0x080c057c
 * Size: 117 instructions */
void ModifyPKWarning(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPKWarning__FP9lua_State
 * Address: 0x080c06e8
 * Size: 75 instructions */
void GetPKWarning(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanGold__FP9lua_State
 * Address: 0x080c07c8
 * Size: 74 instructions */
void GetClanGold(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanGold__FP9lua_State
 * Address: 0x080c08a4
 * Size: 101 instructions */
void SetClanGold(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetWaitPeriod__FP9lua_State
 * Address: 0x080c09d8
 * Size: 145 instructions */
void SetWaitPeriod(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWaitPeriod__FP9lua_State
 * Address: 0x080c0b98
 * Size: 104 instructions */
void GetWaitPeriod(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetExWaitPeriod__FP9lua_State
 * Address: 0x080c0cd4
 * Size: 102 instructions */
void GetExWaitPeriod(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendClanTreasury__FP9lua_State
 * Address: 0x080c0e04
 * Size: 60 instructions */
void SendClanTreasury(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendPrestigeLog__FP9lua_State
 * Address: 0x080c0eb4
 * Size: 171 instructions */
void SendPrestigeLog(void) {
    /* Stack: 416 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: LogPrestige__FP9lua_State
 * Address: 0x080c114c
 * Size: 255 instructions */
void LogPrestige(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - time@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: LogClanActivity__FP9lua_State
 * Address: 0x080c14a8
 * Size: 290 instructions */
void LogClanActivity(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - time@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendClanActivityLog__FP9lua_State
 * Address: 0x080c1868
 * Size: 190 instructions */
void SendClanActivityLog(void) {
    /* Stack: 432 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveFromGuildList__FP9lua_State
 * Address: 0x080c1b4c
 * Size: 123 instructions */
void RemoveFromGuildList(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080c1d16
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetAllStances__FP9lua_State
 * Address: 0x080c1d20
 * Size: 138 instructions */
void GetAllStances(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: AddStance__FP9lua_State
 * Address: 0x080c1ed4
 * Size: 316 instructions */
void AddStance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveStance__FP9lua_State
 * Address: 0x080c22e0
 * Size: 128 instructions */
void RemoveStance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetStanceAdvantage__FP9lua_State
 * Address: 0x080c2474
 * Size: 124 instructions */
void GetStanceAdvantage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentStance__FP9lua_State
 * Address: 0x080c25f8
 * Size: 103 instructions */
void GetCurrentStance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: SetCurrentStance__FP9lua_State
 * Address: 0x080c2738
 * Size: 245 instructions */
void SetCurrentStance(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_type() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetStanceRank__FP9lua_State
 * Address: 0x080c2a48
 * Size: 117 instructions */
void GetStanceRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetStanceRank__FP9lua_State
 * Address: 0x080c2bb8
 * Size: 287 instructions */
void SetStanceRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: AddStanceRank__FP9lua_State
 * Address: 0x080c2f6c
 * Size: 288 instructions */
void AddStanceRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetStancePoints__FP9lua_State
 * Address: 0x080c330c
 * Size: 72 instructions */
void GetStancePoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetStancePoints__FP9lua_State
 * Address: 0x080c33e4
 * Size: 111 instructions */
void SetStancePoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllPowers__FP9lua_State
 * Address: 0x080c3544
 * Size: 136 instructions */
void GetAllPowers(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: AddPower__FP9lua_State
 * Address: 0x080c36e8
 * Size: 316 instructions */
void AddPower(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: RemovePower__FP9lua_State
 * Address: 0x080c3ad4
 * Size: 136 instructions */
void RemovePower(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Flush() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowerPoints__FP9lua_State
 * Address: 0x080c3c84
 * Size: 72 instructions */
void GetPowerPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPowerPoints__FP9lua_State
 * Address: 0x080c3d64
 * Size: 118 instructions */
void SetPowerPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPowerRank__FP9lua_State
 * Address: 0x080c3ed4
 * Size: 272 instructions */
void SetPowerRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: AddPowerRank__FP9lua_State
 * Address: 0x080c4238
 * Size: 271 instructions */
void AddPowerRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowerRank__FP9lua_State
 * Address: 0x080c458c
 * Size: 191 instructions */
void GetPowerRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - AIGetByCharID() */
    /* - GetPowerRank() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowerData__FP9lua_State
 * Address: 0x080c47dc
 * Size: 1135 instructions */
void GetPowerData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: FindEffects__FP9lua_State
 * Address: 0x080c5598
 * Size: 1088 instructions */
void FindEffects(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_settop() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEffectData__FP9lua_State
 * Address: 0x080c6308
 * Size: 2755 instructions */
void GetEffectData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEffects__FP9lua_State
 * Address: 0x080c83e4
 * Size: 788 instructions */
void GetEffects(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - time@plt() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - difftime@plt() */
    /* - lua_settop() */
    /* - lua_pushstring() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: AddEffect__FP9lua_State
 * Address: 0x080c8d88
 * Size: 116 instructions */
void AddEffect(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AddEffect_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddEffect_F__FUlUsUcUsP9lua_State
 * Address: 0x080c8ed8
 * Size: 1845 instructions */
void AddEffect_F(void) {
    /* Stack: 284 bytes */
    /* Calls: */
    /* - Lock() */
    /* - time@plt() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: SendEffectIcon__FP9lua_State
 * Address: 0x080ca7ec
 * Size: 77 instructions */
void SendEffectIcon(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveEffect__FP9lua_State
 * Address: 0x080ca8d4
 * Size: 852 instructions */
void RemoveEffect(void) {
    /* Stack: 156 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: ApplyEffect__FP9lua_State
 * Address: 0x080cb3fc
 * Size: 98 instructions */
void ApplyEffect(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - ApplyEffect_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ApplyEffect_F__FUlUlUcP9lua_State
 * Address: 0x080cb514
 * Size: 2402 instructions */
void ApplyEffect_F(void) {
    /* Stack: 476 bytes */
    /* Calls: */
    /* - Lock() */
    /* - PutEvent() */
    /* - memcpy@plt() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - CalculateMaximumHitPoints() */
    /* - CalculateMaximumChiPoints() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetActiveWeapon__FP9lua_State
 * Address: 0x080cda5c
 * Size: 150 instructions */
void GetActiveWeapon(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetActiveWeapon__FP9lua_State
 * Address: 0x080cdc24
 * Size: 15 instructions */
void SetActiveWeapon(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAttackMode__FP9lua_State
 * Address: 0x080cdc48
 * Size: 78 instructions */
void GetAttackMode(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAttackMode__FP9lua_State
 * Address: 0x080cdd34
 * Size: 113 instructions */
void SetAttackMode(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SendCombatFeedback__FP9lua_State
 * Address: 0x080cde94
 * Size: 137 instructions */
void SendCombatFeedback(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_type() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - SendCombatFeedback_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendCombatFeedback_F__FUlUllUcUcP9lua_State
 * Address: 0x080ce024
 * Size: 228 instructions */
void SendCombatFeedback_F(void) {
    /* Stack: 116 bytes */
    /* Calls: */
    /* - () */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - Lock() */
    /* - _._t13GEN_CLinkList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - CalculateMaximumHitPoints() */
    /* - PutEvent() */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMoveData__FP9lua_State
 * Address: 0x080ce2dc
 * Size: 133 instructions */
void GetMoveData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetStanceData__FP9lua_State
 * Address: 0x080ce474
 * Size: 289 instructions */
void GetStanceData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAttackModeAttackModifier__FP9lua_State
 * Address: 0x080ce7f8
 * Size: 97 instructions */
void GetAttackModeAttackModifier(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAttackModeBlockChance__FP9lua_State
 * Address: 0x080ce924
 * Size: 97 instructions */
void GetAttackModeBlockChance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAttackModeDefenseModifier__FP9lua_State
 * Address: 0x080cea54
 * Size: 97 instructions */
void GetAttackModeDefenseModifier(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAttackModeDamageModifier__FP9lua_State
 * Address: 0x080ceb84
 * Size: 97 instructions */
void GetAttackModeDamageModifier(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentWeaponSpeed__FP9lua_State
 * Address: 0x080cecb4
 * Size: 329 instructions */
void GetCurrentWeaponSpeed(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetDuelStats__FP9lua_State
 * Address: 0x080cf0dc
 * Size: 179 instructions */
void GetDuelStats(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetDuelStats__FP9lua_State
 * Address: 0x080cf304
 * Size: 340 instructions */
void SetDuelStats(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLastDuelID__FP9lua_State
 * Address: 0x080cf738
 * Size: 74 instructions */
void GetLastDuelID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetLastDuelID__FP9lua_State
 * Address: 0x080cf814
 * Size: 92 instructions */
void SetLastDuelID(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: StartWager__FP9lua_State
 * Address: 0x080cf92c
 * Size: 86 instructions */
void StartWager(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: EndWager__FP9lua_State
 * Address: 0x080cfa2c
 * Size: 86 instructions */
void EndWager(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPowerCoolDown__FP9lua_State
 * Address: 0x080cfb2c
 * Size: 128 instructions */
void SetPowerCoolDown(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - GetTickCount() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCumulativeEffects__FP9lua_State
 * Address: 0x080cfcb4
 * Size: 5918 instructions */
void GetCumulativeEffects(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - IDXTRANS() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: AddToChainPower__FP9lua_State
 * Address: 0x080d4d38
 * Size: 365 instructions */
void AddToChainPower(void) {
    /* Stack: 212 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveFromChainPower__FP9lua_State
 * Address: 0x080d52f8
 * Size: 222 instructions */
void RemoveFromChainPower(void) {
    /* Stack: 180 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetChainPowers__FP9lua_State
 * Address: 0x080d5658
 * Size: 166 instructions */
void GetChainPowers(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNumChainPowers__FP9lua_State
 * Address: 0x080d5868
 * Size: 73 instructions */
void GetNumChainPowers(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNumChainPowers__FP9lua_State
 * Address: 0x080d5944
 * Size: 88 instructions */
void SetNumChainPowers(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetReadyWeapon__FP9lua_State
 * Address: 0x080d5a58
 * Size: 111 instructions */
void SetReadyWeapon(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - SendToAllFunc() */
    /* TODO: Implement from disassembly */
}

/* Function: GetReadyWeapon__FP9lua_State
 * Address: 0x080d5bb0
 * Size: 71 instructions */
void GetReadyWeapon(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateConstDamage__FP9lua_State
 * Address: 0x080d5c88
 * Size: 592 instructions */
void CalculateConstDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - ceil@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendPowerCooldown__FP9lua_State
 * Address: 0x080d64a8
 * Size: 92 instructions */
void SendPowerCooldown(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendChainPowerCooldown__FP9lua_State
 * Address: 0x080d65c4
 * Size: 92 instructions */
void SendChainPowerCooldown(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080d672e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._t13GEN_CLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x080d6730
 * Size: 27 instructions */
void _._t13GEN_CLinkList1ZQ29VKY_SCENE13tObjectHandle(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t13GEN_CLinkList1ZQ29VKY_SCENE13tObjectHandlei
 * Address: 0x080d6770
 * Size: 26 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t13GEN_CLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x080d67b0
 * Size: 48 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Reset() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Reset__t13GEN_CLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x080d6840
 * Size: 12 instructions */
void Reset(void) {
    /* TODO: Implement from disassembly */
}

/* Function: DoEffect__FP9lua_State
 * Address: 0x080d6860
 * Size: 6780 instructions */
void DoEffect(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_tonumber() */
    /* - lua_settop() */
    /* - Lock() */
    /* - memset@plt() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* - SendFeedbackMsg_F() */
    /* - CheckIfCanPK_F() */
    /* - CheckPKPenalty_F() */
    /* - ExecuteScript_F() */
    /* - TargetAttackable_F() */
    /* - IsInWarScene_F() */
    /* - CheckCanAttackWarNPC_F() */
    /* - IsFriendly_F() */
    /* - AISetCurrentMissPoints() */
    /* - CheckRemoveFromClan_F() */
    /* - RemoveFromClan_F() */
    /* - ChangeClanRating_F() */
    /* - SendGenMessage_F() */
    /* - ApplyEffect_F() */
    /* - CheckWeight_F() */
    /* - PlayEffect_F() */
    /* - AIGetByCharID() */
    /* - CheckStun2_F() */
    /* - CheckSlow2_F() */
    /* - CheckEntangle2_F() */
    /* - CheckConfusion_F() */
    /* - CheckBlind_F() */
    /* - AddEffect_F() */
    /* - GetAllCurrentResistances_F() */
    /* - CheckGuard_F() */
    /* - RollDice_F() */
    /* - ceil@plt() */
    /* - CalculateCurrentPoisonResistance() */
    /* - CheckPKPointResult_F() */
    /* - CheckInterruptPower_F() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - CheckArmorHit_F() */
    /* - SetPKWarning_F() */
    /* - CheckInterruptSprint_F() */
    /* - AISetCurrentHitPoints() */
    /* - CheckWarRules_F() */
    /* - div@plt() */
    /* - floor@plt() */
    /* - SetXP_F() */
    /* - GetDamageType_F() */
    /* - CheckSplit_F() */
    /* - CheckScatter_F() */
    /* - SendCombatFeedback_F() */
    /* - SetScratchData_F() */
    /* TODO: Implement from disassembly */
}

/* Function: GetDamageType_F__FiiiiP9lua_State
 * Address: 0x080dc6b8
 * Size: 41 instructions */
void GetDamageType_F(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: CheckSplit_F__FUlUliiP9lua_State
 * Address: 0x080dc748
 * Size: 408 instructions */
void CheckSplit_F(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - AIGetByCharID() */
    /* - RollDice_F() */
    /* - IDXTRANS() */
    /* - PlayEffect_F() */
    /* - GetTickCount() */
    /* - AIRemoveEntity() */
    /* - GetSceneID() */
    /* - AISpawnedNPC() */
    /* - AISetCurrentMissPoints() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckScatter_F__FUlUliiP9lua_State
 * Address: 0x080dcc48
 * Size: 406 instructions */
void CheckScatter_F(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - AIGetByCharID() */
    /* - RollDice_F() */
    /* - IDXTRANS() */
    /* - PlayEffect_F() */
    /* - GetTickCount() */
    /* - GetSceneID() */
    /* - AISpawnedNPC() */
    /* - AISetCurrentMissPoints() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckArmorHit_F__FUliP9lua_State
 * Address: 0x080dd140
 * Size: 53 instructions */
void CheckArmorHit_F(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - RollDice_F() */
    /* - CheckDurability_F() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckDurability_F__FUliiP9lua_State
 * Address: 0x080dd1d8
 * Size: 292 instructions */
void CheckDurability_F(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - RollDice_F() */
    /* - Unlock() */
    /* - SendGenMessage_F() */
    /* - SendItemBreakIcon_F() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckStun2_F__FUlUcUlsP9lua_State
 * Address: 0x080dd518
 * Size: 225 instructions */
void CheckStun2_F(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - RollDice_F() */
    /* - CalculateCurrentConstitution() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckSlow2_F__FUlUcUlsP9lua_State
 * Address: 0x080dd7c0
 * Size: 228 instructions */
void CheckSlow2_F(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - RollDice_F() */
    /* - CalculateCurrentAgility() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckEntangle2_F__FUlUcUlsP9lua_State
 * Address: 0x080dda70
 * Size: 228 instructions */
void CheckEntangle2_F(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - RollDice_F() */
    /* - CalculateCurrentStrength() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckConfusion_F__FUlUcUlsP9lua_State
 * Address: 0x080ddd20
 * Size: 228 instructions */
void CheckConfusion_F(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - RollDice_F() */
    /* - CalculateCurrentMind() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckBlind_F__FUlUcUlsP9lua_State
 * Address: 0x080ddfd0
 * Size: 228 instructions */
void CheckBlind_F(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - RollDice_F() */
    /* - CalculateCurrentPerception() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckCanAttackWarNPC_F__FUlUlP9lua_State
 * Address: 0x080de280
 * Size: 222 instructions */
void CheckCanAttackWarNPC_F(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - IsInClanRelicZone_F() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckIfCanPK_F__FUlUlP9lua_State
 * Address: 0x080de548
 * Size: 217 instructions */
void CheckIfCanPK_F(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - IsInWarScene_F() */
    /* - CheckTeam_F() */
    /* - Lock() */
    /* - IsInClanRelicZone_F() */
    /* TODO: Implement from disassembly */
}

/* Function: IsInClanRelicZone_F__FUlP9lua_State
 * Address: 0x080de7e4
 * Size: 91 instructions */
void IsInClanRelicZone_F(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - Lock() */
    /* - IDXTRANS() */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckWarSystem_F__FUlUlP9lua_State
 * Address: 0x080de8f8
 * Size: 127 instructions */
void CheckWarSystem_F(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - IsInWarScene_F() */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPKWarning_F__FUliiP9lua_State
 * Address: 0x080dea6c
 * Size: 180 instructions */
void SetPKWarning_F(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - CheckPKPointResult_F() */
    /* - SetVFXFlag_F() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckInterruptSprint_F__FUliUlP9lua_State
 * Address: 0x080dec88
 * Size: 136 instructions */
void CheckInterruptSprint_F(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Lock() */
    /* - CalculateCurrentMind() */
    /* - Unlock() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckPKPenalty_F__FUlUlP9lua_State
 * Address: 0x080dee18
 * Size: 159 instructions */
void CheckPKPenalty_F(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - CheckTeam_F() */
    /* - CheckWarSystem_F() */
    /* - CheckPKPointResult_F() */
    /* - CheckWarRules_F() */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckPKPointResult_F__FUliP9lua_State
 * Address: 0x080defd4
 * Size: 85 instructions */
void CheckPKPointResult_F(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckWarRules_F__FUliP9lua_State
 * Address: 0x080df0d4
 * Size: 39 instructions */
void CheckWarRules_F(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - IsInWarScene_F() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckRemoveFromClan_F__FUlUlP9lua_State
 * Address: 0x080df134
 * Size: 86 instructions */
void CheckRemoveFromClan_F(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveFromClan_F__FUlP9lua_State
 * Address: 0x080df228
 * Size: 41 instructions */
void RemoveFromClan_F(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* - SetAffiliation_F() */
    /* TODO: Implement from disassembly */
}

/* Function: ChangeClanRating_F__FUlUliP9lua_State
 * Address: 0x080df294
 * Size: 106 instructions */
void ChangeClanRating_F(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - FindObject() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: IsInWarScene_F__FUlP9lua_State
 * Address: 0x080df3c8
 * Size: 95 instructions */
void IsInWarScene_F(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - Lock() */
    /* - IDXTRANS() */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: SendFeedbackMsg_F__FUlUlUsUsP9lua_State
 * Address: 0x080df4d8
 * Size: 62 instructions */
void SendFeedbackMsg_F(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - AIGetByCharID() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckGuard_F__FUlUlP9lua_State
 * Address: 0x080df598
 * Size: 109 instructions */
void CheckGuard_F(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - GetRangeToEntity_F() */
    /* - floor@plt() */
    /* - ceil@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetRangeToEntity_F__FUlUlP9lua_State
 * Address: 0x080df6ec
 * Size: 375 instructions */
void GetRangeToEntity_F(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - IDXTRANS() */
    /* - sqrt@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanWarData_F__FUsUsP9lua_State
 * Address: 0x080dfbec
 * Size: 46 instructions */
void GetClanWarData_F(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckInterruptPower_F__FUliP9lua_State
 * Address: 0x080dfc6c
 * Size: 222 instructions */
void CheckInterruptPower_F(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - CalculateCurrentMind() */
    /* - floor@plt() */
    /* - ceil@plt() */
    /* - RollDice_F() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckTeam_F__FUlUlP9lua_State
 * Address: 0x080dff28
 * Size: 64 instructions */
void CheckTeam_F(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080e003e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetEventStance__FP9lua_State
 * Address: 0x080e0040
 * Size: 79 instructions */
void GetEventStance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventSkill__FP9lua_State
 * Address: 0x080e0138
 * Size: 59 instructions */
void GetEventSkill(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventItem__FP9lua_State
 * Address: 0x080e01e8
 * Size: 440 instructions */
void GetEventItem(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventEntity1__FP9lua_State
 * Address: 0x080e07a8
 * Size: 158 instructions */
void GetEventEntity1(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventEntity2__FP9lua_State
 * Address: 0x080e09f8
 * Size: 807 instructions */
void GetEventEntity2(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - GetCharIDFromHash() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventZones__FP9lua_State
 * Address: 0x080e1568
 * Size: 91 instructions */
void GetEventZones(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_newtable() */
    /* - lua_settable() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventMode__FP9lua_State
 * Address: 0x080e1684
 * Size: 85 instructions */
void GetEventMode(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventLocation1__FP9lua_State
 * Address: 0x080e17a4
 * Size: 187 instructions */
void GetEventLocation1(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventLocation2__FP9lua_State
 * Address: 0x080e1a48
 * Size: 37 instructions */
void GetEventLocation2(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventQuantity__FP9lua_State
 * Address: 0x080e1ab4
 * Size: 136 instructions */
void GetEventQuantity(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventQuantity2__FP9lua_State
 * Address: 0x080e1c88
 * Size: 39 instructions */
void GetEventQuantity2(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventFlag__FP9lua_State
 * Address: 0x080e1cf8
 * Size: 246 instructions */
void GetEventFlag(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventPower__FP9lua_State
 * Address: 0x080e2088
 * Size: 118 instructions */
void GetEventPower(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventLabel__FP9lua_State
 * Address: 0x080e2208
 * Size: 76 instructions */
void GetEventLabel(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventValue__FP9lua_State
 * Address: 0x080e22e8
 * Size: 58 instructions */
void GetEventValue(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventSceneID__FP9lua_State
 * Address: 0x080e2398
 * Size: 39 instructions */
void GetEventSceneID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventItemList__FP9lua_State
 * Address: 0x080e2408
 * Size: 410 instructions */
void GetEventItemList(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventRange__FP9lua_State
 * Address: 0x080e2924
 * Size: 41 instructions */
void GetEventRange(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventTreasure__FP9lua_State
 * Address: 0x080e2998
 * Size: 56 instructions */
void GetEventTreasure(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventAction__FP9lua_State
 * Address: 0x080e2a44
 * Size: 37 instructions */
void GetEventAction(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventType__FP9lua_State
 * Address: 0x080e2ab4
 * Size: 37 instructions */
void GetEventType(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEventSet__FP9lua_State
 * Address: 0x080e2b1c
 * Size: 77 instructions */
void GetEventSet(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGMParams__FP9lua_State
 * Address: 0x080e2c08
 * Size: 1737 instructions */
void GetGMParams(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - sprintf@plt() */
    /* - Log() */
    /* - lua_pushnumber() */
    /* - GetCharIDFromHash() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080e45de
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: RollDice__FP9lua_State
 * Address: 0x080e45e0
 * Size: 89 instructions */
void RollDice(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - RollDice_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RollDice_F__FiiiP9lua_State
 * Address: 0x080e46e8
 * Size: 43 instructions */
void RollDice_F(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - rand@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCharacter__FP9lua_State
 * Address: 0x080e475c
 * Size: 22 instructions */
void GetCharacter(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEntityType__FP9lua_State
 * Address: 0x080e4794
 * Size: 89 instructions */
void GetEntityType(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEntityState__FP9lua_State
 * Address: 0x080e48ac
 * Size: 169 instructions */
void GetEntityState(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: SetEntityState__FP9lua_State
 * Address: 0x080e4acc
 * Size: 564 instructions */
void SetEntityState(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetTickCount() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - SendToAllFunc() */
    /* - Lock() */
    /* - FindObject() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - AISetEntityState() */
    /* TODO: Implement from disassembly */
}

/* Function: GetQuestState__FP9lua_State
 * Address: 0x080e51a4
 * Size: 113 instructions */
void GetQuestState(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetQuestState__FP9lua_State
 * Address: 0x080e5308
 * Size: 128 instructions */
void SetQuestState(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetTarget__FP9lua_State
 * Address: 0x080e5498
 * Size: 164 instructions */
void SetTarget(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - lua_type() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTarget__FP9lua_State
 * Address: 0x080e5694
 * Size: 85 instructions */
void GetTarget(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetRangeToEntity__FP9lua_State
 * Address: 0x080e5794
 * Size: 1005 instructions */
void GetRangeToEntity(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - IDXTRANS() */
    /* - Unlock() */
    /* - Lock() */
    /* - FindObject() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - sqrt@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAnimation__FP9lua_State
 * Address: 0x080e64e0
 * Size: 199 instructions */
void SetAnimation(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - GetTickCount() */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveEntity__FP9lua_State
 * Address: 0x080e674c
 * Size: 102 instructions */
void RemoveEntity(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetTickCount() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* - AIRemoveEntity() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPlayerScratchData__FP9lua_State
 * Address: 0x080e6884
 * Size: 107 instructions */
void SetPlayerScratchData(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetScratchData_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPlayerScratchData__FP9lua_State
 * Address: 0x080e69c4
 * Size: 150 instructions */
void GetPlayerScratchData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTickcount__FP9lua_State
 * Address: 0x080e6ba8
 * Size: 23 instructions */
void GetTickcount(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEntityPosition__FP9lua_State
 * Address: 0x080e6be4
 * Size: 308 instructions */
void GetEntityPosition(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - () */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: PlayEffect__FP9lua_State
 * Address: 0x080e6fb0
 * Size: 164 instructions */
void PlayEffect(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - lua_type() */
    /* - PlayEffect_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: PlayEffect_F__FUlUlfffiP9lua_State
 * Address: 0x080e7194
 * Size: 93 instructions */
void PlayEffect_F(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - SendToAllU_F() */
    /* - SendToAllFunc() */
    /* TODO: Implement from disassembly */
}

/* Function: GetModelID__FP9lua_State
 * Address: 0x080e72a4
 * Size: 74 instructions */
void GetModelID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetModelID__FP9lua_State
 * Address: 0x080e7384
 * Size: 111 instructions */
void SetModelID(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: RandomizeModel__FP9lua_State
 * Address: 0x080e74d8
 * Size: 320 instructions */
void RandomizeModel(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - rand@plt() */
    /* - Unlock() */
    /* - Flush() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMessage__FP9lua_State
 * Address: 0x080e7888
 * Size: 124 instructions */
void SendMessage(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMultiStrings__FP9lua_State
 * Address: 0x080e7a04
 * Size: 667 instructions */
void SendMultiStrings(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - lua_pushnumber() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SendZoneMessage__FP9lua_State
 * Address: 0x080e8408
 * Size: 1222 instructions */
void SendZoneMessage(void) {
    /* Stack: 752 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindScene() */
    /* - Lock() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - PutEvent() */
    /* - GetNext() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGenMessage__FP9lua_State
 * Address: 0x080e98f4
 * Size: 1163 instructions */
void SendGenMessage(void) {
    /* Stack: 736 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendNPCMessageVar__FP9lua_State
 * Address: 0x080ead24
 * Size: 537 instructions */
void SendNPCMessageVar(void) {
    /* Stack: 336 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - sprintf@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendNPCMessage__FP9lua_State
 * Address: 0x080eb510
 * Size: 443 instructions */
void SendNPCMessage(void) {
    /* Stack: 224 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - memset@plt() */
    /* - lua_tonumber() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - sprintf@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetObjectLabel__FP9lua_State
 * Address: 0x080ebb9c
 * Size: 220 instructions */
void GetObjectLabel(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Lock() */
    /* - FindObject() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - FindAliasToScript() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCharacterFacing__FP9lua_State
 * Address: 0x080ebe54
 * Size: 149 instructions */
void GetCharacterFacing(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEntitiesAtCoord__FP9lua_State
 * Address: 0x080ec038
 * Size: 345 instructions */
void GetEntitiesAtCoord(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindScene() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - Unlock() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEntitiesInArea__FP9lua_State
 * Address: 0x080ec52c
 * Size: 1176 instructions */
void GetEntitiesInArea(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - Unlock() */
    /* - lua_pushstring() */
    /* - IDXTRANS() */
    /* - FindObject() */
    /* TODO: Implement from disassembly */
}

/* Function: GetEntitiesInCone__FP9lua_State
 * Address: 0x080ed62c
 * Size: 1183 instructions */
void GetEntitiesInCone(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - cos@plt() */
    /* - Lock() */
    /* - Unlock() */
    /* - GetTranslation() */
    /* - () */
    /* - Normalize() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - () */
    /* - VDot() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - Unlock() */
    /* - lua_pushstring() */
    /* - IDXTRANS() */
    /* - Set() */
    /* - SetRotate() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetPlayersInScene__FP9lua_State
 * Address: 0x080ee7ac
 * Size: 165 instructions */
void GetPlayersInScene(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindScene() */
    /* - lua_newtable() */
    /* - Lock() */
    /* - GetPCObject() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - GetNext() */
    /* - Unlock() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckFacingToTarget__FP9lua_State
 * Address: 0x080ee994
 * Size: 551 instructions */
void CheckFacingToTarget(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - Lock() */
    /* - GetTranslation() */
    /* - () */
    /* - Normalize() */
    /* - () */
    /* - IDXTRANS() */
    /* - Set() */
    /* - SetRotate() */
    /* - () */
    /* - Unlock() */
    /* - () */
    /* - () */
    /* - cos@plt() */
    /* - VDot() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateWeather__FP9lua_State
 * Address: 0x080ef08c
 * Size: 10 instructions */
void ActivateWeather(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SaveCharacter__FP9lua_State
 * Address: 0x080ef0a4
 * Size: 329 instructions */
void SaveCharacter(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Flush() */
    /* - UpdateCharacter() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ExecuteScript__FP9lua_State
 * Address: 0x080ef4b4
 * Size: 109 instructions */
void ExecuteScript(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - ExecuteScript_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ExecuteScript_F__FUlUlUliP9lua_State
 * Address: 0x080ef5f4
 * Size: 66 instructions */
void ExecuteScript_F(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - ExecuteTask() */
    /* TODO: Implement from disassembly */
}

/* Function: GetScriptParams__FP9lua_State
 * Address: 0x080ef6d4
 * Size: 60 instructions */
void GetScriptParams(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetZoneKillFlag__FP9lua_State
 * Address: 0x080ef788
 * Size: 74 instructions */
void GetZoneKillFlag(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetZoneKillFlag__FP9lua_State
 * Address: 0x080ef868
 * Size: 92 instructions */
void SetZoneKillFlag(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSceneZoneFlag__FP9lua_State
 * Address: 0x080ef984
 * Size: 99 instructions */
void GetSceneZoneFlag(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetVisualFlag__FP9lua_State
 * Address: 0x080efabc
 * Size: 149 instructions */
void SetVisualFlag(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetVFXFlag__FP9lua_State
 * Address: 0x080efc84
 * Size: 86 instructions */
void SetVFXFlag(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetVFXFlag_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetVFXFlag_F__FUliiP9lua_State
 * Address: 0x080efd84
 * Size: 224 instructions */
void SetVFXFlag_F(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - AddRelic() */
    /* - RemoveRelic() */
    /* - SendToAllFunc() */
    /* TODO: Implement from disassembly */
}

/* Function: GetVFXFlag__FP9lua_State
 * Address: 0x080f003c
 * Size: 231 instructions */
void GetVFXFlag(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLoginInterval__FP9lua_State
 * Address: 0x080f02f4
 * Size: 91 instructions */
void GetLoginInterval(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - difftime@plt() */
    /* - ceil@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTimer__FP9lua_State
 * Address: 0x080f0408
 * Size: 122 instructions */
void GetTimer(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: SetCurrentMovementSpeed__FP9lua_State
 * Address: 0x080f0588
 * Size: 72 instructions */
void SetCurrentMovementSpeed(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetCurrentMovementSpeed_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGenericHint__FP9lua_State
 * Address: 0x080f0658
 * Size: 293 instructions */
void SendGenericHint(void) {
    /* Stack: 228 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - rand@plt() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIsChar__FP9lua_State
 * Address: 0x080f0ae0
 * Size: 57 instructions */
void GetIsChar(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGenBuffer__FP9lua_State
 * Address: 0x080f0b84
 * Size: 240 instructions */
void SendGenBuffer(void) {
    /* Stack: 136 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendSysMessage__FP9lua_State
 * Address: 0x080f0e74
 * Size: 424 instructions */
void SendSysMessage(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: BroadcastMessage__FP9lua_State
 * Address: 0x080f13f8
 * Size: 122 instructions */
void BroadcastMessage(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLastKillerID__FP9lua_State
 * Address: 0x080f156c
 * Size: 74 instructions */
void GetLastKillerID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetLastKillerID__FP9lua_State
 * Address: 0x080f1648
 * Size: 95 instructions */
void SetLastKillerID(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetLastResTime__FP9lua_State
 * Address: 0x080f1768
 * Size: 18 instructions */
void SetLastResTime(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLastResTime__FP9lua_State
 * Address: 0x080f1794
 * Size: 8 instructions */
void GetLastResTime(void) {
    /* TODO: Implement from disassembly */
}

/* Function: VerifyCharExists__FP9lua_State
 * Address: 0x080f17a4
 * Size: 63 instructions */
void VerifyCharExists(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckCharExists() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckCharOnline__FP9lua_State
 * Address: 0x080f1854
 * Size: 63 instructions */
void CheckCharOnline(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckCharInGame() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendUICommand__FP9lua_State
 * Address: 0x080f1904
 * Size: 165 instructions */
void SendUICommand(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckOptions__FP9lua_State
 * Address: 0x080f1b08
 * Size: 202 instructions */
void CheckOptions(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetGMOptions__FP9lua_State
 * Address: 0x080f1d68
 * Size: 318 instructions */
void SetGMOptions(void) {
    /* Stack: 104 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - SendWorld() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGMOptions__FP9lua_State
 * Address: 0x080f2164
 * Size: 158 instructions */
void GetGMOptions(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGMAccess__FP9lua_State
 * Address: 0x080f2344
 * Size: 127 instructions */
void GetGMAccess(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetServerScratchData__FP9lua_State
 * Address: 0x080f24c4
 * Size: 126 instructions */
void SetServerScratchData(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetServerScratchData__FP9lua_State
 * Address: 0x080f264c
 * Size: 101 instructions */
void GetServerScratchData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: BootPlayer__FP9lua_State
 * Address: 0x080f2784
 * Size: 109 instructions */
void BootPlayer(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - LockOutChar() */
    /* - FindObject() */
    /* - DropConnection() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsSceneOnServer__FP9lua_State
 * Address: 0x080f28c4
 * Size: 81 instructions */
void IsSceneOnServer(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetNextScene() */
    /* - GetSceneID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ShowTutorialTrade__FP9lua_State
 * Address: 0x080f29b8
 * Size: 77 instructions */
void ShowTutorialTrade(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddTutorialItem__FP9lua_State
 * Address: 0x080f2a9c
 * Size: 109 instructions */
void AddTutorialItem(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetTutorialGold__FP9lua_State
 * Address: 0x080f2be4
 * Size: 94 instructions */
void SetTutorialGold(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetTutorialCheck__FP9lua_State
 * Address: 0x080f2d04
 * Size: 92 instructions */
void SetTutorialCheck(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ForceMove__FP9lua_State
 * Address: 0x080f2e1c
 * Size: 157 instructions */
void ForceMove(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - GetTickCount() */
    /* - PutEvent() */
    /* - Lock() */
    /* - MoveObject() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SeedRandomizer__FP9lua_State
 * Address: 0x080f2fec
 * Size: 56 instructions */
void SeedRandomizer(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - GetTickCount() */
    /* - srand@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendCameraCommand__FP9lua_State
 * Address: 0x080f308c
 * Size: 84 instructions */
void SendCameraCommand(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendFakeMerchantList__FP9lua_State
 * Address: 0x080f3184
 * Size: 148 instructions */
void SendFakeMerchantList(void) {
    /* Stack: 96 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGMTagFlag__FP9lua_State
 * Address: 0x080f334c
 * Size: 93 instructions */
void SendGMTagFlag(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGameEvent__FP9lua_State
 * Address: 0x080f3468
 * Size: 489 instructions */
void GetGameEvent(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetGameEvent__FP9lua_State
 * Address: 0x080f3a24
 * Size: 780 instructions */
void SetGameEvent(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushstring() */
    /* - lua_type() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGameEventStatus__FP9lua_State
 * Address: 0x080f433c
 * Size: 70 instructions */
void GetGameEventStatus(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckCanTarget__FP9lua_State
 * Address: 0x080f440c
 * Size: 263 instructions */
void CheckCanTarget(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* - CheckTargetable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSObjModelID__FP9lua_State
 * Address: 0x080f4758
 * Size: 224 instructions */
void SetSObjModelID(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* - GetTickCount() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* - Flush() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSObjData__FP9lua_State
 * Address: 0x080f4a08
 * Size: 487 instructions */
void SetSObjData(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - lua_pushstring() */
    /* - lua_type() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - Unlock() */
    /* - Flush() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSObjData__FP9lua_State
 * Address: 0x080f4fc8
 * Size: 384 instructions */
void GetSObjData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetGameStats__FP9lua_State
 * Address: 0x080f5464
 * Size: 185 instructions */
void SetGameStats(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GameTime__FP9lua_State
 * Address: 0x080f56ac
 * Size: 74 instructions */
void GameTime(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - gametime() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendConstEffects__FP9lua_State
 * Address: 0x080f5784
 * Size: 79 instructions */
void SendConstEffects(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendToAllU_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAnimationQueue__FP9lua_State
 * Address: 0x080f5874
 * Size: 201 instructions */
void SetAnimationQueue(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - IDXTRANS() */
    /* - lua_type() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: MuteChar__FP9lua_State
 * Address: 0x080f5ae8
 * Size: 175 instructions */
void MuteChar(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - time@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsValidChar__FP9lua_State
 * Address: 0x080f5d18
 * Size: 68 instructions */
void IsValidChar(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: LuaAssert__FP9lua_State
 * Address: 0x080f5de4
 * Size: 51 instructions */
void LuaAssert(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - () */
    /* - lua_type() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGenMessage_F__FUlUsUciPUlP9lua_State
 * Address: 0x080f5e84
 * Size: 489 instructions */
void SendGenMessage_F(void) {
    /* Stack: 724 bytes */
    /* Calls: */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SetCurrentMovementSpeed_F__FUlUcP9lua_State
 * Address: 0x080f6638
 * Size: 34 instructions */
void SetCurrentMovementSpeed_F(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetScratchData_F__FUliiP9lua_State
 * Address: 0x080f6698
 * Size: 82 instructions */
void SetScratchData_F(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: AddCharToGMHelp__FP9lua_State
 * Address: 0x080f6798
 * Size: 298 instructions */
void AddCharToGMHelp(void) {
    /* Stack: 132 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveCharFromGMHelp__FP9lua_State
 * Address: 0x080f6b40
 * Size: 138 instructions */
void RemoveCharFromGMHelp(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckEntityInBox__FP9lua_State
 * Address: 0x080f6ce4
 * Size: 125 instructions */
void CheckEntityInBox(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetHeroTimer__FP9lua_State
 * Address: 0x080f6e58
 * Size: 83 instructions */
void ResetHeroTimer(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetHeroCounter__FP9lua_State
 * Address: 0x080f6f54
 * Size: 101 instructions */
void GetHeroCounter(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetHeroCounter__FP9lua_State
 * Address: 0x080f7084
 * Size: 91 instructions */
void SetHeroCounter(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080f71f2
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: CreateGuild__FP9lua_State
 * Address: 0x080f7200
 * Size: 145 instructions */
void CreateGuild(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* - Count() */
    /* - GenerateUniqueID() */
    /* - CreateElements() */
    /* - wstrncpy() */
    /* - crc32_calc() */
    /* - Unlock() */
    /* - Flush() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteGuild__FP9lua_State
 * Address: 0x080f73c4
 * Size: 299 instructions */
void DeleteGuild(void) {
    /* Stack: 120 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - Flush() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ModifyGuildData__FP9lua_State
 * Address: 0x080f7774
 * Size: 208 instructions */
void ModifyGuildData(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_settop() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGuildData__FP9lua_State
 * Address: 0x080f79e8
 * Size: 165 instructions */
void GetGuildData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGuildList__FP9lua_State
 * Address: 0x080f7bd8
 * Size: 205 instructions */
void GetGuildList(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGuildReply__FP9lua_State
 * Address: 0x080f7e4c
 * Size: 120 instructions */
void SendGuildReply(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckGuildName__FP9lua_State
 * Address: 0x080f7fbc
 * Size: 76 instructions */
void CheckGuildName(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* - crc32_calc() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGuildCreate__FP9lua_State
 * Address: 0x080f80a4
 * Size: 59 instructions */
void SendGuildCreate(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetFreeGuilds__FP9lua_State
 * Address: 0x080f8154
 * Size: 79 instructions */
void GetFreeGuilds(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAlly__FP9lua_State
 * Address: 0x080f8244
 * Size: 402 instructions */
void SetAlly(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Flush() */
    /* - SendWorld() */
    /* - SetClanToGuild_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanToGuild_F__FUlUlP9lua_State
 * Address: 0x080f872c
 * Size: 143 instructions */
void SetClanToGuild_F(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendWorld() */
    /* - SendWorldController() */
    /* TODO: Implement from disassembly */
}

/* Function: InviteIntoGuild__FP9lua_State
 * Address: 0x080f88dc
 * Size: 129 instructions */
void InviteIntoGuild(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_pushnil() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080f8ab6
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetTeamID__FP9lua_State
 * Address: 0x080f8ac0
 * Size: 97 instructions */
void SetTeamID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTeamID__FP9lua_State
 * Address: 0x080f8be8
 * Size: 73 instructions */
void GetTeamID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: StartIGREvent__FP9lua_State
 * Address: 0x080f8cc4
 * Size: 256 instructions */
void StartIGREvent(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - memset@plt() */
    /* - lua_pushnumber() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_settop() */
    /* - Unlock() */
    /* - Flush() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: StopIGREvent__FP9lua_State
 * Address: 0x080f8ff8
 * Size: 283 instructions */
void StopIGREvent(void) {
    /* Stack: 100 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - CreateElements() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIGRTime__FP9lua_State
 * Address: 0x080f9378
 * Size: 81 instructions */
void GetIGRTime(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRGenData__FP9lua_State
 * Address: 0x080f9468
 * Size: 101 instructions */
void SetIGRGenData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRType__FP9lua_State
 * Address: 0x080f9598
 * Size: 91 instructions */
void SetIGRType(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRTeams__FP9lua_State
 * Address: 0x080f96ac
 * Size: 323 instructions */
void SetIGRTeams(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - Flush() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRDuration__FP9lua_State
 * Address: 0x080f9a98
 * Size: 95 instructions */
void SetIGRDuration(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRStatus__FP9lua_State
 * Address: 0x080f9bb8
 * Size: 115 instructions */
void SetIGRStatus(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Flush() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRResult__FP9lua_State
 * Address: 0x080f9d14
 * Size: 105 instructions */
void SetIGRResult(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - printf@plt() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRFlags__FP9lua_State
 * Address: 0x080f9e58
 * Size: 252 instructions */
void SetIGRFlags(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIGRFlags__FP9lua_State
 * Address: 0x080fa184
 * Size: 217 instructions */
void GetIGRFlags(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRScore__FP9lua_State
 * Address: 0x080fa444
 * Size: 252 instructions */
void SetIGRScore(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIGRScore__FP9lua_State
 * Address: 0x080fa774
 * Size: 217 instructions */
void GetIGRScore(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIGRData__FP9lua_State
 * Address: 0x080faa34
 * Size: 267 instructions */
void GetIGRData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIGRTeamData__FP9lua_State
 * Address: 0x080fad68
 * Size: 230 instructions */
void GetIGRTeamData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIGRScratch__FP9lua_State
 * Address: 0x080fb034
 * Size: 111 instructions */
void GetIGRScratch(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIGRScratch__FP9lua_State
 * Address: 0x080fb188
 * Size: 125 instructions */
void SetIGRScratch(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendTeamChallenge__FP9lua_State
 * Address: 0x080fb30c
 * Size: 108 instructions */
void SendTeamChallenge(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x080fb4a6
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetGold__FP9lua_State
 * Address: 0x080fb4b0
 * Size: 85 instructions */
void GetGold(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetGold__FP9lua_State
 * Address: 0x080fb5b4
 * Size: 129 instructions */
void SetGold(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetStashGold__FP9lua_State
 * Address: 0x080fb754
 * Size: 74 instructions */
void GetStashGold(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetStashGold__FP9lua_State
 * Address: 0x080fb834
 * Size: 137 instructions */
void SetStashGold(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: AddItem__FP9lua_State
 * Address: 0x080fb9e4
 * Size: 720 instructions */
void AddItem(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - SendGenMessage_F() */
    /* - SendCharLog_F() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - PutEvent() */
    /* - SendToAllFunc() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveItem__FP9lua_State
 * Address: 0x080fc358
 * Size: 646 instructions */
void RemoveItem(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - printf@plt() */
    /* - ReturnRelic() */
    /* - time@plt() */
    /* - RefreshVisualFlag() */
    /* TODO: Implement from disassembly */
}

/* Function: DestroyItem__FP9lua_State
 * Address: 0x080fcb28
 * Size: 310 instructions */
void DestroyItem(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - Unlock() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetRentalInfo__FP9lua_State
 * Address: 0x080fcee4
 * Size: 462 instructions */
void GetRentalInfo(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - memset@plt() */
    /* - lua_tonumber() */
    /* - Purge() */
    /* - printf@plt() */
    /* - Lock() */
    /* - time@plt() */
    /* - lua_newtable() */
    /* - localtime@plt() */
    /* - difftime@plt() */
    /* - SendCharLog_F() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - Unlock() */
    /* - Flush() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllItems__FP9lua_State
 * Address: 0x080fd4cc
 * Size: 142 instructions */
void GetAllItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllCarriedItems__FP9lua_State
 * Address: 0x080fd67c
 * Size: 161 instructions */
void GetAllCarriedItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllStashedItems__FP9lua_State
 * Address: 0x080fd868
 * Size: 163 instructions */
void GetAllStashedItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBodyItems__FP9lua_State
 * Address: 0x080fda58
 * Size: 163 instructions */
void GetBodyItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIdentified__FP9lua_State
 * Address: 0x080fdc48
 * Size: 145 instructions */
void GetIdentified(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetInventoryItems__FP9lua_State
 * Address: 0x080fde04
 * Size: 163 instructions */
void GetInventoryItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSidePocket__FP9lua_State
 * Address: 0x080fdff8
 * Size: 165 instructions */
void GetSidePocket(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetItemCount__FP9lua_State
 * Address: 0x080fe1f4
 * Size: 150 instructions */
void GetItemCount(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetItemData__FP9lua_State
 * Address: 0x080fe3c4
 * Size: 1054 instructions */
void GetItemData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetItemInSlot__FP9lua_State
 * Address: 0x080ff078
 * Size: 187 instructions */
void GetItemInSlot(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetQuickItems__FP9lua_State
 * Address: 0x080ff2b8
 * Size: 145 instructions */
void GetQuickItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWeaponItems__FP9lua_State
 * Address: 0x080ff474
 * Size: 13 instructions */
void GetWeaponItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: SetIdentified__FP9lua_State
 * Address: 0x080ff494
 * Size: 276 instructions */
void SetIdentified(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_type() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveSlot__FP9lua_State
 * Address: 0x080ff7f4
 * Size: 1314 instructions */
void MoveSlot(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - DoSetEffects_F() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: FindUniqueItem__FP9lua_State
 * Address: 0x0810093c
 * Size: 139 instructions */
void FindUniqueItem(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetUniqueItemSet__FP9lua_State
 * Address: 0x08100ae8
 * Size: 351 instructions */
void GetUniqueItemSet(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnumber() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_settable() */
    /* - time@plt() */
    /* - difftime@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetUniqueItemData__FP9lua_State
 * Address: 0x08100efc
 * Size: 222 instructions */
void GetUniqueItemData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - time@plt() */
    /* - difftime@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetUniqueItemID__FP9lua_State
 * Address: 0x08101194
 * Size: 291 instructions */
void GetUniqueItemID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnumber() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_settable() */
    /* - time@plt() */
    /* - difftime@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetUniqueRevertToID__FP9lua_State
 * Address: 0x0810152c
 * Size: 93 instructions */
void SetUniqueRevertToID(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetUniqueCharID__FP9lua_State
 * Address: 0x08101648
 * Size: 104 instructions */
void SetUniqueCharID(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - printf@plt() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetUniqueTime__FP9lua_State
 * Address: 0x08101788
 * Size: 95 instructions */
void ResetUniqueTime(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentWeight__FP9lua_State
 * Address: 0x081018a4
 * Size: 62 instructions */
void GetCurrentWeight(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentWeight_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateWeightAllowance_F__FUlP9lua_State
 * Address: 0x08101954
 * Size: 114 instructions */
void CalculateWeightAllowance_F(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - CalculateCurrentStrength() */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWeightAllowance__FP9lua_State
 * Address: 0x08101abc
 * Size: 63 instructions */
void GetWeightAllowance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateWeightAllowance_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendInventoryItems__FP9lua_State
 * Address: 0x08101b74
 * Size: 876 instructions */
void SendInventoryItems(void) {
    /* Stack: 388 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateWeightAllowance_F() */
    /* - CalculateCurrentWeight_F() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTradingData__FP9lua_State
 * Address: 0x0810276c
 * Size: 1584 instructions */
void GetTradingData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTreasureRarity__FP9lua_State
 * Address: 0x08103a84
 * Size: 140 instructions */
void GetTreasureRarity(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTreasureData__FP9lua_State
 * Address: 0x08103c34
 * Size: 659 instructions */
void GetTreasureData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMerchantInventory__FP9lua_State
 * Address: 0x08104444
 * Size: 753 instructions */
void SendMerchantInventory(void) {
    /* Stack: 732 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - sprintf@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendHeroInventory__FP9lua_State
 * Address: 0x081051e0
 * Size: 291 instructions */
void SendHeroInventory(void) {
    /* Stack: 576 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - sprintf@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTradeGold__FP9lua_State
 * Address: 0x08105630
 * Size: 75 instructions */
void GetTradeGold(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetTradeGold__FP9lua_State
 * Address: 0x08105714
 * Size: 156 instructions */
void SetTradeGold(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTradeAgreement__FP9lua_State
 * Address: 0x081058f8
 * Size: 76 instructions */
void GetTradeAgreement(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetTradeAgreement__FP9lua_State
 * Address: 0x081059e4
 * Size: 123 instructions */
void SetTradeAgreement(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendTradeRequest__FP9lua_State
 * Address: 0x08105b64
 * Size: 78 instructions */
void SendTradeRequest(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendTradeData__FP9lua_State
 * Address: 0x08105c54
 * Size: 417 instructions */
void SendTradeData(void) {
    /* Stack: 260 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: StartTrade__FP9lua_State
 * Address: 0x081061d0
 * Size: 88 instructions */
void StartTrade(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: EndTrade__FP9lua_State
 * Address: 0x081062d4
 * Size: 91 instructions */
void EndTrade(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMerchantStances__FP9lua_State
 * Address: 0x081063e4
 * Size: 329 instructions */
void SendMerchantStances(void) {
    /* Stack: 588 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - sprintf@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMerchantPowers__FP9lua_State
 * Address: 0x08106904
 * Size: 327 instructions */
void SendMerchantPowers(void) {
    /* Stack: 588 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - sprintf@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMerchantSkills__FP9lua_State
 * Address: 0x08106e0c
 * Size: 332 instructions */
void SendMerchantSkills(void) {
    /* Stack: 588 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - sprintf@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearLoot__FP9lua_State
 * Address: 0x08107334
 * Size: 295 instructions */
void ClearLoot(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - ReturnRelic() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendLoot__FP9lua_State
 * Address: 0x081076a8
 * Size: 194 instructions */
void SendLoot(void) {
    /* Stack: 180 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendStash__FP9lua_State
 * Address: 0x0810792c
 * Size: 419 instructions */
void SendStash(void) {
    /* Stack: 196 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearStash__FP9lua_State
 * Address: 0x08107e98
 * Size: 111 instructions */
void ClearStash(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddAttachment__FP9lua_State
 * Address: 0x08107fdc
 * Size: 167 instructions */
void AddAttachment(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveAttachment__FP9lua_State
 * Address: 0x081081e4
 * Size: 152 instructions */
void RemoveAttachment(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GenerateTreasure__FP9lua_State
 * Address: 0x081083c4
 * Size: 124 instructions */
void GenerateTreasure(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - ExecuteTask() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddComponent__FP9lua_State
 * Address: 0x08108544
 * Size: 449 instructions */
void AddComponent(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveComponent__FP9lua_State
 * Address: 0x08108ab8
 * Size: 278 instructions */
void RemoveComponent(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetComponent__FP9lua_State
 * Address: 0x08108e18
 * Size: 300 instructions */
void GetComponent(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLegendaryStatus__FP9lua_State
 * Address: 0x081091a4
 * Size: 74 instructions */
void GetLegendaryStatus(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetLegendaryStatus__FP9lua_State
 * Address: 0x08109284
 * Size: 95 instructions */
void SetLegendaryStatus(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SendEvaluateResponse__FP9lua_State
 * Address: 0x081093a8
 * Size: 570 instructions */
void SendEvaluateResponse(void) {
    /* Stack: 120 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_tonumber() */
    /* - lua_settop() */
    /* - lua_type() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendSidePocket__FP9lua_State
 * Address: 0x08109a68
 * Size: 188 instructions */
void SendSidePocket(void) {
    /* Stack: 100 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendCurrentWeight__FP9lua_State
 * Address: 0x08109ca8
 * Size: 88 instructions */
void SendCurrentWeight(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendCurrentWeight_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetUniqueItemByLabel__FP9lua_State
 * Address: 0x08109da8
 * Size: 26 instructions */
void GetUniqueItemByLabel(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetUniqueItemByNPCAttr__FP9lua_State
 * Address: 0x08109dec
 * Size: 161 instructions */
void GetUniqueItemByNPCAttr(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_settop() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: FindItems__FP9lua_State
 * Address: 0x08109fe8
 * Size: 280 instructions */
void FindItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_settop() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: SendMouseItem__FP9lua_State
 * Address: 0x0810a34c
 * Size: 126 instructions */
void SendMouseItem(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RefreshAuctionList__FP9lua_StateUlUlUl
 * Address: 0x0810a4c4
 * Size: 407 instructions */
void RefreshAuctionList(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - Lock() */
    /* - wstrncpy() */
    /* - floor@plt() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: AddItemToAuction__FP9lua_State
 * Address: 0x0810ab4c
 * Size: 689 instructions */
void AddItemToAuction(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - time@plt() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - SendCharLog_F() */
    /* - RefreshAuctionList() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveCurrentAuctionItems__FP9lua_State
 * Address: 0x0810b514
 * Size: 1579 instructions */
void RemoveCurrentAuctionItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - time@plt() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - difftime@plt() */
    /* - SendCharLog_F() */
    /* - Unlock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: ReturnItemFromOldAuction__FP9lua_State
 * Address: 0x0810cccc
 * Size: 523 instructions */
void ReturnItemFromOldAuction(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendCharLog_F() */
    /* - PutEvent() */
    /* - SendToAllFunc() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveOldAuctionItems__FP9lua_State
 * Address: 0x0810d324
 * Size: 138 instructions */
void RemoveOldAuctionItems(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - time@plt() */
    /* - Lock() */
    /* - difftime@plt() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: BidOnItem__FP9lua_State
 * Address: 0x0810d4c8
 * Size: 420 instructions */
void BidOnItem(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - SendCharLog_F() */
    /* - Unlock() */
    /* - RefreshAuctionList() */
    /* TODO: Implement from disassembly */
}

/* Function: SendAuctionItems__FP9lua_State
 * Address: 0x0810d9fc
 * Size: 383 instructions */
void SendAuctionItems(void) {
    /* Stack: 364 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - Lock() */
    /* - wstrncpy() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SellItemOnAuction__FP9lua_State
 * Address: 0x0810e00c
 * Size: 119 instructions */
void SellItemOnAuction(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAuctionData__FP9lua_State
 * Address: 0x0810e178
 * Size: 415 instructions */
void GetAuctionData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: GetOldAuctionData__FP9lua_State
 * Address: 0x0810e650
 * Size: 255 instructions */
void GetOldAuctionData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAuctionItem__FP9lua_State
 * Address: 0x0810e948
 * Size: 503 instructions */
void GetAuctionItem(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RestoreUniqueItem__FP9lua_State
 * Address: 0x0810ef54
 * Size: 112 instructions */
void RestoreUniqueItem(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - time@plt() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetArmor__FP9lua_State
 * Address: 0x0810f0b4
 * Size: 166 instructions */
void SetArmor(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendToAllFunc() */
    /* - Flush() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckRelic__FP9lua_State
 * Address: 0x0810f2b8
 * Size: 141 instructions */
void CheckRelic(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckUniqueItem__FP9lua_State
 * Address: 0x0810f464
 * Size: 123 instructions */
void CheckUniqueItem(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendIdentifyPrice__FP9lua_State
 * Address: 0x0810f5d4
 * Size: 79 instructions */
void SendIdentifyPrice(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetDurability__FP9lua_State
 * Address: 0x0810f6c4
 * Size: 183 instructions */
void GetDurability(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetDurability__FP9lua_State
 * Address: 0x0810f8f4
 * Size: 516 instructions */
void SetDurability(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - ExecuteTask() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearDiscounts__FP9lua_State
 * Address: 0x0810ff28
 * Size: 166 instructions */
void ClearDiscounts(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AddDiscount__FP9lua_State
 * Address: 0x0811018c
 * Size: 446 instructions */
void AddDiscount(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetDiscounts__FP9lua_State
 * Address: 0x08110798
 * Size: 440 instructions */
void GetDiscounts(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: ApplyDiscounts__FP9lua_State
 * Address: 0x08110cf4
 * Size: 836 instructions */
void ApplyDiscounts(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckWeight__FP9lua_State
 * Address: 0x081117c4
 * Size: 83 instructions */
void CheckWeight(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckWeight_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckWeight_F__FUlUlP9lua_State
 * Address: 0x081118b4
 * Size: 346 instructions */
void CheckWeight_F(void) {
    /* Stack: 120 bytes */
    /* Calls: */
    /* - Lock() */
    /* - CalculateCurrentWeight_F() */
    /* - CalculateWeightAllowance_F() */
    /* - SendCurrentWeight_F() */
    /* - SetCurrentMovementSpeed_F() */
    /* - GetTickCount() */
    /* - SetScratchData_F() */
    /* - SendGenMessage_F() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SendItemBreakIcon__FP9lua_State
 * Address: 0x08111d04
 * Size: 88 instructions */
void SendItemBreakIcon(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendItemBreakIcon_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendItemBreakIcon_F__FUlUcUcP9lua_State
 * Address: 0x08111e08
 * Size: 30 instructions */
void SendItemBreakIcon_F(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ApplySetEffects__FP9lua_State
 * Address: 0x08111e58
 * Size: 15 instructions */
void ApplySetEffects(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveSetEffects__FP9lua_State
 * Address: 0x08111e7c
 * Size: 16 instructions */
void RemoveSetEffects(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: ReApplyAllSetEffects__FP9lua_State
 * Address: 0x08111ea4
 * Size: 19 instructions */
void ReApplyAllSetEffects(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentWeight_F__FUlP9lua_State
 * Address: 0x08111ed4
 * Size: 170 instructions */
void CalculateCurrentWeight_F(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: SendCurrentWeight_F__FUlUsUsP9lua_State
 * Address: 0x081120c4
 * Size: 31 instructions */
void SendCurrentWeight_F(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: AddSetEffects_F__FUlUlP9lua_State
 * Address: 0x08112124
 * Size: 9 instructions */
void AddSetEffects_F(void) {
    /* TODO: Implement from disassembly */
}

/* Function: RemoveSetEffects_F__FUlUlP9lua_State
 * Address: 0x08112134
 * Size: 8 instructions */
void RemoveSetEffects_F(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetSetEffects_F__FUlP5_ItemPUsN22iT2N22P9lua_State
 * Address: 0x08112144
 * Size: 8 instructions */
void GetSetEffects_F(void) {
    /* TODO: Implement from disassembly */
}

/* Function: DoSetEffects__FP9lua_State
 * Address: 0x08112154
 * Size: 81 instructions */
void DoSetEffects(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - DoSetEffects_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: DoSetEffects_F__FUlUlP9lua_State
 * Address: 0x08112244
 * Size: 534 instructions */
void DoSetEffects_F(void) {
    /* Stack: 156 bytes */
    /* Calls: */
    /* - Lock() */
    /* - time@plt() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: RefreshVisualFlag__FUlP9lua_State
 * Address: 0x0811298c
 * Size: 161 instructions */
void RefreshVisualFlag(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendToAllFunc() */
    /* TODO: Implement from disassembly */
}

/* Function: ModifyItemXP__FP9lua_State
 * Address: 0x08112b6c
 * Size: 218 instructions */
void ModifyItemXP(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetItemXP__FP9lua_State
 * Address: 0x08112dec
 * Size: 145 instructions */
void GetItemXP(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetItemLevel__FP9lua_State
 * Address: 0x08112fa4
 * Size: 143 instructions */
void GetItemLevel(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetItemLevel__FP9lua_State
 * Address: 0x08113164
 * Size: 177 instructions */
void SetItemLevel(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetUniqueItems__FP9lua_State
 * Address: 0x0811338c
 * Size: 301 instructions */
void GetUniqueItems(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: SetDecayCounter__FP9lua_State
 * Address: 0x0811371c
 * Size: 94 instructions */
void SetDecayCounter(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08113886
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetLevel__FP9lua_State
 * Address: 0x08113890
 * Size: 201 instructions */
void GetLevel(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLevelCap__FP9lua_State
 * Address: 0x08113b0c
 * Size: 40 instructions */
void GetLevelCap(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: SetLevel__FP9lua_State
 * Address: 0x08113b88
 * Size: 173 instructions */
void SetLevel(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - Lock() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMulPerc__FP9lua_State
 * Address: 0x08113db8
 * Size: 95 instructions */
void GetMulPerc(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetXP__FP9lua_State
 * Address: 0x08113ee4
 * Size: 106 instructions */
void GetXP(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: SetXP__FP9lua_State
 * Address: 0x08114028
 * Size: 100 instructions */
void SetXP(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetXP_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetXP_F__FUlUliiP9lua_State
 * Address: 0x08114148
 * Size: 700 instructions */
void SetXP_F(void) {
    /* Stack: 160 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_tonumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - ExecuteTask() */
    /* TODO: Implement from disassembly */
}

/* Function: GetStanceProgression__FP9lua_State
 * Address: 0x08114a5c
 * Size: 412 instructions */
void GetStanceProgression(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLevelAdvancement__FP9lua_State
 * Address: 0x08114f68
 * Size: 275 instructions */
void GetLevelAdvancement(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTemplate__FP9lua_State
 * Address: 0x081152c4
 * Size: 94 instructions */
void GetTemplate(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ToggleTemplate__FP9lua_State
 * Address: 0x081153e4
 * Size: 130 instructions */
void ToggleTemplate(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetXPPerDamage__FP9lua_State
 * Address: 0x08115578
 * Size: 122 instructions */
void GetXPPerDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* - AIGetByCharID() */
    /* - div@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AddToXPPool__FP9lua_State
 * Address: 0x081156e0
 * Size: 98 instructions */
void AddToXPPool(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTemplateAdv__FP9lua_State
 * Address: 0x08115800
 * Size: 212 instructions */
void GetTemplateAdv(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08115ad2
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Abs__FP9lua_State
 * Address: 0x08115ae0
 * Size: 39 instructions */
void Abs(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: DoubleWord__FP9lua_State
 * Address: 0x08115b4c
 * Size: 72 instructions */
void DoubleWord(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Div__FP9lua_State
 * Address: 0x08115c24
 * Size: 87 instructions */
void Div(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetHiValue__FP9lua_State
 * Address: 0x08115d24
 * Size: 56 instructions */
void GetHiValue(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLowValue__FP9lua_State
 * Address: 0x08115dc4
 * Size: 53 instructions */
void GetLowValue(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RoundUp__FP9lua_State
 * Address: 0x08115e5c
 * Size: 43 instructions */
void RoundUp(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - ceil@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RoundDown__FP9lua_State
 * Address: 0x08115ed4
 * Size: 41 instructions */
void RoundDown(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - floor@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: LShift__FP9lua_State
 * Address: 0x08115f48
 * Size: 69 instructions */
void LShift(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RShift__FP9lua_State
 * Address: 0x08116018
 * Size: 69 instructions */
void RShift(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetHexDigit__FP9lua_State
 * Address: 0x081160e8
 * Size: 93 instructions */
void GetHexDigit(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnumber() */
    /* - lua_tonumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08116242
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetElementalAdvantage__FP9lua_State
 * Address: 0x08116250
 * Size: 71 instructions */
void GetElementalAdvantage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetElementalAdvantage__FP9lua_State
 * Address: 0x08116328
 * Size: 89 instructions */
void SetElementalAdvantage(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetGender__FP9lua_State
 * Address: 0x08116434
 * Size: 72 instructions */
void GetGender(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetGender__FP9lua_State
 * Address: 0x08116514
 * Size: 83 instructions */
void SetGender(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetReSpecPoints__FP9lua_State
 * Address: 0x08116614
 * Size: 72 instructions */
void GetReSpecPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetReSpecPoints__FP9lua_State
 * Address: 0x081166f4
 * Size: 92 instructions */
void SetReSpecPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0811685e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AIGetByAttID__FUlP9lua_State
 * Address: 0x08116860
 * Size: 3665 instructions */
void AIGetByAttID(void) {
    /* Stack: 96 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: AIGetByCharID__FUlP9lua_State
 * Address: 0x08119690
 * Size: 48 instructions */
void AIGetByCharID(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AIGetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: SetDoRemove__FP9lua_State
 * Address: 0x08119718
 * Size: 108 instructions */
void SetDoRemove(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCRange__FP9lua_State
 * Address: 0x08119860
 * Size: 119 instructions */
void SetNPCRange(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsNPCExist__FP9lua_State
 * Address: 0x081199d4
 * Size: 84 instructions */
void IsNPCExist(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLoot__FP9lua_State
 * Address: 0x08119ad8
 * Size: 215 instructions */
void GetLoot(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCAttackType__FP9lua_State
 * Address: 0x08119d8c
 * Size: 176 instructions */
void SetNPCAttackType(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIRunTask__FP7NPCInfoUlUlUlP9lua_State
 * Address: 0x08119fb0
 * Size: 39 instructions */
void AIRunTask(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - ExecuteTask() */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAttackPerc__FP9lua_State
 * Address: 0x0811a030
 * Size: 252 instructions */
void GetAttackPerc(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetDetectHiddenRate__FP9lua_State
 * Address: 0x0811a348
 * Size: 97 instructions */
void GetDetectHiddenRate(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowerID__FP9lua_State
 * Address: 0x0811a478
 * Size: 239 instructions */
void GetPowerID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowType__FP9lua_State
 * Address: 0x0811a768
 * Size: 211 instructions */
void GetPowType(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMeleeRange__FP9lua_State
 * Address: 0x0811a9f8
 * Size: 68 instructions */
void GetMeleeRange(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCPowerData__FP9lua_State
 * Address: 0x0811aac4
 * Size: 2104 instructions */
void GetNPCPowerData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPowerRange__FP9lua_State
 * Address: 0x0811c26c
 * Size: 211 instructions */
void GetPowerRange(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIRefreshTopTarget__FUlP9lua_State
 * Address: 0x0811c518
 * Size: 265 instructions */
void AIRefreshTopTarget(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - pthread_mutex_lock@plt() */
    /* - AIGetByCharID() */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Unlock() */
    /* - Lock() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AIDoCountDeduct__FP7NPCInfoP9lua_State
 * Address: 0x0811c868
 * Size: 170 instructions */
void AIDoCountDeduct(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AIRemoveEntity__FUlP9lua_State
 * Address: 0x0811cae0
 * Size: 76 instructions */
void AIRemoveEntity(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - AIDoCountDeduct() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveNPC__FP9lua_State
 * Address: 0x0811cbd0
 * Size: 132 instructions */
void RemoveNPC(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - GetTickCount() */
    /* - AIRemoveEntity() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAnimStanceID__FP9lua_State
 * Address: 0x0811cd80
 * Size: 96 instructions */
void GetAnimStanceID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIProceedWithAggro__FP7NPCInfoUlP9lua_State
 * Address: 0x0811cea8
 * Size: 178 instructions */
void AIProceedWithAggro(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - Lock() */
    /* - GetNPCCount() */
    /* TODO: Implement from disassembly */
}

/* Function: AIProceedAggro__FUlUsUsP9lua_State
 * Address: 0x0811d0e0
 * Size: 95 instructions */
void AIProceedAggro(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: TargetAttackable_F__FUlUlP9lua_State
 * Address: 0x0811d1f4
 * Size: 54 instructions */
void TargetAttackable_F(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: TargetAttackable__FP9lua_State
 * Address: 0x0811d294
 * Size: 86 instructions */
void TargetAttackable(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - TargetAttackable_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AISetCurrentHitPoints__FUlUliibT4UcT4P9lua_State
 * Address: 0x0811d394
 * Size: 738 instructions */
void AISetCurrentHitPoints(void) {
    /* Stack: 156 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - Lock() */
    /* - FindObjectInScene() */
    /* - Unlock() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - AIProceedAggro() */
    /* - AIRunTask() */
    /* - GetTickCount() */
    /* - AISetPartnerAggro() */
    /* TODO: Implement from disassembly */
}

/* Function: aicomparepart__FPCvT0
 * Address: 0x0811dcbc
 * Size: 35 instructions */
void aicomparepart(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: AIGetNPCPartner__FUlP8_NPCPartRifP9lua_State
 * Address: 0x0811dd18
 * Size: 220 instructions */
void AIGetNPCPartner(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - () */
    /* - GetTranslation() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: AIAggroCount__FUlUlP9lua_State
 * Address: 0x0811dfb8
 * Size: 69 instructions */
void AIAggroCount(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: AISetPartnerAggro__FUlUlP10_CharStatsP9lua_State
 * Address: 0x0811e098
 * Size: 323 instructions */
void AISetPartnerAggro(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AIGetByAttID() */
    /* - AIGetNPCPartner() */
    /* - floor@plt() */
    /* - ceil@plt() */
    /* - rand@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AISetCurrentMissPoints__FUlUliP9lua_State
 * Address: 0x0811e4ac
 * Size: 25 instructions */
void AISetCurrentMissPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - AISetCurrentHitPoints() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCMiss__FP9lua_State
 * Address: 0x0811e4e8
 * Size: 109 instructions */
void SetNPCMiss(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_type() */
    /* - AISetCurrentMissPoints() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCHitPoints__FP9lua_State
 * Address: 0x0811e62c
 * Size: 166 instructions */
void SetNPCHitPoints(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_type() */
    /* - AISetCurrentHitPoints() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCTreasure__FP9lua_State
 * Address: 0x0811e814
 * Size: 94 instructions */
void GetNPCTreasure(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCAggressiveFlag__FP9lua_State
 * Address: 0x0811e938
 * Size: 94 instructions */
void GetNPCAggressiveFlag(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetInvisibilityPerc__FP9lua_State
 * Address: 0x0811ea5c
 * Size: 94 instructions */
void GetInvisibilityPerc(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCItemCount__FP9lua_State
 * Address: 0x0811eb7c
 * Size: 105 instructions */
void GetNPCItemCount(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCItemCount__FP9lua_State
 * Address: 0x0811ecc8
 * Size: 121 instructions */
void SetNPCItemCount(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCAggressiveFlag__FP9lua_State
 * Address: 0x0811ee40
 * Size: 107 instructions */
void SetNPCAggressiveFlag(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNameID__FP9lua_State
 * Address: 0x0811ef84
 * Size: 96 instructions */
void GetNameID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: TransferQuestLoot__FP9lua_State
 * Address: 0x0811f0ac
 * Size: 1977 instructions */
void TransferQuestLoot(void) {
    /* Stack: 1196 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIsSNPC__FP9lua_State
 * Address: 0x081213dc
 * Size: 97 instructions */
void GetIsSNPC(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCClanInfo__FP9lua_State
 * Address: 0x08121508
 * Size: 187 instructions */
void GetNPCClanInfo(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetItemFromLoot__FP9lua_State
 * Address: 0x08121740
 * Size: 225 instructions */
void GetItemFromLoot(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: TransferLoot__FP9lua_State
 * Address: 0x08121a08
 * Size: 1221 instructions */
void TransferLoot(void) {
    /* Stack: 1276 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIAllocateLoot__FG7CVectorP6CSceneUlUlUcP11_STLootInfoUcP9lua_State
 * Address: 0x08122f1c
 * Size: 340 instructions */
void AIAllocateLoot(void) {
    /* Stack: 144 bytes */
    /* Calls: */
    /* - GetSceneID() */
    /* - GetPool() */
    /* - GetFreeNPC() */
    /* - () */
    /* - SetTranslate() */
    /* - AIGetByAttID() */
    /* - GetNPCCount() */
    /* - GetNPCData() */
    /* - memset@plt() */
    /* - GetTickCount() */
    /* - Lock() */
    /* - LockWrite() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: AIAllocateLoot__FG7CVectorP6CSceneUlP11_STLootInfoP9lua_State
 * Address: 0x081233ac
 * Size: 39 instructions */
void AIAllocateLoot(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - AIAllocateLoot() */
    /* TODO: Implement from disassembly */
}

/* Function: DropLoot__FP9lua_State
 * Address: 0x08123404
 * Size: 354 instructions */
void DropLoot(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - GetTranslation() */
    /* - IDXTRANS() */
    /* - luaL_getn() */
    /* - lua_pushnumber() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - SendCharLog_F() */
    /* - AIAllocateLoot() */
    /* TODO: Implement from disassembly */
}

/* Function: ExecuteNPCScript__FP9lua_State
 * Address: 0x0812388c
 * Size: 118 instructions */
void ExecuteNPCScript(void) {
    /* Stack: 96 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - ExecuteTask() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCAttrib__FP9lua_State
 * Address: 0x08123a08
 * Size: 100 instructions */
void GetNPCAttrib(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIIsAggroed__FUlUlP9lua_State
 * Address: 0x08123b38
 * Size: 81 instructions */
void AIIsAggroed(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* - IDXTRANS() */
    /* - AIGetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: IsAggroed__FP9lua_State
 * Address: 0x08123c38
 * Size: 128 instructions */
void IsAggroed(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIIsAggroed() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIClearAggro__FUlUlP9lua_State
 * Address: 0x08123db8
 * Size: 106 instructions */
void AIClearAggro(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetNPCCount() */
    /* - IDXTRANS() */
    /* - AIGetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearAggro__FP9lua_State
 * Address: 0x08123f1c
 * Size: 116 instructions */
void ClearAggro(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIClearAggro() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIGetDirectionByAttID__FUlUlP9lua_State
 * Address: 0x08124078
 * Size: 43 instructions */
void AIGetDirectionByAttID(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - AIGetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: AIAllocateNPC__FP11CSpawnPointfffUlUlbP6CSceneUlUsP9lua_State
 * Address: 0x081240fc
 * Size: 1120 instructions */
void AIAllocateNPC(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - AIGetByAttID() */
    /* - GetSceneID() */
    /* - GetPool() */
    /* - GetFreeNPC() */
    /* - () */
    /* - GetNPCCount() */
    /* - GetNPCData() */
    /* - SetTranslate() */
    /* - () */
    /* - InitializeRandomLocation() */
    /* - () */
    /* - GetGrav() */
    /* - SetTranslate() */
    /* - AIGetDirectionByAttID() */
    /* - rand@plt() */
    /* - LockWrite() */
    /* - Unlock() */
    /* - memset@plt() */
    /* - GetTickCount() */
    /* - time@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AIActivateSpawnpt__FUliUlP9lua_State
 * Address: 0x0812517c
 * Size: 96 instructions */
void AIActivateSpawnpt(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - AIAllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: AIActivateSpawnPt__FUlUlUlRUcPUlT3UlP9lua_State
 * Address: 0x081252bc
 * Size: 236 instructions */
void AIActivateSpawnPt(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - AIAllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateQuestPtWorld__FP9lua_State
 * Address: 0x081255dc
 * Size: 146 instructions */
void ActivateQuestPtWorld(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIActivateSpawnPt() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateQuestPt__FP9lua_State
 * Address: 0x08125794
 * Size: 212 instructions */
void ActivateQuestPt(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIActivateSpawnPt() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCFromSpawn__FP9lua_State
 * Address: 0x08125a18
 * Size: 152 instructions */
void GetNPCFromSpawn(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetSpawnNPC() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteSpawnNPC__FP9lua_State
 * Address: 0x08125be8
 * Size: 75 instructions */
void DeleteSpawnNPC(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - DeleteSpawnedNPC() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIActivateSpawnPtGrp__FUlUlP9lua_State
 * Address: 0x08125cc4
 * Size: 140 instructions */
void AIActivateSpawnPtGrp(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - AIAllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateSpawnGrp__FP9lua_State
 * Address: 0x08125ea8
 * Size: 75 instructions */
void ActivateSpawnGrp(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIActivateSpawnPtGrp() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteSpawnNPCGrp__FP9lua_State
 * Address: 0x08125f84
 * Size: 105 instructions */
void DeleteSpawnNPCGrp(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckSceneLocal() */
    /* - DeleteSpawnedNPCGrp() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetSpawnGrpTimer__FP9lua_State
 * Address: 0x081260b4
 * Size: 75 instructions */
void ResetSpawnGrpTimer(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - ResetTickSpawnGrp() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIReplaceSpawnedAttrib__FUlUlUlP9lua_State
 * Address: 0x08126194
 * Size: 118 instructions */
void AIReplaceSpawnedAttrib(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: ReplaceSpawnAttrib__FP9lua_State
 * Address: 0x0812632c
 * Size: 90 instructions */
void ReplaceSpawnAttrib(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIReplaceSpawnedAttrib() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIResetSpawnedAttrib__FUlUlP9lua_State
 * Address: 0x08126438
 * Size: 169 instructions */
void AIResetSpawnedAttrib(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetSpawnAttrib__FP9lua_State
 * Address: 0x0812668c
 * Size: 103 instructions */
void ResetSpawnAttrib(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckSceneLocal() */
    /* - AIResetSpawnedAttrib() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIReplaceSpawnedGrpAttrib__FUlUlUlP9lua_State
 * Address: 0x081267b4
 * Size: 122 instructions */
void AIReplaceSpawnedGrpAttrib(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: ReplaceSpawnGrpAttrib__FP9lua_State
 * Address: 0x0812695c
 * Size: 90 instructions */
void ReplaceSpawnGrpAttrib(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIReplaceSpawnedGrpAttrib() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIResetSpawnedGrpAttrib__FUlUlUcP9lua_State
 * Address: 0x08126a68
 * Size: 195 instructions */
void AIResetSpawnedGrpAttrib(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* - DeleteSpawnedNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetSpawnGrpAttrib__FP9lua_State
 * Address: 0x08126d08
 * Size: 136 instructions */
void ResetSpawnGrpAttrib(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckSceneLocal() */
    /* - AIResetSpawnedGrpAttrib() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetQuestOwner__FP9lua_State
 * Address: 0x08126e98
 * Size: 108 instructions */
void GetQuestOwner(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetQuestOwner__FP9lua_State
 * Address: 0x08126fe8
 * Size: 104 instructions */
void ResetQuestOwner(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCScriptID__FP9lua_State
 * Address: 0x08127128
 * Size: 99 instructions */
void GetNPCScriptID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnPtCnt__FP9lua_State
 * Address: 0x08127258
 * Size: 78 instructions */
void GetSpawnPtCnt(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetSpawnPtCnt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckSpawnLiving__FP9lua_State
 * Address: 0x0812733c
 * Size: 87 instructions */
void CheckSpawnLiving(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckSpawnLiving() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetQuestOwner__FP9lua_State
 * Address: 0x08127438
 * Size: 102 instructions */
void SetQuestOwner(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetQuestOwner() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsPiss__FP9lua_State
 * Address: 0x08127564
 * Size: 118 instructions */
void IsPiss(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNoDeath__FP9lua_State
 * Address: 0x081276d8
 * Size: 86 instructions */
void SetNoDeath(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetNoDeath() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsGuard__FP9lua_State
 * Address: 0x081277d4
 * Size: 98 instructions */
void IsGuard(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: DropLootExt1__FP9lua_State
 * Address: 0x08127908
 * Size: 604 instructions */
void DropLootExt1(void) {
    /* Stack: 580 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - memset@plt() */
    /* - lua_type() */
    /* - AllocateLootExt1() */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCResistance__FP9lua_State
 * Address: 0x081280a8
 * Size: 167 instructions */
void GetNPCResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: IsNPCDead__FP9lua_State
 * Address: 0x081282a8
 * Size: 61 instructions */
void IsNPCDead(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIGetByAttID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AISetSpawnPermanentStatus__FUlUcP9lua_State
 * Address: 0x0812835c
 * Size: 134 instructions */
void AISetSpawnPermanentStatus(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - GetSpawnPointCount() */
    /* - AIGetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnLiveStatus__FP9lua_State
 * Address: 0x0812850c
 * Size: 152 instructions */
void SetSpawnLiveStatus(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - GetSpawnPointCount() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnPtStatus__FP9lua_State
 * Address: 0x08128700
 * Size: 84 instructions */
void SetSpawnPtStatus(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AISetSpawnPermanentStatus() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetNPCData__FP9lua_State
 * Address: 0x081287f4
 * Size: 61 instructions */
void ResetNPCData(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AISpawnedNPC__FUlfffUlUsP9lua_State
 * Address: 0x081288a4
 * Size: 70 instructions */
void AISpawnedNPC(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetNextScene() */
    /* - GetSceneID() */
    /* - AIAllocateNPC() */
    /* TODO: Implement from disassembly */
}

/* Function: SpawnNPC__FP9lua_State
 * Address: 0x08128964
 * Size: 139 instructions */
void SpawnNPC(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AISpawnedNPC() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnOnFlag__FP9lua_State
 * Address: 0x08128b04
 * Size: 111 instructions */
void SetSpawnOnFlag(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetSpawnOnStat() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSpawnMaxFlag__FP9lua_State
 * Address: 0x08128c54
 * Size: 111 instructions */
void SetSpawnMaxFlag(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetSpawnMax() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIManual_Loot__FUlUlP9lua_State
 * Address: 0x08128da4
 * Size: 95 instructions */
void AIManual_Loot(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - () */
    /* - GetTranslation() */
    /* - AIGetByCharID() */
    /* - AIAllocateLoot() */
    /* TODO: Implement from disassembly */
}

/* Function: ManualDropLoot__FP9lua_State
 * Address: 0x08128eac
 * Size: 71 instructions */
void ManualDropLoot(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIManual_Loot() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnStatistics__FP9lua_State
 * Address: 0x08128f78
 * Size: 96 instructions */
void GetSpawnStatistics(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetSpawnStat() */
    /* - memset@plt() */
    /* - GetNPCCount() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnData__FP9lua_State
 * Address: 0x08129094
 * Size: 224 instructions */
void GetSpawnData(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetSpawnPt() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: AIGetSpawnPtDetail__FUlUlP11_STSpawnRecP9lua_State
 * Address: 0x08129344
 * Size: 185 instructions */
void AIGetSpawnPtDetail(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - AIGetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnDetail__FP9lua_State
 * Address: 0x0812959c
 * Size: 126 instructions */
void GetSpawnDetail(void) {
    /* Stack: 104 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - AIGetSpawnPtDetail() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCRotate__FP9lua_State
 * Address: 0x08129714
 * Size: 74 instructions */
void GetNPCRotate(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCData__FP9lua_State
 * Address: 0x081297f4
 * Size: 696 instructions */
void GetNPCData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetTargetList__FP9lua_State
 * Address: 0x0812a034
 * Size: 385 instructions */
void SetTargetList(void) {
    /* Stack: 124 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - strcpy@plt() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - memset@plt() */
    /* - sprintf@plt() */
    /* - lua_type() */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: DoClanRating__FP9lua_State
 * Address: 0x0812a4bc
 * Size: 146 instructions */
void DoClanRating(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIGetByCharID() */
    /* - Lock() */
    /* - rand@plt() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RetrieveScanList__FP9lua_State
 * Address: 0x0812a684
 * Size: 147 instructions */
void RetrieveScanList(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: RetrieveTargetList__FP9lua_State
 * Address: 0x0812a85c
 * Size: 284 instructions */
void RetrieveTargetList(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_settop() */
    /* TODO: Implement from disassembly */
}

/* Function: aicomparespawnpt__FPCvT0
 * Address: 0x0812abc0
 * Size: 31 instructions */
void aicomparespawnpt(void) {
    /* TODO: Implement from disassembly */
}

/* Function: aicomparenpc__FPCvT0
 * Address: 0x0812ac0c
 * Size: 32 instructions */
void aicomparenpc(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCCoord__FP9lua_State
 * Address: 0x0812ac5c
 * Size: 124 instructions */
void GetNPCCoord(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - GetTranslation() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnPtCoord__FP9lua_State
 * Address: 0x0812add8
 * Size: 184 instructions */
void GetSpawnPtCoord(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RetrieveSpawnPtByValue__FP9lua_State
 * Address: 0x0812b030
 * Size: 397 instructions */
void RetrieveSpawnPtByValue(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - GetSceneID() */
    /* - GetTranslation() */
    /* - pthread_mutex_lock@plt() */
    /* - GetSpawnPointCount() */
    /* - () */
    /* - () */
    /* - pthread_mutex_unlock@plt() */
    /* - qsort@plt() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: RetrieveNPCByValue__FP9lua_State
 * Address: 0x0812b5bc
 * Size: 414 instructions */
void RetrieveNPCByValue(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - GetSceneID() */
    /* - GetTranslation() */
    /* - pthread_mutex_lock@plt() */
    /* - GetNPCCount() */
    /* - () */
    /* - () */
    /* - pthread_mutex_unlock@plt() */
    /* - qsort@plt() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCDropLootFlag__FP9lua_State
 * Address: 0x0812bb8c
 * Size: 73 instructions */
void SetNPCDropLootFlag(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SetDropLootFlag() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveNPCToChar__FP9lua_State
 * Address: 0x0812bc64
 * Size: 112 instructions */
void MoveNPCToChar(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - MoveToChar() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveNPCToSpawnPt__FP9lua_State
 * Address: 0x0812bdb4
 * Size: 129 instructions */
void MoveNPCToSpawnPt(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - MoveToSpawnPoint() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveNPCToCoord__FP9lua_State
 * Address: 0x0812bf34
 * Size: 114 instructions */
void MoveNPCToCoord(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - MoveToVector() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AISetSpawnPtByGroup__FUlUlUcP9lua_State
 * Address: 0x0812c088
 * Size: 120 instructions */
void AISetSpawnPtByGroup(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - GetSpawnPointCount() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: RedoSpawnGrp__FP9lua_State
 * Address: 0x0812c228
 * Size: 145 instructions */
void RedoSpawnGrp(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckSceneLocal() */
    /* - DeleteSpawnedNPCGrp() */
    /* - AIReplaceSpawnedGrpAttrib() */
    /* - ResetTickSpawnGrp() */
    /* - AISetSpawnPtByGroup() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: AIModifyNPCData__FUliUiP9lua_State
 * Address: 0x0812c3c4
 * Size: 889 instructions */
void AIModifyNPCData(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetNPCData__FP9lua_State
 * Address: 0x0812d16c
 * Size: 91 instructions */
void SetNPCData(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIModifyNPCData() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIGetNPCData__FUliP9lua_State
 * Address: 0x0812d274
 * Size: 1967 instructions */
void AIGetNPCData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - AIGetByAttID() */
    /* TODO: Implement from disassembly */
}

/* Function: RetrieveNPCData__FP9lua_State
 * Address: 0x0812eb64
 * Size: 72 instructions */
void RetrieveNPCData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIGetNPCData() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AISetNPCInstanceData__FUliiP9lua_State
 * Address: 0x0812ec34
 * Size: 399 instructions */
void AISetNPCInstanceData(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: ModifyNPCInstanceData__FP9lua_State
 * Address: 0x0812f278
 * Size: 93 instructions */
void ModifyNPCInstanceData(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AISetNPCInstanceData() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AIGetNPCInstanceData__FUliP9lua_State
 * Address: 0x0812f384
 * Size: 506 instructions */
void AIGetNPCInstanceData(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: RetrieveNPCInstanceData__FP9lua_State
 * Address: 0x0812fb50
 * Size: 70 instructions */
void RetrieveNPCInstanceData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIGetNPCInstanceData() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsTrap__FP9lua_State
 * Address: 0x0812fc18
 * Size: 85 instructions */
void IsTrap(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsDontAttack__FP9lua_State
 * Address: 0x0812fd14
 * Size: 85 instructions */
void IsDontAttack(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: TeleportNPC__FP9lua_State
 * Address: 0x0812fe14
 * Size: 176 instructions */
void TeleportNPC(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - IDXTRANS() */
    /* - LockWrite() */
    /* - SetTranslate() */
    /* - ChangeObjectPos() */
    /* - SetTranslate() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AISetEntityState__FUlUlUcP9lua_State
 * Address: 0x08130028
 * Size: 358 instructions */
void AISetEntityState(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - pthread_mutex_lock@plt() */
    /* - pthread_mutex_unlock@plt() */
    /* - Lock() */
    /* - Unlock() */
    /* - GetTickCount() */
    /* - () */
    /* - GetTranslation() */
    /* - npcmutexunlock() */
    /* - AIAllocateLoot() */
    /* TODO: Implement from disassembly */
}

/* Function: FindMonsterInScene__FP9lua_State
 * Address: 0x0813050c
 * Size: 346 instructions */
void FindMonsterInScene(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - Lock() */
    /* - GetNPCList() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - GetNext() */
    /* - Unlock() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBreakSprint__FP9lua_State
 * Address: 0x08130938
 * Size: 73 instructions */
void GetBreakSprint(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - AIGetByCharID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08130a66
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetAllBasePrimaryAttributes__FP9lua_State
 * Address: 0x08130a70
 * Size: 185 instructions */
void GetAllBasePrimaryAttributes(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAllBasePrimaryAttributes__FP9lua_State
 * Address: 0x08130cb8
 * Size: 252 instructions */
void SetAllBasePrimaryAttributes(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseAgility__FP9lua_State
 * Address: 0x08130fc8
 * Size: 78 instructions */
void GetBaseAgility(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseAgility__FP9lua_State
 * Address: 0x081310b8
 * Size: 149 instructions */
void SetBaseAgility(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateCurrentDefenseRating() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseConstitution__FP9lua_State
 * Address: 0x08131288
 * Size: 78 instructions */
void GetBaseConstitution(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseConstitution__FP9lua_State
 * Address: 0x08131378
 * Size: 163 instructions */
void SetBaseConstitution(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateCurrentConstitution() */
    /* - PutEvent() */
    /* - CalculateMaximumHitPoints() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseMind__FP9lua_State
 * Address: 0x08131574
 * Size: 78 instructions */
void GetBaseMind(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseMind__FP9lua_State
 * Address: 0x08131668
 * Size: 163 instructions */
void SetBaseMind(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateCurrentMind() */
    /* - PutEvent() */
    /* - CalculateMaximumChiPoints() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBasePerception__FP9lua_State
 * Address: 0x08131864
 * Size: 78 instructions */
void GetBasePerception(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBasePerception__FP9lua_State
 * Address: 0x08131958
 * Size: 149 instructions */
void SetBasePerception(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateCurrentAttackRating() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseStrength__FP9lua_State
 * Address: 0x08131b28
 * Size: 77 instructions */
void GetBaseStrength(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseStrength__FP9lua_State
 * Address: 0x08131c18
 * Size: 137 instructions */
void SetBaseStrength(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateCurrentStrength() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentStrength__FP9lua_State
 * Address: 0x08131dc8
 * Size: 65 instructions */
void GetCurrentStrength(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentStrength() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentConstitution__FP9lua_State
 * Address: 0x08131e84
 * Size: 65 instructions */
void GetCurrentConstitution(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentConstitution() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentMind__FP9lua_State
 * Address: 0x08131f44
 * Size: 65 instructions */
void GetCurrentMind(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentMind() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentPerception__FP9lua_State
 * Address: 0x08132004
 * Size: 66 instructions */
void GetCurrentPerception(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentAttackRating() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentAgility__FP9lua_State
 * Address: 0x081320c4
 * Size: 66 instructions */
void GetCurrentAgility(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentDefenseRating() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAttributePoints__FP9lua_State
 * Address: 0x08132184
 * Size: 78 instructions */
void GetAttributePoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAttributePoints__FP9lua_State
 * Address: 0x08132274
 * Size: 112 instructions */
void SetAttributePoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentStrength__FUlP9lua_State
 * Address: 0x081323d4
 * Size: 154 instructions */
void CalculateCurrentStrength(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentMind__FUlP9lua_State
 * Address: 0x081325d0
 * Size: 158 instructions */
void CalculateCurrentMind(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentPerception__FUlP9lua_State
 * Address: 0x081327dc
 * Size: 154 instructions */
void CalculateCurrentPerception(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentConstitution__FUlP9lua_State
 * Address: 0x081329dc
 * Size: 155 instructions */
void CalculateCurrentConstitution(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentAgility__FUlP9lua_State
 * Address: 0x08132bdc
 * Size: 155 instructions */
void CalculateCurrentAgility(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08132e22
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SendJournal__FP9lua_State
 * Address: 0x08132e30
 * Size: 52 instructions */
void SendJournal(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendQuestJournal() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTaskState__FP9lua_State
 * Address: 0x08132ec4
 * Size: 78 instructions */
void GetTaskState(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearQuest__FP9lua_State
 * Address: 0x08132fb4
 * Size: 352 instructions */
void ClearQuest(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearLastQuest__FP9lua_State
 * Address: 0x08133568
 * Size: 109 instructions */
void ClearLastQuest(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GenerateQuest__FP9lua_State
 * Address: 0x081336e4
 * Size: 1287 instructions */
void GenerateQuest(void) {
    /* Stack: 764 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - CheckLastQuest() */
    /* - rand@plt() */
    /* - ClearTaskLog() */
    /* - GenTreasure() */
    /* - AIGetByCharID() */
    /* - SendGenFluff() */
    /* - SendQuestMsg() */
    /* - SetQuestLog() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: AcceptQuest__FP9lua_State
 * Address: 0x08134b1c
 * Size: 228 instructions */
void AcceptQuest(void) {
    /* Stack: 456 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - memcpy@plt() */
    /* - time@plt() */
    /* - AddItemsToInventory() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ReactToQuest__FP9lua_State
 * Address: 0x08134e5c
 * Size: 6421 instructions */
void ReactToQuest(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - memcpy@plt() */
    /* - AIGetByCharID() */
    /* - QuestGiverCheck() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* - time@plt() */
    /* - GetSpawnPoints() */
    /* - SetPriortyTarget() */
    /* - AIActivateSpawnpt() */
    /* - CheckElapsedTime() */
    /* - AddToLastQuest() */
    /* - RewardCharacterFunc() */
    /* - SendGenFluff() */
    /* - CheckItemsMatch() */
    /* - SendTxtMsg() */
    /* - SetQuestLog() */
    /* - CheckItem() */
    /* - AddToFreeInventorySlot() */
    /* TODO: Implement from disassembly */
}

/* Function: SetQuestTreasure__FP9lua_State
 * Address: 0x0813a3e8
 * Size: 166 instructions */
void SetQuestTreasure(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetQuestGold__FP9lua_State
 * Address: 0x0813a5f4
 * Size: 95 instructions */
void SetQuestGold(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: RewardCharacterFunc__FUlP10_CharQuestiP9lua_State
 * Address: 0x0813a718
 * Size: 1253 instructions */
void RewardCharacterFunc(void) {
    /* Stack: 892 bytes */
    /* Calls: */
    /* - () */
    /* - Lock() */
    /* - SendTxtMsg() */
    /* - ClearTaskLog() */
    /* - PutEvent() */
    /* - Unlock() */
    /* - ExecuteTask() */
    /* - memset@plt() */
    /* - AllocateLootComplete() */
    /* TODO: Implement from disassembly */
}

/* Function: AddItemsToInventory__FUlP10_CharQuestP9lua_State
 * Address: 0x0813ba5c
 * Size: 762 instructions */
void AddItemsToInventory(void) {
    /* Stack: 700 bytes */
    /* Calls: */
    /* - () */
    /* - Lock() */
    /* - Unlock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - AllocateLootComplete() */
    /* TODO: Implement from disassembly */
}

/* Function: AddItemsToTempInventory__FUlP10_CharQuestP9lua_State
 * Address: 0x0813c610
 * Size: 123 instructions */
void AddItemsToTempInventory(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* - AddToSlotFunc() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: AddToSlotFunc__FP10_InventoryiUlUcUc
 * Address: 0x0813c798
 * Size: 53 instructions */
void AddToSlotFunc(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: AddToFreeInventorySlot__FUlUlUcP9lua_State
 * Address: 0x0813c824
 * Size: 267 instructions */
void AddToFreeInventorySlot(void) {
    /* Stack: 580 bytes */
    /* Calls: */
    /* - () */
    /* - Lock() */
    /* - Unlock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - AllocateLootComplete() */
    /* TODO: Implement from disassembly */
}

/* Function: SendQuestFluff__FUlUsP12_QuestRandomP9lua_State
 * Address: 0x0813cbc8
 * Size: 101 instructions */
void SendQuestFluff(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - Lock() */
    /* - rand@plt() */
    /* - PickGenTextDiff() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGenFluff__FUlUsP10_CharQuestP9lua_State
 * Address: 0x0813ccf8
 * Size: 2404 instructions */
void SendGenFluff(void) {
    /* Stack: 364 bytes */
    /* Calls: */
    /* - Lock() */
    /* - rand@plt() */
    /* - PickGenTextDiff() */
    /* - AIGetByAttID() */
    /* - PutEvent() */
    /* - SetQuestLog() */
    /* - memset@plt() */
    /* - Lock() */
    /* - FindObject() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SetQuestLog__FUlUsP7_ParamsP9lua_State
 * Address: 0x0813ee1c
 * Size: 303 instructions */
void SetQuestLog(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: PickGenTextDiff__FUsP9_GenFluff
 * Address: 0x0813f244
 * Size: 42 instructions */
void PickGenTextDiff(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: CheckElapsedTime__FP10_CharQuest
 * Address: 0x0813f2ac
 * Size: 50 instructions */
void CheckElapsedTime(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - difftime@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckItemsMatch__FUlP10_CharQuestP9lua_State
 * Address: 0x0813f32c
 * Size: 1231 instructions */
void CheckItemsMatch(void) {
    /* Stack: 64 bytes */
    /* Calls: */
    /* - Lock() */
    /* - memcpy@plt() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckItem__FUlUlP9lua_State
 * Address: 0x08140190
 * Size: 160 instructions */
void CheckItem(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: QuestGiverCheck__FUlP10_CharQuestT1P9lua_State
 * Address: 0x08140364
 * Size: 171 instructions */
void QuestGiverCheck(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Unlock() */
    /* - SendGenFluff() */
    /* - CheckElapsedTime() */
    /* - AddToLastQuest() */
    /* - RewardCharacterFunc() */
    /* TODO: Implement from disassembly */
}

/* Function: GenTreasure__FUsP9lua_State
 * Address: 0x08140564
 * Size: 34 instructions */
void GenTreasure(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - ExecuteTask() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSpawnPoints__FUlfP9lua_StatePP11CSpawnPoint
 * Address: 0x081405d8
 * Size: 74 instructions */
void GetSpawnPoints(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Lock() */
    /* - GetSpawnPoint() */
    /* TODO: Implement from disassembly */
}

/* Function: TurnOffSpawnPoints__FUlP10_CharQuestP9lua_State
 * Address: 0x081406a4
 * Size: 96 instructions */
void TurnOffSpawnPoints(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Lock() */
    /* - GetSpawnPoint() */
    /* - ClearPriortyTarget() */
    /* TODO: Implement from disassembly */
}

/* Function: ChkDecEnemyInParty__FUlUlP9lua_State
 * Address: 0x081407d8
 * Size: 245 instructions */
void ChkDecEnemyInParty(void) {
    /* Stack: 424 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - Lock() */
    /* - FindObject() */
    /* - Unlock() */
    /* - CheckElapsedTime() */
    /* - AddToLastQuest() */
    /* - memcpy@plt() */
    /* - RewardCharacterFunc() */
    /* TODO: Implement from disassembly */
}

/* Function: SendQuestJournal__FUlP9lua_State
 * Address: 0x08140afc
 * Size: 476 instructions */
void SendQuestJournal(void) {
    /* Stack: 212 bytes */
    /* Calls: */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: SendTxtMsg__FUlUsP9lua_State
 * Address: 0x0814128c
 * Size: 31 instructions */
void SendTxtMsg(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SendQuestMsg__FUlUsP9lua_State
 * Address: 0x081412e4
 * Size: 29 instructions */
void SendQuestMsg(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearTaskLog__FUlP9lua_State
 * Address: 0x08141338
 * Size: 50 instructions */
void ClearTaskLog(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetChainTag__FP9lua_State
 * Address: 0x081413d8
 * Size: 74 instructions */
void GetChainTag(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckLastQuest__FP10_CharQuestUl
 * Address: 0x081414b4
 * Size: 73 instructions */
void CheckLastQuest(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddToLastQuest__FP10_CharQuest
 * Address: 0x081415b4
 * Size: 78 instructions */
void AddToLastQuest(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08141736
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetResourceClan__FP9lua_State
 * Address: 0x08141740
 * Size: 70 instructions */
void GetResourceClan(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetResources__FP9lua_State
 * Address: 0x08141818
 * Size: 271 instructions */
void GetResources(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetResourcesType__FP9lua_State
 * Address: 0x08141b5c
 * Size: 292 instructions */
void GetResourcesType(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetResourcesGroup__FP9lua_State
 * Address: 0x08141ee8
 * Size: 155 instructions */
void GetResourcesGroup(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetResourceData__FP9lua_State
 * Address: 0x081420c8
 * Size: 1012 instructions */
void GetResourceData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: SetResourceData__FP9lua_State
 * Address: 0x08142cec
 * Size: 861 instructions */
void SetResourceData(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetResourceStats__FP9lua_State
 * Address: 0x08143788
 * Size: 235 instructions */
void GetResourceStats(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetResourceClan__FP9lua_State
 * Address: 0x08143a54
 * Size: 218 instructions */
void SetResourceClan(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanResources__FP9lua_State
 * Address: 0x08143d24
 * Size: 140 instructions */
void GetClanResources(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetResourceInClan__FP9lua_State
 * Address: 0x08143ee4
 * Size: 196 instructions */
void GetResourceInClan(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x081441a2
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentHitPoints__FP9lua_State
 * Address: 0x081441b0
 * Size: 117 instructions */
void GetCurrentHitPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: SetCurrentHitPoints__FP9lua_State
 * Address: 0x0814431c
 * Size: 191 instructions */
void SetCurrentHitPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetHitPointRegenerationRate__FP9lua_State
 * Address: 0x08144580
 * Size: 315 instructions */
void GetHitPointRegenerationRate(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentConstitution() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: SetHitPointRegenerationRate__FP9lua_State
 * Address: 0x08144960
 * Size: 81 instructions */
void SetHitPointRegenerationRate(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateMaximumHitPoints__FUlP9lua_State
 * Address: 0x08144a58
 * Size: 410 instructions */
void CalculateMaximumHitPoints(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMaximumHitPoints__FP9lua_State
 * Address: 0x08144f80
 * Size: 63 instructions */
void GetMaximumHitPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateMaximumHitPoints() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseMaximumHitPoints__FP9lua_State
 * Address: 0x08145038
 * Size: 77 instructions */
void GetBaseMaximumHitPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseMaximumHitPoints__FP9lua_State
 * Address: 0x08145128
 * Size: 122 instructions */
void SetBaseMaximumHitPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateMaximumHitPoints() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentChiPoints__FP9lua_State
 * Address: 0x081452a8
 * Size: 77 instructions */
void GetCurrentChiPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetCurrentChiPoints__FP9lua_State
 * Address: 0x08145398
 * Size: 111 instructions */
void SetCurrentChiPoints(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetChiRegenerationRate__FP9lua_State
 * Address: 0x081454f8
 * Size: 179 instructions */
void GetChiRegenerationRate(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentMind() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetChiRegenerationRate__FP9lua_State
 * Address: 0x08145728
 * Size: 83 instructions */
void SetChiRegenerationRate(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateMaximumChiPoints__FUlP9lua_State
 * Address: 0x08145824
 * Size: 259 instructions */
void CalculateMaximumChiPoints(void) {
    /* Stack: 100 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMaximumChiPoints__FP9lua_State
 * Address: 0x08145b5c
 * Size: 63 instructions */
void GetMaximumChiPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateMaximumChiPoints() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseMaximumChiPoints__FP9lua_State
 * Address: 0x08145c14
 * Size: 77 instructions */
void GetBaseMaximumChiPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseMaximumChiPoints__FP9lua_State
 * Address: 0x08145d08
 * Size: 122 instructions */
void SetBaseMaximumChiPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateMaximumChiPoints() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseDamage__FP9lua_State
 * Address: 0x08145e88
 * Size: 77 instructions */
void GetBaseDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseDamage__FP9lua_State
 * Address: 0x08145f78
 * Size: 88 instructions */
void SetBaseDamage(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseAttackRating__FP9lua_State
 * Address: 0x08146088
 * Size: 77 instructions */
void GetBaseAttackRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseAttackRating__FP9lua_State
 * Address: 0x08146178
 * Size: 130 instructions */
void SetBaseAttackRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateCurrentAttackRating() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseDefenseRating__FP9lua_State
 * Address: 0x0814630c
 * Size: 76 instructions */
void GetBaseDefenseRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseDefenseRating__FP9lua_State
 * Address: 0x081463f8
 * Size: 130 instructions */
void SetBaseDefenseRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - CalculateCurrentDefenseRating() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllBaseResistances__FP9lua_State
 * Address: 0x0814658c
 * Size: 175 instructions */
void GetAllBaseResistances(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetAllBaseResistances__FP9lua_State
 * Address: 0x081467a8
 * Size: 243 instructions */
void SetAllBaseResistances(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseColdResistance__FP9lua_State
 * Address: 0x08146aa4
 * Size: 75 instructions */
void GetBaseColdResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseColdResistance__FP9lua_State
 * Address: 0x08146b8c
 * Size: 116 instructions */
void SetBaseColdResistance(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - CalculateCurrentColdResistance() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseFireResistance__FP9lua_State
 * Address: 0x08146cf8
 * Size: 75 instructions */
void GetBaseFireResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseFireResistance__FP9lua_State
 * Address: 0x08146ddc
 * Size: 116 instructions */
void SetBaseFireResistance(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - CalculateCurrentFireResistance() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseLightningResistance__FP9lua_State
 * Address: 0x08146f48
 * Size: 75 instructions */
void GetBaseLightningResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseLightningResistance__FP9lua_State
 * Address: 0x0814702c
 * Size: 116 instructions */
void SetBaseLightningResistance(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - CalculateCurrentLightningResistance() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBasePhysicalResistance__FP9lua_State
 * Address: 0x08147198
 * Size: 75 instructions */
void GetBasePhysicalResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBasePhysicalResistance__FP9lua_State
 * Address: 0x0814727c
 * Size: 116 instructions */
void SetBasePhysicalResistance(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - CalculateCurrentPhysicalResistance() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBasePoisonResistance__FP9lua_State
 * Address: 0x081473e8
 * Size: 75 instructions */
void GetBasePoisonResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBasePoisonResistance__FP9lua_State
 * Address: 0x081474cc
 * Size: 116 instructions */
void SetBasePoisonResistance(void) {
    /* Stack: 88 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - CalculateCurrentPoisonResistance() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SetPrestige__FP9lua_State
 * Address: 0x08147638
 * Size: 110 instructions */
void SetPrestige(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPrestige__FP9lua_State
 * Address: 0x08147794
 * Size: 69 instructions */
void GetPrestige(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentColdDamage__FP9lua_State
 * Address: 0x08147868
 * Size: 294 instructions */
void GetCurrentColdDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentColdResistance__FP9lua_State
 * Address: 0x08147c24
 * Size: 66 instructions */
void GetCurrentColdResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentColdResistance() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentFireDamage__FP9lua_State
 * Address: 0x08147ce4
 * Size: 281 instructions */
void GetCurrentFireDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentFireResistance__FP9lua_State
 * Address: 0x08148074
 * Size: 66 instructions */
void GetCurrentFireResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentFireResistance() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentLightningDamage__FP9lua_State
 * Address: 0x08148134
 * Size: 281 instructions */
void GetCurrentLightningDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentLightningResistance__FP9lua_State
 * Address: 0x081484c4
 * Size: 66 instructions */
void GetCurrentLightningResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentLightningResistance() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentPhysicalDamage__FP9lua_State
 * Address: 0x08148584
 * Size: 275 instructions */
void GetCurrentPhysicalDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentPhysicalResistance__FP9lua_State
 * Address: 0x08148904
 * Size: 66 instructions */
void GetCurrentPhysicalResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentPhysicalResistance() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentPoisonDamage__FP9lua_State
 * Address: 0x081489c4
 * Size: 281 instructions */
void GetCurrentPoisonDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentPoisonResistance__FP9lua_State
 * Address: 0x08148d54
 * Size: 66 instructions */
void GetCurrentPoisonResistance(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentPoisonResistance() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentUnarmedDamage__FUlPiT1P9lua_State
 * Address: 0x08148e14
 * Size: 127 instructions */
void CalculateCurrentUnarmedDamage(void) {
    /* Stack: 64 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentUnarmedDamage__FP9lua_State
 * Address: 0x08148fa0
 * Size: 85 instructions */
void GetCurrentUnarmedDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentUnarmedDamage() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBaseUnarmedDamage__FP9lua_State
 * Address: 0x08149094
 * Size: 88 instructions */
void GetBaseUnarmedDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBaseUnarmedDamage__FP9lua_State
 * Address: 0x081491a4
 * Size: 120 instructions */
void SetBaseUnarmedDamage(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_type() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllCurrentResistances__FP9lua_State
 * Address: 0x0814931c
 * Size: 163 instructions */
void GetAllCurrentResistances(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetAllCurrentResistances_F() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllCurrentResistances_F__FUlPsP9lua_State
 * Address: 0x08149504
 * Size: 520 instructions */
void GetAllCurrentResistances_F(void) {
    /* Stack: 64 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - AIGetByCharID() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentAttackRating__FP9lua_State
 * Address: 0x08149bfc
 * Size: 65 instructions */
void GetCurrentAttackRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentAttackRating() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentDefenseRating__FP9lua_State
 * Address: 0x08149cb4
 * Size: 66 instructions */
void GetCurrentDefenseRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CalculateCurrentDefenseRating() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMovementMode__FP9lua_State
 * Address: 0x08149d74
 * Size: 132 instructions */
void GetMovementMode(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: SetMovementMode__FP9lua_State
 * Address: 0x08149f1c
 * Size: 166 instructions */
void SetMovementMode(void) {
    /* Stack: 80 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentAttackRating__FUlP13_AttribValuesP9lua_State
 * Address: 0x0814a130
 * Size: 441 instructions */
void CalculateCurrentAttackRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - ceil@plt() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentDefenseRating__FUlP13_AttribValuesP9lua_State
 * Address: 0x0814a6f8
 * Size: 449 instructions */
void CalculateCurrentDefenseRating(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - ceil@plt() */
    /* - Unlock() */
    /* - lua_pushnil() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentPhysicalResistance__FUlPsP9lua_State
 * Address: 0x0814acd8
 * Size: 363 instructions */
void CalculateCurrentPhysicalResistance(void) {
    /* Stack: 140 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentFireResistance__FUlPsP9lua_State
 * Address: 0x0814b158
 * Size: 362 instructions */
void CalculateCurrentFireResistance(void) {
    /* Stack: 140 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentColdResistance__FUlPsP9lua_State
 * Address: 0x0814b5d8
 * Size: 363 instructions */
void CalculateCurrentColdResistance(void) {
    /* Stack: 140 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentPoisonResistance__FUlPsP9lua_State
 * Address: 0x0814ba58
 * Size: 363 instructions */
void CalculateCurrentPoisonResistance(void) {
    /* Stack: 140 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: CalculateCurrentLightningResistance__FUlPsP9lua_State
 * Address: 0x0814bed8
 * Size: 315 instructions */
void CalculateCurrentLightningResistance(void) {
    /* Stack: 92 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - AIGetByCharID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentBaseDamage__FP9lua_State
 * Address: 0x0814c2d4
 * Size: 108 instructions */
void GetCurrentBaseDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - CalculateCurrentStrength() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetTitle__FP9lua_State
 * Address: 0x0814c418
 * Size: 199 instructions */
void SetTitle(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTitle__FP9lua_State
 * Address: 0x0814c684
 * Size: 157 instructions */
void GetTitle(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrentDirectDamage__FP9lua_State
 * Address: 0x0814c864
 * Size: 255 instructions */
void GetCurrentDirectDamage(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - IDXTRANS() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0814cc06
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetSkillPoints__FP9lua_State
 * Address: 0x0814cc10
 * Size: 70 instructions */
void GetSkillPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSkillPoints__FP9lua_State
 * Address: 0x0814cce8
 * Size: 111 instructions */
void SetSkillPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSkillRank__FP9lua_State
 * Address: 0x0814ce44
 * Size: 124 instructions */
void GetSkillRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSkillRank__FP9lua_State
 * Address: 0x0814cfd4
 * Size: 283 instructions */
void SetSkillRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: AddSkillRank__FP9lua_State
 * Address: 0x0814d38c
 * Size: 286 instructions */
void AddSkillRank(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllSkillRanks__FP9lua_State
 * Address: 0x0814d734
 * Size: 140 instructions */
void GetAllSkillRanks(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllSkills__FP9lua_State
 * Address: 0x0814d8f4
 * Size: 136 instructions */
void GetAllSkills(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSkillData__FP9lua_State
 * Address: 0x0814daa4
 * Size: 89 instructions */
void GetSkillData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetRecipe__FP9lua_State
 * Address: 0x0814dbb4
 * Size: 234 instructions */
void GetRecipe(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - crc32_calc() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetSprintSpeed__FP9lua_State
 * Address: 0x0814dea8
 * Size: 76 instructions */
void SetSprintSpeed(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: SendSkills__FP9lua_State
 * Address: 0x0814df8c
 * Size: 155 instructions */
void SendSkills(void) {
    /* Stack: 144 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - memset@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendResuscitateOffer__FP9lua_State
 * Address: 0x0814e180
 * Size: 73 instructions */
void SendResuscitateOffer(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGuardOffer__FP9lua_State
 * Address: 0x0814e264
 * Size: 360 instructions */
void SendGuardOffer(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_tonumber() */
    /* - lua_settop() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendGuardRange__FP9lua_State
 * Address: 0x0814e6b4
 * Size: 93 instructions */
void SendGuardRange(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendSkillCooldown__FP9lua_State
 * Address: 0x0814e7d4
 * Size: 92 instructions */
void SendSkillCooldown(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0814e93e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Echo__FP9lua_State
 * Address: 0x0814e940
 * Size: 47 instructions */
void Echo(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendWorldController() */
    /* TODO: Implement from disassembly */
}

/* Function: ALog__FP9lua_State
 * Address: 0x0814e9c8
 * Size: 625 instructions */
void ALog(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - lua_isstring() */
    /* - lua_tostring() */
    /* - time@plt() */
    /* - sprintf@plt() */
    /* - lua_isnumber() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Log__FP9lua_State
 * Address: 0x0814f214
 * Size: 290 instructions */
void Log(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_isstring() */
    /* - lua_tostring() */
    /* - sprintf@plt() */
    /* - lua_isnumber() */
    /* - lua_tonumber() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: SetReturnValue__FP9lua_State
 * Address: 0x0814f59c
 * Size: 114 instructions */
void SetReturnValue(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_type() */
    /* - luaL_getn() */
    /* - lua_pushnumber() */
    /* - lua_gettable() */
    /* - lua_tonumber() */
    /* - lua_remove() */
    /* TODO: Implement from disassembly */
}

/* Function: Random__Fii
 * Address: 0x0814f6f4
 * Size: 30 instructions */
void Random(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - rand@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SendToAllFunc__FUlUsPvUsP9lua_Statef
 * Address: 0x0814f748
 * Size: 370 instructions */
void SendToAllFunc(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Lock() */
    /* - PutEvent() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - FindObject() */
    /* TODO: Implement from disassembly */
}

/* Function: wstrncpy__FPUsT0i
 * Address: 0x0814fc20
 * Size: 30 instructions */
void wstrncpy(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SendToAllU_F__FUlUsPvUsP9lua_Statef
 * Address: 0x0814fc6c
 * Size: 342 instructions */
void SendToAllU_F(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Lock() */
    /* - PutEvent() */
    /* - Unlock() */
    /* - IDXTRANS() */
    /* - FindObject() */
    /* TODO: Implement from disassembly */
}

/* Function: AddEvent__FP9lua_State
 * Address: 0x081500e0
 * Size: 26 instructions */
void AddEvent(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveEvent__FP9lua_State
 * Address: 0x08150124
 * Size: 8 instructions */
void RemoveEvent(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ReloadEvents__FP9lua_State
 * Address: 0x08150134
 * Size: 68 instructions */
void ReloadEvents(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendWorld() */
    /* - ReloadEvents() */
    /* TODO: Implement from disassembly */
}

/* Function: CreateEvent__FP9lua_State
 * Address: 0x081501f4
 * Size: 222 instructions */
void CreateEvent(void) {
    /* Stack: 152 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_type() */
    /* - lua_gettable() */
    /* - lua_tonumber() */
    /* - lua_settop() */
    /* - Lock() */
    /* - memset@plt() */
    /* - CreateEvent() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteEvent__FP9lua_State
 * Address: 0x081504d4
 * Size: 65 instructions */
void DeleteEvent(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - DeleteEvent() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: ActivateEvent__FP9lua_State
 * Address: 0x08150594
 * Size: 53 instructions */
void ActivateEvent(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: DeactivateEvent__FP9lua_State
 * Address: 0x08150624
 * Size: 53 instructions */
void DeactivateEvent(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: UpdateCharacter__FP9lua_State
 * Address: 0x081506b4
 * Size: 562 instructions */
void UpdateCharacter(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Lock() */
    /* - Unlock() */
    /* - SendToAllFunc() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: PurgeMemory__FP9lua_State
 * Address: 0x08150e6c
 * Size: 110 instructions */
void PurgeMemory(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Purge() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCharIDFromHash__FUlP9lua_State
 * Address: 0x08150fb4
 * Size: 31 instructions */
void GetCharIDFromHash(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckBits__FP9lua_State
 * Address: 0x08151004
 * Size: 82 instructions */
void CheckBits(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetBits__FP9lua_State
 * Address: 0x081510f4
 * Size: 135 instructions */
void SetBits(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckSettings__FP9lua_State
 * Address: 0x08151288
 * Size: 132 instructions */
void CheckSettings(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - lua_tonumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ValidateCredit__FP9lua_State
 * Address: 0x08151424
 * Size: 38 instructions */
void ValidateCredit(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendCharLog_F__FP9lua_StateUliPUl
 * Address: 0x08151484
 * Size: 62 instructions */
void SendCharLog_F(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - IsValid() */
    /* - memset@plt() */
    /* - CharLog() */
    /* TODO: Implement from disassembly */
}

/* Function: SendCharLog__FP9lua_State
 * Address: 0x0815153c
 * Size: 126 instructions */
void SendCharLog(void) {
    /* Stack: 96 bytes */
    /* Calls: */
    /* - IsValid() */
    /* - lua_pushnil() */
    /* - lua_gettop() */
    /* - memset@plt() */
    /* - lua_tonumber() */
    /* - CharLog() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ResetEventSvc__FP9lua_State
 * Address: 0x081516b8
 * Size: 45 instructions */
void ResetEventSvc(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_tonumber() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNoticeBoard__FP9lua_State
 * Address: 0x08151738
 * Size: 117 instructions */
void GetNoticeBoard(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - lua_newtable() */
    /* - printf@plt() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNoticeBoardDetail__FP9lua_State
 * Address: 0x081518a4
 * Size: 1187 instructions */
void GetNoticeBoardDetail(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x081526a6
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: CreateWarEvent__FP9lua_State
 * Address: 0x081526b0
 * Size: 936 instructions */
void CreateWarEvent(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_tonumber() */
    /* - lua_settop() */
    /* - lua_type() */
    /* - BookFreeZone_F() */
    /* - GenerateUniqueID() */
    /* - CreateElements() */
    /* - Unlock() */
    /* - Delete() */
    /* - PurgeWarEvent_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWarEventData__FP9lua_State
 * Address: 0x081531ec
 * Size: 510 instructions */
void GetWarEventData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - time@plt() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - ceil@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckWarEvent__FP9lua_State
 * Address: 0x081537f8
 * Size: 354 instructions */
void CheckWarEvent(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_tonumber() */
    /* - lua_settop() */
    /* - time@plt() */
    /* - lua_newtable() */
    /* - CheckClanEvents_F() */
    /* - CheckCharEvents_F() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckClanEvents_F__FUllP25_FW_DATA_RELATION_WARLISTRiUcP10_UsedWarIDP9lua_State
 * Address: 0x08153cbc
 * Size: 804 instructions */
void CheckClanEvents_F(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - CheckUsed_F() */
    /* - Unlock() */
    /* - Delete() */
    /* - PurgeWarEvent_F() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - AddUsed_F() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckCharEvents_F__FUllP25_FW_DATA_RELATION_WARLISTRiUcP10_UsedWarIDP9lua_State
 * Address: 0x08154688
 * Size: 800 instructions */
void CheckCharEvents_F(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - CheckUsed_F() */
    /* - Unlock() */
    /* - Delete() */
    /* - PurgeWarEvent_F() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - AddUsed_F() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckUsed_F__FUlP10_UsedWarID
 * Address: 0x08155048
 * Size: 34 instructions */
void CheckUsed_F(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: AddUsed_F__FUlP10_UsedWarID
 * Address: 0x081550ac
 * Size: 34 instructions */
void AddUsed_F(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: SetWarScratchData__FP9lua_State
 * Address: 0x08155118
 * Size: 326 instructions */
void SetWarScratchData(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWarScratchData__FP9lua_State
 * Address: 0x08155518
 * Size: 243 instructions */
void GetWarScratchData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetValidGuilds__FP9lua_State
 * Address: 0x081557f4
 * Size: 185 instructions */
void GetValidGuilds(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: GetValidClans__FP9lua_State
 * Address: 0x08155a3c
 * Size: 197 instructions */
void GetValidClans(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: SendWarID__FP9lua_State
 * Address: 0x08155cb4
 * Size: 236 instructions */
void SendWarID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_tonumber() */
    /* - lua_settop() */
    /* - lua_type() */
    /* - lua_pushnumber() */
    /* - PutEvent() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWarState__FP9lua_State
 * Address: 0x08155f7c
 * Size: 72 instructions */
void GetWarState(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetWarEventState__FP9lua_State
 * Address: 0x08156054
 * Size: 328 instructions */
void SetWarEventState(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - time@plt() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - PurgeWarEvent_F() */
    /* - lua_pushnumber() */
    /* - CreateElements() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetWarEventID__FP9lua_State
 * Address: 0x081564b4
 * Size: 95 instructions */
void SetWarEventID(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWarEventID__FP9lua_State
 * Address: 0x081565d8
 * Size: 75 instructions */
void GetWarEventID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetHeroPoints__FP9lua_State
 * Address: 0x081566b8
 * Size: 118 instructions */
void SetHeroPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetHeroPoints__FP9lua_State
 * Address: 0x08156828
 * Size: 75 instructions */
void GetHeroPoints(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTypeOfScene__FP9lua_State
 * Address: 0x08156908
 * Size: 61 instructions */
void GetTypeOfScene(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetTypeOfScene_F() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: TeleportToWar__FP9lua_State
 * Address: 0x081569b4
 * Size: 314 instructions */
void TeleportToWar(void) {
    /* Stack: 360 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - rand@plt() */
    /* - Unlock() */
    /* - SendSysMsg() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetOldEvents__FP9lua_State
 * Address: 0x08156e04
 * Size: 225 instructions */
void GetOldEvents(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - lua_newtable() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: SetWarTokens__FP9lua_State
 * Address: 0x081570dc
 * Size: 216 instructions */
void SetWarTokens(void) {
    /* Stack: 84 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Delete() */
    /* - SendWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWarTokens__FP9lua_State
 * Address: 0x08157378
 * Size: 155 instructions */
void GetWarTokens(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: BookFreeZone_F__FUlPUliP9lua_State
 * Address: 0x08157544
 * Size: 169 instructions */
void BookFreeZone_F(void) {
    /* Stack: 112 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - localtime_r@plt() */
    /* - mktime@plt() */
    /* - Lock() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTypeOfScene_F__FUlP9lua_State
 * Address: 0x08157748
 * Size: 30 instructions */
void GetTypeOfScene_F(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - Lock() */
    /* TODO: Implement from disassembly */
}

/* Function: PurgeWarEvent_F__FUlP9lua_State
 * Address: 0x08157794
 * Size: 224 instructions */
void PurgeWarEvent_F(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - SendWorld() */
    /* - Lock() */
    /* - Purge() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanWarData__FP9lua_State
 * Address: 0x08157a34
 * Size: 597 instructions */
void GetClanWarData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - time@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanWarStatus__FP9lua_State
 * Address: 0x08158144
 * Size: 109 instructions */
void GetClanWarStatus(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanWar__FP9lua_State
 * Address: 0x08158294
 * Size: 1027 instructions */
void SetClanWar(void) {
    /* Stack: 96 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_tonumber() */
    /* - lua_settop() */
    /* - Lock() */
    /* - Unlock() */
    /* - time@plt() */
    /* - Delete() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: GetClanScratchData__FP9lua_State
 * Address: 0x08158ea8
 * Size: 169 instructions */
void GetClanScratchData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetClanScratchData__FP9lua_State
 * Address: 0x081590a4
 * Size: 209 instructions */
void SetClanScratchData(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetUpgradeData__FP9lua_State
 * Address: 0x08159338
 * Size: 244 instructions */
void GetUpgradeData(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SendClanUpgrade__FP9lua_State
 * Address: 0x08159614
 * Size: 276 instructions */
void SendClanUpgrade(void) {
    /* Stack: 576 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - memset@plt() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - sprintf@plt() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: UpdateArenaScore__FP9lua_State
 * Address: 0x08159a4c
 * Size: 203 instructions */
void UpdateArenaScore(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SendArenaScore__FP9lua_State
 * Address: 0x08159cb8
 * Size: 155 instructions */
void SendArenaScore(void) {
    /* Stack: 148 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - PutEvent() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetAllWarEvents__FP9lua_State
 * Address: 0x08159eac
 * Size: 136 instructions */
void GetAllWarEvents(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: LogWarAction__FP9lua_State
 * Address: 0x0815a044
 * Size: 188 instructions */
void LogWarAction(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - time@plt() */
    /* - CreateElements() */
    /* - lua_tonumber() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CreateWarScore__FP9lua_State
 * Address: 0x0815a298
 * Size: 118 instructions */
void CreateWarScore(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - time@plt() */
    /* - printf@plt() */
    /* - CreateElements() */
    /* - lua_tonumber() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetWarScore__FP9lua_State
 * Address: 0x0815a404
 * Size: 946 instructions */
void GetWarScore(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: SetWarScore__FP9lua_State
 * Address: 0x0815af64
 * Size: 1626 instructions */
void SetWarScore(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnumber() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - lua_pushstring() */
    /* - lua_gettable() */
    /* - lua_type() */
    /* - lua_settop() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: AddExHeroPoints__FP9lua_State
 * Address: 0x0815c26c
 * Size: 119 instructions */
void AddExHeroPoints(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0815c426
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ConfirmZone__FP9lua_State
 * Address: 0x0815c430
 * Size: 232 instructions */
void ConfirmZone(void) {
    /* Stack: 72 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: CancelZone__FP9lua_State
 * Address: 0x0815c704
 * Size: 21 instructions */
void CancelZone(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSceneLabels__FP9lua_State
 * Address: 0x0815c744
 * Size: 138 instructions */
void GetSceneLabels(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - lua_pushstring() */
    /* TODO: Implement from disassembly */
}

/* Function: SetValidScenes__FP9lua_State
 * Address: 0x0815c8e8
 * Size: 260 instructions */
void SetValidScenes(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_tonumber() */
    /* - luaL_getn() */
    /* - lua_pushnil() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* - lua_gettable() */
    /* - lua_settop() */
    /* - SendSysMsg() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckZonePop__FP9lua_State
 * Address: 0x0815ccf4
 * Size: 92 instructions */
void CheckZonePop(void) {
    /* Stack: 40 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - CheckSceneLocal() */
    /* - lua_pushnumber() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: GetScenePop__FP9lua_State
 * Address: 0x0815ce04
 * Size: 98 instructions */
void GetScenePop(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - FindScene() */
    /* - Lock() */
    /* - GetPCObject() */
    /* - GetCount() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* - GetNumPlayersInScene() */
    /* TODO: Implement from disassembly */
}

/* Function: GetScenesInMap__FP9lua_State
 * Address: 0x0815cf1c
 * Size: 137 instructions */
void GetScenesInMap(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetScenes__FP9lua_State
 * Address: 0x0815d0d8
 * Size: 396 instructions */
void GetScenes(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_newtable() */
    /* - sprintf@plt() */
    /* - lua_pushstring() */
    /* - lua_pushnumber() */
    /* - lua_settable() */
    /* TODO: Implement from disassembly */
}

/* Function: RandomSceneCoord__FP9lua_State
 * Address: 0x0815d5e8
 * Size: 293 instructions */
void RandomSceneCoord(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - rand@plt() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSceneID__FP9lua_State
 * Address: 0x0815d9ac
 * Size: 135 instructions */
void GetSceneID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - IDXTRANS() */
    /* - GetSceneID() */
    /* TODO: Implement from disassembly */
}

/* Function: GetBindSceneID__FP9lua_State
 * Address: 0x0815db48
 * Size: 83 instructions */
void GetBindSceneID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetZoneFlag__FP9lua_State
 * Address: 0x0815dc44
 * Size: 76 instructions */
void GetZoneFlag(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: SetZoneFlag__FP9lua_State
 * Address: 0x0815dd34
 * Size: 92 instructions */
void SetZoneFlag(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsInSameScene__FP9lua_State
 * Address: 0x0815de54
 * Size: 137 instructions */
void IsInSameScene(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - Lock() */
    /* - FindObject() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: RespawnPlayer__FP9lua_State
 * Address: 0x0815dff4
 * Size: 182 instructions */
void RespawnPlayer(void) {
    /* Stack: 344 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - CheckSceneLocal() */
    /* - SendSysMsg() */
    /* - lua_pushnumber() */
    /* - SendWorld() */
    /* TODO: Implement from disassembly */
}

/* Function: BindPlayer__FP9lua_State
 * Address: 0x0815e264
 * Size: 100 instructions */
void BindPlayer(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - GetSceneID() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsRespawning__FP9lua_State
 * Address: 0x0815e394
 * Size: 93 instructions */
void IsRespawning(void) {
    /* Stack: 56 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* - Unlock() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLastLabel__FP9lua_State
 * Address: 0x0815e4b4
 * Size: 59 instructions */
void GetLastLabel(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - Lock() */
    /* - lua_pushnil() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: IsStuck__FP9lua_State
 * Address: 0x0815e564
 * Size: 111 instructions */
void IsStuck(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Lock() */
    /* - Unlock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: UnStick__FP9lua_State
 * Address: 0x0815e6b8
 * Size: 251 instructions */
void UnStick(void) {
    /* Stack: 376 bytes */
    /* Calls: */
    /* - () */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - FindObject() */
    /* - GetSceneID() */
    /* - Lock() */
    /* - GetTranslation() */
    /* - SendSysMsg() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GMTeleport__FP9lua_State
 * Address: 0x0815ea18
 * Size: 208 instructions */
void GMTeleport(void) {
    /* Stack: 344 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendSysMsg() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: ReZonePlayer__FP9lua_State
 * Address: 0x0815ed24
 * Size: 211 instructions */
void ReZonePlayer(void) {
    /* Stack: 344 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - Unlock() */
    /* - SendSysMsg() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: FindPlayer__FP9lua_State
 * Address: 0x0815f024
 * Size: 79 instructions */
void FindPlayer(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetCharIDFromHash() */
    /* - FindPlayerInWorld() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLastSceneID__FP9lua_State
 * Address: 0x0815f108
 * Size: 74 instructions */
void GetLastSceneID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - Lock() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSceneScriptID__FP9lua_State
 * Address: 0x0815f1e4
 * Size: 62 instructions */
void GetSceneScriptID(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - lua_gettop() */
    /* - lua_pushnil() */
    /* - lua_tonumber() */
    /* - GetScriptID() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: FindStarter__FP9lua_State
 * Address: 0x0815f294
 * Size: 39 instructions */
void FindStarter(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - FindStart() */
    /* - lua_pushnil() */
    /* - lua_pushnumber() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0815f356
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __9CDBAccess
 * Address: 0x0815f360
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._9CDBAccess
 * Address: 0x0815f378
 * Size: 22 instructions */
void _._9CDBAccess(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - mysql_close@plt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Init__9CDBAccessPcN31
 * Address: 0x0815f3ac
 * Size: 63 instructions */
void Init(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - mysql_init@plt() */
    /* - mysql_real_connect@plt() */
    /* - strcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetInitParams__9CDBAccessPcN31
 * Address: 0x0815f458
 * Size: 43 instructions */
void SetInitParams(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - mysql_init@plt() */
    /* - strcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReConnect__9CDBAccess
 * Address: 0x0815f4d0
 * Size: 52 instructions */
void ReConnect(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - mysql_free_result@plt() */
    /* - mysql_close@plt() */
    /* - mysql_init@plt() */
    /* - printf@plt() */
    /* - mysql_real_connect@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Disconnect__9CDBAccess
 * Address: 0x0815f56c
 * Size: 21 instructions */
void Disconnect(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - mysql_free_result@plt() */
    /* - mysql_close@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SQLQuery__9CDBAccessPce
 * Address: 0x0815f5ac
 * Size: 132 instructions */
void SQLQuery(void) {
    /* Stack: 100 bytes */
    /* Calls: */
    /* - mysql_free_result@plt() */
    /* - vsnprintf@plt() */
    /* - strlen@plt() */
    /* - mysql_real_query@plt() */
    /* - mysql_errno@plt() */
    /* - mysql_error@plt() */
    /* - sprintf@plt() */
    /* - ReConnect() */
    /* - () */
    /* - mysql_affected_rows@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FetchNextRow__9CDBAccess
 * Address: 0x0815f74c
 * Size: 66 instructions */
void FetchNextRow(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - mysql_store_result@plt() */
    /* - mysql_num_rows@plt() */
    /* - mysql_fetch_row@plt() */
    /* - mysql_free_result@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FetchNextRow__9CDBAccessPce
 * Address: 0x0815f834
 * Size: 368 instructions */
void FetchNextRow(void) {
    /* Stack: 108 bytes */
    /* Calls: */
    /* - mysql_store_result@plt() */
    /* - mysql_num_rows@plt() */
    /* - mysql_fetch_row@plt() */
    /* - mysql_free_result@plt() */
    /* - strcpy@plt() */
    /* - atoi@plt() */
    /* - strtoul@plt() */
    /* - atof@plt() */
    /* - strtod@plt() */
    /* - mysql_fetch_lengths@plt() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetLastInsertID__9CDBAccess
 * Address: 0x0815fce8
 * Size: 25 instructions */
void GetLastInsertID(void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - mysql_insert_id@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: BlobUpdate__9CDBAccessP8_BlobDef
 * Address: 0x0815fd18
 * Size: 162 instructions */
void BlobUpdate(void) {
    /* Stack: 188 bytes */
    /* Calls: */
    /* - sprintf@plt() */
    /* - mysql_real_escape_string@plt() */
    /* - strmov() */
    /* - printf@plt() */
    /* - mysql_real_query@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: BlobRead__9CDBAccessP8_BlobDef
 * Address: 0x0815ff14
 * Size: 129 instructions */
void BlobRead(void) {
    /* Stack: 180 bytes */
    /* Calls: */
    /* - sprintf@plt() */
    /* - strlen@plt() */
    /* - mysql_real_query@plt() */
    /* - mysql_errno@plt() */
    /* - ReConnect() */
    /* - mysql_store_result@plt() */
    /* - mysql_fetch_row@plt() */
    /* - mysql_fetch_lengths@plt() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: BlobInsert__9CDBAccessP8_BlobDef
 * Address: 0x081600b8
 * Size: 150 instructions */
void BlobInsert(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - sprintf@plt() */
    /* - strmov() */
    /* - mysql_real_escape_string@plt() */
    /* - mysql_real_query@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: strmov__FPcPCc
 * Address: 0x08160268
 * Size: 33 instructions */
void strmov(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x081602a8
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __4CLog
 * Address: 0x081602b0
 * Size: 13 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._4CLog
 * Address: 0x081602e0
 * Size: 34 instructions */
void _._4CLog(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: SetLogFile__4CLogPc
 * Address: 0x08160338
 * Size: 16 instructions */
void SetLogFile(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - strcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetProgName__4CLogPci
 * Address: 0x08160360
 * Size: 18 instructions */
void SetProgName(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - openlog@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RegisterModule__4CLogiPc
 * Address: 0x08160388
 * Size: 47 instructions */
void RegisterModule(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - strncpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetFlags__4CLogiUi
 * Address: 0x0816040c
 * Size: 31 instructions */
void SetFlags(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SetPriorityLevel__4CLogi
 * Address: 0x0816045c
 * Size: 8 instructions */
void SetPriorityLevel(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetOutput__4CLogi
 * Address: 0x0816046c
 * Size: 8 instructions */
void SetOutput(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Log__4CLogiPcT2
 * Address: 0x0816047c
 * Size: 179 instructions */
void Log(void) {
    /* Stack: 1052 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - ctime_r@plt() */
    /* - strlen@plt() */
    /* - printf@plt() */
    /* - syslog@plt() */
    /* - fopen@plt() */
    /* - fprintf@plt() */
    /* - fclose@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Log__4CLogPUs
 * Address: 0x081606ac
 * Size: 143 instructions */
void Log(void) {
    /* Stack: 3132 bytes */
    /* Calls: */
    /* - time@plt() */
    /* - ctime_r@plt() */
    /* - fopen@plt() */
    /* - fwrite@plt() */
    /* - fclose@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Log__10CLogFilteriPce
 * Address: 0x081608dc
 * Size: 35 instructions */
void Log(void) {
    /* Stack: 1044 bytes */
    /* Calls: */
    /* - vsnprintf@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Log__10CLogFilterPce
 * Address: 0x08160940
 * Size: 31 instructions */
void Log(void) {
    /* Stack: 1044 bytes */
    /* Calls: */
    /* - vsnprintf@plt() */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: Log__10CLogFilterPUs
 * Address: 0x0816099c
 * Size: 19 instructions */
void Log(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Log() */
    /* TODO: Implement from disassembly */
}

/* Function: LogFilename__10CLogFilter
 * Address: 0x081609c8
 * Size: 13 instructions */
void LogFilename(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x081609e2
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __7CRcvPkt
 * Address: 0x081609f0
 * Size: 42 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* - AllocDropList() */
    /* - FlushQueues() */
    /* TODO: Implement from disassembly */
}

/* Function: __7CRcvPktUl
 * Address: 0x08160a6c
 * Size: 61 instructions */
void (void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* - AllocDropList() */
    /* - FlushQueues() */
    /* TODO: Implement from disassembly */
}

/* Function: _._7CRcvPkt
 * Address: 0x08160b10
 * Size: 48 instructions */
void _._7CRcvPkt(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: QueuePacket__7CRcvPkti
 * Address: 0x08160b90
 * Size: 160 instructions */
void QueuePacket(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LocateFree() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNetObject__7CRcvPktP10_NetObject
 * Address: 0x08160d98
 * Size: 177 instructions */
void GetNetObject(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - GetNextPacket() */
    /* - () */
    /* - memcpy@plt() */
    /* - FreePacket() */
    /* TODO: Implement from disassembly */
}

/* Function: FlushQueues__7CRcvPkt
 * Address: 0x08160f98
 * Size: 119 instructions */
void FlushQueues(void) {
    /* Stack: 16 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: LocateFree__7CRcvPkt
 * Address: 0x08161128
 * Size: 25 instructions */
void LocateFree(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: GetNextPacket__7CRcvPkt
 * Address: 0x0816116c
 * Size: 65 instructions */
void GetNextPacket(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: FreePacket__7CRcvPktP11PacketRInfo
 * Address: 0x0816123c
 * Size: 38 instructions */
void FreePacket(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AllocDropList__7CRcvPkt
 * Address: 0x081612b8
 * Size: 45 instructions */
void AllocDropList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0816133b
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __7CSndPkt
 * Address: 0x08161340
 * Size: 74 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - () */
    /* - FlushQueues() */
    /* TODO: Implement from disassembly */
}

/* Function: __7CSndPktUl
 * Address: 0x0816143c
 * Size: 92 instructions */
void (void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* - () */
    /* - FlushQueues() */
    /* TODO: Implement from disassembly */
}

/* Function: _._7CSndPkt
 * Address: 0x0816155c
 * Size: 45 instructions */
void _._7CSndPkt(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: AddNetObject__7CSndPktP10_NetObjectUc
 * Address: 0x081615d0
 * Size: 100 instructions */
void AddNetObject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - AddNewPacket() */
    /* - LocatePacket() */
    /* - InsertPackets() */
    /* - AddObjectHeader() */
    /* - AddObjectData() */
    /* TODO: Implement from disassembly */
}

/* Function: FlushQueues__7CSndPkt
 * Address: 0x081616e0
 * Size: 77 instructions */
void FlushQueues(void) {
    /* Stack: 12 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: GetNextPacket__7CSndPkt
 * Address: 0x081617e8
 * Size: 9 instructions */
void GetNextPacket(void) {
    /* TODO: Implement from disassembly */
}

/* Function: DeletePacket__7CSndPktP11PacketSInfo
 * Address: 0x081617f8
 * Size: 54 instructions */
void DeletePacket(void) {
    /* TODO: Implement from disassembly */
}

/* Function: DeletePackets__7CSndPktPUc
 * Address: 0x081618bc
 * Size: 50 instructions */
void DeletePackets(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DeletePacket() */
    /* TODO: Implement from disassembly */
}

/* Function: DeletePacket__7CSndPktUc
 * Address: 0x08161940
 * Size: 37 instructions */
void DeletePacket(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - DeletePacket() */
    /* TODO: Implement from disassembly */
}

/* Function: RemovePacket__7CSndPktP11PacketSInfo
 * Address: 0x0816199c
 * Size: 69 instructions */
void RemovePacket(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - AddPacketToSent() */
    /* TODO: Implement from disassembly */
}

/* Function: AddSystemPacket__7CSndPktUcPvi
 * Address: 0x08161a84
 * Size: 279 instructions */
void AddSystemPacket(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LocateFree() */
    /* - memcpy@plt() */
    /* - GetUID() */
    /* - InsertPackets() */
    /* TODO: Implement from disassembly */
}

/* Function: AddAckPkt__7CSndPkt
 * Address: 0x08161dc8
 * Size: 68 instructions */
void AddAckPkt(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - LocateFree() */
    /* - InsertPackets() */
    /* TODO: Implement from disassembly */
}

/* Function: AddUID__7CSndPktUc
 * Address: 0x08161e88
 * Size: 37 instructions */
void AddUID(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: ReQueueSent__7CSndPkt
 * Address: 0x08161ee8
 * Size: 108 instructions */
void ReQueueSent(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* - InsertPackets() */
    /* TODO: Implement from disassembly */
}

/* Function: GetUID__7CSndPkt
 * Address: 0x08162058
 * Size: 32 instructions */
void GetUID(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SetPacketBreak__7CSndPkti
 * Address: 0x081620b4
 * Size: 10 instructions */
void SetPacketBreak(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddObjectData__7CSndPktP11PacketSInfoP10_NetObject
 * Address: 0x081620c8
 * Size: 40 instructions */
void AddObjectData(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AddObjectHeader__7CSndPktP11PacketSInfoP10_NetObject
 * Address: 0x08162128
 * Size: 46 instructions */
void AddObjectHeader(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: LocateFree__7CSndPkt
 * Address: 0x08162198
 * Size: 38 instructions */
void LocateFree(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: LocatePacket__7CSndPktiUc
 * Address: 0x08162208
 * Size: 50 instructions */
void LocatePacket(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: AddNewPacket__7CSndPktP10_NetObjectUc
 * Address: 0x08162288
 * Size: 59 instructions */
void AddNewPacket(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LocateFree() */
    /* - GetUID() */
    /* - AddObjectHeader() */
    /* - AddObjectData() */
    /* TODO: Implement from disassembly */
}

/* Function: InsertPackets__7CSndPktP11PacketSInfo
 * Address: 0x08162324
 * Size: 149 instructions */
void InsertPackets(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SetRetryInterval__7CSndPktUl
 * Address: 0x08162528
 * Size: 8 instructions */
void SetRetryInterval(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetLimit__7CSndPktUl
 * Address: 0x08162538
 * Size: 8 instructions */
void SetLimit(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddPacketToSent__7CSndPktP11PacketSInfo
 * Address: 0x08162550
 * Size: 40 instructions */
void AddPacketToSent(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - GetTickCount() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTickCount__Fv
 * Address: 0x081625d0
 * Size: 61 instructions */
void GetTickCount(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - gettimeofday@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: __7CMTimer
 * Address: 0x08162678
 * Size: 9 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetTickCount__7CMTimer
 * Address: 0x0816268c
 * Size: 64 instructions */
void GetTickCount(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - gettimeofday@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08162731
 * Size: 14 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __5CRC32
 * Address: 0x08162740
 * Size: 28 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - crc32_init() */
    /* TODO: Implement from disassembly */
}

/* Function: _._5CRC32
 * Address: 0x08162790
 * Size: 36 instructions */
void _._5CRC32(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: reflect__5CRC32Ulc
 * Address: 0x081627e8
 * Size: 36 instructions */
void reflect(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: crc32_init__5CRC32
 * Address: 0x0816284c
 * Size: 97 instructions */
void crc32_init(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - reflect() */
    /* TODO: Implement from disassembly */
}

/* Function: crc32_calc__5CRC32PUci
 * Address: 0x08162978
 * Size: 40 instructions */
void crc32_calc(void) {
    /* Stack: 16 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: calculate__5CRC32P8_IO_FILE
 * Address: 0x081629e0
 * Size: 57 instructions */
void calculate(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - rewind@plt() */
    /* - feof@plt() */
    /* - memset@plt() */
    /* - fread@plt() */
    /* - crc32_calc() */
    /* TODO: Implement from disassembly */
}

/* Function: get__5CRC32
 * Address: 0x08162a7c
 * Size: 8 instructions */
void get(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08162a8b
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __lzo_ptr_linear
 * Address: 0x08162a90
 * Size: 11 instructions */
void (void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __lzo_align_gap
 * Address: 0x08162aa8
 * Size: 31 instructions */
void (void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: lzo_assert
 * Address: 0x08162af4
 * Size: 10 instructions */
void lzo_assert(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lzo_copyright
 * Address: 0x08162b08
 * Size: 6 instructions */
void lzo_copyright(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lzo_version
 * Address: 0x08162b14
 * Size: 8 instructions */
void lzo_version(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lzo_version_string
 * Address: 0x08162b24
 * Size: 8 instructions */
void lzo_version_string(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lzo_version_date
 * Address: 0x08162b34
 * Size: 8 instructions */
void lzo_version_date(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _lzo_version_string
 * Address: 0x08162b44
 * Size: 8 instructions */
void _lzo_version_string(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _lzo_version_date
 * Address: 0x08162b54
 * Size: 8 instructions */
void _lzo_version_date(void) {
    /* TODO: Implement from disassembly */
}

/* Function: lzo_adler32
 * Address: 0x08162b64
 * Size: 198 instructions */
void lzo_adler32(void) {
    /* Stack: 36 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: lzo_memcmp
 * Address: 0x08162da8
 * Size: 20 instructions */
void lzo_memcmp(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memcmp@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: lzo_memcpy
 * Address: 0x08162dd4
 * Size: 18 instructions */
void lzo_memcpy(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: lzo_memmove
 * Address: 0x08162dfc
 * Size: 19 instructions */
void lzo_memmove(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memmove@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: lzo_memset
 * Address: 0x08162e24
 * Size: 18 instructions */
void lzo_memset(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: basic_integral_check
 * Address: 0x08162e4c
 * Size: 11 instructions */
void basic_integral_check(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: basic_ptr_check
 * Address: 0x08162e68
 * Size: 11 instructions */
void basic_ptr_check(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: ptr_check
 * Address: 0x08162e84
 * Size: 327 instructions */
void ptr_check(void) {
    /* Stack: 120 bytes */
    /* Calls: */
    /* - () */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: _lzo_config_check
 * Address: 0x08163238
 * Size: 203 instructions */
void _lzo_config_check(void) {
    /* Stack: 68 bytes */
    /* Calls: */
    /* - basic_integral_check() */
    /* - basic_ptr_check() */
    /* - schedule_insns_bug() */
    /* - strength_reduce_bug() */
    /* - ptr_check() */
    /* TODO: Implement from disassembly */
}

/* Function: schedule_insns_bug
 * Address: 0x081634b8
 * Size: 19 instructions */
void schedule_insns_bug(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: strength_reduce_bug
 * Address: 0x081634f4
 * Size: 23 instructions */
void strength_reduce_bug(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __lzo_init2
 * Address: 0x08163534
 * Size: 81 instructions */
void (void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - _lzo_config_check() */
    /* TODO: Implement from disassembly */
}

/* Function: _lzo1x_1_do_compress
 * Address: 0x0816361c
 * Size: 418 instructions */
void _lzo1x_1_do_compress(void) {
    /* Stack: 60 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: lzo1x_1_compress
 * Address: 0x08163ac8
 * Size: 132 instructions */
void lzo1x_1_compress(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - _lzo1x_1_do_compress() */
    /* TODO: Implement from disassembly */
}

/* Function: lzo1x_decompress
 * Address: 0x08163c2c
 * Size: 401 instructions */
void lzo1x_decompress(void) {
    /* Stack: 44 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: lzo1x_decompress_safe
 * Address: 0x08164008
 * Size: 522 instructions */
void lzo1x_decompress_safe(void) {
    /* Stack: 44 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __12CIndoorScene
 * Address: 0x08164550
 * Size: 119 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - Set() */
    /* - Resize() */
    /* - () */
    /* - _._t14CGEN_ArrayList1ZUl() */
    /* - _._6CScene() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._12CIndoorScene
 * Address: 0x081646ec
 * Size: 33 instructions */
void _._12CIndoorScene(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - _._t14CGEN_ArrayList1ZUl() */
    /* - _._6CScene() */
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__12CIndoorScene
 * Address: 0x0816474c
 * Size: 190 instructions */
void Destroy(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* - _._Q212CIndoorScene10tFaceTable() */
    /* - Destroy() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadSceneMemory__12CIndoorScenePUcUl
 * Address: 0x08164a00
 * Size: 239 instructions */
void LoadSceneMemory(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - ReadWayPointNetChunk() */
    /* - ReadPointChunk() */
    /* - ReadBrushChunk() */
    /* - ReadBoxChunk() */
    /* - ReadCollisionChunk() */
    /* - ReadModelChunk() */
    /* - ReadBoundingBoxChunk() */
    /* - OrganisedModel() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadBrushChunk__12CIndoorScenePUcUlUl
 * Address: 0x08164cc8
 * Size: 584 instructions */
void ReadBrushChunk(void) {
    /* Stack: 284 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - memset@plt() */
    /* - memcpy@plt() */
    /* - () */
    /* - DoCaching() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadCollisionChunk__12CIndoorScenePUcUlUl
 * Address: 0x08165584
 * Size: 435 instructions */
void ReadCollisionChunk(void) {
    /* Stack: 92 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - memset@plt() */
    /* - pthread_mutex_init@plt() */
    /* - SetDestroy() */
    /* - SetDestroy() */
    /* - SetDestroy() */
    /* - SetMaxFreeCount() */
    /* - memcpy@plt() */
    /* - _._Q212CIndoorScene10tFaceTable() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: FindGrid__12CIndoorSceneRC7CVectorRiT2
 * Address: 0x08165b80
 * Size: 68 instructions */
void FindGrid(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveObject__12CIndoorScenePQ29VKY_SCENE13tObjectHandleRC7CMatrix
 * Address: 0x08165c58
 * Size: 567 instructions */
void MoveObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - Delete() */
    /* - pthread_mutex_unlock@plt() */
    /* - AddTail() */
    /* TODO: Implement from disassembly */
}

/* Function: PlaceObject__12CIndoorScenePQ29VKY_SCENE13tObjectHandle
 * Address: 0x081663d8
 * Size: 257 instructions */
void PlaceObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - AddTail() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveObject__12CIndoorScenePQ29VKY_SCENE13tObjectHandle
 * Address: 0x0816674c
 * Size: 266 instructions */
void RemoveObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - Delete() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: AddPoint__12CIndoorScenePQ29VKY_SCENE6tPoint
 * Address: 0x08166ae8
 * Size: 214 instructions */
void AddPoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - AddTail() */
    /* TODO: Implement from disassembly */
}

/* Function: RemovePoint__12CIndoorScenePQ29VKY_SCENE6tPoint
 * Address: 0x08166dac
 * Size: 213 instructions */
void RemovePoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: AddCollisionBox__12CIndoorScenePQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816706c
 * Size: 239 instructions */
void AddCollisionBox(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - GetTranslation() */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - AddTail() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveCollisionBox__12CIndoorScenePQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816736c
 * Size: 245 instructions */
void RemoveCollisionBox(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - GetTranslation() */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNearestPoint__12CIndoorSceneRC7CVectorfPPQ29VKY_SCENE6tPointRi
 * Address: 0x08167680
 * Size: 298 instructions */
void GetNearestPoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetExactNearestObject__12CIndoorScenePQ29VKY_SCENE13tObjectHandlefPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x08167a68
 * Size: 27 instructions */
void GetExactNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetExactNearestObject() */
    /* TODO: Implement from disassembly */
}

/* Function: GetExactNearestObject__12CIndoorSceneRC7CVectorfPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x08167aa4
 * Size: 414 instructions */
void GetExactNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - () */
    /* - () */
    /* - pthread_mutex_unlock@plt() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSortedNearestObject__12CIndoorSceneRC7CVectorfPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x08167fe8
 * Size: 440 instructions */
void GetSortedNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - () */
    /* - () */
    /* - pthread_mutex_unlock@plt() */
    /* - GetNext() */
    /* - qsort@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNearestObject__12CIndoorSceneRC7CVectorfPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x08168588
 * Size: 387 instructions */
void GetNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - pthread_mutex_unlock@plt() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNearestObject__12CIndoorScenePQ29VKY_SCENE13tObjectHandlefPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x08168a88
 * Size: 387 instructions */
void GetNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - pthread_mutex_unlock@plt() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIntersectingBox__12CIndoorScenePQ29VKY_SCENE13tObjectHandleUl
 * Address: 0x08168f88
 * Size: 421 instructions */
void GetIntersectingBox(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - maths_AABOBBIntersect() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIntersectingBoxes__12CIndoorScenePQ29VKY_SCENE13tObjectHandleRt17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxUl
 * Address: 0x08169578
 * Size: 342 instructions */
void GetIntersectingBoxes(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - maths_AABOBBIntersect() */
    /* - AddTail() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveObject__12CIndoorScenePQ29VKY_SCENE13tObjectHandleRC7CVectori
 * Address: 0x08169a3c
 * Size: 7 instructions */
void MoveObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: MoveObject__12CIndoorSceneR7CMatrixRC7CVectorT2P18tVKY_CollisionInfoi
 * Address: 0x08169a48
 * Size: 1267 instructions */
void MoveObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - GetTranslation() */
    /* - () */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - Clear() */
    /* - Clear() */
    /* - Clear() */
    /* - () */
    /* - memset@plt() */
    /* - GetInverse() */
    /* - SetScale() */
    /* - () */
    /* - GetTranspose() */
    /* - () */
    /* - Add() */
    /* - GetCount() */
    /* - GetSize() */
    /* - printf@plt() */
    /* - () */
    /* - () */
    /* - GetNormal() */
    /* - VDot() */
    /* - Add() */
    /* - GetCount() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - AddBBoxToCollisionList() */
    /* - GetNext() */
    /* - VecMultiplyMat3x3() */
    /* - Set() */
    /* - DoCollisionCheck() */
    /* - () */
    /* - AddTranslate() */
    /* - GetCount() */
    /* - () */
    /* - GetArray() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RayTrace__12CIndoorSceneRC7CVectorT1fRf
 * Address: 0x0816acdc
 * Size: 826 instructions */
void RayTrace(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - Normalize() */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* - pthread_mutex_lock@plt() */
    /* - Clear() */
    /* - maths_RayBoxIntersection() */
    /* - Add() */
    /* - VDot() */
    /* - maths_RayTriangleIntersect() */
    /* - GetCount() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - maths_RayOBBIntersection() */
    /* - GetNext() */
    /* - () */
    /* - () */
    /* - GetCount() */
    /* - () */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearCollisionCache__12CIndoorScene
 * Address: 0x0816b970
 * Size: 5 instructions */
void ClearCollisionCache(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetMemoryUsedByScene__12CIndoorScene
 * Address: 0x0816b978
 * Size: 239 instructions */
void GetMemoryUsedByScene(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - printf@plt() */
    /* - GetSize() */
    /* - GetCount() */
    /* - GetFreeCount() */
    /* - GetCount() */
    /* - GetCount() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0816bcee
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __tf12CIndoorScene
 * Address: 0x0816bcf0
 * Size: 19 instructions */
void (void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __apl__7CVectorRC7CVector
 * Address: 0x0816bd30
 * Size: 18 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNormal__FPC7CVectorR7CVector
 * Address: 0x0816bd58
 * Size: 71 instructions */
void GetNormal(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - Normalize() */
    /* TODO: Implement from disassembly */
}

/* Function: SetScale__7CMatrixfff
 * Address: 0x0816be10
 * Size: 26 instructions */
void SetScale(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddTranslate__7CMatrixRC7CVector
 * Address: 0x0816be58
 * Size: 12 instructions */
void AddTranslate(void) {
    /* TODO: Implement from disassembly */
}

/* Function: VecMultiplyMat3x3__FRC7CMatrixRC7CVector
 * Address: 0x0816be74
 * Size: 56 instructions */
void VecMultiplyMat3x3(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q222CVKY_CollisionResponse14tCollisionData
 * Address: 0x0816befc
 * Size: 89 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __10CVKY_Brush
 * Address: 0x0816c020
 * Size: 33 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._Q212CIndoorScene10tFaceTable
 * Address: 0x0816c060
 * Size: 40 instructions */
void _._Q212CIndoorScene10tFaceTable(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint() */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox() */
    /* - _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q212CIndoorScene10tFaceTable
 * Address: 0x0816c0c0
 * Size: 69 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint() */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox() */
    /* - _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: __t14CGEN_ArrayList1ZUl
 * Address: 0x0816c180
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__t14CGEN_ArrayList1ZUl
 * Address: 0x0816c1a0
 * Size: 27 instructions */
void Destroy(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - free@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: _._t14CGEN_ArrayList1ZUl
 * Address: 0x0816c1e0
 * Size: 27 instructions */
void _._t14CGEN_ArrayList1ZUl(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Resize__t14CGEN_ArrayList1ZUlUl
 * Address: 0x0816c220
 * Size: 30 instructions */
void Resize(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - free@plt() */
    /* - malloc@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: SetDestroy__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointQ213GEN_CLINKLIST12eDestroyType
 * Address: 0x0816c26c
 * Size: 8 instructions */
void SetDestroy(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetDestroy__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxQ213GEN_CLINKLIST12eDestroyType
 * Address: 0x0816c27c
 * Size: 8 instructions */
void SetDestroy(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetMaxFreeCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandlei
 * Address: 0x0816c28c
 * Size: 12 instructions */
void SetMaxFreeCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ29VKY_SCENE6tPoint
 * Address: 0x0816c2a0
 * Size: 78 instructions */
void AddTail(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Delete__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ29VKY_SCENE6tPoint
 * Address: 0x0816c380
 * Size: 34 instructions */
void Delete(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Find() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: AddTail__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816c3c0
 * Size: 78 instructions */
void AddTail(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Delete__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816c4a0
 * Size: 26 instructions */
void Delete(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Find() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode
 * Address: 0x0816c4d8
 * Size: 17 instructions */
void GetHead(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode
 * Address: 0x0816c4f0
 * Size: 16 instructions */
void GetCurrent(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode
 * Address: 0x0816c510
 * Size: 14 instructions */
void GetNext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetHead__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode
 * Address: 0x0816c52c
 * Size: 13 instructions */
void GetHead(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrent__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode
 * Address: 0x0816c540
 * Size: 16 instructions */
void GetCurrent(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNext__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxRPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode
 * Address: 0x0816c560
 * Size: 14 instructions */
void GetNext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t14CGEN_ArrayList1ZUl
 * Address: 0x0816c57c
 * Size: 7 instructions */
void Clear(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x0816c58c
 * Size: 7 instructions */
void Clear(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x0816c59c
 * Size: 11 instructions */
void Clear(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Add__t14CGEN_ArrayList1ZUlPUl
 * Address: 0x0816c5b0
 * Size: 46 instructions */
void Add(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - realloc@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x0816c630
 * Size: 9 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetSize__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x0816c640
 * Size: 9 instructions */
void GetSize(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __vc__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacei
 * Address: 0x0816c650
 * Size: 27 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: Add__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacePQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x0816c680
 * Size: 46 instructions */
void Add(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - realloc@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816c700
 * Size: 9 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t14CGEN_ArrayList1ZUl
 * Address: 0x0816c710
 * Size: 9 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __vc__t14CGEN_ArrayList1ZUli
 * Address: 0x0816c720
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetArray__t14CGEN_ArrayList1ZUl
 * Address: 0x0816c740
 * Size: 9 instructions */
void GetArray(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetSize__t14CGEN_ArrayList1ZUl
 * Address: 0x0816c750
 * Size: 9 instructions */
void GetSize(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetFreeCount__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x0816c760
 * Size: 9 instructions */
void GetFreeCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint
 * Address: 0x0816c770
 * Size: 9 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __8CVector4
 * Address: 0x0816c780
 * Size: 15 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816c7a0
 * Size: 27 instructions */
void _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint
 * Address: 0x0816c7e0
 * Size: 27 instructions */
void _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxi
 * Address: 0x0816c820
 * Size: 13 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointi
 * Address: 0x0816c848
 * Size: 13 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __Q2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode
 * Address: 0x0816c870
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: Find__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ29VKY_SCENE6tPoint
 * Address: 0x0816c890
 * Size: 33 instructions */
void Find(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: Delete__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPointPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint5CNode
 * Address: 0x0816c8e0
 * Size: 52 instructions */
void Delete(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode
 * Address: 0x0816c970
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: Find__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816c990
 * Size: 33 instructions */
void Find(void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: Delete__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxPQ2t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox5CNode
 * Address: 0x0816c9e0
 * Size: 52 instructions */
void Delete(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816ca70
 * Size: 42 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint
 * Address: 0x0816caf0
 * Size: 42 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: RayBoxIntersection__FPQ29VKY_SCENE12tBoundingBoxRC7CVectorT1Rf
 * Address: 0x0816cb70
 * Size: 484 instructions */
void RayBoxIntersection(void) {
    /* Stack: 124 bytes */
    /* Calls: */
    /* - () */
    /* - maths_GetPointsFromOBB() */
    /* - maths_RayTriangleIntersect() */
    /* TODO: Implement from disassembly */
}

/* Function: __15CLandscapeScene
 * Address: 0x0816d000
 * Size: 144 instructions */
void (void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Set() */
    /* - Resize() */
    /* - () */
    /* - _._t14CGEN_ArrayList1ZUl() */
    /* - _._6CScene() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._15CLandscapeScene
 * Address: 0x0816d1e0
 * Size: 27 instructions */
void _._15CLandscapeScene(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - _._t14CGEN_ArrayList1ZUl() */
    /* - _._6CScene() */
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__15CLandscapeScene
 * Address: 0x0816d22c
 * Size: 75 instructions */
void Destroy(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - _._Q215CLandscapeScene9tGridUnit() */
    /* - () */
    /* - Destroy() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadQuad__15CLandscapeSceneiiP8_IO_FILE
 * Address: 0x0816d320
 * Size: 110 instructions */
void ReadQuad(void) {
    /* Stack: 48 bytes */
    /* Calls: */
    /* - fseek@plt() */
    /* - fread@plt() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadTerrain__15CLandscapeScenePc
 * Address: 0x0816d470
 * Size: 524 instructions */
void LoadTerrain(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Resize() */
    /* - fopen@plt() */
    /* - fread@plt() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - memset@plt() */
    /* - Set() */
    /* - () */
    /* - () */
    /* - pthread_mutex_init@plt() */
    /* - SetDestroy() */
    /* - SetDestroy() */
    /* - SetDestroy() */
    /* - ReadQuad() */
    /* - fseek@plt() */
    /* - _._Q215CLandscapeScene9tGridUnit() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadTerrainChunk__15CLandscapeScenePUcUlUl
 * Address: 0x0816db48
 * Size: 36 instructions */
void ReadTerrainChunk(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LoadTerrain() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadSceneMemory__15CLandscapeScenePUcUl
 * Address: 0x0816dbac
 * Size: 219 instructions */
void LoadSceneMemory(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - ReadWayPointNetChunk() */
    /* - ReadPointChunk() */
    /* - ReadBoxChunk() */
    /* - ReadTerrainChunk() */
    /* - ReadModelChunk() */
    /* - ReadBoundingBoxChunk() */
    /* - OrganisedModel() */
    /* TODO: Implement from disassembly */
}

/* Function: AddPoint__15CLandscapeScenePQ29VKY_SCENE6tPoint
 * Address: 0x0816de3c
 * Size: 124 instructions */
void AddPoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - AddTail() */
    /* TODO: Implement from disassembly */
}

/* Function: RemovePoint__15CLandscapeScenePQ29VKY_SCENE6tPoint
 * Address: 0x0816dfa8
 * Size: 122 instructions */
void RemovePoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: AddCollisionBox__15CLandscapeScenePQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816e108
 * Size: 150 instructions */
void AddCollisionBox(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - GetTranslation() */
    /* - Set() */
    /* - FindGrid() */
    /* - AddTail() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveCollisionBox__15CLandscapeScenePQ29VKY_SCENE12tBoundingBox
 * Address: 0x0816e2b8
 * Size: 157 instructions */
void RemoveCollisionBox(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - GetTranslation() */
    /* - Set() */
    /* - FindGrid() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveObject__15CLandscapeScenePQ29VKY_SCENE13tObjectHandleRC7CMatrix
 * Address: 0x0816e47c
 * Size: 390 instructions */
void MoveObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - pthread_mutex_lock@plt() */
    /* - printf@plt() */
    /* - Delete() */
    /* - pthread_mutex_unlock@plt() */
    /* - AddTail() */
    /* TODO: Implement from disassembly */
}

/* Function: PlaceObject__15CLandscapeScenePQ29VKY_SCENE13tObjectHandle
 * Address: 0x0816e92c
 * Size: 171 instructions */
void PlaceObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - pthread_mutex_lock@plt() */
    /* - printf@plt() */
    /* - AddTail() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveObject__15CLandscapeScenePQ29VKY_SCENE13tObjectHandle
 * Address: 0x0816eb44
 * Size: 178 instructions */
void RemoveObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - pthread_mutex_lock@plt() */
    /* - printf@plt() */
    /* - Delete() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNearestPoint__15CLandscapeSceneRC7CVectorfPPQ29VKY_SCENE6tPointRi
 * Address: 0x0816ed78
 * Size: 208 instructions */
void GetNearestPoint(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetExactNearestObject__15CLandscapeScenePQ29VKY_SCENE13tObjectHandlefPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x0816eff8
 * Size: 27 instructions */
void GetExactNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - GetExactNearestObject() */
    /* TODO: Implement from disassembly */
}

/* Function: GetExactNearestObject__15CLandscapeSceneRC7CVectorfPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x0816f034
 * Size: 338 instructions */
void GetExactNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - pthread_mutex_lock@plt() */
    /* - printf@plt() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - () */
    /* - () */
    /* - pthread_mutex_unlock@plt() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetSortedNearestObject__15CLandscapeSceneRC7CVectorfPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x0816f43c
 * Size: 366 instructions */
void GetSortedNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - pthread_mutex_lock@plt() */
    /* - printf@plt() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - () */
    /* - () */
    /* - pthread_mutex_unlock@plt() */
    /* - GetNext() */
    /* - qsort@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNearestObject__15CLandscapeSceneRC7CVectorfPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x0816f8a8
 * Size: 314 instructions */
void GetNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - pthread_mutex_lock@plt() */
    /* - printf@plt() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - pthread_mutex_unlock@plt() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetNearestObject__15CLandscapeScenePQ29VKY_SCENE13tObjectHandlefPPQ29VKY_SCENE13tObjectHandleRiUlUl
 * Address: 0x0816fc6c
 * Size: 312 instructions */
void GetNearestObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - pthread_mutex_lock@plt() */
    /* - printf@plt() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - pthread_mutex_unlock@plt() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIntersectingBox__15CLandscapeScenePQ29VKY_SCENE13tObjectHandleUl
 * Address: 0x0817002c
 * Size: 337 instructions */
void GetIntersectingBox(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - maths_AABOBBIntersect() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetIntersectingBoxes__15CLandscapeScenePQ29VKY_SCENE13tObjectHandleRt17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBoxUl
 * Address: 0x081704f0
 * Size: 261 instructions */
void GetIntersectingBoxes(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - maths_AABOBBIntersect() */
    /* - AddTail() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveObject__15CLandscapeScenePQ29VKY_SCENE13tObjectHandleRC7CVectori
 * Address: 0x0817086c
 * Size: 7 instructions */
void MoveObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: FindGrid__15CLandscapeSceneRC7CVectorRiT2
 * Address: 0x08170878
 * Size: 82 instructions */
void FindGrid(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: MoveObject__15CLandscapeSceneR7CMatrixRC7CVectorT2P18tVKY_CollisionInfoi
 * Address: 0x08170970
 * Size: 986 instructions */
void MoveObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - pthread_mutex_lock@plt() */
    /* - GetTranslation() */
    /* - () */
    /* - () */
    /* - Set() */
    /* - () */
    /* - FindGrid() */
    /* - () */
    /* - Clear() */
    /* - Clear() */
    /* - Clear() */
    /* - memset@plt() */
    /* - GetInverse() */
    /* - SetScale() */
    /* - () */
    /* - GetTranspose() */
    /* - () */
    /* - GetFaces() */
    /* - GetCount() */
    /* - () */
    /* - () */
    /* - GetNormal() */
    /* - VDot() */
    /* - Add() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - maths_AABOBBIntersect() */
    /* - AddBBoxToCollisionList() */
    /* - Add() */
    /* - GetNext() */
    /* - VecMultiplyMat3x3() */
    /* - DoCollisionCheck() */
    /* - () */
    /* - AddTranslate() */
    /* - GetCount() */
    /* - GetArray() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetRealHeight__15CLandscapeSceneffRi
 * Address: 0x081717ac
 * Size: 340 instructions */
void GetRealHeight(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - floorf@plt() */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: RayTrace__15CLandscapeSceneRC7CVectorT1fRf
 * Address: 0x08171bd8
 * Size: 452 instructions */
void RayTrace(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Normalize() */
    /* - () */
    /* - () */
    /* - Set() */
    /* - SetIdentity() */
    /* - pthread_mutex_lock@plt() */
    /* - Clear() */
    /* - () */
    /* - () */
    /* - GetRealHeight() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - maths_RayOBBIntersection() */
    /* - Add() */
    /* - GetNext() */
    /* - GetCount() */
    /* - GetArray() */
    /* - pthread_mutex_unlock@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetFaces__15CLandscapeSceneRC7CVectorfPQ215CLandscapeScene7tVertexiRi
 * Address: 0x081721f4
 * Size: 585 instructions */
void GetFaces(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - Set() */
    /* - FindGrid() */
    /* - Fastftol() */
    /* - floorf@plt() */
    /* - ceil@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ClearCollisionCache__15CLandscapeScene
 * Address: 0x0817296c
 * Size: 5 instructions */
void ClearCollisionCache(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetMemoryUsedByScene__15CLandscapeScene
 * Address: 0x08172974
 * Size: 167 instructions */
void GetMemoryUsedByScene(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - printf@plt() */
    /* - GetSize() */
    /* - GetCount() */
    /* - GetFreeCount() */
    /* - GetCount() */
    /* - GetCount() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08172bde
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __tf15CLandscapeScene
 * Address: 0x08172be0
 * Size: 19 instructions */
void (void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q215CLandscapeScene7tVertex
 * Address: 0x08172c20
 * Size: 20 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._Q215CLandscapeScene9tGridUnit
 * Address: 0x08172c50
 * Size: 41 instructions */
void _._Q215CLandscapeScene9tGridUnit(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint() */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox() */
    /* - _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q215CLandscapeScene9tGridUnit
 * Address: 0x08172cc0
 * Size: 109 instructions */
void (void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE6tPoint() */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox() */
    /* - _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: VKY_CharSorter0__FPCvT0
 * Address: 0x08172e00
 * Size: 25 instructions */
void VKY_CharSorter0(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: VKY_CharSorter1__FPCvT0
 * Address: 0x08172e44
 * Size: 25 instructions */
void VKY_CharSorter1(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: VKY_CharSorter2__FPCvT0
 * Address: 0x08172e84
 * Size: 25 instructions */
void VKY_CharSorter2(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: VKY_CharSorter3__FPCvT0
 * Address: 0x08172ec4
 * Size: 25 instructions */
void VKY_CharSorter3(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: VKY_CharSorter4__FPCvT0
 * Address: 0x08172f04
 * Size: 25 instructions */
void VKY_CharSorter4(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: VKY_CharSorter5__FPCvT0
 * Address: 0x08172f44
 * Size: 25 instructions */
void VKY_CharSorter5(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: VKY_CharSorter6__FPCvT0
 * Address: 0x08172f84
 * Size: 25 instructions */
void VKY_CharSorter6(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: VKY_CharSorter7__FPCvT0
 * Address: 0x08172fc4
 * Size: 25 instructions */
void VKY_CharSorter7(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - Fastftol() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadPCTypeList__16CSceneSharedDataPCc
 * Address: 0x08173004
 * Size: 62 instructions */
void LoadPCTypeList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LoadFile() */
    /* - ReadFile() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: LoadNPCTypeList__16CSceneSharedDataPCc
 * Address: 0x081730b0
 * Size: 64 instructions */
void LoadNPCTypeList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LoadFile() */
    /* - ReadFile() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: LoadCharacterCollisionBoxList__16CSceneSharedDataPCc
 * Address: 0x08173160
 * Size: 64 instructions */
void LoadCharacterCollisionBoxList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - LoadFile() */
    /* - ReadFile() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __6CScene
 * Address: 0x08173210
 * Size: 323 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - SetMaxFreeCount() */
    /* - PreAlloc() */
    /* - SetDestroy() */
    /* - PreAlloc() */
    /* - PreAlloc() */
    /* - memset@plt() */
    /* - pthread_mutex_init@plt() */
    /* - () */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox() */
    /* - _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - _._t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - _._t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity() */
    /* - _._22CVKY_CollisionResponse() */
    /* - _._18CVKY_EntityManager() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._6CScene
 * Address: 0x0817369c
 * Size: 110 instructions */
void _._6CScene(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - Clear() */
    /* - Clear() */
    /* - Clear() */
    /* - _._t17CGEN_NiceLinkList1ZQ29VKY_SCENE12tBoundingBox() */
    /* - _._t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - _._t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle() */
    /* - _._t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity() */
    /* - _._22CVKY_CollisionResponse() */
    /* - _._18CVKY_EntityManager() */
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__6CScene
 * Address: 0x08173804
 * Size: 228 instructions */
void Destroy(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SetDestroy() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - DeleteObject() */
    /* - Clear() */
    /* - Clear() */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: CreateObject__6CSceneUlUlfRC7CVectori
 * Address: 0x08173ad4
 * Size: 514 instructions */
void CreateObject(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FindEntity() */
    /* - printf@plt() */
    /* - Get() */
    /* - Get() */
    /* - memset@plt() */
    /* - SetTranslate() */
    /* - Set() */
    /* - Add() */
    /* - Add() */
    /* - AddTail() */
    /* - InsertEntity() */
    /* TODO: Implement from disassembly */
}

/* Function: DeleteObject__6CScenePQ29VKY_SCENE13tObjectHandle
 * Address: 0x081741a4
 * Size: 153 instructions */
void DeleteObject(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - FindEntity() */
    /* - printf@plt() */
    /* - SetDestroy() */
    /* - Delete() */
    /* - Add() */
    /* - RemoveEntity() */
    /* - Add() */
    /* TODO: Implement from disassembly */
}

/* Function: GetPCObject__6CSceneRt25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08174384
 * Size: 17 instructions */
void GetPCObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCObject__6CSceneRt25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x081743a8
 * Size: 17 instructions */
void GetNPCObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetObject__6CSceneRt25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x081743cc
 * Size: 17 instructions */
void GetObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetSObject__6CSceneRt25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x081743f0
 * Size: 17 instructions */
void GetSObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: FindObject__6CSceneUl
 * Address: 0x08174414
 * Size: 24 instructions */
void FindObject(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FindEntity() */
    /* TODO: Implement from disassembly */
}

/* Function: FindObjectInScene__6CSceneUl
 * Address: 0x0817444c
 * Size: 30 instructions */
void FindObjectInScene(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - FindEntity() */
    /* TODO: Implement from disassembly */
}

/* Function: ChangeObjectPos__6CScenePQ29VKY_SCENE13tObjectHandleRC7CMatrix
 * Address: 0x0817449c
 * Size: 83 instructions */
void ChangeObjectPos(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadModelChunk__6CScenePUcUlUl
 * Address: 0x08174574
 * Size: 221 instructions */
void ReadModelChunk(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - CreateObject() */
    /* - printf@plt() */
    /* - atan2@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: IsObjectWithinBoundary__6CScenePQ29VKY_SCENE13tObjectHandle
 * Address: 0x08174818
 * Size: 66 instructions */
void IsObjectWithinBoundary(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - GetTranslation() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadBoxChunk__6CScenePUcUlUl
 * Address: 0x081748dc
 * Size: 160 instructions */
void ReadBoxChunk(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - memcpy@plt() */
    /* - memset@plt() */
    /* - AddTail() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadBoundingBoxChunk__6CScenePUcUlUl
 * Address: 0x08174ac0
 * Size: 119 instructions */
void ReadBoundingBoxChunk(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - memset@plt() */
    /* - memcpy@plt() */
    /* - AddTail() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadWayPointNetChunk__6CScenePUcUlUl
 * Address: 0x08174c30
 * Size: 61 instructions */
void ReadWayPointNetChunk(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadPointChunk__6CScenePUcUlUl
 * Address: 0x08174cf0
 * Size: 184 instructions */
void ReadPointChunk(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - memset@plt() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadScene__6CScenePCc
 * Address: 0x08174f58
 * Size: 108 instructions */
void LoadScene(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - fopen@plt() */
    /* - fseek@plt() */
    /* - ftell@plt() */
    /* - fclose@plt() */
    /* - () */
    /* - fread@plt() */
    /* - () */
    /* - strcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadWaypointdata__6CSceneRPvRUl
 * Address: 0x08175080
 * Size: 193 instructions */
void ReadWaypointdata(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - fopen@plt() */
    /* - fseek@plt() */
    /* - ftell@plt() */
    /* - fclose@plt() */
    /* - () */
    /* - fread@plt() */
    /* - () */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: OrganisedModel__6CScene
 * Address: 0x081752b8
 * Size: 150 instructions */
void OrganisedModel(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - GetNext() */
    /* - GetHead() */
    /* - GetCurrent() */
    /* - GetNext() */
    /* TODO: Implement from disassembly */
}

/* Function: GetMemoryUsed__6CScene
 * Address: 0x08175470
 * Size: 290 instructions */
void GetMemoryUsed(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - GetCount() */
    /* - printf@plt() */
    /* - GetCount() */
    /* - GetCount() */
    /* - GetCount() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckTargetable__6CScenePQ29VKY_SCENE13tObjectHandleT1
 * Address: 0x08175828
 * Size: 254 instructions */
void CheckTargetable(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - Set() */
    /* - () */
    /* - GetMagnitude() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckScene__FPCcRQ29VKY_SCENE12tenSceneType
 * Address: 0x08175adc
 * Size: 49 instructions */
void CheckScene(void) {
    /* Stack: 120 bytes */
    /* Calls: */
    /* - () */
    /* - fopen@plt() */
    /* - memset@plt() */
    /* - fread@plt() */
    /* - fclose@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: LoadFile__FPCcPPUcRUl
 * Address: 0x08175b64
 * Size: 82 instructions */
void LoadFile(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - fopen@plt() */
    /* - fseek@plt() */
    /* - ftell@plt() */
    /* - fclose@plt() */
    /* - () */
    /* - fread@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08175c82
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __tf6CScene
 * Address: 0x08175c90
 * Size: 24 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __tf22CVKY_CollisionResponse
 * Address: 0x08175ce0
 * Size: 18 instructions */
void (void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __tf18CVKY_EntityManager
 * Address: 0x08175d20
 * Size: 18 instructions */
void (void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q29VKY_SCENE12_tFileHeader
 * Address: 0x08175d60
 * Size: 33 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q29VKY_SCENE12tBoundingBox
 * Address: 0x08175da0
 * Size: 47 instructions */
void (void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q29VKY_SCENE6tPoint
 * Address: 0x08175e10
 * Size: 16 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: GetSceneType__6CScene
 * Address: 0x08175e34
 * Size: 9 instructions */
void GetSceneType(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetSceneID__6CScene
 * Address: 0x08175e48
 * Size: 9 instructions */
void GetSceneID(void) {
    /* TODO: Implement from disassembly */
}

/* Function: IsLoaded__6CScene
 * Address: 0x08175e5c
 * Size: 9 instructions */
void IsLoaded(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetFileHeader__6CScene
 * Address: 0x08175e70
 * Size: 9 instructions */
void GetFileHeader(void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetSharedData__6CSceneP16CSceneSharedData
 * Address: 0x08175e84
 * Size: 8 instructions */
void SetSharedData(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetSceneName__6CScene
 * Address: 0x08175e98
 * Size: 9 instructions */
void GetSceneName(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetPCObject__6CScene
 * Address: 0x08175eac
 * Size: 9 instructions */
void GetPCObject(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNPCList__6CScene
 * Address: 0x08175ec0
 * Size: 9 instructions */
void GetNPCList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetObjectList__6CScene
 * Address: 0x08175ed4
 * Size: 9 instructions */
void GetObjectList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetSObjectList__6CScene
 * Address: 0x08175ee8
 * Size: 9 instructions */
void GetSObjectList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetUserRelicList__6CScene
 * Address: 0x08175efc
 * Size: 9 instructions */
void GetUserRelicList(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetPoints__6CScene
 * Address: 0x08175f10
 * Size: 9 instructions */
void GetPoints(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetPointCount__6CScene
 * Address: 0x08175f24
 * Size: 9 instructions */
void GetPointCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetWayPointNetID__6CScene
 * Address: 0x08175f38
 * Size: 9 instructions */
void GetWayPointNetID(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetWayPointNetIDCount__6CScene
 * Address: 0x08175f4c
 * Size: 9 instructions */
void GetWayPointNetIDCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity
 * Address: 0x08175f60
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity
 * Address: 0x08175f80
 * Size: 41 instructions */
void Clear(void) {
    /* Stack: 16 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: _._t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity
 * Address: 0x08175fe0
 * Size: 27 instructions */
void _._t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08176020
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08176040
 * Size: 30 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08176090
 * Size: 27 instructions */
void _._t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: PreAlloc__t25CGEN_NicePreAllocLinkList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x081760d0
 * Size: 73 instructions */
void PreAlloc(void) {
    /* Stack: 32 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: PreAlloc__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandlei
 * Address: 0x081761a0
 * Size: 67 instructions */
void PreAlloc(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: PreAlloc__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entityi
 * Address: 0x08176250
 * Size: 67 instructions */
void PreAlloc(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Get__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x08176300
 * Size: 72 instructions */
void Get(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Get__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity
 * Address: 0x081763c0
 * Size: 73 instructions */
void Get(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Add__t25CGEN_NicePreAllocPoolList1Z11CVKY_EntityP11CVKY_Entity
 * Address: 0x08176480
 * Size: 13 instructions */
void Add(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Add__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandlePQ29VKY_SCENE13tObjectHandle
 * Address: 0x081764a0
 * Size: 13 instructions */
void Add(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t25CGEN_NicePreAllocPoolList1Z11CVKY_Entity
 * Address: 0x081764c0
 * Size: 12 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t25CGEN_NicePreAllocPoolList1ZQ29VKY_SCENE13tObjectHandle
 * Address: 0x081764e0
 * Size: 12 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __11CVKY_Entity
 * Address: 0x08176500
 * Size: 35 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - _._9CGEN_Node() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: __Q29VKY_SCENE13tObjectHandle
 * Address: 0x08176570
 * Size: 20 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __tf11CVKY_Entity
 * Address: 0x081765a0
 * Size: 18 instructions */
void (void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __9CGEN_Node
 * Address: 0x081765e0
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._9CGEN_Node
 * Address: 0x08176600
 * Size: 25 instructions */
void _._9CGEN_Node(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: _._11CVKY_Entity
 * Address: 0x08176640
 * Size: 23 instructions */
void _._11CVKY_Entity(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._9CGEN_Node() */
    /* TODO: Implement from disassembly */
}

/* Function: __tf9CGEN_Node
 * Address: 0x08176670
 * Size: 18 instructions */
void (void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: DoCaching__10CVKY_Brush
 * Address: 0x081766b0
 * Size: 128 instructions */
void DoCaching(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - CacheFace() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: CacheFace__10CVKY_Brushi
 * Address: 0x08176828
 * Size: 99 instructions */
void CacheFace(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - GetNormal() */
    /* - VDot() */
    /* TODO: Implement from disassembly */
}

/* Function: __18CVKY_MeshFaceCache
 * Address: 0x08176940
 * Size: 17 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._18CVKY_MeshFaceCache
 * Address: 0x0817698c
 * Size: 23 instructions */
void _._18CVKY_MeshFaceCache(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__18CVKY_MeshFaceCache
 * Address: 0x081769c8
 * Size: 65 instructions */
void Destroy(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Flush() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Flush__18CVKY_MeshFaceCache
 * Address: 0x08176aa0
 * Size: 56 instructions */
void Flush(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Init__18CVKY_MeshFaceCacheP10CVKY_Brush
 * Address: 0x08176b74
 * Size: 101 instructions */
void Init(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: CacheAABBFace__18CVKY_MeshFaceCachei
 * Address: 0x08176c9c
 * Size: 326 instructions */
void CacheAABBFace(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: CacheFace__18CVKY_MeshFaceCachei
 * Address: 0x08177070
 * Size: 144 instructions */
void CacheFace(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - GetNormal() */
    /* - VDot() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: __19CVKY_CollisionCache
 * Address: 0x08177208
 * Size: 13 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._19CVKY_CollisionCache
 * Address: 0x08177238
 * Size: 22 instructions */
void _._19CVKY_CollisionCache(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__19CVKY_CollisionCache
 * Address: 0x0817726c
 * Size: 48 instructions */
void Destroy(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._18CVKY_MeshFaceCache() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Init__19CVKY_CollisionCacheP10CVKY_Brushi
 * Address: 0x081772f8
 * Size: 154 instructions */
void Init(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - Init() */
    /* - _._18CVKY_MeshFaceCache() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Flush__19CVKY_CollisionCache
 * Address: 0x081774b0
 * Size: 31 instructions */
void Flush(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Flush() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x08177552
 * Size: 2 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __9tVKY_BBox
 * Address: 0x08177560
 * Size: 20 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __14tVKY_FaceCache
 * Address: 0x08177590
 * Size: 41 instructions */
void (void) {
    /* Stack: 12 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __22CVKY_CollisionResponse
 * Address: 0x081775f0
 * Size: 59 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - Resize() */
    /* - Resize() */
    /* - () */
    /* - _._t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace() */
    /* - _._t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._22CVKY_CollisionResponse
 * Address: 0x0817769c
 * Size: 30 instructions */
void _._22CVKY_CollisionResponse(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _._t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace() */
    /* - _._t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: AddBBoxToCollisionList__22CVKY_CollisionResponsePQ29VKY_SCENE12tBoundingBoxRC7CMatrix
 * Address: 0x081776e8
 * Size: 928 instructions */
void AddBBoxToCollisionList(void) {
    /* Stack: 140 bytes */
    /* Calls: */
    /* - () */
    /* - maths_GetPointsFromOBB() */
    /* - GetCurrent() */
    /* - GetCount() */
    /* - GetSize() */
    /* - () */
    /* - GetNormal() */
    /* - VDot() */
    /* - Add() */
    /* TODO: Implement from disassembly */
}

/* Function: DoCollisionCheck__22CVKY_CollisionResponseRQ222CVKY_CollisionResponse14tCollisionDataP18tVKY_CollisionInfoi
 * Address: 0x081781d0
 * Size: 25 instructions */
void DoCollisionCheck(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - CheckCollision() */
    /* TODO: Implement from disassembly */
}

/* Function: CheckCollision__22CVKY_CollisionResponseRQ222CVKY_CollisionResponse14tCollisionDataP18tVKY_CollisionInfoi
 * Address: 0x08178204
 * Size: 701 instructions */
void CheckCollision(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - GetCollisionSet() */
    /* - GetCount() */
    /* - () */
    /* - () */
    /* - VDot() */
    /* - () */
    /* - () */
    /* - () */
    /* - GetMagnitude() */
    /* - () */
    /* - VecMultiplyMat3x3() */
    /* - Normalize() */
    /* - () */
    /* - () */
    /* - CheckCollision() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCollisionSet__22CVKY_CollisionResponseRQ222CVKY_CollisionResponse14tCollisionData
 * Address: 0x08178aa0
 * Size: 627 instructions */
void GetCollisionSet(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - AddTranslate() */
    /* - GetCount() */
    /* - () */
    /* - GetMagnitude() */
    /* - Normalize() */
    /* - () */
    /* - VDot() */
    /* - () */
    /* - () */
    /* - FastAbs() */
    /* - maths_CheckPointInTriangle() */
    /* - maths_ClosestPointOnTriangle() */
    /* - () */
    /* - FastSqrt() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0817946e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: FastAbs__Ff
 * Address: 0x08179470
 * Size: 15 instructions */
void FastAbs(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __mi__FRC7CVector
 * Address: 0x081794a0
 * Size: 31 instructions */
void (void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __op7CVector__8CVector4
 * Address: 0x081794e8
 * Size: 15 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __ml__8CVector4f
 * Address: 0x0817950c
 * Size: 55 instructions */
void (void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x0817959c
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x081795c0
 * Size: 27 instructions */
void _._t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x08179600
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x08179620
 * Size: 27 instructions */
void _._t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Resize__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFaceUl
 * Address: 0x08179660
 * Size: 34 instructions */
void Resize(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - free@plt() */
    /* - malloc@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Resize__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFaceUl
 * Address: 0x081796b0
 * Size: 101 instructions */
void Resize(void) {
    /* Stack: 44 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrent__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x081797d0
 * Size: 15 instructions */
void GetCurrent(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x081797f4
 * Size: 9 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __vc__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFacei
 * Address: 0x08179804
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __8CVector4ffff
 * Address: 0x08179824
 * Size: 23 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x0817985c
 * Size: 19 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__t20CGEN_StructArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x08179880
 * Size: 22 instructions */
void Destroy(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__t14CGEN_ArrayList1ZQ222CVKY_CollisionResponse14tCollisionFace
 * Address: 0x081798c0
 * Size: 27 instructions */
void Destroy(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - free@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: __18CVKY_CollisionList
 * Address: 0x08179900
 * Size: 12 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._18CVKY_CollisionList
 * Address: 0x08179928
 * Size: 41 instructions */
void _._18CVKY_CollisionList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: ReadPCChunk__18CVKY_CollisionListPUcUlUl
 * Address: 0x08179998
 * Size: 422 instructions */
void ReadPCChunk(void) {
    /* Stack: 364 bytes */
    /* Calls: */
    /* - () */
    /* - GEN_GetToken() */
    /* - strcasecmp@plt() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - GEN_CheckStringIsNumeric() */
    /* - _._t13GEN_CLinkList1Z7CVector() */
    /* - atof@plt() */
    /* - AddTail() */
    /* - () */
    /* - GetCount() */
    /* - () */
    /* - Reset() */
    /* - GetCurrent() */
    /* - GetNext() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadNPCChunk__18CVKY_CollisionListPUcUlUl
 * Address: 0x08179f84
 * Size: 422 instructions */
void ReadNPCChunk(void) {
    /* Stack: 364 bytes */
    /* Calls: */
    /* - () */
    /* - GEN_GetToken() */
    /* - strcasecmp@plt() */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - GEN_CheckStringIsNumeric() */
    /* - _._t13GEN_CLinkList1Z7CVector() */
    /* - atof@plt() */
    /* - AddTail() */
    /* - () */
    /* - GetCount() */
    /* - () */
    /* - Reset() */
    /* - GetCurrent() */
    /* - GetNext() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadFile__18CVKY_CollisionListPUcUl
 * Address: 0x0817a574
 * Size: 122 instructions */
void ReadFile(void) {
    /* Stack: 1044 bytes */
    /* Calls: */
    /* - () */
    /* - GEN_GetToken() */
    /* - strcasecmp@plt() */
    /* - ReadPCChunk() */
    /* - ReadNPCChunk() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0817a72e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Reset__t13GEN_CLinkList1Z7CVector
 * Address: 0x0817a730
 * Size: 8 instructions */
void Reset(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._t13GEN_CLinkList1Z7CVector
 * Address: 0x0817a740
 * Size: 27 instructions */
void _._t13GEN_CLinkList1Z7CVector(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t13GEN_CLinkList1Z7CVectori
 * Address: 0x0817a780
 * Size: 26 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddTail__t13GEN_CLinkList1Z7CVectorP7CVector
 * Address: 0x0817a7c0
 * Size: 76 instructions */
void AddTail(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t13GEN_CLinkList1Z7CVector
 * Address: 0x0817a890
 * Size: 9 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrent__t13GEN_CLinkList1Z7CVector
 * Address: 0x0817a8a0
 * Size: 15 instructions */
void GetCurrent(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNext__t13GEN_CLinkList1Z7CVector
 * Address: 0x0817a8c0
 * Size: 19 instructions */
void GetNext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t13GEN_CLinkList1Z7CVector
 * Address: 0x0817a8e0
 * Size: 46 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Reset() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q2t13GEN_CLinkList1Z7CVector5CNode
 * Address: 0x0817a970
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __18CVKY_EntityManager
 * Address: 0x0817a990
 * Size: 90 instructions */
void (void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - _._21CGEN_NiceNodeLinkList() */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: _._18CVKY_EntityManager
 * Address: 0x0817aa88
 * Size: 50 instructions */
void _._18CVKY_EntityManager(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - _._21CGEN_NiceNodeLinkList() */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: FindEntity__18CVKY_EntityManagerUl
 * Address: 0x0817ab08
 * Size: 46 instructions */
void FindEntity(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - GetHead() */
    /* TODO: Implement from disassembly */
}

/* Function: InsertEntity__18CVKY_EntityManagerP11CVKY_Entity
 * Address: 0x0817ab7c
 * Size: 24 instructions */
void InsertEntity(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - AddTail() */
    /* TODO: Implement from disassembly */
}

/* Function: RemoveEntity__18CVKY_EntityManagerP11CVKY_Entity
 * Address: 0x0817abb8
 * Size: 43 instructions */
void RemoveEntity(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - SetDestroy() */
    /* - Delete() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0817ac29
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: __21CGEN_NiceNodeLinkListi
 * Address: 0x0817ac30
 * Size: 13 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: SetDestroy__21CGEN_NiceNodeLinkListQ213GEN_CLINKLIST12eDestroyType
 * Address: 0x0817ac58
 * Size: 8 instructions */
void SetDestroy(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetHead__21CGEN_NiceNodeLinkList
 * Address: 0x0817ac68
 * Size: 17 instructions */
void GetHead(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Delete__21CGEN_NiceNodeLinkListP9CGEN_Node
 * Address: 0x0817ac80
 * Size: 68 instructions */
void Delete(void) {
    /* Stack: 12 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: AddTail__21CGEN_NiceNodeLinkListP9CGEN_Node
 * Address: 0x0817ad10
 * Size: 22 instructions */
void AddTail(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._21CGEN_NiceNodeLinkList
 * Address: 0x0817ad50
 * Size: 27 instructions */
void _._21CGEN_NiceNodeLinkList(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Clear__21CGEN_NiceNodeLinkList
 * Address: 0x0817ad90
 * Size: 42 instructions */
void Clear(void) {
    /* Stack: 16 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __16CVKY_NPCTypeList
 * Address: 0x0817ae00
 * Size: 10 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._16CVKY_NPCTypeList
 * Address: 0x0817ae1c
 * Size: 30 instructions */
void _._16CVKY_NPCTypeList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: ReadNPCChunk__16CVKY_NPCTypeListRQ216CVKY_NPCTypeList12tNPCTypeDataPUcUlUl
 * Address: 0x0817ae68
 * Size: 366 instructions */
void ReadNPCChunk(void) {
    /* Stack: 276 bytes */
    /* Calls: */
    /* - GEN_GetToken() */
    /* - strcasecmp@plt() */
    /* - strcpy@plt() */
    /* - GEN_CheckStringIsNumeric() */
    /* - atol@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadFile__16CVKY_NPCTypeListPUcUl
 * Address: 0x0817b35c
 * Size: 214 instructions */
void ReadFile(void) {
    /* Stack: 320 bytes */
    /* Calls: */
    /* - () */
    /* - GEN_GetToken() */
    /* - strcasecmp@plt() */
    /* - () */
    /* - AddTail() */
    /* - ReadNPCChunk() */
    /* - _._t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData() */
    /* - GetCount() */
    /* - () */
    /* - () */
    /* - Reset() */
    /* - GetCurrent() */
    /* - memcpy@plt() */
    /* - GetNext() */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0817b67e
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Reset__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData
 * Address: 0x0817b680
 * Size: 8 instructions */
void Reset(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData
 * Address: 0x0817b690
 * Size: 27 instructions */
void _._t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeDatai
 * Address: 0x0817b6d0
 * Size: 26 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddTail__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeDataPQ216CVKY_NPCTypeList12tNPCTypeData
 * Address: 0x0817b710
 * Size: 76 instructions */
void AddTail(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData
 * Address: 0x0817b7e0
 * Size: 9 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrent__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData
 * Address: 0x0817b7f0
 * Size: 15 instructions */
void GetCurrent(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNext__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData
 * Address: 0x0817b810
 * Size: 19 instructions */
void GetNext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData
 * Address: 0x0817b830
 * Size: 46 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Reset() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q2t13GEN_CLinkList1ZQ216CVKY_NPCTypeList12tNPCTypeData5CNode
 * Address: 0x0817b8c0
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: __11CVKY_PCList
 * Address: 0x0817b8e0
 * Size: 17 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - memset@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: _._11CVKY_PCList
 * Address: 0x0817b908
 * Size: 22 instructions */
void _._11CVKY_PCList(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: Destroy__11CVKY_PCList
 * Address: 0x0817b93c
 * Size: 157 instructions */
void Destroy(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: ReadStringChunk__11CVKY_PCListPPA255_cRiPUcUlRUl
 * Address: 0x0817bb0c
 * Size: 193 instructions */
void ReadStringChunk(void) {
    /* Stack: 316 bytes */
    /* Calls: */
    /* - () */
    /* - GEN_GetToken() */
    /* - strcasecmp@plt() */
    /* - () */
    /* - strcpy@plt() */
    /* - AddTail() */
    /* - GetCount() */
    /* - () */
    /* - Reset() */
    /* - GetCurrent() */
    /* - memcpy@plt() */
    /* - GetNext() */
    /* - _._t13GEN_CLinkList1Z9tStringSt() */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadPCChunk__11CVKY_PCListRQ211CVKY_PCList6tPCDefPUcUlRUl
 * Address: 0x0817bd7c
 * Size: 357 instructions */
void ReadPCChunk(void) {
    /* Stack: 272 bytes */
    /* Calls: */
    /* - GEN_GetToken() */
    /* - strcasecmp@plt() */
    /* - ReadStringChunk() */
    /* - strcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ReadFile__11CVKY_PCListPUcUl
 * Address: 0x0817c1b4
 * Size: 131 instructions */
void ReadFile(void) {
    /* Stack: 292 bytes */
    /* Calls: */
    /* - Destroy() */
    /* - memset@plt() */
    /* - GEN_GetToken() */
    /* - strcasecmp@plt() */
    /* - ReadPCChunk() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0817c3be
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Reset__t13GEN_CLinkList1Z9tStringSt
 * Address: 0x0817c3c0
 * Size: 8 instructions */
void Reset(void) {
    /* TODO: Implement from disassembly */
}

/* Function: _._t13GEN_CLinkList1Z9tStringSt
 * Address: 0x0817c3d0
 * Size: 27 instructions */
void _._t13GEN_CLinkList1Z9tStringSt(void) {
    /* Stack: 16 bytes */
    /* Calls: */
    /* - Clear() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __t13GEN_CLinkList1Z9tStringSti
 * Address: 0x0817c410
 * Size: 26 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: AddTail__t13GEN_CLinkList1Z9tStringStP9tStringSt
 * Address: 0x0817c450
 * Size: 76 instructions */
void AddTail(void) {
    /* Stack: 28 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* - () */
    /* - terminate() */
    /* TODO: Implement from disassembly */
}

/* Function: GetCount__t13GEN_CLinkList1Z9tStringSt
 * Address: 0x0817c520
 * Size: 9 instructions */
void GetCount(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetCurrent__t13GEN_CLinkList1Z9tStringSt
 * Address: 0x0817c530
 * Size: 15 instructions */
void GetCurrent(void) {
    /* TODO: Implement from disassembly */
}

/* Function: GetNext__t13GEN_CLinkList1Z9tStringSt
 * Address: 0x0817c550
 * Size: 19 instructions */
void GetNext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Clear__t13GEN_CLinkList1Z9tStringSt
 * Address: 0x0817c570
 * Size: 46 instructions */
void Clear(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - Reset() */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __Q2t13GEN_CLinkList1Z9tStringSt5CNode
 * Address: 0x0817c600
 * Size: 14 instructions */
void (void) {
    /* TODO: Implement from disassembly */
}

/* Function: GEN_CheckForComment__FPCcUl
 * Address: 0x0817c620
 * Size: 76 instructions */
void GEN_CheckForComment(void) {
    /* Stack: 1048 bytes */
    /* Calls: */
    /* - GEN_GetLine() */
    /* TODO: Implement from disassembly */
}

/* Function: GEN_GetLine__FPCcPcUl
 * Address: 0x0817c6ec
 * Size: 54 instructions */
void GEN_GetLine(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - strstr@plt() */
    /* - memcpy@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GEN_GetToken__FPCcPcUl
 * Address: 0x0817c774
 * Size: 127 instructions */
void GEN_GetToken(void) {
    /* Stack: 36 bytes */
    /* Calls: */
    /* - GEN_CheckForComment() */
    /* TODO: Implement from disassembly */
}

/* Function: GEN_GetTokenCount__FPCUcUl
 * Address: 0x0817c8dc
 * Size: 39 instructions */
void GEN_GetTokenCount(void) {
    /* Stack: 280 bytes */
    /* Calls: */
    /* - GEN_GetToken() */
    /* TODO: Implement from disassembly */
}

/* Function: GEN_GetFileName__FPCcPc
 * Address: 0x0817c94c
 * Size: 78 instructions */
void GEN_GetFileName(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - strlen@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GEN_GetFilePath__FPCcPc
 * Address: 0x0817ca28
 * Size: 69 instructions */
void GEN_GetFilePath(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - strlen@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GEN_GetFileExt__FPCcPc
 * Address: 0x0817cae4
 * Size: 65 instructions */
void GEN_GetFileExt(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - strlen@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GEN_ChangeFileExt__FPcT0
 * Address: 0x0817cb94
 * Size: 69 instructions */
void GEN_ChangeFileExt(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - strlen@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: GEN_CheckStringIsNumeric__FPCc
 * Address: 0x0817cc54
 * Size: 54 instructions */
void GEN_CheckStringIsNumeric(void) {
    /* Stack: 24 bytes */
    /* Calls: */
    /* - strlen@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: ConvertSecToTime__FPcf
 * Address: 0x0817cce4
 * Size: 72 instructions */
void ConvertSecToTime(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - fmod@plt() */
    /* - sprintf@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: Letext
 * Address: 0x0817cdcd
 * Size: 1 instructions */
void Letext(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Quaternions__7CMatrixffff
 * Address: 0x0817cdd0
 * Size: 87 instructions */
void Quaternions(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __op12CQuaternions__C7CMatrix
 * Address: 0x0817ceb4
 * Size: 157 instructions */
void (void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* TODO: Implement from disassembly */
}

/* Function: GetTranspose__C7CMatrixR7CMatrix
 * Address: 0x0817d058
 * Size: 39 instructions */
void GetTranspose(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Determinant__C7CMatrix
 * Address: 0x0817d0c4
 * Size: 97 instructions */
void Determinant(void) {
    /* Stack: 40 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: Adjoint__C7CMatrixR7CMatrix
 * Address: 0x0817d1b8
 * Size: 304 instructions */
void Adjoint(void) {
    /* Stack: 72 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: GetInverse__C7CMatrixR7CMatrix
 * Address: 0x0817d4bc
 * Size: 73 instructions */
void GetInverse(void) {
    /* Stack: 76 bytes */
    /* Calls: */
    /* - Adjoint() */
    /* - Determinant() */
    /* - GetTranspose() */
    /* TODO: Implement from disassembly */
}

/* Function: GetInverse3x3__C7CMatrixR7CMatrix
 * Address: 0x0817d56c
 * Size: 174 instructions */
void GetInverse3x3(void) {
    /* Stack: 128 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: SetRotateX__7CMatrixf
 * Address: 0x0817d734
 * Size: 41 instructions */
void SetRotateX(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FastSin() */
    /* - FastCos() */
    /* TODO: Implement from disassembly */
}

/* Function: SetRotateY__7CMatrixf
 * Address: 0x0817d7d4
 * Size: 42 instructions */
void SetRotateY(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FastSin() */
    /* - FastCos() */
    /* TODO: Implement from disassembly */
}

/* Function: SetRotateZ__7CMatrixf
 * Address: 0x0817d878
 * Size: 41 instructions */
void SetRotateZ(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FastSin() */
    /* - FastCos() */
    /* TODO: Implement from disassembly */
}

/* Function: SetRotate__7CMatrixfff
 * Address: 0x0817d918
 * Size: 87 instructions */
void SetRotate(void) {
    /* Stack: 52 bytes */
    /* Calls: */
    /* - FastSin() */
    /* - FastCos() */
    /* TODO: Implement from disassembly */
}

/* Function: MakeRotationFromRightDir__7CMatrixR7CVectorN21
 * Address: 0x0817da28
 * Size: 101 instructions */
void MakeRotationFromRightDir(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* - MakeRotation() */
    /* TODO: Implement from disassembly */
}

/* Function: MakeRotationFromRightDir__7CMatrixR7CVectorT1
 * Address: 0x0817db14
 * Size: 98 instructions */
void MakeRotationFromRightDir(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* - MakeRotation() */
    /* TODO: Implement from disassembly */
}

/* Function: MakeRotationFromDirUp__7CMatrixR7CVectorN21
 * Address: 0x0817dbf8
 * Size: 101 instructions */
void MakeRotationFromDirUp(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* - MakeRotation() */
    /* TODO: Implement from disassembly */
}

/* Function: MakeRotationFromDirUp__7CMatrixR7CVectorT1
 * Address: 0x0817dce4
 * Size: 98 instructions */
void MakeRotationFromDirUp(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* - MakeRotation() */
    /* TODO: Implement from disassembly */
}

/* Function: MakeRotationFromUpRight__7CMatrixR7CVectorN21
 * Address: 0x0817ddc8
 * Size: 101 instructions */
void MakeRotationFromUpRight(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* - MakeRotation() */
    /* TODO: Implement from disassembly */
}

/* Function: MakeRotationMatrixFromUpRight__7CMatrixR7CVectorT1
 * Address: 0x0817deb4
 * Size: 98 instructions */
void MakeRotationMatrixFromUpRight(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* - MakeRotation() */
    /* TODO: Implement from disassembly */
}

/* Function: MakeRotation__7CMatrixRC7CVectorN21
 * Address: 0x0817df98
 * Size: 36 instructions */
void MakeRotation(void) {
    /* TODO: Implement from disassembly */
}

/* Function: MakeRotation__7CMatrixRC7CVectorN31
 * Address: 0x0817e010
 * Size: 66 instructions */
void MakeRotation(void) {
    /* TODO: Implement from disassembly */
}

/* Function: Normalize3x3Vectors__7CMatrix
 * Address: 0x0817e0c4
 * Size: 102 instructions */
void Normalize3x3Vectors(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* TODO: Implement from disassembly */
}

/* Function: __pl__FRC7CMatrixT0
 * Address: 0x0817e1c8
 * Size: 29 instructions */
void (void) {
    /* Stack: 76 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __mi__FRC7CMatrixT0
 * Address: 0x0817e208
 * Size: 29 instructions */
void (void) {
    /* Stack: 76 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __ml__FRC7CMatrixT0
 * Address: 0x0817e248
 * Size: 269 instructions */
void (void) {
    /* Stack: 140 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: MatrixMultiply__7CMatrixRC7CMatrixT1
 * Address: 0x0817e4d4
 * Size: 200 instructions */
void MatrixMultiply(void) {
    /* TODO: Implement from disassembly */
}

/* Function: MatrixMultiply3x3__7CMatrixRC7CMatrixT1
 * Address: 0x0817e6ec
 * Size: 96 instructions */
void MatrixMultiply3x3(void) {
    /* TODO: Implement from disassembly */
}

/* Function: PreScaleMatrix__7CMatrixfff
 * Address: 0x0817e808
 * Size: 49 instructions */
void PreScaleMatrix(void) {
    /* TODO: Implement from disassembly */
}

/* Function: PostScaleMatrix__7CMatrixfff
 * Address: 0x0817e880
 * Size: 47 instructions */
void PostScaleMatrix(void) {
    /* TODO: Implement from disassembly */
}

/* Function: PreTranslateMatrix__7CMatrixRC7CVector
 * Address: 0x0817e8f4
 * Size: 47 instructions */
void PreTranslateMatrix(void) {
    /* TODO: Implement from disassembly */
}

/* Function: PostTranslateMatrix__7CMatrixRC7CVector
 * Address: 0x0817e96c
 * Size: 55 instructions */
void PostTranslateMatrix(void) {
    /* TODO: Implement from disassembly */
}

/* Function: ExtractRotation__7CMatrixRfN21
 * Address: 0x0817e9fc
 * Size: 46 instructions */
void ExtractRotation(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - asinf@plt() */
    /* - FastCos() */
    /* TODO: Implement from disassembly */
}

/* Function: ExtractRotation__7CMatrixR7CVector
 * Address: 0x0817ea6c
 * Size: 42 instructions */
void ExtractRotation(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - asinf@plt() */
    /* - FastCos() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_RayPlaneIntersection__FRC8CVector4RC7CVectorT1Rf
 * Address: 0x0817ebb0
 * Size: 53 instructions */
void maths_RayPlaneIntersection(void) {
    /* Stack: 12 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_CheckPointInTriangle__FRC7CVectorPC7CVector
 * Address: 0x0817ec30
 * Size: 373 instructions */
void maths_CheckPointInTriangle(void) {
    /* Stack: 164 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_ClosestPointOnLine__FRC7CVectorN20
 * Address: 0x0817f060
 * Size: 140 instructions */
void maths_ClosestPointOnLine(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FastSqrt() */
    /* - InverseSqrt() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_ClosestPointOnTriangle__FPC7CVectorR7CVector
 * Address: 0x0817f1b0
 * Size: 125 instructions */
void maths_ClosestPointOnTriangle(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - maths_ClosestPointOnLine() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_RaySphereIntersection__FRC7CVectorT0fG7CVectorfRfR7CVector
 * Address: 0x0817f2d8
 * Size: 148 instructions */
void maths_RaySphereIntersection(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FastSqrt() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_RayOBBIntersection__FRC7CMatrixRC7CVectorN21Rf
 * Address: 0x0817f450
 * Size: 148 instructions */
void maths_RayOBBIntersection(void) {
    /* Stack: 44 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_RayBoxIntersection__FRC7CVectorN30R7CVector
 * Address: 0x0817f5b8
 * Size: 337 instructions */
void maths_RayBoxIntersection(void) {
    /* Stack: 12 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_RayTriangleIntersect__FRC7CVectorN40RfN25
 * Address: 0x0817f910
 * Size: 236 instructions */
void maths_RayTriangleIntersect(void) {
    /* Stack: 92 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_GetTriangleData__FR18tmathsTriangleDataRC7CVectorN21
 * Address: 0x0817fb70
 * Size: 302 instructions */
void maths_GetTriangleData(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - InverseSqrt() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_RayTriangleIntersect__FRC18tmathsTriangleDataRC7CVectorT1Rf
 * Address: 0x0817fe60
 * Size: 157 instructions */
void maths_RayTriangleIntersect(void) {
    /* Stack: 72 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_SphereEdgeIntersection__FRC7CVectorN20f
 * Address: 0x0817fff4
 * Size: 151 instructions */
void maths_SphereEdgeIntersection(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FastSqrt() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_TriangleSphereTest__FRC9CTriangleRC7CVectorf
 * Address: 0x0818015c
 * Size: 123 instructions */
void maths_TriangleSphereTest(void) {
    /* Stack: 60 bytes */
    /* Calls: */
    /* - maths_CheckPointInTriangle() */
    /* - maths_SphereEdgeIntersection() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_SphereTriangleIntersectionTest__FRC9CTriangleRC7CVectorfR7CVector
 * Address: 0x08180284
 * Size: 150 instructions */
void maths_SphereTriangleIntersectionTest(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - maths_TriangleSphereTest() */
    /* TODO: Implement from disassembly */
}

/* Function: FastSin__Ff
 * Address: 0x081804d0
 * Size: 13 instructions */
void FastSin(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - sin@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FastCos__Ff
 * Address: 0x081804f0
 * Size: 13 instructions */
void FastCos(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - cos@plt() */
    /* TODO: Implement from disassembly */
}

/* Function: FastSqrt__Ff
 * Address: 0x08180510
 * Size: 10 instructions */
void FastSqrt(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: InverseSqrt__Ff
 * Address: 0x08180524
 * Size: 12 instructions */
void InverseSqrt(void) {
    /* Stack: 24 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: rsqrtinit__Fv
 * Address: 0x0818053c
 * Size: 54 instructions */
void rsqrtinit(void) {
    /* Stack: 60 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: sqrtinit__Fv
 * Address: 0x081805e4
 * Size: 44 instructions */
void sqrtinit(void) {
    /* Stack: 44 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_SinTableInit__Fv
 * Address: 0x08180674
 * Size: 25 instructions */
void maths_SinTableInit(void) {
    /* Stack: 4 bytes */
    /* Calls: */
    /* - FastSin() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_InitTable__Fv
 * Address: 0x081806b4
 * Size: 13 instructions */
void maths_InitTable(void) {
    /* Stack: 8 bytes */
    /* Calls: */
    /* - sqrtinit() */
    /* - rsqrtinit() */
    /* - maths_SinTableInit() */
    /* TODO: Implement from disassembly */
}

/* Function: maths_OBBIntersect__FRC7CMatrixRC7CVectorT0T1
 * Address: 0x08180720
 * Size: 712 instructions */
void maths_OBBIntersect(void) {
    /* Stack: 684 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_AABOBBIntersect__FRC7CVectorT0RC7CMatrixT0
 * Address: 0x081812e8
 * Size: 543 instructions */
void maths_AABOBBIntersect(void) {
    /* Stack: 636 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_AABBIntersect__FRC7CVectorN30
 * Address: 0x08181bb8
 * Size: 66 instructions */
void maths_AABBIntersect(void) {
    /* Stack: 28 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_PlaneIntersectOBB__FRC7CMatrixRC7CVectorRC8CVector4Rf
 * Address: 0x08181c60
 * Size: 283 instructions */
void maths_PlaneIntersectOBB(void) {
    /* Stack: 112 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_FindVMaxDistanceofPlaneAndOBB__FRC7CMatrixRC7CVectorRC8CVector4
 * Address: 0x08181f18
 * Size: 140 instructions */
void maths_FindVMaxDistanceofPlaneAndOBB(void) {
    /* Stack: 100 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_OBBTriangleIntersect__FP8CVector4P7CVector
 * Address: 0x08182074
 * Size: 75 instructions */
void maths_OBBTriangleIntersect(void) {
    /* Stack: 12 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_AABBSphereIntersect__FRC7CVectorN20f
 * Address: 0x08182128
 * Size: 76 instructions */
void maths_AABBSphereIntersect(void) {
    /* TODO: Implement from disassembly */
}

/* Function: maths_GeneratePlanesFromOBB__FR7CMatrixRC7CVectorP8CVector4
 * Address: 0x081821d4
 * Size: 418 instructions */
void maths_GeneratePlanesFromOBB(void) {
    /* Stack: 60 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: maths_GetPointsFromOBB__FRC7CMatrixRC7CVectorP7CVector
 * Address: 0x08182614
 * Size: 353 instructions */
void maths_GetPointsFromOBB(void) {
    /* Stack: 44 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: __pure_virtual
 * Address: 0x08182a60
 * Size: 17 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - () */
    /* - () */
    /* - () */
    /* TODO: Implement from disassembly */
}

/* Function: __do_global_ctors_aux
 * Address: 0x08182a90
 * Size: 15 instructions */
void (void) {
    /* Stack: 20 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: init_dummy
 * Address: 0x08182ab4
 * Size: 6 instructions */
void init_dummy(void) {
    /* Stack: 8 bytes */
    /* TODO: Implement from disassembly */
}

/* Function: _fini
 * Address: 0x08182ac0
 * Size: 12 instructions */
void _fini(void) {
    /* Stack: 20 bytes */
    /* Calls: */
    /* - _fini+0xc() */
    /* - () */
    /* TODO: Implement from disassembly */
}

