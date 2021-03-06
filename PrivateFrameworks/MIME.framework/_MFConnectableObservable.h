/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFConnectableObservable : MFObservable <MFConnectableObservable> {
    MFCancelationToken * _cancelable;
    NSLock * _lock;
    <MFObservable> * _observable;
    MFObservable<MFObserver> * _subject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_disconnect;
- (id)connect;
- (void)dealloc;
- (id)initWithObservable:(id)arg1 subject:(id)arg2;
- (id)subscribe:(id)arg1;

@end
