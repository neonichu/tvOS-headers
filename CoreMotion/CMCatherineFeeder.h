//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject
{
    CMCatherineFeederInternal *_internal;
}

@property(readonly, nonatomic) CMCatherineFeederInternal *internal; // @synthesize internal=_internal;
- (void)feedCatherine:(double)arg1 confidence:(double)arg2;
- (void)dealloc;
- (id)init;

@end

