//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MFMessageBodyParser)
- (_Bool)mf_isHorizontalSeparator;
- (_Bool)mf_isSignature;
- (_Bool)mf_isForwardSeparator;
- (_Bool)mf_isAttributionPrefix;
- (_Bool)mf_isAttribution;
- (id)mf_horizontalSeparatorRegularExpression;
- (id)mf_signatureRegularExpression;
- (id)mf_forwardSeparatorRegularExpression;
- (id)mf_attributionPrefixRegularExpression;
- (id)mf_attributionRegularExpression;
- (id)mf_copyAttributionRegularExpressionForType:(int)arg1;
- (_Bool)mf_isWhitespace;
@end

