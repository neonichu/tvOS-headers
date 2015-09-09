//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNAvatarCardController.h>

#import <ContactsUI/CNAvatarCardViewControllerDelegate-Protocol.h>
#import <ContactsUI/UIAlertControllerSystemProvidedPresentationDelegate-Protocol.h>

@class CNAvatarCardViewController, NSString, UIAlertController, UIView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardHybridController : CNAvatarCardController <CNAvatarCardViewControllerDelegate, UIAlertControllerSystemProvidedPresentationDelegate>
{
    UIView *_sourceView;
    CNAvatarCardViewController *_cardViewController;
    UIAlertController *_alertController;
}

@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) CNAvatarCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
- (void).cxx_destruct;
- (id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1;
- (void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1;
- (void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;
- (id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;
- (_Bool)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint)arg2;
- (void)cardViewControllerDidUpdatePreferredSize:(id)arg1;
- (void)cardViewControllerDidDismiss:(id)arg1;
- (void)cardViewControllerWillDismiss:(id)arg1;
- (void)cardViewController:(id)arg1 willShowActions:(id)arg2;
- (id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)_prepareAlertController;
- (void)_setupAlertController;
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sourceView;
- (void)setSourceView:(id)arg1;
- (_Bool)bypassActionValidation;
- (void)setBypassActionValidation:(_Bool)arg1;
- (id)actionCategories;
- (void)setActionCategories:(id)arg1;
- (void)setContacts:(id)arg1;
- (_Bool)isVisible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

