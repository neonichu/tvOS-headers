//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@class NSError, NSString;

@protocol PSYProgressClient <NSObject>
- (oneway void)noteClientNotEntitled:(NSString *)arg1;
- (oneway void)scheduledActivitiesProgressStateChanged:(long long)arg1;
- (oneway void)scheduledActivitiesDidComplete;
- (oneway void)scheduledActivityProgressChanged:(float)arg1 totalProgress:(float)arg2;
- (oneway void)scheduledActivityChanged:(NSString *)arg1 fromActivity:(NSString *)arg2 error:(NSError *)arg3;
@end

