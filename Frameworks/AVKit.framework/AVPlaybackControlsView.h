/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlaybackControlsView : UIView {
    _UIVisualEffectBackdropView * _captureView;
    NSArray * _customAudioButtons;
    NSArray * _customControlItems;
    AVPlayerViewControllerCustomControlsView * _customControlsView;
    NSArray * _customDisplayModeButtons;
    NSArray * _customMediaButtons;
    NSArray * _defaultAudioControls;
    NSArray * _defaultDisplayModeControls;
    AVButton * _doneButton;
    bool  _doubleRowLayoutEnabled;
    bool  _fullScreen;
    AVButton * _fullScreenButton;
    long long  _includedContainers;
    AVButton * _mediaSelectionButton;
    AVButton * _miniPlayPauseButton;
    AVBackdropView * _miniPlayPauseButtonBackdropView;
    NSUUID * _mostRecentAnimationCompletionsID;
    bool  _needsIntialLayout;
    AVButton * _pictureInPictureButton;
    UIView * _playbackControlsContainer;
    UIViewPropertyAnimator * _playbackControlsVisibilityAnimator;
    long long  _preferredUnobscuredArea;
    AVButton * _prominentPlayButton;
    AVBackdropView * _prominentPlayButtonBackdropView;
    AVPlaybackControlsRoutePickerView * _routePickerView;
    AVBackdropView * _screenModeControls;
    NSLayoutConstraint * _screenModeControlsToVolumeControlsSpacingConstraint;
    AVScrubber * _scrubber;
    AVButton * _skipBackButton;
    AVButton * _skipForwardButton;
    AVButton * _standardPlayPauseButton;
    AVButton * _startLeftwardContentTransitionButton;
    AVButton * _startRightwardContentTransitionButton;
    AVStyleSheet * _styleSheet;
    bool  _topAreaLayoutGuideExpanded;
    AVView * _transportControlsContainerView;
    AVTransportControlsView * _transportControlsView;
    AVButton * _videoGravityButton;
    AVVolumeButtonControl * _volumeButton;
    NSLayoutConstraint * _volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
    AVBackdropView * _volumeControls;
    UIView * _volumeControlsContainer;
    AVVolumeSlider * _volumeSlider;
    NSLayoutConstraint * _volumeTopToLayoutGuideTopConstraint;
    NSLayoutConstraint * _volumeTopToViewTopConstraint;
}

@property (nonatomic, readonly) _UIVisualEffectBackdropView *captureView;
@property (nonatomic, readonly) NSArray *customAudioButtons;
@property (nonatomic, copy) NSArray *customControlItems;
@property (nonatomic, readonly) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (nonatomic, readonly) NSArray *customDisplayModeButtons;
@property (nonatomic, readonly) NSArray *customMediaButtons;
@property (nonatomic, readonly) NSArray *defaultAudioControls;
@property (nonatomic, readonly) NSArray *defaultDisplayModeControls;
@property (nonatomic, readonly) AVButton *doneButton;
@property (getter=isDoubleRowLayoutEnabled, nonatomic) bool doubleRowLayoutEnabled;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (nonatomic, readonly) AVButton *fullScreenButton;
@property (nonatomic) long long includedContainers;
@property (nonatomic, readonly) AVButton *mediaSelectionButton;
@property (nonatomic, readonly) AVButton *miniPlayPauseButton;
@property (nonatomic, readonly) AVBackdropView *miniPlayPauseButtonBackdropView;
@property (nonatomic, retain) NSUUID *mostRecentAnimationCompletionsID;
@property (nonatomic) bool needsIntialLayout;
@property (nonatomic, readonly) AVButton *pictureInPictureButton;
@property (nonatomic, readonly) UIView *playbackControlsContainer;
@property (nonatomic, readonly) bool playbackControlsIncludeDisplayModeControls;
@property (nonatomic, readonly) bool playbackControlsIncludeTransportControls;
@property (nonatomic, readonly) bool playbackControlsIncludeVolumeControls;
@property (nonatomic, retain) UIViewPropertyAnimator *playbackControlsVisibilityAnimator;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic, readonly) AVButton *prominentPlayButton;
@property (nonatomic, readonly) AVBackdropView *prominentPlayButtonBackdropView;
@property (nonatomic, readonly) AVPlaybackControlsRoutePickerView *routePickerView;
@property (nonatomic, readonly) AVBackdropView *screenModeControls;
@property (nonatomic, readonly) NSLayoutConstraint *screenModeControlsToVolumeControlsSpacingConstraint;
@property (nonatomic, readonly) AVScrubber *scrubber;
@property (nonatomic, readonly) bool showsProminentPlayButton;
@property (nonatomic, readonly) AVButton *skipBackButton;
@property (nonatomic, readonly) AVButton *skipForwardButton;
@property (nonatomic, readonly) AVButton *standardPlayPauseButton;
@property (nonatomic, readonly) AVButton *startLeftwardContentTransitionButton;
@property (nonatomic, readonly) AVButton *startRightwardContentTransitionButton;
@property (nonatomic, retain) AVStyleSheet *styleSheet;
@property (getter=isTopAreaLayoutGuideExpanded, nonatomic) bool topAreaLayoutGuideExpanded;
@property (nonatomic, readonly) AVView *transportControlsContainerView;
@property (nonatomic, readonly) AVTransportControlsView *transportControlsView;
@property (nonatomic, readonly) AVButton *videoGravityButton;
@property (nonatomic, readonly) AVVolumeButtonControl *volumeButton;
@property (nonatomic, readonly) NSLayoutConstraint *volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
@property (nonatomic, readonly) AVBackdropView *volumeControls;
@property (nonatomic, readonly) UIView *volumeControlsContainer;
@property (nonatomic, readonly) AVVolumeSlider *volumeSlider;
@property (nonatomic, readonly) NSLayoutConstraint *volumeTopToLayoutGuideTopConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *volumeTopToViewTopConstraint;

- (void).cxx_destruct;
- (id)_buttonsForControlItems:(id)arg1 withType:(long long)arg2 limit:(unsigned long long)arg3;
- (id)_customControlsViewIfLoaded;
- (bool)_isDescendantOfNonPagingScrollView;
- (id)_playbackControlsViewItems;
- (void)_setupInitialLayout;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_statusBarHiddenDidChange:(id)arg1;
- (void)_statusBarOrientationWillChange:(id)arg1;
- (void)_updateAreVolumeAndTransportControlsVisible;
- (void)_updateDoubleRowLayoutEnabled;
- (void)_updateLayoutMargins;
- (void)_updateLayoutMargins:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePlaybackControlsVisibility;
- (void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3;
- (id)captureView;
- (id)customAudioButtons;
- (id)customControlItems;
- (id)customControlsView;
- (id)customDisplayModeButtons;
- (id)customMediaButtons;
- (void)dealloc;
- (id)defaultAudioControls;
- (id)defaultDisplayModeControls;
- (id)doneButton;
- (id)fullScreenButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)includedContainers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleSheet:(id)arg2 captureView:(id)arg3;
- (bool)isDoubleRowLayoutEnabled;
- (bool)isFullScreen;
- (bool)isTopAreaLayoutGuideExpanded;
- (void)layoutSubviews;
- (id)mediaSelectionButton;
- (id)miniPlayPauseButton;
- (id)miniPlayPauseButtonBackdropView;
- (id)mostRecentAnimationCompletionsID;
- (bool)needsIntialLayout;
- (id)pictureInPictureButton;
- (id)playbackControlsContainer;
- (bool)playbackControlsIncludeDisplayModeControls;
- (bool)playbackControlsIncludeTransportControls;
- (bool)playbackControlsIncludeVolumeControls;
- (id)playbackControlsVisibilityAnimator;
- (long long)preferredUnobscuredArea;
- (id)prominentPlayButton;
- (id)prominentPlayButtonBackdropView;
- (id)routePickerView;
- (void)safeAreaInsetsDidChange;
- (id)screenModeControls;
- (id)screenModeControlsToVolumeControlsSpacingConstraint;
- (id)scrubber;
- (void)setCustomControlItems:(id)arg1;
- (void)setDoubleRowLayoutEnabled:(bool)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setIncludedContainers:(long long)arg1;
- (void)setMostRecentAnimationCompletionsID:(id)arg1;
- (void)setNeedsIntialLayout:(bool)arg1;
- (void)setPlaybackControlsVisibilityAnimator:(id)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (void)setStyleSheet:(id)arg1;
- (void)setTopAreaLayoutGuideExpanded:(bool)arg1;
- (void)setupInitialLayout;
- (bool)showsProminentPlayButton;
- (id)skipBackButton;
- (id)skipForwardButton;
- (id)standardPlayPauseButton;
- (id)startLeftwardContentTransitionButton;
- (id)startRightwardContentTransitionButton;
- (id)styleSheet;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportControlsContainerView;
- (id)transportControlsView;
- (void)updateLayoutForChangedControlsVisibility;
- (id)videoGravityButton;
- (id)volumeButton;
- (id)volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
- (id)volumeControls;
- (id)volumeControlsContainer;
- (id)volumeSlider;
- (id)volumeTopToLayoutGuideTopConstraint;
- (id)volumeTopToViewTopConstraint;

@end
