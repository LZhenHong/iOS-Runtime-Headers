/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSyncInfo : NSObject <NSSecureCoding> {
    NSString * _anchor;
    SASyncAppMetaData * _appMetadata;
    long long  _count;
    bool  _forVerification;
    NSString * _key;
    NSSet * _reasons;
    bool  _targetIsLocal;
    NSString * _validity;
}

@property (nonatomic, copy) NSString *anchor;
@property (nonatomic, copy) SASyncAppMetaData *appMetadata;
@property (nonatomic) long long count;
@property (nonatomic) bool forVerification;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSSet *reasons;
@property (nonatomic) bool targetIsLocal;
@property (nonatomic, copy) NSString *validity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (id)appMetadata;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forVerification;
- (id)initWithAnchor:(id)arg1 forcingReset:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)reasons;
- (void)setAnchor:(id)arg1;
- (void)setAppMetadata:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setForVerification:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setReasons:(id)arg1;
- (void)setTargetIsLocal:(bool)arg1;
- (void)setValidity:(id)arg1;
- (bool)targetIsLocal;
- (id)validity;

@end
