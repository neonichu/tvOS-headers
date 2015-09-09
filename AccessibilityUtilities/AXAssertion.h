//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXAssertion : NSObject
{
    NSString *_assertionType;
    NSString *_identifier;
}

+ (id)assertionWithType:(id)arg1 identifier:(id)arg2;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *assertionType; // @synthesize assertionType=_assertionType;
- (id)description;
- (void)_notifyServerAssertionWasRelinquished;
- (void)_notifyServerAssertionWasAcquired;
- (_Bool)_hasValidAssertionType;
- (void)dealloc;
- (id)initWithType:(id)arg1 identifier:(id)arg2;

@end

