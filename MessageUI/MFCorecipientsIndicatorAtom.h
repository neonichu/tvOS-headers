//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFModernAtomView.h>

@class NSArray;
@protocol MFCorecipientsIndicatorAtomDelegate;

@interface MFCorecipientsIndicatorAtom : MFModernAtomView
{
    _Bool _touchesWereCancelled;
    id <MFCorecipientsIndicatorAtomDelegate> _delegate;
    NSArray *_recipients;
}

@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) id <MFCorecipientsIndicatorAtomDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithRecipients:(id)arg1;
- (id)init;

@end

