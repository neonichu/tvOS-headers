//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationsUI/NSObject-Protocol.h>

@class NCViewServiceDescriptor, NSString;
@protocol NCInteractiveNotificationHostDelegate;

@protocol NCInteractiveNotificationHost <NSObject>
@property(readonly, retain, nonatomic) NCViewServiceDescriptor *accessoryViewService;
@property(readonly, retain, nonatomic) NCViewServiceDescriptor *inlayViewService;
@property(nonatomic) double maximumHeight;
@property(nonatomic, getter=isModal) _Bool modal;
@property(readonly, nonatomic) double bottomOverhangHeight;
@property(readonly, nonatomic) _Bool showsKeyboard;
@property(nonatomic) id <NCInteractiveNotificationHostDelegate> delegate;
- (void)handleActionIdentifier:(NSString *)arg1;
- (void)handleActionAtIndex:(long long)arg1;
- (void)getActionContextWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)willPresentFromActionIdentifier:(NSString *)arg1;
- (void)interactiveNotificationDidAppear;
- (void)didChangeRevealPercent:(double)arg1;

@optional
- (void)disconnect;
@end

