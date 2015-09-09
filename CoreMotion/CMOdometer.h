//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMOdometerProxy;
@protocol CMOdometerDelegate;

@interface CMOdometer : NSObject
{
    id <CMOdometerDelegate> _delegate;
    CMOdometerProxy *_odometerProxy;
}

@property(readonly, nonatomic) CMOdometerProxy *odometerProxy; // @synthesize odometerProxy=_odometerProxy;
@property(nonatomic) id <CMOdometerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopOdometerUpdates;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
