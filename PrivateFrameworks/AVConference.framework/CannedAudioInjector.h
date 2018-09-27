/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface CannedAudioInjector : NSObject {
    NSString * _cannedMoviePath;
    bool  _fromBeginning;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _internalFormat;
    int  _position;
    NSMutableData * _samples;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _samplesConditional;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _samplesMutex;
}

@property (nonatomic, retain) NSString *cannedMoviePath;
@property (nonatomic) bool fromBeginning;
@property (nonatomic) int position;
@property (nonatomic, retain) NSMutableData *samples;

+ (bool)isAudioAvailable:(id)arg1;

- (id)cannedMoviePath;
- (void)dealloc;
- (int)decodeAudio;
- (bool)fromBeginning;
- (id)initWithPath:(id)arg1 withDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 fromBeginning:(bool)arg3;
- (void)injectToBuffer:(char *)arg1 size:(int)arg2 time:(double)arg3 muted:(bool)arg4;
- (int)position;
- (int)readRawAudioSamples;
- (id)samples;
- (void)setCannedMoviePath:(id)arg1;
- (void)setFromBeginning:(bool)arg1;
- (void)setPosition:(int)arg1;
- (void)setSamples:(id)arg1;

@end
