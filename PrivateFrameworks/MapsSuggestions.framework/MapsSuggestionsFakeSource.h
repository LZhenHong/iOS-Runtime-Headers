/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFakeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {
    unsigned long long  _calledStart;
    unsigned long long  _calledStop;
    unsigned long long  _calledUpdateSuggestionEntries;
    struct NSArray { Class x1; } * _entriesToPull;
    double  _frequency;
    bool  _isNowStopped;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _sendCopies;
    unsigned long long  _totalAdded;
    unsigned long long  _totalDeleted;
}

@property unsigned long long calledStart;
@property unsigned long long calledStop;
@property unsigned long long calledUpdateSuggestionEntries;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property double frequency;
@property (readonly) unsigned long long hash;
@property bool isNowStopped;
@property bool sendCopies;
@property (readonly) Class superclass;
@property unsigned long long totalAdded;
@property unsigned long long totalDeleted;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (unsigned long long)_addEntries:(struct NSArray { Class x1; }*)arg1 deleteMissing:(bool)arg2;
- (void)_allowTheDustToSettle;
- (struct NSArray { Class x1; }*)_copyEntriesIfNecessary:(struct NSArray { Class x1; }*)arg1;
- (unsigned long long)calledStart;
- (unsigned long long)calledStop;
- (unsigned long long)calledUpdateSuggestionEntries;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (double)frequency;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (bool)isNowStopped;
- (void)pushAdditionOfEntries:(struct NSArray { Class x1; }*)arg1 deleteMissing:(bool)arg2;
- (void)pushDeletionOfEntries:(struct NSArray { Class x1; }*)arg1;
- (void)pushEntries:(struct NSArray { Class x1; }*)arg1;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (bool)sendCopies;
- (void)setCalledStart:(unsigned long long)arg1;
- (void)setCalledStop:(unsigned long long)arg1;
- (void)setCalledUpdateSuggestionEntries:(unsigned long long)arg1;
- (void)setFrequency:(double)arg1;
- (void)setIsNowStopped:(bool)arg1;
- (void)setPullResponseEntries:(struct NSArray { Class x1; }*)arg1;
- (void)setSendCopies:(bool)arg1;
- (void)setTotalAdded:(unsigned long long)arg1;
- (void)setTotalDeleted:(unsigned long long)arg1;
- (void)start;
- (void)startDebugTest;
- (void)stop;
- (unsigned long long)totalAdded;
- (unsigned long long)totalDeleted;
- (double)updateSuggestionEntries;

@end
