/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitTargetControllerCommand : PBCodable <NSCopying> {
    int  _command;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int command : 1; 
        unsigned int transportType : 1; 
    }  _has;
    unsigned long long  _timestamp;
    int  _transportType;
    AWDHomeKitVendorInformation * _vendorDetails;
}

@property (nonatomic) int command;
@property (nonatomic) bool hasCommand;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransportType;
@property (nonatomic, readonly) bool hasVendorDetails;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int transportType;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;

- (void).cxx_destruct;
- (int)StringAsCommand:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommand;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (bool)hasVendorDetails;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(int)arg1;
- (void)setVendorDetails:(id)arg1;
- (unsigned long long)timestamp;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)vendorDetails;
- (void)writeTo:(id)arg1;

@end
