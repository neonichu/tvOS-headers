//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiInputController : NSObject
{
    int _currentSequence;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    UIKeyboardEmojiCategory *_lastViewedCategory;
}

+ (void)writeEmojiDefaultsAndReleaseActiveInputView;
+ (void)writeEmojiDefaults;
+ (id)activeInputView;
+ (Class)classForInputView;
- (id)defaultsDictionary;
- (void)clearAncientHistory;
- (long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1;
@property UIKeyboardEmojiCategory *lastViewedCategory; // @synthesize lastViewedCategory=_lastViewedCategory;
- (id)skinToneBaseKeyPreferences;
- (id)recents;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (void)emojiUsed:(id)arg1;
- (double)scoreForEmoji:(id)arg1;
- (double)scoreForSequence:(int)arg1;
- (_Bool)isAncientSequence:(int)arg1;
- (void)dealloc;
- (id)initWithInputView:(id)arg1;

@end

