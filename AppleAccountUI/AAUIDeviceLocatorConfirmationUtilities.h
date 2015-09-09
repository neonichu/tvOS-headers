//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AAUIDeviceLocatorConfirmationUtilities : NSObject
{
}

+ (id)_messageForError:(id)arg1 account:(id)arg2;
+ (id)_titleForError:(id)arg1 account:(id)arg2;
+ (void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forAccount:(id)arg3 message:(id)arg4 confirmationButtonTitle:(id)arg5 presentingViewController:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)_performFMIPAuthenticationForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)showDisableAlertForAccount:(id)arg1 presentingViewController:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)showDisableAlertForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)checkIfWatchHasAppleIDAccount:(CDUnknownBlockType)arg1;
+ (void)showEnableAlertWithCompletion:(CDUnknownBlockType)arg1;

@end

