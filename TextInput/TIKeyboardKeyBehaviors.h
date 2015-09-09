//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TIKeyboardKeyBehaviors : NSObject
{
    unsigned long long _spaceKeyBehavior;
    unsigned long long _returnKeyBehavior;
}

+ (id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2;
@property(nonatomic) unsigned long long returnKeyBehavior; // @synthesize returnKeyBehavior=_returnKeyBehavior;
@property(nonatomic) unsigned long long spaceKeyBehavior; // @synthesize spaceKeyBehavior=_spaceKeyBehavior;
- (id)initWithSpaceKeyBehavior:(unsigned long long)arg1 returnKeyBehavior:(unsigned long long)arg2;

@end

