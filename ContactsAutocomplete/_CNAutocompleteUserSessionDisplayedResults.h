//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteFetchRequest, NSMutableDictionary;

@interface _CNAutocompleteUserSessionDisplayedResults : NSObject
{
    CNAutocompleteFetchRequest *_request;
    NSMutableDictionary *_datesByBatchIndexes;
}

@property(retain, nonatomic) NSMutableDictionary *datesByBatchIndexes; // @synthesize datesByBatchIndexes=_datesByBatchIndexes;
@property(readonly, nonatomic) CNAutocompleteFetchRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)relevantForRequest:(id)arg1;
- (void)didReceiveBatch:(unsigned long long)arg1;
- (id)initWithRequest:(id)arg1;

@end

