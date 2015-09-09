//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMFoundation/IMConnectionMonitor.h>

#import <IMFoundation/IMReachabilityDelegate-Protocol.h>
#import <IMFoundation/IMSystemMonitorListener-Protocol.h>

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>
{
    _Bool _isConnected;
    _Bool _isSleeping;
    IMReachability *_hostReachability;
    IMReachability *_ipReachability;
    unsigned long long _hostFlags;
    unsigned long long _ipFlags;
}

@property(nonatomic) _Bool _isSleeping; // @synthesize _isSleeping;
@property(nonatomic) _Bool _isConnected; // @synthesize _isConnected;
@property(nonatomic) unsigned long long _ipFlags; // @synthesize _ipFlags;
@property(nonatomic) unsigned long long _hostFlags; // @synthesize _hostFlags;
@property(retain, nonatomic) IMReachability *_ipReachability; // @synthesize _ipReachability;
@property(retain, nonatomic) IMReachability *_hostReachability; // @synthesize _hostReachability;
- (_Bool)isImmediatelyReachable;
- (void)clear;
- (void)goDisconnected;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)_setup;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)reachabilityDidChange:(id)arg1;
- (void)_setupReachability;
- (void)_doCallbackLater;
- (void)_doCallbackNow;
- (void)_clearReachability:(id *)arg1 flags:(unsigned long long *)arg2;
- (void)dealloc;

@end

