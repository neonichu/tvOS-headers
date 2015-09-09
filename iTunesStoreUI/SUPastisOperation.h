//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class AVAssetResourceLoadingRequest, NSURL;

@interface SUPastisOperation : ISOperation
{
    NSURL *_certificateUrl;
    NSURL *_keyUrl;
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(retain, nonatomic) NSURL *keyURL; // @synthesize keyURL=_keyUrl;
@property(retain, nonatomic) NSURL *certificateURL; // @synthesize certificateURL=_certificateUrl;
- (id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id *)arg3;
- (id)_getURIWithError:(id *)arg1;
- (id)_getAppCertWithError:(id *)arg1;
- (void)run;
- (void)dealloc;

@end

