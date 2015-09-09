//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject
{
    CIBurstImageSetInternal *_priv;
}

+ (id)defaultVersionString;
+ (id)burstImageSetWithOptions:(id)arg1;
+ (id)burstImageSet;
- (_Bool)isAction;
- (_Bool)isPortrait;
- (void)setLoggingListener:(void *)arg1 withUserInfo:(void *)arg2;
- (double)secondsSinceStart;
- (id)statsForImageWithIdentifier:(id)arg1;
- (id)allImageIdentifiers;
- (id)imageClusterForIndex:(unsigned long long)arg1;
- (unsigned long long)imageClusterCount;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)coverImageIdentifier;
- (id)bestImageIdentifiers;
- (id)burstId;
- (id)initWithOptions:(id)arg1;
- (id)init;
- (void)dealloc;

@end

