//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMapTable;

__attribute__((visibility("hidden")))
@interface GEOLocationShiftRequester : NSObject
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
    NSMapTable *_providers;
}

+ (id)sharedRequester;
- (Class)classForProviderID:(short)arg1;
- (void)registerProvider:(Class)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

