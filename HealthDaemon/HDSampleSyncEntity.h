//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataSyncEntity.h>

@interface HDSampleSyncEntity : HDDataSyncEntity
{
}

+ (id)sampleTypesByAgeInDaysForNanoSyncRestore;
+ (long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)objectsForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 lastSyncAnchor:(long long *)arg4 healthDaemon:(id)arg5 error:(id *)arg6;
+ (int)nanoSyncObjectType;

@end

