//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/NSObject-Protocol.h>

@class NSError, NSHTTPURLResponse, NSURLRequest, NSURLResponse, NSURLSessionConfiguration, RUILoader, RUIObjectModel;

@protocol RUILoaderDelegate <NSObject>
- (void)loader:(RUILoader *)arg1 receivedObjectModel:(RUIObjectModel *)arg2 actionSignal:(int)arg3;
- (void)loader:(RUILoader *)arg1 didFailWithError:(NSError *)arg2;

@optional
- (NSURLSessionConfiguration *)sessionConfigurationForLoader:(RUILoader *)arg1;
- (NSURLRequest *)loader:(RUILoader *)arg1 willLoadRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)loader:(RUILoader *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
@end

