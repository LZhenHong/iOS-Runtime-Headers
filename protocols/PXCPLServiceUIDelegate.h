/* Generated by RuntimeBrowser.
 */

@protocol PXCPLServiceUIDelegate <NSObject>

@required

- (void)serviceUI:(PXCPLServiceUI *)arg1 statusDidChange:(id <PXCPLServiceUIStatus>)arg2;

@optional

- (bool)serviceUI:(PXCPLServiceUI *)arg1 performAction:(long long)arg2;
- (void)serviceUI:(PXCPLServiceUI *)arg1 progressDidChange:(float)arg2;

@end
