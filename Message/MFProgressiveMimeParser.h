//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMimePart, NSArray, NSData, NSMutableData;

@interface MFProgressiveMimeParser : NSObject
{
    NSMutableData *_data;
    NSArray *_preserveHeaders;
    id _delegate;
    id _context;
    unsigned long long _cursor;
    unsigned long long _lastLength;
    MFMimePart *_topLevelPart;
    MFMimePart *_currentPart;
    NSData *_currentBoundary;
    struct {
        unsigned int delegateBeganMimePart:1;
        unsigned int delegateFinishedMimePart:1;
        unsigned int delegateBeganData:1;
        unsigned int delegateFailed:1;
        unsigned int state:3;
    } _parserFlags;
}

- (void)_reportError:(id)arg1;
- (void)_continueParsing;
- (void)_continueParsingBody;
- (id)_currentBoundary;
- (void)_continueParsingHeaders;
- (void)_continueParsingStartOfPart;
- (void)_initializeTopLevelPartWithHeaders:(id)arg1;
- (id)data;
- (id)currentPart;
- (id)topLevelPart;
- (void)noteDataLengthChanged:(unsigned int)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3;

@end

