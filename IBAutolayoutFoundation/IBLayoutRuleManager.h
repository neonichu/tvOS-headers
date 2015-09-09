//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableOrderedSet;

@interface IBLayoutRuleManager : NSObject
{
    NSMutableDictionary *sharedLayoutRules;
    NSMutableOrderedSet *fallbackWidgetTypes;
    NSMapTable *widgetCodes;
    NSMapTable *compactLayoutRules;
    _Bool maxRuleDistanceIsValid;
    double maxRuleDistance;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)uniqueRuleSubKeyForWidgetType:(id)arg1;
- (id)ruleForView:(long long)arg1 comparedToView:(long long)arg2 withRuleEdge:(unsigned long long)arg3 viewFallbackKey:(long long)arg4;
- (id)ruleForView:(long long)arg1 comparedToContainer:(long long)arg2 withRuleEdge:(unsigned long long)arg3 viewFallbackKey:(long long)arg4 containerFallbackKey:(long long)arg5;
- (id)zeroRule;
- (void)validateTextualRules:(id)arg1;
- (id)invertRules:(id)arg1;
- (_Bool)shouldValidateTextualRules;
- (double)maxRuleDistance;
- (void)invalidateCompactLayoutRules;
- (id)compactLayoutRules;
- (id)compactRules:(id)arg1;
- (void)declareWidgetTypes:(id)arg1;
- (void)removeLayoutRules:(id)arg1;
- (void)addLayoutRules:(id)arg1;
- (void)declareFallbackWidgetType:(id)arg1;
- (id)fallbackWidgetTypes;
- (id)sharedLayoutRules;
- (_Bool)addLayoutRulesFromFile:(id)arg1 error:(id *)arg2;

@end

