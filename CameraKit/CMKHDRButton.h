//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKExpandableMenuButton.h>

@class UIImageView;

@interface CMKHDRButton : CMKExpandableMenuButton
{
    _Bool _allowsAutomaticHDR;
    UIImageView *__glyphView;
}

@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic) _Bool allowsAutomaticHDR; // @synthesize allowsAutomaticHDR=_allowsAutomaticHDR;
- (void).cxx_destruct;
- (void)reloadData;
- (id)hiddenIndexesWhileCollapsed;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImage;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (long long)indexForMode:(int)arg1;
- (int)modeForIndex:(long long)arg1;
@property(nonatomic) int HDRMode;
- (id)initWithExpansionOrientation:(long long)arg1;
- (void)_commonCMKHDRButtonInitialization;

@end

