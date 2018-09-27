/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

@interface PTUISettingsController : UINavigationController {
    UIBarButtonItem * _dismissButton;
}

@property (nonatomic, retain) UIBarButtonItem *dismissButton;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (void).cxx_destruct;
- (id)_defaultDismissButton;
- (void)_dismiss;
- (void)_reloadRootModule;
- (id)dismissButton;
- (id)initWithRootModuleController:(id)arg1;
- (id)initWithRootSettings:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setDismissButton:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)_pxswizzled_pushViewController:(id)arg1 animated:(bool)arg2;
- (void)px_performWithoutAnimations:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)px_setShouldPreventAnimations:(bool)arg1;
- (bool)px_shouldPreventAnimations;

@end
