//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSFileHandle, NSUUID;

@protocol UAUserActivityClientResponseProtocol <NSObject>
- (void)tellClientDebuggingEnabled:(_Bool)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)tellClientUserActivityItWasResumed:(NSUUID *)arg1;
- (void)askClientUserActivityToSave:(NSUUID *)arg1 completionHandler:(void (^)(UAUserActivityInfo *, _Bool, NSError *))arg2;
- (void)askClientUserActivityToSave:(NSUUID *)arg1;
@end

