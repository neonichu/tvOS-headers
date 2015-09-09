//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SSVOperation : NSOperation
{
    NSOperation *_childOperation;
    NSMutableArray *_childRequests;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)runChildOperation:(id)arg1;
- (void)removeChildRequest:(id)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)addChildRequest:(id)arg1;
- (id)init;

@end
