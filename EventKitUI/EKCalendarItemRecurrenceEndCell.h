//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDate, UIButton, UIDatePicker;

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell
{
    UIButton *_neverButton;
    UIDatePicker *_datePicker;
}

@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(readonly, nonatomic) UIButton *neverButton; // @synthesize neverButton=_neverButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) NSDate *date;
- (id)init;

@end
