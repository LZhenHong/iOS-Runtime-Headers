/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVTUITrainingManager : NSObject <CSEndpointAnalyzerDelegate, CSVTUIAudioSessionDelegate, CSVTUITrainingSessionDelegate> {
    CSVAD2EndpointAnalyzer * _audioAnalyzer;
    <CSVTUIAudioSession> * _audioSession;
    id /* block */  _cleanupCompletion;
    CSVTUITrainingSession * _currentTrainingSession;
    <CSVTUITrainingManagerDelegate> * _delegate;
    CSVTUIKeywordDetector * _keywordDetector;
    NSString * _locale;
    bool  _performRMS;
    NSObject<OS_dispatch_queue> * _queue;
    float  _rms;
    long long  _sessionNumber;
    SFSpeechRecognizer * _speechRecognizer;
    bool  _speechRecognizerAvailable;
    bool  _suspendAudio;
    NSMutableArray * _trainingSessions;
}

@property (readonly) unsigned long long audioSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVTUITrainingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property float rms;
@property (readonly) bool speechRecognizerAvailable;
@property (readonly) Class superclass;
@property bool suspendAudio;

+ (id)sharedtrainingSessionQueue;
+ (id)trainingManagerWithLocaleID:(id)arg1;

- (void).cxx_destruct;
- (void)CSVTUITrainingSession:(id)arg1 hasTrainUtterance:(id)arg2 languageCode:(id)arg3;
- (void)CSVTUITrainingSessionRMSAvailable:(float)arg1;
- (void)CSVTUITrainingSessionStopListen;
- (void)VTUITrainingSessionStopListen;
- (unsigned long long)_audioSource;
- (void)_beginOfSpeechDetected;
- (bool)_createAudioAnalyzer;
- (void)_destroyAudioSession;
- (void)_endOfSpeechDetected;
- (bool)_setupAudioSession;
- (bool)_shouldShowHeadsetDisconnectionMessage;
- (bool)_startAudioSession;
- (void)_stopAudioSession;
- (void)audioSessionDidStartRecording:(bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (unsigned long long)audioSource;
- (bool)cancelTrainingForID:(long long)arg1;
- (id)cleanupWithCompletion:(id /* block */)arg1;
- (void)closeSessionBeforeStartWithStatus:(int)arg1 successfully:(bool)arg2 withCompletion:(id /* block */)arg3;
- (bool)createKeywordDetector;
- (void)createSpeechRecognizer;
- (id)delegate;
- (void)destroySpeakerTrainer;
- (void)didDetectForceEndPoint;
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;
- (id)initWithLocaleIdentifier:(id)arg1 withAudioSession:(id)arg2;
- (void)reset;
- (float)rms;
- (void)setDelegate:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setRms:(float)arg1;
- (void)setSuspendAudio:(bool)arg1;
- (bool)shouldPerformRMS;
- (bool)speechRecognizerAvailable;
- (void)startRMS;
- (void)stopRMS;
- (bool)suspendAudio;
- (long long)trainUtterance:(long long)arg1 shouldUseASR:(bool)arg2 completion:(id /* block */)arg3;

@end
