/* Generated by RuntimeBrowser.
 */

@protocol TPSURLSessionManagerDelegate <NSObject>

@optional

- (void)URLSessionManagerDidReceiveChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (bool)URLSessionManagerHasConnection:(TPSURLSessionManager *)arg1;
- (void)URLSessionManagerRequestCompleted:(TPSURLSessionManager *)arg1 sessionTask:(TPSURLSessionTask *)arg2;
- (void)URLSessionManagerRequestResumed:(TPSURLSessionManager *)arg1 sessionTask:(TPSURLSessionTask *)arg2;
- (NSURLSessionConfiguration *)URLSessionManagerSessionConfiguration:(TPSURLSessionManager *)arg1;
- (NSOperationQueue *)URLSessionManagerSessionOperationQueue:(TPSURLSessionManager *)arg1;
- (bool)URLSessionManagerShouldCoalesceRequest:(TPSURLSessionManager *)arg1;

@end
