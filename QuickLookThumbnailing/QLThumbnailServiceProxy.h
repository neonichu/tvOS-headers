//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;
@protocol QLThumbnailsInterface;

@interface QLThumbnailServiceProxy : NSObject
{
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
}

+ (id)interface;
+ (id)sharedInstance;
- (void)askThumbnailAdditionIndex:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end

