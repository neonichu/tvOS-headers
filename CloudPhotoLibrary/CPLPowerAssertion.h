//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLPowerAssertion : NSObject
{
}

+ (id)powerAssertionStatus;
+ (void)setHasEnoughPower:(_Bool)arg1;
+ (void)enableSleep;
+ (void)disableSleep;
+ (void)_releaseAssertion;
+ (void)_retainAssertion;
+ (void)_doProtected:(CDUnknownBlockType)arg1;

@end

