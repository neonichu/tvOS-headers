//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIFont, UILabel;

@interface MFCaptionLabel : UIView
{
    _Bool _needsLabelUpdate;
    void *_addressBook;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    UILabel *_recipientLabel;
    UIButton *_moreButton;
}

+ (id)_propertiesThatNeedLabelUpdates;
+ (id)defaultFont;
@property(readonly, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) UILabel *recipientLabel; // @synthesize recipientLabel=_recipientLabel;
@property(retain, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(retain, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(retain, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)clear;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
- (id)viewForBaselineLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setNeedsLabelUpdate;
- (void)_updateLabel;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGPoint baselinePoint;
- (id)initWithAddressBook:(void *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

