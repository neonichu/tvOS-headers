//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVIdleScreenServices/NSURLSessionDownloadDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURLSession, TVIEntry;
@protocol OS_dispatch_source;

@interface TVIEntryManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSString *_cachingIdleScreenIdentifier;
    NSMutableDictionary *_mutableDownloadTaskIdentifiersToAssets;
    NSMutableArray *_mutableDownloadTasks;
    id _preferencesObserver;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSURLSession *_urlSession;
    _Bool _allowCachingAssets;
    NSArray *_availableEntries;
}

+ (double)_timeIntervalForEntryRefreshInterval:(long long)arg1;
+ (id)_entriesCachePath;
+ (id)sharedEntryManager;
@property(readonly, copy, nonatomic) NSArray *availableEntries; // @synthesize availableEntries=_availableEntries;
@property(nonatomic) _Bool allowCachingAssets; // @synthesize allowCachingAssets=_allowCachingAssets;
- (void).cxx_destruct;
- (void)_updateCachesForSelectedEntry;
- (void)_resumeNextDownloadTask;
- (void)_refreshAvailableEntries;
- (void)_processAvailableEntriesWithDocument:(id)arg1;
- (void)_invalidateURLSession;
- (void)setEntryRefreshInterval:(long long)arg1;
@property(readonly, nonatomic) TVIEntry *selectedEntry;
@property(readonly, nonatomic) long long entryRefreshInterval;
- (id)entryWithIdentifier:(id)arg1;
- (void)_internetAvailableDidChangeNotification:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

