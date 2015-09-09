//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTXMessageParsingBuffer : NSObject
{
    void *_buffer;
    unsigned long long _filled;
    unsigned long long _size;
}

- (unsigned long long)length;
- (const void *)buffer;
- (void)clear;
- (void)appendBytes:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1;

@end

