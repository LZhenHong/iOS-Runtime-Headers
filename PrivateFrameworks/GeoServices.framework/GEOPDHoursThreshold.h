/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDHoursThreshold : PBCodable <NSCopying> {
    unsigned int  _closingSoonMessageThresholdSecond;
    struct { 
        unsigned int closingSoonMessageThresholdSecond : 1; 
        unsigned int openingSoonMessageThresholdSecond : 1; 
    }  _has;
    unsigned int  _openingSoonMessageThresholdSecond;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int closingSoonMessageThresholdSecond;
@property (nonatomic) bool hasClosingSoonMessageThresholdSecond;
@property (nonatomic) bool hasOpeningSoonMessageThresholdSecond;
@property (nonatomic) unsigned int openingSoonMessageThresholdSecond;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)closingSoonMessageThresholdSecond;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClosingSoonMessageThresholdSecond;
- (bool)hasOpeningSoonMessageThresholdSecond;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)openingSoonMessageThresholdSecond;
- (bool)readFrom:(id)arg1;
- (void)setClosingSoonMessageThresholdSecond:(unsigned int)arg1;
- (void)setHasClosingSoonMessageThresholdSecond:(bool)arg1;
- (void)setHasOpeningSoonMessageThresholdSecond:(bool)arg1;
- (void)setOpeningSoonMessageThresholdSecond:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
