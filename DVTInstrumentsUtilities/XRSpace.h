//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSMutableString, NSOperationQueue, NSString;

@interface XRSpace : NSObject
{
    _Bool _supportsOpNames;
    _Bool _overridesQoS;
    NSOperationQueue *_queue;
    NSMutableString *_tag;
    unsigned long long _seqNum;
    NSMutableDictionary *_userDataByToken;
    NSMutableSet *_notificationShims;
    NSString *_opName;
}

- (void).cxx_destruct;
- (void)_removeNotificationShim:(id)arg1;
- (void)stopObservationsOfObject:(id)arg1 forObserver:(id)arg2;
- (void)requestLocalNotification:(id)arg1 object:(id)arg2 observer:(id)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)isBusy;
- (unsigned long long)operationCount;
- (_Bool)currentlyInThisSpace;
- (_Bool)isSerial;
- (id)spaceName;
- (_Bool)isOpValidForSpace:(id)arg1;
- (id)userDataForToken:(id)arg1;
- (void)removeUserDataForToken:(id)arg1;
- (void)replaceUserData:(id)arg1 forToken:(id)arg2;
- (id)storeUserData:(id)arg1;
- (id)afterOperationsRunBlock:(id)arg1;
- (id)afterOperation:(id)arg1 priority:(long long)arg2 spaceBlock:(CDUnknownBlockType)arg3;
- (id)afterOperations:(id)arg1 priority:(long long)arg2 spaceBlock:(CDUnknownBlockType)arg3;
- (id)afterOperation:(id)arg1 spaceBlock:(CDUnknownBlockType)arg2;
- (id)afterOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_scheduleOperationFromCurrentQueue:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_postQueueStateChanged;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end

