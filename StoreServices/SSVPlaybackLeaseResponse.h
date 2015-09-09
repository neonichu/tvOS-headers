//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVPlaybackResponse.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSData;

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse <NSCopying>
{
    NSData *_certificateData;
    unsigned long long _kdMovieIdentifier;
}

@property(nonatomic) unsigned long long KDMovieIdentifier; // @synthesize KDMovieIdentifier=_kdMovieIdentifier;
@property(copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property(readonly, copy, nonatomic) NSData *leaseInfoData;
@property(readonly, nonatomic, getter=isOfflineSlotAvailable) _Bool offlineSlotAvailable;
@property(readonly, nonatomic) double leaseDuration;
- (id)itemForItemIdentifier:(id)arg1;

@end
