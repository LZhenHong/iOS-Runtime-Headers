/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSActivationEvent : NSObject {
    NSString * _UUID;
    NSDictionary * _activationInfo;
    NSString * _deviceId;
    unsigned long long  _hosttime;
    unsigned long long  _type;
    float  _vadScore;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, retain) NSDictionary *activationInfo;
@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) unsigned long long hosttime;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic) unsigned long long type;
@property (nonatomic) float vadScore;

+ (id)builtInMicVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)_activationTypeString;
- (id)activationInfo;
- (id)deviceId;
- (unsigned long long)hosttime;
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 hosttime:(unsigned long long)arg4;
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 vadScore:(float)arg4 hosttime:(unsigned long long)arg5;
- (id)localizedDescription;
- (void)setActivationInfo:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setHosttime:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVadScore:(float)arg1;
- (unsigned long long)type;
- (float)vadScore;

@end
