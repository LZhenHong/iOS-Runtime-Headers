/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutSessionControllerEntity : HDHealthEntity

+ (id)_predicateForRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (bool)retrieveArchivedStateFromRecoveryIdentifier:(id)arg1 workoutSession:(id)arg2 transaction:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
+ (bool)storeArchivedStateWithRecoveryIdentifier:(id)arg1 archivedState:(id)arg2 workoutSession:(id)arg3 transaction:(id)arg4 error:(id*)arg5;

@end
