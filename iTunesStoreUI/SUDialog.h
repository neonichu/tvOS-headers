//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/UIAlertViewDelegate-Protocol.h>

@class ISDialog, NSString, UIAlertView;

@interface SUDialog : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertView;
    CDUnknownBlockType _completionBlock;
    ISDialog *_dialog;
}

@property(readonly, nonatomic) ISDialog *dialog; // @synthesize dialog=_dialog;
- (void)_completeWithButtonIndex:(long long)arg1;
- (id)_alertView;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (void)dealloc;
- (id)initWithDialog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

