//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlugInKit/PKPlugInCore.h>

#import <PlugInKit/PKCorePlugInProtocol-Protocol.h>
#import <PlugInKit/PKSubsystemServicePersonality-Protocol.h>

@class NSDictionary, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection;

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality>
{
    id _plugInPrincipal;
    id _hostPrincipal;
    id _embeddedPrincipal;
    NSXPCConnection *_connection;
    NSUserDefaults *_preferences;
}

@property(retain) NSUserDefaults *preferences; // @synthesize preferences=_preferences;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) id embeddedPrincipal; // @synthesize embeddedPrincipal=_embeddedPrincipal;
@property(retain) id hostPrincipal; // @synthesize hostPrincipal=_hostPrincipal;
@property(retain) id plugInPrincipal; // @synthesize plugInPrincipal=_plugInPrincipal;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)shutdownPlugIn;
- (id)defaultPrincipalObject;
- (id)findProtocol:(id)arg1;
- (void)beginUsingPlugIn:(id)arg1 ready:(CDUnknownBlockType)arg2;
- (void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)prepareUsing:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)setupWithIdentifier:(id)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *identifier;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) Class superclass;
@property(readonly) NSURL *url;
@property(readonly) NSUUID *uuid;
@property(readonly) NSString *version;

@end

