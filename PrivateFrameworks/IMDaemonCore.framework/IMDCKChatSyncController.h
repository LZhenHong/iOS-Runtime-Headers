/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKChatSyncController : IMDCKAbstractSyncController {
    IMDCKChatSyncCKOperationFactory * _CKOperationFactory;
    IMDChatRegistry * _chatRegistry;
    NSObject<OS_dispatch_queue> * _ckQueue;
    bool  _fetchedChatsDuringLastSync;
    CKServerChangeToken * _latestSyncToken;
    CKRecord * _lockRecord;
    CKRecord * _manateeLockRecord;
    IMDRecordZoneManager * _recordZoneManager;
    CKRecord * _stingRayLockRecord;
    <IMDCKSyncTokenStore> * _syncTokenStore;
}

@property (nonatomic, retain) IMDCKChatSyncCKOperationFactory *CKOperationFactory;
@property (nonatomic, retain) IMDChatRegistry *chatRegistry;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic) bool fetchedChatsDuringLastSync;
@property (nonatomic, retain) CKServerChangeToken *latestSyncToken;
@property (nonatomic, retain) CKRecord *lockRecord;
@property (nonatomic, retain) CKRecord *manateeLockRecord;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) CKRecord *stingRayLockRecord;
@property (nonatomic, retain) <IMDCKSyncTokenStore> *syncTokenStore;

+ (id)sharedInstance;

- (id)CKOperationFactory;
- (void)__syncChatsWithCloudKit:(long long)arg1 attemptCount:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)_anyChatExistsOnServerWithResultsLimit:(int)arg1 changeToken:(id)arg2 completion:(id /* block */)arg3;
- (id)_changeTokenKey;
- (bool)_chatZoneCreated;
- (id)_chatZoneID;
- (void)_clearStingRaySyncToken;
- (id)_copyChatsToUploadWithLimit:(unsigned long long)arg1;
- (id)_copyRecordIDsToDelete;
- (bool)_eligibleForTruthZone;
- (id)_fetchChatRecordOperation;
- (id)_generateLockRecord;
- (void)_handleChatDeletionCompletionForRecordIDs:(id)arg1 error:(id)arg2;
- (bool)_lockRecordHadConflict:(id)arg1;
- (void)_logGreenTeaLogsForChats:(id)arg1;
- (void)_markChatAsDefferedForSyncingUsingRecord:(id)arg1;
- (void)_migrateServerChangeToken;
- (id)_newckRecordsFromChats:(id)arg1;
- (unsigned long long)_numberOfChatsToFetch;
- (unsigned long long)_numberOfChatsToWrite;
- (void)_processFetchRecordChangesCompleted:(id)arg1 completion:(id /* block */)arg2 isUsingStingRay:(bool)arg3 syncType:(long long)arg4;
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2 isUsingStingRay:(bool)arg3;
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_processRecordChanged:(id)arg1 isUsingStingRay:(bool)arg2;
- (void)_processRecordDeletion:(id)arg1;
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3;
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(bool)arg4 error:(id)arg5;
- (id)_randomSalt;
- (id)_recordKeyManagerSharedInstance;
- (void)_resetChatSyncStateForRecord:(id)arg1;
- (void)_resetSyncToken;
- (void)_scheduleOperation:(id)arg1;
- (bool)_shouldMarkAllChatsAsNeedingReUpload;
- (bool)_shouldResyncChatsForError:(id)arg1;
- (void)_syncChatsWithCloudKitWithCompletionType:(long long)arg1 syncChatsCompletionBlock:(id /* block */)arg2;
- (void)_updateAllChatsAsNotNeedingReUpload;
- (void)_updateChatUsingCKRecord:(id)arg1;
- (void)_writeCKRecordsToChatZone:(id)arg1 isUsingStingRay:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_writeDirtyChatsToCloudKitWithCompletion:(id /* block */)arg1 isUsingStingRay:(bool)arg2;
- (void)anyChatExistsOnServerWithCompletion:(id /* block */)arg1;
- (id)chatRegistry;
- (id)ckQueue;
- (void)clearLocalSyncState;
- (void)dealloc;
- (void)deletChatSyncToken;
- (void)deleteChatZone;
- (bool)fetchedChatsDuringLastSync;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncToken;
- (id)lockRecord;
- (id)lockRecordForStingRay:(bool)arg1;
- (id)manateeLockRecord;
- (id)recordZoneManager;
- (void)setCKOperationFactory:(id)arg1;
- (void)setChatRegistry:(id)arg1;
- (void)setFetchedChatsDuringLastSync:(bool)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setLockRecord:(id)arg1;
- (void)setLockRecord:(id)arg1 isUsingStingRay:(bool)arg2;
- (void)setManateeLockRecord:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setStingRayLockRecord:(id)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (id)stingRayLockRecord;
- (void)syncChatsWithCloudKit:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)syncChatsWithCloudKitWithCompletion:(id /* block */)arg1;
- (long long)syncControllerRecordType;
- (void)syncPendingDeletionWithCompletion:(id /* block */)arg1;
- (id)syncTokenStore;

@end
