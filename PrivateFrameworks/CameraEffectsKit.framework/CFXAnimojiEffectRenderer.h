/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXAnimojiEffectRenderer : NSObject <SCNSceneRendererDelegate> {
    bool  _asynchronouslyLoadNewPuppets;
    AVTAvatarStore * _avatarStore;
    NSString * _currentAvatarIdentifier;
    struct __CVPixelBufferPool { } * _inputBufferPool;
    struct __CVMetalTextureCache { } * _metalDepthTextureCache;
    struct __CVMetalTextureCache { } * _metalTextureCache;
    NSObject<OS_dispatch_queue> * _puppetLoadingQ;
    NSObject<OS_dispatch_queue> * _puppetRenderingQ;
    AVTRenderer * _renderer;
    NSLock * _rendererLock;
    double  _systemTimeForAVTRenderer;
    struct CGSize { 
        double width; 
        double height; 
    }  _workingSize;
}

@property (nonatomic) bool asynchronouslyLoadNewPuppets;
@property (nonatomic, retain) AVTAvatarStore *avatarStore;
@property (nonatomic, retain) NSString *currentAvatarIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CVPixelBufferPool { }*inputBufferPool;
@property (nonatomic) struct __CVMetalTextureCache { }*metalDepthTextureCache;
@property (nonatomic) struct __CVMetalTextureCache { }*metalTextureCache;
@property (nonatomic, retain) AVTRenderer *renderer;
@property (nonatomic, retain) NSLock *rendererLock;
@property (readonly) Class superclass;
@property (nonatomic) double systemTimeForAVTRenderer;
@property (nonatomic) struct CGSize { double x1; double x2; } workingSize;

+ (void)setupAVTMetalShaderCache;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CFX_depthDataToTexture:(id)arg1;
- (double)CFX_focalLengthForFrame:(id)arg1 workingSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)CFX_getRenderer:(id*)arg1 forAnimojiEffect:(id)arg2 primeFrame:(id)arg3 captureOrientation:(long long)arg4 interfaceOrientation:(long long)arg5;
- (id)_createNewRendererForPuppet:(id)arg1;
- (void)asyncLoadNewPuppet:(id)arg1 currentPuppet:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 primeFrame:(id)arg5;
- (bool)asynchronouslyLoadNewPuppets;
- (id)avatarStore;
- (void)clear;
- (void)clearRenderer_renderLocked;
- (id)currentAvatarIdentifier;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)inputBufferIsPortraitAspect:(struct CGSize { double x1; double x2; })arg1;
- (struct __CVPixelBufferPool { }*)inputBufferPool;
- (struct __CVMetalTextureCache { }*)metalDepthTextureCache;
- (struct __CVMetalTextureCache { }*)metalTextureCache;
- (struct __CVBuffer { }*)newPixelBufferRenderedFromARFrame:(id)arg1 withEffect:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4;
- (struct __CVBuffer { }*)newPixelBufferRenderedFromARFrame:(id)arg1 withEffect:(id)arg2 depthTexture:(id)arg3 pauseSimulationPhysicsAndDepth:(bool)arg4 captureOrientation:(long long)arg5 interfaceOrientation:(long long)arg6;
- (void)renderAnimoji:(id)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 depthTexture:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)renderFrame:(id)arg1 withEffect:(id)arg2 depthTexture:(id)arg3 pauseSimulationPhysicsAndDepth:(bool)arg4 captureOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 completionBlock:(id /* block */)arg7;
- (id)renderWithInputs:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(id)arg3;
- (id)renderer;
- (id)rendererLock;
- (void)setAsynchronouslyLoadNewPuppets:(bool)arg1;
- (void)setAvatarStore:(id)arg1;
- (void)setCurrentAvatarIdentifier:(id)arg1;
- (void)setInputBufferPool:(struct __CVPixelBufferPool { }*)arg1;
- (void)setMetalDepthTextureCache:(struct __CVMetalTextureCache { }*)arg1;
- (void)setMetalTextureCache:(struct __CVMetalTextureCache { }*)arg1;
- (void)setRenderer:(id)arg1;
- (void)setRendererLock:(id)arg1;
- (void)setSystemTimeForAVTRenderer:(double)arg1;
- (void)setWorkingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setupInputBufferPoolForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)setupPuppetRender:(id)arg1 forFrame:(id)arg2 captureOrientation:(long long)arg3 interfaceOrientation:(long long)arg4 isInitialSetup:(bool)arg5;
- (double)systemTimeForAVTRenderer;
- (bool)testCurrentPuppetisEqualToPuppet:(id)arg1;
- (void)updateCurrentRenderer:(id)arg1 puppetName:(id)arg2;
- (struct CGSize { double x1; double x2; })workingSize;

@end
