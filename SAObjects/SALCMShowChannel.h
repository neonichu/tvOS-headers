//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALCMTvChannel;

@interface SALCMShowChannel : SABaseClientBoundCommand
{
}

+ (id)showChannelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showChannel;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SALCMTvChannel *channel;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

