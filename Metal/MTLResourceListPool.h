//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLResourceListPool : NSObject
{
    struct _MTLResourceListPoolPrivate _priv;
    int _resourceListCapacity;
}

- (void)purge;
- (int)availableCount;
- (void)dealloc;
- (id)initWithResourceListCapacity:(int)arg1;

@end

