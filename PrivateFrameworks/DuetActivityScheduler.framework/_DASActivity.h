/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASActivity : NSObject <NSCopying, NSSecureCoding> {
    CDAttribute * _admissionAttribute;
    bool  _afterUserIsInactive;
    bool  _beforeDaysFirstActivity;
    bool  _beforeUserIsActive;
    unsigned long long  _budgetingToken;
    NSString * _bundleId;
    bool  _bypassesPredictions;
    bool  _cancelAfterDeadline;
    bool  _cpuIntensive;
    bool  _darkWakeEligible;
    bool  _diskIntensive;
    unsigned long long  _downloadSize;
    unsigned long long  _duration;
    _DASFileProtection * _fileProtection;
    NSString * _groupName;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    bool  _isUpload;
    double  _lastComputedScore;
    NSDate * _lastScored;
    NSString * _launchReason;
    bool  _memoryIntensive;
    CDAttribute * _meteringAttribute;
    long long  _motionState;
    NSString * _name;
    int  _pid;
    NSMutableDictionary * _policyScores;
    double  _predictedOptimalScore;
    NSDate * _predictedOptimalStartDate;
    NSArray * _relatedApplications;
    long long  _relevancy;
    bool  _requestsApplicationLaunch;
    bool  _requiresDeviceInactivity;
    bool  _requiresInexpensiveNetworking;
    bool  _requiresNetwork;
    bool  _requiresPlugin;
    NSArray * _schedulerRecommendedApplications;
    unsigned long long  _schedulingPriority;
    bool  _shouldBePersisted;
    NSDate * _startAfter;
    NSDate * _startBefore;
    NSDate * _startDate;
    id /* block */  _startHandler;
    NSDate * _submitDate;
    bool  _supportsAnyApplication;
    id /* block */  _suspendHandler;
    bool  _suspendRequested;
    bool  _suspendable;
    long long  _targetDevice;
    bool  _triggersRestart;
    unsigned long long  _uploadSize;
    NSDictionary * _userInfo;
    NSUUID * _uuid;
    bool  _wasForceRun;
}

@property (nonatomic, retain) CDAttribute *admissionAttribute;
@property (nonatomic) bool afterUserIsInactive;
@property (nonatomic) bool beforeDaysFirstActivity;
@property (nonatomic) bool beforeUserIsActive;
@property (nonatomic) bool budgeted;
@property (nonatomic) unsigned long long budgetingToken;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) bool bypassesPredictions;
@property (nonatomic) bool cancelAfterDeadline;
@property (nonatomic) bool cpuIntensive;
@property (nonatomic) bool darkWakeEligible;
@property (nonatomic) bool diskIntensive;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, copy) _DASFileProtection *fileProtection;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (nonatomic) bool hasMagneticSensitivity;
@property (nonatomic) bool isUpload;
@property (nonatomic) double lastComputedScore;
@property (retain) NSDate *lastScored;
@property (nonatomic, copy) NSString *launchReason;
@property (nonatomic) bool memoryIntensive;
@property (nonatomic, retain) CDAttribute *meteringAttribute;
@property (nonatomic) long long motionState;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int pid;
@property (retain) NSMutableDictionary *policyScores;
@property (nonatomic) double predictedOptimalScore;
@property (nonatomic, retain) NSDate *predictedOptimalStartDate;
@property (nonatomic, retain) NSArray *relatedApplications;
@property (nonatomic) long long relevancy;
@property (nonatomic) bool requestsApplicationLaunch;
@property (nonatomic) bool requestsNewsstandLaunch;
@property (nonatomic) bool requiresDeviceInactivity;
@property (nonatomic) bool requiresInexpensiveNetworking;
@property (nonatomic) bool requiresNetwork;
@property (nonatomic) bool requiresPlugin;
@property (nonatomic) bool requiresSignificantUserInactivity;
@property (nonatomic, retain) NSArray *schedulerRecommendedApplications;
@property (nonatomic) unsigned long long schedulingPriority;
@property (nonatomic) bool shouldBePersisted;
@property (retain) NSDate *startAfter;
@property (retain) NSDate *startBefore;
@property (retain) NSDate *startDate;
@property (nonatomic, copy) id /* block */ startHandler;
@property (nonatomic, retain) NSDate *submitDate;
@property (nonatomic) bool supportsAnyApplication;
@property (nonatomic, copy) id /* block */ suspendHandler;
@property (nonatomic) bool suspendRequested;
@property (nonatomic) bool suspendable;
@property (nonatomic) long long targetDevice;
@property (nonatomic) unsigned long long transferSize;
@property (nonatomic) bool triggersRestart;
@property (nonatomic) unsigned long long uploadSize;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic) bool wasForceRun;

+ (id)activityWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5;
+ (id)anyApplicationActivityWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5 limitedToApplications:(id)arg6;
+ (id)applicationLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forApplication:(id)arg3 withReason:(id)arg4 duration:(unsigned long long)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (unsigned long long)cleanDuration:(unsigned long long)arg1;
+ (unsigned long long)cleanSchedulingPriority:(unsigned long long)arg1;
+ (unsigned long long)cleanTransferSize:(unsigned long long)arg1;
+ (id)launchForRemoteNotificationWithTopic:(id)arg1 withPayload:(id)arg2 highPriority:(bool)arg3;
+ (id)launchWithTopic:(id)arg1 forReason:(id)arg2 withPayload:(id)arg3 highPriority:(bool)arg4;
+ (id)networkingActivityWithName:(id)arg1 priority:(unsigned long long)arg2 downloadSize:(unsigned long long)arg3 uploadSize:(unsigned long long)arg4 expensiveNetworkingAllowed:(bool)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (id)networkingActivityWithName:(id)arg1 priority:(unsigned long long)arg2 transferSize:(unsigned long long)arg3 isUpload:(bool)arg4 expensiveNetworkingAllowed:(bool)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (id)prettySchedulingPriorityDescription:(unsigned long long)arg1;
+ (id)sharedDateFormatter;
+ (bool)supportsSecureCoding;
+ (id)validClassesForUserInfoSerialization;

- (void).cxx_destruct;
- (id)admissionAttribute;
- (bool)afterUserIsInactive;
- (bool)beforeDaysFirstActivity;
- (bool)beforeUserIsActive;
- (bool)budgeted;
- (unsigned long long)budgetingToken;
- (id)bundleId;
- (bool)bypassesPredictions;
- (bool)cancelAfterDeadline;
- (double)compatibilityWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cpuIntensive;
- (bool)darkWakeEligible;
- (id)debugDescription;
- (id)description;
- (bool)diskIntensive;
- (unsigned long long)downloadSize;
- (unsigned long long)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProtection;
- (id)groupName;
- (id)handlerQueue;
- (bool)hasMagneticSensitivity;
- (bool)hasManyConstraints;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isIdenticalLaunchTo:(id)arg1;
- (bool)isIntensive;
- (bool)isSilentPush;
- (bool)isUpload;
- (bool)keepsPrevious;
- (double)lastComputedScore;
- (id)lastScored;
- (id)launchReason;
- (bool)memoryIntensive;
- (id)meteringAttribute;
- (long long)motionState;
- (id)name;
- (id)nameString;
- (bool)overdueAtDate:(id)arg1;
- (bool)overwritesPrevious;
- (int)pid;
- (id)policyScores;
- (double)predictedOptimalScore;
- (id)predictedOptimalStartDate;
- (id)relatedApplications;
- (long long)relevancy;
- (bool)requestsApplicationLaunch;
- (bool)requestsNewsstandLaunch;
- (bool)requiresDeviceInactivity;
- (bool)requiresInexpensiveNetworking;
- (bool)requiresNetwork;
- (bool)requiresPlugin;
- (bool)requiresSignificantUserInactivity;
- (id)schedulerRecommendedApplications;
- (unsigned long long)schedulingPriority;
- (void)setAdmissionAttribute:(id)arg1;
- (void)setAfterUserIsInactive:(bool)arg1;
- (void)setBeforeDaysFirstActivity:(bool)arg1;
- (void)setBeforeUserIsActive:(bool)arg1;
- (void)setBudgeted:(bool)arg1;
- (void)setBudgetingToken:(unsigned long long)arg1;
- (void)setBundleId:(id)arg1;
- (void)setBypassesPredictions:(bool)arg1;
- (void)setCancelAfterDeadline:(bool)arg1;
- (void)setConstraintsWithXPCDictionary:(id)arg1;
- (void)setCpuIntensive:(bool)arg1;
- (void)setDarkWakeEligible:(bool)arg1;
- (void)setDiskIntensive:(bool)arg1;
- (void)setDownloadSize:(unsigned long long)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setFileProtection:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setHasMagneticSensitivity:(bool)arg1;
- (void)setIsUpload:(bool)arg1;
- (void)setLastComputedScore:(double)arg1;
- (void)setLastScored:(id)arg1;
- (void)setLaunchReason:(id)arg1;
- (void)setMemoryIntensive:(bool)arg1;
- (void)setMeteringAttribute:(id)arg1;
- (void)setMotionState:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setPolicyScores:(id)arg1;
- (void)setPredictedOptimalScore:(double)arg1;
- (void)setPredictedOptimalStartDate:(id)arg1;
- (void)setRelatedApplications:(id)arg1;
- (void)setRelevancy:(long long)arg1;
- (void)setRequestsApplicationLaunch:(bool)arg1;
- (void)setRequestsNewsstandLaunch:(bool)arg1;
- (void)setRequiresDeviceInactivity:(bool)arg1;
- (void)setRequiresInexpensiveNetworking:(bool)arg1;
- (void)setRequiresNetwork:(bool)arg1;
- (void)setRequiresPlugin:(bool)arg1;
- (void)setRequiresSignificantUserInactivity:(bool)arg1;
- (void)setSchedulerRecommendedApplications:(id)arg1;
- (void)setSchedulingPriority:(unsigned long long)arg1;
- (void)setShouldBePersisted:(bool)arg1;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartHandler:(id /* block */)arg1;
- (void)setSubmitDate:(id)arg1;
- (void)setSupportsAnyApplication:(bool)arg1;
- (void)setSuspendHandler:(id /* block */)arg1;
- (void)setSuspendRequested:(bool)arg1;
- (void)setSuspendable:(bool)arg1;
- (void)setTargetDevice:(long long)arg1;
- (void)setTransferSize:(unsigned long long)arg1;
- (void)setTriggersRestart:(bool)arg1;
- (void)setUploadSize:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWasForceRun:(bool)arg1;
- (id)shortDescription;
- (bool)shouldBePersisted;
- (id)startAfter;
- (id)startBefore;
- (id)startDate;
- (id /* block */)startHandler;
- (id)submitDate;
- (bool)supportsAnyApplication;
- (id /* block */)suspendHandler;
- (bool)suspendRequested;
- (bool)suspendable;
- (long long)targetDevice;
- (bool)timewiseEligibleAtDate:(id)arg1;
- (unsigned long long)transferSize;
- (bool)triggersRestart;
- (void)updateGroupIfNecessary;
- (unsigned long long)uploadSize;
- (id)userInfo;
- (id)uuid;
- (bool)wasForceRun;

@end
