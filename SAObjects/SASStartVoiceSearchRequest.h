//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SASStartSpeechDictation.h>

@class NSArray, NSDictionary;

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation
{
}

+ (id)startVoiceSearchRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startVoiceSearchRequest;
@property(copy, nonatomic) NSArray *searchTypes;
@property(copy, nonatomic) NSDictionary *queryParameters;
@property(copy, nonatomic) NSDictionary *headers;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

