//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIInputViewAnimationController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController>
{
    int _slide;
}

- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;
- (id)placementForSlideStart:(_Bool)arg1;
- (id)initWithSlide:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

