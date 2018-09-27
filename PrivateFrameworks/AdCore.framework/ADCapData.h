/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADCapData : ADSingleton {
    NSMutableArray * _clickCountData;
    NSMutableArray * _downloadData;
    NSMutableArray * _frequencyCapData;
    NSString * _toroID;
}

@property (nonatomic, retain) NSMutableArray *clickCountData;
@property (nonatomic, retain) NSMutableArray *downloadData;
@property (nonatomic, retain) NSMutableArray *frequencyCapData;
@property (nonatomic, retain) NSString *toroID;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addCapDataObject:(id)arg1 ofKind:(long long)arg2;
- (id)capDataJSON:(id)arg1;
- (void)checkAndUpdateToroID;
- (id)clickCapObjectForAdamID:(id)arg1;
- (id)clickCountData;
- (id)dictionaryRepresentation;
- (id)downloadData;
- (id)downloadObjectForAdamID:(id)arg1;
- (void)eraseCapData;
- (id)filteredCapData:(id)arg1 maxItems:(unsigned long long)arg2 expirationThresholdInSeconds:(double)arg3;
- (id)frequencyCapData;
- (id)init;
- (void)resetCapDataObject;
- (void)restoreAllCapData;
- (id)restoreCapDataArrayFromPlist:(id)arg1;
- (void)saveCapDataWithReason:(id)arg1;
- (void)setClickCountData:(id)arg1;
- (void)setDownloadData:(id)arg1;
- (void)setFrequencyCapData:(id)arg1;
- (void)setToroID:(id)arg1;
- (id)toroID;
- (void)updateCapDataWith:(id)arg1 ofKind:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds

- (void)cleanDownloadArray;
- (id)frequencyCapDataParameter;
- (id)toroClickCountDataParameter;

@end
