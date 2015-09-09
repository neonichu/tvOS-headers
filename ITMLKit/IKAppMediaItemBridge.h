//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, IKJSMediaItem, NSArray, NSNumber, NSString;
@protocol IKAppMediaItem;

@interface IKAppMediaItemBridge : NSObject
{
    id <IKAppMediaItem> _appMediaItem;
    IKAppContext *_appContext;
    IKJSMediaItem *_jsMediaItem;
}

@property(readonly, nonatomic) __weak IKJSMediaItem *jsMediaItem; // @synthesize jsMediaItem=_jsMediaItem;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) id <IKAppMediaItem> appMediaItem; // @synthesize appMediaItem=_appMediaItem;
- (void).cxx_destruct;
- (void)loadKeyDataForURL:(id)arg1 keyRequestData:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)loadContentIdentifierDataForURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)loadCertificateDataForURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)prepareForLoadingWithCallback:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSNumber *resumeTime;
@property(nonatomic) _Bool isExplicit;
@property(retain, nonatomic) NSString *ratingBadge;
@property(retain, nonatomic) NSString *artworkImageURL;
@property(retain, nonatomic) NSString *contentRatingDomain;
@property(retain, nonatomic) NSNumber *contentRatingRanking;
@property(retain, nonatomic) NSString *description;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSArray *chapterGroups;
@property(retain, nonatomic) NSArray *interstitials;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSString *url;
- (void)dealloc;
- (id)initWithJSMediaItem:(id)arg1;

@end

