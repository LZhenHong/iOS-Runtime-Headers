/* Generated by RuntimeBrowser.
 */

@protocol HMDDataStreamDelegate <NSObject>

@required

- (void)dataStream:(HMDDataStream *)arg1 didFailWithError:(NSError *)arg2;
- (void)dataStreamDidClose:(HMDDataStream *)arg1;
- (void)dataStreamDidOpen:(HMDDataStream *)arg1;

@end
