//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNAutocompleteCalendarServerOperationFactory, CNStringTokenizer, EKEventStore, NSString;

@interface CNAutocompleteCalendarServerSearch : NSObject <CNAutocompleteSearch>
{
    EKEventStore *_eventStore;
    CNAutocompleteCalendarServerOperationFactory *_operationFactory;
    CNStringTokenizer *_tokenizer;
}

@property(retain, nonatomic) CNStringTokenizer *tokenizer; // @synthesize tokenizer=_tokenizer;
@property(readonly, nonatomic) CNAutocompleteCalendarServerOperationFactory *operationFactory; // @synthesize operationFactory=_operationFactory;
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (CDUnknownBlockType)resultTransformWithFactory:(id)arg1;
- (id)queryForFetchRequest:(id)arg1;
- (id)runQuery:(id)arg1 forSource:(id)arg2 resultsFactory:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEventStore:(id)arg1 operationFactory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

