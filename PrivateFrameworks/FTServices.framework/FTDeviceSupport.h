/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTDeviceSupport : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientSuppServicesDelegate> {
    bool  _accountModificationRestricted;
    bool  _blockPost;
    bool  _commCenterDead;
    CoreTelephonyClient * _coreTelephonyClient;
    bool  _faceTimeBlocked;
    bool  _iMessageBlocked;
    bool  _isGreenTea;
    long long  _isPNRSupportedCachedValue;
    bool  _mmsConfigured;
    NSString * _number;
    long long  _performanceClass;
    FTSelectedPNRSubscription * _selectedPNRSubscription;
    bool  _simBecameNotReady;
    long long  _simInserted;
    long long  _supportsApplePayState;
    bool  _supportsBackCamera;
    bool  _supportsCellularData;
    bool  _supportsFT;
    bool  _supportsFTA;
    bool  _supportsFTMW;
    bool  _supportsFrontCamera;
    bool  _supportsHandoff;
    bool  _supportsMMS;
    bool  _supportsNonWiFiFaceTime;
    bool  _supportsSMS;
    bool  _supportsTethering;
    bool  _supportsWLAN;
    bool  _supportsWiFi;
    bool  _supportsiMessage;
    bool  _wantsForcedCellularQueries;
}

@property (nonatomic, readonly) NSDictionary *CTNetworkInformation;
@property (nonatomic, readonly) bool SIMInserted;
@property (nonatomic, readonly) bool accountModificationRestricted;
@property (nonatomic, readonly) bool callingAvailable;
@property (nonatomic, readonly) bool callingBlocked;
@property (nonatomic, readonly) bool callingSupported;
@property (nonatomic, readonly) bool commCenterDead;
@property (nonatomic, readonly) bool conferencingAllowed;
@property (nonatomic, readonly) bool conferencingBlocked;
@property (nonatomic, readonly) bool conferencingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceColor;
@property (nonatomic, readonly) NSString *deviceIDPrefix;
@property (nonatomic, readonly) NSString *deviceInformationString;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *deviceRegionInfo;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSString *deviceTypeIDPrefix;
@property (nonatomic, readonly) NSString *enclosureColor;
@property (nonatomic, readonly) bool faceTimeAvailable;
@property (nonatomic, readonly) bool faceTimeBlocked;
@property (nonatomic, readonly) bool faceTimeSupported;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool iMessageAvailable;
@property (nonatomic, readonly) bool iMessageBlocked;
@property (nonatomic, readonly) bool iMessageSupported;
@property (nonatomic, readonly) bool identityServicesSupported;
@property (nonatomic, readonly) bool isC2KEquipment;
@property (nonatomic, readonly) bool isGreenTea;
@property (nonatomic, readonly) bool isInMultiUserMode;
@property (nonatomic, readonly) bool isTelephonyDevice;
@property (nonatomic, readonly) bool lowRAMDevice;
@property (nonatomic, readonly) bool madridAvailable;
@property (nonatomic, readonly) bool madridBlocked;
@property (nonatomic, readonly) bool madridSupported;
@property (nonatomic, readonly) bool mmsConfigured;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) bool multiwayAvailable;
@property (nonatomic, readonly) bool multiwayBlocked;
@property (nonatomic, readonly) bool multiwaySupported;
@property (nonatomic, readonly) bool nonWifiCallingAvailable;
@property (nonatomic, readonly) bool nonWifiFaceTimeAvailable;
@property (nonatomic, readonly) long long performanceClass;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productOSVersion;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) bool registrationSupported;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAppleIDIdentification;
@property (nonatomic, readonly) bool supportsApplePay;
@property (nonatomic, readonly) bool supportsBackFacingCamera;
@property (nonatomic, readonly) bool supportsCellularData;
@property (nonatomic, readonly) bool supportsFrontFacingCamera;
@property (nonatomic, readonly) bool supportsFunCam;
@property (nonatomic, readonly) bool supportsHandoff;
@property (nonatomic, readonly) bool supportsMMS;
@property (nonatomic, readonly) bool supportsNonWiFiCalling;
@property (nonatomic, readonly) bool supportsNonWiFiFaceTime;
@property (nonatomic, readonly) bool supportsSMS;
@property (nonatomic, readonly) bool supportsSMSIdentification;
@property (nonatomic, readonly) bool supportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic, readonly) bool supportsTethering;
@property (nonatomic, readonly) bool supportsWLAN;
@property (nonatomic, readonly) bool supportsWiFi;
@property (nonatomic, readonly) NSString *telephoneNumber;
@property (nonatomic, readonly) NSDictionary *telephonyCapabilities;
@property (nonatomic, readonly) NSString *userAgentString;
@property (nonatomic, readonly) bool wantsBreakBeforeMake;
@property (nonatomic, readonly) bool wantsForcedCellularQueries;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CTNetworkInformation;
- (bool)SIMInserted;
- (void)_commCenterAlive;
- (bool)_enoughPowerToSupportEffects;
- (id)_forceWWANQueriesCarrierBundleValue;
- (void)_handleCarrierSettingsChanged;
- (void)_handlePotentialPhoneNumberRegistrationStateChanged;
- (void)_handleSIMStatusChangedToStatus:(id)arg1;
- (void)_initializeSIMInsertedCachedValue;
- (void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
- (bool)_legacy_supportsSMSIdentification;
- (void)_lockdownStateChanged:(id)arg1;
- (void)_registerForCapabilityNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_registerForServiceStatusNotifications;
- (id)_serviceStatus;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_unregisterForServiceStatusNotifications;
- (void)_updateCTNetworkDictionary:(id)arg1 key:(id)arg2 withTelephonyNetworkValue:(id)arg3 telephonyError:(id)arg4;
- (void)_updateCapabilities;
- (void)_updateManagedConfigurationSettings;
- (bool)_wantsForcedCellularQueries;
- (bool)accountModificationRestricted;
- (bool)callingAvailable;
- (bool)callingBlocked;
- (bool)callingSupported;
- (void)carrierBundleChange:(id)arg1;
- (bool)commCenterDead;
- (bool)conferencingAllowed;
- (bool)conferencingBlocked;
- (bool)conferencingEnabled;
- (void)dealloc;
- (id)deviceColor;
- (id)deviceIDPrefix;
- (id)deviceInformationString;
- (id)deviceName;
- (id)deviceRegionInfo;
- (long long)deviceType;
- (id)deviceTypeIDPrefix;
- (id)enclosureColor;
- (bool)faceTimeAvailable;
- (bool)faceTimeBlocked;
- (bool)faceTimeSupported;
- (bool)iMessageAvailable;
- (bool)iMessageBlocked;
- (bool)iMessageSupported;
- (bool)identityServicesSupported;
- (id)init;
- (bool)isC2KEquipment;
- (bool)isGreenTea;
- (bool)isInDualPhoneIdentityMode;
- (bool)isInMultiUserMode;
- (bool)isTelephonyDevice;
- (bool)lowRAMDevice;
- (bool)madridAvailable;
- (bool)madridBlocked;
- (bool)madridSupported;
- (long long)memorySize;
- (bool)mmsConfigured;
- (id)model;
- (bool)multiwayAvailable;
- (bool)multiwayBlocked;
- (bool)multiwaySupported;
- (bool)nonBluetoothAvailableForBundleId:(id)arg1;
- (bool)nonWifiAvailableForBundleId:(id)arg1;
- (bool)nonWifiCallingAvailable;
- (bool)nonWifiFaceTimeAvailable;
- (void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
- (void)operatorBundleChange:(id)arg1;
- (long long)performanceClass;
- (void)phoneNumberChanged:(id)arg1;
- (void)pnrReadyStateNotification:(id)arg1 regState:(bool)arg2;
- (id)productBuildVersion;
- (id)productName;
- (id)productOSVersion;
- (id)productVersion;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)registrationState;
- (bool)registrationSupported;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (bool)supportsAppleIDIdentification;
- (bool)supportsApplePay;
- (bool)supportsBackFacingCamera;
- (bool)supportsCellularData;
- (bool)supportsFrontFacingCamera;
- (bool)supportsFunCam;
- (bool)supportsHandoff;
- (bool)supportsMMS;
- (bool)supportsNonWiFiCalling;
- (bool)supportsNonWiFiFaceTime;
- (bool)supportsSMS;
- (bool)supportsSMSIdentification;
- (bool)supportsSimultaneousVoiceAndDataRightNow;
- (bool)supportsTethering;
- (bool)supportsWLAN;
- (bool)supportsWiFi;
- (id)telephoneNumber;
- (id)telephonyCapabilities;
- (id)userAgentString;
- (bool)wantsBreakBeforeMake;
- (bool)wantsForcedCellularQueries;
- (bool)wifiAllowedForBundleId:(id)arg1;

@end
