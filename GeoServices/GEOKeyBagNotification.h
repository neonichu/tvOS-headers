//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEOKeyBagNotification : NSObject
{
    int _currentState;
    int _notifyToken;
}

+ (id)sharedObject;
- (void)updateState;
- (int)state;
- (void)dealloc;
- (id)init;

@end

