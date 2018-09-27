/* Generated by RuntimeBrowser.
 */

@protocol AVFullScreenViewControllerDelegate <NSObject>

@required

- (void)fullScreenViewController:(AVFullScreenViewController *)arg1 viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg2 coordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (void)fullScreenViewControllerNeedsAppBasedStatusBarAppearanceUpdate:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillEndFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (UIResponder *)keyCommandResponderForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (long long)preferredStatusStyleForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (bool)prefersStatusBarHiddenForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (UIView *)viewForFullScreenViewController:(AVFullScreenViewController *)arg1;

@end
