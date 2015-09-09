//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVOrganizerCellView : UIView
{
    NSArray *_components;
    long long _contentVerticalAlignment;
    NSArray *_filteredComponents;
}

@property(readonly, copy, nonatomic) NSArray *filteredComponents; // @synthesize filteredComponents=_filteredComponents;
@property(nonatomic) long long contentVerticalAlignment; // @synthesize contentVerticalAlignment=_contentVerticalAlignment;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (void)_resetSubviews;
- (long long)_alignmentFromView:(id)arg1;
- (void)_addSubview:(id)arg1 maxViewWidth:(double)arg2;
- (struct CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(struct CGSize)arg2;
- (void)_verticallyStackComponents:(id)arg1 alignment:(long long)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

