//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKDayAllDayView, EKEvent;

@protocol EKDayAllDayViewDelegate <NSObject>

@optional
- (void)allDayViewDidLayoutSubviews:(EKDayAllDayView *)arg1;
- (void)allDayView:(EKDayAllDayView *)arg1 didSelectEvent:(EKEvent *)arg2;
@end

