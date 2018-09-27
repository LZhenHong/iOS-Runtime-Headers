/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRecognitionSessionTask : NSObject {
    CHRecognitionSessionResult * __inputResult;
    NSObject<OS_dispatch_queue> * __recognizersQueue;
    bool  _cancelled;
    <CHRecognitionSessionTaskDelegate> * _delegate;
    NSArray * _locales;
    CHRecognitionSessionResult * _outputResult;
    NSArray * _preferredLocales;
    bool  _saveInputDrawings;
    long long  _status;
    <CHStrokeProvider> * _strokeProvider;
}

@property (nonatomic, readonly, retain) CHRecognitionSessionResult *_inputResult;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *_recognizersQueue;
@property bool cancelled;
@property (nonatomic) <CHRecognitionSessionTaskDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *locales;
@property (setter=_setOutputResult:, nonatomic, retain) CHRecognitionSessionResult *outputResult;
@property (nonatomic, readonly, copy) NSArray *preferredLocales;
@property (nonatomic) bool saveInputDrawings;
@property (setter=_setStatus:, nonatomic) long long status;
@property (nonatomic, readonly, retain) <CHStrokeProvider> *strokeProvider;

- (void)_filterResultsByLocale:(id)arg1 fitnessByLocale:(id)arg2;
- (id)_inputResult;
- (bool)_isTransitionValidFromStatus:(long long)arg1 toStatus:(long long)arg2;
- (void)_logResultsIfAppropriateWithStrokeProvider:(id)arg1;
- (id)_recognitionResultsForStrokeGroup:(id)arg1 groupingStrategy:(id)arg2;
- (id)_recognizersQueue;
- (void)_setOutputResult:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)cancel;
- (bool)cancelled;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5;
- (id)locales;
- (void)main;
- (id)outputResult;
- (id)preferredLocales;
- (bool)saveInputDrawings;
- (void)setCancelled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSaveInputDrawings:(bool)arg1;
- (long long)status;
- (id)strokeProvider;

@end
