//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/PRSSection-Protocol.h>

@class NSArray, NSString, PRSImage;
@protocol PRSActionButton;

@protocol PRSMovieInfoSection <PRSSection>
@property(retain, nonatomic) id <PRSActionButton> action_button;
@property(retain, nonatomic) NSArray *sections;
@property(retain, nonatomic) NSArray *buy_button_sections;
@property(retain, nonatomic) PRSImage *image;
@property(retain, nonatomic) PRSImage *rt_glyph;
@property(retain, nonatomic) NSString *rt_text;
@end

