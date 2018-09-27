/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXAppPredictorFeedback : NSObject {
    NSData * _key;
}

+ (id)_appDictionaryForFeedbackItem:(id)arg1;
+ (double)_bucketize:(double)arg1 bucketSize:(double)arg2;
+ (id)_getLastAppsWithEngagedApp:(id)arg1 limit:(int)arg2;
+ (unsigned long long)_outcomeForEngagementType:(unsigned long long)arg1 engagedFeedbackItem:(id)arg2;
+ (void)_sessionObjectLoggingForFeedbackItems:(id)arg1 engagedBundleId:(id)arg2 shownBundleIdIndexes:(id)arg3 consumerType:(unsigned long long)arg4 consumerSubType:(unsigned char)arg5 outcome:(unsigned long long)arg6 aprIntentType:(id)arg7 aprFeedbackSource:(unsigned long long)arg8 aprEngagementType:(unsigned long long)arg9 aprSiriExperience:(unsigned long long)arg10;
+ (void)checkFeedbackContainsUninstalledApps:(id)arg1 consumerSubType:(unsigned char)arg2;
+ (id)constructFeatureDictionaryWithFeedbackItems:(id)arg1 engagedItem:(id)arg2 shownItemIndexes:(id)arg3 consumerType:(unsigned long long)arg4;
+ (id)constructSessionLogDictionaryWithFeedbackItems:(id)arg1 engagedBundleId:(id)arg2 shownBundleIdIndexes:(id)arg3 consumerType:(unsigned long long)arg4 consumerSubType:(unsigned char)arg5 outcome:(unsigned long long)arg6 annotation:(id)arg7 aprIntentType:(id)arg8 aprFeedbackSource:(unsigned long long)arg9 aprEngagementType:(unsigned long long)arg10 aprSiriExperience:(unsigned long long)arg11;
+ (long long)getEngagedItemIndexWithFeedbackItems:(id)arg1 engagedItem:(id)arg2;
+ (void)receiveFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7 abGroupIdentifier:(id)arg8;
+ (id)recordStore;
+ (id)sharedInstance;
+ (id)shuffle:(id)arg1;

- (void).cxx_destruct;
- (id)_deviceSpecificRandomKeyForSessionLoggingWithKeyLength:(unsigned long long)arg1 fileName:(id)arg2;
- (id)_hmacOfIntentType:(id)arg1;
- (id)initWithKeyLength:(unsigned long long)arg1 fileName:(id)arg2;

@end
