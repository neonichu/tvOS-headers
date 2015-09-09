//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface PLMomentAnalyzerQueue : NSObject
{
    double _firstPingSinceReset;
    double _lastPingSinceReset;
    NSMutableSet *_momentListIdsToProcess;
    double _minimumInterval;
    double _maximumInterval;
}

@property(nonatomic) double maximumInterval; // @synthesize maximumInterval=_maximumInterval;
@property(nonatomic) double minimumInterval; // @synthesize minimumInterval=_minimumInterval;
- (id)dequeueMomentListIdsForProcessing;
- (void)enqueueMomentListIds:(id)arg1;
@property(readonly, nonatomic) _Bool shouldProcessWork;
@property(readonly, nonatomic) _Bool hasWork;
- (void)dealloc;
- (id)init;

@end

