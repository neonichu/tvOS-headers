//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class GSAddition, NSData, NSDictionary, NSError, NSURL, QLThumbnailAddition;
@protocol QLThumbnailGenerationRequest;

@interface QLThumbnailStoreRetrievalOperation : NSOperation
{
    NSURL *_documentURL;
    NSError *_error;
    _Bool _finished;
    _Bool _executing;
    _Bool _allowsThumbnailGeneration;
    _Bool _generateThumbnailsAtBackgroundPriority;
    QLThumbnailAddition *_addition;
    id <QLThumbnailGenerationRequest> _thumbnailRequest;
    NSURL *_destinationURL;
}

+ (_Bool)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1;
@property _Bool generateThumbnailsAtBackgroundPriority; // @synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority;
@property _Bool allowsThumbnailGeneration; // @synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) _Bool thumbnailWasAutomaticallyGenerated;
@property(readonly) GSAddition *genStoreAddition;
@property(readonly) NSData *serializedQuickLookMetadataDictionary;
@property(readonly) NSDictionary *thumbnailImagesDictionary;
- (void)_finishWithError:(id)arg1;
- (void)afterThumbnailIsPutInGenstore;
- (void)_afterThumbnailIsGenerated;
- (void)main;
- (void)_generateThumbnail;
- (void)start;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1;
- (_Bool)_finishIfCancelled;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (id)initWithDocumentAtURL:(id)arg1;
- (id)init;
- (_Bool)isConcurrent;

@end

