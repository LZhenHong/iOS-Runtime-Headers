/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
    <SXWebContentLoadingPolicyProvider> * _loadingPolicyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXWebContentLoadingPolicyProvider> *loadingPolicyProvider;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1 loadingPolicyProvider:(id)arg2;
- (id)loadingPolicyProvider;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;
- (id)type;

@end
