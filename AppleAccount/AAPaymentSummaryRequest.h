//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest
{
    NSString *_secondaryAuthToken;
}

+ (Class)responseClass;
@property(copy, nonatomic) NSString *secondaryAuthToken; // @synthesize secondaryAuthToken=_secondaryAuthToken;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;

@end

