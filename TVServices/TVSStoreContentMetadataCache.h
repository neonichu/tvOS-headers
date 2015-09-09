//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/NSCacheDelegate-Protocol.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface TVSStoreContentMetadataCache : NSObject <NSCacheDelegate>
{
    NSCache *_entriesByAdamID;
}

@property(retain, nonatomic) NSCache *entriesByAdamID; // @synthesize entriesByAdamID=_entriesByAdamID;
- (void).cxx_destruct;
- (void)setItem:(id)arg1 forAdamID:(id)arg2 withExpirationDate:(id)arg3;
- (id)itemForAdamID:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

