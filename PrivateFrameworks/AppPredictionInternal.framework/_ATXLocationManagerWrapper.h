/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXLocationManagerWrapper : NSObject <CLLocationManagerDelegate, _ATXLocationManagerWrapperProtocol> {
    _ATXLocation * _currentLOI;
    long long  _currentLOIType;
    CLLocation * _currentLocation;
    CLLocation * _gymLOI;
    CLLocation * _homeLOI;
    NSDate * _lastLOIUpdateTimestamp;
    NSDate * _lastPreviousLOIUpdateTimestamp;
    CLLocationManager * _locationManager;
    _ATXLocation * _previousLOI;
    RTRoutineManager * _routineManager;
    CLLocation * _schoolLOI;
    CLLocation * _workLOI;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CLLocationManager *locationManager;
@property (readonly) Class superclass;

+ (id)_makeLocationManager;
+ (id)_sharedLocationManager;
+ (id)defaultPath;
+ (void)initSharedLocationManager;
+ (id)sharedInstance;
+ (id)stringForLOIType:(long long)arg1;

- (void).cxx_destruct;
- (void)_handleRoutineError:(id)arg1 forThing:(id)arg2;
- (void)_updateCurrentLocationOfInterest;
- (void)_updateDistancesFromLOIsWithCompletionBlock:(id /* block */)arg1;
- (void)_updateLocationOfInterestIfTimeElapsed;
- (void)clearLocationOfInterest;
- (long long)currentLOIType;
- (void)dealloc;
- (double)distanceFromGymOfCurrentLocation;
- (double)distanceFromHomeOfCurrentLocation;
- (double)distanceFromSchoolOfCurrentLocation;
- (double)distanceFromWorkOfCurrentLocation;
- (void)fetchAllLocationsOfInterest:(id /* block */)arg1;
- (id)getCurrentLocation;
- (id)init;
- (id)initWithLocationManager:(id)arg1;
- (void)loadPersistantVariables;
- (void)loadPersistantVariablesAtPath:(id)arg1;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationOfInterestAtCurrentLocation;
- (id)previousLOIAndCurrentLOI;
- (void)setLocationManager:(id)arg1;
- (void)writePersistantVariables;

@end
