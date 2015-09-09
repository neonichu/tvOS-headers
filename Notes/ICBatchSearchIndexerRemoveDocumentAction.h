//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICBatchSearchIndexerDocumentAction.h>

@class ICSearchIndexableIdentifiers;

@interface ICBatchSearchIndexerRemoveDocumentAction : ICBatchSearchIndexerDocumentAction
{
    ICSearchIndexableIdentifiers *_searchIndexableIdentifiers;
}

@property(copy, nonatomic) ICSearchIndexableIdentifiers *searchIndexableIdentifiers; // @synthesize searchIndexableIdentifiers=_searchIndexableIdentifiers;
- (void).cxx_destruct;
- (id)processedIdentifiersByPerformingWithBatchSearchIndexer:(id)arg1;
- (_Bool)shouldProcessImmediately;
- (id)initWithSearchIndexableIdentifiers:(id)arg1;

@end

