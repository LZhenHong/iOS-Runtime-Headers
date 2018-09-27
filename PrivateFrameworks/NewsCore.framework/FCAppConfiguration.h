/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAppConfiguration : NSObject <FCCoreConfiguration, FCNewsAppConfiguration> {
    NSDictionary * _analyticsContentTypeConfigsByContentTypeByEnvironment;
    NTPBConfig * _config;
    NSDictionary * _endpointConfigsByEnvironment;
    FCForYouGroupsConfiguration * _forYouGroupsConfiguration;
    NSArray * _hiddenFeedIDs;
    FCIAdConfiguration * _iAdConfig;
    NTPBLanguageConfig * _languageConfig;
    FCNotificationsConfiguration * _notificationsConfig;
    NSArray * _onboardingFeedIDs;
    NSDictionary * _personalizationTreatments;
    FCPrefetchConfiguration * _prefetchConfig;
    NSArray * _presubscribedFeedIDs;
    bool  _privateDataEncryptionAllowed;
    bool  _privateDataEncryptionMigrationDesired;
    bool  _privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
    bool  _privateDataMigrationCleanupEnabled;
    NTPBDiscoverMoreVideosInfo * _shareDiscoverMoreVideosInfo;
    FCRecommendedCategory * _topLevelCategory;
    FCTopStoriesConfiguration * _topStoriesConfig;
    NSArray * _topStoriesPublishDates;
    FCWidgetConfig * _widgetConfig;
}

@property (nonatomic, readonly) NSDictionary *analyticsContentTypeConfigsByContentTypeByEnvironment;
@property (nonatomic, readonly) long long analyticsEndpointMaxPayloadSize;
@property (nonatomic, readonly) long long appConfigRefreshRate;
@property (nonatomic, readonly) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic, readonly) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic, readonly) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic, readonly) double articleDiversificationUniquePublisherExpectationYIntercept;
@property (nonatomic, readonly) long long articleRapidUpdatesTimeout;
@property (nonatomic, readonly) NSString *articleRecirculationComponentPlacementConfigJSON;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, readonly) long long articleRecirculationPopularFeedQueryTimeRange;
@property (nonatomic, readonly) long long autoRefreshMinimumInterval;
@property (nonatomic, readonly) long long autoScrollToTopFeedTimeout;
@property (nonatomic, readonly) NSString *breakingNewsChannelID;
@property (nonatomic, readonly) NSString *briefingsTagID;
@property (nonatomic, readonly, copy) NTPBConfig *config;
@property (nonatomic, readonly) bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property (nonatomic, readonly) long long corryBarMaxArticleCountForArticleList;
@property (nonatomic, readonly) long long corryBarMaxArticleCountForSingleArticle;
@property (nonatomic, readonly) NSNumber *currentTreatment;
@property (nonatomic, readonly) double delayBeforeRetryingDroppedFeeds;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool disableThumbnailsForArticleRecirculation;
@property (nonatomic, readonly) bool diversifyOptionalTopStories;
@property (nonatomic, readonly) NSString *editorialChannelID;
@property (nonatomic, readonly) NSString *editorialGemsSectionID;
@property (nonatomic, readonly) NSString *embedConfigurationAssetID;
@property (nonatomic, readonly) bool enableBadgeInSpotlightTabBar;
@property (nonatomic, readonly) long long endOfArticleMaxInaccessiblePaidArticleCount;
@property (nonatomic, readonly) double endOfArticleMinPaidHeadlineRatio;
@property (nonatomic, readonly) NSDictionary *endpointConfigsByEnvironment;
@property (nonatomic, readonly) NSString *experimentalizableFieldPostfix;
@property (nonatomic, readonly) long long expirePinnedArticlesAfter;
@property (nonatomic, readonly) long long expiredPaidSubscriptionGroupCutoffTime;
@property (nonatomic, readonly) NSString *exploreArticleID;
@property (nonatomic, readonly) NSArray *externalAnalyticsConfigurations;
@property (nonatomic, readonly) NSString *featuredStoriesTagID;
@property (nonatomic, readonly) NSString *feedNavigationConfigJSON;
@property (nonatomic, readonly) FCForYouGroupsConfiguration *forYouGroupsConfiguration;
@property (nonatomic, readonly) NSString *forYouRecordConfigID;
@property (nonatomic, readonly, copy) FCVideoGroupsConfig *forYouVideoGroupsConfig;
@property (nonatomic, readonly) NSArray *hiddenFeedIDs;
@property (nonatomic, readonly) FCIAdConfiguration *iAdConfig;
@property (nonatomic, readonly) double interstitialAdLoadDelay;
@property (nonatomic, readonly) bool isExpired;
@property (nonatomic, readonly) bool isSpecialEventsMicaAnimationDisabled;
@property (nonatomic, readonly, copy) NTPBLanguageConfig *languageConfig;
@property (nonatomic, readonly) long long maxRetriesForDroppedFeeds;
@property (nonatomic, readonly) long long maximumNumberOfExpiredPaidSubscriptionGroups;
@property (nonatomic, readonly) long long maximumPaidSubscriptionGroupSizeiPad;
@property (nonatomic, readonly) long long maximumPaidSubscriptionGroupSizeiPhone;
@property (nonatomic, readonly) long long maximumTimesHeadlineInPaidSubscriptionGroup;
@property (nonatomic, readonly) NSArray *mediaSharingBlacklistedChannelIDs;
@property (nonatomic, readonly) long long minimumDistanceBetweenImageOnTopTiles;
@property (nonatomic, readonly) long long minimumDurationBetweenForYouGroupsWeekday;
@property (nonatomic, readonly) long long minimumDurationBetweenForYouGroupsWeekend;
@property (nonatomic, readonly) long long minimumDurationBetweenTrendingGroupsWeekday;
@property (nonatomic, readonly) long long minimumDurationBetweenTrendingGroupsWeekend;
@property (nonatomic, readonly) long long minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
@property (nonatomic, readonly) double minimumTrendingUnseenRatio;
@property (nonatomic, readonly) NSString *moreVideosChannelID;
@property (nonatomic, readonly) long long newFavoriteNotificationAlertsFrequency;
@property (nonatomic, readonly) long long notificationArticleCacheTimeout;
@property (nonatomic, readonly) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property (nonatomic, readonly) long long notificationEnabledChannelsRefreshFrequency;
@property (nonatomic, readonly) FCNotificationsConfiguration *notificationsConfig;
@property (nonatomic, readonly) NSArray *onboardingFeedIDs;
@property (nonatomic, readonly) long long optionalTopStoriesRefreshRate;
@property (getter=isOrderFeedEndpointEnabled, nonatomic, readonly) bool orderFeedEndpointEnabled;
@property (nonatomic, readonly) double parsecPopulationCeiling;
@property (nonatomic, readonly) double parsecPopulationFloor;
@property (nonatomic, readonly) NSString *personalizationBundleIdMappingResourceId;
@property (nonatomic, readonly) NSString *personalizationFavorabilityResourceId;
@property (nonatomic, readonly) NSDictionary *personalizationTreatments;
@property (nonatomic, readonly) NSString *personalizationUrlMappingResourceId;
@property (nonatomic, readonly) NSString *personalizationWhitelistResourceId;
@property (nonatomic, readonly) FCPrefetchConfiguration *prefetchConfig;
@property (nonatomic, readonly) double prerollLoadingTimeout;
@property (nonatomic, readonly) NSArray *presubscribedFeedIDs;
@property (getter=isPrivateDataEncryptionAllowed, nonatomic, readonly) bool privateDataEncryptionAllowed;
@property (getter=isPrivateDataEncryptionMigrationDesired, nonatomic, readonly) bool privateDataEncryptionMigrationDesired;
@property (nonatomic, readonly) bool privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
@property (getter=isPrivateDataMigrationCleanupEnabled, nonatomic, readonly) bool privateDataMigrationCleanupEnabled;
@property (nonatomic, readonly) long long savedArticlesCutoffTime;
@property (nonatomic, readonly) long long savedArticlesMaximumCountCellular;
@property (nonatomic, readonly) long long savedArticlesMaximumCountWiFi;
@property (nonatomic, readonly) long long savedArticlesOpenedCutoffTime;
@property (nonatomic, readonly) NSString *savedStoriesTagID;
@property (nonatomic, readonly) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo;
@property (nonatomic, readonly) bool shouldShowAlternateHeadlines;
@property (nonatomic, readonly) long long showCardNavHintMaxCount;
@property (nonatomic, readonly) long long singleChannelFeedMinFeedItemsPerRequest;
@property (nonatomic, readonly) long long singleTopicFeedMinFeedItemsPerRequest;
@property (nonatomic, readonly) long long stateRestorationAllowedTimeWindow;
@property (nonatomic, readonly) long long subscriptionsGlobalMeteredCount;
@property (nonatomic, readonly) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property (nonatomic, readonly) long long subscriptionsPlacardGlobalMaximumPerDay;
@property (nonatomic, readonly) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property (nonatomic, readonly) bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property (nonatomic, readonly) double tileProminenceScoreBalanceValue;
@property (nonatomic, readonly) FCRecommendedCategory *topLevelCategory;
@property (nonatomic, readonly) NSArray *topLevelCuratedTagIDs;
@property (nonatomic, readonly) NSArray *topLevelRecommendedChannelTagIDs;
@property (nonatomic, readonly) NSArray *topLevelRecommendedTopicTagIDs;
@property (nonatomic, readonly) FCTopStoriesConfiguration *topStoriesConfig;
@property (nonatomic, readonly, copy) NSArray *topStoriesPublishDates;
@property (nonatomic, readonly) NSString *topVideosChannelID;
@property (nonatomic, readonly) unsigned long long trendingStyle;
@property (nonatomic, readonly) NSString *trendingTagID;
@property (nonatomic, readonly) long long trendingTopicsRefreshRate;
@property (nonatomic, readonly) bool universalLinksEnabled;
@property (nonatomic, readonly) bool useSecureConnectionForAssets;
@property (nonatomic, readonly) NSString *webEmbedContentBlockers;
@property (nonatomic, readonly, copy) FCWidgetConfig *widgetConfig;
@property (nonatomic, readonly) NSString *widgetConfigID;
@property (nonatomic, readonly) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property (nonatomic, readonly) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;

+ (id)_categoryFromProtobufCategory:(id)arg1;

- (void).cxx_destruct;
- (id)analyticsContentTypeConfigsByContentTypeByEnvironment;
- (long long)analyticsEndpointMaxPayloadSize;
- (id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
- (long long)appConfigRefreshRate;
- (double)articleDiversificationSimilarityExpectationEnd;
- (double)articleDiversificationSimilarityExpectationStart;
- (double)articleDiversificationUniquePublisherExpectationSlope;
- (double)articleDiversificationUniquePublisherExpectationYIntercept;
- (long long)articleRapidUpdatesTimeout;
- (id)articleRecirculationComponentPlacementConfigJSON;
- (id)articleRecirculationConfigJSON;
- (long long)articleRecirculationPopularFeedQueryTimeRange;
- (long long)autoRefreshMinimumInterval;
- (long long)autoScrollToTopFeedTimeout;
- (id)breakingNewsChannelID;
- (id)briefingsTagID;
- (id)config;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
- (long long)corryBarMaxArticleCountForArticleList;
- (long long)corryBarMaxArticleCountForSingleArticle;
- (id)currentTreatment;
- (double)delayBeforeRetryingDroppedFeeds;
- (id)description;
- (bool)disableThumbnailsForArticleRecirculation;
- (bool)diversifyOptionalTopStories;
- (id)editorialChannelID;
- (id)editorialGemsSectionID;
- (id)embedConfigurationAssetID;
- (bool)enableBadgeInSpotlightTabBar;
- (long long)endOfArticleMaxInaccessiblePaidArticleCount;
- (double)endOfArticleMinPaidHeadlineRatio;
- (id)endpointConfigsByEnvironment;
- (id)experimentalizableFieldPostfix;
- (long long)expirePinnedArticlesAfter;
- (long long)expiredPaidSubscriptionGroupCutoffTime;
- (id)exploreArticleID;
- (id)externalAnalyticsConfigurations;
- (id)featuredStoriesTagID;
- (id)feedNavigationConfigJSON;
- (id)forYouGroupsConfiguration;
- (id)forYouRecordConfigID;
- (id)forYouVideoGroupsConfig;
- (id)hiddenFeedIDs;
- (id)iAdConfig;
- (id)init;
- (id)initWithConfig:(id)arg1 languageConfig:(id)arg2 widgetConfig:(id)arg3 hiddenFeedIDs:(id)arg4 presubscribedFeedIDs:(id)arg5 onboardingFeedIDs:(id)arg6;
- (double)interstitialAdLoadDelay;
- (bool)isOrderFeedEndpointEnabled;
- (bool)isPrivateDataEncryptionAllowed;
- (bool)isPrivateDataEncryptionMigrationDesired;
- (bool)isPrivateDataMigrationCleanupEnabled;
- (bool)isSpecialEventsMicaAnimationDisabled;
- (id)languageConfig;
- (long long)maxRetriesForDroppedFeeds;
- (long long)maximumNumberOfExpiredPaidSubscriptionGroups;
- (long long)maximumPaidSubscriptionGroupSizeiPad;
- (long long)maximumPaidSubscriptionGroupSizeiPhone;
- (long long)maximumTimesHeadlineInPaidSubscriptionGroup;
- (id)mediaSharingBlacklistedChannelIDs;
- (long long)minimumDistanceBetweenImageOnTopTiles;
- (long long)minimumDurationBetweenForYouGroupsWeekday;
- (long long)minimumDurationBetweenForYouGroupsWeekend;
- (long long)minimumDurationBetweenTrendingGroupsWeekday;
- (long long)minimumDurationBetweenTrendingGroupsWeekend;
- (long long)minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
- (double)minimumTrendingUnseenRatio;
- (id)moreVideosChannelID;
- (long long)newFavoriteNotificationAlertsFrequency;
- (long long)notificationArticleCacheTimeout;
- (long long)notificationArticleWithRapidUpdatesCacheTimeout;
- (long long)notificationEnabledChannelsRefreshFrequency;
- (id)notificationsConfig;
- (id)onboardingFeedIDs;
- (long long)optionalTopStoriesRefreshRate;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (id)personalizationBundleIdMappingResourceId;
- (id)personalizationFavorabilityResourceId;
- (id)personalizationTreatmentForFeldsparID:(id)arg1;
- (id)personalizationTreatments;
- (id)personalizationUrlMappingResourceId;
- (id)personalizationWhitelistResourceId;
- (id)prefetchConfig;
- (double)prerollLoadingTimeout;
- (id)presubscribedFeedIDs;
- (bool)privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
- (long long)savedArticlesCutoffTime;
- (long long)savedArticlesMaximumCountCellular;
- (long long)savedArticlesMaximumCountWiFi;
- (long long)savedArticlesOpenedCutoffTime;
- (id)savedStoriesTagID;
- (id)shareDiscoverMoreVideosInfo;
- (bool)shouldShowAlternateHeadlines;
- (long long)singleChannelFeedMinFeedItemsPerRequest;
- (long long)singleTopicFeedMinFeedItemsPerRequest;
- (long long)stateRestorationAllowedTimeWindow;
- (long long)subscriptionsGlobalMeteredCount;
- (long long)subscriptionsGracePeriodForTokenVerificationSeconds;
- (long long)subscriptionsPlacardGlobalMaximumPerDay;
- (long long)subscriptionsPlacardPublisherFrequencyInSeconds;
- (bool)terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
- (double)tileProminenceScoreBalanceValue;
- (id)todayConfigWithQueueConfigs:(id)arg1 maxSlotCount:(unsigned long long)arg2;
- (id)topLevelCategory;
- (id)topLevelCuratedTagIDs;
- (id)topLevelRecommendedChannelTagIDs;
- (id)topLevelRecommendedTopicTagIDs;
- (id)topStoriesConfig;
- (id)topStoriesPublishDates;
- (id)topVideosChannelID;
- (unsigned long long)trendingStyle;
- (id)trendingTagID;
- (long long)trendingTopicsRefreshRate;
- (bool)universalLinksEnabled;
- (bool)useSecureConnectionForAssets;
- (id)widgetConfig;
- (id)widgetConfigID;
- (long long)widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
- (unsigned int)widgetMinimumNumberOfTimesPreseenToBeSeen;

@end
