//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAIRequestSearch : SABaseClientBoundCommand
{
}

+ (id)requestSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)requestSearch;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *acousticIdSearchSessionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

