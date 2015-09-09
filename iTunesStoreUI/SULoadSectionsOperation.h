//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStoreUI/ISURLOperationDelegate-Protocol.h>

@class NSString, SUClientInterface, SUSectionsResponse;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate>
{
    NSString *_activeSectionVersionString;
    SUClientInterface *_clientInterface;
    SUSectionsResponse *_sectionsResponse;
    _Bool _shouldUseCache;
}

- (void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2;
- (void)_setSectionsResponse:(id)arg1;
- (_Bool)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (_Bool)_loadSectionsFromCacheForVersion:(id)arg1;
- (id)_cachePathForVersion:(id)arg1 create:(_Bool)arg2;
- (void)run;
@property _Bool shouldUseCache;
@property(copy) NSString *activeSectionVersionString;
@property(readonly) SUSectionsResponse *sectionsResponse;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

