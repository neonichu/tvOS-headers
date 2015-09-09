//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSNotificationCenter : NSObject
{
    void *_impl;
    void *_callback;
    void *_pad[11];
}

+ (id)defaultCenter;
- (id)debugDescription;
- (_Bool)isEmpty;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

