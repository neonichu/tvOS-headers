//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _RCViewAutoUpdatingFontObserver : NSObject
{
    id _notificationObserver;
    id _target;
}

+ (_Bool)canObserveFontsForTarget:(id)arg1;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyCurrentContentSizeToTarget;
- (id)initWithTarget:(id)arg1;

@end

