//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDPIdentifier, NSString;
@protocol CKDProtocolTranslatorIdentityDelegate;

@interface CKDProtocolTranslator : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_containerScopedUserID;
    id <CKDProtocolTranslatorIdentityDelegate> _identityDelegate;
    NSString *_overriddenContainerScopedUserID;
}

+ (id)translatorIgnoringUserIDs;
@property(copy, nonatomic) NSString *overriddenContainerScopedUserID; // @synthesize overriddenContainerScopedUserID=_overriddenContainerScopedUserID;
@property(nonatomic) __weak id <CKDProtocolTranslatorIdentityDelegate> identityDelegate; // @synthesize identityDelegate=_identityDelegate;
@property(copy, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)identityFromPUser:(id)arg1;
- (id)pAliasWithUserRecordID:(id)arg1;
- (id)pAliasWithEmailAddress:(id)arg1;
- (id)notificationFromPPushMessage:(id)arg1;
- (id)pParticipantFromShareParticipant:(id)arg1;
- (id)shareParticipantFromPParticipant:(id)arg1 error:(id *)arg2;
- (id)pShareFromShare:(id)arg1;
- (id)shareFromPShare:(id)arg1 error:(id *)arg2;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)recordZoneFromPRecordZone:(id)arg1 withDatabaseScope:(long long)arg2 error:(id *)arg3;
- (id)pSubscriptionFromSubscription:(id)arg1 error:(id *)arg2;
- (id)subscriptionFromPSubscription:(id)arg1 error:(id *)arg2;
- (id)pQueryFromQuery:(id)arg1 error:(id *)arg2;
- (id)pPackageFromPackage:(id)arg1;
- (id)packageFromPPackage:(id)arg1 error:(id *)arg2;
- (id)pAssetFromAsset:(id)arg1;
- (id)assetFromPAsset:(id)arg1 error:(id *)arg2;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(_Bool)arg2 outDeletedMergeFields:(id *)arg3 outKeysToSend:(id *)arg4;
- (id)pRecordFromRecord:(id)arg1;
- (id)pRecordFromRecord:(id)arg1 forCache:(_Bool)arg2;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(_Bool)arg2;
- (id)recordFromPRecord:(id)arg1 error:(id *)arg2;
- (id)pRecordIdentifierFromShareID:(id)arg1;
- (id)pShareIdentifierFromShareID:(id)arg1;
- (id)shareIDFromPShareIdentifier:(id)arg1 error:(id *)arg2;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id *)arg2;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id *)arg2;
- (id)userNameFromPIdentifier:(id)arg1 error:(id *)arg2;
- (id)pRecordIdentifierFromUserRecordName:(id)arg1;
- (id)pUserIdentifierFromUserRecordName:(id)arg1;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)recordIDFromPUserName:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) CKDPIdentifier *pUserID;
- (_Bool)_isDefaultUserNameFromClient:(id)arg1;
- (_Bool)_isDefaultUserNameFromServer:(id)arg1;
- (id)initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)fieldValueListOfType:(int)arg1 withList:(id)arg2;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)fieldValueFromObject:(id)arg1;
- (int)fieldValueTypeFromObject:(id)arg1;

@end

