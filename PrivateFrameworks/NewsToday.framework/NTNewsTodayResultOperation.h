/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTNewsTodayResultOperation : NTTodayResultOperation {
    NSDate * _filterDate;
    NTCatchUpOperationForYouFetchInfo * _forYouFetchInfo;
    bool  _lastOperationFailedToFinish;
    NSDictionary * _resultAssetHandlesByAssetID;
    NSObject * _resultAssetsHoldToken;
    NTPBTodayResultOperationFetchInfo * _resultFetchInfo;
    NTTodayResults * _resultTodayResults;
    NSDictionary * _todayConfigOperationHeldRecordsByType;
}

@property (nonatomic, copy) NSDate *filterDate;
@property (nonatomic, copy) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic) bool lastOperationFailedToFinish;
@property (nonatomic, copy) NSDictionary *resultAssetHandlesByAssetID;
@property (nonatomic, retain) NSObject *resultAssetsHoldToken;
@property (nonatomic, copy) NTPBTodayResultOperationFetchInfo *resultFetchInfo;
@property (nonatomic, copy) NTTodayResults *resultTodayResults;
@property (nonatomic, retain) NSDictionary *todayConfigOperationHeldRecordsByType;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_assembleQueueDescriptorsWithConfig:(id)arg1 allowOnlyWatchEligibleSections:(bool)arg2 respectsWidgetVisibleSectionsLimit:(bool)arg3 personalizationTreatment:(id)arg4 aggregateStore:(id)arg5 appConfiguration:(id)arg6 todayData:(id)arg7 completion:(id /* block */)arg8;
- (void)_fetchTodayResultsWithFetchHelper:(id)arg1 maximumCachedAgeForForYou:(unsigned long long)arg2 aggregator:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(id /* block */)arg7;
- (void)_finalizeTodayResultsWithSectionDescriptors:(id)arg1 catchUpOperationResultsBySectionDescriptor:(id)arg2 itemIDsOfLeadingCells:(id)arg3 slotAllocationByDynamicSlotItemID:(id)arg4 appConfiguration:(id)arg5 feedPersonalizer:(id)arg6 completion:(id /* block */)arg7;
- (void)_registerForYouFetchWithForYouFetchInfo:(id)arg1;
- (id)_sectionCTRsWithTodayConfig:(id)arg1 personalizationTreatment:(id)arg2 aggregateStore:(id)arg3;
- (bool)_useForegroundMinimumUpdateInterval;
- (id)filterDate;
- (id)forYouFetchInfo;
- (id)init;
- (bool)lastOperationFailedToFinish;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)resultAssetHandlesByAssetID;
- (id)resultAssetsHoldToken;
- (id)resultFetchInfo;
- (id)resultTodayResults;
- (void)setFilterDate:(id)arg1;
- (void)setForYouFetchInfo:(id)arg1;
- (void)setLastOperationFailedToFinish:(bool)arg1;
- (void)setResultAssetHandlesByAssetID:(id)arg1;
- (void)setResultAssetsHoldToken:(id)arg1;
- (void)setResultFetchInfo:(id)arg1;
- (void)setResultTodayResults:(id)arg1;
- (void)setTodayConfigOperationHeldRecordsByType:(id)arg1;
- (id)todayConfigOperationHeldRecordsByType;
- (bool)validateOperation;

@end
