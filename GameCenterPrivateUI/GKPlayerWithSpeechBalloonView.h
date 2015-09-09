//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GKPlayer, GKSpeechBalloonBackgroundView, NSArray, NSString, UITextView;
@protocol GKPlayerPhotoContainer;

@interface GKPlayerWithSpeechBalloonView : UIView
{
    UITextView *_speechTextView;
    UIView<GKPlayerPhotoContainer> *_photoView;
    GKSpeechBalloonBackgroundView *_balloonView;
    NSArray *_replaceableConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (id)instantiatePhotoContainer;
@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(retain, nonatomic) GKSpeechBalloonBackgroundView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) UIView<GKPlayerPhotoContainer> *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UITextView *speechTextView; // @synthesize speechTextView=_speechTextView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) unsigned char tipDirection;
@property(retain, nonatomic) NSString *speechText;
- (void)_updateSpeechText:(id)arg1;
@property(nonatomic) unsigned char drawStyle;
@property(retain, nonatomic) GKPlayer *player;
- (void)updateConstraints;
- (id)metrics;
- (void)dealloc;
- (void)setupSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

