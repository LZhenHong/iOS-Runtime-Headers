/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessRichComplicationCircularView : NTKRichComplicationCircularBaseView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _prevLayoutBounds;
    NSMutableArray * _ringsFillFractions;
    NTKRingsAndDotsView * _ringsView;
}

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_showEmptyViews;
- (void)_updateRingWithTemplate:(id)arg1;
- (id)init;
- (void)layoutSubviews;

@end
