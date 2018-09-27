/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLLibraryManager : NSObject <CPLAbstractObject> {
    NSURL * _clientLibraryBaseURL;
    NSURL * _cloudLibraryResourceStorageURL;
    NSURL * _cloudLibraryStateStorageURL;
    CPLConfiguration * _configuration;
    CPLChangeSession * _currentSession;
    <CPLLibraryManagerDelegate> * _delegate;
    NSString * _effectiveClientBundleIdentifier;
    unsigned long long  _estimatedInitialAssetCountForLocalLibrary;
    unsigned long long  _estimatedInitialSizeForLocalLibrary;
    <CPLLibraryManagerForceSyncDelegate> * _forceSyncDelegate;
    NSObject<OS_dispatch_queue> * _initLock;
    NSString * _libraryIdentifier;
    unsigned long long  _libraryOptions;
    NSString * _libraryVersion;
    unsigned long long  _numberOfImagesToUpload;
    unsigned long long  _numberOfOtherItemsToUpload;
    unsigned long long  _numberOfVideosToUpload;
    <CPLLibraryManagerOwner> * _owner;
    CPLPlatformObject * _platformObject;
    bool  _preventObserving;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLResourceProgressDelegate> * _resourceProgressDelegate;
    NSObject<OS_dispatch_queue> * _sessionLock;
    unsigned long long  _sizeOfOriginalResourcesToUpload;
    unsigned long long  _sizeOfResourcesToUpload;
    bool  _sizeOfResourcesToUploadIsSet;
    unsigned long long  _state;
    unsigned long long  _status;
    NSError * _statusError;
    CPLStatus * _syncStatus;
    NSString * _userOverride;
    _CPLWeakLibraryManager * _weakSelf;
}

@property (nonatomic, readonly, copy) NSURL *clientLibraryBaseURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryResourceStorageURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryStateStorageURL;
@property (nonatomic, readonly) CPLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPLLibraryManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool diagnosticsEnabled;
@property (nonatomic, copy) NSString *effectiveClientBundleIdentifier;
@property (nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;
@property (nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;
@property (nonatomic) <CPLLibraryManagerForceSyncDelegate> *forceSyncDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *libraryIdentifier;
@property (nonatomic, readonly) unsigned long long libraryOptions;
@property (nonatomic, readonly, copy) NSString *libraryVersion;
@property (nonatomic, readonly) unsigned long long numberOfImagesToUpload;
@property (nonatomic, readonly) unsigned long long numberOfOtherItemsToUpload;
@property (nonatomic, readonly) unsigned long long numberOfVideosToUpload;
@property (nonatomic) <CPLLibraryManagerOwner> *owner;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic) <CPLResourceProgressDelegate> *resourceProgressDelegate;
@property (nonatomic, readonly) unsigned long long sizeOfOriginalResourcesToUpload;
@property (nonatomic, readonly) unsigned long long sizeOfResourcesToUpload;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSError *statusError;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPLStatus *syncStatus;
@property (nonatomic, copy) NSString *userOverride;

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
+ (void)useCloudPhotoDaemonImplementation;

- (void).cxx_destruct;
- (void)_closeDeactivating:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_configurationDidChange;
- (void)_getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)_mappedUnscopedIdentifiersFromScopedIdentifiers:(id)arg1;
- (void)_setCurrentSession:(id)arg1;
- (void)_setLibraryVersion:(id)arg1;
- (void)_setSizeOfResourcesToUpload:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (bool)_setStatus:(unsigned long long)arg1 andError:(id)arg2;
- (void)_statusDidChange;
- (void)acceptMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)addInfoToLog:(id)arg1;
- (void)addStatusChangesForRecordsWithIdentifiers:(id)arg1 persist:(bool)arg2;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(bool)arg2;
- (id)addSubscriberUsingPublishingHandler:(id /* block */)arg1;
- (void)barrier;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(bool)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)beginDownloadForResource:(id)arg1 highPriority:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)blockEngineElement:(id)arg1;
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)arg1;
- (id)clientLibraryBaseURL;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)cloudLibraryResourceStorageURL;
- (id)cloudLibraryStateStorageURL;
- (void)compactFileCacheWithCompletionHandler:(id /* block */)arg1;
- (id)configuration;
- (id)currentSession;
- (void)deactivateWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (bool)diagnosticsEnabled;
- (void)disableMainScopeWithCompletionHandler:(id /* block */)arg1;
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)discardCurrentSession;
- (id)effectiveClientBundleIdentifier;
- (void)enableMainScopeWithCompletionHandler:(id /* block */)arg1;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(id)arg1;
- (unsigned long long)estimatedInitialAssetCountForLocalLibrary;
- (unsigned long long)estimatedInitialSizeForLocalLibrary;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)forceSyncDelegate;
- (void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getChangedStatusesWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg1;
- (void)getLocalIdentifiersForCloudIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForRecordsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (id)initForManagement;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5;
- (id)libraryIdentifier;
- (unsigned long long)libraryOptions;
- (id)libraryVersion;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (unsigned long long)numberOfImagesToUpload;
- (unsigned long long)numberOfOtherItemsToUpload;
- (unsigned long long)numberOfVideosToUpload;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)owner;
- (id)platformObject;
- (void)publishMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)publishResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)reportMiscInformation:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenEnabled:(bool)arg2;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetStatus;
- (id)resourceProgressDelegate;
- (void)setDelegate:(id)arg1;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (void)setEffectiveClientBundleIdentifier:(id)arg1;
- (void)setEstimatedInitialAssetCountForLocalLibrary:(unsigned long long)arg1;
- (void)setEstimatedInitialSizeForLocalLibrary:(unsigned long long)arg1;
- (void)setForceSyncDelegate:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setResourceProgressDelegate:(id)arg1;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)setShouldOverrideSystemBudgetsForSyncSession:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUserOverride:(id)arg1;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (void)startSyncSession;
- (unsigned long long)state;
- (unsigned long long)status;
- (id)statusError;
- (id)syncStatus;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unblockEngineElement:(id)arg1;
- (void)unblockEngineElementOnce:(id)arg1;
- (id)userOverride;

@end
