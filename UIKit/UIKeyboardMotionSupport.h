//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSString, UIScreen;
@protocol UISplitKeyboardSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject>
{
    UIScreen *_screen;
    id <UISplitKeyboardSource> _controller;
}

+ (id)supportForScreen:(id)arg1;
@property(nonatomic) id <UISplitKeyboardSource> masterController;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)dealloc;
@property(readonly) UIScreen *_intendedScreen;
@property(readonly) NSDictionary *_options;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

