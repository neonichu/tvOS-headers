//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TLAccessQueue : NSObject
{
    NSString *_label;
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(nonatomic, setter=_setSerialQueue:) NSObject<OS_dispatch_queue> *_serialQueue; // @synthesize _serialQueue;
@property(copy, nonatomic, setter=_setThreadLocalStorageKey:) NSString *_threadLocalStorageKey; // @synthesize _threadLocalStorageKey;
- (void)_setLabel:(id)arg1;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)_performSynchronousBlockInSerialQueue:(CDUnknownBlockType)arg1;
- (void)performAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(_Bool)arg2;

@end

