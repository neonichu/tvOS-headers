//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebNotification : NSObject
{
    struct RetainPtr<WebNotificationPrivate> _private;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispatchErrorEvent;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchShowEvent;
- (unsigned long long)notificationID;
- (id)origin;
- (id)dir;
- (id)lang;
- (id)iconURL;
- (id)tag;
- (id)body;
- (id)title;
- (id)init;

@end

