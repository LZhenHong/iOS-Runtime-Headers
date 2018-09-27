/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

@interface HalogenWrapper : NSObject {
    NSCondition * _cond;
    bool  _didConfidentNotify;
    unsigned long long  _digitalID;
    unsigned long long  _dryCnt;
    unsigned long long  _dryPollingIntervalNs;
    unsigned long long  _firstDryTimestamp;
    HalogenMeasurement * _halogenMeasurement;
    NSObject<OS_dispatch_queue> * _halogenMeasurementDispatchQueue;
    NSObject<OS_dispatch_queue> * _halogenTtrDispatchQueue;
    bool  _isEmptyReceptacle;
    bool  _isMeasurementActive;
    bool  _isMeasurementEnabled;
    bool  _isTapToRadarPending;
    bool  _isTimestampValid;
    bool  _isWet;
    unsigned long long  _minDryReadings;
    unsigned long long  _minDryTimeInSec;
    int  _orientation;
    NSData * _pDigitalID;
    int  _pinID;
    int  _portID;
    unsigned int  _service;
    NSObject<OS_dispatch_source> * _timer;
    bool  _wasTapToRadarShown;
    unsigned long long  _wetDryTansitionTimestamp;
    unsigned long long  _wetPollingIntervalNs;
}

@property (nonatomic) NSCondition *cond;
@property (nonatomic) bool didConfidentNotify;
@property (nonatomic) unsigned long long digitalID;
@property (nonatomic) unsigned long long dryCnt;
@property (nonatomic) unsigned long long dryPollingIntervalNs;
@property (nonatomic) unsigned long long firstDryTimestamp;
@property (nonatomic) HalogenMeasurement *halogenMeasurement;
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenMeasurementDispatchQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenTtrDispatchQueue;
@property (nonatomic) bool isEmptyReceptacle;
@property (nonatomic) bool isMeasurementActive;
@property (nonatomic) bool isMeasurementEnabled;
@property (nonatomic) bool isTapToRadarPending;
@property (nonatomic) bool isTimestampValid;
@property (nonatomic) bool isWet;
@property (nonatomic) unsigned long long minDryReadings;
@property (nonatomic) unsigned long long minDryTimeInSec;
@property (nonatomic) int orientation;
@property (nonatomic) NSData *pDigitalID;
@property (nonatomic) int pinID;
@property (nonatomic) int portID;
@property (nonatomic) unsigned int service;
@property (nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) bool wasTapToRadarShown;
@property (nonatomic) unsigned long long wetDryTansitionTimestamp;
@property (nonatomic) unsigned long long wetPollingIntervalNs;

- (id)cond;
- (void)dealloc;
- (bool)didConfidentNotify;
- (unsigned long long)digitalID;
- (unsigned long long)dryCnt;
- (unsigned long long)dryPollingIntervalNs;
- (unsigned long long)firstDryTimestamp;
- (id)halogenMeasurement;
- (id)halogenMeasurementDispatchQueue;
- (id)halogenTtrDispatchQueue;
- (id)init;
- (bool)isEmptyReceptacle;
- (bool)isMeasurementActive;
- (bool)isMeasurementEnabled;
- (bool)isTapToRadarPending;
- (bool)isTimestampValid;
- (bool)isWet;
- (unsigned long long)minDryReadings;
- (unsigned long long)minDryTimeInSec;
- (int)orientation;
- (id)pDigitalID;
- (int)pinID;
- (int)portID;
- (unsigned int)service;
- (void)setCond:(id)arg1;
- (void)setDidConfidentNotify:(bool)arg1;
- (void)setDigitalID:(unsigned long long)arg1;
- (void)setDryCnt:(unsigned long long)arg1;
- (void)setDryPollingIntervalNs:(unsigned long long)arg1;
- (void)setFirstDryTimestamp:(unsigned long long)arg1;
- (void)setHalogenMeasurement:(id)arg1;
- (void)setHalogenMeasurementDispatchQueue:(id)arg1;
- (void)setHalogenTtrDispatchQueue:(id)arg1;
- (void)setIsEmptyReceptacle:(bool)arg1;
- (void)setIsMeasurementActive:(bool)arg1;
- (void)setIsMeasurementEnabled:(bool)arg1;
- (void)setIsTapToRadarPending:(bool)arg1;
- (void)setIsTimestampValid:(bool)arg1;
- (void)setIsWet:(bool)arg1;
- (void)setMinDryReadings:(unsigned long long)arg1;
- (void)setMinDryTimeInSec:(unsigned long long)arg1;
- (void)setOrientation:(int)arg1;
- (void)setPDigitalID:(id)arg1;
- (void)setPinID:(int)arg1;
- (void)setPortID:(int)arg1;
- (void)setService:(unsigned int)arg1;
- (void)setTimer:(id)arg1;
- (void)setWasTapToRadarShown:(bool)arg1;
- (void)setWetDryTansitionTimestamp:(unsigned long long)arg1;
- (void)setWetPollingIntervalNs:(unsigned long long)arg1;
- (id)timer;
- (bool)wasTapToRadarShown;
- (unsigned long long)wetDryTansitionTimestamp;
- (unsigned long long)wetPollingIntervalNs;

@end
