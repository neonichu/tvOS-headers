//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (IBStringAdditions)
+ (id)ib_stringWithListComponentsJoinedByCommasAndAnd:(id)arg1;
+ (id)ib_UUIDString;
- (id)ib_capitalizedString;
- (struct _NSRange)ib_rangeForSuffixOfLength:(long long)arg1;
- (struct _NSRange)ib_range;
- (id)ib_stringWithEachLinePrefixedByString:(id)arg1;
- (id)ib_substringAfterLastOccurrenceOfString:(id)arg1;
- (id)ib_substringBeforeLastOccurrenceOfString:(id)arg1;
- (id)ib_substringAfterFirstOccurrenceOfString:(id)arg1;
- (id)ib_substringBeforeFirstOccurrenceOfString:(id)arg1;
- (id)ib_stringByStrippingCommonWordPrefixWithString:(id)arg1;
- (void)ib_invokeWithAccessToFileSystemRepresentation:(CDUnknownBlockType)arg1;
- (id)ib_onlyPathComponent;
- (id)ib_firstPathComponent;
- (_Bool)ib_isNonEmpty;
- (long long)ib_numberOfOccurrencesOfString:(id)arg1;
- (id)ib_stringOfUniqueCharactersFromSet:(id)arg1;
- (_Bool)ib_containsStringCaseInsensatively:(id)arg1;
- (_Bool)ib_containsString:(id)arg1;
- (_Bool)ib_containsCharactersFromSet:(id)arg1;
- (_Bool)ib_isComposedEntirelyOfCharactersFromSet:(id)arg1;
- (_Bool)ib_isRange:(struct _NSRange)arg1 composedEntirelyOfCharactersFromSet:(id)arg2;
- (id)ib_UTF8Representation;
- (id)ib_stringByLowercasingFirstCharacter;
- (id)ib_stringByDeletingSuffix:(id)arg1;
- (id)ib_stringByDeletingPrefix:(id)arg1;
- (id)ib_stringByPrependingString:(id)arg1;
- (id)ib_stringByAppendingPathComponents:(id)arg1;
- (id)ib_stringByRemovingCharactersFromSet:(id)arg1;
- (id)ib_stringByInsertingString:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)ib_caseInsensitiveNumericCompare:(id)arg1;
- (void)ib_invokeWithAccessToUTF8Bytes:(CDUnknownBlockType)arg1;
- (void)ib_invokeWithAccessToCharacters:(CDUnknownBlockType)arg1;
@end

