//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneHost-Protocol.h>

@class FBProcess, FBSDisplay, FBSMutableSceneSettings, FBSSceneClientSettings, FBSSceneSettings, FBSceneHostManager, FBSceneLayerManager, FBWindowContextHostManager, FBWindowContextManager, NSHashTable, NSString;
@protocol FBSceneClient, FBSceneClientProvider, FBSceneDelegate;

@interface FBScene : NSObject <BSDescriptionProviding, FBSceneHost>
{
    FBSceneLayerManager *_layerManager;
    FBSceneHostManager *_hostManager;
    _Bool _valid;
    id <FBSceneDelegate> _delegate;
    id <FBSceneClient> _client;
    id <FBSceneClientProvider> _clientProvider;
    FBProcess *_clientProcess;
    NSString *_identifier;
    FBSDisplay *_display;
    FBSMutableSceneSettings *_mutableSettings;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    NSHashTable *_geometryObservers;
    unsigned long long _transactionID;
    _Bool _lockedForMutation;
}

@property(readonly, retain, nonatomic) FBSMutableSceneSettings *mutableSettings; // @synthesize mutableSettings=_mutableSettings;
@property(nonatomic, setter=_setLockedForMutation:) _Bool _lockedForMutation; // @synthesize _lockedForMutation;
@property(readonly, nonatomic) unsigned long long _transactionID; // @synthesize _transactionID;
@property(nonatomic) id <FBSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) id <FBSceneClientProvider> clientProvider; // @synthesize clientProvider=_clientProvider;
@property(readonly, retain, nonatomic) id <FBSceneClient> client; // @synthesize client=_client;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, retain, nonatomic) FBProcess *clientProcess; // @synthesize clientProcess=_clientProcess;
@property(readonly, retain, nonatomic) FBSSceneClientSettings *clientSettings; // @synthesize clientSettings=_clientSettings;
@property(readonly, retain, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(readonly, retain, nonatomic) FBSceneHostManager *hostManager; // @synthesize hostManager=_hostManager;
@property(readonly, retain, nonatomic) FBSceneLayerManager *layerManager; // @synthesize layerManager=_layerManager;
@property(readonly, retain, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_handleSceneClientMessage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 detachLayer:(id)arg2;
- (void)client:(id)arg1 updateLayer:(id)arg2;
- (void)client:(id)arg1 attachLayer:(id)arg2;
@property(readonly, retain, nonatomic) FBWindowContextHostManager *contextHostManager;
@property(readonly, retain, nonatomic) FBWindowContextManager *contextManager;
- (void)_removeSceneGeometryObserver:(id)arg1;
- (void)_addSceneGeometryObserver:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (unsigned long long)_incrementTransactionID;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (void)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)snapshotContext;
- (id)createSnapshotWithContext:(id)arg1;
- (id)createSnapshot;
- (void)sendActions:(id)arg1;
- (void)updateSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 display:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4;
- (long long)currentInterfaceOrientation;
- (void)updateUISettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateUISettingsWithBlock:(CDUnknownBlockType)arg1;
- (id)uiClientSettings;
- (id)uiSettings;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

