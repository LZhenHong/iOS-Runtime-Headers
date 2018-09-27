/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCondition : PBCodable <NSCopying, NSSecureCoding, _INPBCondition> {
    int  _conditionalOperator;
    struct { 
        unsigned int conditionalOperator : 1; 
    }  _has;
}

@property (nonatomic) int conditionalOperator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConditionalOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)StringAsConditionalOperator:(id)arg1;
- (int)conditionalOperator;
- (id)conditionalOperatorAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasConditionalOperator;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditionalOperator:(int)arg1;
- (void)setHasConditionalOperator:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
