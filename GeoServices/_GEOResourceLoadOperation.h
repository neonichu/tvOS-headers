//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceLoadOperation-Protocol.h>
#import <GeoServices/NSURLConnectionDataDelegate-Protocol.h>

@class NSData, NSMutableData, NSString, NSURL, NSURLConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourceLoadOperation : NSObject <NSURLConnectionDataDelegate, GEOResourceLoadOperation>
{
    NSURL *_url;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLConnection *_conn;
    NSMutableData *_data;
    _Bool _expectsPartialContent;
    NSData *_auditToken;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)dealloc;
- (id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURLString:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

