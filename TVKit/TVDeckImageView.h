//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView;

@interface TVDeckImageView : UIView
{
    UIView *_pendingDisplayView;
    UIView *_displayView;
    UIImageView *_placeholderImageView;
    unsigned long long _viewType;
    double _imageLoadTimeout;
    _Bool _shuffledParade;
    _Bool _inOrderParade;
    NSArray *_imageProxies;
    UIImage *_placeholderImage;
    unsigned long long _deckViewParadeType;
    double _cycleInterval;
    double _transitionDuration;
    double _newDataTransitionDuration;
}

@property(nonatomic) double newDataTransitionDuration; // @synthesize newDataTransitionDuration=_newDataTransitionDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(nonatomic) unsigned long long deckViewParadeType; // @synthesize deckViewParadeType=_deckViewParadeType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic, getter=isInOrder) _Bool inOrderParade; // @synthesize inOrderParade=_inOrderParade;
@property(nonatomic, getter=isShuffled) _Bool shuffledParade; // @synthesize shuffledParade=_shuffledParade;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void).cxx_destruct;
- (unsigned long long)_viewTypeForNumberOfImages:(long long)arg1;
- (unsigned long long)_paradeThreshold;
- (void)_displayPlaceholderView;
- (void)_fadeToBlack;
- (void)_dissolveToView:(id)arg1;
- (void)setInOrder:(_Bool)arg1;
- (void)setShuffled:(_Bool)arg1;
- (void)resume;
- (_Bool)isPaused;
- (void)pause;
- (void)_scrollingParadeViewReadyNotification:(id)arg1;
- (void)_paradeViewReadyNotification:(id)arg1;
- (void)_legacyCrossfadeViewReadyNotification:(id)arg1;
- (void)_crossfadeViewReadyNotification:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

