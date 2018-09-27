/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSRegistrationControlDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    IDSDaemonRequestTimer * _requestTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRequestTimer:(id)arg1;
- (void)registrationControlResponseForRequestID:(id)arg1 withBoolAnswer:(bool)arg2 additionalContextData:(id)arg3 andError:(id)arg4;
- (void)registrationControlResponseForRequestID:(id)arg1 withError:(id)arg2;
- (void)registrationControlStatusResponseForRequestID:(long long)arg1 requestID:(id)arg2 withError:(id)arg3;

@end
