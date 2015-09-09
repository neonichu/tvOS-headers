//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVHomeSharingServices/NSCopying-Protocol.h>
#import <TVHomeSharingServices/NSSecureCoding-Protocol.h>

@class TVHSSDataServerID;

@interface TVHSSLastAccessedMediaServerInfo : NSObject <NSSecureCoding, NSCopying>
{
    TVHSSDataServerID *_serverID;
    unsigned long long _mediaCategory;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long mediaCategory; // @synthesize mediaCategory=_mediaCategory;
@property(retain, nonatomic) TVHSSDataServerID *serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;
- (_Bool)_isEqualToMediaServerAccessInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

