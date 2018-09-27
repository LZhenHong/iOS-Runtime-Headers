/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROriginMediaPlaybackCoreController : NSObject <MPRequestResponseControllerDelegate, NMROriginCommandHandler, NMROriginObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <NMROriginObserverDelegate> * _delegate;
    unsigned long long  _filteringOptions;
    bool  _isEnforcingApplicationFilter;
    MPLibraryAddStatusObserver * _libraryAddStatusObserver;
    NMRPlayerResponseNowPlayingState * _nowPlayingState;
    NMROrigin * _origin;
    MPCPlayerPath * _playerPath;
    MPRequestResponseController * _requestResponseController;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldFetchNextTrack;
    NMRPlaybackQueue * playbackQueue;
    bool  shouldObserveArtwork;
    bool  shouldObservePlaybackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NMROriginObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NMRNowPlayingState *nowPlayingState;
@property (nonatomic, readonly) NMROrigin *origin;
@property (nonatomic, readonly) NMRPlaybackQueue *playbackQueue;
@property (nonatomic) bool shouldObserveArtwork;
@property (nonatomic) bool shouldObservePlaybackQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configurePlayerRequest;
- (void)_handleAddToLibraryMediaRemoteCommandWithOptions:(id)arg1;
- (void)_notifyObserverOfUpdatedElapsedTime;
- (void)_notifyObserverOfUpdatedNowPlayingApplicationBundleID;
- (void)_notifyObserverOfUpdatedNowPlayingInfo;
- (void)_notifyObserverOfUpdatedPlaybackState;
- (void)_notifyObserverOfUpdatedSupportedCommands;
- (void)_notifyObserversOfUpdatedPlaybackQueue;
- (void)_notifyObserversOfUpdatedTimestamp;
- (void)_updateAddToLibraryStatusWithModelObject:(id)arg1;
- (void)_updateIsEnforcingApplicationFilterWithNowPlayingState:(id)arg1;
- (void)beginObserving;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (id)delegate;
- (id)description;
- (void)endObserving;
- (id)initWithPlayerPath:(id)arg1 options:(unsigned long long)arg2;
- (id)nowPlayingState;
- (id)origin;
- (id)playbackQueue;
- (void)preparePlayerRequestForNewPlaybackIntent;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 launchApp:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setShouldObserveArtwork:(bool)arg1;
- (void)setShouldObservePlaybackQueue:(bool)arg1;
- (bool)shouldObserveArtwork;
- (bool)shouldObservePlaybackQueue;
- (void)updateNowPlayingStateWithCompletion:(id /* block */)arg1;

@end
