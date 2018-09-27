/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface LocalKeychainAnalytics : SFAnalytics {
    int  _notificationToken;
    NSMutableArray * _pendingReports;
    bool  _probablyInClassD;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)databasePath;

- (void).cxx_destruct;
- (bool)canPersistMetrics;
- (id)init;
- (void)processPendingMessages;
- (void)reportKeychainUpgradeFrom:(int)arg1 to:(int)arg2 outcome:(int)arg3 error:(id)arg4;
- (void)reportKeychainUpgradeOutcome:(int)arg1 attributes:(id)arg2;

@end
