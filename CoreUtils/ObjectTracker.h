//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ObjectTracker : NSObject
{
    id _obj;
    unsigned int _flags;
    CDUnknownFunctionPointerType _release_f;
    void *_context;
}

- (void)dealloc;

@end

