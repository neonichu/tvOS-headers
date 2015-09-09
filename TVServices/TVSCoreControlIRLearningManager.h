//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/TVSCoreControlManagerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSTimer, TVSCoreControlIRLearningConfiguration, TVSCoreControlManager;
@protocol TVSCoreControlIRLearningManagerDelegate;

@interface TVSCoreControlIRLearningManager : NSObject <TVSCoreControlManagerDelegate>
{
    struct {
        unsigned int isAttemptingToStartLearning:1;
        unsigned int didFinishLearningCurrentAction:1;
    } _flags;
    _Bool _learningInProgress;
    int _currentAction;
    TVSCoreControlManager *_coreControlManager;
    TVSCoreControlIRLearningConfiguration *_configuration;
    id <TVSCoreControlIRLearningManagerDelegate> _delegate;
    NSMutableSet *_learnedActions;
    NSTimer *_waitTimer;
}

@property(retain, nonatomic) NSTimer *waitTimer; // @synthesize waitTimer=_waitTimer;
@property(retain, nonatomic) NSMutableSet *learnedActions; // @synthesize learnedActions=_learnedActions;
@property(nonatomic) __weak id <TVSCoreControlIRLearningManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int currentAction; // @synthesize currentAction=_currentAction;
@property(nonatomic, getter=isLearningInProgress) _Bool learningInProgress; // @synthesize learningInProgress=_learningInProgress;
@property(retain, nonatomic) TVSCoreControlIRLearningConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) TVSCoreControlManager *coreControlManager; // @synthesize coreControlManager=_coreControlManager;
- (void).cxx_destruct;
- (void)_didCancel;
- (void)_didSaveLearnedActions:(id)arg1 forDeviceWithUUID:(id)arg2;
- (void)_didFailToStartLearningWithError:(id)arg1;
- (void)_didStartLearning;
- (void)_waitTimerFired:(id)arg1;
- (_Bool)_canMoveFromCurrentActionToAction:(int)arg1;
- (_Bool)_learnAction:(int)arg1 withError:(id *)arg2;
- (void)coreControlManager:(id)arg1 didFinishLearningAction:(int)arg2;
- (void)coreControlManager:(id)arg1 didCompleteLearningAction:(int)arg2 withResult:(_Bool)arg3 error:(id)arg4;
- (void)coreControlManager:(id)arg1 didLearnAction:(int)arg2 withProgress:(double)arg3;
- (void)coreControlManager:(id)arg1 willStartLearningAction:(int)arg2;
- (void)coreControlManager:(id)arg1 didChangeReadyStatus:(_Bool)arg2;
- (_Bool)relearnCurrentActionWithError:(id *)arg1;
- (_Bool)learnNextActionWithError:(id *)arg1;
- (_Bool)learnPreviousActionWithError:(id *)arg1;
- (_Bool)cancelLearningWithError:(id *)arg1;
- (id)saveLearningWithError:(id *)arg1;
- (void)startLearningWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

