/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContinuousDialogManagerService.framework/ContinuousDialogManagerService
 */

@interface CDMXPCClient : NSObject <CDMXPCListenerService, CDMXPCListenerServiceDelegate> {
    NSXPCConnection * _connection;
    <CDMXPCClientDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearConnectionWithError:(id)arg1;
- (id)_connection;
- (id)_remoteObjectProxy;
- (void)connect;
- (void)disconnect;
- (void)handleClientAceUpdate:(id)arg1;
- (void)handleServiceAceUpdate:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
