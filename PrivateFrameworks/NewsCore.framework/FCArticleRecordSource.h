/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleRecordSource : FCRecordSource {
    NSArray * _localizableKeys;
    NSArray * _nonLocalizableKeys;
}

+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (id)identifierFromCKRecord:(id)arg1;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (bool)supportsDeletions;
+ (bool)useTaggedImages;

- (void).cxx_destruct;
- (id)experimentalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3 experimentalizableFieldsPostfix:(id)arg4 activeTreatmentID:(id)arg5;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;
- (id)localizableExperimentalizableKeys;
- (id)localizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefix;
- (id)recordType;
- (id)saveArticleRecords:(id)arg1;
- (id)saveFeedItemAndArticleRecords:(id)arg1;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2;

@end
