//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPTransitionController.h>

@class MPVideoViewController, UIImageView;

@interface MPAlternateTracksTransitionController : MPTransitionController
{
    MPVideoViewController *_videoController;
    UIImageView *_snapshotCoverImageView;
}

@property(nonatomic) __weak MPVideoViewController *videoController; // @synthesize videoController=_videoController;
- (void).cxx_destruct;
- (void)performTransition:(unsigned long long)arg1;

@end

