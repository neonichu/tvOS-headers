//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell
{
    UILabel *_recurrenceLabel;
    double _lastLayoutWidth;
}

- (void).cxx_destruct;
- (double)height;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)_myTableView;
- (void)setRecurrenceString:(id)arg1;
- (id)_recurrenceLabel;

@end

