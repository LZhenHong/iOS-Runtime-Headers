/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKAuthenticatorEvaluationContext : NSObject <LAUIDelegate> {
    LAContext * _LAContext;
    NSMutableArray * _accessHandlers;
    unsigned long long  _activeMechanisms;
    PKAuthenticator * _authenticator;
    unsigned long long  _completedMechanisms;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_source> * _delayedBiometricMissFeedback;
    <PKAuthenticatorDelegate> * _delegate;
    double  _evaluationMinimumTime;
    unsigned long long  _externalContextInvalidationPolicy;
    unsigned long long  _externalContextOptions;
    bool  _fingerPresent;
    bool  _fingerPresentTimeoutExpired;
    bool  _fingerPresentTimeoutRequired;
    bool  _invalidated;
    NSObject<OS_dispatch_source> * _liftFingerTimeout;
    bool  _passcodeActive;
    bool  _passphraseActive;
    unsigned long long  _pearlFlags;
    long long  _pearlState;
    unsigned long long  _presentationFlags;
    PKAuthenticatorEvaluationRequest * _request;
    bool  _shouldLiftFinger;
    double  _touchIDBeginTime;
    bool  _usingExternalContext;
}

@property (nonatomic, readonly) bool biometricMatch;
@property (nonatomic) <PKAuthenticatorDelegate> *delegate;
@property (nonatomic, readonly) bool fingerPresent;
@property (nonatomic, readonly) bool fingerPresentTimeoutExpired;
@property (nonatomic, readonly) bool fingerPresentTimeoutRequired;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) bool passcodeActive;
@property (nonatomic, readonly) bool passphraseActive;
@property (nonatomic, readonly) long long pearlState;
@property (nonatomic, readonly) unsigned long long presentationFlags;
@property (nonatomic, readonly) PKAuthenticatorEvaluationRequest *request;
@property (nonatomic, readonly) bool shouldLiftFinger;
@property (nonatomic, readonly) bool userIntentAvailable;

- (void).cxx_destruct;
- (void)_clearLiftFingerTimer;
- (void)_createContextWithExternalizedContext:(id)arg1;
- (bool)_delegateSupportsPasscodeDismissal;
- (bool)_delegateSupportsPasscodePresentation;
- (bool)_delegateSupportsPassphraseDismissal;
- (bool)_delegateSupportsPassphrasePresentation;
- (unsigned long long)_didPresentFlagForAuthenticatorViewType:(long long)arg1 custom:(bool)arg2;
- (void)_dismissAuthenticatorViewOfType:(long long)arg1;
- (void)_handleLiftFinger;
- (void)_presentAuthenticatorViewOfType:(long long)arg1 withParams:(id)arg2;
- (unsigned long long)_presentationFlagForAuthenticatorViewType:(long long)arg1;
- (void)_requestRemoteAuthenticatorViewControllerOfType:(long long)arg1 withClassName:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)_setLiftFingerTimer;
- (void)_setPearlState:(long long)arg1;
- (void)_updatePearlState;
- (void)accessLAContext:(id /* block */)arg1;
- (bool)biometricMatch;
- (void)dealloc;
- (id)delegate;
- (void)evaluateWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (void)fallbackToPasscode;
- (bool)fingerPresent;
- (bool)fingerPresentTimeoutExpired;
- (bool)fingerPresentTimeoutRequired;
- (void)handlePasscodeEventWithParameters:(id)arg1;
- (void)handlePassphraseEventWithParameters:(id)arg1;
- (void)handlePearlEventWithParameters:(id)arg1;
- (void)handlePushButtonEventWithParameters:(id)arg1;
- (void)handleTouchIDEventWithParameters:(id)arg1;
- (id /* block */)hoistCompletionHandler;
- (id)init;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2 forAuthenticator:(id)arg3;
- (void)invalidate;
- (void)invalidateWithIntent:(long long)arg1;
- (bool)isInvalidated;
- (bool)passcodeActive;
- (bool)passphraseActive;
- (long long)pearlState;
- (unsigned long long)presentationFlags;
- (id)request;
- (void)setDelegate:(id)arg1;
- (bool)shouldLiftFinger;
- (bool)userIntentAvailable;

@end
