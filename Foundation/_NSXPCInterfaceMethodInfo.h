//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSXPCInterfaceMethodInfo : NSObject
{
    char *_replySignature;
    int _replyPosition;
    NSMutableArray *_replyArguments;
    NSMutableArray *_arguments;
}

@property int replyPosition; // @synthesize replyPosition=_replyPosition;
@property(retain) NSMutableArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSMutableArray *replyArguments; // @synthesize replyArguments=_replyArguments;
- (const char *)replySignature;
- (void)setReplySignature:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

