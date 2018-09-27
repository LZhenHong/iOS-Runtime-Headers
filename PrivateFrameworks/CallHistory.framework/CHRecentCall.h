/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHRecentCall : CHSynchronizable <NSCopying, NSSecureCoding> {
    NSString * _addressBookCallerIDMultiValueId;
    NSString * _addressBookRecordId;
    NSValue * _addressBookRecordRef;
    bool  _answered;
    NSNumber * _bytesOfDataUsed;
    unsigned int  _callCategory;
    NSMutableArray * _callOccurrences;
    unsigned int  _callStatus;
    unsigned int  _callType;
    NSString * _callerId;
    unsigned int  _callerIdAvailability;
    NSString * _callerIdFormatted;
    bool  _callerIdIsBlocked;
    NSString * _callerIdLabel;
    NSString * _callerIdLocation;
    NSString * _callerName;
    NSString * _callerNetworkFirstName;
    NSString * _callerNetworkName;
    NSString * _callerNetworkSecondName;
    NSString * _clientAddressBookRecordId;
    NSString * _contactIdentifier;
    CNContact * _contactRef;
    NSDate * _date;
    NSString * _devicePhoneId;
    NSNumber * _disconnectedCause;
    double  _duration;
    long long  _handleType;
    NSString * _isoCountryCode;
    CHHandle * _localParticipantHandle;
    NSUUID * _localParticipantUUID;
    long long  _mediaType;
    NSString * _mobileCountryCode;
    NSString * _mobileNetworkCode;
    bool  _mobileOriginated;
    bool  _multiCall;
    NSUUID * _outgoingLocalParticipantUUID;
    <CHPhoneBookManagerProtocol> * _phoneBookManager;
    bool  _read;
    NSSet * _remoteParticipantHandles;
    NSString * _serviceProvider;
    NSNumber * _timeToEstablish;
    long long  _ttyType;
    NSString * _uniqueId;
    unsigned long long  _unreadCount;
}

@property (nonatomic, copy) NSString *addressBookCallerIDMultiValueId;
@property (nonatomic, copy) NSString *addressBookRecordId;
@property (copy) NSValue *addressBookRecordRef;
@property bool answered;
@property (nonatomic, copy) NSNumber *bytesOfDataUsed;
@property (nonatomic) unsigned int callCategory;
@property (nonatomic, retain) NSMutableArray *callOccurrences;
@property (nonatomic) unsigned int callStatus;
@property (nonatomic) unsigned int callType;
@property (copy) NSString *callerId;
@property (nonatomic) unsigned int callerIdAvailability;
@property (getter=callerIdForDisplay, nonatomic, copy) NSString *callerIdFormatted;
@property bool callerIdIsBlocked;
@property (nonatomic, copy) NSString *callerIdLabel;
@property (nonatomic, copy) NSString *callerIdLocation;
@property (nonatomic, copy) NSString *callerName;
@property (copy) NSString *callerNetworkFirstName;
@property (nonatomic, copy) NSString *callerNetworkName;
@property (copy) NSString *callerNetworkSecondName;
@property (copy) NSString *clientAddressBookRecordId;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) CNContact *contactRef;
@property (nonatomic, copy) NSDate *date;
@property (copy) NSString *devicePhoneId;
@property (copy) NSNumber *disconnectedCause;
@property (nonatomic) double duration;
@property (nonatomic) long long handleType;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, retain) CHHandle *localParticipantHandle;
@property (nonatomic, retain) NSUUID *localParticipantUUID;
@property (nonatomic) long long mediaType;
@property (copy) NSString *mobileCountryCode;
@property (copy) NSString *mobileNetworkCode;
@property bool mobileOriginated;
@property bool multiCall;
@property (nonatomic, retain) NSUUID *outgoingLocalParticipantUUID;
@property (retain) <CHPhoneBookManagerProtocol> *phoneBookManager;
@property (nonatomic) bool read;
@property (nonatomic, copy) NSSet *remoteParticipantHandles;
@property (nonatomic, copy) NSString *serviceProvider;
@property (nonatomic, copy) NSNumber *timeToEstablish;
@property (nonatomic) long long ttyType;
@property (nonatomic, copy) NSString *uniqueId;
@property unsigned long long unreadCount;

+ (id)callCategoryAsString:(unsigned int)arg1;
+ (id)callHandleTypeAsString:(long long)arg1;
+ (id)callMediaTypeAsString:(long long)arg1;
+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTTYTypeAsString:(long long)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (unsigned int)categoryForCallType:(unsigned int)arg1;
+ (unsigned int)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2;
+ (unsigned int)getCallTypeForCategory:(unsigned int)arg1 andServiceProvider:(id)arg2;
+ (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;
+ (long long)mediaTypeForCallCategory:(unsigned int)arg1;
+ (id)serviceProviderForCallType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;
+ (long long)ttyTypeForCallCategory:(unsigned int)arg1;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (id)addressBookCallerIDMultiValueId;
- (void)addressBookChanged;
- (id)addressBookRecordId;
- (id)addressBookRecordIdSync;
- (id)addressBookRecordRef;
- (id)addressBookRecordRefSync;
- (bool)answered;
- (id)archivedDataWithError:(id*)arg1;
- (id)bytesOfDataUsed;
- (unsigned int)callCategory;
- (id)callOccurrences;
- (id)callOccurrencesAsStringSync;
- (id)callOccurrencesSync;
- (unsigned int)callStatus;
- (unsigned int)callType;
- (id)callerId;
- (unsigned int)callerIdAvailability;
- (id)callerIdForDisplay;
- (id)callerIdForDisplaySync;
- (bool)callerIdIsBlocked;
- (bool)callerIdIsEmailAddress;
- (bool)callerIdIsEmailAddressSync;
- (id)callerIdLabel;
- (id)callerIdLabelSync;
- (id)callerIdLocation;
- (id)callerIdLocationSync;
- (id)callerIdSubStringForDisplay;
- (id)callerName;
- (id)callerNameForDisplay;
- (id)callerNameForDisplaySync;
- (id)callerNameSync;
- (id)callerNetworkFirstName;
- (id)callerNetworkName;
- (id)callerNetworkSecondName;
- (bool)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (bool)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (bool)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (bool)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)clientAddressBookRecordId;
- (bool)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescingHash;
- (id)contactIdentifier;
- (id)contactIdentifierSync;
- (id)contactRef;
- (id)contactRefSync;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createOccurrenceArraySync;
- (id)date;
- (id)description;
- (id)descriptionInDepth;
- (id)devicePhoneId;
- (id)disconnectedCause;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchAndSetContactIdentifierSync;
- (void)fetchAndSetFullContactSync;
- (void)fixCallTypeInfo;
- (id)getLocalizedStringSync:(id)arg1;
- (long long)handleType;
- (long long)handleTypeSync;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (bool)isAddressBookContactASuggestion;
- (bool)isAddressBookContactASuggestionSync;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)localParticipantHandle;
- (id)localParticipantUUID;
- (long long)mediaType;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (bool)mobileOriginated;
- (bool)multiCall;
- (unsigned long long)numberOfOccurrences;
- (unsigned long long)numberOfOccurrencesSync;
- (id)outgoingLocalParticipantUUID;
- (id)phoneBookManager;
- (bool)read;
- (id)remoteParticipantHandles;
- (bool)representsCallAtDate:(id)arg1;
- (id)serviceProvider;
- (void)setAddressBookCallerIDMultiValueId:(id)arg1;
- (void)setAddressBookRecordId:(id)arg1;
- (void)setAddressBookRecordRef:(id)arg1;
- (void)setAnswered:(bool)arg1;
- (void)setBytesOfDataUsed:(id)arg1;
- (void)setCallCategory:(unsigned int)arg1;
- (void)setCallOccurrences:(id)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (void)setCallerId:(id)arg1;
- (void)setCallerIdAvailability:(unsigned int)arg1;
- (void)setCallerIdFormatted:(id)arg1;
- (void)setCallerIdIsBlocked:(bool)arg1;
- (void)setCallerIdLabel:(id)arg1;
- (void)setCallerIdLocation:(id)arg1;
- (void)setCallerName:(id)arg1;
- (void)setCallerNetworkFirstName:(id)arg1;
- (void)setCallerNetworkName:(id)arg1;
- (void)setCallerNetworkSecondName:(id)arg1;
- (void)setClientAddressBookRecordId:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setContactRef:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDevicePhoneId:(id)arg1;
- (void)setDisconnectedCause:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHandleType:(long long)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setLocalParticipantHandle:(id)arg1;
- (void)setLocalParticipantUUID:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;
- (void)setMobileOriginated:(bool)arg1;
- (void)setMultiCall:(bool)arg1;
- (void)setOutgoingLocalParticipantUUID:(id)arg1;
- (void)setPhoneBookManager:(id)arg1;
- (void)setRead:(bool)arg1;
- (void)setRemoteParticipantHandles:(id)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)setTimeToEstablish:(id)arg1;
- (void)setTtyType:(long long)arg1;
- (void)setUniqueId:(id)arg1;
- (void)setUnreadCount:(unsigned long long)arg1;
- (id)timeToEstablish;
- (long long)ttyType;
- (id)uniqueId;
- (unsigned long long)unreadCount;
- (void)updateTTYAndMediaType;

@end
