//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface TVLHighlightingImageView : UIView
{
    UIImageView *_imageView;
    UIImageView *_highlightedImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *highlightedImage;
@property(retain, nonatomic) UIImage *image;
- (void)setHighlightProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

