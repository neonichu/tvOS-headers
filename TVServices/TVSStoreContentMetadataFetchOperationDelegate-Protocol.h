//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/NSObject-Protocol.h>

@class NSArray, NSDate, TVSStoreContentMetadataFetchOperation;

@protocol TVSStoreContentMetadataFetchOperationDelegate <NSObject>

@optional
- (void)storeContentMetadataFetchOperation:(TVSStoreContentMetadataFetchOperation *)arg1 obtainedLookupItems:(NSArray *)arg2 withExpirationDate:(NSDate *)arg3;
@end

