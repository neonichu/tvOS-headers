//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor;

@interface MPUExtrasBorderedImageView : UIImageView
{
    _Bool _shouldDeferSettingTransform;
    _Bool _shouldUseTransformWhenReplicatingState;
    _Bool _shouldSkipImageWhenReplicatingState;
    struct CGAffineTransform _deferredTransform;
}

@property(nonatomic) _Bool shouldSkipImageWhenReplicatingState; // @synthesize shouldSkipImageWhenReplicatingState=_shouldSkipImageWhenReplicatingState;
@property(nonatomic) _Bool shouldUseTransformWhenReplicatingState; // @synthesize shouldUseTransformWhenReplicatingState=_shouldUseTransformWhenReplicatingState;
@property(nonatomic) _Bool shouldDeferSettingTransform; // @synthesize shouldDeferSettingTransform=_shouldDeferSettingTransform;
@property(nonatomic) struct CGAffineTransform deferredTransform; // @synthesize deferredTransform=_deferredTransform;
- (void)replicateStateFromImageView:(id)arg1;
@property(nonatomic) double borderWidth;
@property(copy, nonatomic) UIColor *borderColor;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;

@end

