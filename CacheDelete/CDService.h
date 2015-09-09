//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface CDService : NSObject
{
    _Bool _doesPeriodic;
    _Bool _doesPurge;
    _Bool _userAgent;
    _Bool _doNotQuery;
    NSXPCConnection *_xpcConn;
    NSXPCListenerEndpoint *_endpoint;
    NSString *_ID;
    NSSet *_desiredNotifications;
}

@property _Bool doNotQuery; // @synthesize doNotQuery=_doNotQuery;
@property _Bool userAgent; // @synthesize userAgent=_userAgent;
@property _Bool doesPurge; // @synthesize doesPurge=_doesPurge;
@property _Bool doesPeriodic; // @synthesize doesPeriodic=_doesPeriodic;
@property(retain, nonatomic) NSSet *desiredNotifications; // @synthesize desiredNotifications=_desiredNotifications;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSXPCConnection *xpcConn; // @synthesize xpcConn=_xpcConn;
- (void).cxx_destruct;

@end

