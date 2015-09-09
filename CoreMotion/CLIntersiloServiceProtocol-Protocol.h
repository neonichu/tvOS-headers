//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLIntersiloProxyDelegateProtocol-Protocol.h>

@class CLSilo, NSMutableArray;
@protocol CLIntersiloProxyDelegateProtocol;

@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
+ (void)performSyncOnSilo:(CLSilo *)arg1 invoker:(void (^)(void))arg2;
+ (void)becameFatallyBlocked:(NSMutableArray *)arg1;
+ (CLSilo *)getSilo;
+ (_Bool)isSupported;

@optional
- (void)setOpaqueTag:(void *)arg1;
- (void)registerDelegate:(id <CLIntersiloProxyDelegateProtocol>)arg1 inSilo:(CLSilo *)arg2;
- (void)endService;
- (void)beginService;
@end

