//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileSecurity.h>

#import <CoreFoundation/NSCoding-Protocol.h>
#import <CoreFoundation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSCoding>
{
    struct _filesec *_filesec;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(struct _filesec *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;
- (_Bool)clearProperties:(unsigned long long)arg1;
- (_Bool)setAccessControlList:(struct _acl *)arg1;
- (_Bool)copyAccessControlList:(struct _acl **)arg1;
- (_Bool)setGroupUUID:(unsigned char [16])arg1;
- (_Bool)getGroupUUID:(unsigned char (*)[16])arg1;
- (_Bool)setOwnerUUID:(unsigned char [16])arg1;
- (_Bool)getOwnerUUID:(unsigned char (*)[16])arg1;
- (_Bool)setMode:(unsigned short)arg1;
- (_Bool)getMode:(unsigned short *)arg1;
- (_Bool)setGroup:(unsigned int)arg1;
- (_Bool)getGroup:(unsigned int *)arg1;
- (_Bool)setOwner:(unsigned int)arg1;
- (_Bool)getOwner:(unsigned int *)arg1;
- (struct _filesec *)_filesec;

@end

