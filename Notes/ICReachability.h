//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICReachability : NSObject
{
    _Bool _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (long long)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

