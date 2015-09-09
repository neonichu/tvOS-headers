//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICBatchSearchIndexerDocumentAction.h>

@class ICSearchIndexableIdentifier, NSArray;

@interface ICBatchSearchIndexerAddDocumentAction : ICBatchSearchIndexerDocumentAction
{
    ICSearchIndexableIdentifier *_searchIndexableIdentifier;
    NSArray *_searchStrings;
}

@property(copy, nonatomic) NSArray *searchStrings; // @synthesize searchStrings=_searchStrings;
@property(copy, nonatomic) ICSearchIndexableIdentifier *searchIndexableIdentifier; // @synthesize searchIndexableIdentifier=_searchIndexableIdentifier;
- (void).cxx_destruct;
- (id)processedIdentifiersByPerformingWithBatchSearchIndexer:(id)arg1;
- (id)searchIndexableIdentifiers;
- (_Bool)shouldProcessImmediately;
- (id)initWithSearchIndexableIdentifier:(id)arg1 searchStrings:(id)arg2;

@end

