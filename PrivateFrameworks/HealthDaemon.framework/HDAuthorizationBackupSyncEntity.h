/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity

+ (id)_backupInfoWithSyncStore:(id)arg1;
+ (void)_setBackupInfo:(id)arg1;
+ (id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1;
+ (id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1;
+ (id)backupInfoUserDefaultsKey;
+ (id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;
+ (id)excludedSyncStoresForSession:(id)arg1;
+ (bool)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (void)resetAuthorizationBackupIdentifiers;
+ (void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2;
+ (id)syncEntityIdentifier;

@end
