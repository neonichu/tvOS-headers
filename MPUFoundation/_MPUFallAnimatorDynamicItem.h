//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/UIDynamicItem-Protocol.h>

@class NSString, UIBezierPath;

@interface _MPUFallAnimatorDynamicItem : NSObject <UIDynamicItem>
{
    struct CGPoint _center;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

