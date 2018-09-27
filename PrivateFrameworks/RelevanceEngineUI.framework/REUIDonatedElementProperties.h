/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUIDonatedElementProperties : NSObject <NSCopying, NSSecureCoding> {
    REDonatedAction * _action;
    UIImage * _appIcon;
    NSString * _appName;
    UIImage * _bodyImage;
    bool  _displayAppName;
    UIImage * _fullsizeAppIcon;
    INIntent * _intent;
    bool  _isUsingPlaceholderArtwork;
    INRelevantShortcut * _relevantShortcut;
    NSString * _subtitle;
    NSString * _title;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) REDonatedAction *action;
@property (nonatomic, readonly) UIImage *appIcon;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) UIImage *bodyImage;
@property (nonatomic, readonly) NSString *bodyImageCompositingFilter;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool displayAppName;
@property (nonatomic, readonly) unsigned long long donationType;
@property (nonatomic, readonly) UIImage *fullsizeAppIcon;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) bool isBeginWorkoutDonation;
@property (nonatomic, readonly) bool isEndWorkoutDonation;
@property (nonatomic, readonly) bool isMediaDonation;
@property (nonatomic, readonly) NSString *localBundleIdentifier;
@property (getter=isLocalDonation, nonatomic, readonly) bool localDonation;
@property (nonatomic, readonly) INRelevantShortcut *relevantShortcut;
@property (nonatomic, readonly) NSString *remoteBundleIdentifier;
@property (nonatomic, readonly) bool requiresRemoteExecution;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) bool supportsLocalIntentExecution;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) bool wantsThreeLineLayout;

+ (void)createWithDonatedAction:(id)arg1 completion:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isMusicDonation;
- (bool)_isPodcastsDonation;
- (void)_loadAppContentPropertiesWithCompletion:(id /* block */)arg1;
- (void)_loadContentForIntent:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadContentForRelevantShortcut:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadContentForUserActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadContentForUserActivityOnShortcut:(id)arg1 completion:(id /* block */)arg2;
- (id)_placeholderImageNameForBundleID:(id)arg1;
- (id)action;
- (id)appIcon;
- (id)appName;
- (id)bodyImage;
- (id)bodyImageCompositingFilter;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displayAppName;
- (unsigned long long)donationType;
- (void)encodeWithCoder:(id)arg1;
- (id)fullsizeAppIcon;
- (id)initWithCoder:(id)arg1;
- (id)initWithDonatedAction:(id)arg1;
- (id)intent;
- (bool)isBeginWorkoutDonation;
- (bool)isEndWorkoutDonation;
- (bool)isLocalDonation;
- (bool)isMediaDonation;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)localBundleIdentifier;
- (id)relevantShortcut;
- (id)remoteBundleIdentifier;
- (bool)requiresRemoteExecution;
- (id)scaleImageForDisplay:(id)arg1;
- (id)subtitle;
- (bool)supportsLocalIntentExecution;
- (id)title;
- (id)userActivity;
- (bool)wantsThreeLineLayout;

@end
