//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABackdropLayer;

__attribute__((visibility("hidden")))
@interface _UIBackdropEffectView : UIView
{
    CABackdropLayer *_backdropLayer;
    double _zoom;
}

+ (Class)layerClass;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(retain, nonatomic) CABackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
- (void).cxx_destruct;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

