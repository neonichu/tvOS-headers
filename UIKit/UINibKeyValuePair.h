//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UINibKeyValuePair : NSObject
{
    id object;
    NSString *keyPath;
    id value;
}

@property(readonly, nonatomic) id value; // @synthesize value;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath;
@property(readonly, nonatomic) id object; // @synthesize object;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyForSimulator;
- (void)apply;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3;

@end

