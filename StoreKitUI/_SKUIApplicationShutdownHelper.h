//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIApplicationController;

@interface _SKUIApplicationShutdownHelper : NSObject
{
    SKUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithApplicationController:(id)arg1;

@end

