/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAnalogUtilities : NSObject

+ (id)artShader;
+ (id)circularMaskShader;
+ (void)colorizeLabels:(id)arg1 color:(id)arg2;
+ (struct CGSize { double x1; double x2; })dialSizeForDevice:(id)arg1;
+ (void)fadeNodes:(id)arg1 alpha:(double)arg2 except:(id)arg3;
+ (id)labelsForDevice:(id)arg1 faceStyle:(long long)arg2 count:(unsigned int)arg3 start:(unsigned int)arg4 multiple:(unsigned int)arg5 repeat:(unsigned int)arg6 fontSize:(double)arg7 radius:(double)arg8 paddedWithZeroes:(bool)arg9;
+ (id)labelsForDevice:(id)arg1 withCount:(unsigned int)arg2 start:(unsigned int)arg3 multiple:(unsigned int)arg4 repeat:(unsigned int)arg5 font:(long long)arg6 modifier:(id)arg7 center:(struct CGPoint { double x1; double x2; })arg8 radius:(double)arg9 paddedWithZeros:(bool)arg10 filter:(bool)arg11;
+ (void)preloadTexturesForDevice:(id)arg1;
+ (void)scaleNodes:(id)arg1 scale:(double)arg2 andResetNodesAtIndices:(id)arg3;
+ (struct CGSize { double x1; double x2; })sceneSizeForDevice:(id)arg1;
+ (bool)shouldPreloadTextures;
+ (void)updateNodes:(id)arg1 forDevice:(id)arg2 offset:(unsigned long long)arg3 center:(struct CGPoint { double x1; double x2; })arg4 radius:(double)arg5 angleMultiplier:(double)arg6 scale:(double)arg7 rotate:(bool)arg8 round:(bool)arg9;

@end
