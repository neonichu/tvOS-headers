//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCListener;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate>
{
    int _lock;
    NSXPCListener *_listener;
    NSMutableArray *_sessions;
    int _connectionNotificationToken;
}

+ (id)__serviceSessionManager;
+ (_Bool)hasActiveSessions;
+ (void)startViewServiceSessionManagerAsPlugin:(_Bool)arg1;
- (void).cxx_destruct;
- (void)_startOrStopSystemsForBackgroundRunning;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_configureSessionForConnection:(id)arg1;
- (_Bool)_hasActiveSessions;
- (void)_registerSessionForDefaultDeputies:(id)arg1;
- (void)_startListenerWithName:(id)arg1;
- (void)_startListener;
- (id)_initAsPlugIn:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

