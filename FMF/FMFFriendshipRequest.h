//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class FMFHandle, NSDate, NSSet, NSString;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>
{
    long long _requestType;
    FMFHandle *_fromHandle;
    NSSet *_toHandles;
    NSDate *_endDate;
    NSString *_groupId;
    NSString *_requestId;
}

+ (_Bool)supportsSecureCoding;
+ (id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(long long)arg3 groupId:(id)arg4 withEndDate:(id)arg5;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSSet *toHandles; // @synthesize toHandles=_toHandles;
@property(retain, nonatomic) FMFHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(long long)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6;

@end

