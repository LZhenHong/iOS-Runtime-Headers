/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMMobileKeyBag : NSObject

+ (int)_foregroundUID;
+ (void)_handleAttributeAccessCFError:(struct __CFError { }*)arg1 outError:(id*)arg2;
+ (id)_mutablePersonaSpecBase;
+ (void)_setAttributes:(id)arg1 onUser:(id)arg2;
+ (void)_setPasscodeTypeOnUser:(id)arg1 withPasscodeData:(id)arg2;
+ (bool)_start:(bool)arg1 syncBubbleForUser:(id)arg2 outError:(id*)arg3;
+ (id)_uidDictForUser:(id)arg1;
+ (id)_userAttributesForUID:(unsigned int)arg1 outError:(id*)arg2;
+ (id)allSyncBubbleUsers;
+ (id)allUsers;
+ (bool)clearSyncBubblesWithOutError:(id*)arg1;
+ (id)currentSyncBubbleUser;
+ (id)currentUser;
+ (id)currentUserSwitchContext;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (id)deleteUser:(id)arg1;
+ (id)dictionaryRepresentationOfTask:(id)arg1;
+ (bool)fetchAttributesForUser:(id)arg1 outError:(id*)arg2;
+ (bool)inSyncBubble;
+ (void)initialize;
+ (bool)isLoginSession;
+ (bool)isMultiUser;
+ (unsigned int)lastLoggedInUID;
+ (id)lastLoggedInUser;
+ (id)loadUser:(id)arg1 withPasscodeData:(id)arg2;
+ (id)loginUser;
+ (unsigned long long)maxNumberOfUsers;
+ (double)passcodeBackOffIntervalForUser:(id)arg1;
+ (id)personaSpecForUser:(id)arg1;
+ (id)queuedSyncBubbleUsers;
+ (bool)startSyncBubbleForUser:(id)arg1 outError:(id*)arg2;
+ (bool)stopSyncBubbleForUser:(id)arg1 outError:(id*)arg2;
+ (id)syncBubbleMachServiceNamesForUser:(id)arg1;
+ (id)taskFromDictionaryRepresentation:(id)arg1;
+ (void)updateLoginSessionType;
+ (id)userFromAttributes:(id)arg1;
+ (unsigned long long)userType;
+ (bool)writeAttributesToDiskForUser:(id)arg1 outError:(id*)arg2;

@end
