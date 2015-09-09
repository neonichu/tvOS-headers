//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCExtendedGamepad, GCGamepad, GCMicroGamepad, GCMotion, NSArray, NSString;
@protocol GCNamedProfile, OS_dispatch_queue;

@interface GCController : NSObject
{
}

+ (void)stopWirelessControllerDiscovery;
+ (void)startWirelessControllerDiscoveryWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_startWirelessControllerDiscoveryWithCompanions:(_Bool)arg1 btClassic:(_Bool)arg2 btle:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)controllers;
+ (void)__daemon__appDidEnterBackground;
+ (void)__daemon__appWillEnterForeground;
+ (void)__daemon__controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
+ (void)__daemon__removeController:(id)arg1;
+ (void)__daemon__addController:(id)arg1;
+ (void)__daemon__requestConnectedHostUpdatesWithHandler:(CDUnknownBlockType)arg1;
+ (void)__daemon__setUserActivityUserInfo:(id)arg1;
+ (void)__daemon__startBonjourService;
+ (void)__setLogger__:(CDUnknownBlockType)arg1;
+ (void)__openXPC__;
+ (void)__open__;
+ (void)handleUIEvent:(id)arg1;
@property(readonly, nonatomic) unsigned int service;
@property(retain, nonatomic) id <GCNamedProfile> profile;
@property(readonly, retain, nonatomic) GCMotion *motion;
@property(readonly, retain, nonatomic) GCExtendedGamepad *extendedGamepad;
@property(readonly, retain, nonatomic) GCMicroGamepad *microGamepad;
@property(readonly, retain, nonatomic) GCGamepad *gamepad;
- (_Bool)isForwarded;
- (unsigned int)sampleRate;
- (void)addDeviceRefs:(id)arg1;
- (void)removeDeviceRef:(struct __IOHIDDevice *)arg1;
- (void *)createInputBufferForDevice:(struct __IOHIDDevice *)arg1 withSize:(unsigned long long)arg2;
- (_Bool)hasDeviceRef:(struct __IOHIDDevice *)arg1;
- (_Bool)isEqualToController:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *hidDevices;
- (_Bool)supportsMotionLite;
- (unsigned long long)deviceHash;
@property(nonatomic) long long playerIndex;
@property(readonly, nonatomic, getter=isAttachedToDevice) _Bool attachedToDevice;
@property(readonly, copy, nonatomic) NSString *vendorName;
@property(retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property(copy, nonatomic) CDUnknownBlockType controllerPausedHandler;

@end

