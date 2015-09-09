//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IKAppPlaylistBridge, NSArray, NSIndexSet;
@protocol IKAppMediaItem;

@protocol IKAppPlaylist

@optional
@property(readonly, nonatomic) __weak IKAppPlaylistBridge *bridge;
@property(readonly) unsigned long long count;
- (id <IKAppMediaItem>)objectAtIndex:(unsigned long long)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (void)insertObjects:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2;
- (void)removeObjectsAtIndexes:(NSIndexSet *)arg1;
@end

