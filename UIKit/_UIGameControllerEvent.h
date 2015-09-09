//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIEvent.h>

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent : UIEvent
{
    CDStruct_a6e7b6a4 _previousState;
    int _inputType;
}

- (_Bool)_processShoulder:(CDStruct_a6e7b6a4 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processLeftStick:(CDStruct_a6e7b6a4 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processDPad:(CDStruct_a6e7b6a4 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processStandardButtons:(CDStruct_a6e7b6a4 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_determineInputTypeAndProcess:(CDStruct_a6e7b6a4 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (struct CGPoint)_leftStickPosition;
- (void)_maybeConvertAndSendAsPressesEvent;
- (void)_sendEventToResponder:(id)arg1;
- (long long)subtype;
- (long long)type;

@end

