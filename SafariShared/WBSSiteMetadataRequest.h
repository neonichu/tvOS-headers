//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>

@class NSDictionary, NSURL;

@interface WBSSiteMetadataRequest : NSObject <NSCopying>
{
    NSURL *_url;
    NSDictionary *_extraInfo;
}

@property(readonly, copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (id)init;

@end

