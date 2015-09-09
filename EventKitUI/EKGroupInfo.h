//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject
{
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    NSString *_typeTitle;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    _Bool _selected;
    _Bool _showSelectAllButton;
    EKSource *_source;
}

@property(nonatomic) _Bool showSelectAllButton; // @synthesize showSelectAllButton=_showSelectAllButton;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) EKSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) int sortOrder;
@property(readonly, nonatomic) _Bool isSubscribed;
@property(readonly, nonatomic) _Bool showCalendarNameIfSolitary;
@property(readonly, nonatomic) _Bool showAddCalendarButton;
- (void)selectNone;
- (void)selectAll;
@property(readonly, copy, nonatomic) NSSet *selectedCalendarSet;
@property(readonly, copy, nonatomic) NSSet *calendarSet;
- (id)copyCalendars;
- (id)calendarAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numSelectedCalendars;
@property(readonly, nonatomic) unsigned long long numSelectableCalendars;
@property(readonly, nonatomic) unsigned long long numCalendars;
@property(readonly, retain, nonatomic) NSArray *calendarInfos;
@property(readonly, copy, nonatomic) NSString *typeTitle;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (id)titleForBeginningOfSentence:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *title;
- (void)removeCalendar:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (void)insertDeclinedEventsItem;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

