/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding> {
    TIKeyboardCandidate * _acceptedCandidate;
    unsigned long long  _batchCandidateLocation;
    NSArray * _candidates;
    TIKeyboardCandidate * _defaultCandidate;
    bool  _excludedExtensionCandidates;
    unsigned long long  _generatedCandidateCount;
    NSDictionary * _indexTitles;
    unsigned long long  _initialSelectedIndex;
    NSArray * _initiallyHiddenCandidates;
    NSArray * _proactiveTriggers;
    unsigned long long  _selectedHiddenCandidateIndex;
    NSDictionary * _showExtensionCandidates;
    NSDictionary * _sortMethodGroups;
    NSArray * _sortMethods;
    TIKeyboardIntermediateText * _uncommittedText;
}

@property (nonatomic, retain) TIKeyboardCandidate *acceptedCandidate;
@property (nonatomic) unsigned long long batchCandidateLocation;
@property (nonatomic, retain) NSArray *candidates;
@property (nonatomic, copy) TIKeyboardCandidate *defaultCandidate;
@property (nonatomic) bool excludedExtensionCandidates;
@property (nonatomic, readonly) TIKeyboardCandidate *firstCandidate;
@property (nonatomic) unsigned long long generatedCandidateCount;
@property (nonatomic, readonly) bool hasCandidates;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasOnlyCompletionCandidates;
@property (nonatomic, readonly) bool hasOnlyProactiveCandidates;
@property (nonatomic, readonly) bool hasOnlySlottedCandidates;
@property (nonatomic, retain) NSDictionary *indexTitles;
@property (nonatomic) unsigned long long initialSelectedIndex;
@property (nonatomic, retain) NSArray *initiallyHiddenCandidates;
@property (nonatomic, readonly) bool isDummySet;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic) unsigned long long selectedHiddenCandidateIndex;
@property (nonatomic, retain) NSDictionary *showExtensionCandidates;
@property (nonatomic, readonly) unsigned long long slottedCandidatesCount;
@property (nonatomic, retain) NSDictionary *sortMethodGroups;
@property (nonatomic, retain) NSArray *sortMethods;
@property (nonatomic, retain) TIKeyboardIntermediateText *uncommittedText;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (id)dummySet;
+ (id)setWithCandidates:(id)arg1;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;
+ (id)setWithCandidates:(id)arg1 proactiveTriggers:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptedCandidate;
- (unsigned long long)batchCandidateLocation;
- (id)candidates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultCandidate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludedExtensionCandidates;
- (id)firstCandidate;
- (unsigned long long)generatedCandidateCount;
- (bool)hasCandidates;
- (bool)hasMetadata;
- (bool)hasOnlyProactiveCandidates;
- (id)indexTitles;
- (id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialSelectedIndex;
- (id)initiallyHiddenCandidates;
- (bool)isDummySet;
- (bool)isEqual:(id)arg1;
- (bool)isSubsetOf:(id)arg1;
- (unsigned long long)positionInCandidateList:(id)arg1;
- (id)proactiveTriggers;
- (unsigned long long)selectedHiddenCandidateIndex;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setBatchCandidateLocation:(unsigned long long)arg1;
- (id)setByAppendingSet:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setDefaultCandidate:(id)arg1;
- (void)setExcludedExtensionCandidates:(bool)arg1;
- (void)setGeneratedCandidateCount:(unsigned long long)arg1;
- (void)setIndexTitles:(id)arg1;
- (void)setInitialSelectedIndex:(unsigned long long)arg1;
- (void)setInitiallyHiddenCandidates:(id)arg1;
- (void)setSelectedHiddenCandidateIndex:(unsigned long long)arg1;
- (void)setShowExtensionCandidates:(id)arg1;
- (void)setSortMethodGroups:(id)arg1;
- (void)setSortMethods:(id)arg1;
- (void)setUncommittedText:(id)arg1;
- (id)showExtensionCandidates;
- (id)sortMethodGroups;
- (id)sortMethods;
- (id)uncommittedText;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)candidateGroupsForSortIndex:(long long)arg1;
- (bool)candidatesForSortIndexShowAlternativeText:(long long)arg1;
- (bool)hasOnlyCompletionCandidates;
- (bool)hasOnlySlottedCandidates;
- (unsigned long long)slottedCandidatesCount;

@end
