//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProofReader/PRModification.h>

@class NSString;

@interface PRPinyinModification : PRModification
{
    struct _NSRange _range;
    NSString *_replacementString;
    unsigned long long _modificationType;
    struct _NSRange _syllableRange;
    struct _NSRange _additionalSyllableRange;
    double _modificationScore;
    unsigned long long _syllableCountScore;
    unsigned char _letters[7];
    _Bool _producesPartialSyllable;
    _Bool _isTemporary;
}

+ (id)finalModificationsForInputString:(id)arg1;
+ (id)modificationsForInputString:(id)arg1;
- (_Bool)_shouldAppendLetter:(unsigned char)arg1;
- (_Bool)isTemporary;
- (_Bool)producesPartialSyllable;
- (unsigned long long)syllableCountScore;
- (double)modificationScore;
- (struct _NSRange)combinedSyllableRange;
- (struct _NSRange)additionalSyllableRange;
- (struct _NSRange)syllableRange;
- (unsigned long long)modificationType;
- (id)replacementString;
- (struct _NSRange)range;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 isTemporary:(_Bool)arg6;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(_Bool)arg8;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(_Bool)arg8 isTemporary:(_Bool)arg9;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(_Bool)arg9;
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange)arg4 additionalSyllableRange:(struct _NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(_Bool)arg9 isTemporary:(_Bool)arg10;

@end

