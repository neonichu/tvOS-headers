//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SASettingOpenSettings.h>

#import <SAObjects/SASettingAppSettingCommand-Protocol.h>

@class NSArray, NSString;

@interface SASettingOpenAppSettings : SASettingOpenSettings <SASettingAppSettingCommand>
{
}

+ (id)openAppSettingsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)openAppSettings;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSString *appWithSettingsId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

