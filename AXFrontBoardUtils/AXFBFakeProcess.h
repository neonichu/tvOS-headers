//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXFBFakeProcessState, NSString;

@interface AXFBFakeProcess : NSObject
{
    AXFBFakeProcessState *_state;
    NSString *_bundleIdentifier;
}

@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) AXFBFakeProcessState *state; // @synthesize state=_state;
- (void)dealloc;

@end

