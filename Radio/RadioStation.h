//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/RadioManagedObjectWrapperProtocol-Protocol.h>

@class NSArray, NSData, NSDictionary, NSManagedObject, NSString, NSURL, RadioArtworkCollection, RadioModel;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol>
{
    _Bool _databaseBacked;
    _Bool _editEnabled;
    _Bool _isExplicit;
    _Bool _featured;
    _Bool _gatewayVideoAdEnabled;
    _Bool _premiumPlacement;
    _Bool _shared;
    _Bool _sharingEnabled;
    _Bool _sponsored;
    _Bool _subscribed;
    _Bool _hasSkipRules;
    _Bool _likesEnabled;
    _Bool _previewOnly;
    _Bool _skipEnabled;
    _Bool _virtualPlayEnabled;
    int _skipFrequency;
    int _sortOrder;
    int _subscriberCount;
    NSManagedObject *_managedObject;
    RadioModel *_model;
    NSArray *_trackPlaybackDescriptorQueue;
    long long _adamID;
    NSData *_adData;
    NSURL *_artworkURL;
    NSData *_artworkURLData;
    NSString *_coreSeedName;
    NSDictionary *_debugDictionary;
    NSArray *_editableFields;
    unsigned long long _impressionThreshold;
    NSString *_name;
    long long _persistentID;
    id _seedTracks;
    NSString *_shareToken;
    NSString *_skipIdentifier;
    double _skipInterval;
    NSArray *_skipTimestamps;
    long long _songMixType;
    NSString *_stationDescription;
    NSString *_stationHash;
    NSString *_stationStringID;
    long long _stationID;
    NSURL *_streamURL;
    NSURL *_streamCertificateURL;
    NSURL *_streamKeyURL;
}

@property(readonly, nonatomic) RadioModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSManagedObject *managedObject; // @synthesize managedObject=_managedObject;
@property(readonly, nonatomic, getter=isDatabaseBacked) _Bool databaseBacked; // @synthesize databaseBacked=_databaseBacked;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *trackPlaybackDescriptorQueue; // @synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue;
@property(readonly, nonatomic, getter=isPreview) _Bool preview;
@property(readonly, copy, nonatomic) NSDictionary *feedbackDictionaryRepresentation;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)artworkURLForSize:(struct CGSize)arg1 expectedSize:(struct CGSize *)arg2;
@property(readonly, nonatomic) RadioArtworkCollection *artworkCollection;
@property(nonatomic) _Bool virtualPlayEnabled; // @synthesize virtualPlayEnabled=_virtualPlayEnabled;
@property(nonatomic) int subscriberCount; // @synthesize subscriberCount=_subscriberCount;
@property(retain, nonatomic) NSURL *streamKeyURL; // @synthesize streamKeyURL=_streamKeyURL;
@property(retain, nonatomic) NSURL *streamCertificateURL; // @synthesize streamCertificateURL=_streamCertificateURL;
@property(retain, nonatomic) NSURL *streamURL; // @synthesize streamURL=_streamURL;
@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(copy, nonatomic) NSString *stationDescription; // @synthesize stationDescription=_stationDescription;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) long long songMixType; // @synthesize songMixType=_songMixType;
@property(copy, nonatomic) NSArray *skipTimestamps; // @synthesize skipTimestamps=_skipTimestamps;
@property(nonatomic) double skipInterval; // @synthesize skipInterval=_skipInterval;
@property(copy, nonatomic) NSString *skipIdentifier; // @synthesize skipIdentifier=_skipIdentifier;
@property(nonatomic) int skipFrequency; // @synthesize skipFrequency=_skipFrequency;
@property(nonatomic) _Bool skipEnabled; // @synthesize skipEnabled=_skipEnabled;
@property(copy, nonatomic) NSString *shareToken; // @synthesize shareToken=_shareToken;
@property(retain, nonatomic) id seedTracks; // @synthesize seedTracks=_seedTracks;
@property(nonatomic, getter=isPreviewOnly) _Bool previewOnly; // @synthesize previewOnly=_previewOnly;
@property(nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool likesEnabled; // @synthesize likesEnabled=_likesEnabled;
@property(nonatomic) _Bool hasSkipRules; // @synthesize hasSkipRules=_hasSkipRules;
@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(nonatomic, getter=isSponsored) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(nonatomic, getter=isSharingEnabled) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic, getter=isShared) _Bool shared; // @synthesize shared=_shared;
@property(nonatomic, getter=isPremiumPlacement) _Bool premiumPlacement; // @synthesize premiumPlacement=_premiumPlacement;
@property(nonatomic, getter=isGatewayVideoAdEnabled) _Bool gatewayVideoAdEnabled; // @synthesize gatewayVideoAdEnabled=_gatewayVideoAdEnabled;
@property(nonatomic, getter=isFeatured) _Bool featured; // @synthesize featured=_featured;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) unsigned long long impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property(nonatomic) _Bool editEnabled; // @synthesize editEnabled=_editEnabled;
@property(retain, nonatomic) NSArray *editableFields; // @synthesize editableFields=_editableFields;
@property(copy, nonatomic) NSDictionary *debugDictionary; // @synthesize debugDictionary=_debugDictionary;
@property(copy, nonatomic) NSString *coreSeedName; // @synthesize coreSeedName=_coreSeedName;
@property(copy, nonatomic) NSData *artworkURLData; // @synthesize artworkURLData=_artworkURLData;
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(retain, nonatomic) NSData *adData; // @synthesize adData=_adData;
@property(nonatomic) long long adamID; // @synthesize adamID=_adamID;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithModel:(id)arg1 managedObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

