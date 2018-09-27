/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineRoadClassItem : PBCodable <NSCopying> {
    struct { 
        unsigned int percentage : 1; 
        unsigned int roadClass : 1; 
    }  _has;
    int  _percentage;
    int  _roadClass;
}

@property (nonatomic) bool hasPercentage;
@property (nonatomic) bool hasRoadClass;
@property (nonatomic) int percentage;
@property (nonatomic) int roadClass;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPercentage;
- (bool)hasRoadClass;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)percentage;
- (bool)readFrom:(id)arg1;
- (int)roadClass;
- (void)setHasPercentage:(bool)arg1;
- (void)setHasRoadClass:(bool)arg1;
- (void)setPercentage:(int)arg1;
- (void)setRoadClass:(int)arg1;
- (void)writeTo:(id)arg1;

@end
