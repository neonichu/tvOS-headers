//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPBlockOperation.h>

@interface HAPTimedBlockedOperation : HAPBlockOperation
{
    double _timeout;
}

@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
- (unsigned long long)dispatchTimeout;
- (id)initWithTimeout:(double)arg1;
- (id)init;

@end

