//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerTableViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell
{
    UIView *_wrappedView;
    UIView *_wrappedViewContainer;
    struct CGSize _wrappedViewSize;
}

- (void).cxx_destruct;
- (id)_anyDateLabel;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
@property(retain, nonatomic) UIView *wrappedView;
- (void)_updateWrappedView;
- (void)_updateWrappedViewFrame;
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

