//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVStarRatingView.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class TVLStarRatingElement;

@interface TVLStarRatingView : TVStarRatingView <ATVUpdatable>
{
    TVLStarRatingElement *_starRatingElement;
}

@property(retain, nonatomic) TVLStarRatingElement *starRatingElement; // @synthesize starRatingElement=_starRatingElement;
- (void).cxx_destruct;
- (void)updateWithFeedElement:(id)arg1;
- (id)currentFeedElement;
- (id)initWithStarRatingElement:(id)arg1;

@end

