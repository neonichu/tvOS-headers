//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABPredicate.h>

#import <AddressBook/DASearchQueryConsumer-Protocol.h>

@class DAContactsSearchQuery, DADConnection, NSConditionLock, NSMutableArray, NSString;
@protocol ABPredicateDelegate;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer>
{
    void *_source;
    DADConnection *_connection;
    DAContactsSearchQuery *_searchQuery;
    NSMutableArray *_searchResults;
    NSConditionLock *_doneLock;
    int _error;
    _Bool _includeSourceInResults;
    _Bool _includePhotosInResults;
    NSString *_accountIdentifier;
    NSString *_searchString;
    id <ABPredicateDelegate> _delegate;
}

@property(nonatomic) id <ABPredicateDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool includePhotosInResults; // @synthesize includePhotosInResults=_includePhotosInResults;
@property(nonatomic) _Bool includeSourceInResults; // @synthesize includeSourceInResults=_includeSourceInResults;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)_searchQueryIsDone;
- (int)_errorForDAStatusCode:(long long)arg1;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 ranked:(_Bool)arg2 inAddressBook:(void *)arg3 withDelegate:(id)arg4;
- (void)runPredicateWithDelegate:(id)arg1;
- (void)runPredicate;
@property(retain, nonatomic) DADConnection *connection;
@property(readonly, nonatomic) int error;
@property(nonatomic) void *source;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 source:(void *)arg2 account:(id)arg3;
- (id)initWithSearchString:(id)arg1 source:(void *)arg2 account:(id)arg3 includeSourceInResults:(_Bool)arg4;
- (id)initWithSearchString:(id)arg1 source:(void *)arg2 account:(id)arg3 includeSourceInResults:(_Bool)arg4 includePhotosInResults:(_Bool)arg5;

@end

