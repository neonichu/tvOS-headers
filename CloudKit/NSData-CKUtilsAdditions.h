//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (CKUtilsAdditions)
+ (id)CKDataFromBase64URLSafeString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(_Bool)arg2;
- (id)CKSHA256;
- (id)CKBase64URLSafeString;
- (id)CKUppercaseHexStringWithoutSpaces;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKHexString;
@end

