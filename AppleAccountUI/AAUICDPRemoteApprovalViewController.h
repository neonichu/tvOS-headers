//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <AppleAccountUI/AAUICDPRemoteSecretChallengeHandler-Protocol.h>

@class CDPRemoteDeviceSecretValidator, NSArray, NSString;

@interface AAUICDPRemoteApprovalViewController : UITableViewController <AAUICDPRemoteSecretChallengeHandler>
{
    NSArray *_devices;
    CDPRemoteDeviceSecretValidator *_validator;
    _Bool _shouldShowCancelButton;
    CDUnknownBlockType _challengeResponseHandler;
}

@property(nonatomic) _Bool shouldShowCancelButton; // @synthesize shouldShowCancelButton=_shouldShowCancelButton;
@property(copy, nonatomic) CDUnknownBlockType challengeResponseHandler; // @synthesize challengeResponseHandler=_challengeResponseHandler;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDevices:(id)arg1 validator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

