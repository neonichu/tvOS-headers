//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HAPMetadataCharacteristic, HMDHAPMetadataCharacteristicValue;

@interface HMDHAPMetadataCharacteristic : NSObject <NSSecureCoding>
{
    HAPMetadataCharacteristic *_hapCharacteristicMetadata;
    HMDHAPMetadataCharacteristicValue *_valueMetadata;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDHAPMetadataCharacteristicValue *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) HAPMetadataCharacteristic *hapCharacteristicMetadata; // @synthesize hapCharacteristicMetadata=_hapCharacteristicMetadata;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPCharacteristic:(id)arg1;
- (id)init;

@end

