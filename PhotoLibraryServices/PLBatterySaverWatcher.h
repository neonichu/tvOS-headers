//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLBatterySaverWatcher : NSObject
{
    int _notifyBatterySaverModeToken;
    NSMutableArray *_delegates;
}

+ (id)sharedBatterySaverWatcher;
- (_Bool)batterySaverModeEnabled;
- (void)unregisterToBatterySaverModeNotification;
- (unsigned int)registerToBatterySaverModeNotification;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;

@end

