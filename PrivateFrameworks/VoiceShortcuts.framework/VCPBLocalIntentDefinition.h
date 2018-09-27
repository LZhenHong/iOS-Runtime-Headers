/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCPBLocalIntentDefinition : VCPBIntentDefinition <VCPBIntentDefinitionHashable, VCPBLocalIntentDefinitionFileProvider> {
    LSBundleProxy * _bundleProxy;
    NSString * _cachedChecksum;
    NSArray * _fileURLs;
    bool  _filesLoaded;
    VCIntentDefinitionSyncState * _syncedState;
}

@property (nonatomic, retain) VCIntentDefinitionSyncState *syncedState;

- (void).cxx_destruct;
- (double)associatedAppRegistrationDate;
- (id)checksum;
- (id)fileURLs;
- (bool)hasFilesThatNeedSyncingToWatch;
- (unsigned long long)hash;
- (id)initWithAppBundleID:(id)arg1;
- (id)initWithBundleProxy:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)loadAllFiles;
- (void)performBlockWithLoadedFiles:(id /* block */)arg1;
- (void)setSyncedState:(id)arg1;
- (id)syncStateObject;
- (id)syncedState;
- (void)unloadFiles;

@end
