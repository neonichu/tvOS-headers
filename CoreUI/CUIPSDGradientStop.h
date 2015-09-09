//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUI/NSCoding-Protocol.h>
#import <CoreUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying>
{
    double location;
}

+ (void)initialize;
- (_Bool)isOpacityStop;
- (_Bool)isColorStop;
- (_Bool)isDoubleStop;
- (void)setLocation:(double)arg1;
- (double)location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1;

@end

