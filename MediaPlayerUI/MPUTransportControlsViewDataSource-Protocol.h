//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUTransportControlsView, UIControl;
@protocol MPUTransportButton;

@protocol MPUTransportControlsViewDataSource <NSObject>
- (UIControl<MPUTransportButton> *)transportControlsView:(MPUTransportControlsView *)arg1 buttonForControlType:(long long)arg2;
@end

