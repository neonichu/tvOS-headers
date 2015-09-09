//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IKPlayerStateChangeInfo : NSObject
{
    NSDictionary *_jsonValue;
    long long _state;
    long long _oldState;
}

+ (id)stateNameForState:(long long)arg1;
@property(readonly, nonatomic) long long oldState; // @synthesize oldState=_oldState;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSDictionary *jsonValue; // @synthesize jsonValue=_jsonValue;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(nonatomic) double elapsedTime;
@property(nonatomic) double duration;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2;
- (id)initWithState:(long long)arg1;

@end

