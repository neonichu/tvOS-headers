//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKSource : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    _Bool _localDevice;
    NSString *_productType;
    unsigned long long _options;
}

+ (_Bool)supportsSecureCoding;
+ (id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1;
+ (id)_generateIdentifierForAppleDevice;
+ (id)_sourceNameWithRepresentsCurrentDevice:(_Bool)arg1 defaultSource:(_Bool)arg2;
+ (id)_currentSourceProductType:(_Bool)arg1;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)arg1 clientBundleIdentifier:(id)arg2 isExtension:(_Bool)arg3;
+ (_Bool)_representsCurrentDeviceWithBundleIdentifier:(id)arg1;
+ (id)defaultSource;
@property(nonatomic, getter=_options, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic, getter=_productType, setter=_setProductType:) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic, getter=_isLocalDevice, setter=_setLocalDevice:) _Bool localDevice; // @synthesize localDevice=_localDevice;
- (void).cxx_destruct;
- (_Bool)_isAppleWatch;
- (void)_setBundleIdentifier:(id)arg1;
@property(readonly) NSString *bundleIdentifier;
- (void)_setName:(id)arg1;
@property(readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_init;
- (id)init;
- (_Bool)_requiresAuthorization;
- (_Bool)_isPreferredSource;
- (_Bool)_isApplication;

@end

