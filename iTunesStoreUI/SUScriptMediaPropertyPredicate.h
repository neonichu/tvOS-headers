//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaPropertyPredicate, NSString;

@interface SUScriptMediaPropertyPredicate : SUScriptObject
{
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_playlistAttributesForScriptArray:(id)arg1;
@property(readonly) id value;
@property(readonly) NSString *property;
@property(readonly) NSString *comparisonType;
- (id)_className;
@property(readonly, nonatomic) MPMediaPropertyPredicate *nativePredicate;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;

@end

