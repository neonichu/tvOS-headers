//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADEventInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>
{
}

+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
+ (_Bool)requiresEventOrReminderAccess;
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg1 onDay:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetBirthdayContactIdentifierForEvent:(CDStruct_1ef3fb1f)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseActOnSuggestedEvent:(CDStruct_1ef3fb1f)arg1 action:(int)arg2 validator:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseActOnSuggestedEvent:(CDStruct_1ef3fb1f)arg1 action:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)_CADDatabaseCanModifySuggestedEventCalendar;
- (void)CADDatabaseCanModifySuggestedEventCalendar:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1;
- (void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(id)arg1 timeZone:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseGetCountOfNotifiableEvents:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(CDStruct_1ef3fb1f)arg1;
- (void)CADDatabaseGetDefaultCalendarForNewEventsWithReply:(CDUnknownBlockType)arg1;
- (CDStruct_1ef3fb1f)_getDefaultCalendarIDForNewEvents;
- (void)CADDatabaseExportEventAsICS:(CDStruct_1ef3fb1f)arg1 reply:(CDUnknownBlockType)arg2;

@end

