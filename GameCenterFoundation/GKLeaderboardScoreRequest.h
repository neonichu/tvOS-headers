//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKPlayerInternal, NSString;

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding>
{
    GKPlayerInternal *_playerInternal;
    NSString *_gameBundleID;
    NSString *_identifier;
    NSString *_groupIdentifier;
    _Bool _friendsOnly;
    long long _timeScope;
    _Bool _prefetch;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestForPlayerInternals:(id)arg1;
+ (id)requestForRankRange:(struct _NSRange)arg1;
@property(nonatomic, getter=isPrefetch) _Bool prefetch; // @synthesize prefetch=_prefetch;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(nonatomic) _Bool friendsOnly; // @synthesize friendsOnly=_friendsOnly;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *gameBundleID; // @synthesize gameBundleID=_gameBundleID;
@property(copy, nonatomic) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

