//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray, NSDictionary, NSString, UIColor;

@interface TVLMediaBadgesElement : TVLElement
{
    _Bool _closedCaption;
    NSString *_audioFormat;
    NSString *_videoFormat;
    NSArray *_urlBadges;
    NSDictionary *_styleKeyValues;
}

@property(retain, nonatomic) NSDictionary *styleKeyValues; // @synthesize styleKeyValues=_styleKeyValues;
@property(retain, nonatomic) NSArray *urlBadges; // @synthesize urlBadges=_urlBadges;
@property(nonatomic) _Bool closedCaption; // @synthesize closedCaption=_closedCaption;
@property(copy, nonatomic) NSString *videoFormat; // @synthesize videoFormat=_videoFormat;
@property(copy, nonatomic) NSString *audioFormat; // @synthesize audioFormat=_audioFormat;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, retain, nonatomic) UIColor *color;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end

