//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _UIIdleModeLayoutAttributes : NSObject
{
    _Bool _wantsDimmingOverlay;
    double _alphaOffset;
    struct CGPoint _centerOffset;
    struct CGAffineTransform _transform;
}

@property(nonatomic) _Bool wantsDimmingOverlay; // @synthesize wantsDimmingOverlay=_wantsDimmingOverlay;
@property(nonatomic) double alphaOffset; // @synthesize alphaOffset=_alphaOffset;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
- (id)init;

@end

