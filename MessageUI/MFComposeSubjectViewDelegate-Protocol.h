//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFComposeHeaderViewDelegate-Protocol.h>

@class MFComposeSubjectView;

@protocol MFComposeSubjectViewDelegate <MFComposeHeaderViewDelegate>
- (void)composeSubjectViewDidSelectNotifyButton:(MFComposeSubjectView *)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(MFComposeSubjectView *)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(MFComposeSubjectView *)arg1;

@optional
- (void)composeSubjectViewDidRemoveContent:(MFComposeSubjectView *)arg1;
@end

