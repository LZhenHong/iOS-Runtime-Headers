/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardClawGesture : PBCodable <NSCopying> {
    bool  _didPressLock;
    bool  _didPressVolumeDown;
    bool  _didPressVolumeUp;
    bool  _didTriggerSOS;
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int didPressLock : 1; 
        unsigned int didPressVolumeDown : 1; 
        unsigned int didPressVolumeUp : 1; 
        unsigned int didTriggerSOS : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool didPressLock;
@property (nonatomic) bool didPressVolumeDown;
@property (nonatomic) bool didPressVolumeUp;
@property (nonatomic) bool didTriggerSOS;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasDidPressLock;
@property (nonatomic) bool hasDidPressVolumeDown;
@property (nonatomic) bool hasDidPressVolumeUp;
@property (nonatomic) bool hasDidTriggerSOS;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didPressLock;
- (bool)didPressVolumeDown;
- (bool)didPressVolumeUp;
- (bool)didTriggerSOS;
- (unsigned long long)duration;
- (bool)hasDidPressLock;
- (bool)hasDidPressVolumeDown;
- (bool)hasDidPressVolumeUp;
- (bool)hasDidTriggerSOS;
- (bool)hasDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDidPressLock:(bool)arg1;
- (void)setDidPressVolumeDown:(bool)arg1;
- (void)setDidPressVolumeUp:(bool)arg1;
- (void)setDidTriggerSOS:(bool)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDidPressLock:(bool)arg1;
- (void)setHasDidPressVolumeDown:(bool)arg1;
- (void)setHasDidPressVolumeUp:(bool)arg1;
- (void)setHasDidTriggerSOS:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
