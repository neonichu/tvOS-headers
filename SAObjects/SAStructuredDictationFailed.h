//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand
{
}

+ (id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)structuredDictationFailed;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *userFacingReasonTitle;
@property(copy, nonatomic) NSString *userFacingReasonDescription;
@property(copy, nonatomic) NSString *recognition;
@property(nonatomic) long long errorCode;
@property(copy, nonatomic) NSString *dialogIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

