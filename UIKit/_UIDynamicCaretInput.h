//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput : UIView
{
    struct CGContext *_bitmapContext;
    long long _fadeCount;
    struct CGPoint _lastViewLoc;
    struct CGRect _inkedAreaOfBitmapContext;
    NSTimer *_fadeTimer;
    TIHandwritingStrokes *_accumulatedStrokes;
    UIDelayedAction *_committedAction;
    _UIDynamicCaretDot *_dotView;
}

@property(retain, nonatomic) _UIDynamicCaretDot *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIDelayedAction *committedAction; // @synthesize committedAction=_committedAction;
@property(retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // @synthesize accumulatedStrokes=_accumulatedStrokes;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
- (void).cxx_destruct;
- (void)cancelTouchAtPoint:(struct CGPoint)arg1;
- (void)endTouchAtPoint:(struct CGPoint)arg1;
- (void)addTouchAtPoint:(struct CGPoint)arg1;
- (void)startTouchAtPoint:(struct CGPoint)arg1;
- (void)addInkPoint:(struct CGPoint)arg1 fromLastPoint:(_Bool)arg2;
- (void)send;
- (void)clearAndNotify:(_Bool)arg1;
- (void)committedStrokes;
- (void)log;
- (void)drawPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_fadeInk;
- (void)clearFadeTimer;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (double)inkWidth;
@property(readonly, nonatomic) _Bool isInking;
@property(readonly, nonatomic) _Bool hasInk;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

