//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationTokenRegistration.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationDarwinTokenRegistration : _CFXNotificationTokenRegistration
{
    int _notifyToken;
}

@property(readonly) int notifyToken; // @synthesize notifyToken=_notifyToken;
- (void)invalidate;
- (id)initWithToken:(unsigned long long)arg1 notifyToken:(int)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end

