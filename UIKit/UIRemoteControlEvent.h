//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIEvent.h>

__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent : UIEvent
{
    long long _subtype;
}

- (void)_simpleRemoteActionNotification:(id)arg1;
- (void)_sendEventToResponder:(id)arg1;
- (id)_windows;
- (void)_setSubtype:(long long)arg1;
- (long long)subtype;
- (long long)type;
- (void)dealloc;
- (id)_init;

@end

