//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/_NSXPCDistantObjectWithError.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObjectWithUserInfoAndError : _NSXPCDistantObjectWithError
{
    NSDictionary *_userInfo;
}

- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 userInfo:(id)arg5 error:(CDUnknownBlockType)arg6;

@end

