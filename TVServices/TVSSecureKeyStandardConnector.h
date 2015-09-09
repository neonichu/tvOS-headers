//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/TVSSecureKeyStandardLoaderConnectionHandling-Protocol.h>
#import <TVServices/TVSSecureKeyStandardLoaderRequestGenerating-Protocol.h>

@class NSString;

@interface TVSSecureKeyStandardConnector : NSObject <TVSSecureKeyStandardLoaderRequestGenerating, TVSSecureKeyStandardLoaderConnectionHandling>
{
}

- (void)secureKeyStandardLoader:(id)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isStoreDomainURL:(id)arg1;
- (id)secureKeyStandardLoader:(id)arg1 requestForPostingData:(id)arg2 toURL:(id)arg3;
- (id)secureKeyStandardLoader:(id)arg1 requestForFetchingDataFromURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

