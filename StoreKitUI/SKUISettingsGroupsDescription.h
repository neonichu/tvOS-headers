//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISettingsGroupControllerDelegate-Protocol.h>

@class NSMapTable, NSString, SKUIClientContext, SKUISettingsContext, SKUISettingsObjectStore;
@protocol SKUISettingsGroupsDescriptionDelegate;

@interface SKUISettingsGroupsDescription : NSObject <SKUISettingsGroupControllerDelegate>
{
    NSMapTable *_controllers;
    SKUISettingsObjectStore *_groupDescriptions;
    SKUISettingsContext *_settingsContext;
    SKUIClientContext *_clientContext;
    id <SKUISettingsGroupsDescriptionDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUISettingsGroupsDescriptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_updatedEditsValid;
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_gatherEditableSettings;
- (void)_dispatchUpdateForSettingsGroupDescription:(id)arg1 atIndex:(unsigned long long)arg2 withUpdateType:(long long)arg3;
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_controllerForGroupElement:(id)arg1;
- (void)_addSettingsGroupWithViewElement:(id)arg1 controller:(id)arg2;
- (id)settingsGroupController:(id)arg1 viewForSettingDescription:(id)arg2;
- (void)settingsGroupController:(id)arg1 reloadSettingDescription:(id)arg2;
- (id)owningViewControllerForSettingsGroupController:(id)arg1;
- (id)viewElementForSettingAtIndexPath:(id)arg1;
- (_Bool)shouldShowHeaderForGroupAtIndex:(unsigned long long)arg1;
- (_Bool)shouldShowFooterForGroupAtIndex:(unsigned long long)arg1;
- (id)settingDescriptionAtIndexPath:(id)arg1;
- (void)revealSettingsGroupDescription:(id)arg1;
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;
- (void)reloadData;
- (void)recycle;
- (unsigned long long)numberOfSettingsInGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGroups;
- (unsigned long long)indexOfSettingsGroupDescription:(id)arg1;
- (void)hideSettingsGroupDescription:(id)arg1;
- (id)headerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (_Bool)hasEditableSettingDescriptions;
- (id)footerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (void)dispatchUpdate:(id)arg1;
- (void)deleteSettingsGroupDescription:(id)arg1;
- (void)deleteSettingAtIndexPath:(id)arg1;
- (id)createEditTransaction;
- (void)addSettingsGroupWithViewElement:(id)arg1;
- (id)initWithDelegate:(id)arg1 settingsContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

