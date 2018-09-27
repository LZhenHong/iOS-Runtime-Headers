/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSListController : PSViewController <PSSpecifierObserver, PSViewControllerOffsetProtocol, UIAlertViewDelegate, UIAppearance, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UITableViewDelegate> {
    UIColor * _altTextColor;
    UIColor * _backgroundColor;
    NSMutableArray * _bundleControllers;
    bool  _bundlesLoaded;
    UIColor * _buttonTextColor;
    bool  _cachesCells;
    UIColor * _cellAccessoryColor;
    UIColor * _cellAccessoryHighlightColor;
    UIColor * _cellHighlightColor;
    NSMutableDictionary * _cells;
    UIView * _containerView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetWithKeyboard;
    <PSSpecifierDataSource> * _dataSource;
    bool  _edgeToEdgeCells;
    UIColor * _editableInsertionPointColor;
    UIColor * _editablePlaceholderTextColor;
    UIColor * _editableSelectionBarColor;
    UIColor * _editableSelectionHighlightColor;
    UIColor * _editableTextColor;
    UIColor * _footerHyperlinkColor;
    bool  _forceSynchronousIconLoadForCreatedCells;
    UIColor * _foregroundColor;
    NSMutableArray * _groups;
    bool  _hasAppeared;
    NSString * _highlightItemName;
    bool  _isVisible;
    UIKeyboard * _keyboard;
    bool  _keyboardWasVisible;
    NSString * _offsetItemName;
    NSDictionary * _pendingURLResourceDictionary;
    bool  _popupIsDismissing;
    bool  _popupIsModal;
    bool  _prefetchingEnabled;
    NSMutableArray * _prequeuedReusablePSTableCells;
    bool  _requestingSpecifiersFromDataSource;
    bool  _reusesCells;
    NSIndexPath * _savedSelectedIndexPath;
    bool  _sectionContentInsetInitialized;
    UIColor * _segmentedSliderTrackColor;
    UIColor * _separatorColor;
    bool  _showingSetupController;
    NSString * _specifierID;
    NSString * _specifierIDPendingPush;
    NSArray * _specifiers;
    NSMutableDictionary * _specifiersByID;
    UITableView * _table;
    UIColor * _textColor;
    bool  _usesDarkTheme;
    float  _verticalContentOffset;
}

@property (nonatomic, retain) UIColor *altTextColor;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *buttonTextColor;
@property (nonatomic, retain) UIColor *cellAccessoryColor;
@property (nonatomic, retain) UIColor *cellAccessoryHighlightColor;
@property (nonatomic, retain) UIColor *cellHighlightColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool edgeToEdgeCells;
@property (nonatomic, retain) UIColor *editableInsertionPointColor;
@property (nonatomic, retain) UIColor *editablePlaceholderTextColor;
@property (nonatomic, retain) UIColor *editableSelectionBarColor;
@property (nonatomic, retain) UIColor *editableSelectionHighlightColor;
@property (nonatomic, retain) UIColor *editableTextColor;
@property (nonatomic, retain) UIColor *footerHyperlinkColor;
@property (nonatomic) bool forceSynchronousIconLoadForCreatedCells;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long observerType;
@property (nonatomic, retain) NSDictionary *pendingURLResourceDictionary;
@property (getter=isPrefetchingEnabled, nonatomic) bool prefetchingEnabled;
@property (nonatomic, retain) UIColor *segmentedSliderTrackColor;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic, retain) <PSSpecifierDataSource> *specifierDataSource;
@property (nonatomic, copy) NSString *specifierIDPendingPush;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool usesDarkTheme;

+ (id)aggregateReportingDomainOverride;
+ (id)appearance;
+ (id)appearanceForTraitCollection:(id)arg1;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)arg1;
+ (bool)displaysButtonBar;
+ (void)setAggregateReportingDomainOverride:(id)arg1;

- (void).cxx_destruct;
- (void)_addIdentifierForSpecifier:(id)arg1;
- (id)_createGroupIndices:(id)arg1;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(bool)arg3;
- (bool)_getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4;
- (double)_getKeyboardIntersectionHeightFromUserInfo:(id)arg1;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(bool)arg3;
- (bool)_isEmptyGroup:(unsigned long long)arg1;
- (bool)_isRegularWidth;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_loadBundleControllers;
- (void)_moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (long long)_nextGroupInSpecifiersAfterIndex:(long long)arg1 inArray:(id)arg2;
- (void)_performHighlightForSpecifierWithID:(id)arg1;
- (void)_performHighlightForSpecifierWithID:(id)arg1 tryAgainIfFailed:(bool)arg2;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(bool)arg2;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_returnKeyPressed:(id)arg1;
- (void)_scrollToSpecifierNamed:(id)arg1;
- (void)_scrollToSpecifierWithID:(id)arg1 animated:(bool)arg2;
- (void)_setContentInset:(double)arg1;
- (void)_setNotShowingSetupController;
- (double)_tableView:(id)arg1 heightForCustomInSection:(long long)arg2 isHeader:(bool)arg3;
- (id)_tableView:(id)arg1 viewForCustomInSection:(long long)arg2 isHeader:(bool)arg3;
- (void)_unloadBundleControllers;
- (void)_updateSectionContentInsetWithAnimation:(bool)arg1;
- (void)addSpecifier:(id)arg1;
- (void)addSpecifier:(id)arg1 animated:(bool)arg2;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifiersFromArray:(id)arg1 animated:(bool)arg2;
- (id)altTextColor;
- (id)backgroundColor;
- (void)beginUpdates;
- (id)bundle;
- (id)buttonTextColor;
- (id)cachedCellForSpecifier:(id)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)cellAccessoryColor;
- (id)cellAccessoryHighlightColor;
- (id)cellHighlightColor;
- (void)clearCache;
- (void)clearPendingURL;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (bool)containsSpecifier:(id)arg1;
- (void)contentSizeChangedNotificationPosted:(id)arg1;
- (void)contentSizeDidChange:(id)arg1;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (void)createGroupIndices;
- (void)createPrequeuedPSTableCells:(unsigned long long)arg1;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)dismissConfirmationViewAnimated:(bool)arg1;
- (void)dismissPopover;
- (void)dismissPopoverAnimated:(bool)arg1;
- (bool)edgeToEdgeCells;
- (id)editableInsertionPointColor;
- (id)editablePlaceholderTextColor;
- (id)editableSelectionBarColor;
- (id)editableSelectionHighlightColor;
- (id)editableTextColor;
- (void)endUpdates;
- (id)findFirstVisibleResponder;
- (id)footerHyperlinkColor;
- (bool)forceSynchronousIconLoadForCreatedCells;
- (id)foregroundColor;
- (void)formSheetViewWillDisappear;
- (bool)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifier:(id)arg3;
- (bool)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3;
- (bool)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierID:(id)arg3;
- (id)getGroupSpecifierForSpecifier:(id)arg1;
- (id)getGroupSpecifierForSpecifierID:(id)arg1;
- (bool)handlePendingURL;
- (void)handleURL:(id)arg1;
- (void)highlightSpecifierWithID:(id)arg1;
- (long long)indexForIndexPath:(id)arg1;
- (long long)indexForRow:(long long)arg1 inGroup:(long long)arg2;
- (long long)indexOfGroup:(long long)arg1;
- (long long)indexOfSpecifier:(id)arg1;
- (long long)indexOfSpecifierID:(id)arg1;
- (id)indexPathForIndex:(long long)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)init;
- (id)initForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2 animated:(bool)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(bool)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(bool)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(bool)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2 animated:(bool)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(long long)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(long long)arg2 animated:(bool)arg3;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (bool)isPrefetchingEnabled;
- (void)lazyLoadBundle:(id)arg1;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (void)loadView;
- (void)loseFocus;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (long long)numberOfGroups;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)observerType;
- (id)pendingURLResourceDictionary;
- (bool)performActionForSpecifier:(id)arg1;
- (bool)performButtonActionForSpecifier:(id)arg1;
- (bool)performConfirmationActionForSpecifier:(id)arg1;
- (bool)performConfirmationCancelActionForSpecifier:(id)arg1;
- (bool)performLoadActionForSpecifier:(id)arg1;
- (void)performSpecifierUpdates:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)popupStylePopoverController;
- (void)popupViewWillDisappear;
- (void)prefetchResourcesFor:(id)arg1;
- (bool)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(bool*)arg3;
- (void)prepareSpecifiersMetadata;
- (void)pushController:(id)arg1 animate:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSpecifiersInGroupID:(id)arg1;
- (void)reload;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(bool)arg2;
- (void)reloadSpecifierAtIndex:(long long)arg1;
- (void)reloadSpecifierAtIndex:(long long)arg1 animated:(bool)arg2;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1 animated:(bool)arg2;
- (void)reloadSpecifiers;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(bool)arg2;
- (void)removeLastSpecifier;
- (void)removeLastSpecifierAnimated:(bool)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifier:(id)arg1 animated:(bool)arg2;
- (void)removeSpecifierAtIndex:(long long)arg1;
- (void)removeSpecifierAtIndex:(long long)arg1 animated:(bool)arg2;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifierID:(id)arg1 animated:(bool)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(bool)arg3;
- (void)returnPressedAtEnd;
- (long long)rowsForGroup:(long long)arg1;
- (id)segmentedSliderTrackColor;
- (void)selectRowForSpecifier:(id)arg1;
- (id)separatorColor;
- (void)setAltTextColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setCachesCells:(bool)arg1;
- (void)setCellAccessoryColor:(id)arg1;
- (void)setCellAccessoryHighlightColor:(id)arg1;
- (void)setCellHighlightColor:(id)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setEdgeToEdgeCells:(bool)arg1;
- (void)setEditableInsertionPointColor:(id)arg1;
- (void)setEditablePlaceholderTextColor:(id)arg1;
- (void)setEditableSelectionBarColor:(id)arg1;
- (void)setEditableSelectionHighlightColor:(id)arg1;
- (void)setEditableTextColor:(id)arg1;
- (void)setFooterHyperlinkColor:(id)arg1;
- (void)setForceSynchronousIconLoadForCreatedCells:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setPendingURLResourceDictionary:(id)arg1;
- (void)setPrefetchingEnabled:(bool)arg1;
- (void)setReusesCells:(bool)arg1;
- (void)setSegmentedSliderTrackColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setSpecifierDataSource:(id)arg1;
- (void)setSpecifierID:(id)arg1;
- (void)setSpecifierIDPendingPush:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesDarkTheme:(bool)arg1;
- (bool)shouldDeferPushForSpecifierID:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldSelectResponderOnAppearance;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(bool)arg2;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(bool)arg2 swapAlertButtons:(bool)arg3;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (void)showPINSheet:(id)arg1;
- (void)showPINSheet:(id)arg1 allowOptionsButton:(bool)arg2;
- (id)specifier;
- (id)specifierAtIndex:(long long)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (id)specifierDataSource;
- (id)specifierForID:(id)arg1;
- (id)specifierID;
- (id)specifierIDPendingPush;
- (id)specifiers;
- (id)specifiersForIDs:(id)arg1;
- (id)specifiersInGroup:(long long)arg1;
- (id)table;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (Class)tableViewClass;
- (long long)tableViewStyle;
- (id)textColor;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)updateSpecifiersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withSpecifiers:(id)arg2;
- (bool)usesDarkTheme;
- (float)verticalContentOffset;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
