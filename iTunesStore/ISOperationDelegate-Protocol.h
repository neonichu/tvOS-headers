//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/NSObject-Protocol.h>

@class ISOperation, NSError, SSOperationProgress;

@protocol ISOperationDelegate <NSObject>

@optional
- (void)operationWillStart:(ISOperation *)arg1;
- (void)operationFinished:(ISOperation *)arg1;
- (void)operation:(ISOperation *)arg1 updatedProgress:(SSOperationProgress *)arg2;
- (void)operation:(ISOperation *)arg1 failedWithError:(NSError *)arg2;
@end

