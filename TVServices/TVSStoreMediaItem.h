//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSDataMediaItem.h>

@class NSObject, NSString, TVSDataItem, TVSDocumentLoader, TVSLeaseAgent, TVSSecureKeyDeliveryCoordinator;
@protocol TVSMediaItem;

@interface TVSStoreMediaItem : TVSDataMediaItem
{
    _Bool _isHLS;
    _Bool _bookmarksDisabled;
    _Bool _ignoreLeaseAgentStateChanges;
    NSString *_actionParams;
    NSString *_rentalID;
    TVSDataItem *_storeDataItem;
    TVSLeaseAgent *_leaseAgent;
    id _acquisitionToken;
    TVSSecureKeyDeliveryCoordinator *_secureKeyDeliveryCoordinator;
    TVSDocumentLoader *_trickPlayImageConfigDocumentLoader;
    NSObject<TVSMediaItem> *_scrubMediaItem;
    unsigned long long _loadingContext;
}

@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) NSObject<TVSMediaItem> *scrubMediaItem; // @synthesize scrubMediaItem=_scrubMediaItem;
@property(retain, nonatomic) TVSDocumentLoader *trickPlayImageConfigDocumentLoader; // @synthesize trickPlayImageConfigDocumentLoader=_trickPlayImageConfigDocumentLoader;
@property(retain, nonatomic) TVSSecureKeyDeliveryCoordinator *secureKeyDeliveryCoordinator; // @synthesize secureKeyDeliveryCoordinator=_secureKeyDeliveryCoordinator;
@property(nonatomic) _Bool ignoreLeaseAgentStateChanges; // @synthesize ignoreLeaseAgentStateChanges=_ignoreLeaseAgentStateChanges;
@property(retain, nonatomic) id acquisitionToken; // @synthesize acquisitionToken=_acquisitionToken;
@property(retain, nonatomic) TVSLeaseAgent *leaseAgent; // @synthesize leaseAgent=_leaseAgent;
@property(retain, nonatomic) TVSDataItem *storeDataItem; // @synthesize storeDataItem=_storeDataItem;
@property(nonatomic) _Bool bookmarksDisabled; // @synthesize bookmarksDisabled=_bookmarksDisabled;
@property(nonatomic) _Bool isHLS; // @synthesize isHLS=_isHLS;
@property(copy, nonatomic) NSString *rentalID; // @synthesize rentalID=_rentalID;
@property(copy, nonatomic) NSString *actionParams; // @synthesize actionParams=_actionParams;
- (void).cxx_destruct;
- (_Bool)_mediaItemPreparationCancelled:(unsigned long long)arg1;
- (void)_loadTrickPlayConfigURL;
- (_Bool)_requiresRentalKeys;
- (_Bool)_requiresLease;
- (_Bool)_requiresAcquisition;
- (void)_clearDownloadResponse;
- (void)_augmentMediaItemWithDownloadResponse:(id)arg1;
- (void)_startLeaseIfNecessary:(CDUnknownBlockType)arg1;
- (void)_fetchRentalWithCompletion:(CDUnknownBlockType)arg1;
- (void)_acquireItemWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_supportsBookmarks;
- (id)_dataItemValueForProperty:(id)arg1;
- (void)cleanUpMediaItem;
- (void)loadStreamingKeyForRequest:(id)arg1;
- (void)prepareForPlaybackInitiationWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)initWithRentalID:(id)arg1 isHLS:(_Bool)arg2;
- (id)initWithActionParams:(id)arg1 isHLS:(_Bool)arg2;
- (id)initWithDataItem:(id)arg1;

@end

