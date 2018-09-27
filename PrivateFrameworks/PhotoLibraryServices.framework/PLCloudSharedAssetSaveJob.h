/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob {
    NSArray * _assetCollectionInfos;
    NSString * _cloudAlbumGUID;
    NSArray * _cloudAssetGUIDsToDelete;
    NSString * _cloudPersonID;
    AssetCollectionInfo * _currentAssetCollectionInfo;
    MSASAssetCollection * _currentCloudAssetCollection;
    NSString * _currentCloudAssetGUID;
    unsigned long long  _currentCloudAssetMediaAssetType;
    NSString * _currentFilePath;
    bool  _isPhotoIris;
    bool  _isVideo;
    long long  _jobType;
    NSDictionary * _mstreamdInfoDictionary;
    NSMutableArray * _pendingDownloadNotifications;
    bool  _replacingOriginalWithDerivative;
}

@property (nonatomic, retain) NSArray *assetCollectionInfos;
@property (nonatomic, retain) NSString *cloudAlbumGUID;
@property (nonatomic, retain) NSArray *cloudAssetGUIDsToDelete;
@property (nonatomic, retain) NSString *cloudPersonID;
@property (nonatomic, retain) MSASAssetCollection *currentCloudAssetCollection;
@property (nonatomic, retain) NSString *currentCloudAssetGUID;
@property (nonatomic) unsigned long long currentCloudAssetMediaAssetType;
@property (nonatomic, retain) NSString *currentFilePath;
@property (nonatomic) bool isPhotoIris;
@property (nonatomic) bool isVideo;
@property (nonatomic) long long jobType;
@property (nonatomic, retain) NSDictionary *mstreamdInfoDictionary;

+ (id)_dcimDirectoryForFileURL:(id)arg1;
+ (bool)_lightweightReimportCacheDirectoryExists;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3;
+ (id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned long long)arg2;
+ (id)placeholderImageProperties;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 mediaAssetType:(unsigned long long)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(bool)arg7;

- (void)_addDownloadNotification:(id)arg1;
- (id)_createPlaceHolderInSharedAlbum:(id)arg1;
- (void)_incrementDerivativesCount:(long long)arg1 thumbnailsCount:(long long)arg2;
- (unsigned long long)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;
- (bool)_parseISO6709String:(id)arg1 outLatitude:(double*)arg2 outLongitude:(double*)arg3;
- (void)_performSaveTransactionAndWaitOnLibrary:(id)arg1 transaction:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_prefetchLimitForDerivatives:(long long*)arg1 thumbnails:(long long*)arg2;
- (void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3;
- (bool)_processInflightAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2;
- (bool)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)assetCollectionInfos;
- (short)attemptLightweightReimportAssetData;
- (id)cloudAlbumGUID;
- (id)cloudAssetGUIDsToDelete;
- (id)cloudPersonID;
- (id)currentCloudAssetCollection;
- (id)currentCloudAssetGUID;
- (unsigned long long)currentCloudAssetMediaAssetType;
- (id)currentFilePath;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationSaveAssetJobType;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (id)init;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (bool)isPhotoIris;
- (bool)isProcessingThumbnail;
- (bool)isVideo;
- (long long)jobType;
- (id)mstreamdInfoDictionary;
- (short)placeHolderKindFromAssetMetadataType:(unsigned long long)arg1;
- (void)run;
- (void)runDaemonSide;
- (void)setAssetCollectionInfos:(id)arg1;
- (void)setCloudAlbumGUID:(id)arg1;
- (void)setCloudAssetGUIDsToDelete:(id)arg1;
- (void)setCloudPersonID:(id)arg1;
- (void)setCurrentCloudAssetCollection:(id)arg1;
- (void)setCurrentCloudAssetGUID:(id)arg1;
- (void)setCurrentCloudAssetMediaAssetType:(unsigned long long)arg1;
- (void)setCurrentFilePath:(id)arg1;
- (void)setIsPhotoIris:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setJobType:(long long)arg1;
- (void)setMstreamdInfoDictionary:(id)arg1;

@end
