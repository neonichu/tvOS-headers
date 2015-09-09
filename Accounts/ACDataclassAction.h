//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSSecureCoding-Protocol.h>

@interface ACDataclassAction : NSObject <NSSecureCoding>
{
    _Bool _isDestructive;
    long long _type;
}

+ (id)destructiveActionWithType:(long long)arg1;
+ (id)actionWithType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isDestructive; // @synthesize isDestructive=_isDestructive;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 destructivity:(_Bool)arg2;

@end

