//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HAPMetadataCharacteristicValue;

@interface HMDHAPMetadataCharacteristicValue : NSObject <NSSecureCoding>
{
    HAPMetadataCharacteristicValue *_hapValueMetadata;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HAPMetadataCharacteristicValue *hapValueMetadata; // @synthesize hapValueMetadata=_hapValueMetadata;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPCharacteristicValue:(id)arg1;
- (id)init;

@end

