//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MPUExtrasCarouselViewController;
@protocol MPUExtrasCarouselCollectionViewCell;

@protocol MPUExtrasCarouselViewControllerDataSource
- (unsigned long long)carouselSize;
- (void)carouselViewController:(MPUExtrasCarouselViewController *)arg1 configureCarouselCollectionViewCell:(id <MPUExtrasCarouselCollectionViewCell>)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize)arg4;
- (unsigned long long)numberOfItemsInCarouselViewController:(MPUExtrasCarouselViewController *)arg1;
@end

