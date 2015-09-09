//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalCalendarObserver-Protocol.h>

@class EKEventStore, NSString, SGSqlEntityStore;

@interface SGEKCalendarAdapter : NSObject <SGJournalCalendarObserver>
{
    EKEventStore *_externalEKStore;
    SGSqlEntityStore *_store;
}

+ (id)defaultEKStore;
@property(nonatomic) __weak SGSqlEntityStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)_removeEKEvent:(id)arg1 store:(id)arg2;
- (void)_removeEvent:(id)arg1;
- (_Bool)_isEKEventFromSuggestedCalendar:(id)arg1 ekStore:(id)arg2;
- (_Bool)_cancelEKEvent:(id)arg1 ekStore:(id)arg2 error:(id *)arg3;
- (_Bool)_updateEKEvent:(id)arg1 withEvent:(id)arg2 ekStore:(id)arg3 error:(id *)arg4;
- (void)_addEKEventToCalendar:(id)arg1 storageEvent:(id)arg2 ekStore:(id)arg3;
- (id)_eventsAssociatedWithStorageEvent:(id)arg1 store:(id)arg2;
- (void)calendarDeleted;
- (void)orphanEvent:(id)arg1;
- (void)rejectEvent:(id)arg1;
- (void)confirmEvent:(id)arg1;
- (void)cancelEvent:(id)arg1;
- (void)_updateEvent:(id)arg1 withValuesFrom:(id)arg2 ekStore:(id)arg3;
- (void)addEvent:(id)arg1;
- (id)ekStore;
- (id)initWithSGSqlEntityStore:(id)arg1 andEKStore:(id)arg2;
- (id)initWithSGSqlEntityStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

