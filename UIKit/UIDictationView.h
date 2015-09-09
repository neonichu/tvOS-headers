//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/SUICFlamesViewDelegate-Protocol.h>

@class NSString, SUICFlamesView, UIButton, UIDictationMeterView, UIKeyboardDicationBackground;

__attribute__((visibility("hidden")))
@interface UIDictationView : UIView <SUICFlamesViewDelegate>
{
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    UIButton *_waveTapEndpointButton;
    int _state;
    _Bool _keyboardInTransition;
    _Bool _automaticAppearanceWasEnabled;
    SUICFlamesView *_flamesView;
    UIDictationMeterView *_meterView;
}

+ (struct CGSize)layoutSize;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (struct CGSize)viewSize;
+ (Class)dictationViewClass;
- (float)audioLevelForFlamesView:(id)arg1;
- (_Bool)visible;
- (void)endpointButtonPressed;
- (void)dealloc;
- (_Bool)drawsOwnBackground;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setState:(int)arg1;
- (_Bool)isShowing;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint)backgroundOffset;
- (struct CGPoint)contentOffset;
- (struct CGPoint)positionForShow;
- (void)show;
- (void)applicationEnteredBackground;
- (struct CGSize)currentScreenSize;
- (id)endpointButton;
- (void)highlightEndpointButton;
- (void)applicationWillResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

