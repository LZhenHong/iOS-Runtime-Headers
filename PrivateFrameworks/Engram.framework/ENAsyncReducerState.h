/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENAsyncReducerState : NSObject {
    id /* block */  _cancelBlock;
    id /* block */  _continueBlock;
    id  _currentItem;
    CUTResult * _currentResult;
    NSArray * _pendingItems;
    id /* block */  _stopBlock;
    NSArray * _visitedItems;
}

@property (nonatomic, copy) id /* block */ cancelBlock;
@property (nonatomic, copy) id /* block */ continueBlock;
@property (nonatomic, retain) id currentItem;
@property (nonatomic, retain) CUTResult *currentResult;
@property (nonatomic, retain) NSArray *pendingItems;
@property (nonatomic, copy) id /* block */ stopBlock;
@property (nonatomic, retain) NSArray *visitedItems;

- (void).cxx_destruct;
- (id /* block */)cancelBlock;
- (void)cancelWithError:(id)arg1;
- (id /* block */)continueBlock;
- (void)continueWithResult:(id)arg1;
- (id)currentItem;
- (id)currentResult;
- (id)pendingItems;
- (void)setCancelBlock:(id /* block */)arg1;
- (void)setContinueBlock:(id /* block */)arg1;
- (void)setCurrentItem:(id)arg1;
- (void)setCurrentResult:(id)arg1;
- (void)setPendingItems:(id)arg1;
- (void)setStopBlock:(id /* block */)arg1;
- (void)setVisitedItems:(id)arg1;
- (id /* block */)stopBlock;
- (void)stopWithResult:(id)arg1;
- (id)visitedItems;

@end
