//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DACalDAV/NSObject-Protocol.h>

@class NSArray, NSData, NSString, NSURL;
@protocol CoreDAVAccountInfoProvider;

@protocol CoreDAVLeafDataPayload <NSObject>
@property(readonly, nonatomic) NSString *syncKey;
@property(readonly, nonatomic) NSData *dataPayload;
@property(retain, nonatomic) NSURL *serverID;
- (id)initWithURL:(NSURL *)arg1 eTag:(NSString *)arg2 dataPayload:(NSData *)arg3 inContainerWithURL:(NSURL *)arg4 withAccountInfoProvider:(id <CoreDAVAccountInfoProvider>)arg5;

@optional
@property(readonly, nonatomic) NSArray *childrenOrder;
@end

