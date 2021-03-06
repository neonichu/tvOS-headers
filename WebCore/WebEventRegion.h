//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/NSCopying-Protocol.h>

@interface WebEventRegion : NSObject <NSCopying>
{
    struct CGPoint p1;
    struct CGPoint p2;
    struct CGPoint p3;
    struct CGPoint p4;
}

- (struct CGPoint)p4;
- (struct CGPoint)p3;
- (struct CGPoint)p2;
- (struct CGPoint)p1;
- (struct FloatQuad)quad;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPoints:(struct CGPoint)arg1:(struct CGPoint)arg2:(struct CGPoint)arg3:(struct CGPoint)arg4;

@end

