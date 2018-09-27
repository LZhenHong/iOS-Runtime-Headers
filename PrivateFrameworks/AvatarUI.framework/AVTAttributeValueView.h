/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAttributeValueView : UIView <AVTDiscardableContent, AVTSectionItemTransitionModel> {
    CAShapeLayer * _clippingLayer;
    NSUUID * _displaySessionUUID;
    UIView * _highlightView;
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSizeRatio;
    UIImageView * _imageView;
    CAShapeLayer * _selectionLayer;
    unsigned long long  _selectionStyle;
    UIImageView * _transitionImageView;
    id /* block */  discardableContentHandler;
}

@property (nonatomic, retain) CAShapeLayer *clippingLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discardableContentHandler;
@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSizeRatio;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) CAShapeLayer *selectionLayer;
@property (nonatomic) unsigned long long selectionStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *transitionImageView;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSizeRatio:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

- (void).cxx_destruct;
- (void)bringSelectionLayersToFront;
- (void)cleanupAfterTransition;
- (id)clippingBezierPath;
- (id)clippingLayer;
- (void)configureImageView:(id)arg1;
- (void)discardContent;
- (id /* block */)discardableContentHandler;
- (id)displaySessionUUID;
- (id)fromView;
- (id)highlightView;
- (id)image;
- (struct CGSize { double x1; double x2; })imageSizeRatio;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForTransitionToImage:(id)arg1;
- (void)relayoutSublayers;
- (id)selectionBezierPath;
- (id)selectionLayer;
- (unsigned long long)selectionStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectorRect;
- (void)setClippingLayer:(id)arg1;
- (void)setDiscardableContentHandler:(id /* block */)arg1;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSizeRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)setSelectionLayer:(id)arg1;
- (void)setSelectionStyle:(unsigned long long)arg1;
- (void)setTransitionImageView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shapeLayerRect;
- (id)toView;
- (id)transitionImageView;
- (void)updateCornerRadii;
- (void)updateHighlightedState:(bool)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)updateSelectedState:(bool)arg1 animated:(bool)arg2;
- (void)updateSelectionLayer;
- (void)updateWithImage:(id)arg1;

@end
