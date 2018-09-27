/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureAudioDataSinkPipeline : FigCapturePipeline {
    BWRemoteQueueSinkNode * _remoteQueueSinkNode;
    NSString * _sinkID;
    BWNodeOutput * _upstreamOutput;
}

@property (nonatomic) bool discardsSampleData;
@property (nonatomic, readonly) BWRemoteQueueSinkNode *remoteQueueSinkNode;
@property (nonatomic, readonly) NSString *sinkID;

+ (void)initialize;

- (int)_buildAudioDataSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 clientPID:(id)arg4 renderDelegate:(id)arg5;
- (void)dealloc;
- (bool)discardsSampleData;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 clientPID:(id)arg4 renderDelegate:(id)arg5;
- (id)remoteQueueSinkNode;
- (void)setDiscardsSampleData:(bool)arg1;
- (id)sinkID;

@end
