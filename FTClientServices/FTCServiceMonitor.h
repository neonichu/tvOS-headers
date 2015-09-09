//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FTCServiceMonitor : NSObject
{
    long long _availability;
    long long _type;
    int _token;
}

@property(readonly, nonatomic) long long serviceType;
- (long long)serviceAvailability;
- (void)handleActiveAccountsChanged:(id)arg1;
- (void)updateAvailability;
- (void)_updateAvailability;
- (void)_postAvailability:(long long)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

@end

