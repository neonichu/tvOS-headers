//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement;

@interface TVLImagePreviewElement : TVLElement
{
    TVLImageElement *_image;
    NSString *_label;
}

@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) TVLImageElement *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end

