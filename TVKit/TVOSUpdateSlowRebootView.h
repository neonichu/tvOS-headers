//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface TVOSUpdateSlowRebootView : UIView
{
    UILabel *_text;
    UIButton *_restart;
    CDUnknownBlockType _rebootAction;
}

@property(copy, nonatomic) CDUnknownBlockType rebootAction; // @synthesize rebootAction=_rebootAction;
- (void).cxx_destruct;
- (void)_didSelectRestart:(id)arg1;
- (id)preferredFocusedView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

