/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADAttributionRequest : PBRequest <NSCopying> {
    NSString * _adMetadata;
    NSData * _anonymousDemandiAdID;
    bool  _attributedByiTunes;
    NSString * _bundleID;
    NSData * _dPID;
    double  _downloadClickTimestamp;
    int  _downloadType;
    struct { 
        unsigned int downloadClickTimestamp : 1; 
        unsigned int iAdConversionTimestamp : 1; 
        unsigned int iAdImpressionTimestamp : 1; 
        unsigned int purchaseTimestamp : 1; 
        unsigned int searchAdClickTimestamp : 1; 
        unsigned int downloadType : 1; 
        unsigned int runState : 1; 
        unsigned int attributedByiTunes : 1; 
    }  _has;
    double  _iAdConversionTimestamp;
    NSData * _iAdID;
    double  _iAdImpressionTimestamp;
    double  _purchaseTimestamp;
    int  _runState;
    double  _searchAdClickTimestamp;
    NSData * _tiltID;
    NSData * _toroID;
}

@property (nonatomic, retain) NSString *adMetadata;
@property (nonatomic, retain) NSData *anonymousDemandiAdID;
@property (nonatomic) bool attributedByiTunes;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSData *dPID;
@property (nonatomic) double downloadClickTimestamp;
@property (nonatomic) int downloadType;
@property (nonatomic, readonly) bool hasAdMetadata;
@property (nonatomic, readonly) bool hasAnonymousDemandiAdID;
@property (nonatomic) bool hasAttributedByiTunes;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic, readonly) bool hasDPID;
@property (nonatomic) bool hasDownloadClickTimestamp;
@property (nonatomic) bool hasDownloadType;
@property (nonatomic) bool hasIAdConversionTimestamp;
@property (nonatomic, readonly) bool hasIAdID;
@property (nonatomic) bool hasIAdImpressionTimestamp;
@property (nonatomic) bool hasPurchaseTimestamp;
@property (nonatomic) bool hasRunState;
@property (nonatomic) bool hasSearchAdClickTimestamp;
@property (nonatomic, readonly) bool hasTiltID;
@property (nonatomic, readonly) bool hasToroID;
@property (nonatomic) double iAdConversionTimestamp;
@property (nonatomic, retain) NSData *iAdID;
@property (nonatomic) double iAdImpressionTimestamp;
@property (nonatomic) double purchaseTimestamp;
@property (nonatomic) int runState;
@property (nonatomic) double searchAdClickTimestamp;
@property (nonatomic, retain) NSData *tiltID;
@property (nonatomic, retain) NSData *toroID;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsDownloadType:(id)arg1;
- (int)StringAsRunState:(id)arg1;
- (id)adMetadata;
- (id)anonymousDemandiAdID;
- (bool)attributedByiTunes;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dPID;
- (id)description;
- (id)dictionaryRepresentation;
- (double)downloadClickTimestamp;
- (int)downloadType;
- (id)downloadTypeAsString:(int)arg1;
- (bool)hasAdMetadata;
- (bool)hasAnonymousDemandiAdID;
- (bool)hasAttributedByiTunes;
- (bool)hasBundleID;
- (bool)hasDPID;
- (bool)hasDownloadClickTimestamp;
- (bool)hasDownloadType;
- (bool)hasIAdConversionTimestamp;
- (bool)hasIAdID;
- (bool)hasIAdImpressionTimestamp;
- (bool)hasPurchaseTimestamp;
- (bool)hasRunState;
- (bool)hasSearchAdClickTimestamp;
- (bool)hasTiltID;
- (bool)hasToroID;
- (unsigned long long)hash;
- (double)iAdConversionTimestamp;
- (id)iAdID;
- (double)iAdImpressionTimestamp;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)purchaseTimestamp;
- (bool)readFrom:(id)arg1;
- (int)runState;
- (id)runStateAsString:(int)arg1;
- (double)searchAdClickTimestamp;
- (void)setAdMetadata:(id)arg1;
- (void)setAnonymousDemandiAdID:(id)arg1;
- (void)setAttributedByiTunes:(bool)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDPID:(id)arg1;
- (void)setDownloadClickTimestamp:(double)arg1;
- (void)setDownloadType:(int)arg1;
- (void)setHasAttributedByiTunes:(bool)arg1;
- (void)setHasDownloadClickTimestamp:(bool)arg1;
- (void)setHasDownloadType:(bool)arg1;
- (void)setHasIAdConversionTimestamp:(bool)arg1;
- (void)setHasIAdImpressionTimestamp:(bool)arg1;
- (void)setHasPurchaseTimestamp:(bool)arg1;
- (void)setHasRunState:(bool)arg1;
- (void)setHasSearchAdClickTimestamp:(bool)arg1;
- (void)setIAdConversionTimestamp:(double)arg1;
- (void)setIAdID:(id)arg1;
- (void)setIAdImpressionTimestamp:(double)arg1;
- (void)setPurchaseTimestamp:(double)arg1;
- (void)setRunState:(int)arg1;
- (void)setSearchAdClickTimestamp:(double)arg1;
- (void)setTiltID:(id)arg1;
- (void)setToroID:(id)arg1;
- (id)tiltID;
- (id)toroID;
- (void)writeTo:(id)arg1;

@end
