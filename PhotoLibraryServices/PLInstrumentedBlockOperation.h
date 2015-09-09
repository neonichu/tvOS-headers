//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@interface PLInstrumentedBlockOperation : NSBlockOperation
{
    _Bool _postambleAdded;
    double _creationTime;
    double _executionStartTime;
    double _executionEndTime;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool postambleAdded; // @synthesize postambleAdded=_postambleAdded;
@property(nonatomic) double executionEndTime; // @synthesize executionEndTime=_executionEndTime;
@property(nonatomic) double executionStartTime; // @synthesize executionStartTime=_executionStartTime;
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) double timeSpentWaitingInQueue; // @dynamic timeSpentWaitingInQueue;
@property(readonly, nonatomic) double executionTime; // @dynamic executionTime;
- (id)description;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

