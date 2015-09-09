//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _CLLocationManagerRoutineProxy;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerRoutine : NSObject
{
    _CLLocationManagerRoutineProxy *_locationManagerRoutineProxy;
}

@property(retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy; // @synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy;
@property(nonatomic) id <CLLocationManagerDelegate> delegate;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)dealloc;
- (id)init;

@end

