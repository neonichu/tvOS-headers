//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, _UIBackdropView;

@interface SKUIScrollingTabBarBackgroundView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_bottomHairlineView;
    UIView *_topHairlineView;
    _Bool _showsBackdrop;
    _Bool _showsBottomHairline;
    _Bool _showsTopHairline;
    _Bool _usesOpaqueColorForTopHairline;
    NSString *_backdropBarGroupName;
}

@property(nonatomic) _Bool usesOpaqueColorForTopHairline; // @synthesize usesOpaqueColorForTopHairline=_usesOpaqueColorForTopHairline;
@property(nonatomic) _Bool showsTopHairline; // @synthesize showsTopHairline=_showsTopHairline;
@property(nonatomic) _Bool showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property(nonatomic) _Bool showsBackdrop; // @synthesize showsBackdrop=_showsBackdrop;
@property(copy, nonatomic) NSString *backdropBarGroupName; // @synthesize backdropBarGroupName=_backdropBarGroupName;
- (void).cxx_destruct;
- (void)_updateTopHairlineColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end

