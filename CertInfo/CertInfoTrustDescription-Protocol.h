//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CertInfo/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol CertInfoTrustDescription <NSObject>
- (NSDate *)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (NSString *)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (NSString *)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (NSArray *)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)certificateCount;
- (NSArray *)summaryDescriptionItems;
- (_Bool)isRootCertificate;
- (_Bool)isTrusted;
- (NSString *)summarySubtitle;
- (NSString *)summaryTitle;
@end

