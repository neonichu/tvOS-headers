//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>
#import <TelephonyUtilities/TUPubliclyAccessibleCopying-Protocol.h>

@class NSData, NSString, NSURL;

@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    _Bool _canEnable;
    _Bool _enabled;
    int _provisioningStatus;
    NSURL *_provisioningURL;
    NSData *_provisioningPostData;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool canEnable; // @synthesize canEnable=_canEnable;
@property(retain, nonatomic) NSData *provisioningPostData; // @synthesize provisioningPostData=_provisioningPostData;
@property(retain, nonatomic) NSURL *provisioningURL; // @synthesize provisioningURL=_provisioningURL;
@property(nonatomic) int provisioningStatus; // @synthesize provisioningStatus=_provisioningStatus;
- (void).cxx_destruct;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateProvisioningURL;
@property(readonly, nonatomic, getter=isProvisioningURLInvalid) _Bool provisioningURLInvalid;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

