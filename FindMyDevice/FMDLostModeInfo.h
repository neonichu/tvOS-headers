//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding>
{
    _Bool _lostModeEnabled;
    NSString *_message;
    NSString *_phoneNumber;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool lostModeEnabled; // @synthesize lostModeEnabled=_lostModeEnabled;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

