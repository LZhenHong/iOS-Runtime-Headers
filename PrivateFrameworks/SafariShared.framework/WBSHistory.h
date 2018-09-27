/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate> {
    NSMutableDictionary * _entriesByURLString;
    NSObject<OS_dispatch_queue> * _entriesByURLStringAccessQueue;
    bool  _hasStartedLoadingHistory;
    double  _historyAgeLimit;
    <WBSHistoryStore> * _historyStore;
    NSCountedSet * _stringsForUserTypedDomainExpansion;
    NSObject<OS_dispatch_queue> * _waitUntilHistoryHasLoadedQueue;
}

@property (readonly) NSArray *allItems;
@property (nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *fetchThrottlerData;
@property (nonatomic, readonly) bool hasAnyHistoryItems;
@property (readonly) unsigned long long hash;
@property (nonatomic) double historyAgeLimit;
@property (nonatomic, readonly) unsigned long long numberOfHistoryItems;
@property (nonatomic, readonly) unsigned long long numberOfHistoryItemsOnHistoryQueue;
@property (nonatomic) bool pushNotificationsAreInitialized;
@property (nonatomic, copy) NSData *pushThrottlerData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *syncCircleSizeRetrievalThrottlerData;

+ (void)clearExistingSharedHistory;
+ (id)existingSharedHistory;
+ (id)historyDatabaseURL;
+ (id)historyDatabaseWriteAheadLogURL;
+ (id)historyPropertyListURL;

- (void).cxx_destruct;
- (void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(bool)arg2;
- (void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (id)_createHistoryStore;
- (void)_dispatchHistoryCleared:(id)arg1;
- (void)_dispatchHistoryItemDidChange:(id)arg1 byUserInitiatedAction:(bool)arg2;
- (void)_dispatchHistoryItemWillChange:(id)arg1;
- (void)_dispatchHistoryItemsAdded:(id)arg1 byUserInitiatedAction:(bool)arg2;
- (void)_dispatchHistoryItemsLoaded:(id)arg1;
- (void)_dispatchHistoryItemsRemoved:(id)arg1;
- (void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1;
- (void)_dispatchHistoryLoaded;
- (void)_dispatchHistoryVisitAdded:(id)arg1;
- (Class)_historyItemClass;
- (bool)_isStringForUserTypedDomainExpansionInHistory:(id)arg1;
- (void)_loadHistory;
- (void)_loadHistoryAsynchronouslyIfNeeded;
- (void)_removeAllVisitedLinks;
- (void)_removeHistoryItemsInResponseToUserAction:(id)arg1;
- (id)_removeItemForURLString:(id)arg1;
- (void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_removeItemsInResponseToUserAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sendNotification:(id)arg1 withItems:(id)arg2;
- (void)_setAttributes:(unsigned long long)arg1 forVisit:(id)arg2;
- (void)_startLoading;
- (void)_unload;
- (void)_waitUntilHistoryHasLoadedMainThread;
- (void)addAttributes:(unsigned long long)arg1 toVisit:(id)arg2;
- (void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2;
- (id)allItems;
- (unsigned long long)cachedNumberOfDevicesInSyncCircle;
- (bool)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2;
- (void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clearHistory;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)close;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)enumerateItemsAsynchronouslyUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (id)fetchThrottlerData;
- (void)getAllTombstonesWithCompletion:(id /* block */)arg1;
- (void)getServerChangeTokenDataWithCompletion:(id /* block */)arg1;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(id /* block */)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasAnyHistoryItems;
- (double)historyAgeLimit;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
- (void)historyStore:(id)arg1 didRemoveItems:(id)arg2;
- (void)historyStore:(id)arg1 didRemoveVisits:(id)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (id)init;
- (id)itemForURL:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(long long)arg3 date:(id)arg4;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(bool)arg4 wasFailure:(bool)arg5 increaseVisitCount:(bool)arg6 origin:(long long)arg7;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(bool)arg4 wasFailure:(bool)arg5 increaseVisitCount:(bool)arg6 origin:(long long)arg7 attributes:(unsigned long long)arg8;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(bool)arg3 wasFailure:(bool)arg4 increaseVisitCount:(bool)arg5;
- (id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (unsigned long long)numberOfHistoryItems;
- (unsigned long long)numberOfHistoryItemsOnHistoryQueue;
- (void)performBlockAfterHistoryHasLoaded:(id /* block */)arg1;
- (void)performMaintenance;
- (void)performMaintenance:(id /* block */)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (bool)pushNotificationsAreInitialized;
- (id)pushThrottlerData;
- (void)removeAttributes:(unsigned long long)arg1 fromVisit:(id)arg2;
- (void)removeItemsInResponseToUserAction:(id)arg1;
- (void)replayAndAddTombstone:(id)arg1;
- (void)resetCloudHistoryDataWithCompletionHandler:(id /* block */)arg1;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(id /* block */)arg1;
- (void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)setFetchThrottlerData:(id)arg1;
- (void)setHistoryAgeLimit:(double)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (void)setPushNotificationsAreInitialized:(bool)arg1;
- (void)setPushThrottlerData:(id)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setSyncCircleSizeRetrievalThrottlerData:(id)arg1;
- (id)syncCircleSizeRetrievalThrottlerData;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateTitle:(id)arg1 forVisit:(id)arg2;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(bool)arg2 completion:(id /* block */)arg3;
- (void)waitUntilHistoryHasLoaded;

@end
