//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject
{
    NSArray *_merchantIdentifiers;
    _Bool _ignoreMerchantIdentifiers;
}

@property(readonly, nonatomic) _Bool ignoreMerchantIdentifiers; // @synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers;
- (void)_probeEntitlementsWithToken:(CDStruct_6ad76789)arg1;
@property(readonly, nonatomic) _Bool hasMerchantIdentifiers;
- (_Bool)hasMerchantIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithToken:(CDStruct_6ad76789)arg1;

@end

