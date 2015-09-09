//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSUUID;

@protocol LSResumableActivitiesAdministrativeProtocol <NSObject>
- (void)getCurrentPeersAndClear:(_Bool)arg1 completionHandler:(void (^)(LSPingResults *))arg2;
- (void)stopAdvertisingPing;
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;
- (void)doBroadcastPing:(void (^)(LSPingResults *))arg1;
- (void)doWillSaveDelegate:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)doInjectBTLE:(NSUUID *)arg1 type:(unsigned long long)arg2 identifier:(NSString *)arg3 title:(NSString *)arg4 activityPayload:(NSData *)arg5 frameworkPayload:(NSData *)arg6 payloadDelay:(double)arg7;
- (void)doGetCurrentAdvertisedItemUUID:(void (^)(NSUUID *))arg1;
- (void)doTerminateServer;
- (void)doCopyDynamicUserActivitiesString:(NSDictionary *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)doCopyStatusString:(NSDictionary *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)doCopyDebuggingInfo:(NSDictionary *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)doCopyEnabledUUIDsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)doCopyAllUUIDsOfType:(unsigned long long)arg1 withCompletionHandler:(void (^)(NSArray *))arg2;
- (void)doCopyAdvertisedUUIDWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)doFindMatchingUserActivityForString:(NSString *)arg1 withCompletionHandler:(void (^)(NSUUID *))arg2;
- (void)doSetDebugOption:(NSString *)arg1 value:(id)arg2;
- (void)doNOP:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *, NSError *))arg2;
@end
