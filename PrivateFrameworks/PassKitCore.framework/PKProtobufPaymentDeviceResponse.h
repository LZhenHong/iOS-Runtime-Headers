/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying> {
    unsigned int  _defaultPaymentInstrumentIndex;
    bool  _deviceDisabled;
    struct { 
        unsigned int defaultPaymentInstrumentIndex : 1; 
        unsigned int nearby : 1; 
        unsigned int protocolVersion : 1; 
        unsigned int deviceDisabled : 1; 
        unsigned int locked : 1; 
        unsigned int supportsFaceID : 1; 
        unsigned int userDisabled : 1; 
    }  _has;
    bool  _locked;
    int  _nearby;
    NSMutableArray * _paymentInstruments;
    unsigned int  _protocolVersion;
    bool  _supportsFaceID;
    bool  _userDisabled;
}

@property (nonatomic) unsigned int defaultPaymentInstrumentIndex;
@property (nonatomic) bool deviceDisabled;
@property (nonatomic) bool hasDefaultPaymentInstrumentIndex;
@property (nonatomic) bool hasDeviceDisabled;
@property (nonatomic) bool hasLocked;
@property (nonatomic) bool hasNearby;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) bool hasSupportsFaceID;
@property (nonatomic) bool hasUserDisabled;
@property (nonatomic) bool locked;
@property (nonatomic) int nearby;
@property (nonatomic, retain) NSMutableArray *paymentInstruments;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) bool supportsFaceID;
@property (nonatomic) bool userDisabled;

+ (Class)paymentInstrumentsType;

- (void).cxx_destruct;
- (int)StringAsNearby:(id)arg1;
- (void)addPaymentInstruments:(id)arg1;
- (void)clearPaymentInstruments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)defaultPaymentInstrumentIndex;
- (id)description;
- (bool)deviceDisabled;
- (id)dictionaryRepresentation;
- (bool)hasDefaultPaymentInstrumentIndex;
- (bool)hasDeviceDisabled;
- (bool)hasLocked;
- (bool)hasNearby;
- (bool)hasProtocolVersion;
- (bool)hasSupportsFaceID;
- (bool)hasUserDisabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)locked;
- (void)mergeFrom:(id)arg1;
- (int)nearby;
- (id)nearbyAsString:(int)arg1;
- (id)paymentInstruments;
- (id)paymentInstrumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentInstrumentsCount;
- (unsigned int)protocolVersion;
- (bool)readFrom:(id)arg1;
- (void)setDefaultPaymentInstrumentIndex:(unsigned int)arg1;
- (void)setDeviceDisabled:(bool)arg1;
- (void)setHasDefaultPaymentInstrumentIndex:(bool)arg1;
- (void)setHasDeviceDisabled:(bool)arg1;
- (void)setHasLocked:(bool)arg1;
- (void)setHasNearby:(bool)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setHasSupportsFaceID:(bool)arg1;
- (void)setHasUserDisabled:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setNearby:(int)arg1;
- (void)setPaymentInstruments:(id)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setSupportsFaceID:(bool)arg1;
- (void)setUserDisabled:(bool)arg1;
- (bool)supportsFaceID;
- (bool)userDisabled;
- (void)writeTo:(id)arg1;

@end
