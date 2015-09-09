//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PSSystemPolicyForApp : NSObject
{
    unsigned long long _policyOptions;
    _Bool _forcePolicyOptions;
    NSString *_bundleIdentifier;
}

+ (_Bool)isServiceRestricted:(id)arg1;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)privacyAccessForSpecifier:(id)arg1;
- (id)_privacyAccessForService:(struct __CFString *)arg1;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (struct __CFBundle *)copyTCCBundleForService:(struct __CFString *)arg1;
- (id)privacySpecifierForService:(struct __CFString *)arg1;
- (id)privacySpecifiers;
- (id)authLevelStringForStatus:(int)arg1;
- (id)locationStatus:(id)arg1;
- (_Bool)_isLocationServicesRestricted;
- (id)locationServicesSpecifier;
- (id)isBackgroundRefreshEnabled:(id)arg1;
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;
- (_Bool)_isBackgroundAppRefreshAllowed;
- (_Bool)_supportsBackgroundAppRefresh;
- (id)backgroundAppRefreshSpecifier;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)cellularSpecifier;
- (_Bool)_isCellularDataRestricted;
- (_Bool)isCellularBundleID:(id)arg1;
- (id)dataUsageWorkspaceInfo;
- (id)_sectionInfo;
- (id)notificationSpecifier;
- (id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(_Bool)arg2;
- (id)specifiers;
- (id)initWithBundleIdentifier:(id)arg1;

@end

