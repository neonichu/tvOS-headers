//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NEConfiguration, NSArray, NSDictionary, NSString;
@protocol NEProfilePayloadBaseDelegate;

@protocol NEProfileIngestionDelegate
+ (void)profileMigrationComplete;
+ (NSString *)getServiceIDForPayload:(NSDictionary *)arg1;
- (NSArray *)getCertificatesForConfigurationWithIdentifier:(NSString *)arg1;
- (_Bool)updateManagedAppRules:(NSArray *)arg1;
- (_Bool)updateAppLayerVPNMappingRules:(NSDictionary *)arg1;
- (NSArray *)copyManagedConfigurationIDs;
- (_Bool)updateDefaultAfterDeletingConfiguration;
- (_Bool)updateDefaultAfterAddingConfiguration;
- (_Bool)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (void)unlockConfigurations;
- (_Bool)lockConfigurations;
- (_Bool)isInstalled:(NSString *)arg1;
- (NEConfiguration *)setAsideConfigurationName:(NSString *)arg1 unsetAside:(_Bool)arg2;
- (_Bool)removeConfigurationWithIdentifier:(NSString *)arg1;
- (_Bool)removeIngestedConfiguration;
- (_Bool)removeConfiguration:(NEConfiguration *)arg1;
- (_Bool)saveIngestedConfiguration;
- (NEConfiguration *)ingestedConfiguration;
- (_Bool)createConfigurationFromPayload:(id <NEProfilePayloadBaseDelegate>)arg1 payloadType:(NSString *)arg2;
- (NEConfiguration *)findConfigurationByConfigurationID:(NSString *)arg1;
- (NEConfiguration *)findConfigurationByPayloadUUID:(NSString *)arg1;
- (NEConfiguration *)findConfigurationByName:(NSString *)arg1;
- (_Bool)loadConfigurationsForceReloadFromDisk;
- (id)initWithNameAndType:(NSString *)arg1 payloadType:(NSString *)arg2;
@end

