/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewDragAndDropController : _UICollectionViewShadowUpdatesController <UICollectionViewDropCoordinator, _UICollectionViewDragDestinationControllerDelegate, _UICollectionViewDragSourceControllerDelegate, _UICollectionViewDropCoordinator, _UICollectionViewPlaceholderContextDelegate> {
    NSMutableArray * __reorderedItems;
    NSMapTable * _cellAppearanceStatesByCellPointers;
    NSMutableDictionary * _cellAppearanceStatesByIndexPaths;
    NSMutableArray * _cellsDeferredForReuse;
    NSUUID * _currentDropInsertionShadowUpdateIdentifier;
    _UICollectionViewPlaceholderContext * _currentlyInsertingPlaceholderContext;
    _UIDropAnimationHandlers * _defaultAnimationHandlers;
    _UICollectionViewDragDestinationController * _destinationController;
    NSMutableArray * _dropCoordinatorItems;
    NSMapTable * _dropCoordinatorItemsMap;
    NSMutableSet * _placeholderContexts;
    NSMutableDictionary * _placeholderContextsByIndexPath;
    int  _sessionKind;
    long long  _sessionRefCount;
    _UICollectionViewDragSourceController * _sourceController;
}

@property (nonatomic, retain) NSMutableArray *_reorderedItems;
@property (nonatomic, retain) NSMapTable *cellAppearanceStatesByCellPointers;
@property (nonatomic, retain) NSMutableDictionary *cellAppearanceStatesByIndexPaths;
@property (nonatomic, retain) NSMutableArray *cellsDeferredForReuse;
@property (nonatomic, retain) NSUUID *currentDropInsertionShadowUpdateIdentifier;
@property (nonatomic, retain) _UICollectionViewPlaceholderContext *currentlyInsertingPlaceholderContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _UIDropAnimationHandlers *defaultAnimationHandlers;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UICollectionViewDragDestinationController *destinationController;
@property (nonatomic, readonly) NSIndexPath *destinationIndexPath;
@property (nonatomic, retain) NSMutableArray *dropCoordinatorItems;
@property (nonatomic, retain) NSMapTable *dropCoordinatorItemsMap;
@property (nonatomic, readonly) UICollectionViewDropProposal *dropProposal;
@property (nonatomic, readonly) <UIDropSession> *dropSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) NSMutableSet *placeholderContexts;
@property (nonatomic, retain) NSMutableDictionary *placeholderContextsByIndexPath;
@property (nonatomic, readonly) UICollectionViewDropProposal *proposal;
@property (nonatomic, readonly) NSArray *reorderedItems;
@property (nonatomic, readonly) unsigned long long reorderingCapabilities;
@property (nonatomic, readonly) <UIDropSession> *session;
@property (nonatomic) int sessionKind;
@property (nonatomic) long long sessionRefCount;
@property (nonatomic, retain) _UICollectionViewDragSourceController *sourceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAnimationHandlers:(id)arg1 toAnimator:(id)arg2;
- (void)_addDropCoordinatorItem:(id)arg1;
- (void)_beginDragAndDropInsertingItemAtIndexPath:(id)arg1;
- (void)_beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2;
- (id)_cellAppearanceStateForCell:(id)arg1 addIfNotFound:(bool)arg2;
- (id)_cellAppearanceStateForIndexPath:(id)arg1;
- (id)_cellForDropCoordinatorItem:(id)arg1;
- (void)_cleanupAfterOutstandingSessionCompletion;
- (void)_decrementSessionRefCount;
- (bool)_deleteShadowUpdateWithIdentifier:(id)arg1;
- (long long)_determineAppearanceForItemAtIndexPath:(id)arg1;
- (int)_determineSessionKind;
- (id)_dropCoordinatorItemForDragItem:(id)arg1;
- (id)_dropCoordinatorItemForIndexPath:(id)arg1;
- (bool)_hasReorderingMoved;
- (void)_incrementSessionRefCount;
- (id)_indexPathForCellAppearanceState:(id)arg1;
- (void)_invokeAllCompletionHandlers;
- (bool)_isReordering;
- (void)_performCancelDropToIndexPath:(id)arg1 forDragItem:(id)arg2;
- (id)_presentationIndexPathForIndexPath:(id)arg1 allowingAppendingInserts:(bool)arg2;
- (void)_removeAnyDeferredReuseCells;
- (bool)_removeMoveShadowUpdateMatchingReorderedItem:(id)arg1;
- (void)_removeReorderedItemsCellsFromViewHierarchy;
- (id)_reorderedItems;
- (void)_resetAllAnimationHandlers;
- (void)_resetAnyDragStateModifiedVisibleCells;
- (void)_resetReorderedItems;
- (void)_rollbackCurrentDropInsertion;
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;
- (void)_shadowUpdatesWereReverted;
- (bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
- (void)_updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2 appearance:(long long)arg3;
- (void)_updateCellAppearanceForCell:(id)arg1 appearance:(long long)arg2;
- (void)_updateCellAppearancesForItemsAtIndexPaths:(id)arg1;
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (bool)beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2;
- (id /* block */)cancelReordering;
- (bool)cancelReorderingShouldRevertOrdering;
- (id)cellAppearanceStatesByCellPointers;
- (id)cellAppearanceStatesByIndexPaths;
- (bool)cellShouldRemainInHierarchy:(id)arg1 indexPath:(id)arg2;
- (id)cellsDeferredForReuse;
- (id)currentDropInsertionShadowUpdateIdentifier;
- (id)currentlyInsertingPlaceholderContext;
- (id)dataSourceIndexPathForPresentationIndexPath:(id)arg1;
- (id)defaultAnimationHandlers;
- (id)description;
- (id)destinationController;
- (id)destinationIndexPath;
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;
- (void)dragDestinationController:(id)arg1 didCompleteDropAnimationForDragItem:(id)arg2;
- (void)dragDestinationController:(id)arg1 didPerformDropAtIndexPath:(id)arg2;
- (void)dragDestinationController:(id)arg1 willBeginDropAnimationForDragItem:(id)arg2 animator:(id)arg3;
- (void)dragDestinationController:(id)arg1 willPerformDropAtIndexPath:(id)arg2;
- (void)dragDestinationControllerDidConcludeDrop:(id)arg1;
- (void)dragDestinationControllerSessionDidEnd:(id)arg1;
- (void)dragDestinationControllerSessionWillBegin:(id)arg1;
- (void)dragSourceController:(id)arg1 didCancelLiftForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 didCompleteAnimatingCancelForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 didCompleteLiftForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 didEndForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 didSupplyCancellationPreviewForItemAtIndexPath:(id)arg2;
- (void)dragSourceController:(id)arg1 didUpdateItemCountOfSelectedItems:(long long)arg2;
- (void)dragSourceController:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 willBeginAnimatingCancelForItemsAtIndexPaths:(id)arg2 withAnimator:(id)arg3;
- (void)dragSourceController:(id)arg1 willBeginLiftForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 willEndForItemsAtIndexPaths:(id)arg2 withDropOperation:(unsigned long long)arg3;
- (void)dragSourceControllerSessionWillBegin:(id)arg1;
- (id)dropCoordinatorItems;
- (id)dropCoordinatorItemsMap;
- (id)dropItem:(id)arg1 intoItemAtIndexPath:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)dropItem:(id)arg1 toItemAtIndexPath:(id)arg2;
- (id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
- (id)dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 cellUpdateHandler:(id /* block */)arg4;
- (id)dropItem:(id)arg1 toTarget:(id)arg2;
- (id)dropProposal;
- (id)dropSession;
- (void)dropToItemAtIndexPath:(id)arg1 forDragItem:(id)arg2;
- (void)dropToLocation:(struct CGPoint { double x1; double x2; })arg1 inContainerView:(id)arg2 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 forDragItem:(id)arg4;
- (id)dropToPlaceholderCellAtIndexPath:(id)arg1 reuseIdentifier:(id)arg2 forDragItem:(id)arg3 cellUpdateHandler:(id /* block */)arg4;
- (id)dropToPlaceholderInsertedAtIndexPath:(id)arg1 reuseIdentifier:(id)arg2 forDragItem:(id)arg3 cellUpdateHandler:(id /* block */)arg4;
- (void)dropToTarget:(id)arg1 forDragItem:(id)arg2;
- (id /* block */)endReordering;
- (bool)hasShadowUpdates;
- (id)indexPathForCurrentReorderedItem;
- (id)indexPathForDragAndDropInsertion;
- (id)indexPathForOriginalReorderedItem;
- (id)initWithCollectionView:(id)arg1;
- (id)insertPlaceholderForItemAtIndexPath:(id)arg1 forDragItem:(id)arg2 reuseIdentifier:(id)arg3 cellUpdateHandler:(id /* block */)arg4;
- (bool)isCellPerformingLegacyReorderingAtIndexPath:(id)arg1;
- (bool)isDragDestinationInteractivelyReordering;
- (id)items;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (bool)placeholderContext:(id)arg1 didCommitInsertionWithDataSourceUpdates:(id /* block */)arg2;
- (id)placeholderContextDidDismiss:(id)arg1;
- (id)placeholderContextForDragItem:(id)arg1;
- (void)placeholderContextNeedsCellUpdate:(id)arg1;
- (id)placeholderContexts;
- (id)placeholderContextsByIndexPath;
- (id)presentationIndexPathForDataSourceIndexPath:(id)arg1;
- (id)proposal;
- (id)reorderedItems;
- (unsigned long long)reorderingCapabilities;
- (void)reset;
- (id)session;
- (int)sessionKind;
- (long long)sessionRefCount;
- (void)setCellAppearanceStatesByCellPointers:(id)arg1;
- (void)setCellAppearanceStatesByIndexPaths:(id)arg1;
- (void)setCellsDeferredForReuse:(id)arg1;
- (void)setCurrentDropInsertionShadowUpdateIdentifier:(id)arg1;
- (void)setCurrentlyInsertingPlaceholderContext:(id)arg1;
- (void)setDefaultAnimationHandlers:(id)arg1;
- (void)setDestinationController:(id)arg1;
- (void)setDropCoordinatorItems:(id)arg1;
- (void)setDropCoordinatorItemsMap:(id)arg1;
- (void)setPlaceholderContexts:(id)arg1;
- (void)setPlaceholderContextsByIndexPath:(id)arg1;
- (void)setSessionKind:(int)arg1;
- (void)setSessionRefCount:(long long)arg1;
- (void)setSourceController:(id)arg1;
- (void)set_reorderedItems:(id)arg1;
- (id)sourceController;
- (id)sourceIndexPaths;
- (void)transferOwnershipOfCellForDeferredReuseAfterDropAnimations:(id)arg1;
- (void)updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateAppearanceForCell:(id)arg1 withAppearance:(long long)arg2;
- (void)updateReorderingTargetIndexPath:(id)arg1;
- (bool)updateWillCauseInternalInconsistency:(id)arg1;

@end
