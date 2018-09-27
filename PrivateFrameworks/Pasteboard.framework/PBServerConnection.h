/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBServerConnection : NSObject {
    NSXPCConnection * _memberQ_serverConnection;
    NSObject<OS_dispatch_queue> * _memberQueue;
}

@property (nonatomic, retain) NSXPCConnection *memberQ_serverConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, readonly) NSXPCConnection *serverConnection;

+ (unsigned long long)beginListeningToPasteboardChangeNotifications;
+ (id)defaultConnection;

- (void).cxx_destruct;
- (void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(id /* block */)arg2;
- (unsigned long long)deletePersistentPasteboardWithName:(id)arg1 error:(id*)arg2;
- (void)didPastePasteboard:(id)arg1;
- (void)getAllPasteboardsCompletionBlock:(id /* block */)arg1;
- (void)helloCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)localGeneralPasteboard:(id*)arg1;
- (void)localGeneralPasteboardCompletionBlock:(id /* block */)arg1;
- (id)memberQ_serverConnection;
- (id)memberQueue;
- (void)pasteboardWithName:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)pasteboardWithName:(id)arg1 createIfNeeded:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)pasteboardWithName:(id)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
- (id)pasteboardWithName:(id)arg1 error:(id*)arg2;
- (void)performJanitorialTasksCompletionBlock:(id /* block */)arg1;
- (void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 itemIndex:(unsigned long long)arg3 typeIdentifier:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(id /* block */)arg3;
- (unsigned long long)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 error:(id*)arg3;
- (id)serverConnection;
- (void)setMemberQ_serverConnection:(id)arg1;
- (void)setMemberQueue:(id)arg1;

@end
