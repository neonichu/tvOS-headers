//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNRenderTarget : NSObject
{
    CDStruct_2e3d5ba3 _description;
    // Error parsing type: , name: _size
    id _texture;
    NSString *_name;
    long long _referenceCount;
    long long _timeStamp;
}

@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) long long referenceCount; // @synthesize referenceCount=_referenceCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id texture; // @synthesize texture=_texture;
- (_Bool)matchesDescription:(CDStruct_2e3d5ba3 *)arg1 size: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) _Bool viewportDependant;
- (id)description;
- (void)dealloc;
- (id)initWithDescription:(CDStruct_2e3d5ba3 *)arg1 size: /* Error: Ran out of types for this method. */;

@end

