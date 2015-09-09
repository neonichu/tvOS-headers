//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVSDataQuery;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _TVSDataQueryRecord : NSObject
{
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionHandler;
    _Bool _processAsync;
    TVSDataQuery *_query;
    long long _priority;
}

@property(nonatomic) _Bool processAsync; // @synthesize processAsync=_processAsync;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) TVSDataQuery *query; // @synthesize query=_query;
- (void)sendCallBack;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 priority:(long long)arg2 processAsync:(_Bool)arg3 withCompletionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
