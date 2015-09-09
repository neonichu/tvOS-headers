//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, SGName, SGRecordId;

@interface SGContact : NSObject <NSCopying, NSSecureCoding>
{
    SGRecordId *_recordId;
    SGName *_name;
    NSArray *_emailAddresses;
    NSArray *_phones;
    NSArray *_postalAddresses;
}

+ (id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(readonly, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(readonly, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, nonatomic) SGName *name; // @synthesize name=_name;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (_Bool)hasNonTrivialInfo;
- (id)cnContact;
- (id)detailForRecordId:(id)arg1;
- (_Bool)containsSuggestions;
- (id)description;
- (unsigned long long)richness;
- (id)addresses;
- (unsigned long long)hash;
- (_Bool)isEqualToContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)setPostalAddresses:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

