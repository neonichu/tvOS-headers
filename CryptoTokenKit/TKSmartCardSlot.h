//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, TKSmartCardATR, TKSmartCardSlotProxy, TKSmartCardSlotScreen;
@protocol OS_dispatch_queue;

@interface TKSmartCardSlot : NSObject
{
    NSXPCConnection *_connection;
    long long _powerState;
    long long _shareState;
    _Bool _securePINVerificationSupported;
    _Bool _securePINChangeSupported;
    long long _state;
    TKSmartCardATR *_ATR;
    NSString *_name;
    long long _maxInputLength;
    long long _maxOutputLength;
    TKSmartCardSlotProxy *_proxy;
}

+ (void)slotWithEndpoint:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property _Bool securePINChangeSupported; // @synthesize securePINChangeSupported=_securePINChangeSupported;
@property _Bool securePINVerificationSupported; // @synthesize securePINVerificationSupported=_securePINVerificationSupported;
@property long long powerState; // @synthesize powerState=_powerState;
@property long long shareState; // @synthesize shareState=_shareState;
@property(readonly, nonatomic) TKSmartCardSlotProxy *proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) long long maxOutputLength; // @synthesize maxOutputLength=_maxOutputLength;
@property(readonly, nonatomic) long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) TKSmartCardATR *ATR; // @synthesize ATR=_ATR;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)makeSmartCard;
- (id)remoteSlotWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
- (void)connectToEndpoint:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)userInteractionForStringEntry;
- (id)userInteractionForConfirmation;
@property(readonly) TKSmartCardSlotScreen *screen;
- (void)setAttrib:(unsigned int)arg1 data:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAttrib:(unsigned int)arg1 expectedLength:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)control:(id)arg1 data:(id)arg2 expectedLength:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;

@end

