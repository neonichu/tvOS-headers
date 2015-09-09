//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _HDAppLauncherClient : NSObject
{
    _Bool _launching;
    _Bool _retry;
    NSMutableDictionary *_expirationDateByRegistrationIdentifier;
}

@property(nonatomic) _Bool retry; // @synthesize retry=_retry;
@property(nonatomic) _Bool launching; // @synthesize launching=_launching;
@property(retain, nonatomic) NSMutableDictionary *expirationDateByRegistrationIdentifier; // @synthesize expirationDateByRegistrationIdentifier=_expirationDateByRegistrationIdentifier;
- (void).cxx_destruct;
- (_Bool)cleanUpExpiredRegistrationsWithDate:(id)arg1;
- (_Bool)hasValidRegistrationByDate:(id)arg1;
- (void)unregisterIdentifier:(id)arg1;
- (void)registerIdentifier:(id)arg1 withDate:(id)arg2;
- (id)init;

@end

