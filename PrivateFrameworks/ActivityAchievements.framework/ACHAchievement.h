/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHAchievement : NSObject <NSSecureCoding> {
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _badgeEnamelColor;
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _badgeMetalColor;
    long long  _badgeModelVersion;
    NSString * _badgeShapeName;
    bool  _badgeUsesFullColorEnamel;
    bool  _badgeUsesTriColorEnamel;
    NSDictionary * _customPlaceholderValues;
    NSArray * _earnedInstances;
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _enamelTriColor1;
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _enamelTriColor2;
    struct { 
        float red; 
        float green; 
        float blue; 
    }  _enamelTriColor3;
    bool  _faceHasMetalInlay;
    HKQuantity * _goal;
    NSURL * _localizationBundleURL;
    HKQuantity * _progress;
    NSURL * _propertyListBundleURL;
    NSURL * _resourceBundleURL;
    NSString * _section;
    NSURL * _stickerBundleURL;
    ACHTemplate * _template;
    NSString * _textureFilename;
    bool  _unearnedUsesTwoToneEnamel;
}

@property (nonatomic) struct { float x1; float x2; float x3; } badgeEnamelColor;
@property (nonatomic) struct { float x1; float x2; float x3; } badgeMetalColor;
@property (nonatomic) long long badgeModelVersion;
@property (nonatomic, retain) NSString *badgeShapeName;
@property (nonatomic) bool badgeUsesFullColorEnamel;
@property (nonatomic) bool badgeUsesTriColorEnamel;
@property (nonatomic, retain) NSDictionary *customPlaceholderValues;
@property (nonatomic, readonly) NSArray *earnedInstances;
@property (nonatomic) struct { float x1; float x2; float x3; } enamelTriColor1;
@property (nonatomic) struct { float x1; float x2; float x3; } enamelTriColor2;
@property (nonatomic) struct { float x1; float x2; float x3; } enamelTriColor3;
@property (nonatomic) bool faceHasMetalInlay;
@property (nonatomic, retain) HKQuantity *goal;
@property (nonatomic, readonly) bool hasClientRequiredURLs;
@property (nonatomic, retain) NSURL *localizationBundleURL;
@property (nonatomic, retain) HKQuantity *progress;
@property (nonatomic, retain) NSURL *propertyListBundleURL;
@property (nonatomic, retain) NSURL *resourceBundleURL;
@property (nonatomic, copy) NSString *section;
@property (nonatomic, retain) NSURL *stickerBundleURL;
@property (nonatomic, readonly) ACHTemplate *template;
@property (nonatomic, retain) NSString *textureFilename;
@property (nonatomic, readonly) bool unearned;
@property (nonatomic) bool unearnedUsesTwoToneEnamel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_expandedClientRequiredURLs;
- (struct { float x1; float x2; float x3; })badgeEnamelColor;
- (struct { float x1; float x2; float x3; })badgeMetalColor;
- (long long)badgeModelVersion;
- (id)badgeShapeName;
- (bool)badgeUsesFullColorEnamel;
- (bool)badgeUsesTriColorEnamel;
- (id)customPlaceholderValues;
- (id)description;
- (id)earnedInstances;
- (struct { float x1; float x2; float x3; })enamelTriColor1;
- (struct { float x1; float x2; float x3; })enamelTriColor2;
- (struct { float x1; float x2; float x3; })enamelTriColor3;
- (void)encodeWithCoder:(id)arg1;
- (bool)faceHasMetalInlay;
- (id)goal;
- (bool)hasClientRequiredURLs;
- (unsigned long long)hash;
- (id)initWithCodable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplate:(id)arg1 earnedInstances:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizationBundleURL;
- (id)progress;
- (id)propertyListBundleURL;
- (id)resourceBundleURL;
- (id)section;
- (void)setBadgeEnamelColor:(struct { float x1; float x2; float x3; })arg1;
- (void)setBadgeMetalColor:(struct { float x1; float x2; float x3; })arg1;
- (void)setBadgeModelVersion:(long long)arg1;
- (void)setBadgeShapeName:(id)arg1;
- (void)setBadgeUsesFullColorEnamel:(bool)arg1;
- (void)setBadgeUsesTriColorEnamel:(bool)arg1;
- (void)setCustomPlaceholderValues:(id)arg1;
- (void)setEnamelTriColor1:(struct { float x1; float x2; float x3; })arg1;
- (void)setEnamelTriColor2:(struct { float x1; float x2; float x3; })arg1;
- (void)setEnamelTriColor3:(struct { float x1; float x2; float x3; })arg1;
- (void)setFaceHasMetalInlay:(bool)arg1;
- (void)setGoal:(id)arg1;
- (void)setLocalizationBundleURL:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setPropertyListBundleURL:(id)arg1;
- (void)setResourceBundleURL:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setStickerBundleURL:(id)arg1;
- (void)setTextureFilename:(id)arg1;
- (void)setUnearnedUsesTwoToneEnamel:(bool)arg1;
- (id)shallowCopyReplacingEarnedInstances:(id)arg1;
- (id)stickerBundleURL;
- (id)template;
- (id)textureFilename;
- (bool)unearned;
- (bool)unearnedUsesTwoToneEnamel;

@end
