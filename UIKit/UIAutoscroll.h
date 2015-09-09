//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, UIView;
@protocol UIAutoscrollContainer;

__attribute__((visibility("hidden")))
@interface UIAutoscroll : NSObject
{
    id m_target;
    struct CGPoint m_point;
    UIView<UIAutoscrollContainer> *m_scrollContainer;
    int m_directions;
    double m_repeatInterval;
    NSTimer *m_timer;
    unsigned long long m_count;
    _Bool m_active;
    _Bool m_disabled;
    id _target;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) _Bool disabled; // @synthesize disabled=m_disabled;
@property(nonatomic) _Bool active; // @synthesize active=m_active;
@property(nonatomic) unsigned long long count; // @synthesize count=m_count;
@property(nonatomic) double repeatInterval; // @synthesize repeatInterval=m_repeatInterval;
@property(nonatomic) int directions; // @synthesize directions=m_directions;
@property(nonatomic) struct CGPoint point; // @synthesize point=m_point;
@property(retain, nonatomic) UIView<UIAutoscrollContainer> *scrollContainer; // @synthesize scrollContainer=m_scrollContainer;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
- (void)invalidate;
- (_Bool)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(struct CGPoint)arg3 directions:(int)arg4 repeatInterval:(double)arg5;
- (void)dealloc;

@end

