//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface HAPBTLEReachabilityScanTuple : NSObject
{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
}

+ (id)reachabilityScanTupleWithCompletion:(CDUnknownBlockType)arg1 workQueue:(id)arg2 identifier:(id)arg3;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;

@end

