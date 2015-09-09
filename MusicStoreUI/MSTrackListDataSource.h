//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicStoreUI/MSStructuredPageTableDataSource.h>

@interface MSTrackListDataSource : MSStructuredPageTableDataSource
{
}

- (id)_stylesheetString;
- (long long)tableViewStyle;
- (id)placeholderCellForIndexPath:(id)arg1;
- (void)reloadCellContexts;
- (double)heightForPlaceholderCells;
- (id)headerViewForSection:(long long)arg1;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (_Bool)canShowItemOfferButtonForItem:(id)arg1;
- (_Bool)canShowPreviewForItem:(id)arg1;
- (_Bool)canDoubleTapIndexPath:(id)arg1;

@end
