//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIInteractionProgressObserver-Protocol.h>

@class NSMapTable, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _UIInteractiveAnimationRecord : NSObject <UIInteractionProgressObserver>
{
    _Bool _completed;
    NSUUID *_UUID;
    NSMapTable *_pausedTimes;
}

+ (void)discardRecord:(id)arg1;
+ (void)saveRecord:(id)arg1;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) NSMapTable *pausedTimes; // @synthesize pausedTimes=_pausedTimes;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

