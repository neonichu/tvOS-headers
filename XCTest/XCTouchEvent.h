//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@interface XCTouchEvent : NSObject <NSSecureCoding>
{
    unsigned long long _touchEventType;
    double _offset;
    struct CGPoint _coordinate;
}

+ (id)touchEventWithType:(unsigned long long)arg1 coordinate:(struct CGPoint)arg2 offset:(double)arg3;
+ (_Bool)supportsSecureCoding;
@property double offset; // @synthesize offset=_offset;
@property struct CGPoint coordinate; // @synthesize coordinate=_coordinate;
@property unsigned long long touchEventType; // @synthesize touchEventType=_touchEventType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

