//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString, NSString;

@interface MFStringAccumulator : NSObject
{
    NSMutableString *_mutable;
    NSString *_immutable;
}

- (id)string;
- (void)appendString:(id)arg1;
- (void)dealloc;

@end

