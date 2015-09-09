//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CMWakeGestureDelegate, OS_dispatch_queue;

@interface CMWakeGestureManager : NSObject
{
    struct Dispatcher *fWakeDispatcher;
    long long fCurrentState;
    double fLastNotificationTime;
    _Bool fEnableAudioAlert;
    int fNightStandThreshold;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor>> fWakeGestureVisitor;
    int fScreenDimmingNotificationToken;
    id <CMWakeGestureDelegate> _delegate;
    long long _wrist;
    long long _crown;
}

+ (_Bool)isWakeGestureAvailable;
+ (id)sharedManager;
+ (void)initialize;
@property(nonatomic) long long crown; // @synthesize crown=_crown;
@property(nonatomic) long long wrist; // @synthesize wrist=_wrist;
@property(nonatomic) id <CMWakeGestureDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onWakeUpdated:(const struct CLGestureReport *)arg1;
- (_Bool)setNightStandMode:(_Bool)arg1 withConfiguration:(long long)arg2;
- (void)updateWristAndCrown;
- (_Bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)playAlert;
- (void)stopWakeGestureUpdates;
- (void)startWakeGestureUpdates;
- (void)dealloc;
- (id)init;

@end

