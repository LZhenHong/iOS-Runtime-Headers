/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNFullConnectionBlockGPU : VCPCNNFullConnectionBlock {
    MPSCNNFullyConnected * _mpsFullConn;
}

- (void).cxx_destruct;
- (int)convVCPNeuronTypeToMPS:(int)arg1;
- (int)forward;
- (int)initMPS;
- (int)initializeRest;
- (int)loadWeights:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4;
- (int)shuffleWeights:(float*)arg1 fromSrc:(float*)arg2 inputChannels:(int)arg3 inputHeight:(int)arg4 inputWidth:(int)arg5 outputChannels:(int)arg6;

@end
