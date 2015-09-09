//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSBaseResult-Protocol.h>

@class NSArray, NSString, NSURL, PRSImage;
@protocol PRSActionButton, PRSAuxiliaryInfo;

@protocol PRSGenericResult <PRSBaseResult>

@optional
@property(retain, nonatomic) NSArray *row_sections;
@property(retain, nonatomic) NSArray *card_sections;
@property(retain, nonatomic) NSURL *card_url;
@property(retain, nonatomic) NSString *card_title;
@property(retain, nonatomic) id <PRSActionButton> action_button;
@property(retain, nonatomic) id <PRSAuxiliaryInfo> auxiliary_info;
@property(retain, nonatomic) NSString *footnote;
@property(retain, nonatomic) PRSImage *secondary_image;
@property(nonatomic) _Bool thumbnail_align_right;
@property(nonatomic) _Bool secondary_title_detached;
@property(retain, nonatomic) NSString *secondary_title;
@property(nonatomic) long long title_maxlines;
@property(nonatomic) _Bool thumbnail_crop_circle;
@property(retain, nonatomic) PRSImage *thumbnail;
@property(retain, nonatomic) NSArray *descriptions;
@end

