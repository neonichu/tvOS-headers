//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSCountedSet;
@protocol WBSHistoryLoader;

@protocol WBSHistoryLoaderDelegate <NSObject>
- (void)historyLoaderDidFinishLoading:(id <WBSHistoryLoader>)arg1;
- (void)historyLoader:(id <WBSHistoryLoader>)arg1 didLoadItems:(NSArray *)arg2 discardedItems:(NSArray *)arg3 stringsForUserTypeDomainExpansion:(NSCountedSet *)arg4;
@end

