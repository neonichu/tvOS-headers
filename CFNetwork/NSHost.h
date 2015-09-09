//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, __NSHostExtraIvars;

@interface NSHost : NSObject
{
    NSArray *names;
    NSArray *addresses;
    id reserved;
}

+ (void)flushHostCache;
+ (void)setHostCacheEnabled:(_Bool)arg1;
+ (_Bool)isHostCacheEnabled;
+ (id)hostWithAddress:(id)arg1;
+ (id)hostWithName:(id)arg1;
+ (id)currentHost;
@property(retain, nonatomic) __NSHostExtraIvars *reserved; // @synthesize reserved;
- (void)dealloc;
- (id)description;
@property(readonly, copy) NSString *localizedName;
@property(readonly, copy) NSArray *addresses;
@property(readonly, copy) NSString *address;
@property(readonly, copy) NSArray *names;
@property(readonly, copy) NSString *name;
- (_Bool)isEqualToHost:(id)arg1;
- (void)resolveCurrentHostWithHandler:(CDUnknownBlockType)arg1;
- (void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)blockingResolveUntil:(int)arg1;
- (void)resolve:(CDUnknownBlockType)arg1;
- (id)_thingToResolve;
- (id)initToResolve:(id)arg1 as:(int)arg2;

@end

