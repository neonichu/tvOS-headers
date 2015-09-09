//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDTimeCondition : NSObject
{
    _Bool mHasDelay;
    int mDelay;
    _Bool mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (id)description;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setTriggerEvent:(int)arg1;
- (int)triggerEvent;
- (_Bool)hasTriggerEvent;
- (void)setDelay:(int)arg1;
- (int)delay;
- (_Bool)hasDelay;
- (void)dealloc;
- (id)init;
- (int)writeDelay;

@end

