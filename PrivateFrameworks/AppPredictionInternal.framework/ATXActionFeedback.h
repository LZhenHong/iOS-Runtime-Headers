/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionFeedback : NSObject {
    double  _decayHalfLifeSeconds;
    PETScalarEventTracker * _engagedInitTracker;
    PETDistributionEventTracker * _engagedSlotTracker;
    PETScalarEventTracker * _engagementTracker;
    PETDistributionEventTracker * _predictedSlotTracker;
    PETScalarEventTracker * _predictionItemsTracker;
    PETDistributionEventTracker * _predictionsTracker;
    bool  _spotlightEngagmentMatchedLockscreen;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)applyFinalFeedbackForActionResponse:(id)arg1 engagementType:(unsigned long long)arg2;
- (void)decayCounts;
- (void)logHeuristicFeedback:(id)arg1;
- (void)logHeuristicFeedbackForAction:(id)arg1 actionType:(unsigned short)arg2;
- (void)processCachedATXActionResponseWithConsumerSubType:(unsigned char)arg1;
- (void)receiveFeedbackWithActionResponse:(id)arg1;
- (void)registerPredictionNotificationChangeDetected:(long long)arg1 was3dTouched:(bool)arg2;
- (void)removeMatchingLockScreenPredictionForAction:(id)arg1;
- (void)resetData;

@end
