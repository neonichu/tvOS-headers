//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVArtworkVariantListing : NSObject
{
    NSArray *_artworkVariants;
}

@property(readonly, copy, nonatomic) NSArray *artworkVariants; // @synthesize artworkVariants=_artworkVariants;
- (void).cxx_destruct;
- (id)bestArtworkVariantOfType:(long long)arg1 forSize:(struct CGSize)arg2;
- (id)bestArtworkVariantForSize:(struct CGSize)arg1;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithArray:(id)arg1;

@end

