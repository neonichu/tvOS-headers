//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUniform;

__attribute__((visibility("hidden")))
@interface SKUniformInfo : NSObject
{
    unsigned long long seed;
    unsigned long long textureTarget;
    SKUniform *uniform;
}

@property(retain) SKUniform *uniform; // @synthesize uniform;
@property unsigned long long textureTarget; // @synthesize textureTarget;
@property unsigned long long seed; // @synthesize seed;
- (void).cxx_destruct;
- (id)init;

@end

