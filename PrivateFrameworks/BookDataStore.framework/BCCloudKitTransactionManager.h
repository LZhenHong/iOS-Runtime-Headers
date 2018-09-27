/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

@interface BCCloudKitTransactionManager : NSObject <BCCloudKitTransactionDelegate, BCCloudKitTransactionManagerService> {
    BCCloudKitController * _cloudKitController;
    BDSServiceProxy * _serviceProxy;
    NSObject<OS_dispatch_queue> * _transactionAccessQueue;
    NSMutableDictionary * _transactions;
}

@property (nonatomic) BCCloudKitController *cloudKitController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BDSServiceProxy *serviceProxy;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionAccessQueue;
@property (nonatomic, retain) NSMutableDictionary *transactions;

- (void).cxx_destruct;
- (id)cloudKitController;
- (id)initWithCloudKitController:(id)arg1;
- (id)serviceProxy;
- (void)setCloudKitController:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)setTransactionAccessQueue:(id)arg1;
- (void)setTransactions:(id)arg1;
- (void)signalDataChangeTransactionForEntityName:(id)arg1 notificationName:(id)arg2;
- (void)signalFetchChangesTransaction:(id)arg1;
- (void)signalFetchChangesTransactionInService:(id)arg1;
- (void)signalSyncToCKTransactionForEntityName:(id)arg1 syncManager:(id)arg2;
- (id)transactionAccessQueue;
- (void)transactionCompleted:(id)arg1;
- (id)transactions;

@end
