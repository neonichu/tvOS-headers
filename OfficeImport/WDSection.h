//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDSection : NSObject
{
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    WDDocument *mDocument;
    WDText *mText;
    WDText *mEvenPageHeader;
    WDText *mOddPageHeader;
    WDText *mFirstPageHeader;
    WDText *mEvenPageFooter;
    WDText *mOddPageFooter;
    WDText *mFirstPageFooter;
    CDStruct_a57204a6 mOriginalProperties;
    CDStruct_a57204a6 mTrackedProperties;
}

- (id)description;
- (_Bool)isFormattingChangeDateOverridden;
- (void)setFormattingChangeDate:(id)arg1;
- (id)formattingChangeDate;
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (_Bool)isFormattingChangedOverridden;
- (void)setFormattingChanged:(_Bool)arg1;
- (_Bool)formattingChanged;
- (_Bool)isBidiOverridden;
- (void)setBidi:(_Bool)arg1;
- (_Bool)bidi;
- (_Bool)isTitlePageOverridden;
- (void)setTitlePage:(_Bool)arg1;
- (_Bool)titlePage;
- (_Bool)isVerticalJustificationOverridden;
- (void)setVerticalJustification:(int)arg1;
- (int)verticalJustification;
- (_Bool)isColumnSpaceOverridden;
- (void)setColumnSpace:(long long)arg1;
- (long long)columnSpace;
- (_Bool)isColumnsEqualWidthOverridden;
- (void)setColumnsEqualWidth:(_Bool)arg1;
- (_Bool)columnsEqualWidth;
- (void)appendColumnSpace:(long long)arg1;
- (long long)columnSpaceAt:(unsigned int)arg1;
- (_Bool)isColumnWidthDefinedAt:(unsigned int)arg1;
- (_Bool)isLastColumnWidthDefined;
- (void)appendColumnWidth:(long long)arg1;
- (long long)columnWidthAt:(unsigned int)arg1;
- (_Bool)isColumnCountOverridden;
- (void)setColumnCount:(unsigned short)arg1;
- (unsigned short)columnCount;
- (_Bool)isChapterNumberSeparatorOverridden;
- (void)setChapterNumberSeparator:(int)arg1;
- (int)chapterNumberSeparator;
- (_Bool)isPageNumberRestartOverridden;
- (void)setPageNumberRestart:(_Bool)arg1;
- (_Bool)pageNumberRestart;
- (_Bool)isPageNumberStartOverridden;
- (void)setPageNumberStart:(unsigned short)arg1;
- (unsigned short)pageNumberStart;
- (_Bool)isPageNumberFormatOverridden;
- (void)setPageNumberFormat:(int)arg1;
- (int)pageNumberFormat;
- (_Bool)isLineNumberRestartOverridden;
- (void)setLineNumberRestart:(int)arg1;
- (int)lineNumberRestart;
- (_Bool)isLineNumberDistanceOverridden;
- (void)setLineNumberDistance:(short)arg1;
- (short)lineNumberDistance;
- (_Bool)isLineNumberIncrementOverridden;
- (void)setLineNumberIncrement:(unsigned short)arg1;
- (unsigned short)lineNumberIncrement;
- (_Bool)isLineNumberStartOverridden;
- (void)setLineNumberStart:(short)arg1;
- (short)lineNumberStart;
- (_Bool)isBorderOffsetOverridden;
- (void)setBorderOffset:(int)arg1;
- (int)borderOffset;
- (_Bool)isBorderDisplayOverridden;
- (void)setBorderDisplay:(int)arg1;
- (int)borderDisplay;
- (_Bool)isBorderDepthOverridden;
- (void)setBorderDepth:(int)arg1;
- (int)borderDepth;
- (_Bool)isRightBorderOverridden;
- (id)mutableRightBorder;
- (id)rightBorder;
- (_Bool)isBottomBorderOverridden;
- (id)mutableBottomBorder;
- (id)bottomBorder;
- (_Bool)isLeftBorderOverridden;
- (id)mutableLeftBorder;
- (id)leftBorder;
- (_Bool)isTopBorderOverridden;
- (id)mutableTopBorder;
- (id)topBorder;
- (_Bool)isRtlGutterOverridden;
- (void)setRtlGutter:(_Bool)arg1;
- (_Bool)rtlGutter;
- (_Bool)isGutterMarginOverridden;
- (void)setGutterMargin:(long long)arg1;
- (long long)gutterMargin;
- (_Bool)isFooterMarginOverridden;
- (void)setFooterMargin:(long long)arg1;
- (long long)footerMargin;
- (_Bool)isHeaderMarginOverridden;
- (void)setHeaderMargin:(long long)arg1;
- (long long)headerMargin;
- (_Bool)isBottomMarginOverridden;
- (void)setBottomMargin:(long long)arg1;
- (long long)bottomMargin;
- (_Bool)isTopMarginOverridden;
- (void)setTopMargin:(long long)arg1;
- (long long)topMargin;
- (_Bool)isRightMarginOverridden;
- (void)setRightMargin:(long long)arg1;
- (long long)rightMargin;
- (_Bool)isLeftMarginOverridden;
- (void)setLeftMargin:(long long)arg1;
- (long long)leftMargin;
- (_Bool)isPageOrientationOverridden;
- (void)setPageOrientation:(int)arg1;
- (int)pageOrientation;
- (_Bool)isTextDirectionOverridden;
- (void)setTextDirection:(int)arg1;
- (int)textDirection;
- (_Bool)isPageScaleOverridden;
- (void)setPageScale:(unsigned int)arg1;
- (unsigned int)pageScale;
- (_Bool)isPageHeightOverridden;
- (void)setPageHeight:(long long)arg1;
- (long long)pageHeight;
- (_Bool)isPageWidthOverridden;
- (void)setPageWidth:(long long)arg1;
- (long long)pageWidth;
- (_Bool)isBreakTypeOverridden;
- (void)setBreakType:(int)arg1;
- (int)breakType;
- (id)firstPageFooter;
- (id)evenPageFooter;
- (id)oddPageFooter;
- (id)firstPageHeader;
- (id)evenPageHeader;
- (id)oddPageHeader;
- (id)text;
- (id)document;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

