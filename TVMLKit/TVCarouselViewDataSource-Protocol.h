//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class TVCarouselView, UICollectionViewCell;

@protocol TVCarouselViewDataSource <NSObject>
- (UICollectionViewCell *)carouselView:(TVCarouselView *)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCarouselView:(TVCarouselView *)arg1;
@end

