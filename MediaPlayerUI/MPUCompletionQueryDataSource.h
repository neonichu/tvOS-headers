//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUQueryDataSource.h>

@class NSMutableDictionary, NSMutableSet;
@protocol MPUCompletionQueryDataSourceDelegate;

@interface MPUCompletionQueryDataSource : MPUQueryDataSource
{
    _Bool _hasAutomaticallyLoadedCompletions;
    NSMutableDictionary *_tokens;
    NSMutableDictionary *_completions;
    NSMutableSet *_overlayedSectionEntityPIDs;
    NSMutableDictionary *_statuses;
    NSMutableDictionary *_variants;
    _Bool _shouldShowCompletions;
    _Bool _shouldAutomaticallyLoadCompletions;
    id <MPUCompletionQueryDataSourceDelegate> _completionDelegate;
}

@property(nonatomic) __weak id <MPUCompletionQueryDataSourceDelegate> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
@property(nonatomic) _Bool shouldAutomaticallyLoadCompletions; // @synthesize shouldAutomaticallyLoadCompletions=_shouldAutomaticallyLoadCompletions;
@property(nonatomic) _Bool shouldShowCompletions; // @synthesize shouldShowCompletions=_shouldShowCompletions;
- (void).cxx_destruct;
- (void)_setCompletion:(id)arg1 forSectionAtIndex:(long long)arg2;
- (void)_setToken:(unsigned long long)arg1 forSectionAtIndex:(long long)arg2;
- (long long)_tokenForSectionAtIndex:(long long)arg1;
- (long long)_pidForSectionAtIndex:(long long)arg1;
- (void)_willInvalidateWithContext:(id)arg1;
- (void)_didInvalidateWithContext:(id)arg1;
- (void)setVariant:(long long)arg1 forSectionAtIndex:(long long)arg2;
- (long long)variantForSectionAtIndex:(long long)arg1;
- (_Bool)hasVariantsForSectionAtIndex:(long long)arg1;
- (void)setCompletionOfferStatus:(long long)arg1 forSectionAtIndex:(long long)arg2;
- (long long)completionOfferStatusForSectionAtIndex:(long long)arg1;
- (_Bool)hasCompletionOfferForSectionAtIndex:(unsigned long long)arg1;
- (id)completionOfferingForSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSectionForCompletionOffering:(id)arg1;
- (id)sectionEntityWithoutOverlayAtIndex:(unsigned long long)arg1;
- (id)sectionEntityAtIndex:(unsigned long long)arg1;
- (_Bool)isShowingCompletionOverlayForSectionAtIndex:(unsigned long long)arg1;
- (void)removeAllCompletionOverlays;
- (void)removeOverlayCompletionForSectionAtIndex:(unsigned long long)arg1;
- (void)overlayCompletionForSectionAtIndex:(unsigned long long)arg1;
- (void)cancelCompletionOfferingWithToken:(unsigned long long)arg1;
- (void)loadCompletionOfferingForSectionAtIndex:(unsigned long long)arg1;
- (void)loadCompletionOfferings;
@property(readonly, nonatomic) _Bool shouldLoadCompletionArtwork;

@end

