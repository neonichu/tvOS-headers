//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPTextObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable>
{
    CPCharSequence *charSequence;
    CDStruct_2e2afed4 *wordArray;
    unsigned int wordCount;
    struct CPInlineContainer *inlineList;
    int lineNumber;
    int columnNumber;
    double baseline;
    _Bool baseLineIsNull;
    _Bool hasBeenSplit;
    _Bool hasBeenProcessed;
    _Bool maySplit;
    _Bool hasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    int levels;
    float maximumLetterGap;
    float maximumWordGap;
    int tabsBefore;
    _Bool irregular;
    unsigned int leftSpacerIndex;
    unsigned int rightSpacerIndex;
    _Bool isListItem;
    unsigned int listSpacerIndex;
    _Bool lineBreakAfter;
    struct CPPDFStyle *uniformStyle;
    unsigned short uniformStyleFlags;
    double monospaceWidth;
    unsigned int *spacesBefore;
    _Bool disposed;
}

@property(nonatomic) _Bool lineBreakAfter; // @synthesize lineBreakAfter;
@property(nonatomic) unsigned int listSpacerIndex; // @synthesize listSpacerIndex;
@property(nonatomic) _Bool isListItem; // @synthesize isListItem;
@property(nonatomic) unsigned int rightSpacerIndex; // @synthesize rightSpacerIndex;
@property(nonatomic) unsigned int leftSpacerIndex; // @synthesize leftSpacerIndex;
- (double)medianFontSize;
- (_Bool)hasDropCap;
- (long long)topIsAbove:(id)arg1;
- (id)attributes;
- (void)setIrregular:(_Bool)arg1;
- (_Bool)irregular;
- (void)setMaximumWordGap:(float)arg1;
- (float)maximumWordGap;
- (void)setMaximumLetterGap:(float)arg1;
- (float)maximumLetterGap;
- (void)recomputeLevels;
- (void)setLevels:(int)arg1;
- (int)levels;
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;
- (double)monospaceWidth;
- (_Bool)isMonospaced;
- (_Bool)styleIsUniform:(struct CPPDFStyle **)arg1 styleFlags:(unsigned short)arg2;
- (void)recomputeBaseline;
- (void)translateObjectYBy:(double)arg1;
- (_Bool)isIndivisible;
- (void)setBaselineToNull;
- (void)setBaseline:(double)arg1;
- (double)baseline;
- (_Bool)hyphenated;
- (struct CGPoint)anchor;
- (_Bool)overlapsHorizontally:(struct CGRect)arg1;
- (_Bool)overlapsWith:(id)arg1;
- (long long)baseLineDescending:(id)arg1;
- (long long)baseLineAscending:(id)arg1;
- (struct CGRect)bounds;
- (void)fitBoundsToChildren;
- (int)tabsBefore;
- (void)setTabsBefore:(int)arg1;
- (_Bool)hasTabs;
- (void)setHasTabs:(_Bool)arg1;
- (void)accept:(id)arg1;
- (void)setColumnBreaks:(id)arg1;
- (id)columnBreaks;
- (_Bool)hasBeenProcessed;
- (void)setHasBeenProcessed:(_Bool)arg1;
- (_Bool)hasBeenSplit;
- (void)setHasBeenSplit:(_Bool)arg1;
- (id)properties;
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)removeTextLines:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;
- (_Bool)changesFontAt:(id)arg1;
- (_Bool)hasJustifiedAlignment;
- (int)align;
- (long long)zOrder;
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;
- (struct CPInlineContainer *)inlineList;
- (unsigned int)inlineCount;
- (CDStruct_2e2afed4 *)lastWord;
- (CDStruct_2e2afed4 *)firstWord;
- (CDStruct_2e2afed4 *)wordAtIndex:(unsigned int)arg1;
- (struct CGRect)boundsOfWordAtIndex:(unsigned int)arg1;
- (unsigned int)wordCount;
- (CDStruct_2e2afed4 *)wordArrayOfSize:(unsigned int)arg1;
- (CDStruct_2e2afed4 *)wordArray;
- (id)charSequence;
- (void)setCharSequence:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;

@end

