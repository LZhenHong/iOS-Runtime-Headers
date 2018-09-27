/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleScroll : PBCodable <NSCopying> {
    bool  _adSupportedChannel;
    NTPBAlternateHeadline * _alternateHeadline;
    NSString * _articleId;
    NSData * _articleSessionId;
    NSData * _articleViewingSessionId;
    NSData * _feedViewExposureId;
    NSMutableArray * _fractionalCohortMemberships;
    struct { 
        unsigned int scrollHostViewType : 1; 
        unsigned int scrollingVelocity : 1; 
        unsigned int verticalScrollPositionEnding : 1; 
        unsigned int verticalScrollPositionStarting : 1; 
        unsigned int adSupportedChannel : 1; 
    }  _has;
    NSString * _referencedArticleId;
    int  _scrollHostViewType;
    NSString * _scrollVelocity;
    float  _scrollingVelocity;
    NSString * _sectionHeadlineId;
    NSString * _sourceChannelId;
    NSString * _verticalScrollPositionEnd;
    float  _verticalScrollPositionEnding;
    NSString * _verticalScrollPositionStart;
    float  _verticalScrollPositionStarting;
}

@property (nonatomic) bool adSupportedChannel;
@property (nonatomic, retain) NTPBAlternateHeadline *alternateHeadline;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, retain) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) bool hasAdSupportedChannel;
@property (nonatomic, readonly) bool hasAlternateHeadline;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleSessionId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic, readonly) bool hasReferencedArticleId;
@property (nonatomic) bool hasScrollHostViewType;
@property (nonatomic, readonly) bool hasScrollVelocity;
@property (nonatomic) bool hasScrollingVelocity;
@property (nonatomic, readonly) bool hasSectionHeadlineId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasVerticalScrollPositionEnd;
@property (nonatomic) bool hasVerticalScrollPositionEnding;
@property (nonatomic, readonly) bool hasVerticalScrollPositionStart;
@property (nonatomic) bool hasVerticalScrollPositionStarting;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic) int scrollHostViewType;
@property (nonatomic, retain) NSString *scrollVelocity;
@property (nonatomic) float scrollingVelocity;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *verticalScrollPositionEnd;
@property (nonatomic) float verticalScrollPositionEnding;
@property (nonatomic, retain) NSString *verticalScrollPositionStart;
@property (nonatomic) float verticalScrollPositionStarting;

+ (Class)fractionalCohortMembershipType;

- (void).cxx_destruct;
- (bool)adSupportedChannel;
- (void)addFractionalCohortMembership:(id)arg1;
- (id)alternateHeadline;
- (id)articleId;
- (id)articleSessionId;
- (id)articleViewingSessionId;
- (void)clearFractionalCohortMemberships;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedViewExposureId;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (id)fractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (bool)hasAdSupportedChannel;
- (bool)hasAlternateHeadline;
- (bool)hasArticleId;
- (bool)hasArticleSessionId;
- (bool)hasArticleViewingSessionId;
- (bool)hasFeedViewExposureId;
- (bool)hasReferencedArticleId;
- (bool)hasScrollHostViewType;
- (bool)hasScrollVelocity;
- (bool)hasScrollingVelocity;
- (bool)hasSectionHeadlineId;
- (bool)hasSourceChannelId;
- (bool)hasVerticalScrollPositionEnd;
- (bool)hasVerticalScrollPositionEnding;
- (bool)hasVerticalScrollPositionStart;
- (bool)hasVerticalScrollPositionStarting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleId;
- (int)scrollHostViewType;
- (id)scrollVelocity;
- (float)scrollingVelocity;
- (id)sectionHeadlineId;
- (void)setAdSupportedChannel:(bool)arg1;
- (void)setAlternateHeadline:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setFractionalCohortMemberships:(id)arg1;
- (void)setHasAdSupportedChannel:(bool)arg1;
- (void)setHasScrollHostViewType:(bool)arg1;
- (void)setHasScrollingVelocity:(bool)arg1;
- (void)setHasVerticalScrollPositionEnding:(bool)arg1;
- (void)setHasVerticalScrollPositionStarting:(bool)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setScrollHostViewType:(int)arg1;
- (void)setScrollVelocity:(id)arg1;
- (void)setScrollingVelocity:(float)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setVerticalScrollPositionEnd:(id)arg1;
- (void)setVerticalScrollPositionEnding:(float)arg1;
- (void)setVerticalScrollPositionStart:(id)arg1;
- (void)setVerticalScrollPositionStarting:(float)arg1;
- (id)sourceChannelId;
- (id)verticalScrollPositionEnd;
- (float)verticalScrollPositionEnding;
- (id)verticalScrollPositionStart;
- (float)verticalScrollPositionStarting;
- (void)writeTo:(id)arg1;

@end
