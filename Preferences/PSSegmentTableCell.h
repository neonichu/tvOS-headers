//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSControlTableCell.h>

@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell
{
    NSArray *_values;
    NSDictionary *_titleDict;
}

- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (id)controlValue;
- (void)layoutSubviews;
- (void)setValues:(id)arg1 titleDictionary:(id)arg2;
- (_Bool)canReload;
- (void)setBackgroundView:(id)arg1;
- (id)titleLabel;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

