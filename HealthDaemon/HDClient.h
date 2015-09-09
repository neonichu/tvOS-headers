//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection, _HKEntitlements;

@interface HDClient : NSObject
{
    _Bool _isExtension;
    NSXPCConnection *_connection;
    _HKEntitlements *_entitlements;
    NSString *_name;
    NSString *_applicationIdentifier;
    NSString *_sourceBundleIdentifier;
    NSMutableSet *_droppedEntitlements;
}

@property(retain, nonatomic) NSMutableSet *droppedEntitlements; // @synthesize droppedEntitlements=_droppedEntitlements;
@property(readonly) _Bool isExtension; // @synthesize isExtension=_isExtension;
@property(readonly) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(readonly) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) _HKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)description;
- (void)restoreEntitlement:(id)arg1;
- (void)dropEntitlement:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1 withError:(id *)arg2;
@property(readonly) int processIdentifier;
- (id)_initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)initWithEntitlements:(id)arg1;
- (id)initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)initWithConnection:(id)arg1;

@end

