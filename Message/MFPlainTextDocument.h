//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString;

@interface MFPlainTextDocument : NSObject
{
    NSMutableString *_text;
    NSMutableArray *_fragments;
}

- (void)appendArchivedRepresentation:(id)arg1;
- (id)archivedRepresentation;
- (id)string;
- (void)getString:(id *)arg1 quoteLevel:(unsigned int *)arg2 ofFragmentAtIndex:(unsigned long long)arg3;
- (unsigned long long)fragmentCount;
- (void)appendString:(id)arg1 withQuoteLevel:(unsigned int)arg2;
- (void)dealloc;
- (id)quotedString:(unsigned int)arg1;
- (void)getFormatFlowedString:(id *)arg1 insertedTrailingSpaces:(_Bool *)arg2 encoding:(unsigned int)arg3;

@end

