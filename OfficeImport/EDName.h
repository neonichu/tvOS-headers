//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EDFormula, EDString, NSString, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDName : NSObject
{
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
    EDString *_nameString;
    EDFormula *_formula;
    unsigned long long _sheetIndex;
}

+ (id)name;
@property(nonatomic) unsigned long long sheetIndex; // @synthesize sheetIndex=_sheetIndex;
@property(readonly, nonatomic) EDFormula *formula; // @synthesize formula=_formula;
@property(retain, nonatomic) EDString *nameString; // @synthesize nameString=_nameString;
- (id)description;
@property(readonly, nonatomic) OITSUPointerKeyDictionary *maxWorksheetReferences;
- (void)setFormula:(id)arg1 workbook:(id)arg2;
@property(readonly, nonatomic) NSString *internalFunctionName;
@property(readonly, nonatomic) _Bool isInternalFunction;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqualToEDName:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setFormulaString:(id)arg1 workbook:(id)arg2;
- (id)formulaString;

@end

