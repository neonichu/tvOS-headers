//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSStreamDelegate;

@interface NSStream : NSObject
{
}


// Remaining properties
@property id <NSStreamDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSError *streamError; // @dynamic streamError;
@property(readonly) unsigned long long streamStatus; // @dynamic streamStatus;
@end

