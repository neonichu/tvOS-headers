//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AFRemoteRequestWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)setNewRequestHandler:(CDUnknownBlockType)arg1;
- (void)_setupListener;
- (void)dealloc;
- (id)init;

@end

