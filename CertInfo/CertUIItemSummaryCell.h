//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface CertUIItemSummaryCell : UITableViewCell
{
    UIImageView *_itemImageView;
    UIView *_itemTitleView;
    UILabel *_itemTitleLabel;
    UILabel *_itemSubtitleLabel;
}

+ (double)titleOriginX;
@property(retain, nonatomic) UILabel *itemSubtitleLabel; // @synthesize itemSubtitleLabel=_itemSubtitleLabel;
@property(retain, nonatomic) UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) UIView *itemTitleView; // @synthesize itemTitleView=_itemTitleView;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (double)cellHeight;
- (void)_setupConstraints;
- (id)_profileImageAppropriateForDevice;
- (void)_setupCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

