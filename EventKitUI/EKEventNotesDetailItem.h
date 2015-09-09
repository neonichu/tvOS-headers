//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, UITextView;

__attribute__((visibility("hidden")))
@interface EKEventNotesDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    UITextView *_notesView;
    _Bool _cellNeedsUpdate;
}

- (void).cxx_destruct;
- (unsigned long long)maximumNumberOfSubItems;
- (_Bool)requiresLayoutForSubitemCount;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)_updateCellIfNeeded;
- (unsigned long long)numberOfSubitems;
- (void)setCellPosition:(int)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

