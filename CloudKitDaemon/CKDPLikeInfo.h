//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CKDPLikeInfo : PBCodable <NSCopying>
{
    int _likeCount;
    _Bool _likedByCurrentUser;
    struct {
        unsigned int likeCount:1;
        unsigned int likedByCurrentUser:1;
    } _has;
}

@property(nonatomic) _Bool likedByCurrentUser; // @synthesize likedByCurrentUser=_likedByCurrentUser;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLikedByCurrentUser;
@property(nonatomic) _Bool hasLikeCount;

@end

