/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {
    EKCalendarItem * _owner;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, readonly) NSPredicate *contactPredicate;
@property (getter=isCurrentUser, nonatomic, readonly) bool currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *inviterNameString;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) EKCalendarItem *owner;
@property (nonatomic, readonly) long long participantRole;
@property (nonatomic, readonly) long long participantStatus;
@property (nonatomic, readonly) long long participantType;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) int proposedStartDateStatus;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)participantWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
+ (id)participantWithName:(id)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (const void*)ABRecordWithAddressBook:(void*)arg1;
- (id)URL;
- (id)UUID;
- (id)comment;
- (id)contactPredicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayNameRaw;
- (id)emailAddress;
- (id)firstName;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
- (id)invitedBy;
- (id)inviterNameString;
- (bool)isCurrentUser;
- (bool)isEqualToParticipant:(id)arg1;
- (bool)isLocationRoom;
- (id)lastName;
- (id)name;
- (id)nameComponents;
- (id)owner;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (id)phoneNumber;
- (id)proposedStartDate;
- (id)proposedStartDateForEvent:(id)arg1;
- (int)proposedStartDateStatus;
- (id)semanticIdentifier;
- (void)setComment:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)setInviterNameString;
- (void)setLastName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setProposedStartDate:(id)arg1;
- (void)setProposedStartDate:(id)arg1 forEvent:(id)arg2;
- (void)setProposedStartDateStatus:(int)arg1;
- (void)setURL:(id)arg1;
- (void)setUUID:(id)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)commentLabelString;
- (id)displayName;
- (id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3;

@end
