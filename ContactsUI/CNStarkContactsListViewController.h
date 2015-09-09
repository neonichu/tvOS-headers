//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactListViewController.h>

#import <ContactsUI/CNContactContentViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactListViewControllerDelegate-Protocol.h>

@class AVExternalDevice, CNStarkNoContentBannerView, NSString;

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate>
{
    _Bool _limitedUI;
    CNStarkNoContentBannerView *_overlayView;
    AVExternalDevice *_externalDevice;
}

@property(nonatomic) _Bool limitedUI; // @synthesize limitedUI=_limitedUI;
@property(retain, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(retain, nonatomic) CNStarkNoContentBannerView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2;
- (_Bool)contactListViewController:(id)arg1 canSelectContact:(id)arg2;
- (void)postMessageOverlayIfNecessary;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)limitedUINotification:(id)arg1;
- (void)updateLimitedUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

