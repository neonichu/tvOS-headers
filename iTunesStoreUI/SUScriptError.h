//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSString;

@interface SUScriptError : SUScriptObject
{
    NSError *_error;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *localizedRecoverySuggestion;
@property(readonly) NSString *localizedFailureReason;
@property(readonly) NSString *localizedDescription;
@property(readonly) NSString *domain;
@property(readonly) long long code;
- (id)_className;
- (void)dealloc;
- (id)initWithError:(id)arg1;

@end

