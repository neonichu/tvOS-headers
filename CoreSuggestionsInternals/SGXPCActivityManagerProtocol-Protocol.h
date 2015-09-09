//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol OS_xpc_object;

@protocol SGXPCActivityManagerProtocol
- (NSObject<OS_xpc_object> *)copyCriteria:(NSObject<OS_xpc_object> *)arg1;
- (_Bool)shouldDefer:(NSObject<OS_xpc_object> *)arg1;
- (void)setCriteria:(NSObject<OS_xpc_object> *)arg1 criteria:(NSObject<OS_xpc_object> *)arg2 forActivity:(int)arg3;
- (_Bool)setState:(NSObject<OS_xpc_object> *)arg1 state:(long long)arg2;
- (long long)getState:(NSObject<OS_xpc_object> *)arg1;
- (NSObject<OS_xpc_object> *)activityForActivityId:(int)arg1;
- (void)registerForActivity:(int)arg1 handler:(void (^)(NSObject<OS_xpc_object> *))arg2;
- (void)registerActivitiesWithSystem;
@end

