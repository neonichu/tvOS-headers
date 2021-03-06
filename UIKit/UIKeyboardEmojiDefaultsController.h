//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiDefaultsController : NSObject
{
    NSMutableDictionary *_defaults;
    _Bool _isDefaultDirty;
}

+ (id)sharedController;
- (id)defaultsValueForKey:(id)arg1;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2;
- (long long)currentSequenceKey;
- (void)setCurrentSequenceKey:(long long)arg1;
- (id)skinToneBaseKeyPreferencesKey;
- (void)setSkinToneBaseKeyPreferencesKey:(id)arg1;
- (id)usageHistoryKey;
- (void)setUsageHistoryKey:(id)arg1;
- (id)recentsKey;
- (void)setRecentsKey:(id)arg1;
- (long long)emojiCategoryDefaultsIndex:(id)arg1;
- (void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2;
- (void)handleRead:(id)arg1;
- (void)handleWrite:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)writeEmojiDefaults;
- (void)readEmojiDefaults;
- (id)emptyDefaultsDictionary;

@end

