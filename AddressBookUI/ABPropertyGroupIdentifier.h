//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AddressBookUI/NSCopying-Protocol.h>

@interface ABPropertyGroupIdentifier : NSObject <NSCopying>
{
    int _property;
    void *_context;
}

+ (id)propertyGroupIdentifierWithProperty:(int)arg1 context:(void *)arg2;
@property(readonly, nonatomic) void *context; // @synthesize context=_context;
@property(readonly, nonatomic) int property; // @synthesize property=_property;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperty:(int)arg1 context:(void *)arg2;

@end

