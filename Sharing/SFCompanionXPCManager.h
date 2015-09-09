//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;

@interface SFCompanionXPCManager : NSObject
{
    _Bool _invalid;
    _Bool _interrupted;
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
}

+ (id)sharedManager;
+ (id)hotspotInterface;
+ (id)hotspotClientInterface;
+ (id)unlockInterface;
+ (id)scannerInterface;
+ (id)scannerClientInterface;
+ (id)advertiserInterface;
+ (id)advertiserClientInterface;
+ (id)serviceManagerInterface;
+ (id)serviceManagerClientInterface;
+ (id)xpcManagerInterface;
+ (void)initialize;
@property(retain) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
- (void)airdropTransferDataProviderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unlockManagerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)notifyOfInvalidation;
- (void)notifyOfResume;
- (void)notifyOfInterruption;
- (void)setupConnection;
- (void)dealloc;
- (id)init;

@end

