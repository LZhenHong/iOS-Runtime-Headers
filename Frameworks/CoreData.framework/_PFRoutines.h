/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFRoutines : NSObject

+ (id)_coalescedPrefetchKeypaths:(id)arg1;
+ (struct __CFDictionary { }*)_createDictionaryPartitioningObjects:(id)arg1 intoHierarchies:(bool)arg2;
+ (id)_createNicksBase64EncodedStringFromData:(id)arg1;
+ (bool)_doNameAndTypeCheck:(id)arg1;
+ (bool)_expressionIsCompoundIndexCompatible:(id)arg1;
+ (id)_frameworkHash;
+ (unsigned long long)_generateHashForString:(id)arg1;
+ (bool)_generateObjectIDMaptableForArray:(id)arg1 withMapping:(id*)arg2 andEntries:(id*)arg3;
+ (id)_getPFBundleVersionNumber;
+ (id)_getUUID;
+ (id)_groupObjectsByRootEntity:(id)arg1;
+ (bool)_isInMemoryStoreURL:(id)arg1;
+ (id)_newCollectionFromCollection:(id)arg1 forParentContext:(id)arg2 andClass:(Class)arg3;
+ (id)_newObjectIDsArrayWithMapping:(id)arg1 andEntries:(id)arg2 andCoordinator:(id)arg3;
+ (bool)_objectsInOrderedCollection:(id)arg1 formSubstringInOrderedCollection:(id)arg2;
+ (id)_remoteChangeNotificationNameForStore:(id)arg1;
+ (id)_replaceBaseline:(id)arg1 inOrderedSet:(id)arg2 withOrderedSet:(id)arg3;
+ (id)_rootEntityGroupsForObjects:(id)arg1 passingBlock:(id /* block */)arg2;
+ (id)anyObjectFromCollection:(id)arg1;
+ (void)attemptToUpdatePermissionsForFileAtPath:(const char *)arg1 toLevel:(int)arg2;
+ (id)attributeClassesForSecureCoding;
+ (void)cleanupExternalReferenceLink:(const char *)arg1;
+ (bool)convertCString:(const char *)arg1 toUnsignedInt64:(unsigned long long*)arg2 withBase:(int)arg3;
+ (struct __CFDictionary { }*)createDictionaryPartitioningObjectsByEntity:(id)arg1;
+ (struct __CFDictionary { }*)createDictionaryPartitioningObjectsByRootEntity:(id)arg1;
+ (struct __CFDictionary { }*)createDictionaryPartitioningObjectsIntoHierarchies:(id)arg1;
+ (bool)createExternalReferenceLinkFromPath:(const char *)arg1 toPath:(const char *)arg2 protectionLevel:(int)arg3;
+ (id)decodeValue:(id)arg1 forTransformableAttribute:(id)arg2;
+ (void)deleteFileForPFExternalReferenceData:(id)arg1;
+ (id)encodeObjectValue:(id)arg1 forTransformableAttribute:(id)arg2;
+ (id)fetchHeterogeneousCollectionByObjectIDs:(id)arg1 intoContext:(id)arg2;
+ (void)getIndexes:(unsigned int*)arg1 fromCollection:(id)arg2 forObjectsInCollection:(id)arg3;
+ (void)initialize;
+ (bool)isSanitizedVersionOf:(id)arg1 equalTo:(id)arg2;
+ (bool)isUbiquitousItemAtURL:(id)arg1;
+ (bool)isUbiquitousURLDownloaded:(id)arg1 error:(id*)arg2;
+ (bool)isUbiquitousURLUploaded:(id)arg1 error:(id*)arg2;
+ (long long)lengthOfFileAtExternalReferenceLocation:(const char *)arg1;
+ (bool)moveInterimFileToPermanentLocation:(id)arg1;
+ (id)newArrayOfObjectIDsFromCollection:(id)arg1;
+ (id)newCollection:(Class)arg1 fromCollection:(id)arg2 byAddingItems:(id)arg3;
+ (id)newMappedDataForExternalReference:(id)arg1;
+ (id)newMutableArrayFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newMutableArrayFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)newMutableOrderedSetFromCollection:(id)arg1;
+ (id)newMutableOrderedSetFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)newMutableSetFromCollection:(id)arg1 byIntersectingWithCollection:(id)arg2;
+ (id)newMutableSetFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newMutableSetFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)newOrderedSetFromCollection:(id)arg1;
+ (id)newOrderedSetFromCollection:(id)arg1 byAddingItems:(id)arg2;
+ (id)newOrderedSetFromCollection:(id)arg1 byInsertingItems:(id)arg2 atIndex:(unsigned long long)arg3;
+ (id)newOrderedSetFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newOrderedSetOfObjectIDsFromCollection:(id)arg1;
+ (id)newSetFromCollection:(id)arg1 byAddingItems:(id)arg2;
+ (id)newSetOfObjectIDsFromCollection:(id)arg1;
+ (id)plistClassesForSecureCoding;
+ (void)readBytesForExternalReferenceData:(id)arg1 intoBuffer:(void*)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (void*)readExternalReferenceDataFromFile:(id)arg1;
+ (id)sanitize:(id)arg1;
+ (void)setOrRemoveValue:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
+ (id)valueForProcessArgument:(id)arg1;
+ (id)writePFExternalReferenceDataToInterimFile:(id)arg1;

- (id)_groupObjectsWithUniqueAttributesByRootEntity:(id)arg1;

@end
