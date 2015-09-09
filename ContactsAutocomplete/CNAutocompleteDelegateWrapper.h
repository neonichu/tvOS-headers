//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteFetchDelegate-Protocol.h>
#import <ContactsAutocomplete/CNCancelable-Protocol.h>

@class CNAutocompleteFetchRequest, CNAutocompleteQueryResponsePreparer, CNAutocompleteUserSession, CNCancelationToken, NSString;
@protocol CNAutocompleteFetchDelegate, CNScheduler;

@interface CNAutocompleteDelegateWrapper : NSObject <CNAutocompleteFetchDelegate, CNCancelable>
{
    id <CNAutocompleteFetchDelegate> _delegate;
    id <CNScheduler> _scheduler;
    CNAutocompleteQueryResponsePreparer *_responsePreparer;
    unsigned long long _openNetworkActivityCalls;
    CNCancelationToken *_cancelationToken;
    CNAutocompleteUserSession *_userSession;
    CNAutocompleteFetchRequest *_fetchRequest;
}

+ (id)responseScheduler;
- (void).cxx_destruct;
- (void)setPriorityResultsFuture:(id)arg1;
- (void)cancel;
- (void)queueUncancelableMessageToDelegate:(CDUnknownBlockType)arg1;
- (void)queueMessageToDelegate:(CDUnknownBlockType)arg1;
- (_Bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)queueDidEndNetworkActivityMessageForFetch:(id)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (id)suppressResultsWithAddresses:(id)arg1;
- (id)askDelegateToAdjustResults;
- (id)sortResults;
- (id)addDiagnosticLog:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 scheduler:(id)arg4;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

