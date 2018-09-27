/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REFeatureRuleCondition : RECondition {
    REFeature * _firstFeature;
    long long  _relation;
    REFeature * _secondFeature;
}

@property (nonatomic, readonly) REFeature *firstFeature;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) REFeature *secondFeature;

- (void).cxx_destruct;
- (bool)_acceptsFeatureMap:(id)arg1;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (bool)_requiresTwoFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)firstFeature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)relation;
- (id)secondFeature;

@end
