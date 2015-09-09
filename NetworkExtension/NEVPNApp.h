//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN
{
    NSArray *_appRules;
    long long _tunnelType;
}

+ (_Bool)supportsSecureCoding;
@property long long tunnelType; // @synthesize tunnelType=_tunnelType;
@property(copy) NSArray *appRules; // @synthesize appRules=_appRules;
- (void).cxx_destruct;
- (id)copyAppRuleIDs;
- (_Bool)removeAppRuleByID:(id)arg1;
- (id)copyAppRuleBySigningIdentifier:(id)arg1;
- (id)copyAppRuleByID:(id)arg1;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

