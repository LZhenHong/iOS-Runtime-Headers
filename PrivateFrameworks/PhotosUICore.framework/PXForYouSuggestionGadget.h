/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouSuggestionGadget : NSObject <PXGadget> {
    bool  _blursDegradedContent;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedHeightForWidth;
    bool  _contentHidden;
    PXForYouSuggestionGadgetContentView * _contentView;
    bool  _contentViewVisible;
    <PXForYouSuggestionGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    <PXDisplayAsset> * _keyAsset;
    PXUIMediaProvider * _mediaProvider;
    long long  _priority;
    NSString * _subtitle;
    <PXDisplaySuggestion> * _suggestion;
    unsigned short  _suggestionType;
    NSString * _title;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleContentRect;
}

@property (nonatomic, readonly) const struct __CFString { }*accessoryButtonEventTrackerKey;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic) bool blursDegradedContent;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedHeightForWidth;
@property (getter=isContentHidden, nonatomic) bool contentHidden;
@property (nonatomic, retain) PXForYouSuggestionGadgetContentView *contentView;
@property (nonatomic) bool contentViewVisible;
@property (nonatomic, readonly) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXForYouSuggestionGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, retain) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) <PXDisplaySuggestion> *suggestion;
@property (nonatomic) unsigned short suggestionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

+ (id)fetchQueue;
+ (id)placeholderFilters;
+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_contentViewIfLoaded;
- (void)_handleContentViewTap:(id)arg1;
- (void)_handleDismiss;
- (void)_markSuggestionAsActive;
- (void)_markSuggestionAsDeclined;
- (void)_updateContentViewMode;
- (void)_updateKeyAsset;
- (void)_updateTitleAndSubtitle;
- (bool)blursDegradedContent;
- (struct CGSize { double x1; double x2; })cachedHeightForWidth;
- (void)commitPreviewViewController:(id)arg1;
- (void)contentHasBeenSeen;
- (id)contentView;
- (void)contentViewDidDisappear;
- (bool)contentViewVisible;
- (void)contentViewWillAppear;
- (id)currentImage;
- (void)dealloc;
- (id)debugDictionary;
- (id)debugURLsForDiagnostics;
- (id)delegate;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)gadgetControllerHasAppeared;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)init;
- (id)initWithSuggestion:(id)arg1;
- (bool)isContentHidden;
- (id)keyAsset;
- (id)mediaProvider;
- (struct NSObject { Class x1; }*)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(struct NSObject { Class x1; }*)arg2 outSourceRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (long long)priority;
- (id)regionOfInterestForOneUpTransition;
- (void)setBlursDegradedContent:(bool)arg1;
- (void)setCachedHeightForWidth:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentHidden:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setSuggestionType:(unsigned short)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisibleContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)suggestion;
- (unsigned short)suggestionType;
- (id)title;
- (id)uniqueGadgetIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;

@end
