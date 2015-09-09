//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface HDDataSyncEntity : NSObject <HDSyncEntity>
{
}

+ (id)syncEntityDependencies;
+ (id)objectsFromCodableObjectsInCollection:(id)arg1;
+ (_Bool)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (_Bool)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 lastSyncAnchor:(long long *)arg3 healthDaemon:(id)arg4 error:(id *)arg5;
+ (id)predicateForSyncObjects;
+ (id)_objectWithCodable:(id)arg1;
+ (Class)healthEntityClass;
+ (long long)syncEntityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

