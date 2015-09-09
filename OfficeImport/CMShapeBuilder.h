//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMShapeBuilder : NSObject
{
    int _type;
    OADOrientedBounds *_orientedBounds;
    int _format;
    NSDictionary *_adjustValues;
}

+ (struct CGRect)canonicalBounds;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;
- (float)maxAdjustedValue;
- (_Bool)isOffice12;
- (struct CGAffineTransform)affineTransform;
- (void)setAdjustValues:(id)arg1;
- (void)setFileFormat:(int)arg1;
- (void)setShapeType:(int)arg1;
- (void)setOrientedBounds:(id)arg1;
- (void)dealloc;

@end

