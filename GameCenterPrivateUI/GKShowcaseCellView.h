//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKHairlineView, UICollectionViewCell;

@interface GKShowcaseCellView : UICollectionReusableView
{
    UICollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
    GKHairlineView *_underlineView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) GKHairlineView *underlineView; // @synthesize underlineView=_underlineView;
@property(nonatomic) SEL touchedShowcaseCellAction; // @synthesize touchedShowcaseCellAction=_touchedShowcaseCellAction;
@property(retain, nonatomic) UICollectionViewCell *cell; // @synthesize cell=_cell;
- (struct CGRect)alignmentRectForText;
- (void)prepareForReuse;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

