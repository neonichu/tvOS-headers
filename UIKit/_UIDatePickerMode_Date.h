//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIDatePickerMode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Date : _UIDatePickerMode
{
    double _dateYearWidth;
    double _dateMonthWidth;
    double _dateDayWidth;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_dayFormat;
}

+ (unsigned long long)extractableCalendarUnits;
+ (long long)datePickerMode;
- (void).cxx_destruct;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (id)_dateForYearRow:(long long)arg1;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (void)noteCalendarChanged;
- (void)resetComponentWidths;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (id)localizedFormatString;
- (void)_shouldReset:(id)arg1;
- (long long)displayedCalendarUnits;

@end

