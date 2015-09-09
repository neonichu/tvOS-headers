//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVImageView, TVItemSummaryView, TVItemTitleView, TVSImageProxy, UILabel;

@interface TVMetadataView : UIView
{
    TVItemTitleView *_titleView;
    TVItemSummaryView *_summaryView;
    UILabel *_footnoteLabel;
    double _maxImageWidth;
    UIView *_upperMetadataView;
    TVImageView *_imageView;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *upperMetadataView; // @synthesize upperMetadataView=_upperMetadataView;
@property(nonatomic) double maxImageWidth; // @synthesize maxImageWidth=_maxImageWidth;
@property(readonly, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(readonly, nonatomic) TVItemSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(readonly, nonatomic) TVItemTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (struct CGSize)_maximumArtworkSize;
- (_Bool)_shouldLeftAlignArtwork;
- (id)_dividerColor;
- (id)_summaryColor;
- (id)_footnoteLabel;
@property(retain, nonatomic) TVSImageProxy *imageProxy;
- (void)layoutSubviews;
- (Class)_titleViewClass;
- (id)initWithFrame:(struct CGRect)arg1;

@end

