//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSOperationQueue, NSString, NSXPCListener;
@protocol OS_dispatch_source;

@interface CKDCloudDatabaseServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;
    NSMutableArray *_connectedClients;
    NSObject<OS_dispatch_source> *_sighandlerSource;
    NSOperationQueue *_clientTeardownQueue;
}

+ (id)sharedServer;
@property(retain, nonatomic) NSOperationQueue *clientTeardownQueue; // @synthesize clientTeardownQueue=_clientTeardownQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sighandlerSource; // @synthesize sighandlerSource=_sighandlerSource;
@property(retain, nonatomic) NSMutableArray *connectedClients; // @synthesize connectedClients=_connectedClients;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;
- (void)statusReport;
- (id)allClients;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

