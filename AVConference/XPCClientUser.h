//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface XPCClientUser : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block;
@property NSObject<OS_dispatch_queue> *queue; // @synthesize queue;

@end

