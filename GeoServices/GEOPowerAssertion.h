//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPowerAssertion : NSObject
{
    NSString *_identifier;
    double _timeout;
    unsigned int _assertion;
}

- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end

