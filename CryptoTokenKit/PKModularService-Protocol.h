//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/NSObject-Protocol.h>

@class NSBundle;
@protocol PKModularService, PKSubsystemServicePersonality;

@protocol PKModularService <NSObject>
+ (id <PKModularService>)initForPlugInKit;

@optional
- (void)communicationsFailed:(id <PKSubsystemServicePersonality>)arg1;
- (void)endUsing:(id <PKSubsystemServicePersonality>)arg1;
- (void)beginUsing:(id <PKSubsystemServicePersonality>)arg1 withBundle:(NSBundle *)arg2;
@end

