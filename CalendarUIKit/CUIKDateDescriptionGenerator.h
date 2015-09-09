//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDateFormatter, NSMutableDictionary;

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator
{
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_abbrevDayFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_standardTimeFormatter;
    NSDateFormatter *_customFormatter;
    NSDateFormatter *_fullStyleDateFormatter;
    NSDateFormatter *_dayOfWeekFormatter;
    NSMutableDictionary *_longFormatters;
}

+ (id)sharedGenerator;
- (void).cxx_destruct;
- (id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4;
- (id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2;
- (id)_stringForDateTime:(id)arg1 timeZone:(id)arg2;
- (id)_stringForTime:(id)arg1;
- (id)dateStringForDate:(id)arg1 allDay:(_Bool)arg2 standalone:(_Bool)arg3 shortFormat:(_Bool)arg4;
- (id)dateStringForDate:(id)arg1 allDay:(_Bool)arg2 shortFormat:(_Bool)arg3;
- (id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)_timeStringForDate:(id)arg1;
- (id)_dateStringForDate:(id)arg1 allDay:(_Bool)arg2 shortFormat:(_Bool)arg3 lowercase:(_Bool)arg4;
- (id)_stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(_Bool)arg3 lowerCase:(_Bool)arg4;
- (id)formatterForLongFormat:(id)arg1;
- (id)_dateFormatterWithLongFormat:(id)arg1;
- (id)dayOfWeekFormatter;
- (id)fullStyleDateFormatter;
- (id)standardTimeFormatter;
- (id)abbreviatedDayFormatter;
- (id)dayFormatter;
- (id)timeFormatter;
- (id)_customFormatter;
- (void)_invalidateFormatters;
- (void)dealloc;
- (id)init;

@end

