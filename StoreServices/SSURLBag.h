//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, SSURLBagContext, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSURLBag : NSObject
{
    SSXPCConnection *_connection;
    SSURLBagContext *_context;
    NSDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _expirationTime;
    _Bool _ignoreCacheForNextLookup;
    NSMutableArray *_pendingLookups;
    NSString *_storeFrontIdentifier;
}

+ (void)setURLBag:(id)arg1 forContext:(id)arg2;
+ (id)URLBagForContext:(id)arg1;
- (void)_loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_loadURLBag;
- (void)_drainPendingLookupsWithError:(id)arg1;
- (id)_connection;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)existingBagDictionary;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
@property(readonly) SSURLBagContext *URLBagContext;
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)getTrustForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithURLBagContext:(id)arg1;
- (id)init;

@end

