/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding> {
    NSDate * _committed;
    unsigned long long  _destination;
    NSString * _label;
    bool  _mustPush;
    bool  _mustReplay;
    unsigned long long  _source;
}

@property (nonatomic, readonly) NSDate *committed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) bool mustPush;
@property (nonatomic, readonly) bool mustReplay;
@property (nonatomic, readonly) unsigned long long source;
@property (readonly) Class superclass;

+ (id)cloudRequiresPushOptions;
+ (id)defaultCloudOptions;
+ (id)defaultIDSOptions;
+ (id)defaultLegacyCloudOptions;
+ (id)defaultLocalOptions;
+ (id)defaultMetadataCloudOptions;
+ (id)defaultPreferencesOptions;
+ (id)defaultResidenceOptions;
+ (id)defaultXPCOptions;
+ (id)localPushBackOptions;
+ (id)logCategory;
+ (id)optionsWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 mustReplay:(bool)arg3 mustPush:(bool)arg4;
+ (id)stringForHMDBackingStoreDestination:(unsigned long long)arg1;
+ (id)stringForHMDBackingStoreTransactionSource:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description;
- (id)committed;
- (id)debugString:(bool)arg1;
- (id)description;
- (unsigned long long)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 label:(id)arg3 mustReplay:(bool)arg4 mustPush:(bool)arg5;
- (id)label;
- (id)logIdentifier;
- (bool)mustPush;
- (bool)mustReplay;
- (void)setLabel:(id)arg1;
- (unsigned long long)source;

@end
