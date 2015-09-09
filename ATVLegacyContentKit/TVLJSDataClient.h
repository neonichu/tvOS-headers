//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSDataClient.h>

@class NSObject, TVLAppliance, TVLLegacyJSContext;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TVLJSDataClient : TVSDataClient
{
    TVLLegacyJSContext *_jsContext;
    NSObject<OS_dispatch_queue> *_jsContextAccessQueue;
    NSObject<OS_dispatch_source> *_jsContextPurgeTimer;
    TVLAppliance *_appliance;
}

+ (id)_dataTypeToFeedType:(id)arg1;
+ (id)dataPropertyToFeedProperty:(id)arg1;
+ (id)dataTypeFromFeedType:(id)arg1;
@property(readonly, nonatomic) TVLAppliance *appliance; // @synthesize appliance=_appliance;
- (void).cxx_destruct;
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)imageKeyForObject:(id)arg1;
- (id)_queryDictionaryForQuery:(id)arg1;
- (id)_makeJSContext;
- (void)_accessJSContextWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (_Bool)processQueryAsync:(id)arg1;
- (void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)concreteDataClientDisconnect;
- (void)concreteDataClientConnect;
- (id)imageURLWithAsset:(id)arg1 size:(struct CGSize)arg2 crop:(_Bool)arg3;
- (id)initWithAppliance:(id)arg1;

@end

