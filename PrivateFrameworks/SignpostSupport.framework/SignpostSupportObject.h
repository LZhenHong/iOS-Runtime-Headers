/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportObject : NSObject <SignpostSerializable> {
    NSString * _category;
    NSString * _subsystem;
    double  _timebaseRatio;
}

@property (nonatomic, retain) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long durationMachContinuousTime;
@property (nonatomic, readonly) float durationSeconds;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (nonatomic, readonly) unsigned long long endNanoseconds;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;
@property (nonatomic, readonly) unsigned long long startNanoseconds;
@property (nonatomic, retain) NSString *subsystem;
@property (readonly) Class superclass;
@property (nonatomic) double timebaseRatio;
@property (nonatomic, readonly) long long tv_sec;
@property (nonatomic, readonly) int tv_usec;
@property (nonatomic, readonly) int tz_dsttime;
@property (nonatomic, readonly) int tz_minuteswest;

+ (id)headerWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (void)_adjustBeginTimeVal:(struct timeval { long long x1; int x2; }*)arg1;
- (void)_adjustEndTimeVal:(struct timeval { long long x1; int x2; }*)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(bool)arg1;
- (bool)_populateTimeStruct:(struct time { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; }*)arg1 withTimeval:(struct timeval { long long x1; int x2; }*)arg2 withTZString:(id)arg3;
- (id)_wallTimeStringWithTimeZone:(id)arg1 isBegin:(bool)arg2;
- (id)category;
- (id)descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2;
- (id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
- (unsigned long long)durationMachContinuousTime;
- (float)durationSeconds;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)endNanoseconds;
- (id)endWallTimeStringWithTimeZone:(id)arg1;
- (unsigned long long)hash;
- (id)humanReadableDictionaryRepresentation;
- (id)humanReadableType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)serializeableDictionary;
- (void)setCategory:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (void)setTimebaseRatio:(double)arg1;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)startNanoseconds;
- (id)startWallTimeStringWithTimeZone:(id)arg1;
- (id)subsystem;
- (double)timebaseRatio;
- (long long)tv_sec;
- (int)tv_usec;
- (int)tz_dsttime;
- (int)tz_minuteswest;

@end
