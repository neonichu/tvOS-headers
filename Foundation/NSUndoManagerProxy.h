//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface NSUndoManagerProxy : NSProxy
{
    NSUndoManager *_manager;
    Class _targetClass;
}

- (_Bool)isKindOfClass:(Class)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)superRelease;
- (oneway void)release;
- (_Bool)_tryRetain;
- (id)retain;
- (id)initWithManager:(id)arg1 targetClass:(Class)arg2;

@end

