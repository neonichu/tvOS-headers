//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface UIPDFViewManager : NSObject
{
    UIView *_activeView;
}

+ (id)sharedViewManager;
- (void)viewReleased:(id)arg1;
- (void)makeViewActive:(id)arg1;

@end

