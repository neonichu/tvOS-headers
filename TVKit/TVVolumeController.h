//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, TVVolumeHUDView;

@interface TVVolumeController : NSObject
{
    TVVolumeHUDView *_HUDView;
    NSTimer *_hideTimer;
}

+ (id)sharedVolumeControl;
- (void).cxx_destruct;
- (void)_handleHideTimer:(id)arg1;
- (void)_hideHUD;
- (void)_showHUD;
- (double)_step;
- (float)_currentVolume;
- (void)volumeStepDown;
- (void)volumeStepUp;

@end

