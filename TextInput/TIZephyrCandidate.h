//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
{
    _Bool _isFromPhraseDictionary;
    _Bool _isFromTextChecker;
    unsigned int _usageTrackingMask;
    unsigned long long _wordOriginFeedbackID;
    NSString *_label;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool isFromTextChecker; // @synthesize isFromTextChecker=_isFromTextChecker;
@property(nonatomic) _Bool isFromPhraseDictionary; // @synthesize isFromPhraseDictionary=_isFromPhraseDictionary;
- (unsigned int)usageTrackingMask;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAutocorrection;
- (unsigned long long)wordOriginFeedbackID;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3;
- (void)dealloc;

@end

