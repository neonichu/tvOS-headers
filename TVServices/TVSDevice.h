//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSDevice : NSObject
{
}

+ (_Bool)getMobileGestaltBoolean:(struct __CFString *)arg1;
+ (id)getMobileGestaltData:(struct __CFString *)arg1;
+ (id)getMobileGestaltString:(struct __CFString *)arg1;
+ (void)setSkippedActivation:(_Bool)arg1;
+ (_Bool)skippedActivation;
+ (_Bool)isActivated;
+ (unsigned long long)applicationCapacity;
+ (_Bool)runningAnInternalBuild;
+ (_Bool)supportsBluetoothLEKeyboard;
+ (_Bool)supportsBluetoothKeyboard;
+ (_Bool)supportsDolbyDigitalPlus;
+ (_Bool)supports720p60VideoPlayback;
+ (_Bool)supportsApplicationStorage;
+ (_Bool)supportsTouchRemote;
+ (_Bool)supportsBluetoothLECapablity;
+ (_Bool)supports1080p;
+ (id)configurationInfo;
+ (id)regionInfo;
+ (id)firmwareVersion;
+ (id)systemReleaseType;
+ (id)systemBuildVersion;
+ (id)systemVersion;
+ (id)modelNumber;
+ (id)marketingPartNumber;
+ (id)productType;
+ (id)serialNumber;
+ (id)userDeviceName;
+ (id)deviceName;
+ (id)bonjourID;
+ (id)inverseUniqueID;
+ (id)uniqueIDData;
+ (id)uniqueID;

@end

