//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@interface RadioLoadStoreBagRequest : RadioRequest
{
    _Bool _ignoresRadioDiskCache;
}

+ (void)_writeStoreBagToDiskCache:(id)arg1;
+ (id)_pathForCachedStoreBags;
+ (id)_cachedStoreBagForActiveAccount;
+ (id)_cachedBagFilenameForActiveAccount;
+ (id)_accessQueue;
+ (void)_urlBagDidLoadNotification:(id)arg1;
@property(nonatomic) _Bool ignoresRadioDiskCache; // @synthesize ignoresRadioDiskCache=_ignoresRadioDiskCache;
- (void)_handleFinishedLoadingBag:(id)arg1 withError:(id)arg2 didLoadFromNonDiskCache:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadStoreBagWithOptions:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

