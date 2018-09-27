/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariDuplicatedPasswordsWarningEvent : PBCodable <NSCopying> {
    int  _duplicatedPasswordsWarningInteractionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duplicatedPasswordsWarningInteractionType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int duplicatedPasswordsWarningInteractionType;
@property (nonatomic) bool hasDuplicatedPasswordsWarningInteractionType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsDuplicatedPasswordsWarningInteractionType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duplicatedPasswordsWarningInteractionType;
- (id)duplicatedPasswordsWarningInteractionTypeAsString:(int)arg1;
- (bool)hasDuplicatedPasswordsWarningInteractionType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuplicatedPasswordsWarningInteractionType:(int)arg1;
- (void)setHasDuplicatedPasswordsWarningInteractionType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
