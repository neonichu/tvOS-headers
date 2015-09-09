//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerMux : NSObject
{
    NSMutableArray *_clients;
    id <_UIIVCResponseDelegateImpl> _responseDelegate;
    id <TIKeyboardInputManager> _systemInputManager;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) id <TIKeyboardInputManager> systemInputManager; // @synthesize systemInputManager=_systemInputManager;
@property(retain, nonatomic) id <_UIIVCResponseDelegateImpl> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;
- (void)releaseConnectedClients;
- (void)removeAllClients;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)setSystemInputManagerFromKeyboardState:(id)arg1;
@property(readonly, nonatomic) _Bool hasSystemInputManager;
- (_Bool)_systemHasKbd;
- (void)dealloc;

@end

