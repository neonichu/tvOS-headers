//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface TVTextMetadataView : UIView
{
    NSArray *_metadataItems;
    NSMutableArray *_titleLabels;
    NSMutableArray *_valueLabels;
}

@property(retain, nonatomic) NSMutableArray *valueLabels; // @synthesize valueLabels=_valueLabels;
@property(retain, nonatomic) NSMutableArray *titleLabels; // @synthesize titleLabels=_titleLabels;
@property(copy, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
- (void).cxx_destruct;
- (id)_metadataValueLabel;
- (id)_metadataTitleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

