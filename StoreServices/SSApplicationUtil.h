//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSApplicationUtil : NSObject
{
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (id)_connection;
- (void)restartApplication:(CDUnknownBlockType)arg1;
- (id)init;

@end

