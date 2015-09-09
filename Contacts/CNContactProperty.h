//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNContact, NSString;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_key;
    NSString *_identifier;
    CNContact *_internalContact;
}

+ (_Bool)supportsSecureCoding;
+ (id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
+ (id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
@property(retain, nonatomic) CNContact *internalContact; // @synthesize internalContact=_internalContact;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (int)multiValueIdentifier;
@property(readonly, nonatomic) id value;
@property(readonly, copy, nonatomic) NSString *label;
- (id)labeledValue;
- (id)labeledValueForContact:(id)arg1;
- (id)sourceContact;
@property(readonly, copy, nonatomic) CNContact *contact;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

