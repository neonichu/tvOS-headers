//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMDrawingAction : NSObject
{
    int _type;
    id _value;
    float _floatValue;
}

- (id)description;
- (float)floatValue;
- (id)value;
- (int)type;
- (void)dealloc;
- (id)initWithType:(int)arg1 andFloatValue:(float)arg2;
- (id)initWithType:(int)arg1 andValue:(id)arg2;

@end

