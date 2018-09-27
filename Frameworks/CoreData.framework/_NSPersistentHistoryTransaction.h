/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {
    NSString * _author;
    NSManagedObjectID * _backingObjectID;
    NSString * _bundleID;
    NSArray * _changes;
    NSString * _contextName;
    NSString * _processID;
    NSData * _queryGeneration;
    long long  _rowIdentifier;
    NSSQLCore * _store;
    NSString * _storeID;
    double  _timestamp;
}

+ (bool)supportsSecureCoding;

- (id)_backingObjectID;
- (void)_setChanges:(id)arg1;
- (id)_userInfoFromChanges;
- (id)author;
- (id)bundleID;
- (id)changes;
- (id)contextName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 andObjectID:(id)arg2;
- (id)initialQueryGenerationToken;
- (id)objectIDNotification;
- (id)postQueryGenerationToken;
- (id)processID;
- (id)storeID;
- (id)timestamp;
- (id)token;
- (long long)transactionNumber;

@end
