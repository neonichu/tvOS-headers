//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSArray, NSError, NSString, NSUUID;
@protocol HDSyncChange;

@protocol HDSyncStore <NSObject>
@property(readonly, nonatomic) _Bool shouldSynthesizeProvenance;
@property(readonly, copy, nonatomic) NSString *remoteSystemBuildVersion;
@property(readonly, copy, nonatomic) NSString *remoteProductType;
@property(readonly, nonatomic) NSString *syncStoreDefaultSourceBundleIdentifier;
@property(readonly, nonatomic) NSUUID *syncStoreDefaultSourceUUID;
@property(readonly, nonatomic) NSString *syncStoreIdentifier;
@property(readonly, nonatomic) long long syncProvenance;
- (NSArray *)syncEntities;
- (unsigned long long)syncObjectLimitForEntityClass:(Class)arg1;
- (void)sendChange:(id <HDSyncChange>)arg1 withContext:(id)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (id <HDSyncChange>)newChangeWithSyncEntityClass:(Class)arg1;

@optional
- (void)syncDidFinishWithSuccess:(_Bool)arg1 error:(NSError *)arg2 context:(id)arg3;
- (void)syncWillBeginWithContext:(id)arg1;
@end

