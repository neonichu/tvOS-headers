//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUSystemMediaControlsView;

@protocol MPUSystemMediaControlsViewDelegate <NSObject>

@optional
- (void)mediaControlsViewDidCancelBuyAlbumDownloadAction:(MPUSystemMediaControlsView *)arg1;
- (void)mediaControlsViewDidConfirmBuyAlbumAction:(MPUSystemMediaControlsView *)arg1;
- (void)mediaControlsViewDidCancelBuyTrackDownloadAction:(MPUSystemMediaControlsView *)arg1;
- (void)mediaControlsViewDidConfirmBuyTrackAction:(MPUSystemMediaControlsView *)arg1;
@end

