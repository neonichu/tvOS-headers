//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

@class SKUIEmbeddedMediaView;

@interface SKUIMediaCollectionViewCell : SKUICollectionViewCell
{
    struct UIEdgeInsets _contentInset;
    SKUIEmbeddedMediaView *_mediaView;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) SKUIEmbeddedMediaView *mediaView;

@end

