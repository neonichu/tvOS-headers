//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/NSObject-Protocol.h>

@class TIKeyboardCandidateResultSetCoder;

@protocol TIKeyboardCandidateCoding <NSObject>
+ (int)type;
- (void)encodeWithCandidateResultSetCoder:(TIKeyboardCandidateResultSetCoder *)arg1;
- (id)initWithCandidateResultSetCoder:(TIKeyboardCandidateResultSetCoder *)arg1;
@end
