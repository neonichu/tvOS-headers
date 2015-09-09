//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface SKUIArtwork : NSObject <SKUICacheCoding>
{
    long long _height;
    NSURL *_url;
    NSString *_urlString;
    long long _width;
}

@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_lookupDictionary) NSDictionary *_lookupDictionary;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithArtworkDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

