//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SafariSharedExtras)
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)safari_stringAsHexWithData:(id)arg1;
+ (id)safari_stringByBase64EncodingData:(id)arg1;
+ (id)safari_stringWithUTF8Bytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (void)_safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (id)safari_stringWithJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 nullStringPolicy:(long long)arg3;
- (id)safari_md5Hash;
- (id)safari_base64DecodedData;
- (id)safari_canonicalURLStringForFrequentlyVisitedSites;
- (void)safari_enumerateSubdomainRangesInHostUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_scriptIfJavaScriptURLString;
- (_Bool)safari_isJavaScriptURLString;
- (id)safari_domainFromHost;
- (unsigned long long)safari_countOfString:(id)arg1;
- (id)safari_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBrackets;
- (id)safari_stringBySubstitutingAmpersandAndAngleBracketsForHTMLEntities;
- (id)safari_simplifiedUserVisibleURLString;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2 simplifiedStringOffset:(unsigned long long *)arg3;
- (id)safari_stringEncodedAsURLQueryParameter;
- (id)safari_stringByFoldingWideCharactersAndNormalizing;
- (id)safari_userVisibleURL;
- (id)safari_bestURLStringForUserTypedString;
- (id)safari_bestLanguageTag;
- (id)safari_bestURLForUserTypedString;
- (id)safari_stringByRemovingWwwDotPrefix;
- (id)safari_fixedStringByExpandingTildeInPath;
- (_Bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;
- (_Bool)safari_hasCaseInsensitiveSuffix:(id)arg1;
- (_Bool)safari_hasCaseInsensitivePrefix:(id)arg1;
- (_Bool)safari_isCaseInsensitiveEqualToString:(id)arg1;
- (_Bool)safari_hasPrefix:(id)arg1;
- (id)safari_stringByTrimmingWhitespace;
- (id)safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
- (id)safari_stringByRemovingTopLevelDomainFromHost;
- (id)safari_highLevelDomainFromHost;
- (id)_safari_topLevelDomainUsingCFFromComponents:(id)arg1;
- (id)safari_possibleTopLevelDomainCorrectionForUserTypedString;
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;
@end

