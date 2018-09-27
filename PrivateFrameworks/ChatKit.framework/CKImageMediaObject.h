/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageMediaObject : CKMediaObject {
    NSURL * _appendedBundleURL;
    CKImageData * _backgroundImageData;
    CKImageData * _imageData;
    NSString * _irisVideoPath;
    bool  _isSticker;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    UIImage * _thumbnail;
}

@property (nonatomic, readonly) CKImageData *imageData;
@property (nonatomic, readonly) bool isIrisAsset;
@property (nonatomic, readonly) bool isSticker;
@property (nonatomic, retain) UIImage *thumbnail;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (Class)imageDataClass;
+ (bool)isPreviewable;

- (void).cxx_destruct;
- (id)_getIrisBundleLocation;
- (id)_getIrisBundleURL;
- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })bbSize;
- (id)calculateIrisVideoPath;
- (bool)canExport;
- (bool)canShareItem;
- (void)export:(id)arg1;
- (bool)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)getIrisVideoPath;
- (id)imageData;
- (id)initWithTransfer:(id)arg1 isFromMe:(bool)arg2 suppressPreview:(bool)arg3;
- (bool)isIrisAsset;
- (bool)isSticker;
- (id)location;
- (int)mediaType;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)pasteboardItem;
- (id)previewFilenameExtension;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (bool)validatePreviewFormat;

@end
