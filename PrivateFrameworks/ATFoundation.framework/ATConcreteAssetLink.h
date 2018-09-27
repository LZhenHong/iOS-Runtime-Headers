/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ATAssetLinkDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _fileIOQueue;
    ATMessageLink * _messageLink;
    bool  _open;
    NSMutableArray * _outstandingAssets;
    int  _pendingWriteAmount;
    NSObject<OS_dispatch_semaphore> * _pendingWriteSemaphore;
    NSObject<OS_dispatch_queue> * _readerQueue;
    NSMutableSet * _readers;
    NSMutableSet * _readersPendingStop;
    NSObject<OS_dispatch_group> * _readersPendingStopGroup;
    NSMutableDictionary * _readersToAssetsMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (id)_keyForATAssetInReaderMap:(id)arg1;
- (void)_requestAsset:(id)arg1;
- (id)_urlForWritingAsset:(id)arg1 withFileName:(id)arg2;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (id)initWithMessageLink:(id)arg1;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (void)messageLinkWasClosed:(id)arg1;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)setDelegate:(id)arg1;

@end
