//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKPass, PKPassView;

@protocol WLCardViewDelegate <NSObject>

@optional
- (_Bool)passViewBackGrowsCentered:(PKPassView *)arg1;
- (void)passViewDidResize:(PKPassView *)arg1 animated:(_Bool)arg2;
- (_Bool)passViewShouldResize:(PKPassView *)arg1;
- (void)passViewDidFlip:(PKPassView *)arg1 animated:(_Bool)arg2;
- (void)passViewWillFlip:(PKPassView *)arg1 animated:(_Bool)arg2;
- (_Bool)passViewShouldFlip:(PKPassView *)arg1;
- (void)passView:(PKPassView *)arg1 resizeButtonPressedForPass:(PKPass *)arg2;
- (void)passView:(PKPassView *)arg1 flipButtonPressedForPass:(PKPass *)arg2;
- (_Bool)passView:(PKPassView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)passView:(PKPassView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)passViewTapped:(PKPassView *)arg1;
@end

