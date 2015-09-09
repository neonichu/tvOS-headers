//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/_UINavigationInteractiveTransitionBaseDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate>
{
    struct ViewGestureController *_gestureController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> _forwardTransitionController;
    struct WeakObjCPtr<UIView> _gestureRecognizerView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (_Bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (_Bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (_Bool)shouldBeginInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (int)directionForTransition:(id)arg1;
- (void)invalidate;
- (id)initWithViewGestureController:(struct ViewGestureController *)arg1 gestureRecognizerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

