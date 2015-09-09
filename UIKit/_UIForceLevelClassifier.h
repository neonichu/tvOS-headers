//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSObservationSource, NSString;
@protocol _UIForceLevelClassifierDelegate;

@interface _UIForceLevelClassifier : NSObject <NSObserver>
{
    NSObservationSource *_progressTouchForceObservable;
    NSMutableDictionary *_cachedProgressObservables;
    NSArray *_delegateObservations;
    _Bool _respectsSystemGestureTouchFiltering;
    long long _currentForceLevel;
    id <_UIForceLevelClassifierDelegate> _delegate;
    double _currentTouchForceMultiplier;
}

@property(nonatomic) _Bool respectsSystemGestureTouchFiltering; // @synthesize respectsSystemGestureTouchFiltering=_respectsSystemGestureTouchFiltering;
@property(nonatomic) double currentTouchForceMultiplier; // @synthesize currentTouchForceMultiplier=_currentTouchForceMultiplier;
@property(nonatomic) __weak id <_UIForceLevelClassifierDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentForceLevel; // @synthesize currentForceLevel=_currentForceLevel;
- (void).cxx_destruct;
- (void)_notifyDelegateOfProgress:(double)arg1 toForceLevel:(long long)arg2;
- (id)observableForProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;
- (id)observableForProgressToForceLevel:(long long)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)touchForceMultiplierDidChange;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (void)setCurrentForceLevel:(long long)arg1;
- (_Bool)wantsUnclampedForceValues;
- (void)reset;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

