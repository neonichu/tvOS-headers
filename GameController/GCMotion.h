//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCController;

@interface GCMotion : NSObject
{
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _userAcceleration;
    struct GCQuaternion _attitude;
    CDStruct_31142d93 _rotationRate;
    float _tip;
    float _tilt;
    _Bool _motionLite;
    CDUnknownBlockType _valueChangedHandler;
    CDUnknownBlockType _internalValueChangedHandler;
    GCController *_controller;
}

@property(readonly, nonatomic) __weak GCController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_setRotationRate:(CDStruct_31142d93)arg1;
- (void)_setAttitude:(struct GCQuaternion)arg1;
- (void)_setUserAcceleration:(CDStruct_31142d93)arg1;
- (void)_setGravity:(CDStruct_31142d93)arg1;
- (_Bool)_isUpdatingDeviceMotion;
- (void)_pauseMotionUpdates:(_Bool)arg1;
- (void)_stopDeviceMotionUpdates;
- (void)_startDeviceMotionUpdates;
- (void)setInternalValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)internalValueChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler;
- (float)_tilt;
- (float)_tip;
@property(readonly, nonatomic) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(readonly, nonatomic) struct GCQuaternion attitude; // @synthesize attitude=_attitude;
@property(readonly, nonatomic) CDStruct_31142d93 userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property(readonly, nonatomic) CDStruct_31142d93 gravity; // @synthesize gravity=_gravity;
- (void)_setMotionLite:(_Bool)arg1;
- (id)initWithController:(id)arg1;

@end

