//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAMPRateMediaEntity : SABaseClientBoundCommand
{
}

+ (id)rateMediaEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rateMediaEntity;
- (_Bool)requiresResponse;
@property(nonatomic) long long rating;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

