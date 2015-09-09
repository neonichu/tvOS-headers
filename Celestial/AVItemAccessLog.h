//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Celestial/NSCopying-Protocol.h>

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : NSObject <NSCopying>
{
    AVItemAccessLogInternal *_playerItemAccessLog;
}

@property(readonly, nonatomic) NSArray *events;
- (unsigned long long)extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLogArray:(id)arg1;
- (id)init;

@end

