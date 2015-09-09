//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TURepeatingActor : NSObject
{
    _Bool _running;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _iterationsRemaining;
    double _pauseDuration;
    CDUnknownBlockType _action;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) double pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property(nonatomic) unsigned long long iterationsRemaining; // @synthesize iterationsRemaining=_iterationsRemaining;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void).cxx_destruct;
- (void)_stopWithDidFinish:(_Bool)arg1;
- (_Bool)_hasIterationsRemaining;
- (void)_attemptNextIteration;
- (void)stop;
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

