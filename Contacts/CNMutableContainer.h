//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContainer.h>

@class NSString;

@interface CNMutableContainer : CNContainer
{
}

- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
@property(copy, nonatomic) CNContainer *snapshot; // @dynamic snapshot;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
@property(nonatomic) long long type;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int iOSLegacyIdentifier; // @dynamic iOSLegacyIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)copy;

@end

