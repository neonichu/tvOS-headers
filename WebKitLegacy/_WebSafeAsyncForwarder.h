//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _WebSafeForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeAsyncForwarder : NSObject
{
    _WebSafeForwarder *_forwarder;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithForwarder:(id)arg1;

@end

