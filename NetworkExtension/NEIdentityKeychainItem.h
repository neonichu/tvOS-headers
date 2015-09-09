//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEKeychainItem.h>

@interface NEIdentityKeychainItem : NEKeychainItem
{
}

+ (id)importPKCS12Data:(id)arg1 passphrase:(id)arg2;
+ (id)copyIdentities:(id)arg1 fromDomain:(long long)arg2;
+ (id)copyPropertiesForIdentity:(struct __SecIdentity *)arg1 persistentReference:(id)arg2;
+ (id)copyPersistentReferenceForIdentity:(struct __SecIdentity *)arg1;
- (void)sync;
- (id)copyQueryWithReturnTypes:(id)arg1;
- (id)copyPassword;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;

@end

