//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAUserActivity : SADomainObject
{
}

+ (id)userActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userActivity;
@property(nonatomic) _Bool isEligibleForReminders;
@property(copy, nonatomic) NSString *internalGUID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

