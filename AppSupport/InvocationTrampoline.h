//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface InvocationTrampoline : NSObject
{
    id _target;
}

@property(retain) id target; // @synthesize target=_target;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performInvocation:(id)arg1;
- (void)dealloc;

@end

