/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoProvider : NSObject <SXVideoProviding> {
    NSURL * _URL;
    <SXAnalyticsReporting> * _analyticsReporter;
    NSString * _mediaIdentifier;
    <SVVideoMetadata> * _metadata;
    double  _pausedAtTime;
    SVTimeline * _timeline;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) <SXAnalyticsReporting> *analyticsReporter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *mediaIdentifier;
@property (nonatomic) <SVVideoMetadata> *metadata;
@property (nonatomic) double pausedAtTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVTimeline *timeline;

- (void).cxx_destruct;
- (id)URL;
- (id)analyticsReporter;
- (void)configureTimelineForQuartileReporting;
- (id)initWithURL:(id)arg1;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (id)mediaIdentifier;
- (id)metadata;
- (void)muteStateChanged:(bool)arg1;
- (double)pausedAtTime;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackPausedAtTime:(double)arg1;
- (void)playbackResumed;
- (void)playbackResumedAtTime:(double)arg1;
- (void)playbackStarted;
- (void)setAnalyticsReporter:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPausedAtTime:(double)arg1;
- (bool)supportsQuartileReporting;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (id)timeline;

@end
