//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardParameterLine-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface CNVCardLine : NSObject <CNVCardParameterLine>
{
    NSString *_name;
    id _value;
    NSMutableArray *_parameters;
    NSString *_grouping;
    NSMutableArray *_groupedLines;
    NSString *_itemSeparator;
}

+ (id)versionPlaceholderLine;
+ (id)lineWithLiteralValue:(id)arg1;
+ (id)lineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
+ (id)lineWithName:(id)arg1 value:(id)arg2;
@property(readonly) NSString *itemSeparator; // @synthesize itemSeparator=_itemSeparator;
@property(readonly) NSArray *groupedLines; // @synthesize groupedLines=_groupedLines;
@property(readonly) NSString *groupingName; // @synthesize groupingName=_grouping;
@property(readonly) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)serializeValueWithStrategy:(id)arg1;
- (void)serializeWithStrategy:(id)arg1;
- (_Bool)canSerializeWithStrategy:(id)arg1;
- (id)makeGroupingNameWithCounter:(long long *)arg1;
- (void)addGroupedLine:(id)arg1 withCounter:(long long *)arg2;
- (void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addParameterWithName:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

