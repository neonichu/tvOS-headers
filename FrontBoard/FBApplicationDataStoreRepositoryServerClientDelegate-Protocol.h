//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBApplicationDataStoreRepositoryServerClient, NSString;

@protocol FBApplicationDataStoreRepositoryServerClientDelegate
- (void)applicationDataStoreRespositoryClient:(FBApplicationDataStoreRepositoryServerClient *)arg1 repositoryInvalidatedForBundleID:(NSString *)arg2;
- (void)applicationDataStoreRepositoryClient:(FBApplicationDataStoreRepositoryServerClient *)arg1 valueChangedForObject:(id)arg2 key:(NSString *)arg3 bundleID:(NSString *)arg4;
@end

