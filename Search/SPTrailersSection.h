//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SPSection.h>

#import <Search/PRSTrailersSection-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SPTrailersSection : SPSection <PRSTrailersSection>
{
}


// Remaining properties
@property(retain, nonatomic) NSURL *attribution_url;
@property(nonatomic) _Bool card_padding_bottom;
@property(nonatomic) _Bool card_padding_top;
@property(nonatomic) _Bool hide_divider;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSArray *trailer_sections; // @dynamic trailer_sections;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSURL *url;
@end

