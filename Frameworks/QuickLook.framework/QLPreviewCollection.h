/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewCollection : UIViewController <QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewCollectionProtocol, QLPreviewItemViewControllerDelegate, QLTransitionControllerProtocol, UIGestureRecognizerDelegate> {
    bool  _allowInteractiveTransitions;
    QLAppearance * _appearance;
    unsigned long long  _appearanceActions;
    long long  _currentItemIndex;
    bool  _fullScreen;
    bool  _hasTriggeredInteractiveTransitionAnimation;
    bool  _isAvailable;
    bool  _isEditing;
    bool  _isTransitioningPage;
    QLPreviewItemStore * _itemStore;
    NSString * _loadingString;
    UIView * _localAccessoryViewContainer;
    UIPanGestureRecognizer * _pagePanGesture;
    UISwipeGestureRecognizer * _pageSwipeGesture;
    QLPageViewController * _pageViewController;
    UIPinchGestureRecognizer * _pinchGesture;
    QLPinchRotationTracker * _pinchRotationTracker;
    id /* block */  _prepareForInvalidationCompletionHandler;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _previewItemRange;
    UIView * _remoteAccessoryViewContainer;
    UIRotationGestureRecognizer * _rotationGesture;
    UIPanGestureRecognizer * _slideGesture;
    <QLPreviewControllerStateProtocol> * _stateManager;
    QLSwipeDownTracker * _swipeDownTracker;
    UITapGestureRecognizer * _tapGesture;
    QLTransitionContext * _transitionContext;
    <QLTransitionControllerProtocol> * _transitionController;
    QLTransitionDriver * _transitionDriver;
    UIPanGestureRecognizer * _verticalPanGesture;
    unsigned long long  _visibilityState;
}

@property (nonatomic) bool allowInteractiveTransitions;
@property (readonly) QLItemViewController *currentPreviewItemViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fullScreen;
@property bool hasTriggeredInteractiveTransitionAnimation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAvailable;
@property (nonatomic) bool isEditing;
@property (nonatomic) bool isTransitioningPage;
@property (retain) QLPageViewController *pageViewController;
@property (retain) UIPinchGestureRecognizer *pinchGesture;
@property (retain) QLPinchRotationTracker *pinchRotationTracker;
@property (nonatomic, copy) id /* block */ prepareForInvalidationCompletionHandler;
@property (retain) UIRotationGestureRecognizer *rotationGesture;
@property (retain) UIPanGestureRecognizer *slideGesture;
@property (retain) <QLPreviewControllerStateProtocol> *stateManager;
@property (readonly) Class superclass;
@property (retain) QLSwipeDownTracker *swipeDownTracker;
@property (retain) QLTransitionContext *transitionContext;
@property (retain) <QLTransitionControllerProtocol> *transitionController;
@property (retain) QLTransitionDriver *transitionDriver;

+ (void)previewCollectionUsingRemoteViewController:(bool)arg1 completionHandler:(id /* block */)arg2;
+ (id)quickLookExtension;
+ (void)remotePreviewCollectionWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_cleanAccessoryViewContainer;
- (void)_installGestures;
- (bool)_isBeingDismissed;
- (bool)_isVisible;
- (void)_notifyHostPreviewCollectionIsReadyForInvalidationIfNeeded;
- (void)_setUpTransitionDriverForPresenting:(bool)arg1 duration:(double)arg2;
- (void)_tapGestureRecognized;
- (void)_tearDownTransition:(bool)arg1;
- (void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1;
- (void)_updateCanChangeCurrentPage;
- (void)_updateFullscreen;
- (void)_updateFullscreenBackgroundColor;
- (void)_updateOverlayVisibility;
- (void)_updatePreferredContentSize;
- (void)_updatePreviewVisibility:(bool)arg1;
- (void)_updatePrinter;
- (void)_updateTitleFromController;
- (void)_updateWhitePointAdaptivityStyle;
- (id)accessoryView;
- (bool)allowInteractiveTransitions;
- (void)completeTransition:(bool)arg1 withDuration:(double)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (id)currentPreviewItemViewController;
- (long long)dragDataOwnerForPreviewItemViewController:(id)arg1;
- (void)expandContentOfPreviewItemViewController:(id)arg1;
- (bool)fullScreen;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureTracker;
- (bool)hasTriggeredInteractiveTransitionAnimation;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(bool)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (id)init;
- (void)invalidateService;
- (bool)isAvailable;
- (bool)isEditing;
- (bool)isRemote;
- (bool)isTransitioningPage;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(id /* block */)arg1;
- (void)loadView;
- (id)loadingTextForPreviewItemViewController:(id)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (id)pageViewController;
- (void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(bool)arg6;
- (void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(bool)arg6;
- (void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6;
- (id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3;
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2;
- (void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5;
- (void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(bool)arg6;
- (void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(bool)arg6;
- (bool)pinchDismissGestureInProgress;
- (id)pinchGesture;
- (id)pinchRotationTracker;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)prepareForInvalidationCompletionHandler;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)arg1;
- (void)previewItemViewController:(id)arg1 didEnableEditMode:(bool)arg2;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewItemViewController:(id)arg1 hasUnsavedEdits:(bool)arg2;
- (void)previewItemViewController:(id)arg1 wantsFullScreen:(bool)arg2;
- (void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2;
- (void)previewItemViewController:(id)arg1 wantsToShowShareSheetWithPopoverTracker:(id)arg2 dismissCompletion:(id /* block */)arg3;
- (void)previewItemViewControllerDidEditPreview:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewItemViewControllerDidUpdateTitle:(id)arg1;
- (void)previewItemViewControllerWantsToDismissQuickLook:(id)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1;
- (void)previewItemViewControllerWantsToShowShareSheet:(id)arg1;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1;
- (void)previewItemViewControllerWantsUpdateOverlay:(id)arg1 animated:(bool)arg2;
- (void)previewItemViewControllerWantsUpdatePrinter:(id)arg1;
- (id)rotationGesture;
- (void)rotationOrPinchGestureRecognized:(id)arg1;
- (void)setAllowInteractiveTransitions:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(bool)arg2;
- (void)setFullScreen:(bool)arg1;
- (void)setHasTriggeredInteractiveTransitionAnimation:(bool)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setIsEditing:(bool)arg1;
- (void)setIsTransitioningPage:(bool)arg1;
- (void)setLoadingString:(id)arg1;
- (void)setPageViewController:(id)arg1;
- (void)setPinchGesture:(id)arg1;
- (void)setPinchRotationTracker:(id)arg1;
- (void)setPrepareForInvalidationCompletionHandler:(id /* block */)arg1;
- (void)setRemoteAccessoryContainer:(id)arg1;
- (void)setRotationGesture:(id)arg1;
- (void)setSlideGesture:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setStateManager:(id)arg1;
- (void)setSwipeDownTracker:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionController:(id)arg1;
- (void)setTransitionDriver:(id)arg1;
- (id)slideGesture;
- (void)slideToDismissGestureRecognized:(id)arg1;
- (void)startNonInteractiveTransitionPresenting:(bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(bool)arg3 useInteractiveTransition:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)stateManager;
- (id)swipeDownTracker;
- (void)tearDownTransition:(bool)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)transitionContext;
- (id)transitionController;
- (id)transitionDriver;
- (bool)transitionInProgress;
- (void)triggerInteractiveTransitionAnimationIfNeeded;
- (void)updateCurrentPreviewConfiguration;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
