//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRequestOrigin;
@property(copy, nonatomic) NSString *status;
@property(nonatomic) double speed;
@property(nonatomic) double direction;
@property(copy, nonatomic) NSString *desiredAccuracy;
@property(nonatomic) double altitude;
@property(copy, nonatomic) NSNumber *age;
@property(nonatomic) double horizontalAccuracy;
@property(nonatomic) double verticalAccuracy;
@property(nonatomic) double longitude;
@property(nonatomic) double latitude;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

