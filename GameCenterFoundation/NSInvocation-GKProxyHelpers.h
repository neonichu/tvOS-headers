//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
- (void)_gkInvokeOnceWithTarget:(id)arg1;
- (void)_gkInvokeOnce;
- (void)_gkClearTarget;
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;
- (void)__gkPrepareForFakeCallbackWithNoData:(_Bool)arg1 orError:(id)arg2;
- (void)_gkPrepareForCallWithError:(id)arg1;
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;
- (id)_gkReplyHandlerInvocation;
- (void)_gkClearCopiedArguments;
- (void)_gkCopyArguments;
- (void)_gkPrintBlockSignature;
@end

