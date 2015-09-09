//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PSIDatabase;
@protocol OS_dispatch_queue;

@interface PSIQuery : NSObject
{
    PSIDatabase *_idx;
    NSObject<OS_dispatch_queue> *_syncQueue;
    CDUnknownBlockType _earlyNotificationHandler;
    _Bool _didStart;
    _Bool _isCanceled;
    _Bool _isWildcardQuery;
    int _queryId;
    NSString *_searchText;
}

@property(readonly, nonatomic) _Bool isWildcardQuery; // @synthesize isWildcardQuery=_isWildcardQuery;
@property(readonly, nonatomic) int queryId; // @synthesize queryId=_queryId;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, getter=isCanceled) _Bool canceled;
- (void)cancel;
- (void)runWithResultsHandler:(CDUnknownBlockType)arg1;
- (void)setEarlyResultsNotificationHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithQueryId:(int)arg1 index:(id)arg2 searchText:(id)arg3 isWildcardQuery:(_Bool)arg4;

@end

