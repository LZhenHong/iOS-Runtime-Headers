/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHTemplateSourceScheduler : NSObject <ACHAchievementStoreObserving, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    ACHAchievementStore * _achievementStore;
    bool  _achievementStoreDidFinishInitialFetch;
    NSDate * _currentDateOverride;
    NSCalendar * _gregorianCalendar;
    bool  _initialRunComplete;
    NSDictionary * _lastRunDateByTemplateSourceIdentifier;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldScheduleAfterInitialFetch;
    int  _significantTimeChangeToken;
    NSSet * _templateSources;
    ACHTemplateStore * _templateStore;
}

@property (nonatomic, readonly) unsigned long long _sourceCount;
@property (nonatomic, retain) ACHAchievementStore *achievementStore;
@property (nonatomic) bool achievementStoreDidFinishInitialFetch;
@property (nonatomic, retain) NSDate *currentDateOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCalendar *gregorianCalendar;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialRunComplete;
@property (nonatomic, retain) NSDictionary *lastRunDateByTemplateSourceIdentifier;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) bool shouldScheduleAfterInitialFetch;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *templateSources;
@property (nonatomic, retain) ACHTemplateStore *templateStore;

- (void).cxx_destruct;
- (id)_currentDate;
- (void)_queue_runTemplateSources:(id)arg1 requiringRunnnableForDate:(bool)arg2;
- (void)_runAllTemplateSources;
- (void)_runSynchronously;
- (id)_runnableSourcesInSources:(id)arg1 forDate:(id)arg2 calendar:(id)arg3;
- (unsigned long long)_sourceCount;
- (id)achievementStore;
- (void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
- (bool)achievementStoreDidFinishInitialFetch;
- (void)achievementStoreDidFinishInitialFetch:(id)arg1;
- (id)currentDateOverride;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)deregisterTemplateSource:(id)arg1;
- (id)gregorianCalendar;
- (id)initWithProfile:(id)arg1 templateStore:(id)arg2 achievementStore:(id)arg3;
- (bool)initialRunComplete;
- (id)lastRunDateByTemplateSourceIdentifier;
- (id)profile;
- (void)registerTemplateSource:(id)arg1;
- (void)runImmediatelyForTemplateSource:(id)arg1;
- (id)serialQueue;
- (void)setAchievementStore:(id)arg1;
- (void)setAchievementStoreDidFinishInitialFetch:(bool)arg1;
- (void)setCurrentDateOverride:(id)arg1;
- (void)setGregorianCalendar:(id)arg1;
- (void)setInitialRunComplete:(bool)arg1;
- (void)setLastRunDateByTemplateSourceIdentifier:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setShouldScheduleAfterInitialFetch:(bool)arg1;
- (void)setTemplateSources:(id)arg1;
- (void)setTemplateStore:(id)arg1;
- (bool)shouldScheduleAfterInitialFetch;
- (id)templateSources;
- (id)templateStore;

@end
