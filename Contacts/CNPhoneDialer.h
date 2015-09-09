//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhoneDialer : NSObject
{
}

+ (id)messageWithAdditionalParameters:(id)arg1;
+ (void)loadIdentityServices;
+ (_Bool)sendMessage:(id)arg1 error:(id *)arg2;
+ (id)cancelMessageWithDialMessageID:(id)arg1;
+ (_Bool)cancelDialMessage:(id)arg1 error:(id *)arg2;
+ (id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2;
+ (id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id *)arg3;
+ (id)sanitizePhoneNumber:(id)arg1;
+ (id)URLWithPhoneNumber:(id)arg1;
+ (id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id *)arg3;

@end

