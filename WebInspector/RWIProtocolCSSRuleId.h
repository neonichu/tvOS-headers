//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSRuleId : RWIProtocolJSONObject
{
}

@property(nonatomic) int ordinal;
@property(copy, nonatomic) NSString *styleSheetId;
- (id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2;

@end

