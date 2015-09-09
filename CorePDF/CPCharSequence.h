//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPCopying-Protocol.h>
#import <CorePDF/CPDisposable-Protocol.h>
#import <CorePDF/NSCopying-Protocol.h>

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable>
{
    unsigned int length;
    struct CPPDFChar **charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    _Bool wasMerged;
}

- (struct CGRect)boundsFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (struct CGRect)bounds;
- (_Bool)map:(CDUnknownFunctionPointerType)arg1 whereNeighborsWith:(id)arg2 passing:(void *)arg3;
- (_Bool)mapToPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapWithIndex:(CDUnknownFunctionPointerType)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3 passing:(void *)arg4;
- (_Bool)mapWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)map:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)removeToSubsequence:(id)arg1 ifTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)copyToSubsequence:(id)arg1 ifTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)copyToSubsequence:(id)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3;
- (_Bool)removeSubsequences:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)splitToSubsequences:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (id)newSubsequenceFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (_Bool)wasMerged;
- (void)merge:(id)arg1 by:(CDUnknownFunctionPointerType)arg2;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)arg1;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)arg1;
- (void)sortBy:(CDUnknownFunctionPointerType)arg1;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)removeFrom:(unsigned int)arg1;
- (void)removeCharAtIndex:(unsigned int)arg1;
- (void)replaceCharAtIndex:(unsigned int)arg1 withChar:(struct CPPDFChar *)arg2;
- (void)removeAllChars;
- (void)removeChar;
- (void)addCharsFromSequence:(id)arg1;
- (void)addChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2 ifTrue:(CDUnknownFunctionPointerType)arg3 passing:(void *)arg4;
- (void)addChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2;
- (void)addChar:(struct CPPDFChar *)arg1;
- (struct CPPDFChar **)charArray;
- (struct CPPDFChar *)charAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)resize:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initSuper;
- (id)initWithChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2;
- (id)initWithSizeFor:(unsigned int)arg1;

@end

