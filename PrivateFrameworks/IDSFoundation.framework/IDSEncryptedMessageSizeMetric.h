/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSEncryptedMessageSizeMetric : NSObject <CUTRTCMetric> {
    long long  _encryptedPayloadMessageSize;
    long long  _maxMessageSize;
    NSString * _serviceName;
    long long  _unencryptedPayloadMessageSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long encryptedPayloadMessageSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long maxMessageSize;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned short rtcType;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long unencryptedPayloadMessageSize;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (long long)encryptedPayloadMessageSize;
- (id)initWithUnencryptedPayloadMessageSize:(long long)arg1 encryptedPayloadMessageSize:(long long)arg2 maxMessageSize:(long long)arg3 serviceName:(id)arg4;
- (long long)maxMessageSize;
- (id)name;
- (unsigned short)rtcType;
- (id)serviceName;
- (long long)unencryptedPayloadMessageSize;

@end
