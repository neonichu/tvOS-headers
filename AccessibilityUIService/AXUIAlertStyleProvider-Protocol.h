//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUIService/NSObject-Protocol.h>

@class UIColor, UIFont, UIImage;

@protocol AXUIAlertStyleProvider <NSObject>
- (double)alertFadeAnimationDurationForType:(unsigned long long)arg1;
- (int)alertPositionForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertEdgeInsetsForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertIconImageEdgeInsetsForType:(unsigned long long)arg1;
- (double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1;
- (double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)arg1;
- (UIColor *)alertSubtitleTextColorForType:(unsigned long long)arg1;
- (UIFont *)alertSubtitleTextFontForType:(unsigned long long)arg1;
- (double)alertTextLineHeightOffsetForType:(unsigned long long)arg1;
- (UIColor *)alertTextColorForType:(unsigned long long)arg1;
- (UIFont *)alertTextFontForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned long long)arg1;
- (_Bool)alertShouldGrowInAxis:(long long)arg1 forType:(unsigned long long)arg2;
- (struct CGSize)alertBackgroundSizeForType:(unsigned long long)arg1;
- (int)alertBackgroundStyleForType:(unsigned long long)arg1;

@optional
- (double)alertBackgroundCornerRadiusForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertBackgroundImageCapInsetsForType:(unsigned long long)arg1;
- (UIImage *)alertBackgroundImageForType:(unsigned long long)arg1;
@end

