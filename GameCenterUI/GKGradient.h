//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GKGradient : NSObject
{
    struct CGGradient *_CGGradient;
}

+ (id)gradientWithColors:(id)arg1 atLocations:(const double *)arg2;
- (struct CGGradient *)CGGradient;
- (void)dealloc;
- (id)initWithColors:(id)arg1 atLocations:(const double *)arg2;

@end

