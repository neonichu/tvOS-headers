//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator
{
}

- (void)skipDescendants;
- (void)skipDescendents;
@property(readonly) unsigned long long level;
@property(readonly, copy) NSDictionary *directoryAttributes;
@property(readonly, copy) NSDictionary *fileAttributes;
- (id)nextObject;

@end

