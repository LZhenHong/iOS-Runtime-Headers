/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCItemThumbnail : DOCBaseThumbnail {
    FPItem * _item;
    double  _minimumSize;
}

@property (nonatomic, readonly) FPItem *item;
@property (nonatomic, readonly) double minimumSize;

- (void).cxx_destruct;
- (id)createOperationWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 style:(unsigned long long)arg3 isInteractive:(bool)arg4;
- (id)initWithCache:(id)arg1 item:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 minimumSize:(double)arg4 scale:(double)arg5 fallback:(id)arg6 style:(unsigned long long)arg7 isInteractive:(bool)arg8;
- (id)item;
- (double)minimumSize;
- (id)thumbnail;
- (void)updateItemTo:(id)arg1;

@end
