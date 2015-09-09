//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString, SGPostalAddressComponents;

@interface SGPostalAddress : SGLabeledObject
{
    NSString *_cachedAddress;
    long long _cachedAddressDispatchOnceToken;
    NSString *_rawAddress;
    SGPostalAddressComponents *_components;
}

+ (id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) SGPostalAddressComponents *components; // @synthesize components=_components;
@property(readonly, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToPostalAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *address;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6;

@end

