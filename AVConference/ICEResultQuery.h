//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICEResultQuery : NSObject
{
    unsigned int callID;
    struct tagCONNRESULT *result;
    _Bool isQueryAnswered;
}

@property _Bool isQueryAnswered; // @synthesize isQueryAnswered;
@property unsigned int callID; // @synthesize callID;
- (void)dealloc;
@property struct tagCONNRESULT *result;
- (id)initWithCallID:(unsigned int)arg1;
- (id)initWithResult:(struct tagCONNRESULT *)arg1;

@end

