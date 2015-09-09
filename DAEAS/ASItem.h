//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DAEAS/ASParsing-Protocol.h>

@class NSMutableDictionary;
@protocol ASParsing;

@interface ASItem : NSObject <ASParsing>
{
    ASItem *_root;
    ASItem *_parent;
    int _codePage;
    int _token;
    NSObject<ASParsing> *_currentlyParsingSubItem;
    int _currentlyParsingCPTNumber;
    CDUnknownBlockType _currentStreamBlock;
    int _parsingState;
    NSMutableDictionary *_parseRuleUsageNumbers;
}

+ (_Bool)expectsContent;
+ (id)parseRuleCache;
+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableDictionary *parseRuleUsageNumbers; // @synthesize parseRuleUsageNumbers=_parseRuleUsageNumbers;
@property(nonatomic) int parsingState; // @synthesize parsingState=_parsingState;
@property(nonatomic) int currentlyParsingCPTNumber; // @synthesize currentlyParsingCPTNumber=_currentlyParsingCPTNumber;
@property(retain, nonatomic) NSObject<ASParsing> *currentlyParsingSubItem; // @synthesize currentlyParsingSubItem=_currentlyParsingSubItem;
@property(nonatomic) int token; // @synthesize token=_token;
@property(nonatomic) int codePage; // @synthesize codePage=_codePage;
@property(nonatomic) __weak ASItem *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak ASItem *root; // @synthesize root=_root;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType currentStreamBlock;
- (id)asParseRules;
- (void)ignoreThisContent:(id)arg1;
- (CDUnknownBlockType)_copyStreamingBlockForStreamingCallbackDict:(id)arg1 dccpt:(int)arg2;
- (_Bool)_itemPathWithDCCPTMatches:(id)arg1 dccpt:(int)arg2;
- (id)_replacementObjectWithCallbackDict:(id)arg1;
- (_Bool)_itemPathMatches:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (_Bool)_parseNextValueWithDataclass:(long long)arg1 context:(id)arg2 root:(id)arg3 parent:(id)arg4 callbackDict:(id)arg5 streamCallbackDict:(id)arg6 parseRules:(id)arg7 account:(id)arg8;
- (_Bool)_haveEnoughDataToKeepParsingWithContext:(id)arg1 curToken:(unsigned char)arg2;
- (_Bool)_streamIfNecessaryFromContext:(id)arg1;
- (long long)_dataclass;
- (_Bool)_setupFirstParseWithContext:(id)arg1 root:(id)arg2 parent:(id)arg3;
- (void)_setCurrentlyParsingSubItem:(id)arg1;
- (_Bool)nextParsedObjectWithContext:(id)arg1 root:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 dataclass:(long long)arg5 outParsedObject:(id *)arg6 outCPTNumber:(int *)arg7 account:(id)arg8;
- (int)_streamYourLittleHeartOutWithContext:(id)arg1;
- (id)init;

@end

