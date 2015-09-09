//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICSearchIndexable-Protocol.h>

@class ICSearchIndexerContext, NSArray, NSNumber, NSString, NSURL;

@protocol ICSearchIndexableNote <ICSearchIndexable>
- (NSNumber *)integerId;
- (NSURL *)appURLForIndexerContext:(ICSearchIndexerContext *)arg1;
- (NSString *)contentInfoText;
- (NSString *)noteAsPlainTextWithoutTitle;
- (NSString *)title;
- (NSArray *)searchableContentKeyPaths;
@end

