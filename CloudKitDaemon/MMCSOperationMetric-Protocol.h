//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol MMCSOperationStateTimeRange;

@protocol MMCSOperationMetric <NSObject>
@property(readonly) NSArray *rangesCopy;
@property unsigned long long connectionsCreated;
@property unsigned long long connections;
@property unsigned long long bytesDownloaded;
@property unsigned long long bytesUploaded;
@property double executing;
@property double queueing;
@property(readonly) double duration;
@property(readonly) NSDate *startDate;
- (id <MMCSOperationStateTimeRange>)newRangeWithOperationState:(unsigned long long)arg1 startDate:(NSDate *)arg2 duration:(double)arg3;
- (void)addRange:(id <MMCSOperationStateTimeRange>)arg1;
@end

