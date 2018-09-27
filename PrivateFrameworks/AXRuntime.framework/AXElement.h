/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXElement : NSObject <AXGroupable> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedFrame;
    struct CGPath { } * _cachedPath;
    AXElement * _cachedRemoteParent;
    AXElement * _cachedRemoteParentForContextID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedVisibleFrame;
    NSString * _localizationBundleID;
    NSString * _localizationBundlePath;
    NSString * _localizedStringKey;
    NSString * _localizedStringTableName;
    AXElementGroup * _parentGroup;
    bool  _representsScannerGroup;
    AXUIElement * _uiElement;
}

@property (nonatomic, readonly) AXElement *accessibilityUIServerApplication;
@property (nonatomic, readonly) AXElement *application;
@property (nonatomic, readonly) long long applicationOrientation;
@property (nonatomic) bool assistiveTechFocused;
@property (nonatomic, retain) AXElement *autoscrollTarget;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedFrame;
@property (nonatomic, retain) struct CGPath { }*cachedPath;
@property (nonatomic, retain) AXElement *cachedRemoteParent;
@property (nonatomic, retain) AXElement *cachedRemoteParentForContextID;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedVisibleFrame;
@property (nonatomic, readonly) bool canPerformEscape;
@property (nonatomic, readonly) bool canPerformZoom;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centerPoint;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) unsigned long long containerType;
@property (nonatomic, readonly) AXElement *currentApplication;
@property (nonatomic, readonly) NSArray *currentApplications;
@property (nonatomic, readonly) NSArray *currentApplicationsIgnoringSiri;
@property (nonatomic, readonly) NSArray *customActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *drags;
@property (nonatomic, readonly) NSArray *drops;
@property (nonatomic, readonly) AXElement *elementParent;
@property (nonatomic, readonly) struct __AXUIElement { }*elementRef;
@property (nonatomic, readonly) NSArray *elementsWithSemanticContext;
@property (nonatomic, readonly) NSArray *explorerElements;
@property (nonatomic, readonly) AXElement *firstElementInApplication;
@property (nonatomic, readonly) AXElement *firstElementInApplicationForFocus;
@property (nonatomic, readonly) AXElement *firstResponder;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusableFrameForZoom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) bool hasTextEntry;
@property (nonatomic, readonly) bool hasVariantKeys;
@property (nonatomic, readonly) bool hasWebContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hint;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isAXUIServer;
@property (nonatomic, readonly) bool isAccessibilityOpaqueElementProvider;
@property (nonatomic, readonly) bool isAccessibleElement;
@property (nonatomic, readonly) bool isAutoscrolling;
@property (nonatomic, readonly) bool isKeyboardKey;
@property (nonatomic, readonly) bool isMathEquation;
@property (nonatomic, readonly) bool isScannerElement;
@property (nonatomic, readonly) bool isScreenLocked;
@property (nonatomic, readonly) bool isSpringBoard;
@property (nonatomic, readonly) bool isSystemApplication;
@property (nonatomic, readonly) bool isSystemWideElement;
@property (nonatomic, readonly) bool isTouchContainer;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *localizationBundleID;
@property (nonatomic, readonly) NSString *localizationBundlePath;
@property (nonatomic, readonly) NSString *localizedStringKey;
@property (nonatomic, readonly) NSString *localizedStringTableName;
@property (getter=isNativeFocused, nonatomic, readonly) bool nativeFocus;
@property (nonatomic, readonly) AXElement *nativeFocusElement;
@property (nonatomic, readonly) AXElement *nativeFocusPreferredElement;
@property (nonatomic, readonly) NSArray *nativeFocusableElements;
@property (nonatomic, readonly) NSArray *parent;
@property (nonatomic) AXElementGroup *parentGroup;
@property (getter=isPassivelyListeningForEvents, nonatomic) bool passivelyListeningForEvents;
@property (nonatomic, readonly) struct CGPath { }*path;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) AXElement *remoteParent;
@property (nonatomic, readonly) bool representsScannerGroup;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rowRange;
@property (nonatomic, readonly) long long scannerActivateBehavior;
@property (nonatomic, readonly) unsigned long long scanningBehaviorTraits;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedTextRange;
@property (nonatomic, readonly) NSDictionary *semanticContext;
@property (nonatomic, readonly) NSArray *siriContentElementsWithSemanticContext;
@property (nonatomic, readonly) NSArray *siriContentNativeFocusableElements;
@property (nonatomic, readonly) AXElement *springBoardApplication;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedGestures;
@property (nonatomic, readonly) AXElement *systemApplication;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textCursorFrame;
@property (nonatomic, readonly) NSArray *textOperations;
@property (nonatomic, readonly) AXElement *touchContainer;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) NSArray *typingCandidates;
@property (nonatomic, retain) AXUIElement *uiElement;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic) NSString *value;
@property (nonatomic, readonly) NSArray *variantKeys;
@property (nonatomic, readonly) NSArray *visibleElements;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } visiblePoint;
@property (nonatomic, readonly) unsigned int windowContextId;
@property (nonatomic, readonly) unsigned int windowDisplayId;

+ (id)elementAtCoordinate:(struct CGPoint { double x1; double x2; })arg1 withVisualPadding:(bool)arg2;
+ (id)elementWithAXUIElement:(struct __AXUIElement { }*)arg1;
+ (id)elementWithUIElement:(id)arg1;
+ (id)elementsWithUIElements:(id)arg1;
+ (id)primaryApp;
+ (void)registerNotifications:(id)arg1 withIdentifier:(id)arg2 withHandler:(id /* block */)arg3;
+ (id)systemWideElement;
+ (void)unregisterNotifications:(id)arg1;

- (void).cxx_destruct;
- (id)_axElementsForAXUIElements:(id)arg1;
- (id)_elementForAttribute:(long long)arg1 shouldUpdateCache:(bool)arg2 shouldFetchAttributes:(bool)arg3;
- (bool)_performActivate;
- (id)_remoteParentForContextID;
- (void)_updateLabel;
- (bool)_zoomInOrOut:(bool)arg1;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityUIServerApplication;
- (id)application;
- (long long)applicationOrientation;
- (bool)assistiveTechFocused;
- (id)auditIssuesForOptions:(id)arg1;
- (void)autoscrollInDirection:(unsigned long long)arg1;
- (id)autoscrollTarget;
- (id)bundleId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedFrame;
- (struct CGPath { }*)cachedPath;
- (id)cachedRemoteParent;
- (id)cachedRemoteParentForContextID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedVisibleFrame;
- (bool)canPerformActivate;
- (bool)canPerformEscape;
- (bool)canPerformSecondaryActivate;
- (bool)canPerformTrackingDetail;
- (bool)canPerformZoom;
- (bool)canScrollInAtLeastOneDirection;
- (struct CGPoint { double x1; double x2; })centerPoint;
- (id)children;
- (void)clearCachedFrame:(bool)arg1 cachedVisibleFrame:(bool)arg2;
- (unsigned long long)containerType;
- (id)containerTypes;
- (unsigned int)contextIdForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPath { }*)convertPath:(struct CGPath { }*)arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toContextId:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromContextId:(unsigned int)arg2;
- (id)currentApplication;
- (id)currentApplications;
- (id)currentApplicationsIgnoringSiri;
- (id)customActions;
- (void)dealloc;
- (void)decreaseAutoscrollSpeed;
- (id)description;
- (unsigned int)displayIdForContextId:(unsigned int)arg1;
- (double)distanceToElement:(id)arg1;
- (double)distanceToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)drags;
- (id)drops;
- (id)elementForAttribute:(long long)arg1;
- (id)elementForAttribute:(long long)arg1 parameter:(id)arg2;
- (id)elementParent;
- (struct __AXUIElement { }*)elementRef;
- (id)elementsForAttribute:(long long)arg1;
- (id)elementsMatchingText:(id)arg1;
- (id)elementsWithSemanticContext;
- (id)explorerElements;
- (id)firstElementInApplication;
- (id)firstElementInApplicationForFocus;
- (id)firstResponder;
- (id)firstResponderForFocus;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusableFrameForZoom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)hasAllTraits:(unsigned long long)arg1;
- (bool)hasAnyTraits:(unsigned long long)arg1;
- (bool)hasOnlyTraits:(unsigned long long)arg1;
- (bool)hasTextEntry;
- (bool)hasVariantKeys;
- (bool)hasWebContent;
- (id)highestAncestorGroup;
- (id)hint;
- (id)identifier;
- (void)increaseAutoscrollSpeed;
- (id)initWithAXUIElement:(struct __AXUIElement { }*)arg1;
- (id)initWithUIElement:(id)arg1;
- (void)insertText:(id)arg1 atPosition:(long long)arg2;
- (void)insertTextAtCurrentPosition:(id)arg1;
- (bool)isAXUIServer;
- (bool)isAccessibilityOpaqueElementProvider;
- (bool)isAccessibleElement;
- (bool)isAutoscrolling;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isKeyboardKey;
- (bool)isMap;
- (bool)isMathEquation;
- (bool)isNativeFocused;
- (bool)isPassivelyListeningForEvents;
- (bool)isScannerElement;
- (bool)isScreenLocked;
- (bool)isSpringBoard;
- (bool)isSystemApplication;
- (bool)isSystemWideElement;
- (bool)isTouchContainer;
- (bool)isValid;
- (bool)isVisible;
- (id)keyboardContainer;
- (id)label;
- (id)language;
- (id)localizationBundleID;
- (id)localizationBundlePath;
- (id)localizedStringKey;
- (id)localizedStringTableName;
- (bool)longPress;
- (id)makeLookingGlassRequest:(id)arg1;
- (id)nativeFocusElement;
- (id)nativeFocusPreferredElement;
- (id)nativeFocusableElements;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)parent;
- (id)parentGroup;
- (struct CGPath { }*)path;
- (void)pauseAutoscrolling;
- (bool)performAction:(int)arg1;
- (bool)performAction:(int)arg1 withValue:(id)arg2;
- (int)pid;
- (bool)press;
- (bool)pressTVBackButton;
- (bool)pressTVDataOnScreenButton;
- (bool)pressTVDownButton;
- (bool)pressTVFastForwardButton;
- (bool)pressTVLeftButton;
- (bool)pressTVMenuButton;
- (bool)pressTVMicButton;
- (bool)pressTVNextTrackButton;
- (bool)pressTVPauseButton;
- (bool)pressTVPlayButton;
- (bool)pressTVPlayPauseButton;
- (bool)pressTVPreviousTrackButton;
- (bool)pressTVRewindButton;
- (bool)pressTVRightButton;
- (bool)pressTVSelectButton;
- (bool)pressTVSkipBackwardsButton;
- (bool)pressTVSkipForwardsButton;
- (bool)pressTVStopButton;
- (bool)pressTVUpButton;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (id)processName;
- (id)remoteApplication;
- (id)remoteParent;
- (bool)representsScannerGroup;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rowRange;
- (long long)scannerActivateBehavior;
- (unsigned long long)scanningBehaviorTraits;
- (struct __AXUIElement { }*)scrollAncestorForScrollAction:(int)arg1;
- (void)scrollToBottom;
- (void)scrollToTop;
- (bool)scrollToVisible;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedTextRange;
- (id)semanticContext;
- (void)sendUserEventOccurred;
- (void)setAssistiveTechFocused:(bool)arg1;
- (void)setAutoscrollTarget:(id)arg1;
- (void)setCachedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCachedPath:(struct CGPath { }*)arg1;
- (void)setCachedRemoteParent:(id)arg1;
- (void)setCachedRemoteParentForContextID:(id)arg1;
- (void)setCachedVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)setNativeFocus;
- (void)setParentGroup:(id)arg1;
- (void)setPassivelyListeningForEvents:(bool)arg1;
- (void)setSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setUiElement:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)showContextMenu;
- (id)siriContentElementsWithSemanticContext;
- (id)siriContentNativeFocusableElements;
- (id)springBoardApplication;
- (id)supportedGestures;
- (bool)supportsAction:(int)arg1;
- (id)systemApplication;
- (bool)systemLongPressTVMenuButton;
- (bool)systemPressTVDownButton;
- (bool)systemPressTVHomeButton;
- (bool)systemPressTVLeftButton;
- (bool)systemPressTVMenuButton;
- (bool)systemPressTVPlayPauseButton;
- (bool)systemPressTVRightButton;
- (bool)systemPressTVSelectButton;
- (bool)systemPressTVSiriButton;
- (bool)systemPressTVUpButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textCursorFrame;
- (id)textOperations;
- (id)touchContainer;
- (unsigned long long)traits;
- (id)typingCandidates;
- (id)uiElement;
- (void)updateCache:(long long)arg1;
- (id)url;
- (id)value;
- (id)variantKeys;
- (bool)viewHierarchyHasNativeFocus;
- (id)visibleElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;
- (struct CGPoint { double x1; double x2; })visiblePoint;
- (unsigned int)windowContextId;
- (unsigned int)windowDisplayId;
- (bool)zoomIn;
- (bool)zoomOut;

@end
