//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface CNTransportButton : UIButton
{
    long long _transportType;
    UIColor *_glyphColor;
    UIImage *_image;
}

+ (id)transportButton;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
- (void).cxx_destruct;
- (id)imageNameForType:(long long)arg1;
- (void)_updateImageWithType:(long long)arg1;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;

@end

