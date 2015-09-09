//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData, NSString, NSValue;

@interface AAUIPhotoResponse : AAResponse
{
    NSData *_photoData;
    NSValue *_cropRect;
    NSString *_serverCacheTag;
}

@property(readonly, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
@property(readonly, nonatomic) NSValue *cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) NSData *photoData; // @synthesize photoData=_photoData;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

