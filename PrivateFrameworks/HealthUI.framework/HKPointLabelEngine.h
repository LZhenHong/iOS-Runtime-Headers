/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKPointLabelEngine : NSObject {
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } transformedRect; 
        double labelValue; 
        long long options; 
    }  _currentRenderingData;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentTransformedPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentUntransformedPoint;
    bool  _lastRenderOverlapped;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } transformedRect; 
        double labelValue; 
        long long options; 
    }  _previousRenderingData;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousTransformedPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousUntransformedPoint;
    id /* block */  _sizeForValue;
    long long  _state;
}

@property (nonatomic) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; } currentRenderingData;
@property (nonatomic) struct CGPoint { double x1; double x2; } currentTransformedPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } currentUntransformedPoint;
@property (nonatomic) bool lastRenderOverlapped;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; } previousRenderingData;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousTransformedPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousUntransformedPoint;
@property (nonatomic, readonly, copy) id /* block */ sizeForValue;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; })_computeRenderingDataForValue:(double)arg1 transformedPoint:(struct CGPoint { double x1; double x2; })arg2 previousSlope:(long long)arg3 nextSlope:(long long)arg4 previousOptions:(long long)arg5;
- (long long)_slopeForPoint:(struct CGPoint { double x1; double x2; })arg1 otherPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; })currentRenderingData;
- (struct CGPoint { double x1; double x2; })currentTransformedPoint;
- (struct CGPoint { double x1; double x2; })currentUntransformedPoint;
- (id)initWithLabelSizeBlock:(id /* block */)arg1;
- (bool)lastRenderOverlapped;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; })previousRenderingData;
- (struct CGPoint { double x1; double x2; })previousTransformedPoint;
- (struct CGPoint { double x1; double x2; })previousUntransformedPoint;
- (bool)processLastPoint;
- (bool)processTransformedPoint:(struct CGPoint { double x1; double x2; })arg1 untransformedPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; })renderingData;
- (void)setCurrentRenderingData:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; })arg1;
- (void)setCurrentTransformedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurrentUntransformedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastRenderOverlapped:(bool)arg1;
- (void)setPreviousRenderingData:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; long long x3; })arg1;
- (void)setPreviousTransformedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousUntransformedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setState:(long long)arg1;
- (id /* block */)sizeForValue;
- (long long)state;

@end
