//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/UIActionSheetDelegate-Protocol.h>

@class NSString, PKPassGroupView, PKPassView, UIActionSheet;
@protocol PKPassDeleteDelegate;

@interface PKPassDeleteSheet : NSObject <UIActionSheetDelegate>
{
    UIActionSheet *_actionSheet;
    id <PKPassDeleteDelegate> _delegate;
    PKPassView *_passView;
    PKPassGroupView *_groupView;
}

+ (void)performPassbookDeleteWithView:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, retain, nonatomic) PKPassGroupView *groupView; // @synthesize groupView=_groupView;
@property(readonly, retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property(nonatomic) id <PKPassDeleteDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_unregisterForEnterBackgroundNotification;
- (void)_registerForEnterBackgroundNotification;
- (void)_startAnimation;
- (void)finished:(_Bool)arg1;
- (void)forceDeleteAnimation;
- (void)showInView:(id)arg1;
- (void)dealloc;
- (id)initWithPassView:(id)arg1 groupView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

