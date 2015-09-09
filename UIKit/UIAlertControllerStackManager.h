//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIAlertControllerStackManager : NSObject
{
    NSMutableArray *_alertControllerStack;
    NSMutableArray *_hiddenAlertControllers;
}

+ (id)sharedStackManager;
- (void).cxx_destruct;
- (long long)_alertControllerStackCount;
- (_Bool)_alertControllerShouldBeTrackedInStack:(id)arg1;
- (void)_displayedAlertControllersChanged;
- (void)_didHideAlertController:(id)arg1;
- (void)_willHideAlertController:(id)arg1;
- (void)_willShowAlertController:(id)arg1;
- (id)_topAlertControllerInStack;
- (void)_removeAlertControllerFromStack:(id)arg1;
- (void)_addAlertControllerToStack:(id)arg1;
- (void)_showHiddenStackedAlertControllers;
- (void)_hideStackedAlertControllers;
- (void)_alertControllerDidDisappear:(id)arg1;
- (void)_alertControllerWillDisappear:(id)arg1;
- (void)_alertControllerDidAppear:(id)arg1;
- (void)_alertControllerWillAppear:(id)arg1;
- (id)init;

@end

