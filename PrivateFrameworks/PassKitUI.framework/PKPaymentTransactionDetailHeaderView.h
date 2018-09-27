/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionDetailHeaderView : UIView {
    double  _bottomPadding;
    double  _contentToLabelPadding;
    UIView * _contentView;
    UIView * _contentViewSizingView;
    bool  _inBridge;
    UILabel * _secondarySubtitleLabel;
    NSString * _secondarySubtitleText;
    UILabel * _subtitleLabel;
    NSString * _subtitleText;
    double  _topPadding;
}

@property (nonatomic) double bottomPadding;
@property (nonatomic) double contentToLabelPadding;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *contentViewSizingView;
@property (nonatomic) bool inBridge;
@property (nonatomic, retain) UILabel *secondarySubtitleLabel;
@property (nonatomic, copy) NSString *secondarySubtitleText;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (void)_updateSecondarySubtitleLabel;
- (void)_updateSubtitleLabel;
- (double)bottomPadding;
- (double)contentToLabelPadding;
- (id)contentView;
- (id)contentViewSizingView;
- (bool)inBridge;
- (id)initWithContentView:(id)arg1 contentViewSizingView:(id)arg2 subtitleText:(id)arg3 secondarySubtitleText:(id)arg4 runningInBridge:(bool)arg5;
- (void)layoutSubviews;
- (id)secondarySubtitleLabel;
- (id)secondarySubtitleText;
- (void)setBottomPadding:(double)arg1;
- (void)setContentToLabelPadding:(double)arg1;
- (void)setInBridge:(bool)arg1;
- (void)setSecondarySubtitleLabel:(id)arg1;
- (void)setSecondarySubtitleText:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)subtitleText;
- (double)topPadding;

@end
