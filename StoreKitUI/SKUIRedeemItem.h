//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIItem.h>

@class NSString, SKUIArtworkList;

@interface SKUIRedeemItem : SKUIItem
{
    SKUIArtworkList *artworks;
    long long itemIdentifier;
    NSString *title;
    long long itemKind;
}

@property(nonatomic) long long itemKind; // @synthesize itemKind;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) long long itemIdentifier; // @synthesize itemIdentifier;
@property(retain, nonatomic) SKUIArtworkList *artworks; // @synthesize artworks;
- (void).cxx_destruct;
- (id)largestArtworkURL;
- (id)artworkURLForSize:(long long)arg1;
- (struct _NSRange)ageBandRange;

@end

