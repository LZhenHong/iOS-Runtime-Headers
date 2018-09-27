/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBDivotedEffect : NSObject <UIKBRenderEffect> {
    double  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIKBGradient *gradient;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) SEL renderSelector;
@property (nonatomic, readonly) bool renderUnder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesRGBColors;
@property (nonatomic) double weight;

- (struct CGColor { }*)CGColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gradient;
- (bool)isValid;
- (SEL)renderSelector;
- (bool)renderUnder;
- (void)setWeight:(double)arg1;
- (bool)usesRGBColors;
- (double)weight;

@end
