//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIOfferView;

@interface SKUIOfferCollectionViewCell : SKUICollectionViewCell <SKUIViewElementView>
{
    SKUIOfferView *_offerView;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

