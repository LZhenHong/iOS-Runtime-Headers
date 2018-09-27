/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage> {
    CPLBatchExtractionStrategy * _extractionStrategy;
    double  _lastApproximativeUploadRate;
    NSString * _lastStrategyName;
    NSDate * _lastUploadRateUpdateDate;
    NSMutableDictionary * _propertiesPerClass;
    NSObject<OS_dispatch_queue> * _timingStatisticQueue;
    NSMutableDictionary * _timingStatistics;
    NSObject<OS_dispatch_queue> * _uploadRateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPLBatchExtractionStrategy *extractionStrategy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumResourceSizePerBatch;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_completeChange:(id)arg1;
- (id)_propertiesForChange:(id)arg1;
- (id)_timingStatisticStatuses;
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(bool)arg3;
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;
- (id)allChangesWithScopeIdentifier:(id)arg1;
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (id)changeWithScopedIdentifier:(id)arg1;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;
- (bool)deleteAllChangesWithError:(id*)arg1;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)discardChangeWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (id)extractionStrategy;
- (bool)hasChangesInScopeWithIdentifier:(id)arg1;
- (bool)hasChangesWithScopeFilter:(id)arg1;
- (bool)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)isEmpty;
- (unsigned long long)maximumResourceSizePerBatch;
- (bool)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 overwrittenRecord:(bool*)arg3 error:(id*)arg4;
- (bool)reinjectExtractedBatch:(id)arg1 overwrittenRecordIdentifiers:(id*)arg2 error:(id*)arg3;
- (bool)removeChange:(id)arg1 error:(id*)arg2;
- (unsigned long long)scopeType;
- (void)setExtractionStrategy:(id)arg1;
- (id)status;
- (bool)storeChange:(id)arg1 uploadIdentifier:(id)arg2 error:(id*)arg3;
- (bool)storeExtractedBatch:(id)arg1 error:(id*)arg2;
- (id)storedExtractedBatch;
- (void)updateApproximativeUploadRate:(double)arg1;
- (void)updateTimingStatisticForKey:(id)arg1 duration:(double)arg2 recordCount:(unsigned long long)arg3 error:(bool)arg4;

@end
