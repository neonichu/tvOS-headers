//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayMode;

@interface TVSDisplayMode : NSObject
{
    _Bool _isVirtual;
    CADisplayMode *_caDisplayMode;
    double _refreshRate;
}

@property(readonly, nonatomic) _Bool isVirtual; // @synthesize isVirtual=_isVirtual;
@property(readonly, nonatomic) double refreshRate; // @synthesize refreshRate=_refreshRate;
@property(readonly, nonatomic) CADisplayMode *caDisplayMode; // @synthesize caDisplayMode=_caDisplayMode;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDisplayMode:(id)arg1 refreshRate:(double)arg2 isVirtual:(_Bool)arg3;

@end

