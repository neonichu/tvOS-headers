//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKTileSelection : NSObject
{
    long long _tileSize;
    _Bool _bootstrap;
    unsigned long long _maxZ;
    double _lodBias;
}

@property(nonatomic) double lodBias; // @synthesize lodBias=_lodBias;
@property(nonatomic) unsigned long long maxZ; // @synthesize maxZ=_maxZ;
@property(nonatomic) _Bool bootstrap; // @synthesize bootstrap=_bootstrap;
@property(nonatomic) long long tileSize; // @synthesize tileSize=_tileSize;
- (CDStruct_6adf2384)relevantTilesForContext:(id)arg1;
- (id)keysForContext:(id)arg1 neighbors:(id)arg2 selectionScale:(float)arg3;
- (id)init;

@end

