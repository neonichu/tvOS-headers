//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource
{
    NSString *_title;
    NSString *_externalID;
}

- (void).cxx_destruct;
- (id)remindersListFromStore:(id)arg1;
- (_Bool)_isMatchForRemindersList:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRemindersList:(id)arg1;
- (id)initWithRemindersList:(id)arg1 forceLocal:(_Bool)arg2;

@end

