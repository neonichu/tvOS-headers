//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPCommentSummary, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPGetCommentsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_comments;
    NSData *_continuationMarker;
    CKDPCommentSummary *_summary;
    int _totalCount;
    struct {
        unsigned int totalCount:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) CKDPCommentSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)commentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commentsCount;
- (void)addComments:(id)arg1;
- (void)clearComments;
@property(readonly, nonatomic) _Bool hasSummary;
@property(readonly, nonatomic) _Bool hasContinuationMarker;
@property(nonatomic) _Bool hasTotalCount;

@end

