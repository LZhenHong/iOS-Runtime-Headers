/* Generated by RuntimeBrowser.
 */

@protocol VideoCaptureServer

@required

- (void)handleCaptureEvent:(NSString *)arg1;
- (void)handleCaptureEvent:(NSString *)arg1 subType:(NSString *)arg2;
- (void)onCaptureFramerateChange:(unsigned int)arg1;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 droppedFrames:(int)arg3 orientation:(int)arg4;
- (void)onCaptureVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 preview:(bool)arg3 shouldEnqueueFrame:(bool)arg4 droppedFrames:(int)arg5 switching:(bool)arg6 orientation:(int)arg7 camera:(int)arg8 videoMirrored:(bool)arg9;

@end
