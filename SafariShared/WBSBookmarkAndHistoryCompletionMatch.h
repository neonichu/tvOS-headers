//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSURLCompletionMatch.h>

@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch
{
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> _match;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float weight;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
@property(readonly, nonatomic) id <WBSURLCompletionMatchData> data;
- (id)initWithBookmarkAndHistoryCompletionMatch:(PassRefPtr_8dece646)arg1;

@end

