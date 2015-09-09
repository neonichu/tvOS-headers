//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegListController.h>

@class CNFRegAlias, NSArray, PSSpecifier;

@interface CNFRegAliasDetailController : CNFRegListController
{
    CNFRegAlias *_alias;
    PSSpecifier *_removeGroupSpecifier;
    PSSpecifier *_removeButtonSpecifier;
    NSArray *_resendValidationSpecifierGroup;
}

@property(retain, nonatomic) CNFRegAlias *alias; // @synthesize alias=_alias;
- (void).cxx_destruct;
- (void)_setupEventHandlers;
- (void)_showAliasValidationError:(id)arg1;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)_buildSpecifierCache:(id)arg1;
- (void)resendValidationEmailTapped:(id)arg1;
- (void)showRemoveAliasConfirmation;
- (void)setRemoveAliasEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)forgetAliasTapped:(id)arg1;
- (void)_showResendGroup:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateUIAnimated:(_Bool)arg1;
- (_Bool)_shouldShowResendButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)specifierList;
- (id)bundle;
- (id)initWithRegController:(id)arg1 alias:(id)arg2;

@end

