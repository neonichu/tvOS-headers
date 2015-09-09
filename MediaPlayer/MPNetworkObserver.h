//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPNetworkObserver : NSObject
{
    int _musicCellularNetworkingAllowedNotifyToken;
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_networkUsageQueue;
}

+ (id)sharedNetworkObserver;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isUsingNetwork;
@property(readonly, nonatomic) _Bool isStoreCellularNetworkingAllowed;
@property(readonly, nonatomic) _Bool isMusicCellularNetworkingAllowed;
- (void)endUsingNetwork;
- (void)beginUsingNetwork;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

