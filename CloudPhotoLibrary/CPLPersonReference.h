//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_personIdentifier;
    NSDictionary *_extraProperties;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *extraProperties; // @synthesize extraProperties=_extraProperties;
@property(copy, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)serializedString;
- (id)initWithSerializedString:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

