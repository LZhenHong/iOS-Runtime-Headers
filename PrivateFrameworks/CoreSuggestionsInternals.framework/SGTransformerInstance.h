/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTransformerInstance : NSObject {
    NSString * _featuresModelId;
    NSString * _featuresVersion;
    NSString * _language;
    Class  _modelClass;
    unsigned long long  _ngrams;
    <PMLTransformerProtocol> * _transformer;
    unsigned long long  _window;
}

@property (nonatomic, copy) NSString *featuresModelId;
@property (nonatomic, copy) NSString *featuresVersion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) Class modelClass;
@property (nonatomic) unsigned long long ngrams;
@property (nonatomic, retain) <PMLTransformerProtocol> *transformer;
@property (nonatomic) unsigned long long window;

- (void).cxx_destruct;
- (id)featuresModelId;
- (id)featuresOf:(id)arg1;
- (id)featuresVersion;
- (id)initWithLanguage:(id)arg1;
- (id)language;
- (Class)modelClass;
- (unsigned long long)ngrams;
- (id)sessionDescriptor;
- (void)setFeaturesModelId:(id)arg1;
- (void)setFeaturesVersion:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setModelClass:(Class)arg1;
- (void)setNgrams:(unsigned long long)arg1;
- (void)setTransformer:(id)arg1;
- (void)setWindow:(unsigned long long)arg1;
- (id)transformer;
- (unsigned long long)window;

@end
