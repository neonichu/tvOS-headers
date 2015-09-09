//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplicationRotationFollowingControllerNoTouches.h>

#import <UIKit/UIInputViewAnimationHost-Protocol.h>
#import <UIKit/UISplitKeyboardSource-Protocol.h>
#import <UIKit/_UIRemoteKeyboardDistributedViewSource-Protocol.h>
#import <UIKit/_UIRemoteKeyboardViewSource-Protocol.h>
#import <UIKit/_UITextEffectsSceneObserver-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIInputViewController, UIInputViewPlacementTransition, UIInputViewSet, UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIKBInputBackdropView, UIView;
@protocol _UIRemoteKeyboardControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UISplitKeyboardSource, UIInputViewAnimationHost, _UIRemoteKeyboardViewSource, _UITextEffectsSceneObserver, _UIRemoteKeyboardDistributedViewSource>
{
    NSMutableArray *_animationStyleStack;
    int _suppressedCallbacks;
    int _suppressedNotifications;
    _Bool _isChangingPlacement;
    _Bool _isChangingInputViews;
    _Bool _requiresConstraintUpdate;
    int _hiddenCount;
    _Bool _inhibitingHiding;
    unsigned long long _rotationState;
    _Bool _disablePlacementChanges;
    _Bool _suppressUpdateVisibilityConstraints;
    NSArray *_rootViewConstraints;
    NSMutableDictionary *_inputViewEdgeConstraints;
    NSMutableDictionary *_accessoryViewEdgeConstraints;
    NSMutableDictionary *_assistantViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;
    NSMutableDictionary *_assistantBackdropViewEdgeConstraints;
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;
    UIView *_preRotationSnapshot;
    struct CGSize _preRotationInputViewSize;
    struct CGSize _preRotationInputAssistantViewSize;
    struct CGSize _preRotationInputAccessoryViewSize;
    struct CGAffineTransform _preRotationInputViewTransform;
    struct CGAffineTransform _preRotationInputAssistantViewTransform;
    struct CGAffineTransform _preRotationInputAccessoryViewTransform;
    UIInputViewSetNotificationInfo *_rotationInfo;
    SEL _interactiveTransitionCleanupSelector;
    struct CGRect _preLayoutHostViewFrame;
    _Bool _didOverridePreLayoutHostViewFrame;
    _Bool _didPostLayoutNotification;
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;
    _Bool _wasOnScreen;
    NSString *_lastKeyboardID;
    _Bool _shouldNotifyRemoteKeyboards;
    UIView *_hostView;
    UIInputViewSet *_inputViewSet;
    UIInputViewSetPlacement *_placement;
    UIInputViewController *_inputViewController;
    UIInputViewController *_inputAssistantViewController;
    UIInputViewController *_inputAccessoryViewController;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBInputBackdropView *_inputAssistantBackdropView;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    NSArray *_visibilityConstraints;
    NSLayoutConstraint *_verticalVisibilityConstraint;
    UIInputViewSetPlacement *_postRotationPlacement;
    UIInputViewSet *_postRotationInputViewSet;
    UIInputViewSetNotificationInfo *_postRotationInputViewNotificationInfo;
    UIInputViewSetNotificationInfo *_templateNotificationInfo;
    UIInputViewPlacementTransition *_currentTransition;
    id <_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_assistantViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
}

+ (id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2;
+ (_Bool)_doesOverrideLegacyFullScreenLayout;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *assistantViewHeightConstraint; // @synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // @synthesize inputViewHeightConstraint=_inputViewHeightConstraint;
@property(retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(nonatomic) _Bool shouldNotifyRemoteKeyboards; // @synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards;
@property(retain, nonatomic) UIInputViewPlacementTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *templateNotificationInfo; // @synthesize templateNotificationInfo=_templateNotificationInfo;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *postRotationInputViewNotificationInfo; // @synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo;
@property(retain, nonatomic) UIInputViewSet *postRotationInputViewSet; // @synthesize postRotationInputViewSet=_postRotationInputViewSet;
@property(retain, nonatomic) UIInputViewSetPlacement *postRotationPlacement; // @synthesize postRotationPlacement=_postRotationPlacement;
@property(retain, nonatomic) NSLayoutConstraint *verticalVisibilityConstraint; // @synthesize verticalVisibilityConstraint=_verticalVisibilityConstraint;
@property(retain, nonatomic) NSArray *visibilityConstraints; // @synthesize visibilityConstraints=_visibilityConstraints;
@property(retain, nonatomic, setter=setInputAccessoryBackdropView:) UIKBInputBackdropView *_inputAccessoryBackdropView; // @synthesize _inputAccessoryBackdropView;
@property(retain, nonatomic, setter=setInputAssistantBackdropView:) UIKBInputBackdropView *_inputAssistantBackdropView; // @synthesize _inputAssistantBackdropView;
@property(retain, nonatomic, setter=setInputBackdropView:) UIKBInputBackdropView *_inputBackdropView; // @synthesize _inputBackdropView;
@property(retain, nonatomic) UIInputViewController *_inputAccessoryViewController; // @synthesize _inputAccessoryViewController;
@property(retain, nonatomic) UIInputViewController *_inputAssistantViewController; // @synthesize _inputAssistantViewController;
@property(retain, nonatomic) UIInputViewController *_inputViewController; // @synthesize _inputViewController;
@property(nonatomic) UIInputViewSetPlacement *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
@property(readonly, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (_Bool)inhibitRotationAnimation;
- (void)transferPlacementStateToInputWindowController:(id)arg1;
- (void)setPlacementChangeDisabled:(_Bool)arg1 withPlacement:(id)arg2;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1;
- (void)keyboardHeightChangeDone;
- (void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)animateAccessoryViewVisibility:(_Bool)arg1 withDuration:(double)arg2;
- (_Bool)isSplitting;
- (_Bool)isTranslating;
@property(readonly, nonatomic) _Bool isChangingPlacement;
@property(readonly, nonatomic) _Bool isOnScreenRotating;
- (_Bool)isRotating;
- (_Bool)isUndocked;
- (_Bool)isOnScreen;
- (struct CGRect)visibleFrame;
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(_Bool)arg2;
- (void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
- (void)setRotationAwarePlacement:(id)arg1;
- (void)setPlacement:(id)arg1 starting:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)currentPresentationPlacement;
- (unsigned long long)changeToInputViewSet:(id)arg1;
- (void)updateInputAssistantView:(id)arg1;
- (void)invalidateInputAccessoryView;
- (void)invalidateInputAssistantView;
- (void)invalidateInputView;
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)transitionDidFinish:(_Bool)arg1;
- (void)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)generateNotificationsForStart:(_Bool)arg1;
- (void)postTransitionEndNotification;
@property(readonly, nonatomic) double positionConstraintConstant;
- (void)didFinishTranslation;
- (void)finishSplitTransition:(_Bool)arg1;
- (void)willBeginTranslation;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (int)_clipCornersOfView:(id)arg1;
- (void)_updateBackdropViews;
- (id)splitKeyboardController;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
@property(readonly, nonatomic) long long keyboardOrientation;
@property(readonly, retain, nonatomic) UIInputViewSetPlacement *placementIgnoringRotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)_useLiveRotation;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2;
- (void)finishScrollViewTransition;
- (id)scrollDismissController;
- (void)setInputViewsHidden:(_Bool)arg1;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(_Bool)arg2;
- (struct CGRect)transitioningFrame;
- (id)transitioningView;
- (id)viewForTransitionScreenSnapshot;
- (void)syncToExistingAnimations;
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)mergeTransitionIfNecessaryWithTransition:(id)arg1;
- (void)performOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;
- (id)nextAnimationStyle;
- (void)popAnimationStyle;
- (void)pushAnimationStyle:(id)arg1;
- (void)checkPlaceholdersForRemoteKeyboards;
- (void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)transferActiveNotificationInfoToInfo:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_forcePreLayoutHostViewFrame;
- (void)updateAppearStatesForPlacement:(id)arg1 start:(_Bool)arg2 animated:(_Bool)arg3;
- (void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(_Bool)arg3;
- (int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(_Bool)arg3;
- (void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (id)initialNotificationInfo;
- (void)didSnapshot;
- (void)willSnapshot;
- (void)hostAppSceneBoundsChanged;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (void)updateViewConstraints;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateConstraintInsets;
- (void)updateViewSizingConstraints;
- (void)clearViewSizingConstraints:(unsigned long long)arg1;
- (struct UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(_Bool)arg2;
- (_Bool)isViewLandscape;
- (_Bool)_subviewUsesClassicLayout:(id)arg1;
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3;
- (id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;
- (struct CGRect)_boundsForOrientation:(long long)arg1;
- (struct CGPoint)_centerForOrientation:(long long)arg1;
- (struct CGRect)_defaultInitialViewFrame;
- (void)performWithSafeTransitionFrames:(CDUnknownBlockType)arg1;
- (void)performOperations:(CDUnknownBlockType)arg1 withTemplateNotificationInfo:(id)arg2;
- (void)performWithoutCallbacksOrNotifications:(CDUnknownBlockType)arg1;
- (void)performWithoutAppearanceCallbacks:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIView *_inputAccessoryView;
@property(readonly, nonatomic) UIView *_inputAssistantView;
@property(readonly, nonatomic) UIView *_inputView;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)updateInputAssistantViewForInputViewSet:(id)arg1;
- (void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2;
- (void)registerPowerLogEvent:(_Bool)arg1;
@property(readonly, nonatomic) UIKBInputBackdropView *inputViewBackdrop;
- (void)viewDidLoad;
- (void)loadView;
- (id)containerView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) UIView *view;

@end

