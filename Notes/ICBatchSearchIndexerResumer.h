//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICBatchSearchIndexer, NSArray;

@interface ICBatchSearchIndexerResumer : NSObject
{
    _Bool _cancelled;
    ICBatchSearchIndexer *_searchIndexer;
    NSArray *_searchIndexes;
}

@property(copy, nonatomic) NSArray *searchIndexes; // @synthesize searchIndexes=_searchIndexes;
@property(nonatomic) __weak ICBatchSearchIndexer *searchIndexer; // @synthesize searchIndexer=_searchIndexer;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (id)initWithSearchIndexer:(id)arg1;

@end

