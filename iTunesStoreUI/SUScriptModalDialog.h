//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISDialog, UIAlertView;

@interface SUScriptModalDialog : NSObject
{
    UIAlertView *_alert;
    long long _buttonIndex;
    ISDialog *_dialog;
}

+ (id)titleForURL:(id)arg1;
- (id)_copyResponseByRunningModal;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)copyResponseByRunningModal;
- (void)dealloc;
- (id)initWithDialog:(id)arg1;

@end

