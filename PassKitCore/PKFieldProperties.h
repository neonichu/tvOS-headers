//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSError;

@interface PKFieldProperties : NSObject <NSSecureCoding>
{
    NSError *_error;
    unsigned long long _technology;
    unsigned long long _mode;
    NSArray *_merchantIdentifiers;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned long long technology; // @synthesize technology=_technology;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTechnology:(unsigned long long)arg1 mode:(unsigned long long)arg2 error:(id)arg3;
- (id)initWithTechnology:(unsigned long long)arg1 mode:(unsigned long long)arg2 merchantIdentifiers:(id)arg3;

@end

