//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SplashBoard/NSObject-Protocol.h>

@class NSData, XBSnapshotDataProviderContext;

@protocol XBSnapshotDataProvider <NSObject>
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context;
- (NSData *)fetchImageData:(out struct CGAffineTransform *)arg1;
@end

