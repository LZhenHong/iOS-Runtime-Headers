/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBarContentView : UIView <_UIButtonBarAppearanceDelegate> {
    Class  _appearanceGuideClass;
    id  _appearanceStorage;
    UIImage * _backIndicatorMaskImage;
    bool  _barWantsLetterpress;
    bool  _centerTextButtons;
}

@property (setter=_setAppearanceGuideClass:, nonatomic, retain) Class _appearanceGuideClass;
@property (nonatomic, readonly) id appearanceStorage;
@property (nonatomic, readonly) double backButtonMargin;
@property (nonatomic, readonly) double backButtonMaximumWidth;
@property (nonatomic, retain) UIImage *backIndicatorImage;
@property (nonatomic, retain) UIImage *backIndicatorMaskImage;
@property (nonatomic, readonly) long long barMetrics;
@property (nonatomic, readonly) long long barType;
@property (nonatomic) bool barWantsLetterpress;
@property (nonatomic) bool centerTextButtons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultEdgeSpacing;
@property (nonatomic, readonly) double defaultTextPadding;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRTL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *tintColor;

- (void).cxx_destruct;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_appearanceChanged;
- (Class)_appearanceGuideClass;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (double)absorptionForItem:(id)arg1;
- (id)appearanceStorage;
- (double)backButtonMargin;
- (double)backButtonMaximumWidth;
- (id)backIndicatorImage;
- (id)backIndicatorMaskImage;
- (long long)barMetrics;
- (long long)barType;
- (bool)barWantsLetterpress;
- (bool)centerTextButtons;
- (double)defaultEdgeSpacing;
- (id)defaultFontDescriptor;
- (double)defaultTextPadding;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRTL;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setBackIndicatorMaskImage:(id)arg1;
- (void)setBarWantsLetterpress:(bool)arg1;
- (void)setCenterTextButtons:(bool)arg1;

@end
