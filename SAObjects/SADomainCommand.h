//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSURL;

@interface SADomainCommand : SABaseClientBoundCommand
{
}

+ (id)domainCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *timeout;
@property(copy, nonatomic) NSURL *targetPluginId;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

