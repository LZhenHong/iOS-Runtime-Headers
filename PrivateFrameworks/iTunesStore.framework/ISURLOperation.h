/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLOperation : ISOperation <SSURLSessionManagerDelegate> {
    NSNumber * __accountDSIDOverride;
    NSURLRequest * _activeURLRequest;
    SSAuthenticationContext * _authenticationContext;
    NSMutableData * _dataBuffer;
    NSObject<OS_dispatch_queue> * _dataBufferAccessQueue;
    ISDataProvider * _dataProvider;
    SSHTTPArchive * _httpArchive;
    bool  _loadsHTTPFailures;
    long long  _networkRetryCount;
    NSArray * _passThroughErrors;
    ISURLRequestPerformance * _performanceMetrics;
    NSCountedSet * _redirectURLs;
    SSMutableURLRequestProperties * _requestProperties;
    NSURLResponse * _response;
    bool  _shouldSetCookies;
    bool  _uploadProgressRequested;
    SSURLSessionManager * _urlSessionManager;
    NSURLSessionTask * _urlSessionTask;
    bool  _usesPrivateCookieStore;
}

@property (readonly) SSHTTPArchive *HTTPArchive;
@property (nonatomic, readonly) NSURLCache *URLCache;
@property (nonatomic, readonly) NSString *URLCacheID;
@property (setter=_setAccountDSIDOverride:, nonatomic, retain) NSNumber *_accountDSIDOverride;
@property (setter=_setActiveURLRequest:, retain) NSURLRequest *_activeURLRequest;
@property (getter=_loadsHTTPFailures, setter=_setLoadsHTTPFailures:) bool _loadsHTTPFailures;
@property (getter=_shouldSetCookies, setter=_setShouldSetCookies:) bool _shouldSetCookies;
@property (getter=_usesPrivateCookieStore, setter=_setUsesPrivateCookieStore:) bool _usesPrivateCookieStore;
@property (readonly, copy) NSURLRequest *activeURLRequest;
@property (retain) SSAuthenticationContext *authenticationContext;
@property (nonatomic, readonly) SSBag *bag;
@property (retain) ISDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property <ISURLOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isURLBagRequest;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, retain) NSArray *passThroughErrors;
@property (readonly) ISURLRequestPerformance *performanceMetrics;
@property (nonatomic, readonly) NSData *rawResponseData;
@property (copy) SSURLRequestProperties *requestProperties;
@property (retain) NSURLResponse *response;
@property (nonatomic, readonly) bool shouldDisableCellular;
@property (nonatomic, readonly) bool shouldRequireCellular;
@property (nonatomic, readonly) bool shouldSetCookies;
@property (nonatomic, readonly) NSData *sourceAppAuditTokenData;
@property (nonatomic, readonly) NSString *sourceAppBundleID;
@property (readonly) Class superclass;
@property bool tracksPerformanceMetrics;
@property (getter=isUploadProgressRequested, nonatomic) bool uploadProgressRequested;

+ (struct __CFURLStorageSession { }*)_sharedCacheStorageSession;
+ (id)copyUserAgent;
+ (struct _CFURLCache { }*)sharedCFURLCache;

- (void).cxx_destruct;
- (id)HTTPArchive;
- (id)URLCache;
- (id)URLCacheID;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)URLSession:(id)arg1 task:(id)arg2 decodedDataForResponseData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCreatingHTTPArchive:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_accountDSIDOverride;
- (id)_accountIdentifier;
- (id)_activeURL;
- (id)_activeURLRequest;
- (id)_copyAuthenticationContext;
- (id)_copyConnectionPropertiesWithDataConnectionServiceType:(struct __CFString { }*)arg1;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (long long)_defaultAuthChallengeDispositionForChallenge:(id)arg1;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (id)_errorWithDomain:(id)arg1 code:(long long)arg2;
- (void)_handleFinishedLoading;
- (void)_handleReceivedData:(id)arg1;
- (void)_handleReceivedResponse:(id)arg1;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (bool)_isExternalURL:(id)arg1;
- (bool)_isPassThroughStatus:(long long)arg1;
- (bool)_loadsHTTPFailures;
- (void)_logRequest:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (bool)_processResponseData:(id)arg1 error:(id*)arg2;
- (id)_requestProperties;
- (void)_retry;
- (void)_run;
- (bool)_runRequestWithURL:(id)arg1 dataConnectionServiceType:(struct __CFString { }*)arg2;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_sanitizedStringForString:(id)arg1;
- (id)_sanitizedURLForURL:(id)arg1;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_setAccountDSIDOverride:(id)arg1;
- (void)_setActiveURLRequest:(id)arg1;
- (void)_setLoadsHTTPFailures:(bool)arg1;
- (void)_setShouldSetCookies:(bool)arg1;
- (void)_setUsesPrivateCookieStore:(bool)arg1;
- (bool)_shouldFollowRedirectWithRequest:(id)arg1 error:(id*)arg2;
- (bool)_shouldSetCookies;
- (void)_stopConnection;
- (void)_stopIfCancelled;
- (id)_stringForCachePolicy:(unsigned long long)arg1;
- (void)_updateProgress;
- (bool)_usesPrivateCookieStore;
- (bool)_validateContentLength:(long long)arg1 error:(id*)arg2;
- (void)_willSendRequest:(id)arg1;
- (id)activeURLRequest;
- (id)authenticationContext;
- (id)dataProvider;
- (void)dealloc;
- (bool)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (void)handleResponse:(id)arg1;
- (id)init;
- (id)initWithSessionManager:(id)arg1;
- (bool)isUploadProgressRequested;
- (id)metricsLoadURLSamplingPercentage;
- (id)metricsLoadURLSamplingPercentageCachedResponses;
- (id)metricsLoadURLSessionDuration;
- (id)newRequestWithURL:(id)arg1;
- (id)passThroughErrors;
- (id)performanceMetrics;
- (id)rawResponseData;
- (id)request;
- (id)requestProperties;
- (id)response;
- (void)run;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setPassThroughErrors:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setTracksPerformanceMetrics:(bool)arg1;
- (void)setUploadProgressRequested:(bool)arg1;
- (bool)shouldDisableCellular;
- (bool)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (bool)shouldRequireCellular;
- (bool)shouldSetCookies;
- (id)sourceAppAuditTokenData;
- (id)sourceAppBundleID;
- (bool)tracksPerformanceMetrics;

@end
