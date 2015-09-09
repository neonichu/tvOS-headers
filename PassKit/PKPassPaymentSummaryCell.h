//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKTableViewCell.h>

@class NSString, UIButton, UIImage, UILabel;
@protocol PKPassPaymentSummaryCellDelegate;

@interface PKPassPaymentSummaryCell : PKTableViewCell
{
    UILabel *_amountLabel;
    UIButton *_detailsButton;
    id <PKPassPaymentSummaryCellDelegate> _delegate;
}

+ (struct CGSize)_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(long long)arg3 width:(double)arg4;
+ (id)_amountTextFont;
+ (id)_detailTextFont;
+ (id)_primaryTextFont;
+ (double)heightWithPrimaryText:(id)arg1 primaryTextNumberOfLines:(long long)arg2 detailText:(id)arg3 amountText:(id)arg4 image:(id)arg5 showDetailsButton:(_Bool)arg6 width:(double)arg7;
@property(nonatomic) id <PKPassPaymentSummaryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_detailsButtonPressed:(id)arg1;
@property(nonatomic) _Bool showDetailsButton;
@property(retain, nonatomic) NSString *amountText;
@property(retain, nonatomic) NSString *detailText;
@property(retain, nonatomic) NSString *primaryText;
@property(nonatomic) long long primaryTextNumberOfLines;
@property(retain, nonatomic) UIImage *image;
- (struct CGRect)_separatorFrame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

