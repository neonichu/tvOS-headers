//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject
{
    NSOutputStream *_stream;
}

- (_Bool)writeMessage:(id)arg1;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

@end

