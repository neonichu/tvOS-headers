//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSSection-Protocol.h>

@class NSString, PRSImage;

@protocol PRSDescriptionSection <PRSSection>
@property(retain, nonatomic) NSString *resultDescription;

@optional
@property(retain, nonatomic) NSString *image_align;
@property(retain, nonatomic) PRSImage *image;
@property(nonatomic) long long description_weight;
@property(nonatomic) long long description_size;
@property(retain, nonatomic) NSString *description_expand_text;
@property(nonatomic) _Bool description_expand;
@property(nonatomic) long long description_maxlines;
@property(nonatomic) long long title_weight;
@property(nonatomic) _Bool title_nowrap;
@property(retain, nonatomic) NSString *title;
@end

