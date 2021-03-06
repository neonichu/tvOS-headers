//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol HAPTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HAPTimer : NSObject
{
    _Bool _running;
    id <HAPTimerDelegate> _delegate;
    double _timeInterval;
    NSDate *_fireDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _options;
}

@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property __weak id <HAPTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleExpiration;
- (void)_kick;
- (void)kick;
- (void)_suspend;
- (void)suspend;
- (void)_resume;
- (void)resume;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

