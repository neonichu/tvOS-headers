//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFormula : NSObject
{
}

+ (struct XlFormulaInfo *)xlFormulaInfoFromEDFormula:(id)arg1 state:(id)arg2;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withTokenLength:(int)arg2 formulaLength:(int)arg3 formulaClass:(Class)arg4 edSheet:(id)arg5 state:(id)arg6;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 state:(id)arg4;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 state:(id)arg3;
+ (void)readFormulaFromXlCell:(struct XlCell *)arg1 edCell:(struct EDCellHeader *)arg2 edRowBlocks:(id)arg3 state:(id)arg4;
+ (void)setupFormulaDataForSharedFormula:(id)arg1 xlFormulaInfo:(struct XlFormulaInfo *)arg2 state:(id)arg3;
+ (struct XlFormulaInfo *)xlFormulaInfoFromEDSharedFormula:(id)arg1 state:(id)arg2;
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(struct XlFormulaProcessor *)arg1 length:(int)arg2 edFormula:(id)arg3 edSheet:(id)arg4;
+ (unsigned int)writeToken:(id)arg1 tokenIndex:(unsigned int)arg2 tokenStream:(struct XLFormulaStream *)arg3 extendedStream:(struct XLFormulaStream *)arg4 state:(id)arg5;
+ (char *)edFormulaToParsedExpression:(id)arg1 tokenLength:(unsigned short *)arg2 formulaLength:(unsigned short *)arg3 state:(id)arg4;

@end

