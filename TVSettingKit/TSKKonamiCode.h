//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSKKonamiCode : NSObject
{
    unsigned long long _sequenceIndex;
    NSArray *_sequence;
    SEL _action;
}

+ (id)codeWithSequence:(id)arg1 action:(SEL)arg2;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (void)resetSequence;
- (long long)nextPressType;
- (_Bool)validateSequenceWithNextPressType:(long long)arg1;

@end

