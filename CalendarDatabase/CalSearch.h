//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol CalSearchDataSink;

@interface CalSearch : NSObject
{
    struct CalDatabase *_database;
    struct CalFilter *_filter;
    struct __CFString *_searchString;
    int _seed;
    id <CalSearchDataSink> _dataSink;
    _Bool _dateToStartShowingResultsSentToDataSink;
    _Bool _moreResultsAvailable;
    struct __CFArray *_partialResults;
    struct __CFArray *_partialCachedOccurrences;
    struct __CFArray *_partialCachedDays;
    struct __CFArray *_partialCachedDaysIndexes;
    struct __CFSet *_matchedEventsSet;
    struct __CFSet *_matchedParticipantsSet;
    struct __CFSet *_matchedLocationsSet;
    _Bool _stopLoadingResults;
    struct _opaque_pthread_mutex_t _dataSourceDeallocLock;
    _Bool _implementsCancellationCallback;
    _Bool _searchParticipants;
    _Bool _searchLocations;
    _Bool _searchAttendees;
}

@property _Bool searchAttendees; // @synthesize searchAttendees=_searchAttendees;
@property _Bool searchLocations; // @synthesize searchLocations=_searchLocations;
@property _Bool searchParticipants; // @synthesize searchParticipants=_searchParticipants;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext *)arg1;
- (struct CalEventOccurrenceSearchContext *)_createSearchContext;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext *)arg1;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext *)arg1;
- (struct CalEventIdsSearchContext *)_createEventIdsSearchContext;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext *)arg1;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext *)arg1;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext *)arg1;
- (void)_addMatchedLocationIds:(struct __CFArray *)arg1;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext *)arg1;
- (struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg1;
- (struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray *)arg1;
- (void)_addMatchedEventIds:(struct __CFArray *)arg1;
- (void)_startLoadingResults;
- (int)seed;
- (_Bool)moreResultsAvailable;
- (void)stopSearching;
- (void)startSearching;
- (void)dealloc;
- (id)initWithDatabase:(struct CalDatabase *)arg1 filter:(struct CalFilter *)arg2 dataSink:(id)arg3;

@end

