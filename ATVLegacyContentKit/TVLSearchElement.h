//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString, TVLHeaderElement;

@interface TVLSearchElement : TVLRootElement
{
    _Bool _showPreview;
    TVLHeaderElement *_header;
    NSString *_baseURL;
}

@property(nonatomic) _Bool showPreview; // @synthesize showPreview=_showPreview;
@property(copy, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) TVLHeaderElement *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;

@end

