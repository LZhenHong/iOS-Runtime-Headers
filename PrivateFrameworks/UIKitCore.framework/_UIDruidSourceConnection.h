/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDruidSourceConnection : NSObject <_DUIClientSessionSource, _DUIClientSource, _UIDruidSourceConnection> {
    id /* block */  _canHandOffCancelledItemsBlock;
    bool  _cancelled;
    NSXPCConnection * _connection;
    id /* block */  _dataTransferFinishedBlock;
    id /* block */  _dragCompletionBlock;
    id /* block */  _handOffCancelledItemsBlock;
    id /* block */  _itemDetailProviderBlock;
    id /* block */  _itemImageProviderBlock;
    id /* block */  _itemUpdateBlock;
    <_DUIServerSessionSource> * _serverSession;
}

@property (nonatomic, copy) id /* block */ canHandOffCancelledItemsBlock;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, copy) id /* block */ dataTransferFinishedBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dragCompletionBlock;
@property (nonatomic, copy) id /* block */ handOffCancelledItemsBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ itemDetailProviderBlock;
@property (nonatomic, copy) id /* block */ itemImageProviderBlock;
@property (nonatomic, copy) id /* block */ itemUpdateBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_internalDragFailed;
- (id)addItems:(id)arg1 withOldItemCollection:(id)arg2;
- (void)beginDragWithTouches:(id)arg1 touchRoutingPolicy:(id)arg2 items:(id)arg3 sourceDataOwner:(long long)arg4 accessibilityEndpoint:(id)arg5 centroid:(struct CGPoint { double x1; double x2; })arg6 completion:(id /* block */)arg7;
- (id /* block */)canHandOffCancelledItemsBlock;
- (void)cancelDrag;
- (oneway void)checkCanHandOffCancelledItemsWithReply:(id /* block */)arg1;
- (id /* block */)dataTransferFinishedBlock;
- (oneway void)dataTransferSessionFinished;
- (void)dirtyItems:(id)arg1;
- (id /* block */)dragCompletionBlock;
- (void)dragDidExitApp;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)dragFailed;
- (oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2;
- (id /* block */)handOffCancelledItemsBlock;
- (id)init;
- (bool)isCancelled;
- (id /* block */)itemDetailProviderBlock;
- (id /* block */)itemImageProviderBlock;
- (id /* block */)itemUpdateBlock;
- (oneway void)requestDetailForItemIndex:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (oneway void)requestImageForItemIndex:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setCanHandOffCancelledItemsBlock:(id /* block */)arg1;
- (void)setDataTransferFinishedBlock:(id /* block */)arg1;
- (void)setDragCompletionBlock:(id /* block */)arg1;
- (void)setHandOffCancelledItemsBlock:(id /* block */)arg1;
- (void)setItemDetailProviderBlock:(id /* block */)arg1;
- (void)setItemImageProviderBlock:(id /* block */)arg1;
- (void)setItemUpdateBlock:(id /* block */)arg1;
- (void)takeOperationMasksInsideApp:(unsigned long long)arg1 outsideApp:(unsigned long long)arg2 prefersFullSizePreview:(bool)arg3;
- (oneway void)updateDetail:(id)arg1 forItemIndex:(unsigned long long)arg2;

@end
